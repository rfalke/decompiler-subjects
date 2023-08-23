typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

typedef struct _s_HandlerType HandlerType;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    dword hash;
    void * spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor * pType;
    ptrdiff_t dispCatchObj;
    void * addressOfHandler;
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void * UniqueProcess;
    void * UniqueThread;
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (* action)(void);
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType * pHandlerArray;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

typedef struct _s_ESTypeList ESTypeList;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry * pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry * pTryBlockMap;
    uint nIPMapEntries;
    void * pIPToStateMap;
    ESTypeList * pESTypeList;
    int EHFlags;
};

struct _s_ESTypeList {
    int nCount;
    HandlerType * pTypeArray;
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

typedef enum _HEAP_INFORMATION_CLASS {
    HeapCompatibilityInformation=0,
    HeapEnableTerminationOnCorruption=1
} _HEAP_INFORMATION_CLASS;

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

typedef enum _HEAP_INFORMATION_CLASS HEAP_INFORMATION_CLASS;

typedef struct _IMAGE_SECTION_HEADER * PIMAGE_SECTION_HEADER;

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

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[16];
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

typedef uint uintptr_t;

typedef struct basic_streambuf<char,struct_std::char_traits<char>_> basic_streambuf<char,struct_std::char_traits<char>_>, *Pbasic_streambuf<char,struct_std::char_traits<char>_>;

struct basic_streambuf<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct basic_ostream<char,struct_std::char_traits<char>_> basic_ostream<char,struct_std::char_traits<char>_>, *Pbasic_ostream<char,struct_std::char_traits<char>_>;

struct basic_ostream<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_ios<char,struct_std::char_traits<char>_> basic_ios<char,struct_std::char_traits<char>_>, *Pbasic_ios<char,struct_std::char_traits<char>_>;

struct basic_ios<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef int (* _onexit_t)(void);

typedef uint size_t;

typedef int errno_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




void thunk_FUN_00401110(void)

{
  int *this;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EBP;
  
  this = thunk_FUN_00401190((int *)cout_exref,"MyClass::~MyClass()");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)this,unaff_EBP);
  return;
}



int __fastcall thunk_FUN_00401660(int param_1)

{
  return (*(char *)(param_1 + 4) != '\0') - 1;
}



void __cdecl thunk_FUN_00401530(char *param_1)

{
  strlen(param_1);
  return;
}



bool __cdecl thunk_FUN_00401550(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



void __thiscall thunk_FUN_00401150(void *this,int param_1)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this_00;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var1;
  
                    // WARNING: Load size is inaccurate
  p_Var1 = endl_exref;
  this_00 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                      ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                       *this + param_1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this_00,p_Var1);
  return;
}



undefined4 thunk_FUN_00401570(void)

{
  return 0xffffffff;
}



void __fastcall thunk_FUN_00401620(int **param_1)

