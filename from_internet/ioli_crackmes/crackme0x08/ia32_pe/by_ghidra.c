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




void ___mingw_CRTStartup(void)

{
  char **ppcVar1;
  UINT uExitCode;
  undefined4 *extraout_EAX;
  undefined4 *_Mode;
  char **local_10;
  _startupinfo local_c;
  
  _SetUnhandledExceptionFilter_4((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00401000);
  __fpreset();
  local_c = (_startupinfo)0x0;
  ___getmainargs(&__argc,&DAT_00406000,&local_10,DAT_00404000,&local_c);
  if (__CRT_fmode == (undefined4 *)0x0) goto LAB_004011f0;
  __fmode = __CRT_fmode;
  _Mode = __CRT_fmode;
  if (_iob_exref != (code *)0x0) goto LAB_00401237;
  do {
    if (_iob_exref != (code *)0xffffffe0) {
      _setmode(*(int *)(_iob_exref + 0x30),(int)__CRT_fmode);
    }
    if (_iob_exref != (code *)0xffffffc0) {
      _setmode(*(int *)(_iob_exref + 0x50),(int)__CRT_fmode);
    }
LAB_004011f0:
    _Mode = (undefined4 *)___p__fmode();
    *(undefined4 **)_Mode = __fmode;
    __pei386_runtime_relocator();
    ppcVar1 = (char **)__p__environ();
    uExitCode = _main(__argc,DAT_00406000,(char **)*ppcVar1);
    _cexit();
    _ExitProcess_4(uExitCode);
    _Mode = extraout_EAX;
LAB_00401237:
    _setmode(*(int *)(_iob_exref + 0x10),(int)_Mode);
  } while( true );
}



// WARNING: Exceeded maximum restarts with more pending

void _mainCRTStartup(void)

{
  __set_app_type(1);
  ___mingw_CRTStartup();
  __set_app_type(2);
  ___mingw_CRTStartup();
                    // WARNING: Could not recover jumptable at 0x004012aa. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void _atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004012aa. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl _dummy(undefined4 param_1,int param_2)

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
    iVar1 = _strncmp(*(char **)(iVar1 + param_2),"LOLO",3);
  } while (iVar1 != 0);
  __LOL = 1;
  return 1;
}



void _che(void)

