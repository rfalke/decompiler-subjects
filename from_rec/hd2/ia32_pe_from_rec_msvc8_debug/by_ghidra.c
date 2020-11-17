typedef unsigned char   undefined;

typedef unsigned long long    GUID;
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

typedef ulonglong ulong64;

typedef unsigned short    wchar16;
typedef longlong long64;

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

typedef wchar_t WCHAR;

typedef char CHAR;

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

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

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

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

typedef CHAR * LPSTR;

typedef struct _TEB _TEB, *P_TEB;

struct _TEB {
};

typedef WCHAR * LPWSTR;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

typedef WCHAR * LPCWSTR;

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
    char pdbname[58];
};

typedef struct _exception _exception, *P_exception;

struct _exception {
    int type;
    char * name;
    double arg1;
    double arg2;
    double retval;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME * LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef int (* FARPROC)(void);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void * LPCVOID;

typedef void * LPVOID;

typedef int BOOL;

typedef HINSTANCE HMODULE;

typedef BOOL * LPBOOL;

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
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_MEM_NOT_CACHED=67108864
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

typedef struct _ACTIVATION_CONTEXT _ACTIVATION_CONTEXT, *P_ACTIVATION_CONTEXT;

struct _ACTIVATION_CONTEXT {
};

typedef struct _PEB _PEB, *P_PEB;

typedef struct _PEB_LDR_DATA _PEB_LDR_DATA, *P_PEB_LDR_DATA;

typedef struct _RTL_USER_PROCESS_PARAMETERS _RTL_USER_PROCESS_PARAMETERS, *P_RTL_USER_PROCESS_PARAMETERS;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _PEB_FREE_BLOCK _PEB_FREE_BLOCK, *P_PEB_FREE_BLOCK;


// WARNING! conflicting data type names: /subject.pdb/_LARGE_INTEGER - /winnt.h/_LARGE_INTEGER

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef struct _UNICODE_STRING _UNICODE_STRING, *P_UNICODE_STRING;

typedef struct _ACTIVATION_CONTEXT_DATA _ACTIVATION_CONTEXT_DATA, *P_ACTIVATION_CONTEXT_DATA;

typedef struct _ASSEMBLY_STORAGE_MAP _ASSEMBLY_STORAGE_MAP, *P_ASSEMBLY_STORAGE_MAP;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _ULARGE_INTEGER_s_0 _ULARGE_INTEGER_s_0, *P_ULARGE_INTEGER_s_0;

typedef struct <unnamed-tag_000011D4> <unnamed-tag_000011D4>, *P<unnamed-tag_000011D4>;

struct _ACTIVATION_CONTEXT_DATA {
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * Flink;
    struct _LIST_ENTRY * Blink;
};

struct _ULARGE_INTEGER_s_0 {
    ulong LowPart;
    ulong HighPart;
};

struct <unnamed-tag_000011D4> {
    ulong LowPart;
    ulong HighPart;
};

union _ULARGE_INTEGER {
    struct _ULARGE_INTEGER_s_0 _s_0;
    struct <unnamed-tag_000011D4> u;
    ulong64 QuadPart;
};

struct _UNICODE_STRING {
    ushort Length;
    ushort MaximumLength;
    ushort * Buffer;
};

struct _PEB {
    uchar InheritedAddressSpace;
    uchar ReadImageFileExecOptions;
    uchar BeingDebugged;
    uchar SpareBool;
    void * Mutant;
    void * ImageBaseAddress;
    struct _PEB_LDR_DATA * Ldr;
    struct _RTL_USER_PROCESS_PARAMETERS * ProcessParameters;
    void * SubSystemData;
    void * ProcessHeap;
    struct _RTL_CRITICAL_SECTION * FastPebLock;
    void * SparePtr1;
    void * SparePtr2;
    ulong EnvironmentUpdateCount;
    void * KernelCallbackTable;
    ulong SystemReserved[1];
    ulong ExecuteOptions:2;
    ulong SpareBits:30;
    struct _PEB_FREE_BLOCK * FreeList;
    ulong TlsExpansionCounter;
    void * TlsBitmap;
    ulong TlsBitmapBits[2];
    void * ReadOnlySharedMemoryBase;
    void * ReadOnlySharedMemoryHeap;
    void * * ReadOnlyStaticServerData;
    void * AnsiCodePageData;
    void * OemCodePageData;
    void * UnicodeCaseTableData;
    ulong NumberOfProcessors;
    ulong NtGlobalFlag;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    union _LARGE_INTEGER CriticalSectionTimeout;
    ulong HeapSegmentReserve;
    ulong HeapSegmentCommit;
    ulong HeapDeCommitTotalFreeThreshold;
    ulong HeapDeCommitFreeBlockThreshold;
    ulong NumberOfHeaps;
    ulong MaximumNumberOfHeaps;
    void * * ProcessHeaps;
    void * GdiSharedHandleTable;
    void * ProcessStarterHelper;
    ulong GdiDCAttributeList;
    struct _RTL_CRITICAL_SECTION * LoaderLock;
    ulong OSMajorVersion;
    ulong OSMinorVersion;
    ushort OSBuildNumber;
    ushort OSCSDVersion;
    ulong OSPlatformId;
    ulong ImageSubsystem;
    ulong ImageSubsystemMajorVersion;
    ulong ImageSubsystemMinorVersion;
    ulong ImageProcessAffinityMask;
    ulong GdiHandleBuffer[34];
    void (* PostProcessInitRoutine)(void);
    void * TlsExpansionBitmap;
    ulong TlsExpansionBitmapBits[32];
    ulong SessionId;
    union _ULARGE_INTEGER AppCompatFlags;
    union _ULARGE_INTEGER AppCompatFlagsUser;
    void * pShimData;
    void * AppCompatInfo;
    struct _UNICODE_STRING CSDVersion;
    struct _ACTIVATION_CONTEXT_DATA * ActivationContextData;
    struct _ASSEMBLY_STORAGE_MAP * ProcessAssemblyStorageMap;
    struct _ACTIVATION_CONTEXT_DATA * SystemDefaultActivationContextData;
    struct _ASSEMBLY_STORAGE_MAP * SystemAssemblyStorageMap;
    ulong MinimumStackCommit;
    void * * FlsCallback;
    struct _LIST_ENTRY FlsListHead;
    void * FlsBitmap;
    ulong FlsBitmapBits[4];
    ulong FlsHighIndex;
};

struct _PEB_FREE_BLOCK {
    struct _PEB_FREE_BLOCK * Next;
    ulong Size;
};

struct _PEB_LDR_DATA {
    ulong Length;
    uchar Initialized;
    void * SsHandle;
    struct _LIST_ENTRY InLoadOrderModuleList;
    struct _LIST_ENTRY InMemoryOrderModuleList;
    struct _LIST_ENTRY InInitializationOrderModuleList;
    void * EntryInProgress;
};

struct _RTL_USER_PROCESS_PARAMETERS {
};

struct _RTL_CRITICAL_SECTION {
};

struct _ASSEMBLY_STORAGE_MAP {
};

typedef struct SrcHeaderW SrcHeaderW, *PSrcHeaderW;

typedef union SrcHeaderW_u_17 SrcHeaderW_u_17, *PSrcHeaderW_u_17;

typedef struct SrcHeaderW_u_17_s_1 SrcHeaderW_u_17_s_1, *PSrcHeaderW_u_17_s_1;

struct SrcHeaderW_u_17_s_1 {
    uchar fVirtual:1;
    uchar pad:7;
};

union SrcHeaderW_u_17 {
    uchar grFlags;
    struct SrcHeaderW_u_17_s_1 _s_1;
};

struct SrcHeaderW {
    ulong cb;
    ulong ver;
    ulong sig;
    ulong cbSource;
    uchar srccompress;
    union SrcHeaderW_u_17 field_0x11;
    wchar_t szNames[1];
};

typedef struct LinkInfoW LinkInfoW, *PLinkInfoW;

struct LinkInfoW {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    undefined field_0x4;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
    undefined field_0x8;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
    undefined field_0xc;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    undefined field_0x10;
    undefined field_0x11;
    undefined field_0x12;
    undefined field_0x13;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

typedef struct LIST_ENTRY32 LIST_ENTRY32, *PLIST_ENTRY32;

struct LIST_ENTRY32 {
    ulong Flink;
    ulong Blink;
};

typedef int (* _PIFV)(void);

typedef struct Src Src, *PSrc;

struct Src {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct _TP_CLEANUP_GROUP _TP_CLEANUP_GROUP, *P_TP_CLEANUP_GROUP;

struct _TP_CLEANUP_GROUP {
};

typedef struct SrcHeader SrcHeader, *PSrcHeader;

typedef struct SrcHeader * PCSrcHeader;

typedef union SrcHeader_u_17 SrcHeader_u_17, *PSrcHeader_u_17;

typedef struct SrcHeader_u_17_s_1 SrcHeader_u_17_s_1, *PSrcHeader_u_17_s_1;

struct SrcHeader_u_17_s_1 {
    uchar fVirtual:1;
    uchar pad:7;
};

union SrcHeader_u_17 {
    uchar grFlags;
    struct SrcHeader_u_17_s_1 _s_1;
};

struct SrcHeader {
    ulong cb;
    ulong ver;
    ulong sig;
    ulong cbSource;
    uchar srccompress;
    union SrcHeader_u_17 field_0x11;
    uchar szNames[1];
};

typedef int (* _RTC_error_fn)(int, char *, int, char *, char *);

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

typedef struct _s_CatchableTypeArray _s_CatchableTypeArray, *P_s_CatchableTypeArray;

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct PMD PMD, *PPMD;

struct _s_ThrowInfo {
    uint attributes;
    void (* pmfnUnwind)(void);
    int (* pForwardCompat)(void);
    struct _s_CatchableTypeArray * pCatchableTypeArray;
};

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s_CatchableType {
    uint properties;
    struct TypeDescriptor * pType;
    struct PMD thisDisplacement;
    int sizeOrOffset;
    void (* copyFunction)(void);
};

struct TypeDescriptor {
    ulong hash;
    void * spare;
    char[0] name;
};

struct _s_CatchableTypeArray {
    int nCatchableTypes;
    struct _s_CatchableType *[0] arrayOfCatchableTypes;
};

typedef enum ReplacesCorHdrNumericDefines.conflict {
    IMAGE_COR_MIH_BASICBLOCK=8,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE=255,
    COR_VTABLE_64BIT=2,
    COMIMAGE_FLAGS_ILONLY=1,
    COMIMAGE_FLAGS_32BITREQUIRED=2,
    MAX_CLASS_NAME=1024,
    IMAGE_COR_MIH_METHODRVA=1,
    NATIVE_TYPE_MAX_CB=1,
    MAX_PACKAGE_NAME=1024,
    COR_DELETED_NAME_LENGTH=8,
    COR_VERSION_MINOR=0,
    COR_VTABLEGAP_NAME_LENGTH=8,
    COR_VTABLE_FROM_UNMANAGED=4,
    COMIMAGE_FLAGS_TRACKDEBUGDATA=65536,
    COR_VERSION_MAJOR_V2=2,
    COMIMAGE_FLAGS_IL_LIBRARY=4,
    COMIMAGE_FLAGS_STRONGNAMESIGNED=8,
    IMAGE_COR_EATJ_THUNK_SIZE=32,
    IMAGE_COR_MIH_EHRVA=2,
    COR_VTABLE_32BIT=1,
    COR_VERSION_MAJOR=2,
    COR_VTABLE_CALL_MOST_DERIVED=16
} ReplacesCorHdrNumericDefines.conflict;

typedef struct FormatStringAttribute FormatStringAttribute, *PFormatStringAttribute;

struct FormatStringAttribute {
    wchar_t * Style;
    wchar_t * UnformattedAlternative;
};


// WARNING! conflicting data type names: /subject.pdb/HMODULE - /WinDef.h/HMODULE

typedef struct _TP_CALLBACK_INSTANCE _TP_CALLBACK_INSTANCE, *P_TP_CALLBACK_INSTANCE;

struct _TP_CALLBACK_INSTANCE {
};

typedef struct _IMAGE_OPTIONAL_HEADER _IMAGE_OPTIONAL_HEADER, *P_IMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_OPTIONAL_HEADER * PIMAGE_OPTIONAL_HEADER;

typedef struct _IMAGE_DATA_DIRECTORY _IMAGE_DATA_DIRECTORY, *P_IMAGE_DATA_DIRECTORY;

struct _IMAGE_DATA_DIRECTORY {
    ulong VirtualAddress;
    ulong Size;
};

struct _IMAGE_OPTIONAL_HEADER {
    ushort Magic;
    uchar MajorLinkerVersion;
    uchar MinorLinkerVersion;
    ulong SizeOfCode;
    ulong SizeOfInitializedData;
    ulong SizeOfUninitializedData;
    ulong AddressOfEntryPoint;
    ulong BaseOfCode;
    ulong BaseOfData;
    ulong ImageBase;
    ulong SectionAlignment;
    ulong FileAlignment;
    ushort MajorOperatingSystemVersion;
    ushort MinorOperatingSystemVersion;
    ushort MajorImageVersion;
    ushort MinorImageVersion;
    ushort MajorSubsystemVersion;
    ushort MinorSubsystemVersion;
    ulong Win32VersionValue;
    ulong SizeOfImage;
    ulong SizeOfHeaders;
    ulong CheckSum;
    ushort Subsystem;
    ushort DllCharacteristics;
    ulong SizeOfStackReserve;
    ulong SizeOfStackCommit;
    ulong SizeOfHeapReserve;
    ulong SizeOfHeapCommit;
    ulong LoaderFlags;
    ulong NumberOfRvaAndSizes;
    struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct EnumThunk EnumThunk, *PEnumThunk;

struct EnumThunk {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef int ptrdiff_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct tagLC_ID tagLC_ID, *PtagLC_ID;

typedef struct <unnamed-type-lc_category> <unnamed-type-lc_category>, *P<unnamed-type-lc_category>;

typedef struct lconv lconv, *Plconv;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct lconv {
};

struct <unnamed-type-lc_category> {
    char * locale;
    wchar_t * wlocale;
    int * refcount;
    int * wrefcount;
};

struct tagLC_ID {
    ushort wLanguage;
    ushort wCountry;
    ushort wCodePage;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    ulong lc_handle[6];
    struct tagLC_ID lc_id[6];
    struct <unnamed-type-lc_category> lc_category[6];
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
};

struct __lc_time_data {
};

typedef struct EnumLines EnumLines, *PEnumLines;

struct EnumLines {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef enum PDBIMPV {
    PDBImpvVC50=19960307,
    PDBImpvVC41=19950814,
    PDBImpvVC98=19970604,
    PDBImpv=20030901,
    PDBImpvVC4=19950623,
    PDBImpvVC70Dep=19990604,
    PDBImpvVC2=19941610,
    PDBImpvVC80=20030901,
    PDBImpvVC70=20000404
} PDBIMPV;

typedef ulong TP_VERSION;

typedef struct _IMAGE_OPTIONAL_HEADER64 _IMAGE_OPTIONAL_HEADER64, *P_IMAGE_OPTIONAL_HEADER64;

struct _IMAGE_OPTIONAL_HEADER64 {
    ushort Magic;
    uchar MajorLinkerVersion;
    uchar MinorLinkerVersion;
    ulong SizeOfCode;
    ulong SizeOfInitializedData;
    ulong SizeOfUninitializedData;
    ulong AddressOfEntryPoint;
    ulong BaseOfCode;
    ulong64 ImageBase;
    ulong SectionAlignment;
    ulong FileAlignment;
    ushort MajorOperatingSystemVersion;
    ushort MinorOperatingSystemVersion;
    ushort MajorImageVersion;
    ushort MinorImageVersion;
    ushort MajorSubsystemVersion;
    ushort MinorSubsystemVersion;
    ulong Win32VersionValue;
    ulong SizeOfImage;
    ulong SizeOfHeaders;
    ulong CheckSum;
    ushort Subsystem;
    ushort DllCharacteristics;
    ulong64 SizeOfStackReserve;
    ulong64 SizeOfStackCommit;
    ulong64 SizeOfHeapReserve;
    ulong64 SizeOfHeapCommit;
    ulong LoaderFlags;
    ulong NumberOfRvaAndSizes;
    struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME _RTL_ACTIVATION_CONTEXT_STACK_FRAME, *P_RTL_ACTIVATION_CONTEXT_STACK_FRAME;

struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
};


// WARNING! conflicting data type names: /subject.pdb/_CONTEXT - /excpt.h/_CONTEXT

typedef struct TPI TPI, *PTPI;

struct TPI {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};


// WARNING! conflicting data type names: /subject.pdb/FARPROC - /WinDef.h/FARPROC


// WARNING! conflicting data type names: /subject.pdb/LPCSTR - /winnt.h/LPCSTR

typedef char * LPCTSTR;

typedef struct _TP_POOL _TP_POOL, *P_TP_POOL;

struct _TP_POOL {
};

typedef struct _TP_CALLBACK_ENVIRON _TP_CALLBACK_ENVIRON, *P_TP_CALLBACK_ENVIRON;

typedef union <unnamed-type-u> <unnamed-type-u>, *P<unnamed-type-u>;

typedef struct <unnamed-type-s> <unnamed-type-s>, *P<unnamed-type-s>;

struct <unnamed-type-s> {
    ulong LongFunction:1;
    ulong Private:31;
};

union <unnamed-type-u> {
    ulong Flags;
    struct <unnamed-type-s> s;
};

struct _TP_CALLBACK_ENVIRON {
    ulong Version;
    struct _TP_POOL * Pool;
    struct _TP_CLEANUP_GROUP * CleanupGroup;
    void (* CleanupGroupCancelCallback)(void *, void *);
    void * RaceDll;
    struct _ACTIVATION_CONTEXT * ActivationContext;
    void (* FinalizationCallback)(struct _TP_CALLBACK_INSTANCE *, void *);
    union <unnamed-type-u> u;
};

typedef ulong64 ULONG64;


// WARNING! conflicting data type names: /subject.pdb/_exception - /math.h/_exception

typedef enum <unnamed-tag_00001255> {
    wtiSymsNB09=0,
    wtiSymsNB10=1
} <unnamed-tag_00001255>;

typedef enum DOVC {
} DOVC;


// WARNING! conflicting data type names: /subject.pdb/LPBOOL - /WinDef.h/LPBOOL


// WARNING! conflicting data type names: /subject.pdb/_EXCEPTION_RECORD - /excpt.h/_EXCEPTION_RECORD

typedef struct LinkInfo LinkInfo, *PLinkInfo;

struct LinkInfo {
    ulong cb;
    ulong ver;
    ulong offszCwd;
    ulong offszCommand;
    ulong ichOutfile;
    ulong offszLibs;
};


// WARNING! conflicting data type names: /subject.pdb/_TEB - /winnt.h/_TEB

typedef ulong ACCESS_MASK;

typedef long64 time_t;

typedef struct _TP_CLEANUP_GROUP * PTP_CLEANUP_GROUP;

typedef enum __enative_startup_state {
    __uninitialized=0,
    __initializing=1,
    __initialized=2
} __enative_startup_state;

typedef ushort _ino_t;

typedef ulong ULONG;

typedef wchar_t * PUWSTR;

typedef struct SYMTYPE SYMTYPE, *PSYMTYPE;

struct SYMTYPE {
    ushort reclen;
    ushort rectyp;
    char[0] data;
};

typedef void (* PTP_CLEANUP_GROUP_CANCEL_CALLBACK)(void *, void *);

typedef ushort USHORT;

typedef int (* WSPRINTF_FP)(char *, char *);

typedef long EC;

typedef char * va_list;


// WARNING! conflicting data type names: /subject.pdb/PIMAGE_SECTION_HEADER - /winnt.h/PIMAGE_SECTION_HEADER

typedef struct _RTC_vardesc _RTC_vardesc, *P_RTC_vardesc;

struct _RTC_vardesc {
    int addr;
    int size;
    char * name;
};

typedef void (* PTP_SIMPLE_CALLBACK)(struct _TP_CALLBACK_INSTANCE *, void *);

typedef struct <unnamed-tag_00001187> <unnamed-tag_00001187>, *P<unnamed-tag_00001187>;

struct <unnamed-tag_00001187> {
    ulong LowPart;
    long HighPart;
};

typedef struct CV_Column_t CV_Column_t, *PCV_Column_t;

struct CV_Column_t {
    ushort offColumnStart;
    ushort offColumnEnd;
};

typedef struct _RTC_ALLOCA_NODE _RTC_ALLOCA_NODE, *P_RTC_ALLOCA_NODE;

struct _RTC_ALLOCA_NODE {
    int guard1;
    struct _RTC_ALLOCA_NODE * next;
    int dummypad;
    uint allocaSize;
    int dummypad2;
    int guard2[3];
};

typedef ulong SIG;

typedef enum PCC {
} PCC;


// WARNING! conflicting data type names: /subject.pdb/_FLOATING_SAVE_AREA - /winnt.h/_FLOATING_SAVE_AREA

typedef struct _NT_TIB _NT_TIB, *P_NT_TIB;

typedef struct _EXCEPTION_REGISTRATION_RECORD _EXCEPTION_REGISTRATION_RECORD, *P_EXCEPTION_REGISTRATION_RECORD;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3,
    ExceptionContinueExecution=0
} _EXCEPTION_DISPOSITION;

typedef union _NT_TIB_u_16 _NT_TIB_u_16, *P_NT_TIB_u_16;

union _NT_TIB_u_16 {
    void * FiberData;
    ulong Version;
};

struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD * ExceptionList;
    void * StackBase;
    void * StackLimit;
    void * SubSystemTib;
    union _NT_TIB_u_16 field_0x10;
    void * ArbitraryUserPointer;
    struct _NT_TIB * Self;
};

struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD * Next;
    _EXCEPTION_DISPOSITION (* Handler)(struct _EXCEPTION_RECORD *, void *, struct _CONTEXT *, void *);
};

typedef struct SrcHeaderOut SrcHeaderOut, *PSrcHeaderOut;

typedef struct SrcHeaderOut * PCSrcHeaderOut;

typedef union SrcHeaderOut_u_29 SrcHeaderOut_u_29, *PSrcHeaderOut_u_29;

typedef union SrcHeaderOut_u_32 SrcHeaderOut_u_32, *PSrcHeaderOut_u_32;

typedef struct SrcHeaderOut_u_29_s_1 SrcHeaderOut_u_29_s_1, *PSrcHeaderOut_u_29_s_1;

struct SrcHeaderOut_u_29_s_1 {
    uchar fVirtual:1;
    uchar pad:7;
};

union SrcHeaderOut_u_29 {
    uchar grFlags;
    struct SrcHeaderOut_u_29_s_1 _s_1;
};

union SrcHeaderOut_u_32 {
    void * pvReserved1;
    long64 pv64Reserved2;
};

struct SrcHeaderOut {
    ulong cb;
    ulong ver;
    ulong sig;
    ulong cbSource;
    ulong niFile;
    ulong niObj;
    ulong niVirt;
    uchar srccompress;
    union SrcHeaderOut_u_29 field_0x1d;
    short sPad;
    union SrcHeaderOut_u_32 field_0x20;
};


// WARNING! conflicting data type names: /subject.pdb/LPTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/LPTOP_LEVEL_EXCEPTION_FILTER

typedef struct IStream IStream, *PIStream;

struct IStream {
};

typedef enum SYM_ENUM_e {
    S_PROCREF_ST=1024,
    S_OBJNAME_ST=9,
    S_WITH32=4356,
    S_MANYREG2=4375,
    S_REGISTER_ST=4097,
    S_LPROCIA64_ST=4117,
    S_UDT=4360,
    S_RESERVED2=4125,
    S_RESERVED3=4126,
    S_ST_MAX=4352,
    S_DATAREF=4390,
    S_EXPORT=4408,
    S_LABEL32_ST=521,
    S_RESERVED1=4124,
    S_GPROC32_ST=4107,
    S_MANFRAMEREL=4382,
    S_MANSLOT=4384,
    S_CEXMODEL16=266,
    S_CONSTANT=4359,
    S_THUNK32_ST=518,
    S_COMPILE=1,
    S_GMANDATA=4381,
    S_REGREL32_16t=524,
    S_CALLSITEINFO=4409,
    S_LPROC16=260,
    S_LMANDATA=4380,
    S_BLOCK16=263,
    S_LOCALSLOT_ST=4119,
    S_SECTION=4406,
    S_CONSTANT_16t=3,
    S_LPROCREF_ST=1027,
    S_ANNOTATION=4121,
    S_THUNK32=4354,
    S_LPROCMIPS=4372,
    S_COMPILE2_ST=4115,
    S_DEFRANGE2=4405,
    S_RESERVED4=4127,
    S_COBOLUDT=4361,
    S_ATTR_MANYREG=4401,
    S_GDATA16=258,
    S_LDATA32=4364,
    S_PARAMSLOT_ST=4120,
    S_BLOCK32_ST=519,
    S_LPROCMIPS_ST=4112,
    S_SSEARCH=5,
    S_ATTR_REGISTER=4399,
    S_SLINK32=527,
    S_FRAMEPROC=4114,
    S_ATTR_FRAMEREL=4398,
    S_REGREL32=4369,
    S_CONSTANT_ST=4098,
    S_PUB32=4366,
    S_GPROCMIPS_16t=769,
    S_LPROC32_ST=4106,
    S_MANTYPREF=4136,
    S_LOCAL=4403,
    S_GMANPROC_ST=4122,
    S_REGISTER_16t=2,
    S_GDATA32_ST=4104,
    S_LPROCMIPS_16t=768,
    S_MANSLOT_ST=4132,
    S_OBJNAME=4353,
    S_MANMANYREG2_ST=4135,
    S_BPREL32=4363,
    S_RECTYPE_LAST=4413,
    S_TRAMPOLINE=4396,
    S_WITH32_ST=520,
    S_GPROCIA64_ST=4118,
    S_MANMANYREG_ST=4133,
    S_UNAMESPACE=4388,
    S_COBOLUDT_16t=11,
    S_LMANPROC_ST=4123,
    S_SLOT=4378,
    S_PROCREF=4389,
    S_LOCALSLOT=4378,
    S_THUNK16=262,
    S_MANMANYREG2=4387,
    S_UDT_16t=4,
    S_MANREGREL_ST=4134,
    S_GPROCMIPS=4373,
    S_END=6,
    S_LDATA16=257,
    S_BPREL32_16t=512,
    S_TOKENREF=4393,
    S_FRAMECOOKIE=4410,
    S_MANREGREL=4386,
    S_LTHREAD32=4370,
    S_PUB32_ST=4105,
    S_ALIGN=1026,
    S_MANFRAMEREL_ST=4130,
    S_LABEL32=4357,
    S_COFFGROUP=4407,
    S_VFTABLE16=267,
    S_RECTYPE_MAX=4414,
    S_PUB16=259,
    S_GPROCMIPS_ST=4113,
    S_LDATA32_ST=4103,
    S_MANCONSTANT=4397,
    S_GMANDATA_ST=4129,
    S_MANMANYREG=4385,
    S_MANREGISTER_ST=4131,
    S_ANNOTATIONREF=4392,
    S_UNAMESPACE_ST=4137,
    S_SEPCODE=4402,
    S_MANYREG=4362,
    S_GPROC32=4368,
    S_GMANPROC=4394,
    S_LPROC32_16t=516,
    S_GPROCIA64=4377,
    S_VFTABLE32_16t=523,
    S_GTHREAD32=4371,
    S_LMANPROC=4395,
    S_LPROCREF=4391,
    S_COBOLUDT_ST=4100,
    S_PUB32_16t=515,
    S_ENDARG=10,
    S_MANYREG2_ST=4116,
    S_BPREL16=256,
    S_BPREL32_ST=4102,
    S_RECTYPE_PAD=4670,
    S_REGISTER=4358,
    S_GTHREAD32_ST=4111,
    S_ENVBLOCK=4413,
    S_VFTABLE32=4108,
    S_MANREGISTER=4383,
    S_WITH16=264,
    S_UDT_ST=4099,
    S_REGREL32_ST=4109,
    S_DATAREF_ST=1025,
    S_LTHREAD32_16t=525,
    S_TI16_MAX=4096,
    S_LABEL16=265,
    S_LMANDATA_ST=4128,
    S_RETURN=13,
    S_DISCARDED=4411,
    S_GPROC16=261,
    S_GTHREAD32_16t=526,
    S_LPROC32=4367,
    S_GDATA32_16t=514,
    S_ATTR_REGREL=4400,
    S_LDATA32_16t=513,
    S_BLOCK32=4355,
    S_GPROC32_16t=517,
    S_SKIP=7,
    S_CEXMODEL32=522,
    S_DEFRANGE=4404,
    S_LTHREAD32_ST=4110,
    S_MANYREG_16t=12,
    S_COMPILE3=4412,
    S_COMPILE2=4374,
    S_OEM=1028,
    S_MANYREG_ST=4101,
    S_CVRESERVE=8,
    S_REGREL16=268,
    S_GDATA32=4365,
    S_LPROCIA64=4376,
    S_PARAMSLOT=4379,
    S_ENTRYTHIS=14
} SYM_ENUM_e;

typedef enum POVC {
} POVC;

typedef enum EXCEPTION_DEBUGGER_ENUM {
    EXCEPTION_DEBUGGER_HANDLECHECK=4100,
    EXCEPTION_DEBUGGER_MAX=4100,
    EXCEPTION_DEBUGGER_RUNTIMECHECK=4098,
    EXCEPTION_DEBUGGER_FIBER=4099,
    EXCEPTION_DEBUGGER_PROBE=4097,
    EXCEPTION_DEBUGGER_NAME_THREAD=4096
} EXCEPTION_DEBUGGER_ENUM;

typedef long _off_t;

typedef union FT FT, *PFT;


// WARNING! conflicting data type names: /subject.pdb/_FILETIME - /WinDef.h/_FILETIME

union FT {
    ulong64 ft_scalar;
    struct _FILETIME ft_struct;
};

typedef struct PDB PDB, *PPDB;

struct PDB {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};


// WARNING! conflicting data type names: /subject.pdb/_IMAGE_SECTION_HEADER - /winnt.h/_IMAGE_SECTION_HEADER

typedef struct HKEY__ * HKEY;

typedef struct GSI GSI, *PGSI;

struct GSI {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};


// WARNING! conflicting data type names: /subject.pdb/wchar_t - /wchar_t

typedef ulong AGE;

typedef uchar ITSM;

typedef struct Enum Enum, *PEnum;

struct Enum {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef struct _IMAGE_DOS_HEADER _IMAGE_DOS_HEADER, *P_IMAGE_DOS_HEADER;

struct _IMAGE_DOS_HEADER {
    ushort e_magic;
    ushort e_cblp;
    ushort e_cp;
    ushort e_crlc;
    ushort e_cparhdr;
    ushort e_minalloc;
    ushort e_maxalloc;
    ushort e_ss;
    ushort e_sp;
    ushort e_csum;
    ushort e_ip;
    ushort e_cs;
    ushort e_lfarlc;
    ushort e_ovno;
    ushort e_res[4];
    ushort e_oemid;
    ushort e_oeminfo;
    ushort e_res2[10];
    long e_lfanew;
};

typedef enum SA_YesNoMaybe {
    SA_No=268369921,
    SA_Yes=268370176,
    SA_Maybe=268369936
} SA_YesNoMaybe;

typedef struct _TEB_ACTIVE_FRAME_CONTEXT _TEB_ACTIVE_FRAME_CONTEXT, *P_TEB_ACTIVE_FRAME_CONTEXT;

struct _TEB_ACTIVE_FRAME_CONTEXT {
    ulong Flags;
    char * FrameName;
};

typedef ulong LCID;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

struct threadmbcinfostruct {
};

typedef struct _TEB_ACTIVE_FRAME _TEB_ACTIVE_FRAME, *P_TEB_ACTIVE_FRAME;

typedef struct _TEB_ACTIVE_FRAME * PTEB_ACTIVE_FRAME;

struct _TEB_ACTIVE_FRAME {
    ulong Flags;
    struct _TEB_ACTIVE_FRAME * Previous;
    struct _TEB_ACTIVE_FRAME_CONTEXT * Context;
};

typedef int (* PDBCOPYCALLBACK)(void);

typedef struct CV_Line_t CV_Line_t, *PCV_Line_t;

struct CV_Line_t {
    ulong offset;
    ulong linenumStart:24;
    ulong deltaLineEnd:7;
    ulong fStatement:1;
};

typedef void (* PIMAGE_TLS_CALLBACK)(void *, ulong, void *);

typedef wchar_t * PCUWSTR;


// WARNING! conflicting data type names: /subject.pdb/PEXCEPTION_RECORD - /winnt.h/PEXCEPTION_RECORD

typedef union __m128 __m128, *P__m128;

union __m128 {
    float m128_f32[4];
    ulong64 m128_u64[2];
    char m128_i8[16];
    short m128_i16[8];
    int m128_i32[4];
    long64 m128_i64[2];
    uchar m128_u8[16];
    ushort m128_u16[8];
    uint m128_u32[4];
};

typedef ulong CV_typ_t;

typedef ulong REGSAM;

typedef enum PDBErrors {
    EC_INVALID_EXECUTABLE=17,
    EC_CACHE_FULL=26,
    EC_USAGE=1,
    EC_INVALID_AGE=6,
    EC_ILLEGAL_TYPE_EDIT=16,
    EC_NOT_FOUND=4,
    EC_OUT_OF_MEMORY=2,
    EC_PRECOMP_REQUIRED=7,
    EC_LIMIT=12,
    EC_V1_PDB=10,
    EC_UNKNOWN=24,
    EC_TI16=14,
    EC_INVALID_EXE_TIMESTAMP=20,
    EC_DEBUG_INFO_NOT_IN_PDB=22,
    EC_ACCESS_DENIED=15,
    EC_FILE_SYSTEM=3,
    EC_OUT_OF_TI=8,
    EC_DBG_NOT_FOUND=18,
    EC_OK=0,
    EC_CORRUPT=13,
    EC_BAD_CACHE_PATH=25,
    EC_NO_DEBUG_INFO=19,
    EC_CORRUPT_TYPEPOOL=21,
    EC_NOT_IMPLEMENTED=9,
    EC_MAX=28,
    EC_UNKNOWN_FORMAT=10,
    EC_FORMAT=11,
    EC_INVALID_SIG=5,
    EC_RPC=23,
    EC_TOO_MANY_MOD_ADDTYPE=27
} PDBErrors;


// WARNING! conflicting data type names: /subject.pdb/_iobuf - /mbstring.h/_iobuf

typedef struct IPDBError IPDBError, *PIPDBError;

struct IPDBError {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef enum SA_AttrTarget {
    SA_Struct=8,
    SA_Module=2,
    SA_Parameter=2048,
    SA_Method=64,
    SA_All=65535,
    SA_Class=4,
    SA_ReturnValue=8192,
    SA_GenericParameter=16384,
    SA_Delegate=4096,
    SA_Field=256,
    SA_Enum=16,
    SA_Interface=1024,
    SA_Constructor=32,
    SA_This=32768,
    SA_Assembly=1,
    SA_Event=512,
    SA_Property=128
} SA_AttrTarget;

typedef enum CV_HREG_e {
    CV_IA64_StIFA=4116,
    CV_IA64_Umask=1017,
    CV_PPC_HID8=1116,
    CV_IA64_P13=717,
    CV_PPC_HID7=1115,
    CV_IA64_P12=716,
    CV_IA64_P15=719,
    CV_PPC_HID9=1117,
    CV_IA64_P14=718,
    CV_PPC_HID4=1112,
    CV_PPC_HID3=1111,
    CV_ALLREG_PARAMS=30008,
    CV_PPC_HID6=1114,
    CV_IA64_P11=715,
    CV_R68_SCC=59,
    CV_PPC_HID5=1113,
    CV_IA64_P10=714,
    CV_IA64_StIFS=4119,
    CV_PPC_HID0=1108,
    CV_PPC_HID2=1110,
    CV_PPC_HID1=1109,
    CV_IA64_P17=721,
    CV_IA64_P16=720,
    CV_IA64_P19=723,
    CV_IA64_P18=722,
    CV_IA64_P24=728,
    CV_IA64_P23=727,
    CV_IA64_P26=730,
    CV_IA64_P25=729,
    CV_IA64_P20=724,
    CV_IA64_P22=726,
    CV_IA64_P21=725,
    CV_IA64_P28=732,
    CV_IA64_P27=731,
    CV_IA64_P29=733,
    CV_M32R_CBR=27,
    CV_TRI_EXEVT=73,
    CV_ALLREG_EFAD1=30003,
    CV_ALLREG_EFAD2=30004,
    CV_ALLREG_EFAD3=30005,
    CV_PPC_PVR=287,
    CV_R68_BAC2=74,
    CV_R68_BAC1=73,
    CV_R68_BAC4=76,
    CV_R68_BAC3=75,
    CV_R68_BAC0=72,
    CV_R68_BAC6=78,
    CV_R68_BAC5=77,
    CV_R68_BAC7=79,
    CV_PPC_SR10=86,
    CV_PPC_SR11=87,
    CV_PPC_SR14=90,
    CV_PPC_SR15=91,
    CV_PPC_SR12=88,
    CV_PPC_SR13=89,
    CV_IA64_SSD=3098,
    CV_AMD64_MM71=251,
    CV_AMD64_MM70=250,
    CV_PPC_COMPARE=110,
    CV_PPC_DAR=119,
    CV_IA64_ApEC=3138,
    CV_IA64_StIHA=4121,
    CV_IA64_StIIM=4120,
    CV_AMD64_IDTL=113,
    CV_AMD64_IDTR=112,
    CV_PPC_ICMP=1081,
    CV_IA64_Rr2=6146,
    CV_IA64_Rr1=6145,
    CV_IA64_Rr4=6148,
    CV_IA64_Rr3=6147,
    CV_IA64_Rr0=6144,
    CV_IA64_Rr6=6150,
    CV_IA64_StIIP=4115,
    CV_IA64_Rr5=6149,
    CV_IA64_Rr7=6151,
    CV_REG_DR7=97,
    CV_REG_DR6=96,
    CV_REG_DR5=95,
    CV_REG_FPEDO=145,
    CV_PPC_SDR1=125,
    CV_REG_DR4=94,
    CV_REG_DR3=93,
    CV_REG_DR2=92,
    CV_REG_DR1=91,
    CV_REG_DR0=90,
    CV_AMD64_FPEDO=145,
    CV_PPC_CTR=109,
    CV_REG_FLAGS=32,
    CV_ALPHA_Psr=76,
    CV_REG_FPCS=140,
    CV_IA64_P51=755,
    CV_IA64_P50=754,
    CV_REG_LDTR=114,
    CV_REG_PCDR5=45,
    CV_IA64_P57=761,
    CV_REG_PCDR4=44,
    CV_IA64_P56=760,
    CV_REG_PCDR7=47,
    CV_IA64_P59=763,
    CV_REG_PCDR6=46,
    CV_IA64_P58=762,
    CV_IA64_P53=757,
    CV_IA64_P52=756,
    CV_REG_PCDR3=43,
    CV_IA64_P55=759,
    CV_IA64_P54=758,
    CV_IA64_SaIRR1=4165,
    CV_IA64_SaIRR0=4164,
    CV_IA64_SaIRR3=4167,
    CV_IA64_StISR=4113,
    CV_IA64_SaIRR2=4166,
    CV_IA64_P60=764,
    CV_IA64_P62=766,
    CV_IA64_P61=765,
    CV_IA64_P63=767,
    CV_TRI_DPRx_0=68,
    CV_TRI_DPRx_2=70,
    CV_TRI_DPRx_1=69,
    CV_TRI_DPRx_3=71,
    CV_REG_QUOTE=42,
    CV_AMD64_FLAGS=32,
    CV_IA64_P35=739,
    CV_IA64_P34=738,
    CV_IA64_P37=741,
    CV_IA64_P36=740,
    CV_IA64_P31=735,
    CV_IA64_P30=734,
    CV_IA64_P33=737,
    CV_IA64_P32=736,
    CV_AMD64_XMM6_0=186,
    CV_AMD64_XMM6_1=187,
    CV_AMD64_XMM6_2=188,
    CV_AMD64_XMM6_3=189,
    CV_IA64_P39=743,
    CV_IA64_P38=742,
    CV_TRI_TFA=82,
    CV_ALLREG_VFRAME=30006,
    CV_IA64_P40=744,
    CV_REG_FPEIP=144,
    CV_AM33_MDR=82,
    CV_IA64_P46=750,
    CV_IA64_P45=749,
    CV_IA64_P48=752,
    CV_IA64_P47=751,
    CV_IA64_P42=746,
    CV_IA64_P41=745,
    CV_IA64_P44=748,
    CV_IA64_P43=747,
    CV_IA64_P49=753,
    CV_TRI_BIV=65,
    CV_IA64_SaCMCV=4170,
    CV_IA64_IntR0=1024,
    CV_IA64_IntR1=1025,
    CV_IA64_IntR2=1026,
    CV_IA64_IntR3=1027,
    CV_IA64_IntR4=1028,
    CV_IA64_IntR5=1029,
    CV_IA64_IntR6=1030,
    CV_IA64_IntR7=1031,
    CV_IA64_IntR8=1032,
    CV_IA64_IntR9=1033,
    CV_AM33_FS31=71,
    CV_AM33_FS30=70,
    CV_AM33_FS28=68,
    CV_AM33_FS29=69,
    CV_REG_FPIP=139,
    CV_AM33_FS26=66,
    CV_AM33_FS27=67,
    CV_AM33_FS24=64,
    CV_AM33_FS25=65,
    CV_AM33_FS22=62,
    CV_AM33_FS23=63,
    CV_AM33_FS20=60,
    CV_AM33_FS21=61,
    CV_AMD64_XMM5=159,
    CV_AMD64_XMM6=160,
    CV_AMD64_XMM3=157,
    CV_AMD64_XMM4=158,
    CV_AMD64_XMM9=253,
    CV_AMD64_XMM7=161,
    CV_AMD64_XMM8=252,
    CV_SH3_BamrB=66,
    CV_SH3_BamrA=62,
    CV_AM33_FS19=59,
    CV_M32R_ACHI=32,
    CV_AM33_FS17=57,
    CV_AM33_FS18=58,
    CV_REG_MM11=239,
    CV_AM33_FS15=55,
    CV_REG_MM10=238,
    CV_AM33_FS16=56,
    CV_AM33_FS13=53,
    CV_AM33_FS14=54,
    CV_AM33_FS11=51,
    CV_AM33_FS12=52,
    CV_AMD64_XMM1=155,
    CV_AM33_FS10=50,
    CV_AMD64_XMM2=156,
    CV_AMD64_XMM0=154,
    CV_REG_MM00=236,
    CV_REG_MM01=237,
    CV_AMD64_MXCSR=211,
    CV_AMD64_SIL=324,
    CV_IA64_FltF2=2050,
    CV_AMD64_CTRL=136,
    CV_IA64_FltF1=2049,
    CV_IA64_FltF4=2052,
    CV_IA64_FltF3=2051,
    CV_REG_FPDS=142,
    CV_IA64_FltF0=2048,
    CV_IA64_IntR110=1134,
    CV_IA64_IntR111=1135,
    CV_REG_FPDO=141,
    CV_IA64_IntR112=1136,
    CV_IA64_IntR113=1137,
    CV_IA64_IntR114=1138,
    CV_IA64_IntR115=1139,
    CV_IA64_IntR116=1140,
    CV_IA64_IntR117=1141,
    CV_IA64_IntR118=1142,
    CV_IA64_IntR119=1143,
    CV_AMD64_FPEIP=144,
    CV_IA64_FltF126=2174,
    CV_IA64_FltF127=2175,
    CV_IA64_FltF124=2172,
    CV_IA64_FltF125=2173,
    CV_IA64_FltF122=2170,
    CV_IA64_FltF123=2171,
    CV_IA64_FltF120=2168,
    CV_IA64_FltF121=2169,
    CV_IA64_IntR100=1124,
    CV_IA64_FltF9=2057,
    CV_IA64_IntR101=1125,
    CV_IA64_IntR102=1126,
    CV_IA64_IntR103=1127,
    CV_IA64_FltF6=2054,
    CV_IA64_IntR104=1128,
    CV_IA64_FltF5=2053,
    CV_IA64_IntR105=1129,
    CV_IA64_FltF8=2056,
    CV_IA64_IntR106=1130,
    CV_IA64_FltF7=2055,
    CV_IA64_IntR107=1131,
    CV_IA64_IntR108=1132,
    CV_IA64_IntR109=1133,
    CV_IA64_FltF119=2167,
    CV_IA64_FltF117=2165,
    CV_IA64_FltF118=2166,
    CV_IA64_FltF115=2163,
    CV_IA64_FltF116=2164,
    CV_IA64_FltF113=2161,
    CV_PPC_CR0=34,
    CV_IA64_FltF114=2162,
    CV_PPC_CR1=35,
    CV_IA64_FltF111=2159,
    CV_PPC_CR2=36,
    CV_IA64_FltF112=2160,
    CV_PPC_CR3=37,
    CV_SH3_NOREG=0,
    CV_PPC_CR4=38,
    CV_IA64_FltF110=2158,
    CV_PPC_CR5=39,
    CV_PPC_CR6=40,
    CV_REG_NONE=0,
    CV_M32R_ACLO=33,
    CV_IA64_FltF108=2156,
    CV_IA64_FltF109=2157,
    CV_IA64_FltF106=2154,
    CV_AMD64_XMM2_0=170,
    CV_IA64_FltF107=2155,
    CV_AMD64_XMM2_1=171,
    CV_IA64_FltF104=2152,
    CV_AMD64_XMM2_2=172,
    CV_IA64_FltF105=2153,
    CV_AMD64_XMM2_3=173,
    CV_IA64_FltF102=2150,
    CV_IA64_FltF103=2151,
    CV_IA64_FltF100=2148,
    CV_AMD64_XMM13_1=281,
    CV_IA64_FltF101=2149,
    CV_AMD64_XMM13_0=280,
    CV_AMD64_XMM13_3=283,
    CV_AMD64_XMM13_2=282,
    CV_IA64_IntR120=1144,
    CV_IA64_IntR121=1145,
    CV_IA64_IntR122=1146,
    CV_IA64_IntR123=1147,
    CV_IA64_IntR124=1148,
    CV_IA64_IntR125=1149,
    CV_IA64_IntR126=1150,
    CV_IA64_IntR127=1151,
    CV_PPC_CR7=41,
    CV_REG_MM71=251,
    CV_REG_MM70=250,
    CV_M32R_PSW=26,
    CV_PPC_IMISS=1080,
    CV_REG_MM60=248,
    CV_PPC_HID10=1118,
    CV_PPC_HID11=1119,
    CV_REG_MM61=249,
    CV_PPC_HID14=1122,
    CV_PPC_HID15=1123,
    CV_PPC_HID12=1120,
    CV_PPC_HID13=1121,
    CV_TRI_EA10=55,
    CV_SH3_Brcr=70,
    CV_TRI_EA14=57,
    CV_TRI_EA12=56,
    CV_IA64_IntH0=832,
    CV_IA64_IntH1=833,
    CV_IA64_IntH2=834,
    CV_IA64_IntH3=835,
    CV_IA64_IntH4=836,
    CV_AMD64_SPL=327,
    CV_IA64_IntH5=837,
    CV_IA64_IntH6=838,
    CV_IA64_IntH7=839,
    CV_IA64_IntH8=840,
    CV_IA64_IntH9=841,
    CV_REG_XMM02=164,
    CV_R68_BAD3=67,
    CV_REG_XMM01=163,
    CV_R68_BAD2=66,
    CV_REG_XMM00=162,
    CV_R68_BAD5=69,
    CV_R68_BAD4=68,
    CV_R68_ISP=25,
    CV_R68_BAD1=65,
    CV_REG_XMM03=165,
    CV_R68_BAD0=64,
    CV_R68_BAD7=71,
    CV_R68_BAD6=70,
    CV_AMD64_BPL=326,
    CV_M32R_NOREG=0,
    CV_SH3_Mach=40,
    CV_REG_MM31=243,
    CV_REG_MM30=242,
    CV_REG_XMM0H=202,
    CV_REG_XMM0L=194,
    CV_SH3_Macl=41,
    CV_AM33_SP=80,
    CV_TRI_BTV=66,
    CV_REG_MM20=240,
    CV_REG_MM21=241,
    CV_AMD64_ST2=130,
    CV_AMD64_ST3=131,
    CV_AMD64_ST4=132,
    CV_AMD64_ST5=133,
    CV_AMD64_ST0=128,
    CV_AMD64_ST1=129,
    CV_REG_XMM23=173,
    CV_REG_XMM22=172,
    CV_REG_XMM21=171,
    CV_AMD64_ST6=134,
    CV_AMD64_ST7=135,
    CV_REG_MM51=247,
    CV_REG_MM50=246,
    CV_REG_XMM2H=204,
    CV_REG_XMM2L=196,
    CV_REG_XMM31=175,
    CV_REG_XMM30=174,
    CV_REG_XMM13=169,
    CV_REG_XMM12=168,
    CV_REG_XMM11=167,
    CV_REG_XMM10=166,
    CV_IA64_ApLC=3137,
    CV_REG_MM40=244,
    CV_M4_FltFsr=92,
    CV_REG_MM41=245,
    CV_REG_XMM1H=203,
    CV_REG_XMM20=170,
    CV_REG_XMM1L=195,
    CV_IA64_FltF50=2098,
    CV_IA64_FltF51=2099,
    CV_IA64_FltF52=2100,
    CV_REG_XMM43=181,
    CV_SH_Fpscr=75,
    CV_IA64_FltF53=2101,
    CV_IA64_FltF54=2102,
    CV_IA64_FltF55=2103,
    CV_IA64_FltF56=2104,
    CV_IA64_FltF57=2105,
    CV_IA64_FltF58=2106,
    CV_IA64_FltF59=2107,
    CV_M4_IntA3=17,
    CV_M4_IntA2=16,
    CV_M4_IntA1=15,
    CV_M4_IntA0=14,
    CV_IA64_ApGPTA=4105,
    CV_R68_CCR=16,
    CV_REG_XMM4H=206,
    CV_REG_XMM4L=198,
    CV_REG_XMM53=185,
    CV_REG_XMM52=184,
    CV_REG_XMM51=183,
    CV_REG_XMM50=182,
    CV_IA64_FltF61=2109,
    CV_IA64_FltF62=2110,
    CV_REG_XMM33=177,
    CV_IA64_FltF63=2111,
    CV_REG_XMM32=176,
    CV_IA64_FltF64=2112,
    CV_IA64_FltF65=2113,
    CV_PPC_XER=101,
    CV_IA64_FltF66=2114,
    CV_IA64_FltF67=2115,
    CV_IA64_FltF68=2116,
    CV_IA64_FltF69=2117,
    CV_IA64_IntR10=1034,
    CV_REG_XMM3H=205,
    CV_REG_XMM3L=197,
    CV_REG_XMM42=180,
    CV_REG_XMM41=179,
    CV_AM33_PC=81,
    CV_REG_XMM40=178,
    CV_IA64_FltF60=2108,
    CV_ALPHA_FltF6=16,
    CV_IA64_FltF72=2120,
    CV_ALPHA_FltF5=15,
    CV_IA64_FltF73=2121,
    CV_ALPHA_FltF8=18,
    CV_IA64_FltF74=2122,
    CV_ALPHA_FltF7=17,
    CV_IA64_FltF75=2123,
    CV_IA64_FltF76=2124,
    CV_ALPHA_FltF9=19,
    CV_IA64_FltF77=2125,
    CV_IA64_FltF78=2126,
    CV_IA64_FltF79=2127,
    CV_REG_XMM6H=208,
    CV_PPC_PMR0=1044,
    CV_REG_XMM6L=200,
    CV_PPC_PMR2=1046,
    CV_PPC_PMR1=1045,
    CV_PPC_PMR4=1048,
    CV_PPC_PMR3=1047,
    CV_REG_XMM71=191,
    CV_PPC_PMR6=1050,
    CV_REG_XMM70=190,
    CV_PPC_PMR5=1049,
    CV_ALPHA_FltF0=10,
    CV_PPC_PMR8=1052,
    CV_PPC_PMR7=1051,
    CV_R68_CAL=60,
    CV_ALPHA_FltF2=12,
    CV_ALPHA_FltF1=11,
    CV_PPC_PMR9=1053,
    CV_REG_XMM73=193,
    CV_ALPHA_FltF4=14,
    CV_IA64_FltF70=2118,
    CV_REG_XMM72=192,
    CV_ALPHA_FltF3=13,
    CV_IA64_FltF71=2119,
    CV_SH3_Pr=39,
    CV_IA64_FltF83=2131,
    CV_IA64_FltF84=2132,
    CV_IA64_FltF85=2133,
    CV_SHMEDIA_FPUL=160,
    CV_IA64_FltF86=2134,
    CV_IA64_FltF87=2135,
    CV_IA64_FltF88=2136,
    CV_SH3_IntFp=24,
    CV_IA64_FltF89=2137,
    CV_M4_IntAT=11,
    CV_SH3_Pc=50,
    CV_ALPHA_FltFsr=77,
    CV_PPC_SRR1=127,
    CV_REG_XMM5H=207,
    CV_PPC_SRR0=126,
    CV_REG_XMM60=186,
    CV_REG_XMM5L=199,
    CV_JAVA_PC=1,
    CV_REG_XMM63=189,
    CV_IA64_FltF80=2128,
    CV_REG_XMM62=188,
    CV_IA64_FltF81=2129,
    CV_REG_XMM61=187,
    CV_IA64_FltF82=2130,
    CV_IA64_FltF94=2142,
    CV_IA64_FltF95=2143,
    CV_IA64_FltF96=2144,
    CV_IA64_FltF97=2145,
    CV_IA64_FltF98=2146,
    CV_IA64_FltF99=2147,
    CV_IA64_IntR36=1060,
    CV_IA64_IntR35=1059,
    CV_IA64_IntR34=1058,
    CV_IA64_IntR33=1057,
    CV_IA64_IntR39=1063,
    CV_IA64_IntR38=1062,
    CV_IA64_IntR37=1061,
    CV_IA64_IntR43=1067,
    CV_IA64_IntR42=1066,
    CV_IA64_IntR41=1065,
    CV_IA64_IntR40=1064,
    CV_IA64_StFDR=3102,
    CV_IA64_FltF90=2138,
    CV_IA64_FltF91=2139,
    CV_IA64_FltF92=2140,
    CV_IA64_FltF93=2141,
    CV_IA64_IntR47=1071,
    CV_IA64_IntR46=1070,
    CV_IA64_IntR45=1069,
    CV_IA64_IntR44=1068,
    CV_IA64_IntR49=1073,
    CV_IA64_IntR48=1072,
    CV_IA64_IntR50=1074,
    CV_REG_XMM7H=209,
    CV_IA64_IntR54=1078,
    CV_REG_XMM7L=201,
    CV_R68_D7=7,
    CV_IA64_IntR53=1077,
    CV_R68_D6=6,
    CV_IA64_IntR52=1076,
    CV_R68_D5=5,
    CV_IA64_IntR51=1075,
    CV_SHMEDIA_MTRX0=1024,
    CV_R68_D4=4,
    CV_R68_D3=3,
    CV_R68_D2=2,
    CV_R68_D1=1,
    CV_R68_D0=0,
    CV_ALLREG_CMDLN=30012,
    CV_IA64_CR3=4099,
    CV_IA64_IntR19=1043,
    CV_IA64_IntR14=1038,
    CV_IA64_IntR13=1037,
    CV_IA64_IntR12=1036,
    CV_IA64_IntR11=1035,
    CV_IA64_IntR18=1042,
    CV_IA64_CR5=4101,
    CV_IA64_IntR17=1041,
    CV_IA64_CR4=4100,
    CV_IA64_IntR16=1040,
    CV_IA64_CR7=4103,
    CV_IA64_IntR15=1039,
    CV_IA64_CR6=4102,
    CV_PPC_FPR8=50,
    CV_IA64_IntR21=1045,
    CV_TRI_FCX=61,
    CV_PPC_FPR9=51,
    CV_IA64_IntR20=1044,
    CV_PPC_FPR4=46,
    CV_PPC_FPR5=47,
    CV_PPC_FPR6=48,
    CV_PPC_FPR7=49,
    CV_PPC_FPR0=42,
    CV_PPC_FPR1=43,
    CV_PPC_FPR2=44,
    CV_PPC_FPR3=45,
    CV_IA64_Br2=514,
    CV_IA64_Br1=513,
    CV_IA64_Br4=516,
    CV_IA64_Br3=515,
    CV_IA64_Br0=512,
    CV_IA64_IntR25=1049,
    CV_IA64_IntR24=1048,
    CV_IA64_IntR23=1047,
    CV_IA64_IntR22=1046,
    CV_IA64_Br6=518,
    CV_IA64_IntR29=1053,
    CV_IA64_Br5=517,
    CV_IA64_IntR28=1052,
    CV_IA64_IntR27=1051,
    CV_IA64_Br7=519,
    CV_IA64_IntR26=1050,
    CV_IA64_CFLG=3099,
    CV_IA64_CSD=3097,
    CV_IA64_IntR32=1056,
    CV_IA64_IntR31=1055,
    CV_IA64_IntR30=1054,
    CV_IA64_StFCR=3093,
    CV_TRI_SWEVT=74,
    CV_R68_AC=58,
    CV_IA64_IntR79=1103,
    CV_IA64_IntR78=1102,
    CV_IA64_IntR77=1101,
    CV_SHMEDIA_NOREG=0,
    CV_IA64_IntR83=1107,
    CV_IA64_IntR82=1106,
    CV_R68_A7=15,
    CV_IA64_IntR81=1105,
    CV_R68_A6=14,
    CV_SH3_BarB=64,
    CV_IA64_IntR80=1104,
    CV_R68_A5=13,
    CV_SH3_BarA=60,
    CV_IA64_IntR87=1111,
    CV_AMD64_XMM9_1=265,
    CV_ALLREG_ENV=30011,
    CV_R68_A4=12,
    CV_IA64_IntR86=1110,
    CV_AMD64_XMM9_2=266,
    CV_R68_A3=11,
    CV_IA64_IntR85=1109,
    CV_AMD64_XMM9_3=267,
    CV_R68_A2=10,
    CV_IA64_IntR84=1108,
    CV_R68_A1=9,
    CV_R68_A0=8,
    CV_AMD64_XMM9_0=264,
    CV_IA64_IntR89=1113,
    CV_IA64_IntR88=1112,
    CV_IA64_IntR94=1118,
    CV_IA64_IntR93=1117,
    CV_IA64_IntR92=1116,
    CV_IA64_IntR91=1115,
    CV_IA64_IntR98=1122,
    CV_IA64_IntR97=1121,
    CV_IA64_IntR96=1120,
    CV_IA64_IntR95=1119,
    CV_IA64_IntR90=1114,
    CV_IA64_StFIR=3101,
    CV_AMD64_TAG=138,
    CV_ALPHA_IntA3=61,
    CV_IA64_IntR58=1082,
    CV_TRI_CPMx_0=68,
    CV_ALPHA_IntA4=62,
    CV_IA64_IntR57=1081,
    CV_ALPHA_IntA5=63,
    CV_IA64_IntR56=1080,
    CV_TRI_CPMx_2=70,
    CV_IA64_IntR55=1079,
    CV_TRI_CPMx_1=69,
    CV_ALPHA_IntA0=58,
    CV_TRI_CPMx_3=71,
    CV_ALPHA_IntA1=59,
    CV_IA64_NOREG=0,
    CV_ALPHA_IntA2=60,
    CV_IA64_IntR59=1083,
    CV_M4_NOREG=0,
    CV_IA64_IntR61=1085,
    CV_IA64_IntR60=1084,
    CV_IA64_IntR65=1089,
    CV_IA64_IntR64=1088,
    CV_IA64_IntR63=1087,
    CV_IA64_IntR62=1086,
    CV_SHMEDIA_FV4=516,
    CV_SHMEDIA_FV8=520,
    CV_AMD64_STAT=137,
    CV_IA64_IntR69=1093,
    CV_ALPHA_IntAT=70,
    CV_IA64_IntR68=1092,
    CV_IA64_IntR67=1091,
    CV_IA64_IntR66=1090,
    CV_SHMEDIA_FV0=512,
    CV_IA64_IntR72=1096,
    CV_IA64_IntR71=1095,
    CV_IA64_IntR70=1094,
    CV_IA64_IntR76=1100,
    CV_IA64_IntR75=1099,
    CV_IA64_IntR74=1098,
    CV_IA64_IntR73=1097,
    CV_REG_PSEUDO1=116,
    CV_REG_PSEUDO2=117,
    CV_REG_PSEUDO3=118,
    CV_REG_PSEUDO4=119,
    CV_R68_DTT1=45,
    CV_SH3_Sr=51,
    CV_R68_DTT0=44,
    CV_IA64_FltF10=2058,
    CV_IA64_FltF11=2059,
    CV_IA64_FltF12=2060,
    CV_IA64_FltF13=2061,
    CV_IA64_FltF14=2062,
    CV_IA64_FltF15=2063,
    CV_IA64_FltF16=2064,
    CV_IA64_FltF17=2065,
    CV_IA64_FltF18=2066,
    CV_IA64_FltF19=2067,
    CV_ALPHA_IntFP=57,
    CV_ALLREG_ERR=30000,
    CV_IA64_FltF20=2068,
    CV_IA64_FltF21=2069,
    CV_IA64_FltF22=2070,
    CV_IA64_FltF23=2071,
    CV_IA64_FltF24=2072,
    CV_IA64_FltF25=2073,
    CV_IA64_FltF26=2074,
    CV_IA64_FltF27=2075,
    CV_IA64_FltF28=2076,
    CV_IA64_FltF29=2077,
    CV_IA64_RsBSPSTORE=3090,
    CV_AM33_D3=33,
    CV_AM33_D2=32,
    CV_AM33_D1=31,
    CV_AM33_D0=30,
    CV_ALPHA_IntGP=71,
    CV_REG_PSEUDO9=124,
    CV_REG_PSEUDO5=120,
    CV_REG_PSEUDO6=121,
    CV_REG_PSEUDO7=122,
    CV_REG_PSEUDO8=123,
    CV_IA64_FltF30=2078,
    CV_IA64_FltF31=2079,
    CV_IA64_FltF32=2080,
    CV_IA64_FltF33=2081,
    CV_IA64_FltF34=2082,
    CV_IA64_FltF35=2083,
    CV_IA64_FltF36=2084,
    CV_IA64_FltF37=2085,
    CV_IA64_FltF38=2086,
    CV_IA64_IntR99=1123,
    CV_IA64_FltF39=2087,
    CV_IA64_TrI0=8192,
    CV_AM33_E5=15,
    CV_IA64_TrI1=8193,
    CV_AM33_E4=14,
    CV_AM33_E3=13,
    CV_AM33_E2=12,
    CV_IA64_TrI4=8196,
    CV_AM33_E1=11,
    CV_IA64_TrI5=8197,
    CV_AM33_E0=10,
    CV_IA64_TrI2=8194,
    CV_REG_EFLAGS=34,
    CV_IA64_TrI3=8195,
    CV_SHMEDIA_TR14=88,
    CV_REG_CR4=84,
    CV_SHMEDIA_TR13=87,
    CV_REG_CR3=83,
    CV_IA64_TrI6=8198,
    CV_REG_CR2=82,
    CV_IA64_TrI7=8199,
    CV_SHMEDIA_TR15=89,
    CV_REG_CR1=81,
    CV_SHMEDIA_TR10=84,
    CV_REG_CR0=80,
    CV_AM33_E7=17,
    CV_SHMEDIA_TR12=86,
    CV_AM33_E6=16,
    CV_SHMEDIA_TR11=85,
    CV_SHMEDIA_FR2=130,
    CV_IA64_FltF40=2088,
    CV_SHMEDIA_FR3=131,
    CV_IA64_FltF41=2089,
    CV_SHMEDIA_FR0=128,
    CV_IA64_FltF42=2090,
    CV_SHMEDIA_FR1=129,
    CV_IA64_FltF43=2091,
    CV_SHMEDIA_FR6=134,
    CV_IA64_FltF44=2092,
    CV_SHMEDIA_FR7=135,
    CV_IA64_FltF45=2093,
    CV_SHMEDIA_FR4=132,
    CV_IA64_FltF46=2094,
    CV_SHMEDIA_FR5=133,
    CV_IA64_FltF47=2095,
    CV_IA64_FltF48=2096,
    CV_IA64_FltF49=2097,
    CV_M4_Fir=50,
    CV_SHMEDIA_FR8=136,
    CV_SHMEDIA_FR9=137,
    CV_ALPHA_IntZERO=73,
    CV_AMD64_XMM5L=199,
    CV_AMD64_XMM5_1=183,
    CV_AMD64_XMM5H=207,
    CV_AMD64_XMM5_2=184,
    CV_AMD64_XMM5_3=185,
    CV_AMD64_XMM5_0=182,
    CV_IA64_ApITC=3116,
    CV_PPC_DSISR=118,
    CV_SHMEDIA_T=92,
    CV_R68_SRP=55,
    CV_AMD64_XMM4L=198,
    CV_R68_MMUSR030=41,
    CV_IA64_ApITM=4097,
    CV_AMD64_XMM4H=206,
    CV_ALLREG_HANDLE=30007,
    CV_M4_IntT0=18,
    CV_R68_MMUSR=42,
    CV_SHMEDIA_FV16=528,
    CV_AM33_A1=21,
    CV_AM33_A0=20,
    CV_SHMEDIA_FV12=524,
    CV_AMD64_XMM7L=201,
    CV_M4_IntS8=40,
    CV_M4_IntS7=33,
    CV_M4_IntS6=32,
    CV_M4_IntS5=31,
    CV_AMD64_XMM7H=209,
    CV_M4_IntS4=30,
    CV_M4_IntS3=29,
    CV_M4_IntS2=28,
    CV_M4_IntS1=27,
    CV_AM33_A3=23,
    CV_M4_IntS0=26,
    CV_AM33_A2=22,
    CV_M32R_R12=22,
    CV_M32R_R13=23,
    CV_M32R_R10=20,
    CV_M32R_R11=21,
    CV_AMD64_ISEM=143,
    CV_M4_IntRA=41,
    CV_M32R_R14=24,
    CV_M32R_R15=25,
    CV_SH_FpR10=90,
    CV_SH_FpR12=92,
    CV_SH_FpR11=91,
    CV_SH_FpR14=94,
    CV_SH_FpR13=93,
    CV_SH_FpR15=95,
    CV_AMD64_XMM6L=200,
    CV_AMD64_XMM6H=208,
    CV_M4_FltF8=68,
    CV_M4_FltF9=69,
    CV_M4_FltF4=64,
    CV_M4_FltF5=65,
    CV_M4_FltF6=66,
    CV_M4_FltF7=67,
    CV_AMD64_XMM14=258,
    CV_AMD64_XMM15=259,
    CV_AMD64_XMM12=256,
    CV_AMD64_XMM13=257,
    CV_AMD64_XMM10=254,
    CV_AMD64_XMM11=255,
    CV_PPC_FPR21=63,
    CV_PPC_FPR20=62,
    CV_PPC_FPR12=54,
    CV_AMD64_XMM1L=195,
    CV_PPC_FPR11=53,
    CV_PPC_FPR14=56,
    CV_PPC_FPR13=55,
    CV_PPC_FPR16=58,
    CV_AMD64_XMM1H=203,
    CV_PPC_FPR15=57,
    CV_PPC_FPR18=60,
    CV_PPC_FPR17=59,
    CV_M4_FltF0=60,
    CV_M4_IntLO=42,
    CV_M4_FltF1=61,
    CV_PPC_FPR19=61,
    CV_M4_FltF2=62,
    CV_M4_FltF3=63,
    CV_AMD64_XMM12_0=276,
    CV_AMD64_XMM12_2=278,
    CV_AMD64_XMM12_1=277,
    CV_AMD64_XMM12_3=279,
    CV_PPC_FPR10=52,
    CV_AMD64_XMM0L=194,
    CV_AMD64_XMM0H=202,
    CV_SH3_BbrB=67,
    CV_AMD64_XMM3L=197,
    CV_SH3_BbrA=63,
    CV_AMD64_XMM3H=205,
    CV_IA64_AR94=3166,
    CV_IA64_AR93=3165,
    CV_IA64_AR96=3168,
    CV_IA64_AR95=3167,
    CV_AMD64_XMM1_0=166,
    CV_IA64_AR98=3170,
    CV_IA64_AR97=3169,
    CV_IA64_AR99=3171,
    CV_IA64_ApIVA=4098,
    CV_PPC_SR7=83,
    CV_IA64_StFSR=3100,
    CV_PPC_SR8=84,
    CV_PPC_SR9=85,
    CV_PPC_FPR30=72,
    CV_IA64_AR90=3162,
    CV_IA64_AR92=3164,
    CV_PPC_FPR31=73,
    CV_IA64_AR91=3163,
    CV_PPC_FPR23=65,
    CV_PPC_FPR22=64,
    CV_PPC_SR0=76,
    CV_PPC_FPR25=67,
    CV_PPC_SR1=77,
    CV_PPC_FPR24=66,
    CV_PPC_SR2=78,
    CV_AMD64_XMM2L=196,
    CV_PPC_FPR27=69,
    CV_PPC_SR3=79,
    CV_PPC_FPR26=68,
    CV_PPC_SR4=80,
    CV_PPC_FPR29=71,
    CV_PPC_SR5=81,
    CV_PPC_FPR28=70,
    CV_PPC_SR6=82,
    CV_AMD64_XMM2H=204,
    CV_IA64_AR83=3155,
    CV_IA64_AR82=3154,
    CV_ALPHA_IntT0=43,
    CV_IA64_AR85=3157,
    CV_ALPHA_IntT1=44,
    CV_ALPHA_IntSP=72,
    CV_IA64_AR84=3156,
    CV_IA64_AR87=3159,
    CV_IA64_AR86=3158,
    CV_IA64_AR89=3161,
    CV_IA64_AR88=3160,
    CV_IA64_AR81=3153,
    CV_IA64_AR80=3152,
    CV_ALPHA_IntS5=56,
    CV_M4_IntHI=43,
    CV_ALPHA_IntS1=52,
    CV_AMD64_XMM1_1=167,
    CV_ALPHA_IntS2=53,
    CV_AMD64_XMM1_2=168,
    CV_ALPHA_IntS3=54,
    CV_AMD64_XMM1_3=169,
    CV_ALPHA_IntS4=55,
    CV_IA64_AR72=3144,
    CV_AMD64_GDTL=111,
    CV_IA64_AR71=3143,
    CV_SH3_IntR8=18,
    CV_IA64_AR74=3146,
    CV_SH3_IntR9=19,
    CV_IA64_AR73=3145,
    CV_IA64_AR76=3148,
    CV_IA64_AR75=3147,
    CV_IA64_AR78=3150,
    CV_IA64_AR77=3149,
    CV_SH3_IntR2=12,
    CV_SH3_IntR3=13,
    CV_SH3_IntR0=10,
    CV_SH3_IntR1=11,
    CV_PPC_PMR15=1059,
    CV_SH3_IntR6=16,
    CV_PPC_PMR14=1058,
    CV_SH3_IntR7=17,
    CV_SH3_IntR4=14,
    CV_IA64_AR70=3142,
    CV_SH3_IntR5=15,
    CV_PPC_PMR11=1055,
    CV_PPC_PMR10=1054,
    CV_PPC_PMR13=1057,
    CV_M4_IntGP=38,
    CV_PPC_PMR12=1056,
    CV_REG_TAG=138,
    CV_ALPHA_IntT6=49,
    CV_ALPHA_IntT7=50,
    CV_IA64_AR79=3151,
    CV_SHMEDIA_FV60=572,
    CV_ALPHA_IntT8=64,
    CV_AMD64_GDTR=110,
    CV_ALPHA_IntT9=65,
    CV_ALPHA_IntT2=45,
    CV_ALPHA_IntT3=46,
    CV_ALPHA_IntT4=47,
    CV_ALPHA_IntT5=48,
    CV_IA64_AR61=3133,
    CV_IA64_AR120=3192,
    CV_IA64_AR60=3132,
    CV_IA64_AR63=3135,
    CV_IA64_AR122=3194,
    CV_IA64_AR62=3134,
    CV_IA64_AR121=3193,
    CV_R68_FP0=32,
    CV_IA64_AR124=3196,
    CV_IA64_AR123=3195,
    CV_IA64_AR67=3139,
    CV_IA64_AR126=3198,
    CV_IA64_AR125=3197,
    CV_IA64_AR127=3199,
    CV_SHMEDIA_FR19=147,
    CV_SHMEDIA_FR18=146,
    CV_SHMEDIA_FR17=145,
    CV_SHMEDIA_FR16=144,
    CV_SHMEDIA_FR15=143,
    CV_SHMEDIA_FR14=142,
    CV_SHMEDIA_FR13=141,
    CV_SHMEDIA_FR12=140,
    CV_SHMEDIA_FR11=139,
    CV_R68_FP4=36,
    CV_IA64_AR69=3141,
    CV_SHMEDIA_FR10=138,
    CV_R68_FP3=35,
    CV_IA64_AR68=3140,
    CV_R68_FP2=34,
    CV_R68_FP1=33,
    CV_R68_FP7=39,
    CV_R68_FP6=38,
    CV_R68_FP5=37,
    CV_IA64_AR50=3122,
    CV_IA64_AR52=3124,
    CV_ALPHA_IntS0=51,
    CV_IA64_AR51=3123,
    CV_IA64_AR54=3126,
    CV_IA64_AR53=3125,
    CV_IA64_AR56=3128,
    CV_IA64_AR55=3127,
    CV_AMD64_CR0=80,
    CV_AMD64_CR1=81,
    CV_AMD64_CR2=82,
    CV_AMD64_CR3=83,
    CV_ALPHA_IntRA=68,
    CV_AMD64_CR8=88,
    CV_AMD64_CR4=84,
    CV_IA64_AR58=3130,
    CV_IA64_AR57=3129,
    CV_IA64_AR59=3131,
    CV_IA64_PFC11=7435,
    CV_IA64_PFC12=7436,
    CV_IA64_AR41=3113,
    CV_IA64_PFC13=7437,
    CV_IA64_PFC14=7438,
    CV_IA64_RsRSC=3088,
    CV_IA64_AR43=3115,
    CV_IA64_PFC15=7439,
    CV_IA64_AR42=3114,
    CV_IA64_AR45=3117,
    CV_IA64_SaTPR=4162,
    CV_SHMEDIA_FV36=548,
    CV_SHMEDIA_FV32=544,
    CV_IA64_AR47=3119,
    CV_IA64_AR46=3118,
    CV_IA64_AR49=3121,
    CV_IA64_AR48=3120,
    CV_IA64_PFC10=7434,
    CV_R68_CAAR=24,
    CV_IA64_EFLAG=3096,
    CV_IA64_AR31=3103,
    CV_IA64_AR34=3106,
    CV_IA64_AR33=3105,
    CV_SHMEDIA_FV28=540,
    CV_SHMEDIA_FV24=536,
    CV_R68_SFC=20,
    CV_AM33_NOREG=0,
    CV_SHMEDIA_FV20=532,
    CV_TRI_ASI=78,
    CV_IA64_AR35=3107,
    CV_IA64_AR38=3110,
    CV_IA64_AR37=3109,
    CV_IA64_AR39=3111,
    CV_ALPHA_IntV0=42,
    CV_IA64_AR20=3092,
    CV_IA64_AR23=3095,
    CV_IA64_AR22=3094,
    CV_IA64_StITIR=4117,
    CV_SHMEDIA_GBR=26,
    CV_SHMEDIA_FV56=568,
    CV_SHMEDIA_FV52=564,
    CV_TRI_PCXI=59,
    CV_R68_CACR=22,
    CV_IA64_AR10=3082,
    CV_IA64_AR12=3084,
    CV_IA64_AR11=3083,
    CV_SHMEDIA_FV48=560,
    CV_SHMEDIA_FV44=556,
    CV_SH3_IntSp=25,
    CV_SHMEDIA_FV40=552,
    CV_IA64_AR14=3086,
    CV_IA64_AR13=3085,
    CV_IA64_AR15=3087,
    CV_AMD64_EMM1H=229,
    CV_AMD64_EMM1L=221,
    CV_TRI_SYSCON=67,
    CV_IA64_SaPMV=4169,
    CV_AMD64_EMM0H=228,
    CV_AMD64_EMM0L=220,
    CV_SHMEDIA_MACH=91,
    CV_SHMEDIA_FR63=191,
    CV_SHMEDIA_FR62=190,
    CV_SHMEDIA_MACL=90,
    CV_SHMEDIA_FR61=189,
    CV_SHMEDIA_FR60=188,
    CV_PPC_LR=108,
    CV_AMD64_EMM3H=231,
    CV_AMD64_EMM3L=223,
    CV_IA64_CR127=4223,
    CV_R68_ITT1=47,
    CV_IA64_CR125=4221,
    CV_R68_ITT0=46,
    CV_IA64_CR126=4222,
    CV_IA64_CR123=4219,
    CV_IA64_CR124=4220,
    CV_IA64_CR121=4217,
    CV_IA64_CR122=4218,
    CV_IA64_CR120=4216,
    CV_IA64_DbD3=8579,
    CV_IA64_DbD4=8580,
    CV_PPC_GPR0=1,
    CV_IA64_DbD1=8577,
    CV_IA64_DbD2=8578,
    CV_ARM_NOREG=0,
    CV_IA64_DbD7=8583,
    CV_AMD64_EMM2H=230,
    CV_PPC_MQ=100,
    CV_IA64_DbD5=8581,
    CV_IA64_DbD6=8582,
    CV_AMD64_EMM2L=222,
    CV_IA64_DbD0=8576,
    CV_PPC_GPR9=10,
    CV_PPC_GPR6=7,
    CV_PPC_GPR5=6,
    CV_PPC_GPR8=9,
    CV_PPC_GPR7=8,
    CV_PPC_GPR2=3,
    CV_PPC_GPR1=2,
    CV_PPC_GPR4=5,
    CV_PPC_GPR3=4,
    CV_IA64_AR100=3172,
    CV_IA64_AR102=3174,
    CV_IA64_AR101=3173,
    CV_IA64_AR104=3176,
    CV_IA64_AR103=3175,
    CV_IA64_AR106=3178,
    CV_IA64_AR105=3177,
    CV_IA64_AR108=3180,
    CV_SHMEDIA_MTRX16=1040,
    CV_IA64_AR107=3179,
    CV_IA64_AR109=3181,
    CV_SHMEDIA_FR39=167,
    CV_SHMEDIA_FR38=166,
    CV_SHMEDIA_FR37=165,
    CV_SHMEDIA_FR36=164,
    CV_SHMEDIA_FR35=163,
    CV_SHMEDIA_FR34=162,
    CV_SHMEDIA_FR33=161,
    CV_SHMEDIA_FR32=160,
    CV_SHMEDIA_FR31=159,
    CV_IA64_SaLID=4160,
    CV_SHMEDIA_FR30=158,
    CV_IA64_AR111=3183,
    CV_IA64_AR110=3182,
    CV_IA64_AR113=3185,
    CV_IA64_AR112=3184,
    CV_IA64_AR115=3187,
    CV_IA64_AR114=3186,
    CV_IA64_AR117=3189,
    CV_IA64_AR116=3188,
    CV_IA64_ApUNAT=3108,
    CV_IA64_AR119=3191,
    CV_IA64_AR118=3190,
    CV_SHMEDIA_FR29=157,
    CV_SHMEDIA_FR28=156,
    CV_PPC_PC=99,
    CV_SHMEDIA_FR27=155,
    CV_SHMEDIA_FR26=154,
    CV_SHMEDIA_FR25=153,
    CV_SHMEDIA_FR24=152,
    CV_SHMEDIA_FR23=151,
    CV_SHMEDIA_FR22=150,
    CV_SHMEDIA_FR21=149,
    CV_SHMEDIA_FR20=148,
    CV_M4_IntZERO=10,
    CV_SHMEDIA_MTRX32=1056,
    CV_SHMEDIA_FR59=187,
    CV_SHMEDIA_FR58=186,
    CV_SHMEDIA_FR57=185,
    CV_SHMEDIA_FR56=184,
    CV_SHMEDIA_FR55=183,
    CV_SHMEDIA_FR54=182,
    CV_SHMEDIA_FR53=181,
    CV_SHMEDIA_FR52=180,
    CV_SHMEDIA_FR51=179,
    CV_SHMEDIA_FR50=178,
    CV_SHMEDIA_MTRX48=1072,
    CV_SHMEDIA_FR49=177,
    CV_TRI_EA8=54,
    CV_SHMEDIA_FR48=176,
    CV_SHMEDIA_FR47=175,
    CV_TRI_EA6=53,
    CV_SHMEDIA_FR46=174,
    CV_SHMEDIA_FR45=173,
    CV_TRI_EA4=52,
    CV_SHMEDIA_FR44=172,
    CV_SHMEDIA_FR43=171,
    CV_TRI_EA2=51,
    CV_SHMEDIA_FR42=170,
    CV_SHMEDIA_FR41=169,
    CV_TRI_EA0=50,
    CV_SHMEDIA_FR40=168,
    CV_AMD64_EMM9L=309,
    CV_REG_EMM7L=227,
    CV_IA64_StIPSR=4112,
    CV_AMD64_EMM8H=316,
    CV_R68_PCSR=52,
    CV_AMD64_EMM8L=308,
    CV_REG_EDXEAX=212,
    CV_REG_STAT=137,
    CV_PPC_SPRG3=375,
    CV_PPC_SPRG2=374,
    CV_AMD64_EMM9H=317,
    CV_PPC_SPRG1=373,
    CV_PPC_SPRG0=372,
    CV_AM33_FS2=42,
    CV_AM33_FS3=43,
    CV_AM33_FS0=40,
    CV_AM33_FS1=41,
    CV_SHMEDIA_FPSCR=2064,
    CV_R68_PSR=51,
    CV_AMD64_XMM8_2=262,
    CV_AMD64_XMM8_3=263,
    CV_AMD64_XMM8_0=260,
    CV_AMD64_XMM8_1=261,
    CV_AMD64_XMM11_1=273,
    CV_AMD64_XMM11_0=272,
    CV_AMD64_XMM11_3=275,
    CV_AMD64_XMM11_2=274,
    CV_SHMEDIA_TR4=78,
    CV_SHMEDIA_TR5=79,
    CV_SHMEDIA_TR2=76,
    CV_SHMEDIA_TR3=77,
    CV_SHMEDIA_TR8=82,
    CV_SHMEDIA_TR9=83,
    CV_SHMEDIA_TR6=80,
    CV_AMD64_XMM10L=294,
    CV_SHMEDIA_TR7=81,
    CV_AM33_FS6=46,
    CV_AM33_FS7=47,
    CV_REG_TEMPH=41,
    CV_AM33_FS4=44,
    CV_AMD64_XMM10H=302,
    CV_AM33_FS5=45,
    CV_SHMEDIA_TR0=74,
    CV_SHMEDIA_TR1=75,
    CV_AM33_FS8=48,
    CV_AM33_FS9=49,
    CV_PPC_ASR=280,
    CV_M4_IntV1=13,
    CV_AMD64_EMM5H=233,
    CV_M4_IntV0=12,
    CV_AMD64_EMM15H=323,
    CV_AMD64_EMM5L=225,
    CV_REG_ST7=135,
    CV_AMD64_EMM15L=315,
    CV_REG_ST6=134,
    CV_TRI_ISP=63,
    CV_REG_ST5=133,
    CV_REG_ST4=132,
    CV_REG_ST3=131,
    CV_REG_ST2=130,
    CV_REG_ST1=129,
    CV_REG_ST0=128,
    CV_IA64_CR109=4205,
    CV_IA64_CR107=4203,
    CV_IA64_CR108=4204,
    CV_IA64_CR105=4201,
    CV_IA64_CR106=4202,
    CV_AMD64_XMM11L=295,
    CV_IA64_CR103=4199,
    CV_IA64_CR104=4200,
    CV_IA64_CR101=4197,
    CV_IA64_Pkr10=5130,
    CV_AMD64_XMM9L=293,
    CV_IA64_CR102=4198,
    CV_AMD64_XMM11H=303,
    CV_IA64_Pkr12=5132,
    CV_IA64_CR100=4196,
    CV_IA64_Pkr11=5131,
    CV_IA64_Pkr14=5134,
    CV_AMD64_XMM9H=301,
    CV_IA64_Pkr13=5133,
    CV_IA64_Pkr15=5135,
    CV_AMD64_EMM14H=322,
    CV_AMD64_EMM4H=232,
    CV_AMD64_EMM14L=314,
    CV_AMD64_EMM4L=224,
    CV_IA64_CR118=4214,
    CV_IA64_CR119=4215,
    CV_IA64_CR116=4212,
    CV_AMD64_XMM12L=296,
    CV_ALPHA_Fpcr=74,
    CV_IA64_CR117=4213,
    CV_TRI_CREVT=75,
    CV_IA64_CR114=4210,
    CV_M4_IntT9=35,
    CV_IA64_CR115=4211,
    CV_M4_IntT8=34,
    CV_IA64_CR112=4208,
    CV_AM33_EPSW=87,
    CV_AMD64_XMM12H=304,
    CV_M4_IntT7=25,
    CV_IA64_CR113=4209,
    CV_AMD64_XMM8L=292,
    CV_M4_IntT6=24,
    CV_IA64_CR110=4206,
    CV_M4_IntT5=23,
    CV_IA64_CR111=4207,
    CV_M4_IntT4=22,
    CV_M4_IntT3=21,
    CV_AMD64_XMM8H=300,
    CV_M4_IntT2=20,
    CV_M4_IntT1=19,
    CV_M4_IntSP=39,
    CV_AMD64_EMM7H=235,
    CV_SH_FpR1=81,
    CV_SH_FpR0=80,
    CV_AMD64_EMM7L=227,
    CV_SH_FpR5=85,
    CV_SH_FpR4=84,
    CV_SH_FpR3=83,
    CV_SH_FpR2=82,
    CV_SH_FpR9=89,
    CV_SH_FpR8=88,
    CV_SH_FpR7=87,
    CV_SH_FpR6=86,
    CV_IA64_RsRNAT=3091,
    CV_SH3_BasrA=61,
    CV_SH3_BasrB=65,
    CV_IA64_Psr=1019,
    CV_AMD64_XMM13L=297,
    CV_AMD64_XMM13H=305,
    CV_AMD64_EMM6H=234,
    CV_AMD64_EMM6L=226,
    CV_AMD64_XMM14L=298,
    CV_AMD64_XMM14H=306,
    CV_AMD64_EMM11H=319,
    CV_AMD64_EMM11L=311,
    CV_M4_FltF20=80,
    CV_M4_FltF21=81,
    CV_M4_FltF22=82,
    CV_M4_FltF23=83,
    CV_REG_ISEM=143,
    CV_M4_FltF24=84,
    CV_M4_FltF25=85,
    CV_M4_FltF26=86,
    CV_M4_FltF27=87,
    CV_AMD64_XMM15L=299,
    CV_M4_FltF28=88,
    CV_M4_FltF29=89,
    CV_AMD64_XMM15H=307,
    CV_R68_CRP=54,
    CV_AMD64_EMM10H=318,
    CV_AMD64_EMM10L=310,
    CV_REG_EMM0H=228,
    CV_M4_FltF10=70,
    CV_ALLREG_TIMER=30002,
    CV_M4_FltF11=71,
    CV_M4_FltF12=72,
    CV_M4_FltF13=73,
    CV_AMD64_DIL=325,
    CV_M4_FltF14=74,
    CV_M4_FltF15=75,
    CV_M4_FltF16=76,
    CV_M4_FltF17=77,
    CV_M4_FltF18=78,
    CV_M4_FltF19=79,
    CV_REG_EMM0L=220,
    CV_AMD64_EMM13H=321,
    CV_AMD64_DR10=100,
    CV_AMD64_EMM13L=313,
    CV_AMD64_DR11=101,
    CV_SHMEDIA_CR29=2029,
    CV_AMD64_DR12=102,
    CV_AMD64_DR13=103,
    CV_SHMEDIA_CR27=2027,
    CV_AMD64_DR14=104,
    CV_SHMEDIA_CR28=2028,
    CV_AMD64_DR15=105,
    CV_SHMEDIA_CR25=2025,
    CV_R68_TT1=62,
    CV_SHMEDIA_CR26=2026,
    CV_REG_EMM1H=229,
    CV_R68_TT0=61,
    CV_SHMEDIA_CR23=2023,
    CV_SHMEDIA_CR24=2024,
    CV_SHMEDIA_CR21=2021,
    CV_SHMEDIA_CR22=2022,
    CV_R68_FPCR=28,
    CV_SHMEDIA_CR20=2020,
    CV_AMD64_XMM4_2=180,
    CV_AMD64_XMM4_3=181,
    CV_REG_EMM1L=221,
    CV_AMD64_XMM4_0=178,
    CV_AMD64_XMM4_1=179,
    CV_AMD64_EMM12H=320,
    CV_IA64_Cfm=1018,
    CV_AMD64_EMM12L=312,
    CV_SHMEDIA_CR18=2018,
    CV_AMD64_XMM15_1=289,
    CV_SHMEDIA_CR19=2019,
    CV_AMD64_XMM15_0=288,
    CV_SHMEDIA_CR16=2016,
    CV_AMD64_XMM15_3=291,
    CV_SHMEDIA_CR17=2017,
    CV_AMD64_XMM15_2=290,
    CV_SHMEDIA_CR14=2014,
    CV_SHMEDIA_CR15=2015,
    CV_SHMEDIA_CR12=2012,
    CV_REG_EMM2H=230,
    CV_SHMEDIA_CR13=2013,
    CV_SHMEDIA_CR10=2010,
    CV_IA64_TrD0=8320,
    CV_SHMEDIA_CR11=2011,
    CV_IA64_TrD3=8323,
    CV_IA64_TrD4=8324,
    CV_IA64_TrD1=8321,
    CV_IA64_TrD2=8322,
    CV_IA64_TrD7=8327,
    CV_IA64_TrD5=8325,
    CV_REG_EMM2L=222,
    CV_IA64_TrD6=8326,
    CV_REG_EMM3L=223,
    CV_ALPHA_NOREG=0,
    CV_REG_EMM3H=231,
    CV_PPC_COUNT=111,
    CV_SHMEDIA_CR5=2005,
    CV_SHMEDIA_CR6=2006,
    CV_SHMEDIA_CR3=2003,
    CV_SHMEDIA_CR4=2004,
    CV_SHMEDIA_CR9=2009,
    CV_SHMEDIA_CR7=2007,
    CV_SHMEDIA_CR8=2008,
    CV_SHMEDIA_CR1=2001,
    CV_SHMEDIA_CR2=2002,
    CV_SHMEDIA_CR0=2000,
    CV_REG_EMM4L=224,
    CV_REG_EMM4H=232,
    CV_R68_TC=57,
    CV_TRI_E14=49,
    CV_TRI_NOREG=0,
    CV_R68_SR=17,
    CV_TRI_E12=48,
    CV_TRI_E10=47,
    CV_REG_EMM5L=225,
    CV_REG_EMM5H=233,
    CV_PPC_HASH2=1079,
    CV_PPC_HASH1=1078,
    CV_PPC_RPA=1082,
    CV_REG_EMM7H=235,
    CV_IA64_Ip=1016,
    CV_REG_EMM6L=226,
    CV_REG_EMM6H=234,
    CV_IA64_StFPSR=3112,
    CV_SH_XFpR2=98,
    CV_PPC_RTCL=105,
    CV_SH_XFpR3=99,
    CV_SH_XFpR4=100,
    CV_SH_XFpR5=101,
    CV_SH_XFpR0=96,
    CV_SH_XFpR1=97,
    CV_SH_XFpR6=102,
    CV_SH_XFpR7=103,
    CV_SH_XFpR10=106,
    CV_PPC_RTCU=104,
    CV_SH_XFpR8=104,
    CV_SH_XFpR11=107,
    CV_SH_XFpR9=105,
    CV_SH_XFpR12=108,
    CV_SH_XFpR13=109,
    CV_SH_XFpR14=110,
    CV_SH_XFpR15=111,
    CV_TRI_TRnEVT=76,
    CV_AMD64_XMM0_0=162,
    CV_AMD64_XMM0_1=163,
    CV_ARM_LR=24,
    CV_AMD64_DR0=90,
    CV_AMD64_DR1=91,
    CV_AMD64_DR2=92,
    CV_AM33_FPCR=88,
    CV_AMD64_DR7=97,
    CV_AMD64_DR8=98,
    CV_AMD64_DR9=99,
    CV_AMD64_DR3=93,
    CV_R68_PC=26,
    CV_AMD64_DR4=94,
    CV_AMD64_DR5=95,
    CV_AMD64_DR6=96,
    CV_AM33_MCVF=86,
    CV_PPC_CR=33,
    CV_IA64_PFD10=7178,
    CV_IA64_PFD11=7179,
    CV_IA64_PFD12=7180,
    CV_IA64_PFD13=7181,
    CV_IA64_PFD14=7182,
    CV_IA64_PFD15=7183,
    CV_IA64_PFD16=7184,
    CV_IA64_PFD17=7185,
    CV_IA64_P4=708,
    CV_IA64_P3=707,
    CV_IA64_P6=710,
    CV_IA64_P5=709,
    CV_IA64_P8=712,
    CV_IA64_P7=711,
    CV_IA64_P9=713,
    CV_AMD64_XMM0_2=164,
    CV_AMD64_XMM0_3=165,
    CV_TRI_CPRx_0=68,
    CV_TRI_CPRx_1=69,
    CV_TRI_CPRx_2=70,
    CV_TRI_CPRx_3=71,
    CV_IA64_P0=704,
    CV_IA64_P2=706,
    CV_IA64_P1=705,
    CV_PPC_DBAT0L=637,
    CV_IA64_RsBSP=3089,
    CV_PPC_DBAT0U=636,
    CV_SHMEDIA_CR49=2049,
    CV_SHMEDIA_CR47=2047,
    CV_SHMEDIA_CR48=2048,
    CV_SHMEDIA_CR45=2045,
    CV_SHMEDIA_CR46=2046,
    CV_SHMEDIA_CR43=2043,
    CV_SHMEDIA_CR44=2044,
    CV_SHMEDIA_CR41=2041,
    CV_TRI_ICR=64,
    CV_SHMEDIA_CR42=2042,
    CV_SHMEDIA_CR40=2040,
    CV_PPC_DBAT1L=639,
    CV_AM33_MCRH=84,
    CV_AM33_MCRL=85,
    CV_PPC_DBAT1U=638,
    CV_SHMEDIA_CR38=2038,
    CV_SHMEDIA_CR39=2039,
    CV_SHMEDIA_CR36=2036,
    CV_SHMEDIA_CR37=2037,
    CV_SHMEDIA_CR34=2034,
    CV_SHMEDIA_CR35=2035,
    CV_SHMEDIA_CR32=2032,
    CV_SHMEDIA_CR33=2033,
    CV_SHMEDIA_CR30=2030,
    CV_SHMEDIA_CR31=2031,
    CV_AMD64_R10=338,
    CV_AMD64_R11=339,
    CV_AMD64_R12=340,
    CV_AMD64_R13=341,
    CV_IA64_DbI6=8454,
    CV_IA64_DbI7=8455,
    CV_AMD64_R14=342,
    CV_AMD64_R15=343,
    CV_IA64_DbI0=8448,
    CV_IA64_DbI1=8449,
    CV_TRI_A15=41,
    CV_TRI_A14=40,
    CV_REG_GDTR=110,
    CV_IA64_DbI4=8452,
    CV_TRI_A13=39,
    CV_IA64_DbI5=8453,
    CV_TRI_A12=38,
    CV_IA64_DbI2=8450,
    CV_TRI_A11=37,
    CV_IA64_DbI3=8451,
    CV_TRI_A10=36,
    CV_REG_GDTL=111,
    CV_SHMEDIA_CR63=2063,
    CV_SHMEDIA_CR61=2061,
    CV_SHMEDIA_CR62=2062,
    CV_SHMEDIA_CR60=2060,
    CV_IA64_ApDCR=4096,
    CV_SHMEDIA_CR58=2058,
    CV_M4_FltF30=90,
    CV_SHMEDIA_CR59=2059,
    CV_M4_FltF31=91,
    CV_SHMEDIA_CR56=2056,
    CV_SHMEDIA_CR57=2057,
    CV_SHMEDIA_CR54=2054,
    CV_SHMEDIA_CR55=2055,
    CV_SHMEDIA_CR52=2052,
    CV_SHMEDIA_CR53=2053,
    CV_SHMEDIA_CR50=2050,
    CV_SHMEDIA_CR51=2051,
    CV_TRI_D7=17,
    CV_TRI_D6=16,
    CV_TRI_D5=15,
    CV_AMD64_R14D=366,
    CV_TRI_D4=14,
    CV_AMD64_R14B=350,
    CV_TRI_D9=19,
    CV_TRI_D8=18,
    CV_TRI_D3=13,
    CV_TRI_D2=12,
    CV_TRI_D1=11,
    CV_TRI_D0=10,
    CV_AMD64_R14W=358,
    CV_ARM_SP=23,
    CV_AMD64_R15D=367,
    CV_AMD64_R15B=351,
    CV_ARM_R11=21,
    CV_ARM_R10=20,
    CV_ARM_R12=22,
    CV_AMD64_R15W=359,
    CV_REG_EIP=33,
    CV_PPC_DBAT2L=641,
    CV_R68_FPSR=29,
    CV_PPC_DBAT2U=640,
    CV_IA64_AR9=3081,
    CV_IA64_AR8=3080,
    CV_IA64_StIIPA=4118,
    CV_AMD64_MM1=147,
    CV_AMD64_MM2=148,
    CV_AMD64_MM3=149,
    CV_TRI_PSW=58,
    CV_AMD64_MM4=150,
    CV_AMD64_MM0=146,
    CV_TRI_A9=35,
    CV_AMD64_MM5=151,
    CV_AMD64_MM6=152,
    CV_AMD64_MM7=153,
    CV_PPC_DBAT3L=643,
    CV_TRI_A4=30,
    CV_ALLREG_TEB=30001,
    CV_TRI_A3=29,
    CV_TRI_A2=28,
    CV_TRI_A1=27,
    CV_TRI_A8=34,
    CV_TRI_A7=33,
    CV_PPC_DBAT3U=642,
    CV_TRI_A6=32,
    CV_TRI_A5=31,
    CV_ALPHA_FltF31=41,
    CV_TRI_A0=26,
    CV_ALPHA_FltF30=40,
    CV_PPC_EAR=382,
    CV_PPC_FPSCR=74,
    CV_AMD64_R10D=362,
    CV_SH3_Gbr=38,
    CV_AMD64_R8=336,
    CV_AMD64_R10B=346,
    CV_M4_IntKT1=37,
    CV_REG_IDTR=112,
    CV_M4_IntKT0=36,
    CV_AMD64_R9=337,
    CV_ALPHA_FltF24=34,
    CV_ALPHA_FltF23=33,
    CV_ALPHA_FltF22=32,
    CV_ALPHA_FltF21=31,
    CV_ALPHA_FltF20=30,
    CV_REG_IDTL=113,
    CV_AMD64_R10W=354,
    CV_R68_MSP=19,
    CV_ALPHA_FltF29=39,
    CV_ALPHA_FltF28=38,
    CV_ALPHA_FltF27=37,
    CV_ALPHA_FltF26=36,
    CV_ALPHA_FltF25=35,
    CV_AMD64_R8B=344,
    CV_IA64_Pkr0=5120,
    CV_IA64_Pkr1=5121,
    CV_IA64_Pkr2=5122,
    CV_IA64_Pkr3=5123,
    CV_AMD64_R11D=363,
    CV_IA64_Pkr4=5124,
    CV_IA64_Pkr5=5125,
    CV_AMD64_R11B=347,
    CV_IA64_Pkr6=5126,
    CV_IA64_Pkr7=5127,
    CV_AMD64_R8D=360,
    CV_IA64_Pkr8=5128,
    CV_IA64_Pkr9=5129,
    CV_ALPHA_FltF13=23,
    CV_ALPHA_FltF12=22,
    CV_ALPHA_FltF11=21,
    CV_ALPHA_FltF10=20,
    CV_ARM_PC=25,
    CV_AMD64_R11W=355,
    CV_AMD64_R8W=352,
    CV_ALPHA_FltF19=29,
    CV_ALPHA_FltF18=28,
    CV_ALPHA_FltF17=27,
    CV_PPC_MSR=75,
    CV_ALPHA_FltF16=26,
    CV_ALPHA_FltF15=25,
    CV_ALPHA_FltF14=24,
    CV_ARM_R4=14,
    CV_ARM_R3=13,
    CV_ARM_R6=16,
    CV_AMD64_R9B=345,
    CV_ARM_R5=15,
    CV_R68_VBR=23,
    CV_ARM_R8=18,
    CV_ARM_R7=17,
    CV_ARM_R9=19,
    CV_AMD64_R12D=364,
    CV_AMD64_R12B=348,
    CV_AMD64_R9D=361,
    CV_AM33_LIR=89,
    CV_AMD64_R12W=356,
    CV_AMD64_EFLAGS=34,
    CV_ARM_R0=10,
    CV_ARM_R2=12,
    CV_ARM_R1=11,
    CV_AMD64_R9W=353,
    CV_R68_VAL=53,
    CV_IA64_ApPTA=4104,
    CV_AMD64_R13D=365,
    CV_PPC_DMISS=1076,
    CV_AMD64_R13B=349,
    CV_IA64_CPUID1=3329,
    CV_IA64_CPUID0=3328,
    CV_IA64_CPUID3=3331,
    CV_IA64_CPUID2=3330,
    CV_AMD64_R13W=357,
    CV_ALLREG_TID=30010,
    CV_IA64_CPUID4=3332,
    CV_AMD64_EAX=17,
    CV_AMD64_LDTR=114,
    CV_IA64_PFD1=7169,
    CV_IA64_PFD2=7170,
    CV_IA64_PFD3=7171,
    CV_ALLREG_LOCALS=30009,
    CV_REG_ESI=23,
    CV_IA64_PFD4=7172,
    CV_IA64_PFD5=7173,
    CV_IA64_PFD6=7174,
    CV_IA64_PFD7=7175,
    CV_IA64_PFD8=7176,
    CV_IA64_PFD9=7177,
    CV_AMD64_EBP=22,
    CV_REG_ESP=21,
    CV_REG_FS=29,
    CV_AMD64_TR=115,
    CV_AMD64_XMM10_2=270,
    CV_AMD64_XMM10_1=269,
    CV_AMD64_EBX=20,
    CV_AMD64_XMM10_3=271,
    CV_AMD64_XMM10_0=268,
    CV_IA64_PFD0=7168,
    CV_IA64_PFC0=7424,
    CV_IA64_PFC1=7425,
    CV_IA64_PFC2=7426,
    CV_IA64_PFC3=7427,
    CV_IA64_PFC4=7428,
    CV_IA64_PFC5=7429,
    CV_IA64_PFC6=7430,
    CV_IA64_PFC7=7431,
    CV_IA64_PFC8=7432,
    CV_IA64_PFC9=7433,
    CV_REG_GS=30,
    CV_REG_CTRL=136,
    CV_AMD64_SP=13,
    CV_AMD64_ECX=18,
    CV_AMD64_SS=27,
    CV_AMD64_EDI=24,
    CV_REG_DX=11,
    CV_AMD64_SI=15,
    CV_REG_DS=28,
    CV_SHMEDIA_DR4=260,
    CV_AMD64_EDX=19,
    CV_SHMEDIA_DR2=258,
    CV_SHMEDIA_DR8=264,
    CV_SHMEDIA_DR6=262,
    CV_SHMEDIA_DR0=256,
    CV_ARM_CPSR=26,
    CV_REG_ES=25,
    CV_SH_Fpul=76,
    CV_REG_CH=6,
    CV_R68_FPIAR=30,
    CV_REG_BX=12,
    CV_AMD64_XMM7_3=193,
    CV_REG_BL=4,
    CV_AMD64_XMM7_0=190,
    CV_AMD64_XMM7_1=191,
    CV_AMD64_XMM7_2=192,
    CV_REG_BP=14,
    CV_REG_DH=7,
    CV_REG_DI=16,
    CV_REG_DL=3,
    CV_REG_CX=10,
    CV_REG_CL=2,
    CV_REG_CS=26,
    CV_REG_AH=5,
    CV_AM33_LAR=90,
    CV_AMD64_RAX=328,
    CV_IA64_Preds=768,
    CV_REG_BH=8,
    CV_SH3_IntR10=20,
    CV_TRI_E8=46,
    CV_TRI_E6=45,
    CV_AMD64_RBP=334,
    CV_TRI_E0=42,
    CV_TRI_E4=44,
    CV_SH3_IntR13=23,
    CV_SH3_IntR12=22,
    CV_TRI_E2=43,
    CV_REG_AX=9,
    CV_SH3_IntR11=21,
    CV_AMD64_RBX=329,
    CV_REG_AL=1,
    CV_M32R_SPO=30,
    CV_M32R_SPU=29,
    CV_SHMEDIA_R26=36,
    CV_SHMEDIA_R27=37,
    CV_SHMEDIA_R24=34,
    CV_SHMEDIA_R25=35,
    CV_PPC_BAT3L=635,
    CV_SHMEDIA_R28=38,
    CV_AMD64_RCX=330,
    CV_SHMEDIA_R29=39,
    CV_SHMEDIA_R22=32,
    CV_PPC_BAT3U=634,
    CV_SHMEDIA_R23=33,
    CV_SHMEDIA_R20=30,
    CV_SHMEDIA_R21=31,
    CV_IA64_CR97=4193,
    CV_IA64_CR98=4194,
    CV_PPC_BAT2U=632,
    CV_IA64_CR95=4191,
    CV_AMD64_XMM14_0=284,
    CV_IA64_CR96=4192,
    CV_SHMEDIA_PR=28,
    CV_IA64_CR99=4195,
    CV_AMD64_RDI=333,
    CV_REG_MM6=152,
    CV_REG_MM5=151,
    CV_IA64_CR90=4186,
    CV_REG_MM4=150,
    CV_REG_MM3=149,
    CV_REG_MM2=148,
    CV_IA64_CR93=4189,
    CV_AMD64_XMM14_2=286,
    CV_REG_MM1=147,
    CV_IA64_CR94=4190,
    CV_AMD64_XMM14_1=285,
    CV_REG_MM0=146,
    CV_IA64_CR91=4187,
    CV_M32R_BPC=31,
    CV_M4_Psr=51,
    CV_IA64_CR92=4188,
    CV_AMD64_XMM14_3=287,
    CV_SHMEDIA_R37=47,
    CV_SHMEDIA_R38=48,
    CV_SHMEDIA_R35=45,
    CV_SHMEDIA_R36=46,
    CV_SHMEDIA_PC=93,
    CV_PPC_BAT2L=633,
    CV_AMD64_RDX=331,
    CV_SHMEDIA_R39=49,
    CV_SHMEDIA_R30=40,
    CV_SHMEDIA_R33=43,
    CV_SHMEDIA_R34=44,
    CV_SHMEDIA_R31=41,
    CV_SHMEDIA_R32=42,
    CV_IA64_CR86=4182,
    CV_IA64_CR87=4183,
    CV_IA64_CR84=4180,
    CV_PPC_BAT1U=630,
    CV_IA64_CR85=4181,
    CV_IA64_CR88=4184,
    CV_IA64_CR89=4185,
    CV_TRI_MMUCON=77,
    CV_IA64_CR82=4178,
    CV_IA64_CR83=4179,
    CV_SH3_BdrB=68,
    CV_SHMEDIA_R48=58,
    CV_SHMEDIA_R49=59,
    CV_SHMEDIA_R46=56,
    CV_SHMEDIA_R47=57,
    CV_SHMEDIA_R40=50,
    CV_SHMEDIA_R41=51,
    CV_PPC_BAT1L=631,
    CV_SHMEDIA_R44=54,
    CV_SHMEDIA_R45=55,
    CV_SHMEDIA_R42=52,
    CV_SHMEDIA_R43=53,
    CV_R68_DRP=56,
    CV_PPC_BAT0U=628,
    CV_IA64_Nats=1020,
    CV_IA64_CR75=4171,
    CV_IA64_CR76=4172,
    CV_IA64_CR79=4175,
    CV_IA64_CR77=4173,
    CV_IA64_CR78=4174,
    CV_SHMEDIA_R59=69,
    CV_SHMEDIA_R57=67,
    CV_SHMEDIA_R58=68,
    CV_SHMEDIA_R51=61,
    CV_SHMEDIA_R52=62,
    CV_PPC_BAT0L=629,
    CV_SHMEDIA_R50=60,
    CV_SHMEDIA_R55=65,
    CV_SHMEDIA_R56=66,
    CV_SHMEDIA_R53=63,
    CV_SHMEDIA_R54=64,
    CV_IA64_CR62=4158,
    CV_IA64_Nats2=1021,
    CV_IA64_CR63=4159,
    CV_IA64_Nats3=1022,
    CV_TRI_D15=25,
    CV_TRI_D14=24,
    CV_TRI_PC=60,
    CV_TRI_D13=23,
    CV_TRI_D12=22,
    CV_TRI_D11=21,
    CV_IA64_CR60=4156,
    CV_TRI_D10=20,
    CV_IA64_CR61=4157,
    CV_AMD64_AH=5,
    CV_R68_USP=18,
    CV_AMD64_XMM3_3=177,
    CV_AMD64_XMM3_0=174,
    CV_AMD64_XMM3_1=175,
    CV_AMD64_XMM3_2=176,
    CV_IA64_CR53=4149,
    CV_IA64_CR54=4150,
    CV_IA64_CR51=4147,
    CV_IA64_CR52=4148,
    CV_IA64_CR57=4153,
    CV_IA64_CR58=4154,
    CV_IA64_CR55=4151,
    CV_IA64_CR56=4152,
    CV_TRI_TPA=80,
    CV_IA64_CR50=4146,
    CV_IA64_IntH15=847,
    CV_IA64_IntH14=846,
    CV_IA64_IntH13=845,
    CV_TRI_TPX=81,
    CV_R68_URP=43,
    CV_IA64_CR59=4155,
    CV_IA64_IntH12=844,
    CV_IA64_IntH11=843,
    CV_IA64_IntH10=842,
    CV_IA64_CR42=4138,
    CV_AMD64_RIP=33,
    CV_PPC_DCMP=1077,
    CV_IA64_CR43=4139,
    CV_IA64_CR40=4136,
    CV_IA64_SaLRR1=4177,
    CV_IA64_CR41=4137,
    CV_IA64_CR46=4142,
    CV_IA64_CR47=4143,
    CV_IA64_CR44=4140,
    CV_AMD64_FPCS=140,
    CV_REG_IP=31,
    CV_IA64_CR45=4141,
    CV_REG_XMM0=154,
    CV_REG_XMM7=161,
    CV_REG_XMM5=159,
    CV_REG_XMM6=160,
    CV_REG_XMM3=157,
    CV_REG_XMM4=158,
    CV_REG_XMM1=155,
    CV_REG_MM7=153,
    CV_REG_XMM2=156,
    CV_IA64_CR48=4144,
    CV_IA64_CR49=4145,
    CV_IA64_SaLRR0=4176,
    CV_IA64_CR31=4127,
    CV_IA64_CR32=4128,
    CV_IA64_CR30=4126,
    CV_AMD64_FPDO=141,
    CV_IA64_CR35=4131,
    CV_IA64_CR36=4132,
    CV_IA64_CR33=4129,
    CV_IA64_CR34=4130,
    CV_AMD64_FPDS=142,
    CV_SHMEDIA_R15=25,
    CV_SHMEDIA_R16=26,
    CV_SHMEDIA_R13=23,
    CV_SHMEDIA_R14=24,
    CV_SHMEDIA_R19=29,
    CV_SHMEDIA_R17=27,
    CV_SHMEDIA_R18=28,
    CV_IA64_CR39=4135,
    CV_M32R_SPI=28,
    CV_IA64_CR37=4133,
    CV_IA64_CR38=4134,
    CV_SHMEDIA_R11=21,
    CV_SHMEDIA_R12=22,
    CV_ALPHA_Fir=75,
    CV_IA64_RsPFS=3136,
    CV_SHMEDIA_R10=20,
    CV_PPC_GPR21=22,
    CV_PPC_GPR22=23,
    CV_PPC_GPR23=24,
    CV_PPC_DEC=122,
    CV_PPC_GPR24=25,
    CV_PPC_GPR25=26,
    CV_PPC_GPR26=27,
    CV_PPC_GPR27=28,
    CV_PPC_GPR28=29,
    CV_TRI_DBGSSR=72,
    CV_PPC_GPR29=30,
    CV_TRI_TVA=79,
    CV_IA64_SaEOI=4163,
    CV_REG_EBX=20,
    CV_SHMEDIA_DR58=314,
    CV_SHMEDIA_DR56=312,
    CV_SHMEDIA_DR54=310,
    CV_AMD64_DS=28,
    CV_IA64_CR28=4124,
    CV_IA64_CR29=4125,
    CV_SHMEDIA_DR52=308,
    CV_IA64_CR26=4122,
    CV_AMD64_DX=11,
    CV_IA64_CR27=4123,
    CV_SHMEDIA_DR50=306,
    CV_PPC_GPR30=31,
    CV_AMD64_MM30=242,
    CV_PPC_GPR31=32,
    CV_AMD64_MM31=243,
    CV_M32R_R8=18,
    CV_IA64_CR10=4106,
    CV_M32R_R7=17,
    CV_M32R_R6=16,
    CV_AMD64_ESI=23,
    CV_M32R_R5=15,
    CV_REG_EDI=24,
    CV_IA64_CR13=4109,
    CV_IA64_CR14=4110,
    CV_IA64_CR11=4107,
    CV_IA64_CR12=4108,
    CV_M32R_R9=19,
    CV_AMD64_DI=16,
    CV_AMD64_ESP=21,
    CV_AMD64_DH=7,
    CV_SH3_BdmrB=69,
    CV_TRI_LCX=62,
    CV_AMD64_DL=3,
    CV_ALPHA_SoftFpcr=78,
    CV_SHMEDIA_DR48=304,
    CV_SHMEDIA_DR46=302,
    CV_REG_ECX=18,
    CV_SHMEDIA_DR44=300,
    CV_SHMEDIA_DR42=298,
    CV_AMD64_CS=26,
    CV_M32R_R0=10,
    CV_SHMEDIA_DR40=296,
    CV_IA64_CR18=4114,
    CV_AMD64_CX=10,
    CV_IA64_CR15=4111,
    CV_M32R_R4=14,
    CV_M32R_R3=13,
    CV_AMD64_MM40=244,
    CV_M32R_R2=12,
    CV_AMD64_MM41=245,
    CV_M32R_R1=11,
    CV_IA64_SaITV=4168,
    CV_AMD64_CH=6,
    CV_AMD64_CL=2,
    CV_AMD64_BP=14,
    CV_M32R_PC=34,
    CV_AMD64_BX=12,
    CV_AMD64_MM50=246,
    CV_AMD64_MM51=247,
    CV_PPC_GPR10=11,
    CV_PPC_GPR11=12,
    CV_PPC_GPR12=13,
    CV_PPC_GPR13=14,
    CV_AMD64_MM60=248,
    CV_PPC_GPR14=15,
    CV_PPC_GPR15=16,
    CV_PPC_GPR16=17,
    CV_PPC_GPR17=18,
    CV_PPC_GPR18=19,
    CV_AMD64_BH=8,
    CV_PPC_GPR19=20,
    CV_REG_EBP=22,
    CV_AMD64_BL=4,
    CV_REG_EAX=17,
    CV_AMD64_AL=1,
    CV_SHMEDIA_DR62=318,
    CV_SHMEDIA_DR60=316,
    CV_IA64_SaIVR=4161,
    CV_AMD64_MM61=249,
    CV_PPC_GPR20=21,
    CV_AMD64_AX=9,
    CV_ALPHA_IntT11=67,
    CV_SHMEDIA_SR=2000,
    CV_ALPHA_IntT12=69,
    CV_ALPHA_IntT10=66,
    CV_REG_MXCSR=211,
    CV_REG_SP=13,
    CV_REG_SS=27,
    CV_SHMEDIA_DR18=274,
    CV_AMD64_FPIP=139,
    CV_SHMEDIA_DR16=272,
    CV_SHMEDIA_DR14=270,
    CV_REG_SI=15,
    CV_SHMEDIA_DR12=268,
    CV_SHMEDIA_DR10=266,
    CV_SHMEDIA_R62=72,
    CV_SHMEDIA_R63=73,
    CV_SHMEDIA_R60=70,
    CV_SHMEDIA_R61=71,
    CV_IA64_ApCCV=3104,
    CV_REG_TR=115,
    CV_REG_TEMP=40,
    CV_AMD64_GS=30,
    CV_AMD64_MM00=236,
    CV_AMD64_MM01=237,
    CV_SHMEDIA_R1=11,
    CV_SHMEDIA_R0=10,
    CV_SHMEDIA_R5=15,
    CV_SHMEDIA_R4=14,
    CV_SHMEDIA_R3=13,
    CV_SHMEDIA_R2=12,
    CV_IA64_ApKR2=3074,
    CV_IA64_ApKR1=3073,
    CV_SHMEDIA_DR38=294,
    CV_AMD64_FS=29,
    CV_IA64_ApKR0=3072,
    CV_SHMEDIA_DR36=292,
    CV_REG_EDX=19,
    CV_SHMEDIA_DR34=290,
    CV_SHMEDIA_DR32=288,
    CV_AMD64_MM10=238,
    CV_SHMEDIA_DR30=286,
    CV_AMD64_MM11=239,
    CV_TRI_DPMx_2=70,
    CV_TRI_DPMx_3=71,
    CV_TRI_DPMx_0=68,
    CV_TRI_DPMx_1=69,
    CV_R68_DFC=21,
    CV_IA64_ApKR7=3079,
    CV_IA64_ApKR6=3078,
    CV_AM33_MDRQ=83,
    CV_IA64_ApKR5=3077,
    CV_IA64_ApKR4=3076,
    CV_SHMEDIA_DR28=284,
    CV_IA64_ApKR3=3075,
    CV_SHMEDIA_DR26=282,
    CV_AMD64_ES=25,
    CV_SHMEDIA_DR24=280,
    CV_SHMEDIA_DR22=278,
    CV_SHMEDIA_DR20=276,
    CV_AMD64_RSI=332,
    CV_SHMEDIA_R9=19,
    CV_AMD64_MM21=241,
    CV_SHMEDIA_R8=18,
    CV_SHMEDIA_R7=17,
    CV_SHMEDIA_R6=16,
    CV_AMD64_RSP=335,
    CV_AMD64_MM20=240
} CV_HREG_e;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign=0,
    NEC98x86=1,
    EndAlternatives=2
} _ALTERNATIVE_ARCHITECTURE_TYPE;

typedef struct Stream Stream, *PStream;

struct Stream {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef uint UINT_PTR;

typedef int (* PFNVALIDATEDEBUGINFOFILE)(char *, ulong *);

typedef struct threadlocaleinfostruct * pthreadlocinfo;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE ALTERNATIVE_ARCHITECTURE_TYPE;

typedef int mbstate_t;


// WARNING! conflicting data type names: /subject.pdb/HINSTANCE__ - /WinDef.h/HINSTANCE__

typedef struct _IMAGE_OPTIONAL_HEADER64 * PIMAGE_OPTIONAL_HEADER64;

typedef enum SA_AccessType {
    SA_ReadWrite=3,
    SA_Read=1,
    SA_NoAccess=0,
    SA_Write=2
} SA_AccessType;

typedef struct _TP_CALLBACK_ENVIRON * PTP_CALLBACK_ENVIRON;

typedef int (* (* PfnPDBCopyQueryCallback)(void *, enum PCC))(void);

typedef int (* (* PFNDBIQUERYCALLBACK)(void *, enum DOVC))(void);

typedef struct EnumSrc EnumSrc, *PEnumSrc;

struct EnumSrc {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef union __m64 __m64, *P__m64;

union __m64 {
    ulong64 m64_u64;
    float m64_f32[2];
    char m64_i8[8];
    short m64_i16[4];
    int m64_i32[2];
    long64 m64_i64;
    uchar m64_u8[8];
    ushort m64_u16[4];
    uint m64_u32[2];
};

typedef struct EnumSyms EnumSyms, *PEnumSyms;

struct EnumSyms {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef void (* PPS_POST_PROCESS_INIT_ROUTINE)(void);


// WARNING! conflicting data type names: /subject.pdb/_EXCEPTION_POINTERS - /excpt.h/_EXCEPTION_POINTERS


// WARNING! conflicting data type names: /subject.pdb/_MEMORY_BASIC_INFORMATION - /winnt.h/_MEMORY_BASIC_INFORMATION

typedef ulong GDI_HANDLE_BUFFER[34];

typedef enum CV_CPU_TYPE_e {
    CV_CFL_PPC604=66,
    CV_CFL_ARM_XMAC=102,
    CV_CFL_MIPS64=19,
    CV_CFL_PPC603=65,
    CV_CFL_TRICORE=192,
    CV_CFL_X64=208,
    CV_CFL_M68000=32,
    CV_CFL_IA64=128,
    CV_CFL_ARM5T=100,
    CV_CFL_80386=3,
    CV_CFL_ALPHA_21264=51,
    CV_CFL_ALPHA_21064=48,
    CV_CFL_PPC601=64,
    CV_CFL_MIPSIV=23,
    CV_CFL_PPCBE=69,
    CV_CFL_MIPS16=17,
    CV_CFL_PPCFP=68,
    CV_CFL_MIPSII=21,
    CV_CFL_ARM3=96,
    CV_CFL_ARM4=97,
    CV_CFL_ARM5=99,
    CV_CFL_ARM6=101,
    CV_CFL_M68010=33,
    CV_CFL_ARM4T=98,
    CV_CFL_8080=0,
    CV_CFL_AMD64=208,
    CV_CFL_8086=1,
    CV_CFL_MIPSI=20,
    CV_CFL_MIPSV=24,
    CV_CFL_THUMB=240,
    CV_CFL_CEE=144,
    CV_CFL_M32R=176,
    CV_CFL_ALPHA=48,
    CV_CFL_PENTIUMPRO=6,
    CV_CFL_MIPSIII=22,
    CV_CFL_OMNI=112,
    CV_CFL_80286=2,
    CV_CFL_M68020=34,
    CV_CFL_IA64_2=129,
    CV_CFL_IA64_1=128,
    CV_CFL_80486=4,
    CV_CFL_PPC620=67,
    CV_CFL_ALPHA_21364=52,
    CV_CFL_ALPHA_21164=49,
    CV_CFL_EBC=224,
    CV_CFL_PENTIUMII=6,
    CV_CFL_AM33=160,
    CV_CFL_SH3DSP=82,
    CV_CFL_ARM_WMMX=103,
    CV_CFL_MIPS32=18,
    CV_CFL_SHMEDIA=84,
    CV_CFL_ALPHA_21164A=50,
    CV_CFL_M68030=35,
    CV_CFL_PENTIUMIII=7,
    CV_CFL_SH4=83,
    CV_CFL_SH3=80,
    CV_CFL_SH3E=81,
    CV_CFL_PENTIUM=5,
    CV_CFL_M68040=36,
    CV_CFL_MIPSR4000=16,
    CV_CFL_MIPS=16
} CV_CPU_TYPE_e;

typedef uint size_t;

typedef struct LIST_ENTRY64 LIST_ENTRY64, *PLIST_ENTRY64;

struct LIST_ENTRY64 {
    ulong64 Flink;
    ulong64 Blink;
};

typedef long LONG_PTR;

typedef uint uintptr_t;

typedef enum VerDataBlob {
    vdbOne=1,
    vdbPdataCur=1,
    vdbXdataCur=1
} VerDataBlob;

typedef struct <unnamed-tag_00001112> <unnamed-tag_00001112>, *P<unnamed-tag_00001112>;

struct <unnamed-tag_00001112> {
    char * locale;
    ushort * wlocale;
    int * refcount;
    int * wrefcount;
};

typedef struct _IMAGE_OPTIONAL_HEADER * PIMAGE_OPTIONAL_HEADER32;

typedef long NTSTATUS;


// WARNING! conflicting data type names: /subject.pdb/LPFILETIME - /WinDef.h/LPFILETIME

typedef ushort CV_typ16_t;

typedef struct _GUID _GUID, *P_GUID;

typedef struct _GUID * PSIG70;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct HKEY__ * * PHKEY;

typedef struct _KSYSTEM_TIME _KSYSTEM_TIME, *P_KSYSTEM_TIME;

struct _KSYSTEM_TIME {
    ulong LowPart;
    long High1Time;
    long High2Time;
};

typedef struct PreAttribute PreAttribute, *PPreAttribute;

struct PreAttribute {
    uint Deref;
    enum SA_YesNoMaybe Valid;
    enum SA_YesNoMaybe Null;
    enum SA_YesNoMaybe Tainted;
    enum SA_AccessType Access;
    uint ValidElementsConst;
    uint ValidBytesConst;
    wchar_t * ValidElements;
    wchar_t * ValidBytes;
    wchar_t * ValidElementsLength;
    wchar_t * ValidBytesLength;
    uint WritableElementsConst;
    uint WritableBytesConst;
    wchar_t * WritableElements;
    wchar_t * WritableBytes;
    wchar_t * WritableElementsLength;
    wchar_t * WritableBytesLength;
    uint ElementSizeConst;
    wchar_t * ElementSize;
    enum SA_YesNoMaybe NullTerminated;
    wchar_t * Condition;
};

typedef struct _IMAGE_NT_HEADERS _IMAGE_NT_HEADERS, *P_IMAGE_NT_HEADERS;

typedef struct _IMAGE_FILE_HEADER _IMAGE_FILE_HEADER, *P_IMAGE_FILE_HEADER;

struct _IMAGE_FILE_HEADER {
    ushort Machine;
    ushort NumberOfSections;
    ulong TimeDateStamp;
    ulong PointerToSymbolTable;
    ulong NumberOfSymbols;
    ushort SizeOfOptionalHeader;
    ushort Characteristics;
};

struct _IMAGE_NT_HEADERS {
    ulong Signature;
    struct _IMAGE_FILE_HEADER FileHeader;
    struct _IMAGE_OPTIONAL_HEADER OptionalHeader;
};


// WARNING! conflicting data type names: /subject.pdb/PBYTE - /WinDef.h/PBYTE

typedef struct SrcHeaderBlock SrcHeaderBlock, *PSrcHeaderBlock;

typedef struct <unnamed-type-ft> <unnamed-type-ft>, *P<unnamed-type-ft>;

struct <unnamed-type-ft> {
    ulong dwLowDateTime;
    ulong dwHighDateTime;
};

struct SrcHeaderBlock {
    int ver;
    int cb;
    struct <unnamed-type-ft> ft;
    int age;
    uchar rgbPad[44];
};

typedef struct threadlocaleinfostruct.conflict threadlocaleinfostruct.conflict, *Pthreadlocaleinfostruct.conflict;

struct threadlocaleinfostruct.conflict {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    ulong lc_handle[6];
    struct tagLC_ID lc_id[6];
    struct <unnamed-tag_00001112> lc_category[6];
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
};

typedef struct _PEB_LDR_DATA * PPEB_LDR_DATA;

typedef uchar UCHAR;

typedef long (* RegQueryValueExAProc)(struct HKEY__ *, char *, ulong *, ulong *, uchar *, ulong *);

typedef struct _stat64i32 _stat64i32, *P_stat64i32;

struct _stat64i32 {
    uint st_dev;
    ushort st_ino;
    ushort st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    uint st_rdev;
    long st_size;
    long64 st_atime;
    long64 st_mtime;
    long64 st_ctime;
};


// WARNING! conflicting data type names: /subject.pdb/LONGLONG - /winnt.h/LONGLONG

typedef enum _NT_PRODUCT_TYPE {
    NtProductLanManNt=2,
    NtProductWinNt=1,
    NtProductServer=3
} _NT_PRODUCT_TYPE;

typedef uint _dev_t;

typedef ulong IMPV;

typedef uint * PUINT_PTR;

typedef char _TSCHAR;

typedef int (* PDBCALLBACK)(void);

typedef enum _NT_PRODUCT_TYPE NT_PRODUCT_TYPE;

typedef struct Mod Mod, *PMod;

struct Mod {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};


// WARNING! conflicting data type names: /subject.pdb/HINSTANCE - /WinDef.h/HINSTANCE

typedef struct _TEB_ACTIVE_FRAME_CONTEXT * PCTEB_ACTIVE_FRAME_CONTEXT;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef struct _RTC_framedesc _RTC_framedesc, *P_RTC_framedesc;

struct _RTC_framedesc {
    int varCount;
    struct _RTC_vardesc * variables;
};

typedef enum ReplacesCorHdrNumericDefines {
    IMAGE_COR_MIH_BASICBLOCK=8,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE=255,
    COR_VTABLE_64BIT=2,
    COMIMAGE_FLAGS_ILONLY=1,
    COMIMAGE_FLAGS_32BITREQUIRED=2,
    MAX_CLASS_NAME=1024,
    IMAGE_COR_MIH_METHODRVA=1,
    NATIVE_TYPE_MAX_CB=1,
    MAX_PACKAGE_NAME=1024,
    COR_DELETED_NAME_LENGTH=8,
    COR_VERSION_MINOR=0,
    COR_VTABLEGAP_NAME_LENGTH=8,
    COR_VTABLE_FROM_UNMANAGED=4,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT=16,
    COMIMAGE_FLAGS_TRACKDEBUGDATA=65536,
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN=8,
    COR_VERSION_MAJOR_V2=2,
    COMIMAGE_FLAGS_IL_LIBRARY=4,
    COMIMAGE_FLAGS_STRONGNAMESIGNED=8,
    IMAGE_COR_EATJ_THUNK_SIZE=32,
    IMAGE_COR_MIH_EHRVA=2,
    COR_VTABLE_32BIT=1,
    COR_VERSION_MAJOR=2,
    COR_VTABLE_CALL_MOST_DERIVED=16
} ReplacesCorHdrNumericDefines;

typedef struct _tagSEARCHDEBUGINFO _tagSEARCHDEBUGINFO, *P_tagSEARCHDEBUGINFO;

struct _tagSEARCHDEBUGINFO {
    ulong cb;
    int fMainDebugFile;
    char * szMod;
    char * szLib;
    char * szObj;
    char * * rgszTriedThese;
    char szValidatedFile[260];
    int (* pfnValidateDebugInfoFile)(char *, ulong *);
    char * szExe;
};

typedef struct _s_CatchableTypeArray CatchableTypeArray;

typedef int (* PDBOpenValidate5Proc)(wchar_t *, wchar_t *, void *, int (* (* )(void *, enum POVC))(void), long *, wchar_t *, uint, struct PDB * *);

typedef ushort * PWSTR;

typedef struct DBI DBI, *PDBI;

struct DBI {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef ulong INTV;

typedef ulong64 DWORDLONG;


// WARNING! conflicting data type names: /subject.pdb/SIZE_T - /basetsd.h/SIZE_T

typedef long * PLONG;

typedef struct _EXCEPTION_REGISTRATION_RECORD * PEXCEPTION_REGISTRATION_RECORD;


// WARNING! conflicting data type names: /subject.pdb/LPSTR - /winnt.h/LPSTR

typedef struct SO SO, *PSO;

struct SO {
    long off;
    ushort isect;
    ushort pad;
};

typedef long (* RegOpenKeyExAProc)(struct HKEY__ *, char *, ulong, ulong, struct HKEY__ * *);

typedef int (* PfnPDBExportValidateInterface)(ulong);

typedef struct stat stat, *Pstat;

struct stat {
    uint st_dev;
    ushort st_ino;
    ushort st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    uint st_rdev;
    long st_size;
    long64 st_atime;
    long64 st_mtime;
    long64 st_ctime;
};

typedef struct _TP_POOL * PTP_POOL;

typedef struct _IMAGE_NT_HEADERS * PIMAGE_NT_HEADERS;

typedef uint rsize_t;

typedef ulong TI;

typedef struct _KUSER_SHARED_DATA _KUSER_SHARED_DATA, *P_KUSER_SHARED_DATA;

typedef union _KUSER_SHARED_DATA_u_800 _KUSER_SHARED_DATA_u_800, *P_KUSER_SHARED_DATA_u_800;

union _KUSER_SHARED_DATA_u_800 {
    struct _KSYSTEM_TIME TickCount;
    ulong64 TickCountQuad;
};

struct _KUSER_SHARED_DATA {
    ulong TickCountLowDeprecated;
    ulong TickCountMultiplier;
    struct _KSYSTEM_TIME InterruptTime;
    struct _KSYSTEM_TIME SystemTime;
    struct _KSYSTEM_TIME TimeZoneBias;
    ushort ImageNumberLow;
    ushort ImageNumberHigh;
    wchar_t NtSystemRoot[260];
    ulong MaxStackTraceDepth;
    ulong CryptoExponent;
    ulong TimeZoneId;
    ulong LargePageMinimum;
    ulong Reserved2[7];
    enum _NT_PRODUCT_TYPE NtProductType;
    uchar ProductTypeIsValid;
    undefined field_0x269;
    undefined field_0x26a;
    undefined field_0x26b;
    ulong NtMajorVersion;
    ulong NtMinorVersion;
    uchar ProcessorFeatures[64];
    ulong Reserved1;
    ulong Reserved3;
    ulong TimeSlip;
    enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    undefined field_0x2c4;
    undefined field_0x2c5;
    undefined field_0x2c6;
    undefined field_0x2c7;
    union _LARGE_INTEGER SystemExpirationDate;
    ulong SuiteMask;
    uchar KdDebuggerEnabled;
    undefined field_0x2d5;
    undefined field_0x2d6;
    undefined field_0x2d7;
    ulong ActiveConsoleId;
    ulong DismountCount;
    ulong ComPlusPackage;
    ulong LastSystemRITEventTickCount;
    ulong NumberOfPhysicalPages;
    uchar SafeBootMode;
    undefined field_0x2ed;
    undefined field_0x2ee;
    undefined field_0x2ef;
    ulong TraceLogging;
    undefined field_0x2f4;
    undefined field_0x2f5;
    undefined field_0x2f6;
    undefined field_0x2f7;
    ulong64 Fill0;
    ulong64 SystemCall[4];
    union _KUSER_SHARED_DATA_u_800 field_0x320;
    undefined field_0x32c;
    undefined field_0x32d;
    undefined field_0x32e;
    undefined field_0x32f;
};

typedef struct Dbg Dbg, *PDbg;

struct Dbg {
    undefined field_0x0;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
};

typedef void * * PPVOID;

typedef struct PostAttribute PostAttribute, *PPostAttribute;

struct PostAttribute {
    uint Deref;
    enum SA_YesNoMaybe Valid;
    enum SA_YesNoMaybe Null;
    enum SA_YesNoMaybe Tainted;
    enum SA_AccessType Access;
    uint ValidElementsConst;
    uint ValidBytesConst;
    wchar_t * ValidElements;
    wchar_t * ValidBytes;
    wchar_t * ValidElementsLength;
    wchar_t * ValidBytesLength;
    uint WritableElementsConst;
    uint WritableBytesConst;
    wchar_t * WritableElements;
    wchar_t * WritableBytes;
    wchar_t * WritableElementsLength;
    wchar_t * WritableBytesLength;
    uint ElementSizeConst;
    wchar_t * ElementSize;
    enum SA_YesNoMaybe NullTerminated;
    enum SA_YesNoMaybe MustCheck;
    wchar_t * Condition;
};

typedef ulong * LPDWORD;

typedef struct tagEXCEPTION_VISUALCPP_DEBUG_INFO tagEXCEPTION_VISUALCPP_DEBUG_INFO, *PtagEXCEPTION_VISUALCPP_DEBUG_INFO;

typedef union tagEXCEPTION_VISUALCPP_DEBUG_INFO_u_4 tagEXCEPTION_VISUALCPP_DEBUG_INFO_u_4, *PtagEXCEPTION_VISUALCPP_DEBUG_INFO_u_4;

typedef struct <unnamed-type-SetName> <unnamed-type-SetName>, *P<unnamed-type-SetName>;

typedef struct <unnamed-type-DebuggerProbe> <unnamed-type-DebuggerProbe>, *P<unnamed-type-DebuggerProbe>;

typedef struct <unnamed-type-RuntimeError> <unnamed-type-RuntimeError>, *P<unnamed-type-RuntimeError>;

struct <unnamed-type-RuntimeError> {
    ulong dwRuntimeNumber;
    int bRealBug;
    void * pvReturnAddress;
    uchar * pbDebuggerPresent;
    wchar_t * pwRuntimeMessage;
};

struct <unnamed-type-DebuggerProbe> {
    ulong dwLevelRequired;
    uchar * pbDebuggerPresent;
};

struct <unnamed-type-SetName> {
    char * szName;
    ulong dwThreadID;
    ulong dwFlags;
};

union tagEXCEPTION_VISUALCPP_DEBUG_INFO_u_4 {
    struct <unnamed-type-SetName> SetName;
    struct <unnamed-type-DebuggerProbe> DebuggerProbe;
    struct <unnamed-type-RuntimeError> RuntimeError;
};

struct tagEXCEPTION_VISUALCPP_DEBUG_INFO {
    ulong dwType;
    union tagEXCEPTION_VISUALCPP_DEBUG_INFO_u_4 field_0x4;
};

typedef IPDBError * (* PfnPDBErrorCreate)(struct PDB *);

typedef wchar_t * LPWCH;

typedef uchar BOOLEAN;


// WARNING! conflicting data type names: /subject.pdb/LPCWSTR - /winnt.h/LPCWSTR

typedef struct _PEB * PPEB;

typedef struct _TP_CALLBACK_INSTANCE * PTP_CALLBACK_INSTANCE;

typedef uchar * LPBYTE;

typedef struct _PEB_FREE_BLOCK * PPEB_FREE_BLOCK;

typedef long HRESULT;


// WARNING! conflicting data type names: /subject.pdb/DWORD_PTR - /basetsd.h/DWORD_PTR

typedef void (* PFNNOTEPDBUSED)(void *, wchar_t *, int, int);

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

struct localeinfo_struct {
    struct threadlocaleinfostruct * locinfo;
    struct threadmbcinfostruct * mbcinfo;
};

typedef ushort CV_columnpos_t;


// WARNING! conflicting data type names: /subject.pdb/PCONTEXT - /winnt.h/PCONTEXT

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef _EXCEPTION_DISPOSITION (* PEXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, void *, struct _CONTEXT *, void *);

typedef struct _IMAGE_NT_HEADERS * PIMAGE_NT_HEADERS32;

typedef enum PDBConsts {
    PDB_MAX_PATH=260,
    niNil=0,
    cbErrMax=1024
} PDBConsts;


// WARNING! conflicting data type names: /subject.pdb/PTOP_LEVEL_EXCEPTION_FILTER - /winbase.h/PTOP_LEVEL_EXCEPTION_FILTER

typedef char * LPTSTR;

typedef ushort wint_t;

typedef int (* PfnFindDebugInfoFile)(struct _tagSEARCHDEBUGINFO *);

typedef struct _EXCEPTION_RECORD.conflict _EXCEPTION_RECORD.conflict, *P_EXCEPTION_RECORD.conflict;

struct _EXCEPTION_RECORD.conflict {
    long ExceptionCode;
    ulong ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    void * ExceptionAddress;
    ulong NumberParameters;
    ulong ExceptionInformation[15];
};

typedef enum _RTC_ErrorNumber {
    _RTC_CVRT_LOSS_INFO=1,
    _RTC_CORRUPT_STACK=2,
    _RTC_CHKSTK=0,
    _RTC_CORRUPTED_ALLOCA=4,
    _RTC_UNINIT_LOCAL_USE=3,
    _RTC_ILLEGAL=5
} _RTC_ErrorNumber;

typedef int (* _RTC_error_fnW)(int, wchar_t *, int, wchar_t *, wchar_t *);

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

typedef struct EHParameters EHParameters, *PEHParameters;

struct EHParameters {
    ulong magicNumber;
    void * pExceptionObject;
    struct _s_ThrowInfo * pThrowInfo;
};

struct EHExceptionRecord {
    ulong ExceptionCode;
    ulong ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    void * ExceptionAddress;
    ulong NumberParameters;
    struct EHParameters params;
};

typedef struct _tagSEARCHDEBUGINFO * PSEARCHDEBUGINFO;

typedef struct _ldiv_t _ldiv_t, *P_ldiv_t;

struct _ldiv_t {
    long quot;
    long rem;
};

typedef struct _NT_TIB * PNT_TIB;

typedef enum VerLinkInfo {
    vliCur=2,
    vliTwo=2,
    vliOne=1
} VerLinkInfo;

typedef struct _EXCEPTION_POINTERS * PEXCEPTION_POINTERS;

typedef int (* PFNfReadPDBRawBytes)(void *, long);

typedef struct <unnamed-tag_000010FE> <unnamed-tag_000010FE>, *P<unnamed-tag_000010FE>;

struct <unnamed-tag_000010FE> {
    ulong LongFunction:1;
    ulong Private:31;
};

typedef int (* DBICALLBACK)(void);


// WARNING! conflicting data type names: /subject.pdb/PMEMORY_BASIC_INFORMATION - /winnt.h/PMEMORY_BASIC_INFORMATION

typedef struct _CLIENT_ID _CLIENT_ID, *P_CLIENT_ID;

struct _CLIENT_ID {
    void * UniqueProcess;
    void * UniqueThread;
};

typedef struct threadmbcinfostruct * pthreadmbcinfo;

typedef long (* RegCloseKeyProc)(struct HKEY__ *);

typedef ulong * PULONG;

typedef void (* _PVFV)(void);

typedef struct SrcHeaderW * PCSrcHeaderW;

typedef struct _EXCEPTION_POINTERS * LPEXCEPTION_POINTERS;

typedef struct _GDI_TEB_BATCH _GDI_TEB_BATCH, *P_GDI_TEB_BATCH;

struct _GDI_TEB_BATCH {
    ulong Offset;
    ulong HDC;
    ulong Buffer[310];
};

typedef void (* PCOOKIE_CHECK)(uint);

typedef ushort TI16;

typedef union <unnamed-tag_00001100> <unnamed-tag_00001100>, *P<unnamed-tag_00001100>;

union <unnamed-tag_00001100> {
    ulong Flags;
    struct <unnamed-tag_000010FE> s;
};

typedef ulong64 ULONGLONG;

typedef int (* _onexit_t)(void);

typedef int errno_t;

typedef struct _Wx86ThreadState _Wx86ThreadState, *P_Wx86ThreadState;

struct _Wx86ThreadState {
    ulong * CallBx86Eip;
    void * DeallocationCpu;
    uchar UseKnownWx86Dll;
    char OleStubInvoked;
};

typedef char * SZ_CONST;

typedef enum DBGTYPE {
} DBGTYPE;

typedef union <unnamed-tag_000011A1> <unnamed-tag_000011A1>, *P<unnamed-tag_000011A1>;

union <unnamed-tag_000011A1> {
    ulong PhysicalAddress;
    ulong VirtualSize;
};

typedef ulong CV_pubsymflag_t;


// WARNING! conflicting data type names: /subject.pdb/LPWSTR - /winnt.h/LPWSTR

typedef struct localeinfo_struct * _locale_t;

typedef void (* PMFN)(void);

typedef long64 __time64_t;

typedef struct _s_CatchableType CatchableType;

typedef struct _ACTIVATION_CONTEXT_STACK _ACTIVATION_CONTEXT_STACK, *P_ACTIVATION_CONTEXT_STACK;

struct _ACTIVATION_CONTEXT_STACK {
    ulong Flags;
    ulong NextCookieSequenceNumber;
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME * ActiveFrame;
    struct _LIST_ENTRY FrameListCache;
};

typedef struct _IMAGE_DOS_HEADER * PIMAGE_DOS_HEADER;

typedef char * PCSTR;

typedef struct _GUID * PCSIG70;

typedef struct TYPTYPE TYPTYPE, *PTYPTYPE;

struct TYPTYPE {
    ushort len;
    ushort leaf;
    uchar[0] data;
};

typedef enum PDBINTV {
    PDBIntv70Dep=20000406,
    PDBIntv50a=19970116,
    PDBIntv61=19980914,
    PDBIntv50=19960502,
    PDBIntv=20030901,
    PDBIntv41=920924,
    PDBIntv80=20030901,
    PDBIntv70=20001102,
    PDBIntv60=19970116,
    PDBIntv69=19990511
} PDBINTV;

typedef int (* (* PfnPDBQueryCallback)(void *, enum POVC))(void);

typedef struct NativeDll NativeDll, *PNativeDll;

struct NativeDll {
    undefined field_0x0;
};

typedef enum <unnamed-tag_00001405> {
    intv=20030901
} <unnamed-tag_00001405>;

typedef struct PostRangeAttribute PostRangeAttribute, *PPostRangeAttribute;

struct PostRangeAttribute {
    uint Deref;
    char * MinVal;
    char * MaxVal;
};

typedef struct PostBoundAttribute PostBoundAttribute, *PPostBoundAttribute;

struct PostBoundAttribute {
    uint Deref;
};

typedef struct SuccessAttribute SuccessAttribute, *PSuccessAttribute;

struct SuccessAttribute {
    wchar_t * Condition;
};

typedef struct PreRangeAttribute PreRangeAttribute, *PPreRangeAttribute;

struct PreRangeAttribute {
    uint Deref;
    char * MinVal;
    char * MaxVal;
};


// WARNING! conflicting data type names: /subject.pdb/vc_attributes/PreAttribute - /subject.pdb/PreAttribute

typedef struct PreBoundAttribute PreBoundAttribute, *PPreBoundAttribute;

struct PreBoundAttribute {
    uint Deref;
};

typedef enum YesNoMaybe {
    No=268369921,
    Maybe=268369936,
    Yes=268370176
} YesNoMaybe;


// WARNING! conflicting data type names: /subject.pdb/vc_attributes/PostAttribute - /subject.pdb/PostAttribute

typedef enum AccessType {
    Read=1,
    Write=2,
    ReadWrite=3,
    NoAccess=0
} AccessType;

typedef struct InvalidCheckAttribute InvalidCheckAttribute, *PInvalidCheckAttribute;

struct InvalidCheckAttribute {
    long Value;
};

typedef enum <unnamed-tag_00001341> {
    intv=20030901
} <unnamed-tag_00001341>;

typedef struct _LARGE_INTEGER_s_0 _LARGE_INTEGER_s_0, *P_LARGE_INTEGER_s_0;

struct _LARGE_INTEGER_s_0 {
    ulong LowPart;
    long HighPart;
};

typedef enum <unnamed-tag_00001499> {
    intv=20030901
} <unnamed-tag_00001499>;

typedef enum <unnamed-tag_000012B7> {
    intvVC70Dep=20000406,
    intv=20030901,
    intvVC70=20001102
} <unnamed-tag_000012B7>;

typedef struct source_annotation_attributeAttribute source_annotation_attributeAttribute, *Psource_annotation_attributeAttribute;

struct source_annotation_attributeAttribute {
    int ValidOn;
    bool AllowMultiple;
};

typedef struct repeatableAttribute repeatableAttribute, *PrepeatableAttribute;

struct repeatableAttribute {
    undefined field_0x0;
};

typedef enum <unnamed-tag_0000147D> {
    intv=20030901
} <unnamed-tag_0000147D>;


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\merr.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\crtexe.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\cinitexe.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\atonexit.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\gs_support.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\pesect.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\xthdloc.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\natstart.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\secchk.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\gs_report.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\wildcard.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\fp8.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\dllargv.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\gs_cookie.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\xncommod.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /subject.pdb/!_module_typedefs_/f:\dd\vctools\crt_bld\SELF_X86\crt\src\build\INTEL\xdll_obj\_newmode.obj/PUWSTR - /subject.pdb/PUWSTR


// WARNING! conflicting data type names: /stdlib.h/_onexit_t - /subject.pdb/_onexit_t


// WARNING! conflicting data type names: /internal.h/_startupinfo - /subject.pdb/_startupinfo




void __cdecl __setdefaultprecision(void)

{
  errno_t _ExpressionError;
  wchar_t *_Expression;
  wchar_t *_Function;
  wchar_t *_File;
  uint _Line;
  uintptr_t _Reserved;
  
  _Reserved = 0;
  _Line = 0x1f;
  _File = L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c";
  _Function = L"_setdefaultprecision";
  _Expression = L"_controlfp_s(((void *)0), 0x00010000, 0x00030000)";
  _ExpressionError = __controlfp_s((uint *)0x0,0x10000,0x30000);
  __invoke_watson_if_error(_ExpressionError,_Expression,_Function,_File,_Line,_Reserved);
  return;
}



int __cdecl __setargv(void)

{
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411bee. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fread();
  return sVar1;
}



void _DebugBreak_0(void)

{
                    // WARNING: Could not recover jumptable at 0x00413a22. Too many branches
                    // WARNING: Treating indirect jump as call
  DebugBreak();
  return;
}



char * __cdecl __RTC_GetErrDesc(_RTC_ErrorNumber param_1)

{
  if (param_1 < _RTC_ILLEGAL) {
    return _RTC_errlist[param_1];
  }
  return (char *)0x0;
}



void ___p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00412e66. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



void __fastcall ___security_check_cookie_4(uintptr_t _StackCookie)

{
  if (_StackCookie == __security_cookie) {
    return;
  }
  ___report_gsfailure();
  return;
}



BOOL _IsDebuggerPresent_0(void)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a16. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsDebuggerPresent();
  return BVar1;
}



void __cdecl __RTC_Terminate(void)

{
  _func__cdecl_void **pp_Var1;
  
  pp_Var1 = (_func__cdecl_void **)&DAT_004167ac;
  do {
    if (*pp_Var1 != (_func__cdecl_void *)0x0) {
      (**pp_Var1)();
    }
    pp_Var1 = pp_Var1 + 1;
  } while (pp_Var1 < __rtc_tzz);
  return;
}



int _WideCharToMultiByte_32
              (UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
              LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}



void __cdecl
__RTC_AllocaHelper_12(_RTC_ALLOCA_NODE *param_1,uint param_2,_RTC_ALLOCA_NODE **param_3)

{
  undefined *in_ECX;
  int iVar1;
  int in_EDX;
  undefined *puVar2;
  
  if (((in_ECX != (undefined *)0x0) && (in_EDX != 0)) &&
     (iVar1 = in_EDX, puVar2 = in_ECX, param_1 != (_RTC_ALLOCA_NODE *)0x0)) {
    while (iVar1 != 0) {
      *puVar2 = 0xcc;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    }
    *(int *)(in_ECX + 4) = param_1->guard1;
    *(int *)(in_ECX + 0xc) = in_EDX;
    param_1->guard1 = (int)in_ECX;
  }
  return;
}



_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr * __cdecl
_RTC_GetErrorFuncW(void *param_1)

{
  return _RTC_ErrorReportFuncW;
}



int __cdecl __RTC_NumErrors(void)

{
  return 5;
}



void ___setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x00412dd6. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _Sleep_4(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x004139f2. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



DWORD _GetModuleFileNameW_12(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a76. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}



void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint uStack28;
  uint uStack24;
  uint uStack16;
  _FILETIME _Stack12;
  
  _Stack12.dwLowDateTime = 0;
  _Stack12.dwHighDateTime = 0;
  if ((__security_cookie == 0xbb40e64e) || ((__security_cookie & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&_Stack12);
    uStack16 = _Stack12.dwLowDateTime ^ _Stack12.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    uStack16 = DVar1 ^ uStack16;
    DVar1 = GetCurrentThreadId();
    uStack16 = DVar1 ^ uStack16;
    DVar1 = GetTickCount();
    uStack16 = DVar1 ^ uStack16;
    QueryPerformanceCounter((LARGE_INTEGER *)&uStack28);
    uStack16 = uStack16 ^ uStack28 ^ uStack24;
    if (uStack16 == 0xbb40e64e) {
      uStack16 = 0xbb40e64f;
    }
    else {
      if ((uStack16 & 0xffff0000) == 0) {
        uStack16 = uStack16 << 0x10 | uStack16;
      }
    }
    __security_cookie = uStack16;
    __security_cookie_complement = ~uStack16;
  }
  else {
    __security_cookie_complement = ~__security_cookie;
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411be8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fclose();
  return iVar1;
}



LPTOP_LEVEL_EXCEPTION_FILTER
_SetUnhandledExceptionFilter_4(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a10. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0041311e. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void __CrtDbgReportW(void)

{
                    // WARNING: Could not recover jumptable at 0x004133a6. Too many branches
                    // WARNING: Treating indirect jump as call
  _CrtDbgReportW();
  return;
}



SIZE_T _VirtualQuery_12(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a7c. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



int _MultiByteToWideChar_24
              (UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
              LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a2e. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _perror(char *_ErrMsg)

{
                    // WARNING: Could not recover jumptable at 0x00411bfa. Too many branches
                    // WARNING: Treating indirect jump as call
  perror();
  return;
}



int __cdecl __RTC_SetErrorType(_RTC_ErrorNumber param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < _RTC_ILLEGAL) {
    iVar1 = _RTC_ErrorLevels[param_1];
    _RTC_ErrorLevels[param_1] = param_2;
    return iVar1;
  }
  return -1;
}



_EXCEPTION_DISPOSITION __cdecl
__except_handler4(_EXCEPTION_RECORD *param_1,_EXCEPTION_REGISTRATION_RECORD *param_2,
                 _CONTEXT *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  _Var1 = __except_handler4_common
                    (&__security_cookie,___security_check_cookie_4,param_1,param_2,param_3,param_4);
  return _Var1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139da. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock();
  return;
}



FARPROC _GetProcAddress_8(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a3a. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



void __cdecl __RTC_CheckStackVars_8(void *param_1,_RTC_framedesc *param_2)

{
  int iVar1;
  int in_ECX;
  int *in_EDX;
  int iVar2;
  void *unaff_retaddr;
  int iStack8;
  
  iVar2 = 0;
  iStack8 = 0;
  if (0 < *in_EDX) {
    do {
      iVar1 = *(int *)(in_EDX[1] + iVar2);
      if ((*(int *)(iVar1 + -4 + in_ECX) != -0x33333334) ||
         (*(int *)(*(int *)(in_EDX[1] + iVar2 + 4) + iVar1 + in_ECX) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(in_EDX[1] + 8 + iVar2));
      }
      iStack8 = iStack8 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iStack8 < *in_EDX);
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411bf4. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)fopen();
  return pFVar1;
}



void __cdecl ___report_gsfailure(void)

{
  ulong in_EAX;
  HANDLE hProcess;
  ulong in_ECX;
  ulong in_EDX;
  ulong unaff_EBX;
  ulong unaff_EBP;
  ulong unaff_ESI;
  ulong unaff_EDI;
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
  void *unaff_retaddr;
  UINT uExitCode;
  uint uStack812;
  uint uStack808;
  
  GS_ContextRecord.EFlags =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&uStack812 < 0) * 0x80 |
       (uint)((undefined *)register0x00000010 == (undefined *)0x32c) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT((uint)&uStack812 & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  GS_ContextRecord.Esp = (ulong)&stack0x00000004;
  GS_ContextRecord.ContextFlags = 0x10001;
  GS_ExceptionRecord.ExceptionCode = 0xc0000409;
  GS_ExceptionRecord.ExceptionFlags = 1;
  uStack812 = __security_cookie;
  uStack808 = __security_cookie_complement;
  GS_ExceptionRecord.ExceptionAddress = unaff_retaddr;
  GS_ContextRecord.SegGs._0_2_ = in_GS;
  GS_ContextRecord.SegFs._0_2_ = in_FS;
  GS_ContextRecord.SegEs._0_2_ = in_ES;
  GS_ContextRecord.SegDs._0_2_ = in_DS;
  GS_ContextRecord.Edi = unaff_EDI;
  GS_ContextRecord.Esi = unaff_ESI;
  GS_ContextRecord.Ebx = unaff_EBX;
  GS_ContextRecord.Edx = in_EDX;
  GS_ContextRecord.Ecx = in_ECX;
  GS_ContextRecord.Eax = in_EAX;
  GS_ContextRecord.Ebp = unaff_EBP;
  GS_ContextRecord.Eip = (ulong)unaff_retaddr;
  GS_ContextRecord.SegCs._0_2_ = in_CS;
  GS_ContextRecord.SegSs._0_2_ = in_SS;
  DebuggerWasPresent = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&GS_ExceptionPointers);
  if (DebuggerWasPresent == 0) {
    __crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004139bc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl _strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041195e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcat();
  return pcVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00413112. Too many branches
                    // WARNING: Treating indirect jump as call
  _exit();
  return;
}



DWORD _GetCurrentThreadId_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a52. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



void __initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004133ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl _strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411958. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl dumpline(uchar *param_1,ulong param_2,int param_3)

{
  int iVar1;
  void *extraout_EAX;
  int iVar2;
  _RTC_framedesc *extraout_EDX;
  uint *puVar3;
  uint auStack316 [50];
  size_t sStack116;
  int iStack104;
  char acStack92 [9];
  char acStack83 [75];
  uint uStack8;
  
  iVar2 = 0x4e;
  puVar3 = auStack316;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  uStack8 = __security_cookie ^ (uint)&stack0xfffffffc;
  sprintf(acStack92,"%08lX:",param_2);
  __RTC_CheckEsp();
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  iStack104 = 0;
  while (iStack104 < param_3) {
    sprintf(acStack83 + iStack104 * 3," %02lX",(uint)param_1[iStack104]);
    __RTC_CheckEsp();
    iStack104 = iStack104 + 1;
  }
  while( true ) {
    auStack316[0] = (uint)(iStack104 < 0x10);
    if (auStack316[0] == 0) break;
    iStack104 = iStack104 + 1;
    _strcat(acStack92,"   ");
  }
  iStack104 = iStack104 + 1;
  sStack116 = _strlen(acStack92);
  _strcpy(acStack92 + sStack116,"  |");
  iVar2 = sStack116 + 3;
  iStack104 = 0;
  while (iStack104 < param_3) {
    if ((param_1[iStack104] < 0x20) || (0x7e < param_1[iStack104])) {
      auStack316[0] = 0x2e;
    }
    else {
      auStack316[0] = (uint)param_1[iStack104];
    }
    acStack92[iVar2 + iStack104] = (char)auStack316[0];
    iStack104 = iStack104 + 1;
  }
  while (iStack104 < 0x10) {
    acStack92[iVar2 + iStack104] = ' ';
    iStack104 = iStack104 + 1;
  }
  iVar1 = iStack104 + sStack116;
  sStack116 = iVar2;
  _strcpy(acStack92 + iVar1 + 3,"|");
  printf("%s\n",acStack92);
  __RTC_CheckEsp();
  __RTC_CheckStackVars_8(extraout_EAX,extraout_EDX);
  ___security_check_cookie_4(uStack8 ^ (uint)&stack0xfffffffc);
  uStack8 = 0x4115f9;
  __RTC_CheckEsp();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl _strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411952. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcpy();
  return pcVar1;
}



HANDLE _GetCurrentProcess_0(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



void __encode_pointer(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fe4. Too many branches
                    // WARNING: Treating indirect jump as call
  _encode_pointer();
  return;
}



void __cdecl __RTC_UninitUse(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *unaff_retaddr;
  char acStack1032 [1024];
  uint uStack8;
  
  uStack8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (_RTC_ErrorLevels[3] == -1) goto LAB_00412b7b;
  if (param_1 == (char *)0x0) {
LAB_00412b5f:
    pcVar4 = "A variable is being used without being initialized.";
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar4 + (0x3a - (int)(param_1 + 1))) goto LAB_00412b5f;
    pcVar4 = acStack1032;
    iVar5 = 0;
    do {
      cVar1 = "The variable \'"[iVar5];
      acStack1032[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
      pcVar2 = param_1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    uVar6 = (uint)(pcVar2 + -(int)param_1) >> 2;
    puVar7 = (undefined4 *)param_1;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar2 + -(int)param_1) & 3;
    while (pcVar2 = "\' is being used without being initialized.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar8 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar3 + -0x415bd3) >> 2;
    puVar7 = (undefined4 *)"\' is being used without being initialized.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar3 + -0x415bd3) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  failwithmessage(unaff_retaddr,_RTC_ErrorLevels[3],3,pcVar4);
LAB_00412b7b:
  ___security_check_cookie_4(uStack8 ^ (uint)&stack0xfffffffc);
  return;
}



void __cdecl __RTC_Shutdown(void)

{
  __CRT_RTC_INITW(0,0,0,1,1);
  return;
}



PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PBYTE pBVar1;
  PIMAGE_SECTION_HEADER p_Stack16;
  uint uStack12;
  
  pBVar1 = pImageBase + *(int *)(pImageBase + 0x3c);
  uStack12 = 0;
  p_Stack16 = (PIMAGE_SECTION_HEADER)(pBVar1 + *(ushort *)(pBVar1 + 0x14) + 0x18);
  while( true ) {
    if (*(ushort *)(pBVar1 + 6) <= uStack12) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((p_Stack16->VirtualAddress <= rva) && (rva < p_Stack16->VirtualAddress + p_Stack16->Misc))
    break;
    uStack12 = uStack12 + 1;
    p_Stack16 = p_Stack16 + 1;
  }
  return p_Stack16;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl __configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412d4a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale();
  return iVar1;
}



void __cdecl __RTC_InitBase(void)

{
  _func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *p_Var1;
  
  if (_bss == '\0') {
    _bss = '\x01';
    p_Var1 = (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)
             __CRT_RTC_INITW(0,0,0,1,0);
    __RTC_SetErrorFuncW(p_Var1);
  }
  return;
}



void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined auStack1036 [4];
  char acStack1032 [1024];
  uint uStack8;
  
  uStack8 = __security_cookie ^ (uint)&stack0xfffffffc;
  auStack1036 = param_1;
  if (_RTC_ErrorLevels[2] == -1) goto LAB_0041283e;
  if (*param_2 == '\0') {
LAB_0041281f:
    pcVar4 = "Stack corrupted near unknown variable";
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar4 + (0x2d - (int)(param_2 + 1))) goto LAB_0041281f;
    pcVar4 = acStack1032;
    iVar5 = 0;
    do {
      cVar1 = "Stack around the variable \'"[iVar5];
      acStack1032[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)(auStack1036 + 3);
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    uVar6 = (uint)(pcVar2 + -(int)param_2) >> 2;
    puVar7 = (undefined4 *)param_2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar2 + -(int)param_2) & 3;
    while (pcVar2 = "\' was corrupted.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar8 = (undefined4 *)(auStack1036 + 3);
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar3 + -0x415baf) >> 2;
    puVar7 = (undefined4 *)"\' was corrupted.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar3 + -0x415baf) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  failwithmessage(param_1,_RTC_ErrorLevels[2],2,pcVar4);
LAB_0041283e:
  ___security_check_cookie_4(uStack8 ^ (uint)&stack0xfffffffc);
  return;
}



HMODULE _LoadLibraryA_4(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a40. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



void _RaiseException_16(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
                       ULONG_PTR *lpArguments)

{
                    // WARNING: Could not recover jumptable at 0x00413a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004133f4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook();
  return;
}



BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b) {
        BVar1 = 1;
      }
      else {
        BVar1 = 0;
      }
    }
    else {
      BVar1 = 0;
    }
  }
  else {
    BVar1 = 0;
  }
  return BVar1;
}



LONG _InterlockedCompareExchange_12(LONG *Destination,LONG Exchange,LONG Comperand)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139f8. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedCompareExchange(Destination,Exchange,Comperand);
  return LVar1;
}



HANDLE _GetProcessHeap_0(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetProcessHeap();
  return pvVar1;
}



_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr * __cdecl
__RTC_SetErrorFuncW(_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *param_1)

{
  _func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *p_Var1;
  
  p_Var1 = _RTC_ErrorReportFuncW;
  _RTC_ErrorReportFunc = (_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *)0x0;
  _RTC_ErrorReportFuncW = param_1;
  return p_Var1;
}



_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  uint uVar1;
  undefined4 uVar2;
  int **in_FS_OFFSET;
  undefined4 uStack40;
  _func__cdecl_int *p_Stack36;
  int aiStack32 [3];
  int *piStack20;
  code *pcStack16;
  uint uStack12;
  undefined4 uStack8;
  
  uStack8 = 0xfffffffe;
  pcStack16 = __except_handler4;
  piStack20 = *in_FS_OFFSET;
  uStack12 = __security_cookie ^ 0x416b18;
  uVar1 = __security_cookie ^ (uint)&stack0xfffffffc;
  *in_FS_OFFSET = (int *)&piStack20;
  aiStack32[0] = _decode_pointer(__onexitbegin,uVar1);
  if (aiStack32[0] == -1) {
    p_Stack36 = (*_imp___onexit)((_func__cdecl_int *)_Func);
  }
  else {
    __lock(8);
    uStack8 = 0;
    aiStack32[0] = _decode_pointer(__onexitbegin,uVar1);
    uStack40 = _decode_pointer(__onexitend);
    uVar2 = _encode_pointer(_Func,aiStack32,&uStack40);
    p_Stack36 = (_func__cdecl_int *)___dllonexit(uVar2);
    __onexitbegin = (_func__cdecl_void **)_encode_pointer(aiStack32[0]);
    __onexitend = (_func__cdecl_void **)_encode_pointer(uStack40);
    uStack8 = 0xfffffffe;
    FUN_00412f55();
  }
  *in_FS_OFFSET = piStack20;
  return (_onexit_t)p_Stack36;
}



_TEB * __cdecl _NtCurrentTeb(void)

{
  int in_FS_OFFSET;
  
  return *(_TEB **)(in_FS_OFFSET + 0x18);
}



BOOL _HeapFree_12(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a64. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}



_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr * __cdecl
__RTC_SetErrorFunc(_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *param_1)

{
  _func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *p_Var1;
  
  p_Var1 = _RTC_ErrorReportFunc;
  _RTC_ErrorReportFunc = param_1;
  _RTC_ErrorReportFuncW = (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)0x0;
  return p_Var1;
}



void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}



BOOL _TerminateProcess_8(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139fe. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}



int __cdecl entry(void)

{
  int iVar1;
  
  ___security_init_cookie();
  iVar1 = __tmainCRTStartup();
  return iVar1;
}



long __cdecl __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  long lVar1;
  
