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
typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

typedef struct PMD PMD, *PPMD;

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef int ptrdiff_t;

struct TypeDescriptor {
    void * pVFTable;
    void * spare;
    char[0] name;
};

struct PMD {
    ptrdiff_t mdisp;
    ptrdiff_t pdisp;
    ptrdiff_t vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    struct TypeDescriptor * pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    RTTIClassHierarchyDescriptor * pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor * * pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    struct TypeDescriptor * pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    RTTIClassHierarchyDescriptor * pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

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
    char pdbname[24];
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

typedef dword unsigned_int;

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef int (* _onexit_t)(void);

typedef int errno_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




int __fastcall thunk_FUN_00401260(int param_1)

{
  return param_1 + -0xc;
}



undefined ** __thiscall thunk_FUN_004011c0(void *this,byte param_1)

{
  *(undefined ***)this = B::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void __thiscall thunk_FUN_00401290(void *this,byte param_1)

{
  thunk_FUN_004012b0((void *)((int)this + -0x10),param_1);
  return;
}



int __fastcall thunk_FUN_00401250(int param_1)

{
  return param_1 + -4;
}



undefined ** __thiscall thunk_FUN_004012b0(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x10) = B::vftable;
  *(undefined ***)((int)this + 8) = A::vftable;
  *(undefined ***)this = Z::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void __thiscall thunk_FUN_004012a0(void *this,byte param_1)

{
  thunk_FUN_004012b0((void *)((int)this + -8),param_1);
  return;
}



undefined ** __thiscall thunk_FUN_00401120(void *this,byte param_1)

{
  *(undefined ***)this = Z::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void thunk_FUN_00401160(void)

{
  operator_new(0x28);
  return;
}



void thunk_FUN_004011b0(void)

{
  operator_new(0x50);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 thunk_FUN_004012f0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)operator_new(0x18);
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1[1] = (undefined *)0xa;
    ppuVar1[2] = (undefined *)A::vftable;
    ppuVar1[4] = (undefined *)B::vftable;
    *ppuVar1 = (undefined *)C::vftable;
    ppuVar1[2] = (undefined *)C::vftable;
    ppuVar1[4] = (undefined *)C::vftable;
    (**(code **)ppuVar1[4])();
    return 0;
  }
  (**_DAT_00000010)();
  return 0;
}



undefined ** __thiscall thunk_FUN_00401170(void *this,byte param_1)

{
  *(undefined ***)this = A::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



undefined ** __thiscall FUN_00401120(void *this,byte param_1)

{
  *(undefined ***)this = Z::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void FUN_00401160(void)

{
  operator_new(0x28);
  return;
}



undefined ** __thiscall FUN_00401170(void *this,byte param_1)

{
  *(undefined ***)this = A::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



void FUN_004011b0(void)

{
  operator_new(0x50);
  return;
}



undefined ** __thiscall FUN_004011c0(void *this,byte param_1)

{
  *(undefined ***)this = B::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



int __fastcall FUN_00401250(int param_1)

{
  return param_1 + -4;
}



int __fastcall FUN_00401260(int param_1)

{
  return param_1 + -0xc;
}



void __thiscall FUN_00401290(void *this,byte param_1)

{
  thunk_FUN_004012b0((void *)((int)this + -0x10),param_1);
  return;
}



void __thiscall FUN_004012a0(void *this,byte param_1)

{
  thunk_FUN_004012b0((void *)((int)this + -8),param_1);
  return;
}



undefined ** __thiscall FUN_004012b0(void *this,byte param_1)

{
  *(undefined ***)((int)this + 0x10) = B::vftable;
  *(undefined ***)((int)this + 8) = A::vftable;
  *(undefined ***)this = Z::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (undefined **)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004012f0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)operator_new(0x18);
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar1[1] = (undefined *)0xa;
    ppuVar1[2] = (undefined *)A::vftable;
    ppuVar1[4] = (undefined *)B::vftable;
    *ppuVar1 = (undefined *)C::vftable;
    ppuVar1[2] = (undefined *)C::vftable;
    ppuVar1[4] = (undefined *)C::vftable;
    (**(code **)ppuVar1[4])();
    return 0;
  }
  (**_DAT_00000010)();
  return 0;
}



// Library Function - Multiple Matches With Different Base Names
//  public: virtual void * __thiscall CDaoRelationFieldInfo::`vector deleting destructor'(unsigned
// int)
//  public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int)
//  public: virtual void * __thiscall std::exception::`vector deleting destructor'(unsigned int)
//  public: virtual void * __thiscall logic_error::`vector deleting destructor'(unsigned int)
//   5 names - too many to list
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

int * __thiscall FID_conflict__vector_deleting_destructor_(void *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    type_info::_type_info_dtor_internal_method((type_info *)this);
    piVar1 = (int *)this;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    _eh_vector_destructor_iterator_(this,0xc,*piVar1,type_info::_type_info_dtor_internal_method);
    if ((param_1 & 1) != 0) {
      operator_delete(piVar1);
    }
  }
  return piVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x004013b2. Too many branches
                    // WARNING: Treating indirect jump as call
  operator_delete();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl operator_new(unsigned_int param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x004013b8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)operator_new();
  return pvVar1;
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
  if (_DAT_0040550c == 0) {
    HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  }
  iVar3 = *(int *)(*(int *)(in_FS_OFFSET + 0x18) + 4);
  bVar1 = false;
  do {
    LVar2 = InterlockedCompareExchange((LONG *)&DAT_004054f4,iVar3,0);
    if (LVar2 == 0) {
LAB_0040146e:
      if (DAT_004054e4 == 1) {
        _amsg_exit(0x1f);
      }
      else {
        if (DAT_004054e4 == 0) {
          DAT_004054e4 = 1;
          iVar3 = _initterm_e(&DAT_0040330c,&DAT_00403618);
          if (iVar3 != 0) {
            return 0xff;
          }
        }
        else {
          _DAT_004051ac = 1;
        }
      }
      if (DAT_004054e4 == 1) {
        _initterm(&DAT_00403000,&DAT_00403208);
        DAT_004054e4 = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_004054f4,0);
      }
      if ((_DAT_00405510 != (code *)0x0) &&
         (BVar4 = __IsNonwritableInCurrentImage(&DAT_00405510), BVar4 != 0)) {
        (*_DAT_00405510)(0,2,0);
      }
      *(undefined4 *)__initenv_exref = DAT_00405194;
      DAT_004051a8 = thunk_FUN_004012f0();
      if (_DAT_0040519c != 0) {
        if (_DAT_004051ac == 0) {
          _cexit();
        }
        return DAT_004051a8;
      }
                    // WARNING: Subroutine does not return
      exit(DAT_004051a8);
    }
    if (LVar2 == iVar3) {
      bVar1 = true;
      goto LAB_0040146e;
    }
    Sleep(1000);
  } while( true );
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
//  void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void __ArrayUnwind(void *param_1,unsigned_int param_2,int param_3,FuncDef5 *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3
// Library Function - Single Match
//  void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
// *))
// 
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release

void _eh_vector_destructor_iterator_
               (void *param_1,unsigned_int param_2,int param_3,FuncDef6 *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_0040175f();
  return;
}



void FUN_0040175f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(unsigned_int *)(unaff_EBP + 0xc),
                  *(int *)(unaff_EBP + 0x10),*(FuncDef5 **)(unaff_EBP + 0x14));
  }
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



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _amsg_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x004017c8. Too many branches
                    // WARNING: Treating indirect jump as call
  _amsg_exit();
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
  undefined4 uStack12;
  undefined *local_8;
  
  local_8 = &DAT_00404318;
  uStack12 = 0x4017e0;
  local_20[0] = DecodePointer(DAT_00405508);
  if (local_20[0] == (PVOID)0xffffffff) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = DecodePointer(DAT_00405508);
    local_24 = DecodePointer(DAT_004054f8);
    ppvVar4 = &local_24;
    ppvVar3 = local_20;
    pvVar2 = EncodePointer(param_1);
    p_Var1 = (_onexit_t)__dllonexit(pvVar2,ppvVar3,ppvVar4);
    DAT_00405508 = EncodePointer(local_20[0]);
    DAT_004054f8 = EncodePointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_0040186c();
  }
  return p_Var1;
}