{
  bool bVar1;
  
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  thunk_FUN_00401700(param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x004012c7)
// WARNING: Removing unreachable block (ram,0x00401398)

int * thunk_FUN_00401190(int *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar5;
  int *piVar6;
  __int64 _Var7;
  uint uStack_78;
  uint uStack_68;
  int iStack_64;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int *apiStack_34 [2];
  undefined8 uStack_2c;
  uint uStack_24;
  int iStack_20;
  uint uStack_18;
  uint *puStack_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004032f0;
  pvStack_10 = ExceptionList;
  uStack_78 = DAT_00407000 ^ (uint)&stack0xfffffffc;
  puStack_14 = &uStack_78;
  ExceptionList = &pvStack_10;
  uStack_18 = 0;
  uStack_24 = thunk_FUN_00401530(param_2);
  iStack_20 = 0;
  _Var7 = std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  iStack_4c = (int)((ulonglong)_Var7 >> 0x20);
  if ((-1 < _Var7) && ((0 < iStack_4c || (iStack_50 = (int)_Var7, iStack_50 != 0)))) {
    _Var7 = std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
    iStack_54 = (int)((ulonglong)_Var7 >> 0x20);
    if ((iStack_20 <= iStack_54) &&
       ((iStack_20 < iStack_54 || (uStack_58 = (uint)_Var7, uStack_24 < uStack_58)))) {
      _Var7 = std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
      uStack_2c = _Var7 - CONCAT44(iStack_20,uStack_24);
      goto LAB_00401252;
    }
  }
  uStack_2c = 0;
LAB_00401252:
  thunk_FUN_00401580(apiStack_34,param_1);
  iVar3 = thunk_FUN_00401660((int)apiStack_34);
  if (iVar3 == -1) {
    uStack_18 = uStack_18 | 4;
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               ((int)param_1 + *(int *)(*param_1 + 4)),uStack_18,false);
    thunk_FUN_00401620(apiStack_34);
    ExceptionList = pvStack_10;
    return param_1;
  }
  uStack_8 = 0;
  uVar4 = std::ios_base::flags((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  if ((uVar4 & 0x1c0) != 0x40) {
    while (0 < uStack_2c) {
      cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                        ((basic_ios<char,struct_std::char_traits<char>_> *)
                         ((int)param_1 + *(int *)(*param_1 + 4)));
      pbVar5 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((int)param_1 + *(int *)(*param_1 + 4)));
      iStack_38 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar5,cVar1);
      iStack_3c = thunk_FUN_00401570();
      bVar2 = thunk_FUN_00401550(&iStack_3c,&iStack_38);
      if (bVar2) {
        uStack_18 = uStack_18 | 4;
        break;
      }
      uStack_2c = CONCAT44(uStack_2c._4_4_ - (uint)((int)uStack_2c == 0),(int)uStack_2c + -1);
    }
  }
  if (uStack_18 == 0) {
    uVar4 = uStack_24;
    iVar3 = iStack_20;
    pbVar5 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((int)param_1 + *(int *)(*param_1 + 4)));
    _Var7 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (pbVar5,param_2,CONCAT44(iVar3,uVar4));
    uStack_68 = (uint)_Var7;
    if ((uStack_68 != uStack_24) ||
       (iStack_64 = (int)((ulonglong)_Var7 >> 0x20), iStack_64 != iStack_20)) {
      uStack_18 = uStack_18 | 4;
    }
  }
  if (uStack_18 == 0) {
    while (0 < uStack_2c) {
      cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                        ((basic_ios<char,struct_std::char_traits<char>_> *)
                         ((int)param_1 + *(int *)(*param_1 + 4)));
      pbVar5 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((int)param_1 + *(int *)(*param_1 + 4)));
      iStack_40 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar5,cVar1);
      iStack_44 = thunk_FUN_00401570();
      bVar2 = thunk_FUN_00401550(&iStack_44,&iStack_40);
      if (bVar2) {
        uStack_18 = uStack_18 | 4;
        break;
      }
      uStack_2c = CONCAT44(uStack_2c._4_4_ - (uint)((int)uStack_2c == 0),(int)uStack_2c + -1);
    }
  }
  std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)),0);
  piVar6 = (int *)FUN_00401434();
  return piVar6;
}



void __fastcall thunk_FUN_00401700(int **param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  int *piVar2;
  
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((int)*param_1 + *(int *)(**param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    piVar2 = (int *)std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                              ((basic_ios<char,struct_std::char_traits<char>_> *)
                               ((int)*param_1 + *(int *)(**param_1 + 4)));
    (**(code **)(*piVar2 + 8))();
  }
  return;
}



undefined4 thunk_FUN_00401090(void)

{
  undefined auStack_8 [4];
  
  thunk_FUN_004010c0(auStack_8,10);
  thunk_FUN_00401150(auStack_8,0x14);
  thunk_FUN_00401110();
  return 0;
}



undefined4 __thiscall thunk_FUN_004010c0(void *this,undefined4 param_1)

{
  int *this_00;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EBP;
  
  *(undefined4 *)this = param_1;
  this_00 = thunk_FUN_00401190((int *)cout_exref,"MyClass::MyClass()");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)this_00,unaff_EBP);
  return 0x4010f1;
}



void * __thiscall thunk_FUN_00401580(void *this,int *param_1)