  if (((param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) &&
      (param_1->ExceptionRecord->NumberParameters == 3)) &&
     ((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930520 ||
      (((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930521 ||
        (param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930522)) ||
       (param_1->ExceptionRecord->ExceptionInformation[0] == 0x1994000)))))) {
    terminate();
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



int __cdecl ___CxxSetUnhandledExceptionFilter(void)

{
  SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}



BOOL _QueryPerformanceCounter_4(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a46. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}



void ___p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x00412e60. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock();
  return;
}



DWORD _GetCurrentProcessId_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a58. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



void __cdecl
__RTC_CheckStackVars2_12(void *param_1,_RTC_framedesc *param_2,_RTC_ALLOCA_NODE *param_3)

{
  int iVar1;
  void *pvVar2;
  int in_ECX;
  int *in_EDX;
  int iVar3;
  void *unaff_retaddr;
  int iStack8;
  
  iVar3 = 0;
  if ((in_EDX != (int *)0x0) && (iStack8 = 0, 0 < *in_EDX)) {
    do {
      iVar1 = *(int *)(in_EDX[1] + iVar3);
      if ((*(int *)(iVar1 + -4 + in_ECX) != -0x33333334) ||
         (*(int *)(*(int *)(in_EDX[1] + iVar3 + 4) + iVar1 + in_ECX) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(iVar3 + 8 + in_EDX[1]));
      }
      iStack8 = iStack8 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iStack8 < *in_EDX);
  }
  iVar3 = 0;
  pvVar2 = param_1;
  if (param_1 != (void *)0x0) {
    do {
      pvVar2 = *(void **)((int)pvVar2 + 4);
      iVar3 = iVar3 + 1;
    } while (pvVar2 != (void *)0x0);
    if (param_1 != (void *)0x0) {
      do {
        if ((((*(int *)param_1 != -0x33333334) || (*(int *)((int)param_1 + 0x14) != -0x33333334)) ||
            (((int *)((int)param_1 + 0x14))[1] != -0x33333334)) ||
           (((int *)((int)param_1 + 0x14))[2] != -0x33333334)) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_1,iVar3);
        }
        if (*(int *)((int)((int)param_1 + 0x14) + (*(uint *)((int)param_1 + 0xc) - 0x18)) !=
            -0x33333334) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_1,iVar3);
        }
        param_1 = *(_RTC_ALLOCA_NODE **)((int)param_1 + 4);
        iVar3 = iVar3 + -1;
      } while ((_RTC_ALLOCA_NODE *)param_1 != (_RTC_ALLOCA_NODE *)0x0);
    }
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl ___set_app_type(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412fea. Too many branches
                    // WARNING: Treating indirect jump as call
  __set_app_type();
  return;
}



int __cdecl hexdump(char *param_1)

{
  void *pvVar1;
  FILE *extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar2;
  _RTC_framedesc *extraout_EDX;
  _RTC_framedesc *extraout_EDX_00;
  _RTC_framedesc *extraout_EDX_01;
  _RTC_framedesc *p_Var3;
  undefined4 *puVar4;
  undefined4 auStack316 [49];
  int iStack120;
  stat sStack108;
  FILE *pFStack52;
  uint uStack40;
  uchar auStack28 [20];
  uint uStack8;
  
  iVar2 = 0x4e;
  puVar4 = auStack316;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  uStack8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = stat(param_1,&sStack108);
  if (iVar2 == 0) {
    fopen(param_1,"rb");
    __RTC_CheckEsp();
    if (extraout_EAX == (FILE *)0x0) {
      perror(param_1);
      __RTC_CheckEsp();
      pvVar1 = (void *)0x1;
      p_Var3 = extraout_EDX_00;
    }
    else {
      uStack40 = 0;
      pFStack52 = extraout_EAX;
      while (uStack40 < (uint)sStack108.st_size) {
        fread(auStack28,1,0x10,pFStack52);
        __RTC_CheckEsp();
        if (extraout_EAX_00 == 0) break;
        iStack120 = extraout_EAX_00;
        dumpline(auStack28,uStack40,extraout_EAX_00);
        uStack40 = uStack40 + iStack120;
      }
      fclose(pFStack52);
      __RTC_CheckEsp();
      pvVar1 = (void *)0x0;
      p_Var3 = extraout_EDX_01;
    }
  }
  else {
    perror(param_1);
    __RTC_CheckEsp();
    pvVar1 = (void *)0x1;
    p_Var3 = extraout_EDX;
  }
  __RTC_CheckStackVars_8(pvVar1,p_Var3);
  ___security_check_cookie_4(uStack8 ^ (uint)&stack0xfffffffc);
  uStack8 = 0x4117d7;
  __RTC_CheckEsp();
  return extraout_EAX_01;
}



void __cdecl __RTC_CheckEsp(void)

{
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return;
  }
  _RTC_Failure(unaff_retaddr,0);
  return;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  int extraout_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack220 [49];
  int iStack24;
  int iStack12;
  undefined4 uStack8;
  
