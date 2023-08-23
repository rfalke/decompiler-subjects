typedef unsigned char   undefined;

typedef pointer32 ImageBaseOffset32;

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

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};




void ___mingw_CRTStartup(void)

{
  int *piVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  char **local_10;
  _startupinfo local_c;
  
  _SetUnhandledExceptionFilter_4((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00401000);
  __fpreset();
  local_c.newmode = 0;
  ___getmainargs(&__argc,&DAT_00405000,&local_10,DAT_00403000,&local_c);
  if (__CRT_fmode != 0) {
    __fmode = __CRT_fmode;
    if (_iob_exref != (code *)0x0) {
      _setmode(*(int *)(_iob_exref + 0x10),__CRT_fmode);
    }
    if (_iob_exref != (code *)0xffffffe0) {
      _setmode(*(int *)(_iob_exref + 0x30),__CRT_fmode);
    }
    if (_iob_exref != (code *)0xffffffc0) {
      _setmode(*(int *)(_iob_exref + 0x50),__CRT_fmode);
    }
  }
  piVar1 = (int *)___p__fmode();
  *piVar1 = __fmode;
  __pei386_runtime_relocator();
  puVar2 = (undefined4 *)__p__environ();
  uExitCode = _main(__argc,DAT_00405000,(char **)*puVar2);
  _cexit();
                    // WARNING: Subroutine does not return
  _ExitProcess_4(uExitCode);
}



void _mainCRTStartup(void)

{
  __set_app_type(1);
                    // WARNING: Subroutine does not return
  ___mingw_CRTStartup();
}



void _atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004012aa. Too many branches
                    // WARNING: Treating indirect jump as call
  atexit();
  return;
}



void ___do_frame_init(void)

{
  ___w32_sharedptr_initialize();
  ___register_frame_info((int *)&___EH_FRAME_BEGIN__,(undefined4 *)&_obj);
  return;
}



void ___do_frame_fini(void)

{
  ___deregister_frame_info((int *)&___EH_FRAME_BEGIN__);
  return;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  int iVar1;
  size_t in_stack_ffffffc0;
  char local_1c [24];
  
  __alloca(in_stack_ffffffc0);
  ___main();
  _printf("IOLI Crackme Level 0x00\n");
  _printf("Password: ");
  _scanf("%s",local_1c);
  iVar1 = _strcmp(local_1c,"250382");
  if (iVar1 == 0) {
    _printf("Password OK :)\n");
  }
  else {
    _printf("Invalid Password!\n");
  }
  return 0;
}



void __pei386_runtime_relocator(void)

{
  int *piVar1;
  
  for (piVar1 = &__RUNTIME_PSEUDO_RELOC_LIST_END__; piVar1 < &__RUNTIME_PSEUDO_RELOC_LIST_END__;
      piVar1 = piVar1 + 2) {
    *(int *)(piVar1[1] + 0x400000) = *(int *)(piVar1[1] + 0x400000) + *piVar1;
  }
  return;
}



void __cdecl __fpreset(void)

{
  return;
}



void ___do_global_ctors(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = 0;
  bVar2 = false;
  while (!bVar2) {
    iVar1 = iVar1 + 1;
    bVar2 = (&_ctors)[iVar1] == (undefined *)0x0;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)(&___CTOR_LIST__)[iVar1])();
  }
  _atexit();
  return;
}



void ___main(void)

{
  if (_initialized != 0) {
    return;
  }
  _initialized = 1;
  ___do_global_ctors();
  return;
}



undefined4 _size_of_encoded_value(void)

{
  byte in_AL;
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (in_AL != 0xff) {
    bVar1 = in_AL & 7;
    uVar2 = 2;
    if (bVar1 != 2) {
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          return 4;
        }
      }
      else {
        if (bVar1 == 3) {
          return 4;
        }
        if (bVar1 == 4) {
          return 8;
        }
      }
                    // WARNING: Subroutine does not return
      _abort();
    }
  }
  return uVar2;
}



undefined8 __fastcall _read_uleb128(undefined4 param_1,uint *param_2)

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



byte * __fastcall _read_sleb128(undefined4 param_1,uint *param_2)

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