{
  bool bVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  
  thunk_FUN_00401690(this,param_1);
  bVar1 = std::ios_base::good((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((int)param_1 + *(int *)(*param_1 + 4)));
    if (pbVar2 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
      pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((int)param_1 + *(int *)(*param_1 + 4)));
      std::basic_ostream<char,struct_std::char_traits<char>_>::flush(pbVar2);
    }
  }
  bVar1 = std::ios_base::good((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  *(bool *)((int)this + 4) = bVar1;
  return this;
}



int ** __thiscall thunk_FUN_00401690(void *this,int *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  int *piVar2;
  
  *(int **)this = param_1;
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      (*this + *(int *)(**this + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
    piVar2 = (int *)std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                              ((basic_ios<char,struct_std::char_traits<char>_> *)
                               (*this + *(int *)(**this + 4)));
    (**(code **)(*piVar2 + 4))();
  }
  return (int **)this;
}



undefined4 FUN_00401090(void)

{
  undefined local_8 [4];
  
  thunk_FUN_004010c0(local_8,10);
  thunk_FUN_00401150(local_8,0x14);
  thunk_FUN_00401110();
  return 0;
}



undefined4 __thiscall FUN_004010c0(void *this,undefined4 param_1)

{
  int *this_00;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EBP;
  
  *(undefined4 *)this = param_1;
  this_00 = thunk_FUN_00401190((int *)cout_exref,"MyClass::MyClass()");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)this_00,unaff_EBP);
  return 0x4010f1;
}



void FUN_00401110(void)

{
  int *this;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EBP;
  
  this = thunk_FUN_00401190((int *)cout_exref,"MyClass::~MyClass()");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            ((basic_ostream<char,struct_std::char_traits<char>_> *)this,unaff_EBP);
  return;
}



void __thiscall FUN_00401150(void *this,int param_1)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this_00;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var1;
  
                    // WARNING: Load size is inaccurate
  p_Var1 = endl_exref;
  this_00 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                      ((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                       *this + param_1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this_00,p_Var1);
  return;
}



// WARNING: Removing unreachable block (ram,0x004012c7)
// WARNING: Removing unreachable block (ram,0x00401398)

int * FUN_00401190(int *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar5;
  int *piVar6;
  __int64 _Var7;
  uint uStack_78;
  uint local_68;
  int local_64;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34 [2];
  undefined8 local_2c;
  uint local_24;
  int local_20;
  uint local_18;
  uint *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004032f0;
  local_10 = ExceptionList;
  uStack_78 = DAT_00407000 ^ (uint)&stack0xfffffffc;
  local_14 = &uStack_78;
  ExceptionList = &local_10;
  local_18 = 0;
  local_24 = thunk_FUN_00401530(param_2);
  local_20 = 0;
  _Var7 = std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  local_4c = (int)((ulonglong)_Var7 >> 0x20);
  if ((-1 < _Var7) && ((0 < local_4c || (local_50 = (int)_Var7, local_50 != 0)))) {
    _Var7 = std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
    local_54 = (int)((ulonglong)_Var7 >> 0x20);
    if ((local_20 <= local_54) &&
       ((local_20 < local_54 || (local_58 = (uint)_Var7, local_24 < local_58)))) {
      _Var7 = std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
      local_2c = _Var7 - CONCAT44(local_20,local_24);
      goto LAB_00401252;
    }
  }
  local_2c = 0;
LAB_00401252:
  thunk_FUN_00401580(local_34,param_1);
  iVar3 = thunk_FUN_00401660((int)local_34);
  if (iVar3 == -1) {
    local_18 = local_18 | 4;
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               ((int)param_1 + *(int *)(*param_1 + 4)),local_18,false);
    thunk_FUN_00401620(local_34);
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 0;
  uVar4 = std::ios_base::flags((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  if ((uVar4 & 0x1c0) != 0x40) {
    while (0 < local_2c) {
      cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                        ((basic_ios<char,struct_std::char_traits<char>_> *)
                         ((int)param_1 + *(int *)(*param_1 + 4)));
      pbVar5 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((int)param_1 + *(int *)(*param_1 + 4)));
      local_38 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar5,cVar1);
      local_3c = thunk_FUN_00401570();
      bVar2 = thunk_FUN_00401550(&local_3c,&local_38);
      if (bVar2) {
        local_18 = local_18 | 4;
        break;
      }
      local_2c = CONCAT44(local_2c._4_4_ - (uint)((int)local_2c == 0),(int)local_2c + -1);
    }
  }
  if (local_18 == 0) {
    uVar4 = local_24;
    iVar3 = local_20;
    pbVar5 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((int)param_1 + *(int *)(*param_1 + 4)));
    _Var7 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (pbVar5,param_2,CONCAT44(iVar3,uVar4));
    local_68 = (uint)_Var7;
    if ((local_68 != local_24) || (local_64 = (int)((ulonglong)_Var7 >> 0x20), local_64 != local_20)
       ) {
      local_18 = local_18 | 4;
    }
  }
  if (local_18 == 0) {
    while (0 < local_2c) {
      cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                        ((basic_ios<char,struct_std::char_traits<char>_> *)
                         ((int)param_1 + *(int *)(*param_1 + 4)));
      pbVar5 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((int)param_1 + *(int *)(*param_1 + 4)));
      local_40 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar5,cVar1);
      local_44 = thunk_FUN_00401570();
      bVar2 = thunk_FUN_00401550(&local_44,&local_40);
      if (bVar2) {
        local_18 = local_18 | 4;
        break;
      }
      local_2c = CONCAT44(local_2c._4_4_ - (uint)((int)local_2c == 0),(int)local_2c + -1);
    }
  }
  std::ios_base::width((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)),0);
  piVar6 = (int *)FUN_00401434();
  return piVar6;
}



