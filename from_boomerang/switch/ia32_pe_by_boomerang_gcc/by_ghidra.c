typedef unsigned char   undefined;

typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef char CHAR;

typedef CHAR * LPSTR;

typedef CHAR * LPCSTR;

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

typedef ushort WORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef struct HINSTANCE__ * HINSTANCE;

typedef HINSTANCE HMODULE;

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

typedef uint size_t;




void entry(void)

{
  code *pcVar1;
  
  if (DAT_00403000 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _cygwin_crt0(_main);
  return;
}



int __cdecl _main(int _Argc,char **_Argv,char **_Env)

{
  size_t in_stack_fffffff0;
  char *_Str;
  
  __alloca(in_stack_fffffff0);
  ___main();
  switch(_Argc) {
  default:
    _Str = "Other!";
    break;
  case 2:
    _Str = "Two!";
    break;
  case 3:
    _Str = "Three!";
    break;
  case 4:
    _Str = "Four!";
    break;
  case 5:
    _Str = "Five!";
    break;
  case 6:
    _Str = "Six!";
    break;
  case 7:
    _Str = "Seven!";
  }
  _puts(_Str);
  return 0;
}



void __cdecl ___w32_eh_shared_initialize(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = 0x30;
  uVar1 = DAT_00402000;
  param_1[9] = 0xffffffff;
  param_1[1] = _abort;
  param_1[5] = uVar1;
  uVar1 = _sjl_fc_key_1;
  param_1[2] = &___w32_sharedptr_default_unexpected;
  uVar2 = DAT_00402008;
  param_1[7] = 0;
  param_1[8] = uVar1;
  uVar1 = _sjl_once_2;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



ATOM __cdecl ___w32_sharedptr_set(int *param_1)

{
  ATOM AVar1;
  int iVar2;
  int *piVar3;
  CHAR CVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  CHAR local_5c [32];
  undefined4 local_3c;
  
  iVar2 = 0x1f;
  uVar5 = 1;
  do {
    CVar4 = 'A';
    if ((uVar5 & (uint)param_1) == 0) {
      CVar4 = 'a';
    }
    local_5c[iVar2] = CVar4;
    uVar5 = uVar5 * 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar6 = (undefined4 *)&_w32_atom_suffix;
  puVar7 = &local_3c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0x4e49;
  *(undefined *)((int)puVar7 + 2) = 0;
  AVar1 = _AddAtomA_4(local_5c);
  if ((AVar1 == 0) || (piVar3 = ___w32_sharedptr_get(AVar1), piVar3 != param_1)) {
    AVar1 = 0;
  }
  return AVar1;
}



int * __cdecl ___w32_sharedptr_get(ATOM param_1)

{
  UINT UVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  CHAR local_4c [68];
  
  piVar4 = (int *)0x0;
  UVar1 = _GetAtomNameA_12(param_1,local_4c,0x3f);
  if (UVar1 != 0) {
    iVar2 = 0x1f;
    uVar3 = 1;
    do {
      if (local_4c[iVar2] == 'A') {
        piVar4 = (int *)((uint)piVar4 | uVar3);
      }
      uVar3 = uVar3 * 2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    if (*piVar4 == 0x30) {
      return piVar4;
    }
  }
                    // WARNING: Subroutine does not return
  _abort();
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
                    // WARNING: Could not recover jumptable at 0x0040146b. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*UNRECOVERED_JUMPTABLE)();
  return pvVar1;
}



void _cygwin_crt0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c4 [41];
  undefined4 uStack32;
  
  uStack32 = 0x40148f;
  iVar1 = __cygwin_crt0_common_8(param_1,(undefined4 *)0x0);
  if (iVar1 == 0) goto LAB_004014a3;
  do {
    uStack32 = 0x4014a3;
    dll_crt0__FP11per_process();
LAB_004014a3:
    local_c4[0] = 0;
    __cygwin_crt0_common_8(param_1,local_c4);
  } while( true );
}



void ___main(void)

{
                    // WARNING: Could not recover jumptable at 0x004014d0. Too many branches
                    // WARNING: Treating indirect jump as call
  __main();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

int __cdecl _puts(char *_Str)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004014e0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = puts();
  return iVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x004014f0. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



void _pthread_atfork(void)

{
                    // WARNING: Could not recover jumptable at 0x00401500. Too many branches
                    // WARNING: Treating indirect jump as call
  pthread_atfork();
  return;
}



// WARNING: Exceeded maximum restarts with more pending

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401510. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)malloc();
  return pvVar1;
}



// WARNING: Exceeded maximum restarts with more pending

void __cdecl _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00401520. Too many branches
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cygwin_crt0_common_8(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  HMODULE pHVar2;
  undefined4 unaff_EBP;
  
  bVar1 = false;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)_cygwin_internal(8);
    if (param_2 == (undefined4 *)0xffffffff) {
      return 0;
    }
    bVar1 = true;
  }
  param_2[1] = 0xa8;
  param_2[2] = 0x3ed;
  param_2[3] = 9;
  param_2[0x20] = 0;
  param_2[0x21] = 0x70;
  param_2[0xb] = &___CTOR_LIST__;
  param_2[0xc] = &__DTOR_LIST__;
  param_2[5] = &_environ;
  if (bVar1) {
    ___impure_ptr = param_2[0x29];
  }
  else {
    param_2[4] = &__impure_ptr;
  }
  param_2[0x1e] = 0;
  param_2[0x12] = &_cygwin_premain0;
  param_2[0x13] = &_cygwin_premain1;
  param_2[10] = param_1;
  param_2[0x14] = &_cygwin_premain2;
  param_2[0x15] = &_cygwin_premain3;
  param_2[9] = &__fmode;
  *param_2 = unaff_EBP;
  param_2[6] = _malloc;
  param_2[7] = _free;
  param_2[8] = &_realloc;
  param_2[0x11] = &_calloc;
  pHVar2 = _GetModuleHandleA_4((LPCSTR)0x0);
  param_2[0x1f] = pHVar2;
  param_2[0xd] = &DAT_00402000;
  param_2[0xe] = &__data_end__;
  param_2[0xf] = &DAT_00403000;
  param_2[0x10] = &__bss_end__;
  __pei386_runtime_relocator();
  return 1;
}