undefined4 * __fastcall
_read_encoded_value_with_base
          (undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte in_AL;
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *local_18;
  undefined4 *local_14;
  
  if (in_AL != 0x50) {
    switch(in_AL & 0xf) {
    case 0:
    case 3:
    case 0xb:
      local_18 = (undefined4 *)*param_3;
      puVar1 = param_3 + 1;
      break;
    case 1:
      uVar2 = _read_uleb128(param_3,(uint *)&local_14);
      puVar1 = (undefined4 *)uVar2;
      local_18 = local_14;
      break;
    case 2:
      local_18 = (undefined4 *)(uint)*(ushort *)param_3;
      puVar1 = (undefined4 *)((int)param_3 + 2);
      break;
    case 4:
    case 0xc:
      local_18 = (undefined4 *)*param_3;
      puVar1 = param_3 + 2;
      break;
    default:
                    // WARNING: Subroutine does not return
      _abort();
    case 9:
      puVar1 = (undefined4 *)_read_sleb128(param_3,(uint *)&local_18);
      break;
    case 10:
      local_18 = (undefined4 *)(int)*(short *)param_3;
      puVar1 = (undefined4 *)((int)param_3 + 2);
    }
    if (local_18 != (undefined4 *)0x0) {
      if ((in_AL & 0x70) == 0x10) {
        local_18 = (undefined4 *)((int)local_18 + (int)param_3);
      }
      else {
        local_18 = (undefined4 *)((int)local_18 + param_2);
      }
      if ((char)in_AL < '\0') {
        local_18 = (undefined4 *)*local_18;
      }
    }
    *param_4 = local_18;
    return puVar1;
  }
  puVar1 = (undefined4 *)((int)param_3 + 3U & 0xfffffffc);
  *param_4 = *puVar1;
  return puVar1 + 1;
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
    param_2[3] = param_1;
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



int __cdecl ___deregister_frame_info_bases(int *param_1)

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
  _init_object_mutex_once();
  iVar5 = ___w32_sharedptr;
  lpAddend = (LONG *)(___w32_sharedptr + 0x14);
  if (((__CRT_MT != 0) && (LVar2 = _InterlockedIncrement_4(lpAddend), LVar2 != 0)) &&
     (DVar3 = _WaitForSingleObject_8(*(HANDLE *)(iVar5 + 0x18),0xffffffff), DVar3 != 0)) {
    _InterlockedDecrement_4(lpAddend);
  }
  iVar6 = ___w32_sharedptr;
  piVar4 = (int *)(___w32_sharedptr + 0xc);
  for (iVar5 = *(int *)(___w32_sharedptr + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
    iVar5 = *piVar4;
    if (*(int **)(iVar5 + 0xc) == param_1) goto LAB_00401a98;
    piVar4 = (int *)(iVar5 + 0x14);
  }
  iVar1 = *(int *)(___w32_sharedptr + 0x10);
  piVar4 = (int *)(___w32_sharedptr + 0x10);
  do {
    if (iVar1 == 0) {
      if ((__CRT_MT != 0) &&
         (LVar2 = _InterlockedDecrement_4((LONG *)(___w32_sharedptr + 0x14)), -1 < LVar2)) {
        _ReleaseSemaphore_12(*(HANDLE *)(iVar6 + 0x18),1,(LPLONG)0x0);
                    // WARNING: Subroutine does not return
        _abort();
      }
                    // WARNING: Subroutine does not return
      _abort();
    }
    iVar5 = *piVar4;
    if ((*(byte *)(iVar5 + 0x10) & 1) == 0) {
      if (*(int **)(iVar5 + 0xc) == param_1) break;
    }
    else if (**(int ***)(iVar5 + 0xc) == param_1) {
      *piVar4 = *(int *)(iVar5 + 0x14);
      _free(*(void **)(iVar5 + 0xc));
      iVar6 = ___w32_sharedptr;
      goto LAB_00401a9d;
    }
    iVar1 = *(int *)(iVar5 + 0x14);
    piVar4 = (int *)(iVar5 + 0x14);
  } while( true );
LAB_00401a98:
  *piVar4 = *(int *)(iVar5 + 0x14);
LAB_00401a9d:
  if ((__CRT_MT != 0) && (LVar2 = _InterlockedDecrement_4((LONG *)(iVar6 + 0x14)), -1 < LVar2)) {
    _ReleaseSemaphore_12(*(HANDLE *)(iVar6 + 0x18),1,(LPLONG)0x0);
  }
  return iVar5;
}



void __cdecl ___deregister_frame_info(int *param_1)

{
  ___deregister_frame_info_bases(param_1);
  return;
}



undefined4 __fastcall _base_from_object(undefined4 param_1,int param_2)

{
  byte in_AL;
  byte bVar1;
  bool bVar2;
  
  if (in_AL == 0xff) {
    return 0;
  }
  bVar1 = in_AL & 0x70;
  if (bVar1 == 0x20) {
    return *(undefined4 *)(param_2 + 4);
  }
  if (bVar1 < 0x21) {
    if (bVar1 == 0) {
      return 0;
    }
    bVar2 = bVar1 == 0x10;
  }
  else {
    if (bVar1 == 0x30) {
      return *(undefined4 *)(param_2 + 8);
    }
    bVar2 = bVar1 == 0x50;
  }
  if (bVar2) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  _abort();
}



undefined _get_cie_encoding(void)

{
  char cVar1;
  undefined uVar2;
  int in_EAX;
  size_t sVar3;
  byte *pbVar4;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  uVar2 = 0;
  if (*(char *)(in_EAX + 9) == 'z') {
    sVar3 = _strlen((char *)(in_EAX + 9));
    _read_uleb128((char *)(in_EAX + 9) + sVar3 + 1,&local_10);
    pcVar6 = (char *)(in_EAX + 10);
    pbVar4 = _read_sleb128(extraout_ECX,&local_14);
    uVar7 = _read_uleb128(pbVar4 + 1,&local_10);
    puVar5 = (undefined4 *)uVar7;
    while (cVar1 = *pcVar6, cVar1 != 'R') {
      if (cVar1 == 'P') {
        pcVar6 = pcVar6 + 1;
        puVar5 = _read_encoded_value_with_base(puVar5,0,(undefined4 *)((int)puVar5 + 1),&local_18);
      }
      else {
        if (cVar1 != 'L') {
          return 0;
        }
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      }
    }
    uVar2 = *(undefined *)puVar5;
  }
  return uVar2;
}



int __thiscall _fde_single_encoding_compare(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint local_14;
  uint local_10;
  
  iVar1 = _base_from_object(this,param_1);
  _read_encoded_value_with_base(extraout_ECX,iVar1,(undefined4 *)(param_2 + 8),&local_10);
  _read_encoded_value_with_base(extraout_ECX_00,iVar1,(undefined4 *)(param_3 + 8),&local_14);
  iVar1 = 1;
  if (local_10 <= local_14) {
    iVar1 = -(uint)(local_10 < local_14);
  }
  return iVar1;
}



void __fastcall
_frame_downheap(undefined4 param_1,undefined *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_4 * 2;
  while( true ) {
    iVar4 = iVar2 + 1;
    if (param_5 <= iVar4) {
      return;
    }
    if ((iVar2 + 2 < param_5) &&
       (iVar3 = (*(code *)param_2)(in_EAX,*(undefined4 *)(param_3 + iVar4 * 4),
                                   *(undefined4 *)(param_3 + 4 + iVar4 * 4)), iVar3 < 0)) {
      iVar4 = iVar2 + 2;
    }
    iVar2 = (*(code *)param_2)(in_EAX,*(undefined4 *)(param_3 + param_4 * 4),
                               *(undefined4 *)(param_3 + iVar4 * 4));
    if (-1 < iVar2) break;
    uVar1 = *(undefined4 *)(param_3 + param_4 * 4);
    *(undefined4 *)(param_3 + param_4 * 4) = *(undefined4 *)(param_3 + iVar4 * 4);
    *(undefined4 *)(param_3 + iVar4 * 4) = uVar1;
    iVar2 = iVar4 * 2;
    param_4 = iVar4;
  }
  return;
}



void __fastcall _frame_heapsort(undefined4 param_1,undefined *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar4;
  
  uVar4 = *(uint *)(param_3 + 4);
  puVar1 = (undefined4 *)(param_3 + 8);
  uVar3 = uVar4 >> 1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    _frame_downheap(param_1,param_2,(int)puVar1,uVar3,uVar4);
    param_1 = extraout_ECX;
  }
  while (uVar4 = uVar4 - 1, 0 < (int)uVar4) {
    uVar2 = *puVar1;
    *puVar1 = puVar1[uVar4];
    puVar1[uVar4] = uVar2;
    _frame_downheap(param_1,param_2,(int)puVar1,0,uVar4);
    param_1 = extraout_ECX_00;
  }
  return;
}