void FUN_0040186c(void)

{
  _unlock(8);
  return;
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2010 Release

int __cdecl _atexit(void *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004018e4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _XcptFilter();
  return iVar1;
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
  PIMAGE_SECTION_HEADER p_Var1;
  PBYTE pBVar2;
  uint uVar3;
  
  pBVar2 = pImageBase + *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var1 = (PIMAGE_SECTION_HEADER)(pBVar2 + *(ushort *)(pBVar2 + 0x14) + 0x18);
  if (*(ushort *)(pBVar2 + 6) != 0) {
    do {
      if ((p_Var1->VirtualAddress <= rva) && (rva < p_Var1->Misc + p_Var1->VirtualAddress)) {
        return p_Var1;
      }
      uVar3 = uVar3 + 1;
      p_Var1 = p_Var1 + 1;
    } while (uVar3 < *(ushort *)(pBVar2 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}



// Library Function - Single Match
//  __IsNonwritableInCurrentImage
// 
// Library: Visual Studio 2010 Release

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
  
  pcStack16 = FUN_00401aa9;
  local_14 = *in_FS_OFFSET;
  local_c = DAT_00405078 ^ 0x404338;
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
                    // WARNING: Could not recover jumptable at 0x00401a3c. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00401a42. Too many branches
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
  *(uint *)((int)auStack28 + iVar1 + 4) = DAT_00405078 ^ (uint)&param_2;
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
FUN_00401aa9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _except_handler4_common(&DAT_00405078,";\rxP@",param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
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
  uint local_14;
  uint local_10;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_00405078 == 0xbb40e64e) || ((DAT_00405078 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter((LARGE_INTEGER *)&local_14);
    DAT_00405078 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_10 ^ local_14;
    if (DAT_00405078 == 0xbb40e64e) {
      DAT_00405078 = 0xbb40e64f;
    }
    else {
      if ((DAT_00405078 & 0xffff0000) == 0) {
        DAT_00405078 = DAT_00405078 | (DAT_00405078 | 0x4711) << 0x10;
      }
    }
    _DAT_0040507c = ~DAT_00405078;
  }
  else {
    _DAT_0040507c = ~DAT_00405078;
  }
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00401bcc. Too many branches
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x00401bd2. Too many branches
                    // WARNING: Treating indirect jump as call
  _type_info_dtor_internal_method();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _unlock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00401bd8. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock();
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00401bde. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _lock(int _File)

{
                    // WARNING: Could not recover jumptable at 0x00401be4. Too many branches
                    // WARNING: Treating indirect jump as call
  _lock();
  return;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x00401bfa. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}