void __cdecl _do_pseudo_reloc(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < param_2) {
    do {
      piVar1 = param_1 + 1;
      iVar2 = *param_1;
      param_1 = param_1 + 2;
      *(int *)(param_3 + *piVar1) = *(int *)(param_3 + *piVar1) + iVar2;
    } while (param_1 < param_2);
  }
  return;
}



void __pei386_runtime_relocator(void)

{
  _do_pseudo_reloc(&DAT_00403000,&DAT_00403000,0x400000);
  return;
}



void _cygwin_internal(void)

{
                    // WARNING: Could not recover jumptable at 0x00401740. Too many branches
                    // WARNING: Treating indirect jump as call
  cygwin_internal();
  return;
}



ATOM _FindAtomA_4(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401750. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = FindAtomA(lpString);
  return AVar1;
}



ATOM _AddAtomA_4(LPCSTR lpString)

{
  ATOM AVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401760. Too many branches
                    // WARNING: Treating indirect jump as call
  AVar1 = AddAtomA(lpString);
  return AVar1;
}



UINT _GetAtomNameA_12(ATOM nAtom,LPSTR lpBuffer,int nSize)

{
  UINT UVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401770. Too many branches
                    // WARNING: Treating indirect jump as call
  UVar1 = GetAtomNameA(nAtom,lpBuffer,nSize);
  return UVar1;
}



HMODULE _GetModuleHandleA_4(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    // WARNING: Could not recover jumptable at 0x00401780. Too many branches
                    // WARNING: Treating indirect jump as call
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