  iVar1 = 0x36;
  puVar2 = auStack220;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iStack24 = 0;
  iStack12 = 1;
  while (iStack12 < _Argc) {
    iVar1 = hexdump(_Argv[iStack12]);
    iStack24 = iVar1 + iStack24;
    iStack12 = iStack12 + 1;
  }
  uStack8 = 0x41192c;
  __RTC_CheckEsp();
  return extraout_EAX;
}



void __cdecl __RTC_Initialize(void)

{
  _func__cdecl_void **pp_Var1;
  
  pp_Var1 = (_func__cdecl_void **)&DAT_004164a0;
  do {
    if (*pp_Var1 != (_func__cdecl_void *)0x0) {
      (**pp_Var1)();
    }
    pp_Var1 = pp_Var1 + 1;
  } while (pp_Var1 < __rtc_izz);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411964. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sprintf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139c2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



void _GetSystemTimeAsFileTime_4(LPFILETIME lpSystemTimeAsFileTime)

{
                    // WARNING: Could not recover jumptable at 0x00413a5e. Too many branches
                    // WARNING: Treating indirect jump as call
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}



void __decode_pointer(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e0. Too many branches
                    // WARNING: Treating indirect jump as call
  _decode_pointer();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x004139c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _invoke_watson();
  return;
}



int __cdecl
_RTC_GetSrcLine(uchar *param_1,wchar_t *param_2,ulong param_3,int *param_4,wchar_t *param_5,
               ulong param_6)

{
  char cVar1;
  SIZE_T SVar2;
  DWORD DVar3;
  int *piVar4;
  uchar **ppuVar5;
  FARPROC pFVar6;
  int iVar7;
  HANDLE pvVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  uchar *puVar12;
  _MEMORY_BASIC_INFORMATION _Stack72;
  undefined auStack44 [4];
  undefined4 uStack40;
  int iStack36;
  int iStack32;
  int *piStack28;
  uchar *puStack24;
  code **ppcStack20;
  int *piStack16;
  uint uStack12;
  code **ppcStack8;
  
  *param_4 = 0;
  puVar11 = param_1 + -1;
  *param_2 = L'\0';
  SVar2 = VirtualQuery(puVar11,(PMEMORY_BASIC_INFORMATION)&_Stack72,0x1c);
  if ((((SVar2 == 0) ||
       (DVar3 = GetModuleFileNameW((HMODULE)_Stack72.AllocationBase,param_5,param_6), DVar3 == 0))
      || (*(short *)(int *)_Stack72.AllocationBase != 0x5a4d)) ||
     ((((HMODULE)((int)_Stack72.AllocationBase + 0x3c))->unused < 1 ||
      (piVar4 = (int *)((int)(int *)_Stack72.AllocationBase +
                       ((HMODULE)((int)_Stack72.AllocationBase + 0x3c))->unused), *piVar4 != 0x4550)
      ))) {
    return 0;
  }
  uVar9 = (uint)*(ushort *)((int)piVar4 + 6);
  puVar11 = puVar11 + -(int)_Stack72.AllocationBase;
  puVar12 = (uchar *)0x0;
  uVar10 = 0;
  if (uVar9 != 0) {
    ppuVar5 = (uchar **)((int)piVar4 + *(ushort *)(piVar4 + 5) + 0x24);
    do {
      if ((*ppuVar5 <= puVar11) && (puVar12 = puVar11 + -(int)*ppuVar5, puVar11 < ppuVar5[-1]))
      break;
      uVar10 = uVar10 + 1;
      ppuVar5 = ppuVar5 + 10;
    } while (uVar10 < uVar9);
  }
  if (uVar10 == uVar9) {
    return 0;
  }
  if (DAT_00417558 == '\0') {
    if (mspdb != (HINSTANCE__ *)0x0) {
      return 0;
    }
    mspdb = GetPdbDll();
    if (mspdb == (HINSTANCE__ *)0x0) {
      return 0;
    }
    DAT_00417558 = '\x01';
  }
  pFVar6 = GetProcAddress((HMODULE)mspdb,"PDBOpenValidate5");
  ppuVar5 = (uchar **)0x0;
  if (pFVar6 == (FARPROC)0x0) {
    return 0;
  }
  iVar7 = (*pFVar6)(param_5,0,0,0,auStack44,0,0,&ppcStack20);
  if (iVar7 == 0) {
    return 0;
  }
  iStack32 = 0;
  iVar7 = (**(code **)*ppcStack20)();
  if ((iVar7 != 0x131a5b5) ||
     (iVar7 = (**(code **)(*ppcStack20 + 0x1c))(0,"r",&piStack28), iVar7 == 0)) goto LAB_004136ac;
  iVar7 = (**(code **)(*piStack28 + 0x20))(uVar10 + 1,puVar12,&piStack16,0,0,0);
  if (iVar7 != 0) {
    ppcStack8 = (code **)0x0;
    cVar1 = (**(code **)(*piStack16 + 0x68))(&ppcStack8);
    if ((cVar1 != '\0') && (ppcStack8 != (code **)0x0)) {
      iVar7 = (**(code **)(*ppcStack8 + 8))();
      while (iVar7 != 0) {
        cVar1 = (**(code **)(*ppcStack8 + 0xc))(0,&puStack24,&param_1,&iStack36,&uStack12,0);
        if (cVar1 == '\0') goto LAB_0041368f;
        if (((((uint)param_1 & 0xffff) == uVar10 + 1) && (puStack24 <= puVar12)) &&
           (puVar12 < puStack24 + iStack36)) {
          if ((uStack12 == 0) || (0x1ffffffe < uStack12)) goto LAB_0041368f;
          SVar2 = uStack12 * 8;
          DVar3 = 0;
          pvVar8 = GetProcessHeap();
          ppuVar5 = (uchar **)HeapAlloc(pvVar8,DVar3,SVar2);
          if (ppuVar5 == (uchar **)0x0) goto LAB_0041368f;
          cVar1 = (**(code **)(*ppcStack8 + 0xc))(&uStack40,0,0,0,&uStack12,ppuVar5);
          if ((cVar1 == '\0') || (puVar12 + -(int)puStack24 < *ppuVar5)) break;
          uVar9 = 1;
          if (1 < uStack12) goto LAB_00413640;
          goto LAB_0041364a;
        }
        iVar7 = (**(code **)(*ppcStack8 + 8))();
      }
      goto LAB_0041367f;
    }
    goto LAB_00413698;
  }
  goto LAB_004136a2;
  while (uVar9 = uVar9 + 1, uVar9 < uStack12) {
LAB_00413640:
    if (puVar12 + -(int)puStack24 < ppuVar5[uVar9 * 2]) break;
  }
LAB_0041364a:
  *param_4 = (uint)ppuVar5[uVar9 * 2 + -1] & 0xffffff;
  cVar1 = (**(code **)(*piStack16 + 0x70))(uStack40,param_2,&param_3,0,0,0);
  if (cVar1 != '\0') {
    iStack32 = 1;
  }
LAB_0041367f:
  DVar3 = 0;
  pvVar8 = GetProcessHeap();
  HeapFree(pvVar8,DVar3,ppuVar5);
LAB_0041368f:
  (**(code **)*ppcStack8)();
LAB_00413698:
  (**(code **)(*piStack16 + 0x40))();
LAB_004136a2:
  (**(code **)(*piStack28 + 0x38))();
LAB_004136ac:
  (**(code **)(*ppcStack20 + 0x28))();
  return iStack32;
}



void __CRT_RTC_INITW(void)

{
                    // WARNING: Could not recover jumptable at 0x00412ca6. Too many branches
                    // WARNING: Treating indirect jump as call
  _CRT_RTC_INITW();
  return;
}



DWORD _GetTickCount_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a4c. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetTickCount();
  return DVar1;
}



BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  int **in_FS_OFFSET;
  uint uStack76;
  PBYTE pBStack40;
  IMAGE_DOS_HEADER *pIStack32;
  uint *puStack28;
  int *piStack20;
  code *pcStack16;
  uint uStack12;
  undefined4 uStack8;
  