{
  _printf("Password Incorrect!\n");
                    // WARNING: Subroutine does not return
  _exit(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl _parell(char *param_1,int param_2)

{
  int iVar1;
  int local_c;
  uint local_8;
  
  _sscanf(param_1,"%d",&local_8);
  iVar1 = _dummy(local_8,param_2);
  if (iVar1 != 0) {
    local_c = 0;
    while (local_c < 10) {
      if ((local_8 & 1) == 0) {
        if (__LOL == 1) {
          _printf("Password OK!\n");
        }
                    // WARNING: Subroutine does not return
        _exit(0);
      }
      local_c = local_c + 1;
    }
  }
  return;
}



void __cdecl _check(char *param_1,int param_2)

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
    sVar1 = _strlen(param_1);
    if (sVar1 <= local_10) break;
    local_11 = param_1[local_10];
    _sscanf(&local_11,"%d",&local_8);
    local_c = local_c + local_8;
    if (local_c == 0x10) {
      _parell(param_1,param_2);
    }
    local_10 = local_10 + 1;
  }
  _che();
  iVar2 = _dummy(local_8,param_2);
  if (iVar2 != 0) {
    local_10 = 0;
    while ((int)local_10 < 10) {
      if ((local_8 & 1) == 0) {
        _printf("wtf?\n");
                    // WARNING: Subroutine does not return
        _exit(0);
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  size_t local_a0;
  char local_7c [120];
  
  __alloca(local_a0);
  ___main();
  _printf("IOLI Crackme Level 0x08\n");
  _printf("Password: ");
  _scanf("%s",local_7c);
  _check(local_7c,(int)_Env);
  return 0;
}



void __pei386_runtime_relocator(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &__RUNTIME_PSEUDO_RELOC_LIST_END__;
  while (piVar3 < &__RUNTIME_PSEUDO_RELOC_LIST_END__) {
    piVar1 = piVar3 + 1;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 2;
    *(int *)(*piVar1 + 0x400000) = *(int *)(*piVar1 + 0x400000) + iVar2;
  }
  return;
}



void __cdecl __fpreset(void)

{
  return;
}



void ___main(void)

{
  int iVar1;
  bool bVar2;
  
  if (_initialized != 0) {
    return;
  }
  _initialized = 1;
  iVar1 = 0;
  bVar2 = false;
  while (!bVar2) {
    iVar1 = iVar1 + 1;
    bVar2 = (&_ctors)[iVar1] == (undefined *)0x0;
  }
  while (iVar1 != 0) {
    (*(code *)(&___CTOR_LIST__)[iVar1])();
    iVar1 = iVar1 + -1;
  }
  _atexit();
  return;
}



undefined4 _size_of_encoded_value(void)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((char)in_EAX != -1) {
    uVar1 = in_EAX & 7;
    uVar2 = 2;
    if (uVar1 != 2) {
      if (uVar1 < 3) goto LAB_00401670;
      uVar2 = 4;
      if (uVar1 != 3) {
        if (uVar1 == 4) {
          return 8;
        }
        do {
          _abort();
          uVar1 = extraout_EAX;
LAB_00401670:
        } while (uVar1 != 0);
        uVar2 = 4;
      }
    }
  }
  return uVar2;
}



undefined8 _read_uleb128(void)

{
  byte bVar1;
  byte *in_EAX;
  uint *in_EDX;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *local_14;
  
  iVar3 = 0;
  uVar4 = 0;
  local_14 = in_EAX;
  do {
    bVar2 = (byte)iVar3;
    iVar3 = iVar3 + 7;
    bVar1 = *local_14;
    local_14 = local_14 + 1;
    uVar4 = uVar4 | ((uint)bVar1 & 0x7f) << (bVar2 & 0x1f);
  } while ((char)bVar1 < '\0');
  *in_EDX = uVar4;
  return CONCAT44(local_14,local_14);
}



byte * _read_sleb128(void)

{
  byte bVar1;
  byte *in_EAX;
  uint *in_EDX;
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
    uVar4 = uVar4 | ((uint)bVar1 & 0x7f) << ((byte)uVar2 & 0x1f);
    uVar2 = uVar3;
  } while ((char)bVar1 < '\0');
  if ((uVar3 < 0x20) && ((bVar1 & 0x40) != 0)) {
    uVar4 = uVar4 | -1 << ((byte)uVar3 & 0x1f);
  }
  *in_EDX = uVar4;
  return local_18;
}



undefined4 * _read_encoded_value_with_base(undefined4 *param_1,undefined4 *param_2)

{
  byte in_AL;
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int in_EDX;
  undefined4 *local_18;
  undefined4 *local_14;
  
  if (in_AL == 0x50) {
    puVar1 = (undefined4 *)((int)param_1 + 3U & 0xfffffffc);
    *param_2 = *puVar1;
    return puVar1 + 1;
  }
  puVar1 = param_1;
  switch((uint)in_AL & 0xf) {
  case 0:
  case 3:
  case 0xb:
    local_18 = (undefined4 *)*param_1;
    puVar1 = param_1 + 1;
    break;
  case 1:
    puVar1 = (undefined4 *)_read_uleb128();
    local_18 = local_14;
    break;
  case 2:
    local_18 = (undefined4 *)(uint)*(ushort *)param_1;
    puVar1 = (undefined4 *)((int)param_1 + 2);
    break;
  case 4:
  case 0xc:
    local_18 = (undefined4 *)*param_1;
    puVar1 = param_1 + 2;
    break;
  default:
    _abort();
    puVar1 = extraout_ECX;
  case 10:
    local_18 = (undefined4 *)(int)(short)*(ushort *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
    break;
  case 9:
    puVar1 = (undefined4 *)_read_sleb128();
  }
  if (local_18 != (undefined4 *)0x0) {
    if (((uint)in_AL & 0x70) == 0x10) {
      local_18 = (undefined4 *)((int)local_18 + (int)param_1);
    }
    else {
      local_18 = (undefined4 *)((int)local_18 + in_EDX);
    }
    if ((char)in_AL < '\0') {
      local_18 = (undefined4 *)*local_18;
    }
  }
  *(undefined4 **)param_2 = local_18;
  return puVar1;
}



void _init_object_mutex(void)

{
  int iVar1;
  HANDLE pvVar2;
  
  iVar1 = ___w32_sharedptr;
  *(undefined4 *)(___w32_sharedptr + 0x14) = 0xffffffff;
  pvVar2 = _CreateSemaphoreA_16((LPSECURITY_ATTRIBUTES)0x0,0,0xffff,(LPCSTR)0x0);
  *(HANDLE *)(iVar1 + 0x18) = pvVar2;
  return;
}



void _init_object_mutex_once(void)

{
  int *piVar1;
  int iVar2;
  LONG LVar3;
  
  iVar2 = ___w32_sharedptr;
  piVar1 = (int *)(___w32_sharedptr + 0x1c);
  if (((__CRT_MT != 0) && (piVar1 != (int *)0x0)) && (*(int *)(___w32_sharedptr + 0x1c) == 0)) {
    LVar3 = _InterlockedIncrement_4((LONG *)(___w32_sharedptr + 0x20));
    if (LVar3 == 0) {
      _init_object_mutex();
      *(undefined4 *)(iVar2 + 0x1c) = 1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
      while (iVar2 == 0) {
        _Sleep_4(0);
        iVar2 = *piVar1;
      }
    }
  }
  return;
}



void __cdecl
___register_frame_info_bases(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

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
    *(int **)(param_2 + 3) = param_1;
    param_2[2] = param_4;
    *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
    _init_object_mutex_once();
    iVar1 = ___w32_sharedptr;
    lpAddend = (LONG *)(___w32_sharedptr + 0x14);
    if ((__CRT_MT != 0) &&
       ((LVar2 = _InterlockedIncrement_4(lpAddend), LVar2 != 0 &&
        (DVar3 = _WaitForSingleObject_8(*(HANDLE *)(iVar1 + 0x18),0xffffffff), DVar3 != 0)))) {
      _InterlockedDecrement_4(lpAddend);
    }
    iVar1 = ___w32_sharedptr;
    bVar4 = __CRT_MT != 0;
    param_2[5] = *(undefined4 *)(___w32_sharedptr + 0xc);
    *(undefined4 **)(iVar1 + 0xc) = param_2;
    if ((bVar4) && (LVar2 = _InterlockedDecrement_4((LONG *)(iVar1 + 0x14)), -1 < LVar2)) {
      _ReleaseSemaphore_12(*(HANDLE *)(iVar1 + 0x18),1,(LPLONG)0x0);
    }
  }
  return;
}



void __cdecl ___register_frame_info(int *param_1,undefined4 *param_2)

{
  ___register_frame_info_bases(param_1,param_2,0,0);
  return;
}



void __cdecl
___register_frame_info_table_bases
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  LONG *lpAddend;
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  bool bVar4;
  
  *param_2 = 0xffffffff;
  param_2[1] = param_3;
  param_2[2] = param_4;
  param_2[4] = 0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
  param_2[3] = param_1;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  _init_object_mutex_once();
  iVar1 = ___w32_sharedptr;
  lpAddend = (LONG *)(___w32_sharedptr + 0x14);
  if (__CRT_MT == 0) {
    param_2[5] = *(undefined4 *)(___w32_sharedptr + 0xc);
    *(undefined4 **)(iVar1 + 0xc) = param_2;
  }
  else {
    LVar2 = _InterlockedIncrement_4(lpAddend);
    if ((LVar2 != 0) &&
       (DVar3 = _WaitForSingleObject_8(*(HANDLE *)(iVar1 + 0x18),0xffffffff), DVar3 != 0)) {
      _InterlockedDecrement_4(lpAddend);
    }
    iVar1 = ___w32_sharedptr;
    bVar4 = __CRT_MT != 0;
    param_2[5] = *(undefined4 *)(___w32_sharedptr + 0xc);
    *(undefined4 **)(iVar1 + 0xc) = param_2;
    if ((bVar4) && (LVar2 = _InterlockedDecrement_4((LONG *)(iVar1 + 0x14)), -1 < LVar2)) {
      _ReleaseSemaphore_12(*(HANDLE *)(iVar1 + 0x18),1,(LPLONG)0x0);
      return;
    }
  }
  return;
}