int __fastcall _classify_object_over_fdes(uint param_1,int *param_2)

{
  ushort uVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  int local_24;
  byte local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar2 = *param_2;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  while (iVar2 != 0) {
    if (param_2[1] != 0) {
      iVar2 = (int)param_2 + (4 - param_2[1]);
      if (iVar2 != local_18) {
        uVar3 = _get_cie_encoding();
        local_24 = _base_from_object(extraout_ECX,(int)in_EAX);
        uVar1 = *(ushort *)(in_EAX + 4);
        param_1 = (uint)uVar1;
        uVar4 = uVar1 >> 3 & 0xff;
        local_18 = iVar2;
        if (uVar4 == 0xff) {
          local_20 = (byte)uVar3;
          *(ushort *)(in_EAX + 4) = uVar1 & 0xf807 | (ushort)local_20 << 3;
        }
        else if (uVar4 != uVar3) {
          *(byte *)(in_EAX + 4) = *(byte *)(in_EAX + 4) | 4;
        }
      }
      _read_encoded_value_with_base(param_1,local_24,param_2 + 2,&local_14);
      uVar3 = _size_of_encoded_value();
      if (uVar3 < 4) {
        param_1 = uVar3 * 8;
        uVar3 = (1 << ((byte)param_1 & 0x1f)) - 1;
      }
      else {
        uVar3 = 0xffffffff;
        param_1 = extraout_ECX_00;
      }
      if (((uVar3 & local_14) != 0) &&
         (local_1c = local_1c + 1, local_14 <= *in_EAX && *in_EAX != local_14)) {
        *in_EAX = local_14;
      }
    }
    iVar2 = *(int *)((int)param_2 + *param_2 + 4);
    param_2 = (int *)((int)param_2 + *param_2 + 4);
  }
  return local_1c;
}



void __fastcall _add_fdes(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  int extraout_ECX_02;
  uint uVar5;
  bool bVar6;
  int local_24;
  int local_20;
  uint local_14;
  
  local_20 = 0;
  uVar5 = *(ushort *)(in_EAX + 0x10) >> 3 & 0xff;
  local_24 = _base_from_object(param_1,in_EAX);
  iVar2 = *param_3;
  iVar4 = extraout_ECX;
  while (iVar2 != 0) {
    if (param_3[1] != 0) {
      if (((*(byte *)(in_EAX + 0x10) & 4) != 0) &&
         (iVar2 = (int)param_3 + (4 - param_3[1]), iVar2 != local_20)) {
        uVar5 = _get_cie_encoding();
        local_24 = _base_from_object(extraout_ECX_00,in_EAX);
        iVar4 = extraout_ECX_01;
        local_20 = iVar2;
      }
      if (uVar5 == 0) {
        bVar6 = param_3[2] == 0;
      }
      else {
        _read_encoded_value_with_base(iVar4,local_24,param_3 + 2,&local_14);
        uVar3 = _size_of_encoded_value();
        if (uVar3 < 4) {
          iVar4 = uVar3 * 8;
          bVar6 = (local_14 & (1 << ((byte)iVar4 & 0x1f)) - 1U) == 0;
        }
        else {
          bVar6 = local_14 == 0;
          iVar4 = extraout_ECX_02;
        }
      }
      if ((!bVar6) && (iVar2 = *param_2, iVar2 != 0)) {
        iVar1 = *(int *)(iVar2 + 4);
        *(int **)(iVar2 + 8 + iVar1 * 4) = param_3;
        *(int *)(iVar2 + 4) = iVar1 + 1;
      }
    }
    iVar2 = *(int *)((int)param_3 + *param_3 + 4);
    param_3 = (int *)((int)param_3 + *param_3 + 4);
  }
  return;
}