undefined4 Catch_00401412(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (*(int *)(unaff_EBP + 8) + *(int *)(**(int **)(unaff_EBP + 8) + 4)),4,true);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x40143b;
}



undefined4 FUN_00401434(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (*(int *)(unaff_EBP + 8) + *(int *)(**(int **)(unaff_EBP + 8) + 4)),
             *(int *)(unaff_EBP + -0x14),false);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 8);
  thunk_FUN_00401620((int **)(unaff_EBP + -0x30));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x44);
}



void __cdecl FUN_00401530(char *param_1)

{
  strlen(param_1);
  return;
}



bool __cdecl FUN_00401550(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



undefined4 FUN_00401570(void)

{
  return 0xffffffff;
}



void * __thiscall FUN_00401580(void *this,int *param_1)

{
  bool bVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  
  thunk_FUN_00401690(this,param_1);
  bVar1 = std::ios_base::good((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((int)param_1 + *(int *)(*param_1 + 4)));
    if (pbVar2 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
      pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          ((int)param_1 + *(int *)(*param_1 + 4)));
      std::basic_ostream<char,struct_std::char_traits<char>_>::flush(pbVar2);
    }
  }
  bVar1 = std::ios_base::good((ios_base *)((int)param_1 + *(int *)(*param_1 + 4)));
  *(bool *)((int)this + 4) = bVar1;
  return this;
}



void __fastcall FUN_00401620(int **param_1)

{
  bool bVar1;
  
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  thunk_FUN_00401700(param_1);
  return;
}



int __fastcall FUN_00401660(int param_1)

{
  return (*(char *)(param_1 + 4) != '\0') - 1;
}



int ** __thiscall FUN_00401690(void *this,int *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  int *piVar2;
  
  *(int **)this = param_1;
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      (*this + *(int *)(**this + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
                    // WARNING: Load size is inaccurate
                    // WARNING: Load size is inaccurate
    piVar2 = (int *)std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                              ((basic_ios<char,struct_std::char_traits<char>_> *)
                               (*this + *(int *)(**this + 4)));
    (**(code **)(*piVar2 + 4))();
  }
  return (int **)this;
}



void __fastcall FUN_00401700(int **param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  int *piVar2;
  
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((int)*param_1 + *(int *)(**param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    piVar2 = (int *)std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                              ((basic_ios<char,struct_std::char_traits<char>_> *)
                               ((int)*param_1 + *(int *)(**param_1 + 4)));
    (**(code **)(*piVar2 + 8))();
  }
  return;
}



// Library Function - Single Match
//  @__security_check_cookie@4
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void __fastcall ___security_check_cookie_4(int param_1)

{
  if (param_1 == DAT_00407000) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}



size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x004017d4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___tmainCRTStartup
// 
// Library: Visual Studio 2010 Release

int ___tmainCRTStartup(void)

{
  bool bVar1;
  void *Exchange;
  void *pvVar2;
  int iVar3;
  BOOL BVar4;
  
  if (_DAT_0040749c == 0) {
    HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  }
  Exchange = StackBase;
  bVar1 = false;
  do {
    pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_00407484,(LONG)Exchange,0);
    if (pvVar2 == (void *)0x0) {
LAB_0040188a:
      if (DAT_00407474 == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_00407474 == 0) {
        DAT_00407474 = 1;
        iVar3 = _initterm_e(&DAT_0040530c,&DAT_00405618);
        if (iVar3 != 0) {
          return 0xff;
        }
      }
      else {
        _DAT_0040713c = 1;
      }
      if (DAT_00407474 == 1) {
        _initterm(&DAT_00405000,&DAT_00405208);
        DAT_00407474 = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_00407484,0);
      }
      if ((DAT_004074a0 != (code *)0x0) &&
         (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004074a0), BVar4 != 0)) {
        (*DAT_004074a0)(0,2,0);
      }
      *(undefined4 *)__initenv_exref = DAT_00407124;
      DAT_00407138 = thunk_FUN_00401090();
      if (_DAT_0040712c != 0) {
        if (_DAT_0040713c == 0) {
          _cexit();
        }
        return DAT_00407138;
      }
                    // WARNING: Subroutine does not return
      exit(DAT_00407138);
    }
    if (pvVar2 == Exchange) {
      bVar1 = true;
      goto LAB_0040188a;
    }
    Sleep(1000);
  } while( true );
}