  pcStack16 = __except_handler4;
  piStack20 = *in_FS_OFFSET;
  uStack12 = __security_cookie ^ 0x416b38;
  uStack76 = __security_cookie ^ (uint)&stack0xfffffffc;
  puStack28 = &uStack76;
  *in_FS_OFFSET = (int *)&piStack20;
  pIStack32 = &IMAGE_DOS_HEADER_00400000;
  uStack8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    pBStack40 = pTarget + -(int)pIStack32;
    p_Var2 = __FindPESection((PBYTE)pIStack32,(DWORD_PTR)pBStack40);
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  *in_FS_OFFSET = piStack20;
  return uVar3;
}



LPVOID _HeapAlloc_12(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a6a. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413118. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter();
  return iVar1;
}



void __CrtSetCheckCount(void)

{
                    // WARNING: Could not recover jumptable at 0x0041312a. Too many branches
                    // WARNING: Treating indirect jump as call
  _CrtSetCheckCount();
  return;
}



LONG _InterlockedExchange_8(LONG *Target,LONG Value)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139ec. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedExchange(Target,Value);
  return LVar1;
}



LONG _UnhandledExceptionFilter_4(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a0a. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041194c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf();
  return iVar1;
}



void __except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



void __stat64i32(void)

{
                    // WARNING: Could not recover jumptable at 0x00411c00. Too many branches
                    // WARNING: Treating indirect jump as call
  _stat64i32();
  return;
}



int __cdecl __matherr(_exception *_Except)

{
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl
___getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412ff6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs();
  return iVar1;
}



int _lstrlenA_4(LPCSTR lpString)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = lstrlenA(lpString);
  return iVar1;
}



void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (_RTC_ErrorLevels[param_2] != -1) {
      failwithmessage(param_1,_RTC_ErrorLevels[param_2],param_2,_RTC_ErrorMessages[param_2]);
    }
    return;
  }
  failwithmessage(param_1,1,5,"Unknown Runtime Check Error\n\r");
  return;
}