int * __fastcall _linear_search_fdes(undefined4 param_1,int *param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar5;
  int local_24;
  int local_20;
  uint local_18;
  uint local_14;
  
  local_20 = 0;
  uVar5 = *(ushort *)(in_EAX + 0x10) >> 3 & 0xff;
  local_24 = _base_from_object(param_1,in_EAX);
  iVar1 = *param_2;
  uVar3 = extraout_ECX;
  do {
    if (iVar1 == 0) {
      return (int *)0x0;
    }
    if (param_2[1] != 0) {
      if (((*(byte *)(in_EAX + 0x10) & 4) != 0) &&
         (iVar1 = (int)param_2 + (4 - param_2[1]), iVar1 != local_20)) {
        uVar5 = _get_cie_encoding();
        local_24 = _base_from_object(extraout_ECX_00,in_EAX);
        uVar3 = extraout_ECX_01;
        local_20 = iVar1;
      }
      if (uVar5 == 0) {
        local_14 = param_2[2];
        uVar3 = param_2[3];
        local_18 = uVar3;
        uVar4 = local_14;
      }
      else {
        puVar2 = _read_encoded_value_with_base(uVar3,local_24,param_2 + 2,&local_14);
        _read_encoded_value_with_base(uVar5 & 0xf,0,puVar2,&local_18);
        uVar3 = _size_of_encoded_value();
        if (uVar3 < 4) {
          uVar3 = uVar3 * 8;
          uVar4 = (1 << ((byte)uVar3 & 0x1f)) - 1;
        }
        else {
          uVar4 = 0xffffffff;
          uVar3 = extraout_ECX_02;
        }
        uVar4 = uVar4 & local_14;
      }
      if ((uVar4 != 0) && (uVar3 = local_18, param_3 - local_14 < local_18)) {
        return param_2;
      }
    }
    iVar1 = *(int *)((int)param_2 + *param_2 + 4);
    param_2 = (int *)((int)param_2 + *param_2 + 4);
  } while( true );
}



int * __fastcall _search_object(uint *param_1,uint param_2)