void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_gsfailure
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
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
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_00407258 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040725c = &stack0x00000004;
  _DAT_00407198 = 0x10001;
  _DAT_00407140 = 0xc0000409;
  _DAT_00407144 = 1;
  local_32c = DAT_00407000;
  local_328 = DAT_00407004;
  _DAT_0040714c = unaff_retaddr;
  _DAT_00407224 = in_GS;
  _DAT_00407228 = in_FS;
  _DAT_0040722c = in_ES;
  _DAT_00407230 = in_DS;
  _DAT_00407234 = unaff_EDI;
  _DAT_00407238 = unaff_ESI;
  _DAT_0040723c = unaff_EBX;
  _DAT_00407240 = in_EDX;
  _DAT_00407244 = in_ECX;
  _DAT_00407248 = in_EAX;
  _DAT_0040724c = unaff_EBP;
  DAT_00407250 = unaff_retaddr;
  _DAT_00407254 = in_CS;
  _DAT_00407260 = in_SS;
  _DAT_00407190 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_00405860);
  if (_DAT_00407190 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
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



void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00401c16. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit(param_1);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2010 Release

_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  PVOID pvVar2;
  PVOID *ppvVar3;
  PVOID *ppvVar4;
  PVOID local_24;
  PVOID local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004060f0;
  uStack_c = 0x401c2e;
  local_20[0] = DecodePointer(DAT_00407498);
  if (local_20[0] == (PVOID)0xffffffff) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DecodePointer(DAT_00407498);
    local_24 = DecodePointer(DAT_00407488);
    ppvVar4 = &local_24;
    ppvVar3 = local_20;
    pvVar2 = EncodePointer(param_1);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,ppvVar3,ppvVar4);
    DAT_00407498 = EncodePointer(local_20[0]);
    DAT_00407488 = EncodePointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_00401cba();
  }
  return p_Var1;
}



void FUN_00401cba(void)

{
  _unlock(8);
  return;
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2010 Release

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00401d32(void)

{
                    // WARNING: Could not recover jumptable at 0x00401d32. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00408320)();
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
// Library: Visual Studio 2010 Release

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
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
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
// Library: Visual Studio 2010 Release

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_00401ef9;
  local_14 = ExceptionList;
  local_c = DAT_00407000 ^ 0x406110;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00401e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00401e92. Too many branches
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
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00407000 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
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
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}



void __cdecl
FUN_00401ef9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _except_handler4_common(&DAT_00407000,___security_check_cookie_4,param_1,param_2,param_3,param_4);
  return;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Library: Visual Studio 2010 Release

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00407000 == 0xbb40e64e) || ((DAT_00407000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00407000 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00407000 == 0xbb40e64e) {
      DAT_00407000 = 0xbb40e64f;
    }
    else if ((DAT_00407000 & 0xffff0000) == 0) {
      DAT_00407000 = DAT_00407000 | (DAT_00407000 | 0x4711) << 0x10;
    }
    DAT_00407004 = ~DAT_00407000;
  }
  else {
    DAT_00407004 = ~DAT_00407000;
  }
  return;
}



void __cdecl _crt_debugger_hook(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x0040201c. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_debugger_hook(param_1);
  return;
}



void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00402022. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00402028. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock(_File);
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x0040202e. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00402034. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock(_File);
  return;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x0040203a. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}