void __cdecl _RTC_AllocaFailure(void *param_1,_RTC_ALLOCA_NODE *param_2,int param_3)

{
  int iVar1;
  HMODULE hModule;
  int iVar2;
  char *pcVar3;
  char acStack324 [244];
  char acStack80 [52];
  char acStack28 [20];
  uint uStack8;
  
  iVar1 = _RTC_ErrorLevels[4];
  uStack8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (_RTC_ErrorLevels[4] != -1) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      wsprintffp = (_func__cdecl_int_char_ptr_char_ptr *)GetProcAddress(hModule,"wsprintfA");
      if ((param_2 != (_RTC_ALLOCA_NODE *)0x0) &&
         (wsprintffp != (_func__cdecl_int_char_ptr_char_ptr *)0x0)) {
        (*wsprintffp)(acStack324,"%s%s%p%s%ld%s%d%s");
        _getMemBlockDataString(acStack28,acStack80,(char *)(param_2 + 1),param_2->allocaSize - 0x24)
        ;
        pcVar3 = "%s%s%s%s";
        iVar2 = lstrlenA(acStack324);
        (*wsprintffp)(acStack324 + iVar2,pcVar3);
        failwithmessage(param_1,iVar1,4,acStack324);
        ___security_check_cookie_4(uStack8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    failwithmessage(param_1,iVar1,4,
                    "Stack area around _alloca memory reserved by this function is corrupted\n");
  }
  ___security_check_cookie_4(uStack8 ^ (uint)&stack0xfffffffc);
  return;
}



int __cdecl _DebuggerKnownHandle(void)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = IsDebuggerPresent();
  if (BVar1 != 0) {
    iVar2 = DebuggerProbe(0x1004);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00413124. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



void ___dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004139d4. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



BOOL _FreeLibrary_4(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a82. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



void __initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004133b2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr * __cdecl _RTC_GetErrorFunc(void *param_1)

{
  return _RTC_ErrorReportFunc;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl dumpline(uchar *param_1,ulong param_2,int param_3)

{
  int iVar1;
  void *extraout_EAX;
  int iVar2;
  _RTC_framedesc *extraout_EDX;
  uint *puVar3;
  uint local_13c [50];
  size_t local_74;
  int local_68;
  char local_5c [9];
  char acStack83 [75];
  uint local_8;
  
  iVar2 = 0x4e;
  puVar3 = local_13c;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
                    // static local (stored at 00411614) <NoType> 
                    // static local (stored at 00411608) <NoType> 
                    // static local (stored at 00411600) <NoType>
  sprintf(local_5c,"%08lX:",param_2);
  __RTC_CheckEsp();
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  local_68 = 0;
  while (local_68 < param_3) {
    sprintf(acStack83 + local_68 * 3," %02lX",(uint)param_1[local_68]);
    __RTC_CheckEsp();
    local_68 = local_68 + 1;
  }
  while( true ) {
    local_13c[0] = (uint)(local_68 < 0x10);
    if (local_13c[0] == 0) break;
    local_68 = local_68 + 1;
    _strcat(local_5c,"   ");
  }
  local_68 = local_68 + 1;
  local_74 = _strlen(local_5c);
  _strcpy(local_5c + local_74,"  |");
  iVar2 = local_74 + 3;
  local_68 = 0;
  while (local_68 < param_3) {
    if ((param_1[local_68] < 0x20) || (0x7e < param_1[local_68])) {
      local_13c[0] = 0x2e;
    }
    else {
      local_13c[0] = (uint)param_1[local_68];
    }
    local_5c[iVar2 + local_68] = (char)local_13c[0];
    local_68 = local_68 + 1;
  }
  while (local_68 < 0x10) {
    local_5c[iVar2 + local_68] = ' ';
    local_68 = local_68 + 1;
  }
  iVar1 = local_68 + local_74;
  local_74 = iVar2;
  _strcpy(local_5c + iVar1 + 3,"|");
  printf("%s\n",local_5c);
  __RTC_CheckEsp();
  __RTC_CheckStackVars_8(extraout_EAX,extraout_EDX);
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  local_8 = 0x4115f9;
  __RTC_CheckEsp();
  return;
}



int __cdecl hexdump(char *param_1)

{
  void *pvVar1;
  FILE *extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar2;
  _RTC_framedesc *extraout_EDX;
  _RTC_framedesc *extraout_EDX_00;
  _RTC_framedesc *extraout_EDX_01;
  _RTC_framedesc *p_Var3;
  undefined4 *puVar4;
  undefined4 local_13c [49];
  int local_78;
  stat local_6c;
  FILE *local_34;
  uint local_28;
  uchar local_1c [20];
  uint local_8;
  
  iVar2 = 0x4e;
  puVar4 = local_13c;
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
                    // static local (stored at 004117ff) <NoType> 
                    // static local (stored at 004117fc) <NoType> 
                    // static local (stored at 004117e4) <NoType> 
                    // static local (stored at 004117dc) <NoType>
  iVar2 = stat(param_1,&local_6c);
  if (iVar2 == 0) {
    fopen(param_1,"rb");
    __RTC_CheckEsp();
    if (extraout_EAX == (FILE *)0x0) {
      perror(param_1);
      __RTC_CheckEsp();
      pvVar1 = (void *)0x1;
      p_Var3 = extraout_EDX_00;
    }
    else {
      local_28 = 0;
      local_34 = extraout_EAX;
      while (local_28 < (uint)local_6c.st_size) {
        fread(local_1c,1,0x10,local_34);
        __RTC_CheckEsp();
        if (extraout_EAX_00 == 0) break;
        local_78 = extraout_EAX_00;
        dumpline(local_1c,local_28,extraout_EAX_00);
        local_28 = local_28 + local_78;
      }
      fclose(local_34);
      __RTC_CheckEsp();
      pvVar1 = (void *)0x0;
      p_Var3 = extraout_EDX_01;
    }
  }
  else {
    perror(param_1);
    __RTC_CheckEsp();
    pvVar1 = (void *)0x1;
    p_Var3 = extraout_EDX;
  }
  __RTC_CheckStackVars_8(pvVar1,p_Var3);
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  local_8 = 0x4117d7;
  __RTC_CheckEsp();
  return extraout_EAX_01;
}



int __cdecl stat(char *param_1,stat *param_2)

{
  int extraout_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c4 [47];
  undefined4 uStack8;
  
  iVar1 = 0x30;
  puVar2 = local_c4;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  _stat64i32(param_1,param_2);
  __RTC_CheckEsp();
  uStack8 = 0x4118a8;
  __RTC_CheckEsp();
  return extraout_EAX;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  int extraout_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_dc [49];
  int local_18;
  int local_c;
  undefined4 uStack8;
  
  iVar1 = 0x36;
  puVar2 = local_dc;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_18 = 0;
  local_c = 1;
  while (local_c < _Argc) {
    iVar1 = hexdump(_Argv[local_c]);
    local_18 = iVar1 + local_18;
    local_c = local_c + 1;
  }
  uStack8 = 0x41192c;
  __RTC_CheckEsp();
  return extraout_EAX;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041194c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl _strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411952. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcpy();
  return pcVar1;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl _strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411958. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Exceeded maximum restarts with more pending

char * __cdecl _strcat(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041195e. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)strcat();
  return pcVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411964. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sprintf();
  return iVar1;
}



void __fastcall ___security_check_cookie_4(uintptr_t _StackCookie)

{
  if (_StackCookie == __security_cookie) {
    return;
  }
  ___report_gsfailure();
  return;
}



void __cdecl __RTC_CheckEsp(void)

{
  bool in_ZF;
  void *unaff_retaddr;
  
  if (in_ZF) {
    return;
  }
  _RTC_Failure(unaff_retaddr,0);
  return;
}



void __cdecl __RTC_CheckStackVars_8(void *param_1,_RTC_framedesc *param_2)

{
  int iVar1;
  int in_ECX;
  int *in_EDX;
  int iVar2;
  void *unaff_retaddr;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *in_EDX) {
    do {
      iVar1 = *(int *)(in_EDX[1] + iVar2);
      if ((*(int *)(iVar1 + -4 + in_ECX) != -0x33333334) ||
         (*(int *)(*(int *)(in_EDX[1] + iVar2 + 4) + iVar1 + in_ECX) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(in_EDX[1] + 8 + iVar2));
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0xc;
    } while (local_8 < *in_EDX);
  }
  return;
}



void __cdecl
__RTC_AllocaHelper_12(_RTC_ALLOCA_NODE *param_1,uint param_2,_RTC_ALLOCA_NODE **param_3)

{
  undefined *in_ECX;
  int iVar1;
  int in_EDX;
  undefined *puVar2;
  
  if (((in_ECX != (undefined *)0x0) && (in_EDX != 0)) &&
     (iVar1 = in_EDX, puVar2 = in_ECX, param_1 != (_RTC_ALLOCA_NODE *)0x0)) {
    while (iVar1 != 0) {
      *puVar2 = 0xcc;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    }
    *(int *)(in_ECX + 4) = param_1->guard1;
    *(int *)(in_ECX + 0xc) = in_EDX;
    param_1->guard1 = (int)in_ECX;
  }
  return;
}



void __cdecl
__RTC_CheckStackVars2_12(void *param_1,_RTC_framedesc *param_2,_RTC_ALLOCA_NODE *param_3)

{
  int iVar1;
  void *pvVar2;
  int in_ECX;
  int *in_EDX;
  int iVar3;
  void *unaff_retaddr;
  int local_8;
  
  iVar3 = 0;
  if ((in_EDX != (int *)0x0) && (local_8 = 0, 0 < *in_EDX)) {
    do {
      iVar1 = *(int *)(in_EDX[1] + iVar3);
      if ((*(int *)(iVar1 + -4 + in_ECX) != -0x33333334) ||
         (*(int *)(*(int *)(in_EDX[1] + iVar3 + 4) + iVar1 + in_ECX) != -0x33333334)) {
        _RTC_StackFailure(unaff_retaddr,*(char **)(iVar3 + 8 + in_EDX[1]));
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0xc;
    } while (local_8 < *in_EDX);
  }
  iVar3 = 0;
  pvVar2 = param_1;
  if (param_1 != (void *)0x0) {
    do {
      pvVar2 = *(void **)((int)pvVar2 + 4);
      iVar3 = iVar3 + 1;
    } while (pvVar2 != (void *)0x0);
    if (param_1 != (void *)0x0) {
      do {
        if ((((*(int *)param_1 != -0x33333334) || (*(int *)((int)param_1 + 0x14) != -0x33333334)) ||
            (((int *)((int)param_1 + 0x14))[1] != -0x33333334)) ||
           (((int *)((int)param_1 + 0x14))[2] != -0x33333334)) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_1,iVar3);
        }
        if (*(int *)((int)((int)param_1 + 0x14) + (*(uint *)((int)param_1 + 0xc) - 0x18)) !=
            -0x33333334) {
          _RTC_AllocaFailure(unaff_retaddr,(_RTC_ALLOCA_NODE *)param_1,iVar3);
        }
        param_1 = *(_RTC_ALLOCA_NODE **)((int)param_1 + 4);
        iVar3 = iVar3 + -1;
      } while ((_RTC_ALLOCA_NODE *)param_1 != (_RTC_ALLOCA_NODE *)0x0);
    }
  }
  return;
}



void __cdecl __RTC_InitBase(void)

{
  _func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *p_Var1;
  
                    // static local (stored at 00417140) bool init
  if (_bss == '\0') {
    _bss = '\x01';
    p_Var1 = (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)
             __CRT_RTC_INITW(0,0,0,1,0);
    __RTC_SetErrorFuncW(p_Var1);
  }
  return;
}



void __cdecl __RTC_Shutdown(void)

{
  __CRT_RTC_INITW(0,0,0,1,1);
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411be8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fclose();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411bee. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = fread();
  return sVar1;
}



// WARNING: Exceeded maximum restarts with more pending

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411bf4. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)fopen();
  return pFVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _perror(char *_ErrMsg)

{
                    // WARNING: Could not recover jumptable at 0x00411bfa. Too many branches
                    // WARNING: Treating indirect jump as call
  perror();
  return;
}



void __stat64i32(void)

{
                    // WARNING: Could not recover jumptable at 0x00411c00. Too many branches
                    // WARNING: Treating indirect jump as call
  _stat64i32();
  return;
}



int __cdecl pre_c_init(void)

{
  int *piVar1;
  
  managedapp = check_managed_app();
  __set_app_type(1);
  __onexitend = (_func__cdecl_void **)_encode_pointer(0xffffffff);
  __onexitbegin = __onexitend;
  piVar1 = (int *)__p__fmode();
  *piVar1 = _fmode;
  piVar1 = (int *)__p__commode();
  *piVar1 = _commode;
  _adjust_fdiv = *_imp___adjust_fdiv;
  __RTC_Initialize();
  __setargv();
  if (__defaultmatherr == 0) {
    __setusermatherr(__matherr);
  }
  __setdefaultprecision();
  if (__globallocalestatus == -1) {
    _configthreadlocale(-1);
  }
  return 0;
}



void __cdecl pre_cpp_init(void)

{
  _atexit(__RTC_Terminate);
  startinfo = _newmode;
  argret = __getmainargs(&argc,&argv,&envp,_dowildcard,(_startupinfo *)&startinfo);
  if (argret < 0) {
    __amsg_exit(8);
  }
  return;
}



int __cdecl _mainCRTStartup(void)

{
  int iVar1;
  
  ___security_init_cookie();
  iVar1 = __tmainCRTStartup();
  return iVar1;
}



int __cdecl __tmainCRTStartup(void)

{
  code *pcVar1;
  _TEB *p_Var2;
  int iVar3;
  BOOL BVar4;
  int **in_FS_OFFSET;
  uint uStack64;
  LONG local_28;
  LONG local_24;
  int local_20;
  uint *local_1c;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = __security_cookie ^ 0x416ab8;
  uStack64 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = &uStack64;
  *in_FS_OFFSET = (int *)&local_14;
  local_8 = 0;
  local_28 = 0;
  p_Var2 = _NtCurrentTeb();
  local_24 = *(LONG *)(p_Var2 + 4);
  local_20 = 0;
  while (local_28 = InterlockedCompareExchange((LONG *)&__native_startup_lock,local_24,0),
        local_28 != 0) {
    if (local_28 == local_24) {
      local_20 = 1;
      break;
    }
    Sleep(1000);
  }
  if (__native_startup_state == __initializing) {
    __amsg_exit(0x1f);
  }
  else {
    if (__native_startup_state == __uninitialized) {
      __native_startup_state = __initializing;
      iVar3 = __initterm_e(__xi_a,__xi_z);
      if (iVar3 != 0) {
        iVar3 = 0xff;
        goto LAB_00411fa4;
      }
    }
    else {
      has_cctor = 1;
    }
  }
  if (__native_startup_state == __initializing) {
    __initterm(__xc_a,__xc_z);
    __native_startup_state = __initialized;
  }
  if ((__native_startup_state != __initialized) &&
     (iVar3 = _CrtDbgReportW(2,L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\crtexe.c",500,0,
                             L"__native_startup_state == __initialized"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (local_20 == 0) {
    InterlockedExchange((LONG *)&__native_startup_lock,0);
  }
  if ((__dyn_tls_init_callback != (_func__cdecl_void_void_ptr_ulong_void_ptr *)0x0) &&
     (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&__dyn_tls_init_callback), BVar4 != 0)) {
    (*__dyn_tls_init_callback)((void *)0x0,2,(void *)0x0);
  }
  _CrtSetCheckCount(1);
  *_imp____initenv = (char *)envp;
  mainret = _main(argc,argv,envp);
  if (managedapp == 0) {
                    // WARNING: Subroutine does not return
    exit(mainret);
  }
  iVar3 = mainret;
  if (has_cctor == 0) {
    _cexit();
    iVar3 = mainret;
  }
LAB_00411fa4:
  *in_FS_OFFSET = local_14;
  return iVar3;
}



_TEB * __cdecl _NtCurrentTeb(void)

{
  int in_FS_OFFSET;
  
  return *(_TEB **)(in_FS_OFFSET + 0x18);
}



// WARNING: Removing unreachable block (ram,0x0041207d)
// WARNING: Removing unreachable block (ram,0x004120ba)
// WARNING: Removing unreachable block (ram,0x004120c3)
// WARNING: Removing unreachable block (ram,0x004120f4)
// WARNING: Removing unreachable block (ram,0x004120e5)
// WARNING: Removing unreachable block (ram,0x004120f8)
// WARNING: Removing unreachable block (ram,0x004120ce)
// WARNING: Removing unreachable block (ram,0x0041209b)

int __cdecl check_managed_app(void)

{
  return 0;
}



void __cdecl ___report_gsfailure(void)

{
  ulong in_EAX;
  HANDLE hProcess;
  ulong in_ECX;
  ulong in_EDX;
  ulong unaff_EBX;
  ulong unaff_EBP;
  ulong unaff_ESI;
  ulong unaff_EDI;
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
  void *unaff_retaddr;
  UINT uExitCode;
  uint local_32c;
  uint local_328;
  
  GS_ContextRecord.EFlags =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)((undefined *)register0x00000010 == (undefined *)0x32c) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  GS_ContextRecord.Esp = (ulong)&stack0x00000004;
  GS_ContextRecord.ContextFlags = 0x10001;
  GS_ExceptionRecord.ExceptionCode = 0xc0000409;
  GS_ExceptionRecord.ExceptionFlags = 1;
  local_32c = __security_cookie;
  local_328 = __security_cookie_complement;
  GS_ExceptionRecord.ExceptionAddress = unaff_retaddr;
  GS_ContextRecord.SegGs._0_2_ = in_GS;
  GS_ContextRecord.SegFs._0_2_ = in_FS;
  GS_ContextRecord.SegEs._0_2_ = in_ES;
  GS_ContextRecord.SegDs._0_2_ = in_DS;
  GS_ContextRecord.Edi = unaff_EDI;
  GS_ContextRecord.Esi = unaff_ESI;
  GS_ContextRecord.Ebx = unaff_EBX;
  GS_ContextRecord.Edx = in_EDX;
  GS_ContextRecord.Ecx = in_ECX;
  GS_ContextRecord.Eax = in_EAX;
  GS_ContextRecord.Ebp = unaff_EBP;
  GS_ContextRecord.Eip = (ulong)unaff_retaddr;
  GS_ContextRecord.SegCs._0_2_ = in_CS;
  GS_ContextRecord.SegSs._0_2_ = in_SS;
  DebuggerWasPresent = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&GS_ExceptionPointers);
  if (DebuggerWasPresent == 0) {
    __crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



int __cdecl _DebuggerKnownHandle(void)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = IsDebuggerPresent();
  if (BVar1 != 0) {
    iVar2 = DebuggerProbe(0x1004);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



int __cdecl DebuggerProbe(ulong param_1)

{
  int **in_FS_OFFSET;
  uint uStack72;
  ULONG_PTR local_38;
  ulong local_34;
  byte *local_30;
  byte local_1d;
  uint *local_1c;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = __security_cookie ^ 0x416ad8;
  uStack72 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = &uStack72;
  *in_FS_OFFSET = (int *)&local_14;
  local_1d = 0;
  local_38 = 0x1001;
  local_34 = param_1;
  local_30 = &local_1d;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,&local_38);
  *in_FS_OFFSET = local_14;
  return (uint)local_1d;
}



void __cdecl _RTC_Failure(void *param_1,int param_2)

{
  if ((uint)param_2 < 5) {
    if (_RTC_ErrorLevels[param_2] != -1) {
      failwithmessage(param_1,_RTC_ErrorLevels[param_2],param_2,_RTC_ErrorMessages[param_2]);
    }
    return;
  }
  failwithmessage(param_1,1,5,"Unknown Runtime Check Error\n\r");
  return;
}



void __cdecl failwithmessage(void *param_1,int param_2,int param_3,char *param_4)

{
  bool bVar1;
  _func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *p_Var2;
  uint cchWideChar;
  int iVar3;
  BOOL BVar4;
  char *pcVar5;
  char *pcVar6;
  _func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *local_e3c;
  wchar_t *local_e38;
  _func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *local_e34;
  WCHAR local_e30 [512];
  CHAR local_a30 [780];
  CHAR local_724 [780];
  wchar_t local_418 [260];
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_e3c = (_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *)0x0;
  local_e34 = _RTC_GetErrorFuncW(param_1);
  if (local_e34 == (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)0x0) {
    local_e3c = _RTC_GetErrorFunc(param_1);
  }
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_4,-1,(LPWSTR)0x0,0);
  if (cchWideChar < 0x200) {
    iVar3 = MultiByteToWideChar(0xfde9,0,param_4,-1,local_e30,cchWideChar);
    if (iVar3 == 0) goto LAB_00412483;
    local_e38 = local_e30;
  }
  else {
LAB_00412483:
    local_e38 = L"Runtime Check Error.\n\r Unable to display RTC Message.";
  }
  iVar3 = DebuggerProbe(0x1002);
  if (iVar3 == 0) {
    bVar1 = true;
  }
  else {
    iVar3 = DebuggerRuntime(param_3,_RTC_NoFalsePositives[param_3],param_1,local_e38);
    if (iVar3 != 0) goto LAB_004125e6;
    bVar1 = false;
  }
  p_Var2 = local_e34;
  if ((local_e3c != (_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *)0x0) ||
     (local_e34 != (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)0x0)) {
    if (bVar1) {
      BVar4 = IsDebuggerPresent();
      if (BVar4 != 0) goto LAB_004125e0;
    }
    _RTC_GetSrcLine((uchar *)((int)param_1 + -5),local_210,0x104,(int *)&local_e34,local_418,0x104);
    if (p_Var2 == (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)0x0) {
      pcVar5 = "Unknown Filename";
      iVar3 = WideCharToMultiByte(0xfde9,0,local_210,-1,local_a30,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 != 0) {
        pcVar5 = local_a30;
      }
      pcVar6 = "Unknown Module Name";
      iVar3 = WideCharToMultiByte(0xfde9,0,local_418,-1,local_724,0x30a,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar3 != 0) {
        pcVar6 = local_724;
      }
      iVar3 = (*local_e3c)(param_2,pcVar5,(int)local_e34,pcVar6,"Run-Time Check Failure #%d - %s");
    }
    else {
      iVar3 = (*p_Var2)(param_2,local_210,(int)local_e34,local_418,
                        L"Run-Time Check Failure #%d - %s");
    }
    if (iVar3 != 1) goto LAB_004125e6;
  }
LAB_004125e0:
  DebugBreak();
LAB_004125e6:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __cdecl DebuggerRuntime(ulong param_1,int param_2,void *param_3,wchar_t *param_4)

{
  int **in_FS_OFFSET;
  uint uStack72;
  ULONG_PTR local_38;
  ulong local_34;
  int local_30;
  void *local_2c;
  byte *local_28;
  wchar_t *local_24;
  byte local_1d;
  uint *local_1c;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = __security_cookie ^ 0x416af8;
  uStack72 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = &uStack72;
  *in_FS_OFFSET = (int *)&local_14;
  local_1d = 0;
  local_38 = 0x1002;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = &local_1d;
  local_24 = param_4;
  local_8 = 0;
  RaiseException(0x406d1388,0,6,&local_38);
  *in_FS_OFFSET = local_14;
  return (uint)local_1d;
}



void __cdecl _RTC_StackFailure(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined local_40c [4];
  char local_408 [1024];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40c = param_1;
  if (_RTC_ErrorLevels[2] == -1) goto LAB_0041283e;
  if (*param_2 == '\0') {
LAB_0041281f:
    pcVar4 = "Stack corrupted near unknown variable";
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar4 + (0x2d - (int)(param_2 + 1))) goto LAB_0041281f;
    pcVar4 = local_408;
    iVar5 = 0;
    do {
      cVar1 = "Stack around the variable \'"[iVar5];
      local_408[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
      pcVar2 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)(local_40c + 3);
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    uVar6 = (uint)(pcVar2 + -(int)param_2) >> 2;
    puVar7 = (undefined4 *)param_2;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar2 + -(int)param_2) & 3;
    while (pcVar2 = "\' was corrupted.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar8 = (undefined4 *)(local_40c + 3);
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar3 + -0x415baf) >> 2;
    puVar7 = (undefined4 *)"\' was corrupted.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar3 + -0x415baf) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  failwithmessage(param_1,_RTC_ErrorLevels[2],2,pcVar4);
LAB_0041283e:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __cdecl _RTC_AllocaFailure(void *param_1,_RTC_ALLOCA_NODE *param_2,int param_3)

{
  int iVar1;
  HMODULE hModule;
  int iVar2;
  char *pcVar3;
  char local_144 [244];
  char local_50 [52];
  char local_1c [20];
  uint local_8;
  
  iVar1 = _RTC_ErrorLevels[4];
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (_RTC_ErrorLevels[4] != -1) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      wsprintffp = (_func__cdecl_int_char_ptr_char_ptr *)GetProcAddress(hModule,"wsprintfA");
      if ((param_2 != (_RTC_ALLOCA_NODE *)0x0) &&
         (wsprintffp != (_func__cdecl_int_char_ptr_char_ptr *)0x0)) {
        (*wsprintffp)(local_144,"%s%s%p%s%ld%s%d%s");
        _getMemBlockDataString(local_1c,local_50,(char *)(param_2 + 1),param_2->allocaSize - 0x24);
        pcVar3 = "%s%s%s%s";
        iVar2 = lstrlenA(local_144);
        (*wsprintffp)(local_144 + iVar2,pcVar3);
        failwithmessage(param_1,iVar1,4,local_144);
        ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    failwithmessage(param_1,iVar1,4,
                    "Stack area around _alloca memory reserved by this function is corrupted\n");
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __cdecl _getMemBlockDataString(char *param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *local_8;
  
  local_8 = param_2;
  uVar4 = 0;
  pcVar3 = param_1;
  while( true ) {
    uVar2 = param_4;
    if (0xf < param_4) {
      uVar2 = 0x10;
    }
    if (uVar2 <= uVar4) break;
    cVar1 = (param_3 + -(int)param_1)[(int)pcVar3];
    (*wsprintffp)(local_8,"%.2X ");
    local_8 = local_8 + 3;
    *pcVar3 = cVar1;
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 1;
  }
  param_1[uVar4] = '\0';
  param_2[uVar4 * 3] = '\0';
  return;
}



void __cdecl __RTC_UninitUse(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *unaff_retaddr;
  char local_408 [1024];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (_RTC_ErrorLevels[3] == -1) goto LAB_00412b7b;
  if (param_1 == (char *)0x0) {
LAB_00412b5f:
    pcVar4 = "A variable is being used without being initialized.";
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((char *)0x400 < pcVar4 + (0x3a - (int)(param_1 + 1))) goto LAB_00412b5f;
    pcVar4 = local_408;
    iVar5 = 0;
    do {
      cVar1 = "The variable \'"[iVar5];
      local_408[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
      pcVar2 = param_1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar3 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar3 != '\0');
    uVar6 = (uint)(pcVar2 + -(int)param_1) >> 2;
    puVar7 = (undefined4 *)param_1;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar2 + -(int)param_1) & 3;
    while (pcVar2 = "\' is being used without being initialized.", uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar8 = (undefined4 *)&stack0xfffffbf7;
    do {
      pcVar2 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (*pcVar2 != '\0');
    uVar6 = (uint)(pcVar3 + -0x415bd3) >> 2;
    puVar7 = (undefined4 *)"\' is being used without being initialized.";
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = (uint)(pcVar3 + -0x415bd3) & 3;
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      *(undefined *)puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  failwithmessage(unaff_retaddr,_RTC_ErrorLevels[3],3,pcVar4);
LAB_00412b7b:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __cdecl __RTC_NumErrors(void)

{
  return 5;
}



char * __cdecl __RTC_GetErrDesc(_RTC_ErrorNumber param_1)

{
  if (param_1 < _RTC_ILLEGAL) {
    return _RTC_errlist[param_1];
  }
  return (char *)0x0;
}



int __cdecl __RTC_SetErrorType(_RTC_ErrorNumber param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < _RTC_ILLEGAL) {
    iVar1 = _RTC_ErrorLevels[param_1];
    _RTC_ErrorLevels[param_1] = param_2;
    return iVar1;
  }
  return -1;
}



_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr * __cdecl
__RTC_SetErrorFunc(_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *param_1)

{
  _func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *p_Var1;
  
  p_Var1 = _RTC_ErrorReportFunc;
  _RTC_ErrorReportFunc = param_1;
  _RTC_ErrorReportFuncW = (_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *)0x0;
  return p_Var1;
}



_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr * __cdecl
__RTC_SetErrorFuncW(_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *param_1)

{
  _func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr *p_Var1;
  
  p_Var1 = _RTC_ErrorReportFuncW;
  _RTC_ErrorReportFunc = (_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr *)0x0;
  _RTC_ErrorReportFuncW = param_1;
  return p_Var1;
}



_func__cdecl_int_int_char_ptr_int_char_ptr_char_ptr * __cdecl _RTC_GetErrorFunc(void *param_1)

{
  return _RTC_ErrorReportFunc;
}



_func__cdecl_int_int_wchar_t_ptr_int_wchar_t_ptr_wchar_t_ptr * __cdecl
_RTC_GetErrorFuncW(void *param_1)

{
  return _RTC_ErrorReportFuncW;
}



void __CRT_RTC_INITW(void)

{
                    // WARNING: Could not recover jumptable at 0x00412ca6. Too many branches
                    // WARNING: Treating indirect jump as call
  _CRT_RTC_INITW();
  return;
}



long __cdecl __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  long lVar1;
  
  if (((param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) &&
      (param_1->ExceptionRecord->NumberParameters == 3)) &&
     ((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930520 ||
      (((param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930521 ||
        (param_1->ExceptionRecord->ExceptionInformation[0] == 0x19930522)) ||
       (param_1->ExceptionRecord->ExceptionInformation[0] == 0x1994000)))))) {
    terminate();
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



int __cdecl ___CxxSetUnhandledExceptionFilter(void)

{
  SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl __configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412d4a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale();
  return iVar1;
}



void __cdecl __setdefaultprecision(void)

{
  errno_t _ExpressionError;
  wchar_t *_Expression;
  wchar_t *_Function;
  wchar_t *_File;
  uint _Line;
  uintptr_t _Reserved;
  
  _Reserved = 0;
  _Line = 0x1f;
  _File = L"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\intel\\fp8.c";
  _Function = L"_setdefaultprecision";
  _Expression = L"_controlfp_s(((void *)0), 0x00010000, 0x00030000)";
  _ExpressionError = __controlfp_s((uint *)0x0,0x10000,0x30000);
  __invoke_watson_if_error(_ExpressionError,_Expression,_Function,_File,_Line,_Reserved);
  return;
}



void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}



void ___setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x00412dd6. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



int __cdecl __matherr(_exception *_Except)

{
  return 0;
}



int __cdecl __setargv(void)

{
  return 0;
}



void __cdecl __RTC_Initialize(void)

{
  _func__cdecl_void **pp_Var1;
  
  pp_Var1 = (_func__cdecl_void **)&DAT_004164a0;
  do {
    if (*pp_Var1 != (_func__cdecl_void *)0x0) {
      (**pp_Var1)();
    }
    pp_Var1 = pp_Var1 + 1;
  } while (pp_Var1 < __rtc_izz);
  return;
}



void __cdecl __RTC_Terminate(void)

{
  _func__cdecl_void **pp_Var1;
  
  pp_Var1 = (_func__cdecl_void **)&DAT_004167ac;
  do {
    if (*pp_Var1 != (_func__cdecl_void *)0x0) {
      (**pp_Var1)();
    }
    pp_Var1 = pp_Var1 + 1;
  } while (pp_Var1 < __rtc_tzz);
  return;
}



void ___p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x00412e60. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



void ___p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00412e66. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  uint uVar1;
  undefined4 uVar2;
  int **in_FS_OFFSET;
  undefined4 local_28;
  _func__cdecl_int *local_24;
  int local_20 [3];
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = __security_cookie ^ 0x416b18;
  uVar1 = __security_cookie ^ (uint)&stack0xfffffffc;
  *in_FS_OFFSET = (int *)&local_14;
  local_20[0] = _decode_pointer(__onexitbegin,uVar1);
  if (local_20[0] == -1) {
    local_24 = (*_imp___onexit)((_func__cdecl_int *)_Func);
  }
  else {
    __lock(8);
    local_8 = 0;
    local_20[0] = _decode_pointer(__onexitbegin,uVar1);
    local_28 = _decode_pointer(__onexitend);
    uVar2 = _encode_pointer(_Func,local_20,&local_28);
    local_24 = (_func__cdecl_int *)___dllonexit(uVar2);
    __onexitbegin = (_func__cdecl_void **)_encode_pointer(local_20[0]);
    __onexitend = (_func__cdecl_void **)_encode_pointer(local_28);
    local_8 = 0xfffffffe;
    FUN_00412f55();
  }
  *in_FS_OFFSET = local_14;
  return (_onexit_t)local_24;
}



void FUN_00412f55(void)

{
  __unlock(8);
  return;
}



int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



void __encode_pointer(void)

{
                    // WARNING: Could not recover jumptable at 0x00412fe4. Too many branches
                    // WARNING: Treating indirect jump as call
  _encode_pointer();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl ___set_app_type(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412fea. Too many branches
                    // WARNING: Treating indirect jump as call
  __set_app_type();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00412ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl
___getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00412ff6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs();
  return iVar1;
}



void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  uint local_1c;
  uint local_18;
  uint local_10;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((__security_cookie == 0xbb40e64e) || ((__security_cookie & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    local_10 = local_c.dwLowDateTime ^ local_c.dwHighDateTime;
    DVar1 = GetCurrentProcessId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetCurrentThreadId();
    local_10 = DVar1 ^ local_10;
    DVar1 = GetTickCount();
    local_10 = DVar1 ^ local_10;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_1c);
    local_10 = local_10 ^ local_1c ^ local_18;
    if (local_10 == 0xbb40e64e) {
      local_10 = 0xbb40e64f;
    }
    else {
      if ((local_10 & 0xffff0000) == 0) {
        local_10 = local_10 << 0x10 | local_10;
      }
    }
    __security_cookie = local_10;
    __security_cookie_complement = ~local_10;
  }
  else {
    __security_cookie_complement = ~__security_cookie;
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00413112. Too many branches
                    // WARNING: Treating indirect jump as call
  _exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413118. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0041311e. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00413124. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



void __CrtSetCheckCount(void)

{
                    // WARNING: Could not recover jumptable at 0x0041312a. Too many branches
                    // WARNING: Treating indirect jump as call
  _CrtSetCheckCount();
  return;
}



BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  BOOL BVar1;
  
  if (*(short *)pImageBase == 0x5a4d) {
    if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
      if (*(short *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b) {
        BVar1 = 1;
      }
      else {
        BVar1 = 0;
      }
    }
    else {
      BVar1 = 0;
    }
  }
  else {
    BVar1 = 0;
  }
  return BVar1;
}



PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  PBYTE pBVar1;
  PIMAGE_SECTION_HEADER local_10;
  uint local_c;
  
  pBVar1 = pImageBase + *(int *)(pImageBase + 0x3c);
  local_c = 0;
  local_10 = (PIMAGE_SECTION_HEADER)(pBVar1 + *(ushort *)(pBVar1 + 0x14) + 0x18);
  while( true ) {
    if (*(ushort *)(pBVar1 + 6) <= local_c) {
      return (PIMAGE_SECTION_HEADER)0x0;
    }
    if ((local_10->VirtualAddress <= rva) && (rva < local_10->VirtualAddress + local_10->Misc))
    break;
    local_c = local_c + 1;
    local_10 = local_10 + 1;
  }
  return local_10;
}



BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  int **in_FS_OFFSET;
  uint uStack76;
  PBYTE local_28;
  IMAGE_DOS_HEADER *local_20;
  uint *local_1c;
  int *local_14;
  code *pcStack16;
  uint local_c;
  undefined4 local_8;
  
  pcStack16 = __except_handler4;
  local_14 = *in_FS_OFFSET;
  local_c = __security_cookie ^ 0x416b38;
  uStack76 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = &uStack76;
  *in_FS_OFFSET = (int *)&local_14;
  local_20 = &IMAGE_DOS_HEADER_00400000;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 == 0) {
    uVar3 = 0;
  }
  else {
    local_28 = pTarget + -(int)local_20;
    p_Var2 = __FindPESection((PBYTE)local_20,(DWORD_PTR)local_28);
    if (p_Var2 == (PIMAGE_SECTION_HEADER)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)((p_Var2->Characteristics & 0x80000000) == 0);
    }
  }
  *in_FS_OFFSET = local_14;
  return uVar3;
}



void __CrtDbgReportW(void)

{
                    // WARNING: Could not recover jumptable at 0x004133a6. Too many branches
                    // WARNING: Treating indirect jump as call
  _CrtDbgReportW();
  return;
}



void __initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004133ac. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void __initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004133b2. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



_EXCEPTION_DISPOSITION __cdecl
__except_handler4(_EXCEPTION_RECORD *param_1,_EXCEPTION_REGISTRATION_RECORD *param_2,
                 _CONTEXT *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  _Var1 = __except_handler4_common
                    (&__security_cookie,___security_check_cookie_4,param_1,param_2,param_3,param_4);
  return _Var1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004133f4. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook();
  return;
}



int __cdecl
_RTC_GetSrcLine(uchar *param_1,wchar_t *param_2,ulong param_3,int *param_4,wchar_t *param_5,
               ulong param_6)

{
  char cVar1;
  SIZE_T SVar2;
  DWORD DVar3;
  int *piVar4;
  uchar **ppuVar5;
  FARPROC pFVar6;
  int iVar7;
  HANDLE pvVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  uchar *puVar12;
  _MEMORY_BASIC_INFORMATION local_48;
  undefined local_2c [4];
  undefined4 local_28;
  int local_24;
  int local_20;
  int *local_1c;
  uchar *local_18;
  code **local_14;
  int *local_10;
  uint local_c;
  code **local_8;
  
                    // static local (stored at 00417558) bool PDBOK
  *param_4 = 0;
  puVar11 = param_1 + -1;
  *param_2 = L'\0';
  SVar2 = VirtualQuery(puVar11,(PMEMORY_BASIC_INFORMATION)&local_48,0x1c);
  if ((((SVar2 == 0) ||
       (DVar3 = GetModuleFileNameW((HMODULE)local_48.AllocationBase,param_5,param_6), DVar3 == 0))
      || (*(short *)(int *)local_48.AllocationBase != 0x5a4d)) ||
     ((((HMODULE)((int)local_48.AllocationBase + 0x3c))->unused < 1 ||
      (piVar4 = (int *)((int)(int *)local_48.AllocationBase +
                       ((HMODULE)((int)local_48.AllocationBase + 0x3c))->unused), *piVar4 != 0x4550)
      ))) {
    return 0;
  }
  uVar9 = (uint)*(ushort *)((int)piVar4 + 6);
  puVar11 = puVar11 + -(int)local_48.AllocationBase;
  puVar12 = (uchar *)0x0;
  uVar10 = 0;
  if (uVar9 != 0) {
    ppuVar5 = (uchar **)((int)piVar4 + *(ushort *)(piVar4 + 5) + 0x24);
    do {
      if ((*ppuVar5 <= puVar11) && (puVar12 = puVar11 + -(int)*ppuVar5, puVar11 < ppuVar5[-1]))
      break;
      uVar10 = uVar10 + 1;
      ppuVar5 = ppuVar5 + 10;
    } while (uVar10 < uVar9);
  }
  if (uVar10 == uVar9) {
    return 0;
  }
  if (DAT_00417558 == '\0') {
    if (mspdb != (HINSTANCE__ *)0x0) {
      return 0;
    }
    mspdb = GetPdbDll();
    if (mspdb == (HINSTANCE__ *)0x0) {
      return 0;
    }
    DAT_00417558 = '\x01';
  }
  pFVar6 = GetProcAddress((HMODULE)mspdb,"PDBOpenValidate5");
  ppuVar5 = (uchar **)0x0;
  if (pFVar6 == (FARPROC)0x0) {
    return 0;
  }
  iVar7 = (*pFVar6)(param_5,0,0,0,local_2c,0,0,&local_14);
  if (iVar7 == 0) {
    return 0;
  }
  local_20 = 0;
  iVar7 = (**(code **)*local_14)();
  if ((iVar7 != 0x131a5b5) || (iVar7 = (**(code **)(*local_14 + 0x1c))(0,"r",&local_1c), iVar7 == 0)
     ) goto LAB_004136ac;
  iVar7 = (**(code **)(*local_1c + 0x20))(uVar10 + 1,puVar12,&local_10,0,0,0);
  if (iVar7 != 0) {
    local_8 = (code **)0x0;
    cVar1 = (**(code **)(*local_10 + 0x68))(&local_8);
    if ((cVar1 != '\0') && (local_8 != (code **)0x0)) {
      iVar7 = (**(code **)(*local_8 + 8))();
      while (iVar7 != 0) {
        cVar1 = (**(code **)(*local_8 + 0xc))(0,&local_18,&param_1,&local_24,&local_c,0);
        if (cVar1 == '\0') goto LAB_0041368f;
        if (((((uint)param_1 & 0xffff) == uVar10 + 1) && (local_18 <= puVar12)) &&
           (puVar12 < local_18 + local_24)) {
          if ((local_c == 0) || (0x1ffffffe < local_c)) goto LAB_0041368f;
          SVar2 = local_c * 8;
          DVar3 = 0;
          pvVar8 = GetProcessHeap();
          ppuVar5 = (uchar **)HeapAlloc(pvVar8,DVar3,SVar2);
          if (ppuVar5 == (uchar **)0x0) goto LAB_0041368f;
          cVar1 = (**(code **)(*local_8 + 0xc))(&local_28,0,0,0,&local_c,ppuVar5);
          if ((cVar1 == '\0') || (puVar12 + -(int)local_18 < *ppuVar5)) break;
          uVar9 = 1;
          if (1 < local_c) goto LAB_00413640;
          goto LAB_0041364a;
        }
        iVar7 = (**(code **)(*local_8 + 8))();
      }
      goto LAB_0041367f;
    }
    goto LAB_00413698;
  }
  goto LAB_004136a2;
  while (uVar9 = uVar9 + 1, uVar9 < local_c) {
LAB_00413640:
    if (puVar12 + -(int)local_18 < ppuVar5[uVar9 * 2]) break;
  }
LAB_0041364a:
  *param_4 = (uint)ppuVar5[uVar9 * 2 + -1] & 0xffffff;
  cVar1 = (**(code **)(*local_10 + 0x70))(local_28,param_2,&param_3,0,0,0);
  if (cVar1 != '\0') {
    local_20 = 1;
  }
LAB_0041367f:
  DVar3 = 0;
  pvVar8 = GetProcessHeap();
  HeapFree(pvVar8,DVar3,ppuVar5);
LAB_0041368f:
  (**(code **)*local_8)();
LAB_00413698:
  (**(code **)(*local_10 + 0x40))();
LAB_004136a2:
  (**(code **)(*local_1c + 0x38))();
LAB_004136ac:
  (**(code **)(*local_14 + 0x28))();
  return local_20;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HINSTANCE__ * __cdecl GetPdbDll(void)

{
  HINSTANCE__ *extraout_EAX;
  HMODULE pHVar1;
  HINSTANCE__ *extraout_EAX_00;
  HINSTANCE__ *extraout_EAX_01;
  FARPROC pFVar2;
  FARPROC pFVar3;
  int iVar4;
  HINSTANCE__ *extraout_EAX_02;
  HINSTANCE__ *extraout_EAX_03;
  undefined local_11c [4];
  FARPROC local_118;
  undefined4 local_114;
  undefined4 local_110;
  CHAR local_10c [260];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
                    // static local (stored at 0041755c) int alreadyTried
  if (_DAT_0041755c != 0) {
    ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
    return extraout_EAX;
  }
  _DAT_0041755c = 1;
  pHVar1 = LoadLibraryA(mspdbName);
  if (pHVar1 == (HMODULE)0x0) {
    pHVar1 = LoadLibraryA("ADVAPI32.DLL");
    if (pHVar1 == (HMODULE)0x0) {
      ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
      return extraout_EAX_00;
    }
    local_118 = GetProcAddress(pHVar1,"RegOpenKeyExA");
    if (local_118 == (FARPROC)0x0) {
      ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
      return extraout_EAX_01;
    }
    pFVar2 = GetProcAddress(pHVar1,"RegQueryValueExA");
    if ((pFVar2 != (FARPROC)0x0) &&
       (pFVar3 = GetProcAddress(pHVar1,"RegCloseKey"), pFVar3 != (FARPROC)0x0)) {
      iVar4 = (*local_118)(0x80000002,"SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS",0,1,
                           &local_114);
      if ((iVar4 == 0) &&
         (((iVar4 = (*pFVar2)(local_114,"EnvironmentDirectory",0,local_11c,0,&local_110), iVar4 == 0
           && (0xc < 0x7fffffffU - local_110)) && (local_110 + 0xdU < 0x104)))) {
        iVar4 = (*pFVar2)(local_114,"EnvironmentDirectory",0,local_11c,local_10c,&local_110);
        (*pFVar3)(local_114);
        FreeLibrary(pHVar1);
        if (iVar4 == 0) {
          if (local_10c[local_110 + -2] == '\\') {
            local_110 = local_110 + -1;
          }
          else {
            local_10c[local_110 + -1] = '\\';
          }
          iVar4 = 0;
          do {
            local_10c[iVar4 + local_110] = mspdbName[iVar4];
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0xc);
          LoadLibraryA(local_10c);
          ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
          return extraout_EAX_02;
        }
      }
      else {
        FreeLibrary(pHVar1);
      }
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return extraout_EAX_03;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004139bc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139c2. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s();
  return eVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    // WARNING: Could not recover jumptable at 0x004139c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _invoke_watson();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139ce. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock();
  return;
}



void ___dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004139d4. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl __lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x004139da. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock();
  return;
}



void __decode_pointer(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e0. Too many branches
                    // WARNING: Treating indirect jump as call
  _decode_pointer();
  return;
}



void __except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x004139e6. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



LONG _InterlockedExchange_8(LONG *Target,LONG Value)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139ec. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedExchange(Target,Value);
  return LVar1;
}



void _Sleep_4(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x004139f2. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LONG _InterlockedCompareExchange_12(LONG *Destination,LONG Exchange,LONG Comperand)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139f8. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedCompareExchange(Destination,Exchange,Comperand);
  return LVar1;
}



BOOL _TerminateProcess_8(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x004139fe. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}



HANDLE _GetCurrentProcess_0(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



LONG _UnhandledExceptionFilter_4(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a0a. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}



LPTOP_LEVEL_EXCEPTION_FILTER
_SetUnhandledExceptionFilter_4(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a10. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



BOOL _IsDebuggerPresent_0(void)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a16. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsDebuggerPresent();
  return BVar1;
}



void _RaiseException_16(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
                       ULONG_PTR *lpArguments)

{
                    // WARNING: Could not recover jumptable at 0x00413a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}



void _DebugBreak_0(void)

{
                    // WARNING: Could not recover jumptable at 0x00413a22. Too many branches
                    // WARNING: Treating indirect jump as call
  DebugBreak();
  return;
}



int _WideCharToMultiByte_32
              (UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
              LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}



int _MultiByteToWideChar_24
              (UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
              LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a2e. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}



int _lstrlenA_4(LPCSTR lpString)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = lstrlenA(lpString);
  return iVar1;
}



FARPROC _GetProcAddress_8(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a3a. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



HMODULE _LoadLibraryA_4(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a40. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



BOOL _QueryPerformanceCounter_4(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a46. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}



DWORD _GetTickCount_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a4c. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetTickCount();
  return DVar1;
}



DWORD _GetCurrentThreadId_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a52. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



DWORD _GetCurrentProcessId_0(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a58. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



void _GetSystemTimeAsFileTime_4(LPFILETIME lpSystemTimeAsFileTime)

{
                    // WARNING: Could not recover jumptable at 0x00413a5e. Too many branches
                    // WARNING: Treating indirect jump as call
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}



BOOL _HeapFree_12(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a64. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}



LPVOID _HeapAlloc_12(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a6a. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}



HANDLE _GetProcessHeap_0(void)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = GetProcessHeap();
  return pvVar1;
}



DWORD _GetModuleFileNameW_12(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a76. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}



SIZE_T _VirtualQuery_12(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a7c. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}



BOOL _FreeLibrary_4(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00413a82. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