{
  size_t _Size;
  int iVar1;
  void *pvVar2;
  uint *in_EAX;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *puVar7;
  uint *extraout_ECX_02;
  uint *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar8;
  uint uVar9;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  byte bVar10;
  uint uVar11;
  int **ppiVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  uint local_68;
  uint local_58;
  uint local_54;
  code *local_3c;
  uint *local_38;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  void *local_18;
  
  bVar10 = *(byte *)(in_EAX + 4);
  if ((bVar10 & 1) == 0) {
    local_38 = (uint *)(in_EAX[4] >> 0xb);
    if (local_38 == (uint *)0x0) {
      if ((bVar10 & 2) == 0) {
        local_38 = (uint *)_classify_object_over_fdes((uint)in_EAX,(int *)in_EAX[3]);
      }
      else {
        ppiVar12 = (int **)in_EAX[3];
        if (*ppiVar12 != (int *)0x0) {
          local_38 = (uint *)0x0;
          puVar7 = in_EAX;
          do {
            piVar5 = *ppiVar12;
            ppiVar12 = ppiVar12 + 1;
            iVar3 = _classify_object_over_fdes((uint)puVar7,piVar5);
            local_38 = (uint *)((int)local_38 + iVar3);
            puVar7 = extraout_ECX_02;
          } while (*ppiVar12 != (int *)0x0);
        }
      }
      if ((uint *)((uint)local_38 & 0x1fffff) == local_38) {
        in_EAX[4] = in_EAX[4] & 0x7ff | (int)local_38 << 0xb;
      }
      else {
        in_EAX[4] = in_EAX[4] & 0x7ff;
      }
    }
    param_1 = local_38;
    if (local_38 != (uint *)0x0) {
      _Size = (int)local_38 * 4 + 8;
      local_1c = (uint *)_malloc(_Size);
      param_1 = extraout_ECX_03;
      if (local_1c != (uint *)0x0) {
        local_1c[1] = 0;
        local_18 = _malloc(_Size);
        if (local_18 != (void *)0x0) {
          *(undefined4 *)((int)local_18 + 4) = 0;
        }
        if ((*(byte *)(in_EAX + 4) & 2) == 0) {
          _add_fdes(in_EAX,(int *)&local_1c,(int *)in_EAX[3]);
          uVar8 = extraout_ECX_07;
        }
        else {
          ppiVar12 = (int **)in_EAX[3];
          piVar5 = *ppiVar12;
          uVar8 = extraout_ECX_04;
          while (piVar5 != (int *)0x0) {
            ppiVar12 = ppiVar12 + 1;
            _add_fdes(uVar8,(int *)&local_1c,piVar5);
            uVar8 = extraout_ECX_05;
            piVar5 = *ppiVar12;
          }
        }
        pvVar2 = local_18;
        puVar7 = local_1c;
        if ((local_1c != (uint *)0x0) && ((uint *)local_1c[1] != local_38)) {
LAB_00402665:
                    // WARNING: Subroutine does not return
          _abort();
        }
        local_3c = (code *)&_fde_mixed_encoding_compare;
        if (((*(byte *)(in_EAX + 4) & 4) == 0) &&
           (local_3c = (code *)&_fde_unencoded_compare, (char)(*(ushort *)(in_EAX + 4) >> 3) != '\0'
           )) {
          local_3c = _fde_single_encoding_compare;
        }
        if (local_18 == (void *)0x0) {
          _frame_heapsort(uVar8,local_3c,(int)local_1c);
        }
        else {
          uVar13 = 0;
          uVar11 = local_1c[1];
          puVar14 = (uint *)(___w32_sharedptr + 0x24);
          puVar15 = local_1c;
          if (uVar11 != 0) {
            do {
              while (((uint *)(___w32_sharedptr + 0x24) != puVar14 &&
                     (iVar3 = (*local_3c)(in_EAX,puVar7[uVar13 + 2],*puVar14), iVar3 < 0))) {
                iVar3 = (int)puVar14 - (int)puVar7;
                puVar14 = *(uint **)((int)pvVar2 + iVar3);
                *(undefined4 *)((int)pvVar2 + iVar3) = 0;
              }
              *(uint **)((int)pvVar2 + uVar13 * 4 + 8) = puVar14;
              uVar13 = uVar13 + 1;
              puVar14 = puVar15 + 2;
              puVar15 = puVar15 + 1;
            } while (uVar13 < uVar11);
          }
          iVar3 = 0;
          uVar13 = 0;
          uVar9 = 0;
          if (uVar11 != 0) {
            do {
              if (*(int *)((int)pvVar2 + uVar9 * 4 + 8) == 0) {
                *(uint *)((int)pvVar2 + iVar3 * 4 + 8) = puVar7[uVar9 + 2];
                iVar3 = iVar3 + 1;
              }
              else {
                puVar7[uVar13 + 2] = puVar7[uVar9 + 2];
                uVar13 = uVar13 + 1;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar11);
          }
          puVar7[1] = uVar13;
          *(int *)((int)pvVar2 + 4) = iVar3;
          if ((uint *)(*(int *)((int)local_18 + 4) + local_1c[1]) != local_38) goto LAB_00402665;
          _frame_heapsort(local_18,local_3c,(int)local_18);
          pvVar2 = local_18;
          puVar7 = local_1c;
          iVar3 = *(int *)((int)local_18 + 4);
          if (iVar3 != 0) {
            uVar11 = local_1c[1];
            do {
              iVar3 = iVar3 + -1;
              uVar13 = *(uint *)((int)pvVar2 + iVar3 * 4 + 8);
              while ((uVar11 != 0 &&
                     (iVar6 = (*local_3c)(in_EAX,puVar7[uVar11 + 1],uVar13), 0 < iVar6))) {
                iVar1 = uVar11 + 1;
                iVar6 = uVar11 + iVar3;
                uVar11 = uVar11 - 1;
                puVar7[iVar6 + 2] = puVar7[iVar1];
              }
              puVar7[uVar11 + iVar3 + 2] = uVar13;
            } while (iVar3 != 0);
            puVar7[1] = puVar7[1] + *(int *)((int)pvVar2 + 4);
          }
          _free(local_18);
        }
        *local_1c = in_EAX[3];
        *(byte *)(in_EAX + 4) = *(byte *)(in_EAX + 4) | 1;
        in_EAX[3] = (uint)local_1c;
        param_1 = in_EAX;
      }
    }
    if (param_2 <= *in_EAX && *in_EAX != param_2) {
      return (int *)0x0;
    }
    bVar10 = *(byte *)(in_EAX + 4);
  }
  if ((bVar10 & 1) == 0) {
    if ((bVar10 & 2) == 0) {
      piVar5 = _linear_search_fdes(param_2,(int *)in_EAX[3],param_2);
      return piVar5;
    }
    for (ppiVar12 = (int **)in_EAX[3]; *ppiVar12 != (int *)0x0; ppiVar12 = ppiVar12 + 1) {
      piVar5 = _linear_search_fdes(in_EAX,*ppiVar12,param_2);
      if (piVar5 != (int *)0x0) {
        return piVar5;
      }
      in_EAX = extraout_ECX_01;
    }
  }
  else if ((bVar10 & 4) == 0) {
    if ((*(ushort *)(in_EAX + 4) >> 3 & 0xff) == 0) {
      uVar11 = 0;
      uVar13 = *(uint *)(in_EAX[3] + 4);
      bVar16 = (*(ushort *)(in_EAX + 4) >> 3 & 0xff) < uVar13;
      while (bVar16) {
        uVar9 = uVar11 + uVar13 >> 1;
        piVar5 = *(int **)(in_EAX[3] + 8 + uVar9 * 4);
        if (param_2 < (uint)piVar5[2]) {
          bVar16 = uVar11 < uVar9;
          uVar13 = uVar9;
        }
        else {
          if (param_2 < (uint)(piVar5[2] + piVar5[3])) {
            return piVar5;
          }
          uVar11 = uVar9 + 1;
          bVar16 = uVar11 < uVar13;
        }
      }
    }
    else {
      uVar11 = in_EAX[3];
      iVar3 = _base_from_object(param_1,(int)in_EAX);
      local_68 = 0;
      uVar13 = *(uint *)(uVar11 + 4);
      if (uVar13 != 0) {
        do {
          uVar9 = local_68 + uVar13 >> 1;
          piVar5 = *(int **)(uVar11 + 8 + uVar9 * 4);
          puVar4 = _read_encoded_value_with_base(&local_28,iVar3,piVar5 + 2,&local_28);
          _read_encoded_value_with_base(extraout_ECX_06,0,puVar4,&local_2c);
          if (local_28 <= param_2) {
            if (param_2 < local_28 + local_2c) {
              return piVar5;
            }
            local_68 = uVar9 + 1;
            uVar9 = uVar13;
          }
          uVar13 = uVar9;
        } while (local_68 < uVar9);
      }
    }
  }
  else {
    uVar11 = in_EAX[3];
    local_54 = 0;
    local_58 = *(uint *)(uVar11 + 4);
    if (local_58 != 0) {
      do {
        uVar13 = local_54 + local_58 >> 1;
        piVar5 = *(int **)(uVar11 + 8 + uVar13 * 4);
        _get_cie_encoding();
        iVar3 = _base_from_object(extraout_ECX,(int)in_EAX);
        puVar4 = _read_encoded_value_with_base(extraout_ECX_00,iVar3,piVar5 + 2,&local_20);
        _read_encoded_value_with_base(&local_24,0,puVar4,&local_24);
        if (local_20 <= param_2) {
          if (param_2 < local_20 + local_24) {
            return piVar5;
          }
          local_54 = uVar13 + 1;
          uVar13 = local_58;
        }
        local_58 = uVar13;
      } while (local_54 < local_58);
    }
  }
  return (int *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * ___w32_sharedptr_get(void)

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
  CHAR aCStack_f8 [32];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined uStack_7c;
  undefined4 uStack_6c;
  CHAR local_4c [68];
  
  piVar8 = (int *)0x0;
  UVar2 = _GetAtomNameA_12(in_AX,local_4c,0x3d);
  iVar6 = 0x1f;
  uVar5 = 1;
  if (UVar2 != 0) {
    do {
      while (local_4c[iVar6] != 'A') {
        uVar5 = uVar5 * 2;
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) goto LAB_004029fa;
      }
      piVar8 = (int *)((uint)piVar8 | uVar5);
      uVar5 = uVar5 * 2;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
LAB_004029fa:
    if (*piVar8 == 0x40) {
      return piVar8;
    }
    __assert();
  }
  piVar8 = (int *)__assert();
  uStack_6c = 0xf1;
  if (___w32_sharedptr != (int *)0x0) {
    return piVar8;
  }
  uStack_b8 = 0x41414141;
  uStack_b4 = 0x41414141;
  uStack_b0 = 0x41414141;
  uStack_98._0_1_ = '-';
  uStack_98._1_1_ = 'L';
  uStack_98._2_1_ = 'I';
  uStack_98._3_1_ = 'B';
  uStack_ac = 0x41414141;
  uStack_a8 = 0x41414141;
  uStack_94._0_1_ = 'G';
  uStack_94._1_1_ = 'C';
  uStack_94._2_1_ = 'C';
  uStack_94._3_1_ = 'W';
  uStack_a4 = 0x41414141;
  uStack_a0 = 0x41414141;
  uStack_90._0_1_ = '3';
  uStack_90._1_1_ = '2';
  uStack_90._2_1_ = '-';
  uStack_90._3_1_ = 'E';
  uStack_9c = 0x41414141;
  uStack_8c._0_1_ = 'H';
  uStack_8c._1_1_ = '-';
  uStack_8c._2_1_ = '3';
  uStack_8c._3_1_ = '-';
  uStack_88._0_1_ = 'G';
  uStack_88._1_1_ = 'T';
  uStack_88._2_1_ = 'H';
  uStack_88._3_1_ = 'R';
  uStack_84._0_1_ = '-';
  uStack_84._1_1_ = 'M';
  uStack_84._2_1_ = 'I';
  uStack_84._3_1_ = 'N';
  uStack_80._0_1_ = 'G';
  uStack_80._1_1_ = 'W';
  uStack_80._2_1_ = '3';
  uStack_80._3_1_ = '2';
  uStack_7c = 0;
  AVar1 = _FindAtomA_4((LPCSTR)&uStack_b8);
  if (AVar1 == 0) {
    piVar8 = (int *)_malloc(0x40);
    if (piVar8 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      _abort();
    }
    piVar4 = piVar8;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    piVar8[1] = (int)_abort;
    uVar5 = 1;
    piVar8[2] = (int)&___w32_sharedptr_default_unexpected;
    iVar6 = dw2_object_mutex_0;
    *piVar8 = 0x40;
    iVar7 = DAT_00405064;
    piVar8[5] = iVar6;
    iVar6 = dw2_once_1;
    piVar8[6] = iVar7;
    iVar7 = DAT_00403034;
    piVar8[7] = iVar6;
    iVar6 = eh_globals_static_2;
    piVar8[8] = iVar7;
    iVar7 = DAT_00405074;
    piVar8[10] = iVar6;
    iVar6 = eh_globals_key_3;
    piVar8[0xc] = -1;
    piVar8[0xb] = iVar7;
    piVar8[0xd] = iVar6;
    iVar6 = eh_globals_once_4;
    piVar8[0xf] = DAT_0040303c;
    iVar7 = 0x1f;
    piVar8[0xe] = iVar6;
    do {
      uVar3 = (uint)piVar8 & uVar5;
      uVar5 = uVar5 * 2;
      aCStack_f8[iVar7] = (-(uVar3 == 0) & 0x20U) + 0x41;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    uStack_d8._0_1_ = '-';
    uStack_d8._1_1_ = 'L';
    uStack_d8._2_1_ = 'I';
    uStack_d8._3_1_ = 'B';
    uStack_d4._0_1_ = 'G';
    uStack_d4._1_1_ = 'C';
    uStack_d4._2_1_ = 'C';
    uStack_d4._3_1_ = 'W';
    uStack_d0._0_1_ = '3';
    uStack_d0._1_1_ = '2';
    uStack_d0._2_1_ = '-';
    uStack_d0._3_1_ = 'E';
    uStack_cc._0_1_ = 'H';
    uStack_cc._1_1_ = '-';
    uStack_cc._2_1_ = '3';
    uStack_cc._3_1_ = '-';
    uStack_c8._0_1_ = 'G';
    uStack_c8._1_1_ = 'T';
    uStack_c8._2_1_ = 'H';
    uStack_c8._3_1_ = 'R';
    uStack_c4._0_1_ = '-';
    uStack_c4._1_1_ = 'M';
    uStack_c4._2_1_ = 'I';
    uStack_c4._3_1_ = 'N';
    uStack_c0._0_1_ = 'G';
    uStack_c0._1_1_ = 'W';
    uStack_c0._2_1_ = '3';
    uStack_c0._3_1_ = '2';
    uStack_bc = 0;
    AVar1 = _AddAtomA_4(aCStack_f8);
    if ((AVar1 == 0) || (piVar4 = ___w32_sharedptr_get(), piVar4 != piVar8)) {
      AVar1 = 0;
    }
    if (AVar1 != 0) goto LAB_00402c36;
    _free(piVar8);
    _FindAtomA_4((LPCSTR)&uStack_b8);
  }
  piVar8 = ___w32_sharedptr_get();
LAB_00402c36:
  ___w32_sharedptr = piVar8;
  ____w32_sharedptr_terminate = piVar8 + 1;
  ____w32_sharedptr_unexpected = piVar8 + 2;
  return piVar8 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ___w32_sharedptr_initialize(void)

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
  
  if (___w32_sharedptr != (int *)0x0) {
    return;
  }
  local_5c = 0x41414141;
  local_58 = 0x41414141;
  local_54 = 0x41414141;
  local_3c._0_1_ = '-';
  local_3c._1_1_ = 'L';
  local_3c._2_1_ = 'I';
  local_3c._3_1_ = 'B';
  local_50 = 0x41414141;
  local_4c = 0x41414141;
  local_38._0_1_ = 'G';
  local_38._1_1_ = 'C';
  local_38._2_1_ = 'C';
  local_38._3_1_ = 'W';
  local_48 = 0x41414141;
  local_44 = 0x41414141;
  local_34._0_1_ = '3';
  local_34._1_1_ = '2';
  local_34._2_1_ = '-';
  local_34._3_1_ = 'E';
  local_40 = 0x41414141;
  local_30._0_1_ = 'H';
  local_30._1_1_ = '-';
  local_30._2_1_ = '3';
  local_30._3_1_ = '-';
  local_2c._0_1_ = 'G';
  local_2c._1_1_ = 'T';
  local_2c._2_1_ = 'H';
  local_2c._3_1_ = 'R';
  local_28._0_1_ = '-';
  local_28._1_1_ = 'M';
  local_28._2_1_ = 'I';
  local_28._3_1_ = 'N';
  local_24._0_1_ = 'G';
  local_24._1_1_ = 'W';
  local_24._2_1_ = '3';
  local_24._3_1_ = '2';
  local_20 = 0;
  AVar1 = _FindAtomA_4((LPCSTR)&local_5c);
  if (AVar1 == 0) {
    _Memory = (int *)_malloc(0x40);
    if (_Memory == (int *)0x0) {
                    // WARNING: Subroutine does not return
      _abort();
    }
    piVar3 = _Memory;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    _Memory[1] = (int)_abort;
    uVar5 = 1;
    _Memory[2] = (int)&___w32_sharedptr_default_unexpected;
    iVar4 = dw2_object_mutex_0;
    *_Memory = 0x40;
    iVar6 = DAT_00405064;
    _Memory[5] = iVar4;
    iVar4 = dw2_once_1;
    _Memory[6] = iVar6;
    iVar6 = DAT_00403034;
    _Memory[7] = iVar4;
    iVar4 = eh_globals_static_2;
    _Memory[8] = iVar6;
    iVar6 = DAT_00405074;
    _Memory[10] = iVar4;
    iVar4 = eh_globals_key_3;
    _Memory[0xc] = -1;
    _Memory[0xb] = iVar6;
    _Memory[0xd] = iVar4;
    iVar4 = eh_globals_once_4;
    _Memory[0xf] = DAT_0040303c;
    iVar6 = 0x1f;
    _Memory[0xe] = iVar4;
    do {
      uVar2 = (uint)_Memory & uVar5;
      uVar5 = uVar5 * 2;
      local_9c[iVar6] = (-(uVar2 == 0) & 0x20U) + 0x41;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    local_7c._0_1_ = '-';
    local_7c._1_1_ = 'L';
    local_7c._2_1_ = 'I';
    local_7c._3_1_ = 'B';
    local_78._0_1_ = 'G';
    local_78._1_1_ = 'C';
    local_78._2_1_ = 'C';
    local_78._3_1_ = 'W';
    local_74._0_1_ = '3';
    local_74._1_1_ = '2';
    local_74._2_1_ = '-';
    local_74._3_1_ = 'E';
    local_70._0_1_ = 'H';
    local_70._1_1_ = '-';
    local_70._2_1_ = '3';
    local_70._3_1_ = '-';
    local_6c._0_1_ = 'G';
    local_6c._1_1_ = 'T';
    local_6c._2_1_ = 'H';
    local_6c._3_1_ = 'R';
    local_68._0_1_ = '-';
    local_68._1_1_ = 'M';
    local_68._2_1_ = 'I';
    local_68._3_1_ = 'N';
    local_64._0_1_ = 'G';
    local_64._1_1_ = 'W';
    local_64._2_1_ = '3';
    local_64._3_1_ = '2';
    local_60 = 0;
    AVar1 = _AddAtomA_4(local_9c);
    if ((AVar1 == 0) || (piVar3 = ___w32_sharedptr_get(), piVar3 != _Memory)) {
      AVar1 = 0;
    }
    if (AVar1 != 0) goto LAB_00402c36;
    _free(_Memory);
    _FindAtomA_4((LPCSTR)&local_5c);
  }
  _Memory = ___w32_sharedptr_get();
LAB_00402c36:
  ___w32_sharedptr = _Memory;
  ____w32_sharedptr_terminate = _Memory + 1;
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
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    psVar2 = psVar2 + -0x400;
    *psVar2 = *psVar2;
  }
  *(undefined4 *)((int)psVar2 - in_EAX) = *(undefined4 *)((int)psVar2 - in_EAX);
                    // WARNING: Could not recover jumptable at 0x00402c9b. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*UNRECOVERED_JUMPTABLE)();
  return pvVar1;
}



void ___p__fmode(void)

{
                    // WARNING: Could not recover jumptable at 0x00402cf0. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__fmode();
  return;
}



int __cdecl
___getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402d00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __getmainargs(_Argc,_Argv,_Env,_DoWildCard,_StartInfo);
  return iVar1;
}



int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402d10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



int __cdecl _scanf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402d20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = scanf(_Format);
  return iVar1;
}



int __cdecl _printf(char *_Format,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402d30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = printf(_Format);
  return iVar1;
}



size_t __cdecl _strlen(char *_Str)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402d40. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = strlen(_Str);
  return sVar1;
}