void __cdecl ___register_frame_info_table(undefined4 param_1,undefined4 *param_2)

{
  ___register_frame_info_table_bases(param_1,param_2,0,0);
  return;
}



int __cdecl ___deregister_frame_info(LONG *param_1)

{
  LONG *lpAddend;
  int iVar1;
  int iVar2;
  LONG LVar3;
  DWORD DVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 == (LONG *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  _init_object_mutex_once();
  iVar2 = ___w32_sharedptr;
  lpAddend = (LONG *)(___w32_sharedptr + 0x14);
  if ((__CRT_MT != 0) && (LVar3 = _InterlockedIncrement_4(lpAddend), LVar3 != 0)) goto LAB_00401d14;
  do {
    iVar7 = ___w32_sharedptr;
    iVar1 = *(int *)(___w32_sharedptr + 0xc);
    piVar5 = (int *)(___w32_sharedptr + 0xc);
    while (iVar1 != 0) {
      iVar6 = *piVar5;
      if (*(LONG **)(iVar6 + 0xc) == param_1) goto LAB_00401c48;
      iVar1 = *(int *)(iVar6 + 0x14);
      piVar5 = (int *)(iVar6 + 0x14);
    }
    iVar1 = *(int *)(___w32_sharedptr + 0x10);
    piVar5 = (int *)(___w32_sharedptr + 0x10);
    while (iVar1 != 0) {
      iVar6 = *piVar5;
      if ((*(byte *)(iVar6 + 0x10) & 1) == 0) {
        if (*(LONG **)(iVar6 + 0xc) == param_1) goto LAB_00401c48;
      }
      else {
        if (**(LONG ***)(iVar6 + 0xc) == param_1) {
          *piVar5 = *(int *)(iVar6 + 0x14);
          _free(*(void **)(iVar6 + 0xc));
          iVar7 = ___w32_sharedptr;
          goto LAB_00401c4d;
        }
      }
      iVar1 = *(int *)(iVar6 + 0x14);
      piVar5 = (int *)(iVar6 + 0x14);
    }
    param_1 = (LONG *)(___w32_sharedptr + 0x14);
    if (__CRT_MT != 0) goto LAB_00401ce3;
    do {
      _abort();
LAB_00401ce3:
      LVar3 = _InterlockedDecrement_4(param_1);
    } while (LVar3 < 0);
    _ReleaseSemaphore_12(*(HANDLE *)(iVar7 + 0x18),1,(LPLONG)0x0);
    _abort();
LAB_00401d14:
    DVar4 = _WaitForSingleObject_8(*(HANDLE *)(iVar2 + 0x18),0xffffffff);
    if (DVar4 != 0) {
      _InterlockedDecrement_4(lpAddend);
    }
  } while( true );
LAB_00401c48:
  *piVar5 = *(int *)(iVar6 + 0x14);
LAB_00401c4d:
  if ((__CRT_MT != 0) && (LVar3 = _InterlockedDecrement_4((LONG *)(iVar7 + 0x14)), -1 < LVar3)) {
    _ReleaseSemaphore_12(*(HANDLE *)(iVar7 + 0x18),1,(LPLONG)0x0);
  }
  return iVar6;
}



undefined4 _base_from_object(void)

{
  byte in_AL;
  byte bVar1;
  int in_EDX;
  int extraout_EDX;
  bool bVar2;
  
  if (in_AL == 0xff) {
    return 0;
  }
  bVar1 = in_AL & 0x70;
  if (bVar1 == 0x20) {
    return *(undefined4 *)(in_EDX + 4);
  }
  if (bVar1 < 0x21) {
    if (bVar1 == 0) {
      return 0;
    }
    bVar2 = bVar1 == 0x10;
  }
  else {
    if (bVar1 == 0x30) goto LAB_00401dbf;
    bVar2 = bVar1 == 0x50;
  }
  if (bVar2) {
    return 0;
  }
  _abort();
  in_EDX = extraout_EDX;
LAB_00401dbf:
  return *(undefined4 *)(in_EDX + 8);
}



uint _get_cie_encoding(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined local_18 [12];
  
  uVar2 = 0;
  if (*(char *)(in_EAX + 9) == 'z') {
    _strlen((char *)(in_EAX + 9));
    _read_uleb128();
    pcVar4 = (char *)(in_EAX + 10);
    _read_sleb128();
    pbVar3 = (byte *)_read_uleb128();
    while (cVar1 = *pcVar4, cVar1 != 'R') {
      if (cVar1 == 'P') {
        pcVar4 = pcVar4 + 1;
        pbVar3 = (byte *)_read_encoded_value_with_base(pbVar3 + 1,local_18);
      }
      else {
        if (cVar1 != 'L') {
          return 0;
        }
        pbVar3 = pbVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    uVar2 = (uint)*pbVar3;
  }
  return uVar2;
}



int __cdecl _fde_single_encoding_compare(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint local_14;
  uint local_10;
  
  _base_from_object();
  _read_encoded_value_with_base(param_2 + 8,&local_10);
  _read_encoded_value_with_base(param_3 + 8,&local_14);
  iVar1 = 1;
  if (local_10 <= local_14) {
    iVar1 = -(uint)(local_10 < local_14);
  }
  return iVar1;
}



void _frame_downheap(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  code *in_EDX;
  int iVar4;
  
  iVar2 = param_2 * 2;
  while( true ) {
    iVar4 = iVar2 + 1;
    if (param_3 <= iVar4) {
      return;
    }
    if ((iVar2 + 2 < param_3) &&
       (iVar3 = (*in_EDX)(in_EAX,*(undefined4 *)(param_1 + iVar4 * 4),
                          *(undefined4 *)(param_1 + 4 + iVar4 * 4)), iVar3 < 0)) {
      iVar4 = iVar2 + 2;
    }
    iVar2 = (*in_EDX)(in_EAX,*(undefined4 *)(param_1 + param_2 * 4),
                      *(undefined4 *)(param_1 + iVar4 * 4));
    if (-1 < iVar2) break;
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    *(undefined4 *)(param_1 + iVar4 * 4) = uVar1;
    iVar2 = iVar4 * 2;
    param_2 = iVar4;
  }
  return;
}



void __cdecl _frame_heapsort(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 4);
  puVar1 = (undefined4 *)(param_1 + 8);
  uVar3 = uVar4 >> 1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    _frame_downheap(puVar1,uVar3,uVar4);
  }
  while (uVar4 = uVar4 - 1, 0 < (int)uVar4) {
    uVar2 = *puVar1;
    *puVar1 = puVar1[uVar4];
    puVar1[uVar4] = uVar2;
    _frame_downheap(puVar1,0,uVar4);
  }
  return;
}



int _classify_object_over_fdes(void)

{
  uint *in_EAX;
  int iVar1;
  uint uVar2;
  int *in_EDX;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar1 = *in_EDX;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  while (iVar1 != 0) {
    if (in_EDX[1] != 0) {
      iVar1 = (int)in_EDX + (4 - in_EDX[1]);
      if (iVar1 != local_18) {
        local_20 = _get_cie_encoding();
        local_24 = _base_from_object();
        uVar2 = (uint)(*(ushort *)(in_EAX + 4) >> 3) & 0xff;
        local_18 = iVar1;
        if (uVar2 == 0xff) {
          *(ushort *)(in_EAX + 4) = *(ushort *)(in_EAX + 4) & 0xf807 | (ushort)(byte)local_20 << 3;
        }
        else {
          if (uVar2 != local_20) {
            *(byte *)(in_EAX + 4) = *(byte *)(in_EAX + 4) | 4;
          }
        }
      }
      _read_encoded_value_with_base(in_EDX + 2,&local_14,local_24,local_20);
      uVar2 = _size_of_encoded_value();
      if (uVar2 < 4) {
        uVar2 = (1 << ((char)uVar2 * '\b' & 0x1fU)) - 1;
      }
      else {
        uVar2 = 0xffffffff;
      }
      if (((uVar2 & local_14) != 0) &&
         (local_1c = local_1c + 1, local_14 <= *in_EAX && *in_EAX != local_14)) {
        *in_EAX = local_14;
      }
    }
    iVar1 = *in_EDX + (int)in_EDX;
    in_EDX = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
  }
  return local_1c;
}



void _add_fdes(int *param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 local_24;
  int iVar2;
  uint uVar3;
  int *in_EDX;
  uint uVar4;
  bool bVar5;
  int local_20;
  uint local_14;
  
  local_20 = 0;
  uVar4 = (uint)(*(ushort *)(in_EAX + 0x10) >> 3) & 0xff;
  local_24 = _base_from_object();
  iVar2 = *param_1;
  while (iVar2 != 0) {
    if (param_1[1] != 0) {
      if (((*(byte *)(in_EAX + 0x10) & 4) != 0) &&
         (iVar2 = (int)param_1 + (4 - param_1[1]), iVar2 != local_20)) {
        uVar4 = _get_cie_encoding();
        local_24 = _base_from_object();
        local_20 = iVar2;
      }
      if (uVar4 == 0) {
        bVar5 = param_1[2] == 0;
      }
      else {
        _read_encoded_value_with_base(param_1 + 2,&local_14,local_24);
        uVar3 = _size_of_encoded_value();
        if (uVar3 < 4) {
          bVar5 = (local_14 & (1 << ((char)uVar3 * '\b' & 0x1fU)) - 1U) == 0;
        }
        else {
          bVar5 = local_14 == 0;
        }
      }
      if ((!bVar5) && (iVar2 = *in_EDX, iVar2 != 0)) {
        iVar1 = *(int *)(iVar2 + 4);
        *(int **)(iVar2 + 8 + iVar1 * 4) = param_1;
        *(int *)(iVar2 + 4) = iVar1 + 1;
      }
    }
    iVar2 = *param_1 + (int)param_1;
    param_1 = (int *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return;
}



int * _linear_search_fdes(int param_1)

{
  int in_EAX;
  undefined4 local_24;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *in_EDX;
  uint uVar4;
  int local_20;
  uint local_18;
  uint local_14;
  
  local_20 = 0;
  uVar4 = (uint)(*(ushort *)(in_EAX + 0x10) >> 3) & 0xff;
  local_24 = _base_from_object();
  iVar1 = *in_EDX;
  do {
    if (iVar1 == 0) {
      return (int *)0;
    }
    if (in_EDX[1] != 0) {
      if (((*(byte *)(in_EAX + 0x10) & 4) != 0) &&
         (iVar1 = (int)in_EDX + (4 - in_EDX[1]), iVar1 != local_20)) {
        uVar4 = _get_cie_encoding();
        local_24 = _base_from_object();
        local_20 = iVar1;
      }
      if (uVar4 == 0) {
        local_14 = in_EDX[2];
        local_18 = in_EDX[3];
        uVar3 = local_14;
      }
      else {
        uVar2 = _read_encoded_value_with_base(in_EDX + 2,&local_14,local_24);
        _read_encoded_value_with_base(uVar2,&local_18);
        uVar3 = _size_of_encoded_value();
        if (uVar3 < 4) {
          uVar3 = (1 << ((char)uVar3 * '\b' & 0x1fU)) - 1;
        }
        else {
          uVar3 = 0xffffffff;
        }
        uVar3 = uVar3 & local_14;
      }
      if ((uVar3 != 0) && (param_1 - local_14 < local_18)) {
        return in_EDX;
      }
    }
    iVar1 = *in_EDX + (int)in_EDX;
    in_EDX = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}



int _search_object(void)

{
  size_t _Size;
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  uint *in_EAX;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint in_EDX;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  uint local_68;
  uint local_58;
  uint local_54;
  uint local_48;
  uint *local_44;
  void *local_40;
  code *local_3c;
  uint local_38;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  void *local_18;
  
  bVar9 = *(byte *)(in_EAX + 4);
  if ((bVar9 & 1) == 0) {
    local_38 = in_EAX[4] >> 0xb;
    if (local_38 == 0) {
      if ((bVar9 & 2) == 0) {
        local_38 = _classify_object_over_fdes();
      }
      else {
        piVar11 = (int *)in_EAX[3];
        iVar5 = *piVar11;
        while (iVar5 != 0) {
          piVar11 = piVar11 + 1;
          iVar5 = _classify_object_over_fdes();
          local_38 = local_38 + iVar5;
          iVar5 = *piVar11;
        }
      }
      if ((local_38 & 0x1fffff) == local_38) {
        in_EAX[4] = in_EAX[4] & 0x7ff | local_38 << 0xb;
      }
      else {
        in_EAX[4] = in_EAX[4] & 0x7ff;
      }
    }
    if (local_38 != 0) {
      _Size = local_38 * 4 + 8;
      local_1c = (uint *)_malloc(_Size);
      if (local_1c != (uint *)0x0) {
        local_1c[1] = 0;
        local_18 = _malloc(_Size);
        if (local_18 != (void *)0x0) {
          *(undefined4 *)((int)local_18 + 4) = 0;
        }
        if ((*(byte *)(in_EAX + 4) & 2) == 0) {
          _add_fdes(in_EAX[3]);
        }
        else {
          piVar11 = (int *)in_EAX[3];
          iVar5 = *piVar11;
          while (iVar5 != 0) {
            piVar11 = piVar11 + 1;
            _add_fdes(iVar5);
            iVar5 = *piVar11;
          }
        }
        pvVar3 = local_18;
        puVar2 = local_1c;
        if ((local_1c != (uint *)0x0) && (local_1c[1] != local_38)) goto LAB_00402815;
        local_3c = (code *)&_fde_mixed_encoding_compare;
        if (((*(byte *)(in_EAX + 4) & 4) == 0) &&
           (local_3c = (code *)&_fde_unencoded_compare, (char)(*(ushort *)(in_EAX + 4) >> 3) != '\0'
           )) {
          local_3c = _fde_single_encoding_compare;
        }
        local_40 = local_18;
        if (local_18 == (void *)0x0) {
          _frame_heapsort((int)local_1c);
        }
        else {
          uVar10 = 0;
          local_48 = local_1c[1];
          local_44 = local_1c;
          puVar13 = (uint *)(___w32_sharedptr + 0x24);
          puVar14 = local_1c;
          if (local_48 != 0) {
            do {
              while (((uint *)(___w32_sharedptr + 0x24) != puVar13 &&
                     (iVar5 = (*local_3c)(in_EAX,puVar2[uVar10 + 2],*puVar13), iVar5 < 0))) {
                puVar6 = (uint *)((int)puVar13 - (int)puVar2);
                puVar13 = *(uint **)((int)pvVar3 + (int)puVar6);
                *(undefined4 *)((int)pvVar3 + (int)puVar6) = 0;
              }
              *(uint **)((int)pvVar3 + uVar10 * 4 + 8) = puVar13;
              uVar10 = uVar10 + 1;
              puVar13 = puVar14 + 2;
              puVar14 = puVar14 + 1;
            } while (uVar10 < local_48);
          }
          while( true ) {
            iVar5 = 0;
            uVar10 = 0;
            uVar12 = 0;
            if (local_48 != 0) {
              do {
                if (*(int *)((int)local_40 + uVar12 * 4 + 8) == 0) {
                  *(uint *)((int)local_40 + iVar5 * 4 + 8) = local_44[uVar12 + 2];
                  iVar5 = iVar5 + 1;
                }
                else {
                  local_44[uVar10 + 2] = local_44[uVar12 + 2];
                  uVar10 = uVar10 + 1;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < local_48);
            }
            local_44[1] = uVar10;
            *(int *)((int)local_40 + 4) = iVar5;
            if (*(int *)((int)local_18 + 4) + local_1c[1] == local_38) break;
LAB_00402815:
            _abort();
          }
          _frame_heapsort((int)local_18);
          pvVar3 = local_18;
          puVar2 = local_1c;
          iVar5 = *(int *)((int)local_18 + 4);
          if (iVar5 != 0) {
            uVar10 = local_1c[1];
            do {
              iVar5 = iVar5 + -1;
              uVar12 = *(uint *)((int)pvVar3 + iVar5 * 4 + 8);
              while ((uVar10 != 0 &&
                     (iVar7 = (*local_3c)(in_EAX,puVar2[uVar10 + 1],uVar12), 0 < iVar7))) {
                iVar1 = uVar10 + 1;
                iVar7 = uVar10 + iVar5;
                uVar10 = uVar10 - 1;
                puVar2[iVar7 + 2] = puVar2[iVar1];
              }
              puVar2[uVar10 + iVar5 + 2] = uVar12;
            } while (iVar5 != 0);
            puVar2[1] = puVar2[1] + *(int *)((int)pvVar3 + 4);
          }
          _free(local_18);
        }
        *local_1c = in_EAX[3];
        *(byte *)(in_EAX + 4) = *(byte *)(in_EAX + 4) | 1;
        *(uint **)(in_EAX + 3) = local_1c;
      }
    }
    if (in_EDX <= *in_EAX && *in_EAX != in_EDX) {
      return 0;
    }
    bVar9 = *(byte *)(in_EAX + 4);
  }
  if ((bVar9 & 1) == 0) {
    if ((bVar9 & 2) == 0) {
      uVar4 = _linear_search_fdes(in_EDX);
      return uVar4;
    }
    piVar11 = (int *)in_EAX[3];
    while (*piVar11 != 0) {
      iVar5 = _linear_search_fdes(in_EDX);
      if (iVar5 != 0) {
        return iVar5;
      }
      piVar11 = piVar11 + 1;
    }
  }
  else {
    if ((bVar9 & 4) == 0) {
      if ((*(ushort *)(in_EAX + 4) >> 3 & 0xff) == 0) {
        uVar10 = 0;
        uVar12 = *(uint *)(in_EAX[3] + 4);
        bVar15 = ((uint)(*(ushort *)(in_EAX + 4) >> 3) & 0xff) < uVar12;
        while (bVar15) {
          uVar8 = uVar10 + uVar12 >> 1;
          iVar5 = *(int *)(in_EAX[3] + 8 + uVar8 * 4);
          if (in_EDX < *(uint *)(iVar5 + 8)) {
            bVar15 = uVar10 < uVar8;
            uVar12 = uVar8;
          }
          else {
            if (in_EDX < *(uint *)(iVar5 + 8) + *(int *)(iVar5 + 0xc)) {
              return iVar5;
            }
            uVar10 = uVar8 + 1;
            bVar15 = uVar10 < uVar12;
          }
        }
      }
      else {
        uVar10 = in_EAX[3];
        _base_from_object();
        local_68 = 0;
        uVar12 = *(uint *)(uVar10 + 4);
        if (uVar12 != 0) {
          do {
            uVar8 = local_68 + uVar12 >> 1;
            iVar5 = *(int *)(uVar10 + 8 + uVar8 * 4);
            uVar4 = _read_encoded_value_with_base(iVar5 + 8,&local_28);
            _read_encoded_value_with_base(uVar4,&local_2c);
            if (local_28 <= in_EDX) {
              if (in_EDX < local_28 + local_2c) {
                return iVar5;
              }
              local_68 = uVar8 + 1;
              uVar8 = uVar12;
            }
            uVar12 = uVar8;
          } while (local_68 < uVar8);
        }
      }
    }
    else {
      uVar10 = in_EAX[3];
      local_54 = 0;
      local_58 = *(uint *)(uVar10 + 4);
      if (local_58 != 0) {
        do {
          uVar12 = local_54 + local_58 >> 1;
          iVar5 = *(int *)(uVar10 + 8 + uVar12 * 4);
          _get_cie_encoding();
          _base_from_object();
          uVar4 = _read_encoded_value_with_base(iVar5 + 8,&local_20);
          _read_encoded_value_with_base(uVar4,&local_24);
          if (local_20 <= in_EDX) {
            if (in_EDX < local_20 + local_24) {
              return iVar5;
            }
            local_54 = uVar12 + 1;
            uVar12 = local_58;
          }
          local_58 = uVar12;
        } while (local_54 < local_58);
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * ___w32_sharedptr_get(void)

{
  uint uVar1;
  ATOM in_AX;
  ATOM AVar2;
  UINT UVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_EAX;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint *_Memory;
  uint *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  char local_4c [68];
  
  piVar9 = (int *)0x0;
  UVar3 = _GetAtomNameA_12(in_AX,local_4c,0x3d);
  iVar8 = 0x1f;
  uVar6 = 1;
  if (UVar3 != 0) {
    do {
      while (local_4c[iVar8] != 'A') {
        uVar6 = uVar6 * 2;
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) goto LAB_00402baa;
      }
      piVar9 = (int *)((uint)piVar9 | uVar6);
      uVar6 = uVar6 * 2;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
LAB_00402baa:
    if (*piVar9 == 0x40) {
      return (uint *)piVar9;
    }
    __assert();
  }
  uVar4 = __assert();
  if (___w32_sharedptr != (uint *)0x0) {
    return (uint *)uVar4;
  }
  AVar2 = _FindAtomA_4(&stack0xffffff48);
  uVar6 = (uint)AVar2;
  if (AVar2 == 0) {
    UNRECOVERED_JUMPTABLE = (code *)0x40;
    _Memory = (uint *)_malloc(0x40);
    if (_Memory == (uint *)0x0) {
      _abort();
      puVar7 = (undefined4 *)&stack0xfffffeec;
      uVar6 = extraout_EAX;
      while (0xfff < uVar6) {
        puVar7 = puVar7 + -0x400;
        *puVar7 = *puVar7;
        uVar6 = uVar6 - 0x1000;
      }
      *(undefined4 *)((int)puVar7 - uVar6) = *(undefined4 *)((int)puVar7 - uVar6);
                    // WARNING: Could not recover jumptable at 0x00402e4b. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar4 = (*UNRECOVERED_JUMPTABLE)();
      return (uint *)uVar4;
    }
    iVar8 = 0x10;
    puVar10 = _Memory;
    while (iVar8 != 0) {
      iVar8 = iVar8 + -1;
      *puVar10 = uVar6;
      puVar10 = puVar10 + 1;
    }
    _Memory[1] = 0x402f40;
    uVar6 = 1;
    _Memory[2] = 0x402b50;
    uVar5 = dw2_object_mutex_0;
    *_Memory = 0x40;
    uVar1 = DAT_00406074;
    _Memory[5] = uVar5;
    uVar5 = dw2_once_1;
    _Memory[6] = uVar1;
    uVar1 = DAT_00404034;
    _Memory[7] = uVar5;
    uVar5 = eh_globals_static_2;
    _Memory[8] = uVar1;
    uVar1 = DAT_00406084;
    _Memory[10] = uVar5;
    uVar5 = eh_globals_key_3;
    _Memory[0xc] = 0xffffffff;
    _Memory[0xb] = uVar1;
    _Memory[0xd] = uVar5;
    uVar5 = eh_globals_once_4;
    _Memory[0xf] = DAT_0040403c;
    iVar8 = 0x1f;
    _Memory[0xe] = uVar5;
    do {
      uVar5 = (uint)_Memory & uVar6;
      uVar6 = uVar6 * 2;
      (&stack0xffffff08)[iVar8] = (-(uVar5 == 0) & 0x20U) + 0x41;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    AVar2 = _AddAtomA_4(&stack0xffffff08);
    if ((AVar2 == 0) || (puVar10 = (uint *)___w32_sharedptr_get(), puVar10 != _Memory)) {
      AVar2 = 0;
    }
    if (AVar2 != 0) goto LAB_00402de6;
    _free(_Memory);
    _FindAtomA_4(&stack0xffffff48);
  }
  _Memory = (uint *)___w32_sharedptr_get();
LAB_00402de6:
  ____w32_sharedptr_terminate = _Memory + 1;
  ___w32_sharedptr = _Memory;
  ____w32_sharedptr_unexpected = _Memory + 2;
  return _Memory + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ___w32_sharedptr_initialize(void)

{
  uint uVar1;
  ATOM AVar2;
  uint uVar3;
  uint extraout_EAX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *_Memory;
  uint *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack184 [6];
  uint local_a0;
  char local_9c [32];
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
  
  if (___w32_sharedptr != (uint *)0x0) {
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
  AVar2 = _FindAtomA_4((LPCSTR)&local_5c);
  local_a0 = (uint)AVar2;
  if (AVar2 == 0) {
    UNRECOVERED_JUMPTABLE = (code *)0x40;
    _Memory = (uint *)_malloc(0x40);
    if (_Memory == (uint *)0x0) {
      _abort();
      puVar6 = auStack184;
      uVar5 = extraout_EAX;
      while (0xfff < uVar5) {
        puVar6 = puVar6 + -0x400;
        *puVar6 = *puVar6;
        uVar5 = uVar5 - 0x1000;
      }
      *(undefined4 *)((int)puVar6 - uVar5) = *(undefined4 *)((int)puVar6 - uVar5);
                    // WARNING: Could not recover jumptable at 0x00402e4b. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iVar4 = 0x10;
    puVar7 = _Memory;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      *puVar7 = local_a0;
      puVar7 = puVar7 + 1;
    }
    _Memory[1] = 0x402f40;
    uVar5 = 1;
    _Memory[2] = 0x402b50;
    uVar3 = dw2_object_mutex_0;
    *_Memory = 0x40;
    uVar1 = DAT_00406074;
    _Memory[5] = uVar3;
    uVar3 = dw2_once_1;
    _Memory[6] = uVar1;
    uVar1 = DAT_00404034;
    _Memory[7] = uVar3;
    uVar3 = eh_globals_static_2;
    _Memory[8] = uVar1;
    uVar1 = DAT_00406084;
    _Memory[10] = uVar3;
    uVar3 = eh_globals_key_3;
    _Memory[0xc] = 0xffffffff;
    _Memory[0xb] = uVar1;
    _Memory[0xd] = uVar3;
    uVar3 = eh_globals_once_4;
    _Memory[0xf] = DAT_0040403c;
    iVar4 = 0x1f;
    _Memory[0xe] = uVar3;
    do {
      uVar3 = (uint)_Memory & uVar5;
      uVar5 = uVar5 * 2;
      local_9c[iVar4] = (-(uVar3 == 0) & 0x20U) + 0x41;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    local_7c = 0x42494c2d;
    local_78 = 0x57434347;
    local_74 = 0x452d3233;
    local_70 = 0x2d332d48;
    local_6c = 0x52485447;
    local_68 = 0x4e494d2d;
    local_64 = 0x32335747;
    local_60 = 0;
    AVar2 = _AddAtomA_4(local_9c);
    if ((AVar2 == 0) || (puVar7 = (uint *)___w32_sharedptr_get(), puVar7 != _Memory)) {
      AVar2 = 0;
    }
    if (AVar2 != 0) goto LAB_00402de6;
    _free(_Memory);
    _FindAtomA_4((LPCSTR)&local_5c);
  }
  _Memory = (uint *)___w32_sharedptr_get();
LAB_00402de6:
  ____w32_sharedptr_terminate = _Memory + 1;
  ___w32_sharedptr = _Memory;
  ____w32_sharedptr_unexpected = _Memory + 2;
  return;
}



void * __cdecl __alloca(size_t _Size)

{
  uint in_EAX;
  void *pvVar1;
  size_t *psVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  psVar2 = &_Size;
  while (0xfff < in_EAX) {
    psVar2 = psVar2 + -0x400;
    *psVar2 = *psVar2;
    in_EAX = in_EAX - 0x1000;
  }
  *(size_t *)((int)psVar2 - in_EAX) = *(size_t *)((int)psVar2 - in_EAX);
                    // WARNING: Could not recover jumptable at 0x00402e4b. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*UNRECOVERED_JUMPTABLE)();
  return pvVar1;
}



void ___p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00402ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl
___getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _scanf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = scanf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

size_t __cdecl _strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen();
  return sVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sscanf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00402ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  exit();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strncmp();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00402f20. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)malloc();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00402f40. Too many branches
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void __assert(void)

{
                    // WARNING: Could not recover jumptable at 0x00402f50. Too many branches
                    // WARNING: Treating indirect jump as call
  _assert();
  return;
}



void _ExitProcess_4(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x00402f60. Too many branches
                    // WARNING: Treating indirect jump as call
  ExitProcess(uExitCode);
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER
_SetUnhandledExceptionFilter_4(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



BOOL _ReleaseSemaphore_12(HANDLE hSemaphore,LONG lReleaseCount,LPLONG lpPreviousCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f80. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ReleaseSemaphore(hSemaphore,lReleaseCount,lpPreviousCount);
  return BVar1;
}



LONG _InterlockedDecrement_4(LONG *lpAddend)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402f90. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}



DWORD _WaitForSingleObject_8(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}



HANDLE _CreateSemaphoreA_16
                 (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,LONG lInitialCount,LONG lMaximumCount,
                 LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateSemaphoreA(lpSemaphoreAttributes,lInitialCount,lMaximumCount,lpName);
  return pvVar1;
}



void _Sleep_4(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x00402fc0. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LONG _InterlockedIncrement_4(LONG *lpAddend)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fd0. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}



UINT _GetAtomNameA_12(ATOM nAtom,LPSTR lpBuffer,int nSize)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402fe0. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = GetAtomNameA(nAtom,lpBuffer,nSize);
  return UVar1;
}



ATOM _AddAtomA_4(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402ff0. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = AddAtomA(lpString);
  return AVar1;
}



ATOM _FindAtomA_4(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00403000. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = FindAtomA(lpString);
  return AVar1;
}



void ___dereg_frame_dtor(void)

{
  ___deregister_frame_info((LONG *)&___EH_FRAME_BEGIN__);
  return;
}