void __cdecl _free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00402d50. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402d60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



void __cdecl _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00402d70. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void __assert(void)

{
                    // WARNING: Could not recover jumptable at 0x00402d80. Too many branches
                    // WARNING: Treating indirect jump as call
  _assert();
  return;
}



void _ExitProcess_4(UINT uExitCode)

{
                    // WARNING: Could not recover jumptable at 0x00402d90. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  ExitProcess(uExitCode);
  return;
}



LPTOP_LEVEL_EXCEPTION_FILTER
_SetUnhandledExceptionFilter_4(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402da0. Too many branches
                    // WARNING: Treating indirect jump as call
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}



BOOL _ReleaseSemaphore_12(HANDLE hSemaphore,LONG lReleaseCount,LPLONG lpPreviousCount)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402db0. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ReleaseSemaphore(hSemaphore,lReleaseCount,lpPreviousCount);
  return BVar1;
}



LONG _InterlockedDecrement_4(LONG *lpAddend)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}



DWORD _WaitForSingleObject_8(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}



HANDLE _CreateSemaphoreA_16
                 (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,LONG lInitialCount,LONG lMaximumCount,
                 LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402de0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateSemaphoreA(lpSemaphoreAttributes,lInitialCount,lMaximumCount,lpName);
  return pvVar1;
}



void _Sleep_4(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x00402df0. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



LONG _InterlockedIncrement_4(LONG *lpAddend)

{
  LONG LVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402e00. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}



UINT _GetAtomNameA_12(ATOM nAtom,LPSTR lpBuffer,int nSize)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402e10. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = GetAtomNameA(nAtom,lpBuffer,nSize);
  return UVar1;
}



ATOM _AddAtomA_4(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402e20. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = AddAtomA(lpString);
  return AVar1;
}



ATOM _FindAtomA_4(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00402e30. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = FindAtomA(lpString);
  return AVar1;
}



void ___dereg_frame_dtor(void)

{
  ___do_frame_fini();
  return;
}


