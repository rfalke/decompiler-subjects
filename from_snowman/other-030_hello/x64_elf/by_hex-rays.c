/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>

#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

void __cdecl pre_cpp_init();
int __cdecl pre_c_init();
// int __cdecl _tmainCRTStartup();
int __cdecl WinMainCRTStartup();
int __cdecl main(int argc, const char **argv, const char **envp);
void __cdecl _tcf_0();
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
void __cdecl GLOBAL__sub_I_main();
// __int64 __fastcall std::operator<<<std::char_traits<char>>(_QWORD, _QWORD); weak
// __int64 __fastcall std::ostream::operator<<(_QWORD, _QWORD); weak
// void __fastcall std::ios_base::Init::~Init(std::ios_base::Init *__hidden this); idb
// _QWORD std::ios_base::Init::Init(std::ios_base::Init *__hidden this); idb
__int64 __fastcall _dyn_tls_dtor(__int64, int);
__int64 __fastcall _dyn_tls_init(__int64, int);
__int64 __fastcall _tlregdtor(); // weak
__int64 __fastcall my_lconv_init(); // weak
__int64 __fastcall decode_pointer(__int64);
__int64 __fastcall encode_pointer(__int64);
_onexit_t __fastcall mingw_onexit(_onexit_t Func);
int __cdecl atexit(void (__cdecl *)());
__int64 __fastcall _mingw_SEH_error_handler(unsigned int *);
__int64 __fastcall _mingw_init_ehandler(); // weak
__int64 (__fastcall *__fastcall _mingw_raise_matherr(int, __int64, double, double, __int64))(_QWORD);
void __fastcall _mingw_setusermatherr(_UserMathErrorFunctionPointer UserMathErrorFunction);
int __cdecl matherr(struct _exception *Except);
__int64 setargv();
void __noreturn _report_error(char *Format, ...);
void __fastcall _write_memory(void *, void *Src, size_t Size);
void pei386_runtime_relocator();
_BOOL8 __fastcall ValidateImageBase(__int64);
__int64 __fastcall FindPESection(__int64, unsigned __int64);
const char *__fastcall FindPESectionByName(char *Str2);
__int64 __fastcall _mingw_GetSectionForAddress(__int64);
__int64 _mingw_GetSectionCount();
__int64 __fastcall FindPESectionExec(__int64);
__int64 GetPEImageBase();
_BOOL8 __fastcall IsNonwritableInCurrentImage(__int64);
__int64 __fastcall _mingw_enum_import_library_names(int);
HMODULE _mingw_get_msvcrt_handle();
void __cdecl fpreset();
void (*_do_global_dtors())(void);
int _do_global_ctors();
int _main();
void __cdecl _security_init_cookie();
void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie);
void _mingwthr_run_key_dtors_part_0();
__int64 __fastcall __w64_mingwthr_add_key_dtor(int, __int64);
__int64 __fastcall __w64_mingwthr_remove_key_dtor(int);
__int64 __fastcall _mingw_TLScallback(__int64, int);
// __int64 __fastcall _getmainargs(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); weak
// void __cdecl _set_app_type(_crt_app_type Type);
// void *__cdecl memcpy(void *, const void *Src, size_t Size);
// size_t __cdecl strlen(const char *Str);
// __int64 __fastcall lock(_QWORD); weak
// __int64 __fastcall _dllonexit(_QWORD, _QWORD, _QWORD); weak
// __int64 __fastcall unlock(_QWORD); weak
// _crt_signal_t __cdecl signal(int Signal, _crt_signal_t Function);
// void __cdecl _setusermatherr(_UserMathErrorFunctionPointer UserMathErrorFunction);
// FILE *__cdecl _iob_func();
// int fprintf(FILE *const Stream, const char *const Format, ...);
// size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
// int __cdecl vfprintf(FILE *const Stream, const char *const Format, va_list ArgList);
// void __cdecl __noreturn abort();
// int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount);
// void *__cdecl calloc(size_t Count, size_t Size);
// void __cdecl free(void *Block);
// __int64 __fastcall _IAT_start__(_QWORD); weak
// __int64 __lconv_init(void); weak

//-------------------------------------------------------------------------
// Data declarations

// extern _UNKNOWN std::endl<char,std::char_traits<char>>; weak
__int64 __CTOR_LIST__[] = { -1i64 }; // weak
__int64 (*p_60671)[6] = &qword_402D30; // weak
struct _EXCEPTION_POINTERS GS_ExceptionPointers = { &GS_ExceptionRecord, &GS_ContextRecord }; // idb
int CRT_MT = 2; // weak
int MINGW_INSTALL_DEBUG_MATHERR = -1; // weak
uintptr_t _security_cookie = 47936899621426ui64;
__int64 _security_cookie_complement = -47936899621427i64; // weak
int _rt_psrelocs_start = 0; // weak
unsigned int _rt_psrelocs_end[88] =
{
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u,
  0u
}; // weak
int argc; // idb
char **argv; // idb
char **envp; // idb
int managedapp; // idb
_startupinfo startinfo; // idb
int argret; // idb
std::ios_base::Init std::__ioinit; // idb
int newmode; // weak
int dowildcard; // weak
int mingw_initltssuo_force; // weak
int mingw_initltsdyn_force; // weak
int mingw_initltsdrot_force; // weak
int mingw_initcharmax; // weak
int mingw_app_type; // weak
int fmode;
int was_here_61446; // weak
struct _IMAGE_RUNTIME_FUNCTION_ENTRY emu_pdata; // idb
_UNKNOWN emu_xdata; // weak
_DWORD dword_407244[63]; // weak
__int64 (__fastcall *stUserMathErr)(_QWORD); // weak
int was_init_61499; // weak
__int64 the_secs; // weak
int maxSections; // weak
__int64 msvcrt_handle_60749; // weak
int initialized; // weak
_CONTEXT GS_ContextRecord; // idb
int GS_ExceptionRecord; // weak
int dword_407884; // weak
__int64 qword_407890; // weak
int _mingwthr_cs_init; // weak
struct _RTL_CRITICAL_SECTION _mingwthr_cs; // idb
__int64 key_dtor_list; // weak
__int64 _onexitbegin; // weak
__int64 _onexitend; // weak
// extern void (__stdcall *EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);
// extern HANDLE (__stdcall *GetCurrentProcess)();
// extern DWORD (__stdcall *GetCurrentProcessId)();
// extern DWORD (__stdcall *GetCurrentThreadId)();
// extern DWORD (__stdcall *GetLastError)();
// extern HMODULE (__stdcall *GetModuleHandleA)(LPCSTR lpModuleName);
// extern void (__stdcall *GetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime);
// extern DWORD (__stdcall *GetTickCount)();
// extern void (__stdcall *InitializeCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);
// extern void (__stdcall *LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);
// extern HMODULE (__stdcall *LoadLibraryW)(LPCWSTR lpLibFileName);
// extern BOOL (__stdcall *QueryPerformanceCounter)(LARGE_INTEGER *lpPerformanceCount);
// extern BOOLEAN (__cdecl *RtlAddFunctionTable)(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress);
// extern void (__stdcall *RtlCaptureContext)(PCONTEXT ContextRecord);
// extern PRUNTIME_FUNCTION (__stdcall *RtlLookupFunctionEntry)(ULONG64 ControlPc, PULONG64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable);
// extern PEXCEPTION_ROUTINE (__stdcall *RtlVirtualUnwind)(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers);
// extern LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall *SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
// extern BOOL (__stdcall *TerminateProcess)(HANDLE hProcess, UINT uExitCode);
// extern LPVOID (__stdcall *TlsGetValue)(DWORD dwTlsIndex);
// extern LONG (__stdcall *UnhandledExceptionFilter)(struct _EXCEPTION_POINTERS *ExceptionInfo);
// extern BOOL (__stdcall *VirtualProtect)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
// extern SIZE_T (__stdcall *VirtualQuery)(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);
// extern int _fmode;
// extern _onexit_t (__cdecl *_onexit)(_onexit_t Func);
// extern _UNKNOWN std::cerr; weak


//----- (0000000000401010) ----------------------------------------------------
void __cdecl pre_cpp_init()
{
  startinfo.newmode = newmode;
  argret = _getmainargs(&argc, &argv, &envp, (unsigned int)dowildcard, &startinfo);
}
// 402B78: using guessed type __int64 __fastcall _getmainargs(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 407040: using guessed type int newmode;
// 407050: using guessed type int dowildcard;

//----- (0000000000401060) ----------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __cdecl pre_c_init()
{
  _BOOL8 v0; // rax
  __int16 v2; // cx

  LODWORD(v0) = 0;
  mingw_initltsdrot_force = 1;
  mingw_initltsdyn_force = 1;
  mingw_initltssuo_force = 1;
  mingw_initcharmax = 1;
  if ( MEMORY[0x400000] == 23117 && *(_DWORD *)(MEMORY[0x40003C] + 0x400000i64) == 17744 )
  {
    v2 = *(_WORD *)(MEMORY[0x40003C] + 0x400018i64);
    if ( v2 == 267 )
    {
      if ( *(_DWORD *)(MEMORY[0x40003C] + 0x400074i64) > 0xEu )
        v0 = *(_DWORD *)(MEMORY[0x40003C] + 0x4000E8i64) != 0;
    }
    else if ( v2 == 523 && *(_DWORD *)(MEMORY[0x40003C] + 0x400084i64) > 0xEu )
    {
      v0 = *(_DWORD *)(MEMORY[0x40003C] + 0x4000F8i64) != 0;
    }
  }
  managedapp = v0;
  if ( mingw_app_type )
    _set_app_type(_crt_gui_app);
  else
    _set_app_type(_crt_console_app);
  _onexitend = encode_pointer(-1i64);
  _onexitbegin = _onexitend;
  _fmode = fmode;
  setargv();
  if ( MINGW_INSTALL_DEBUG_MATHERR == 1 )
    _mingw_setusermatherr(matherr);
  return 0;
}
// 4010DA: write access to const memory at 408378 has been detected
// 403060: using guessed type int MINGW_INSTALL_DEBUG_MATHERR;
// 407060: using guessed type int mingw_initltssuo_force;
// 407064: using guessed type int mingw_initltsdyn_force;
// 407068: using guessed type int mingw_initltsdrot_force;
// 407070: using guessed type int mingw_initcharmax;
// 407080: using guessed type int mingw_app_type;
// 4079A8: using guessed type __int64 _onexitbegin;
// 4079B0: using guessed type __int64 _onexitend;

//----- (00000000004014B0) ----------------------------------------------------
int __cdecl WinMainCRTStartup()
{
  mingw_app_type = 1;
  _security_init_cookie();
  return _tmainCRTStartup();
}
// 407080: using guessed type int mingw_app_type;

//----- (00000000004014F0) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 v3; // rax

  _main();
  v3 = std::operator<<<std::char_traits<char>>(&std::cerr, "Hello, World!");
  std::ostream::operator<<(v3, &std::endl<char,std::char_traits<char>>);
  return 0;
}
// 4015A8: using guessed type __int64 __fastcall std::operator<<<std::char_traits<char>>(_QWORD, _QWORD);
// 4015B0: using guessed type __int64 __fastcall std::ostream::operator<<(_QWORD, _QWORD);

//----- (000000000040152A) ----------------------------------------------------
void __cdecl _tcf_0()
{
  std::ios_base::Init::~Init(&std::__ioinit);
}

//----- (0000000000401545) ----------------------------------------------------
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 && __priority == 0xFFFF )
  {
    std::ios_base::Init::Init(&std::__ioinit);
    atexit(_tcf_0);
  }
}

//----- (0000000000401581) ----------------------------------------------------
void __cdecl GLOBAL__sub_I_main()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
}

//----- (00000000004015D0) ----------------------------------------------------
__int64 __fastcall _dyn_tls_dtor(__int64 a1, int a2)
{
  if ( a2 && a2 != 3 )
    return 1i64;
  _mingw_TLScallback(a1, a2);
  return 1i64;
}

//----- (0000000000401600) ----------------------------------------------------
__int64 __fastcall _dyn_tls_init(__int64 a1, int a2)
{
  if ( CRT_MT != 2 )
    CRT_MT = 2;
  if ( a2 != 2 && a2 == 1 )
    _mingw_TLScallback(a1, 1);
  return 1i64;
}
// 403050: using guessed type int CRT_MT;

//----- (0000000000401670) ----------------------------------------------------
__int64 _tlregdtor()
{
  return 0i64;
}
// 401670: using guessed type __int64 __fastcall _tlregdtor();

//----- (0000000000401680) ----------------------------------------------------
__int64 my_lconv_init()
{
  return __lconv_init();
}
// 401680: using guessed type __int64 __fastcall my_lconv_init();
// 408348: using guessed type __int64 __lconv_init(void);

//----- (0000000000401690) ----------------------------------------------------
__int64 __fastcall decode_pointer(__int64 a1)
{
  return a1;
}

//----- (00000000004016A0) ----------------------------------------------------
__int64 __fastcall encode_pointer(__int64 a1)
{
  return a1;
}

//----- (00000000004016B0) ----------------------------------------------------
_onexit_t __fastcall mingw_onexit(_onexit_t Func)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h] BYREF

  if ( decode_pointer(_onexitbegin) == -1 )
    return _onexit(Func);
  lock(8i64);
  v4 = decode_pointer(_onexitbegin);
  v5 = decode_pointer(_onexitend);
  v2 = _dllonexit(Func, &v4, &v5);
  _onexitbegin = encode_pointer(v4);
  _onexitend = encode_pointer(v5);
  unlock(8i64);
  return (_onexit_t)v2;
}
// 402BD0: using guessed type __int64 __fastcall lock(_QWORD);
// 402BD8: using guessed type __int64 __fastcall _dllonexit(_QWORD, _QWORD, _QWORD);
// 402BE0: using guessed type __int64 __fastcall unlock(_QWORD);
// 4079A8: using guessed type __int64 _onexitbegin;
// 4079B0: using guessed type __int64 _onexitend;

//----- (0000000000401760) ----------------------------------------------------
int __cdecl atexit(void (__cdecl *a1)())
{
  return -(mingw_onexit((_onexit_t)a1) == 0i64);
}

//----- (0000000000401780) ----------------------------------------------------
__int64 __fastcall _mingw_SEH_error_handler(unsigned int *a1)
{
  unsigned int v1; // eax
  int v2; // ebx
  _crt_signal_t v3; // rdx
  __int64 result; // rax
  _crt_signal_t v5; // rdx
  _crt_signal_t v6; // rdx

  v1 = *a1;
  if ( *a1 > 0xC0000091 )
  {
    if ( v1 == -1073741676 )
    {
      v2 = 0;
LABEL_4:
      v3 = signal(8, 0i64);
      if ( v3 == (_crt_signal_t)1 )
      {
        signal(8, (_crt_signal_t)1);
        result = 0i64;
        if ( v2 )
        {
          fpreset();
          return 0i64;
        }
      }
      else
      {
        result = 1i64;
        if ( v3 )
        {
          ((void (__fastcall *)(__int64))v3)(8i64);
          return 0i64;
        }
      }
      return result;
    }
    if ( v1 <= 0xC0000094 )
    {
      if ( v1 != -1073741678 )
      {
        if ( v1 == -1073741677 )
          goto LABEL_3;
        return 1i64;
      }
      return 0i64;
    }
    if ( v1 == -1073741675 )
      return 0i64;
    if ( v1 != -1073741674 )
      return 1i64;
  }
  else
  {
    if ( v1 >= 0xC000008D )
    {
LABEL_3:
      v2 = 1;
      goto LABEL_4;
    }
    if ( v1 == -1073741816 )
      return 0i64;
    if ( v1 <= 0xC0000008 )
    {
      if ( v1 != -2147483646 )
      {
        if ( v1 == -1073741819 )
        {
          v5 = signal(11, 0i64);
          if ( v5 == (_crt_signal_t)1 )
          {
            signal(11, (_crt_signal_t)1);
            return 0i64;
          }
          else
          {
            result = 4i64;
            if ( v5 )
            {
              ((void (__fastcall *)(__int64))v5)(11i64);
              return 0i64;
            }
          }
          return result;
        }
        return 1i64;
      }
      return 0i64;
    }
    if ( v1 != -1073741795 )
      return v1 != -1073741684;
  }
  v6 = signal(4, 0i64);
  if ( v6 == (_crt_signal_t)1 )
  {
    signal(4, (_crt_signal_t)1);
    return 0i64;
  }
  else
  {
    result = 4i64;
    if ( v6 )
    {
      ((void (__fastcall *)(__int64))v6)(4i64);
      return 0i64;
    }
  }
  return result;
}

//----- (0000000000401920) ----------------------------------------------------
__int64 _mingw_init_ehandler()
{
  __int64 PEImageBase; // rbx
  __int64 result; // rax
  const char *PESectionByName; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v3; // rbp
  __int64 v4; // rdi
  DWORD v5; // edx
  DWORD v6; // edx
  char *v7; // rax
  __int64 PESectionExec; // rax
  ULONG v9; // edx

  PEImageBase = GetPEImageBase();
  result = (unsigned int)was_here_61446;
  if ( PEImageBase )
  {
    if ( !was_here_61446 )
    {
      was_here_61446 = 1;
      PESectionByName = FindPESectionByName(".pdata");
      result = 1i64;
      if ( !PESectionByName )
      {
        v3 = &emu_pdata;
        memset(&emu_pdata, 0, 0x180ui64);
        memset(&emu_xdata, 0, 0x100ui64);
        v4 = 0i64;
        while ( 1 )
        {
          PESectionExec = FindPESectionExec(v4);
          if ( !PESectionExec )
            break;
          *((_BYTE *)&emu_xdata + 8 * v4) = 9;
          dword_407244[2 * v4] = (unsigned int)_mingw_SEH_error_handler - PEImageBase;
          v5 = *(_DWORD *)(PESectionExec + 12);
          v3->BeginAddress = v5;
          v6 = *(_DWORD *)(PESectionExec + 8) + v5;
          v7 = (char *)&emu_xdata + 8 * v4++;
          v3->UnwindInfoAddress = (_DWORD)v7 - PEImageBase;
          v3->EndAddress = v6;
          ++v3;
          if ( v4 == 32 )
          {
            v9 = 32;
            goto LABEL_11;
          }
        }
        if ( !v4 )
          return 1i64;
        v9 = v4;
LABEL_11:
        RtlAddFunctionTable(&emu_pdata, v9, PEImageBase);
        return 1i64;
      }
    }
  }
  return result;
}
// 401920: using guessed type __int64 __fastcall _mingw_init_ehandler();
// 4070A8: using guessed type int was_here_61446;
// 407244: using guessed type _DWORD dword_407244[63];

//----- (0000000000401C40) ----------------------------------------------------
__int64 (__fastcall *__fastcall _mingw_raise_matherr(int a1, __int64 a2, double a3, double a4, __int64 a5))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  double v8; // [rsp+30h] [rbp-28h]
  double v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  result = stUserMathErr;
  if ( stUserMathErr )
  {
    v7 = a2;
    v8 = a3;
    v6 = a1;
    v9 = a4;
    v10 = a5;
    return (__int64 (__fastcall *)(_QWORD))stUserMathErr(&v6);
  }
  return result;
}
// 407340: using guessed type __int64 (__fastcall *stUserMathErr)(_QWORD);

//----- (0000000000401C80) ----------------------------------------------------
void __fastcall _mingw_setusermatherr(_UserMathErrorFunctionPointer UserMathErrorFunction)
{
  stUserMathErr = (__int64 (__fastcall *)(_QWORD))UserMathErrorFunction;
  _setusermatherr(UserMathErrorFunction);
}
// 407340: using guessed type __int64 (__fastcall *stUserMathErr)(_QWORD);

//----- (0000000000401C90) ----------------------------------------------------
int __cdecl matherr(struct _exception *Except)
{
  const char *v1; // rbx
  char *name; // rsi
  double retval; // r12
  double arg2; // rbp
  double arg1; // rdi
  FILE *v6; // rax

  switch ( Except->type )
  {
    case 1:
      v1 = "Argument domain error (DOMAIN)";
      break;
    case 2:
      v1 = "Argument singularity (SIGN)";
      break;
    case 3:
      v1 = "Overflow range error (OVERFLOW)";
      break;
    case 4:
      v1 = "The result is too small to be represented (UNDERFLOW)";
      break;
    case 5:
      v1 = "Total loss of significance (TLOSS)";
      break;
    case 6:
      v1 = "Partial loss of significance (PLOSS)";
      break;
    default:
      v1 = "Unknown error";
      break;
  }
  name = Except->name;
  retval = Except->retval;
  arg2 = Except->arg2;
  arg1 = Except->arg1;
  v6 = _iob_func();
  fprintf(v6 + 2, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", v1, name, arg1, arg2, retval);
  return 0;
}

//----- (0000000000401D70) ----------------------------------------------------
__int64 setargv()
{
  return 0i64;
}

//----- (0000000000401D80) ----------------------------------------------------
void __noreturn _report_error(char *Format, ...)
{
  FILE *v2; // rax
  FILE *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _iob_func();
  fwrite("Mingw-w64 runtime failure:\n", 1ui64, 0x1Bui64, v2 + 2);
  v3 = _iob_func();
  vfprintf(v3 + 2, Format, va);
  abort();
}

//----- (0000000000401DF0) ----------------------------------------------------
void __fastcall _write_memory(void *a1, void *Src, size_t Size)
{
  __int64 v6; // rax
  int v7; // er12
  unsigned __int64 v8; // rdx
  __int64 SectionForAddress; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r13
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+20h] [rbp-68h] BYREF

  if ( Size )
  {
    if ( maxSections <= 0 )
    {
      v7 = 0;
LABEL_7:
      SectionForAddress = _mingw_GetSectionForAddress((__int64)a1);
      v10 = SectionForAddress;
      if ( !SectionForAddress )
        _report_error("Address %p has no image-section", a1);
      v11 = 24i64 * v7;
      v12 = the_secs + v11;
      *(_QWORD *)(v12 + 16) = SectionForAddress;
      *(_DWORD *)v12 = 0;
      *(_QWORD *)(v12 + 8) = *(unsigned int *)(SectionForAddress + 12) + GetPEImageBase();
      if ( !VirtualQuery(*(LPCVOID *)(the_secs + v11 + 8), &Buffer, 0x30ui64) )
        _report_error(
          "  VirtualQuery failed for %d bytes at address %p",
          *(unsigned int *)(v10 + 8),
          *(const void **)(the_secs + v11 + 8));
      if ( Buffer.Protect != 4 && Buffer.Protect != 64 )
        VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, 0x40u, (PDWORD)(v11 + the_secs));
      ++maxSections;
    }
    else
    {
      v6 = the_secs;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (unsigned __int64)a1 >= v8 && (unsigned __int64)a1 < *(unsigned int *)(*(_QWORD *)(v6 + 16) + 8i64) + v8 )
          break;
        ++v7;
        v6 += 24i64;
        if ( v7 == maxSections )
          goto LABEL_7;
      }
    }
    memcpy(a1, Src, Size);
  }
}
// 407358: using guessed type __int64 the_secs;
// 407360: using guessed type int maxSections;

//----- (0000000000401F60) ----------------------------------------------------
void pei386_runtime_relocator()
{
  signed __int64 v0; // rax
  void *v1; // rsp
  int *v2; // rbx
  void *v3; // rsp
  void *v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // rdx
  unsigned int *v9; // rbx
  unsigned int v10; // er8
  unsigned int v11; // eax
  __int64 v12; // rdx
  void *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+20h] [rbp-60h] BYREF
  __int64 Src; // [rsp+50h] [rbp-30h] BYREF
  DWORD flOldProtect[9]; // [rsp+5Ch] [rbp-24h] BYREF

  if ( was_init_61499 )
    return;
  was_init_61499 = 1;
  v0 = (24i64 * (int)_mingw_GetSectionCount() + 30) & 0xFFFFFFFFFFFFFFF0ui64;
  v1 = alloca(v0);
  v2 = &_rt_psrelocs_start;
  maxSections = 0;
  v3 = alloca(v0);
  the_secs = (__int64)&Buffer;
  if ( (char *)_rt_psrelocs_end - (char *)&_rt_psrelocs_start <= 7 )
    return;
  if ( (char *)_rt_psrelocs_end - (char *)&_rt_psrelocs_start > 11 )
  {
    if ( _rt_psrelocs_start )
      goto LABEL_6;
    goto LABEL_16;
  }
  if ( !_rt_psrelocs_start && !*(&_rt_psrelocs_start + 1) )
  {
LABEL_16:
    v8 = (unsigned int)*(&_rt_psrelocs_start + 2);
    if ( (_DWORD)v8 != 1 )
      _report_error("  Unknown pseudo relocation protocol version %d.\n", v8);
    v9 = (unsigned int *)(&_rt_psrelocs_start + 3);
    if ( &_rt_psrelocs_start + 3 >= (int *)_rt_psrelocs_end )
      return;
    while ( 1 )
    {
      v10 = v9[2];
      v11 = (unsigned __int8)v10;
      v12 = *v9 + 0x400000i64;
      v13 = (void *)(v9[1] + 0x400000i64);
      v14 = *(_QWORD *)(*v9 + 0x400000i64);
      if ( (unsigned __int8)v10 == 16 )
      {
        v15 = *(unsigned __int16 *)(v9[1] + 0x400000i64);
        if ( (v15 & 0x8000) != 0 )
        {
          Src = v14 + (v15 | 0xFFFFFFFFFFFF0000ui64) - v12;
          goto LABEL_29;
        }
      }
      else if ( (unsigned __int8)v10 > 0x10u )
      {
        if ( (unsigned __int8)v10 != 32 )
        {
          if ( (unsigned __int8)v10 != 64 )
          {
LABEL_21:
            Src = 0i64;
            _report_error("  Unknown pseudo relocation bit size %d.\n", (unsigned __int8)v10);
          }
          Src = *(_QWORD *)(v9[1] + 0x400000i64) + v14 - v12;
          _write_memory(v13, &Src, 8ui64);
          goto LABEL_25;
        }
        v15 = *(unsigned int *)(v9[1] + 0x400000i64);
        if ( (int)v15 < 0 )
        {
          Src = v14 + (v15 | 0xFFFFFFFF00000000ui64) - v12;
LABEL_35:
          _write_memory(v13, &Src, 4ui64);
          goto LABEL_25;
        }
      }
      else
      {
        if ( (unsigned __int8)v10 != 8 )
          goto LABEL_21;
        v15 = *(unsigned __int8 *)(v9[1] + 0x400000i64);
        if ( (v15 & 0x80u) != 0i64 )
        {
          Src = v14 + (v15 | 0xFFFFFFFFFFFFFF00ui64) - v12;
LABEL_32:
          _write_memory(v13, &Src, 1ui64);
          goto LABEL_25;
        }
      }
      Src = v15 - v12 + v14;
      if ( v11 != 16 )
      {
        if ( v11 > 0x10 )
          goto LABEL_35;
        goto LABEL_32;
      }
LABEL_29:
      _write_memory(v13, &Src, 2ui64);
LABEL_25:
      v9 += 3;
      if ( v9 >= _rt_psrelocs_end )
        goto LABEL_8;
    }
  }
LABEL_6:
  if ( &_rt_psrelocs_start < (int *)_rt_psrelocs_end )
  {
    do
    {
      v4 = (void *)((unsigned int)v2[1] + 0x400000i64);
      v5 = *v2 + *(_DWORD *)((unsigned int)v2[1] + 0x400000i64);
      v2 += 2;
      flOldProtect[0] = v5;
      _write_memory(v4, flOldProtect, 4ui64);
    }
    while ( v2 < (int *)_rt_psrelocs_end );
LABEL_8:
    if ( maxSections > 0 )
    {
      v6 = 0i64;
      v7 = 0;
      do
      {
        if ( *(_DWORD *)(the_secs + v6) )
        {
          if ( !VirtualQuery(*(LPCVOID *)(the_secs + v6 + 8), &Buffer, 0x30ui64) )
            _report_error(
              "  VirtualQuery failed for %d bytes at address %p",
              *(unsigned int *)(*(_QWORD *)(the_secs + v6 + 16) + 8i64),
              *(const void **)(the_secs + v6 + 8));
          VirtualProtect(Buffer.BaseAddress, Buffer.RegionSize, *(_DWORD *)(the_secs + v6), flOldProtect);
        }
        ++v7;
        v6 += 24i64;
      }
      while ( v7 < maxSections );
    }
  }
}
// 4021C9: conditional instruction was optimized away because eax.4==8
// 402229: conditional instruction was optimized away because eax.4==20
// 404288: using guessed type int _rt_psrelocs_start;
// 4042A0: using guessed type unsigned int _rt_psrelocs_end[88];
// 407350: using guessed type int was_init_61499;
// 407358: using guessed type __int64 the_secs;
// 407360: using guessed type int maxSections;
// 401F60: using guessed type __int64 Src;

//----- (0000000000402270) ----------------------------------------------------
_BOOL8 __fastcall ValidateImageBase(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rcx

  result = 0i64;
  if ( *(_WORD *)a1 == 23117 )
  {
    v2 = *(int *)(a1 + 60) + a1;
    if ( *(_DWORD *)v2 == 17744 )
      return *(_WORD *)(v2 + 24) == 523;
  }
  return result;
}

//----- (00000000004022A0) ----------------------------------------------------
__int64 __fastcall FindPESection(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r9

  v2 = *(int *)(a1 + 60) + a1;
  result = 0i64;
  if ( *(_WORD *)(v2 + 6) )
  {
    result = v2 + *(unsigned __int16 *)(v2 + 20) + 24;
    v4 = result + 40i64 * ((unsigned int)*(unsigned __int16 *)(v2 + 6) - 1) + 40;
    while ( *(unsigned int *)(result + 12) > a2
         || a2 >= (unsigned int)(*(_DWORD *)(result + 8) + *(_DWORD *)(result + 12)) )
    {
      result += 40i64;
      if ( result == v4 )
        return 0i64;
    }
  }
  return result;
}

//----- (00000000004022F0) ----------------------------------------------------
const char *__fastcall FindPESectionByName(char *Str2)
{
  const char *v1; // rbx
  __int64 v3; // rdi

  v1 = 0i64;
  if ( strlen(Str2) <= 8 && ValidateImageBase(0x400000i64) && *(_WORD *)(MEMORY[0x40003C] + 0x400006i64) )
  {
    v1 = (const char *)(MEMORY[0x40003C] + 0x400000i64 + *(unsigned __int16 *)(MEMORY[0x40003C] + 0x400014i64) + 24);
    v3 = (__int64)&v1[40 * *(unsigned __int16 *)(MEMORY[0x40003C] + 0x400006i64)];
    while ( strncmp(v1, Str2, 8ui64) )
    {
      v1 += 40;
      if ( v1 == (const char *)v3 )
        return 0i64;
    }
  }
  return v1;
}

//----- (0000000000402390) ----------------------------------------------------
__int64 __fastcall _mingw_GetSectionForAddress(__int64 a1)
{
  if ( ValidateImageBase(0x400000i64) )
    return FindPESection(0x400000i64, a1 - 0x400000);
  else
    return 0i64;
}

//----- (00000000004023D0) ----------------------------------------------------
__int64 _mingw_GetSectionCount()
{
  BOOL v0; // eax
  unsigned int v1; // edx

  v0 = ValidateImageBase(0x400000i64);
  v1 = 0;
  if ( v0 )
    return *(unsigned __int16 *)(MEMORY[0x40003C] + 0x400006i64);
  return v1;
}

//----- (0000000000402400) ----------------------------------------------------
__int64 __fastcall FindPESectionExec(__int64 a1)
{
  BOOL v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = ValidateImageBase(0x400000i64);
  v3 = 0i64;
  if ( v2 && *(_WORD *)(MEMORY[0x40003C] + 0x400006i64) )
  {
    v3 = MEMORY[0x40003C] + 0x400000i64 + *(unsigned __int16 *)(MEMORY[0x40003C] + 0x400014i64) + 24;
    v4 = v3 + 40i64 * ((unsigned int)*(unsigned __int16 *)(MEMORY[0x40003C] + 0x400006i64) - 1) + 40;
    do
    {
      if ( (*(_BYTE *)(v3 + 39) & 0x20) != 0 )
      {
        if ( !a1 )
          return v3;
        --a1;
      }
      v3 += 40i64;
    }
    while ( v3 != v4 );
    return 0i64;
  }
  return v3;
}

//----- (0000000000402480) ----------------------------------------------------
__int64 GetPEImageBase()
{
  BOOL v0; // eax
  __int64 v1; // rdx

  v0 = ValidateImageBase(0x400000i64);
  v1 = 0i64;
  if ( v0 )
    return 0x400000i64;
  return v1;
}

//----- (00000000004024B0) ----------------------------------------------------
_BOOL8 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 PESection; // rax

  return ValidateImageBase(0x400000i64)
      && (PESection = FindPESection(0x400000i64, a1 - 0x400000)) != 0
      && *(_DWORD *)(PESection + 36) >= 0;
}

//----- (0000000000402500) ----------------------------------------------------
__int64 __fastcall _mingw_enum_import_library_names(int a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = 0i64;
  if ( !ValidateImageBase(0x400000i64) )
    return v1;
  v3 = *(unsigned int *)(MEMORY[0x40003C] + 0x400090i64);
  if ( !(_DWORD)v3 )
    return v1;
  if ( !FindPESection(0x400000i64, *(unsigned int *)(MEMORY[0x40003C] + 0x400090i64)) )
    return v1;
  v4 = v3 + 0x400000;
  if ( !v4 )
    return v1;
  while ( *(_DWORD *)(v4 + 4) || *(_DWORD *)(v4 + 12) )
  {
    if ( a1 <= 0 )
      return *(unsigned int *)(v4 + 12) + 0x400000i64;
    --a1;
    v4 += 20i64;
  }
  return 0i64;
}

//----- (0000000000402590) ----------------------------------------------------
HMODULE _mingw_get_msvcrt_handle()
{
  HMODULE result; // rax
  int i; // ecx
  int v2; // ebx
  __int64 v3; // rax
  char v4; // dl
  char v5; // dl
  char v6; // dl
  char v7; // dl
  char v8; // dl

  result = (HMODULE)msvcrt_handle_60749;
  if ( !msvcrt_handle_60749 )
  {
    for ( i = 0; ; i = v2 )
    {
      v2 = i + 1;
      v3 = _mingw_enum_import_library_names(i);
      if ( !v3 )
        break;
      if ( *(_BYTE *)v3 == 77 || *(_BYTE *)v3 == 109 )
      {
        v4 = *(_BYTE *)(v3 + 1);
        if ( v4 == 83 || v4 == 115 )
        {
          v5 = *(_BYTE *)(v3 + 2);
          if ( v5 == 86 || v5 == 118 )
          {
            v6 = *(_BYTE *)(v3 + 3);
            if ( v6 == 67 || v6 == 99 )
            {
              v7 = *(_BYTE *)(v3 + 4);
              if ( v7 == 82 || v7 == 114 )
              {
                v8 = *(_BYTE *)(v3 + 5);
                if ( v8 == 84 || v8 == 116 || (unsigned __int8)(v8 - 48) <= 9u )
                {
                  result = GetModuleHandleA((LPCSTR)v3);
                  msvcrt_handle_60749 = (__int64)result;
                  if ( result )
                    return result;
                  break;
                }
              }
            }
          }
        }
      }
    }
    result = LoadLibraryW(L"msvcrt.dll");
    msvcrt_handle_60749 = (__int64)result;
  }
  return result;
}
// 407370: using guessed type __int64 msvcrt_handle_60749;

//----- (0000000000402660) ----------------------------------------------------
void __cdecl fpreset()
{
  __asm { fninit }
}

//----- (0000000000402670) ----------------------------------------------------
void (*_do_global_dtors())(void)
{
  void (*result)(void); // rax

  result = (void (*)(void))(*p_60671)[0];
  if ( (*p_60671)[0] )
  {
    do
    {
      result();
      result = (void (*)(void))(*p_60671)[1];
      p_60671 = (__int64 (*)[6])((char *)p_60671 + 8);
    }
    while ( result );
  }
  return result;
}
// 403030: using guessed type __int64 (*p_60671)[6];

//----- (00000000004026B0) ----------------------------------------------------
int _do_global_ctors()
{
  int i; // ebx

  i = __CTOR_LIST__[0];
  if ( LODWORD(__CTOR_LIST__[0]) == -1 )
  {
    for ( i = 0; __CTOR_LIST__[i + 1]; ++i )
      ;
  }
  for ( ; i; --i )
    ((void (*)(void))__CTOR_LIST__[i])();
  return atexit((void (__cdecl *)())_do_global_dtors);
}
// 402D10: using guessed type __int64 __CTOR_LIST__[];

//----- (0000000000402710) ----------------------------------------------------
int _main()
{
  int result; // eax

  result = initialized;
  if ( !initialized )
  {
    initialized = 1;
    return _do_global_ctors();
  }
  return result;
}
// 407380: using guessed type int initialized;

//----- (0000000000402730) ----------------------------------------------------
void __cdecl _security_init_cookie()
{
  uintptr_t v0; // rbx
  struct _FILETIME v1; // r12
  __int64 CurrentProcessId; // rbp
  __int64 CurrentThreadId; // rdi
  __int64 TickCount; // rsi
  uintptr_t v5; // r12
  unsigned __int64 v6; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-38h] BYREF

  v0 = _security_cookie;
  SystemTimeAsFileTime = 0i64;
  if ( _security_cookie == 0x2B992DDFA232i64 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v1 = SystemTimeAsFileTime;
    CurrentProcessId = GetCurrentProcessId();
    CurrentThreadId = GetCurrentThreadId();
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v5 = (TickCount ^ CurrentThreadId ^ CurrentProcessId ^ PerformanceCount.QuadPart ^ *(_QWORD *)&v1) & 0xFFFFFFFFFFFFi64;
    v6 = ~v5;
    if ( v5 == v0 )
    {
      v6 = 0xFFFFD466D2205DCCui64;
      v5 = 0x2B992DDFA233i64;
    }
    _security_cookie = v5;
    _security_cookie_complement = v6;
  }
  else
  {
    _security_cookie_complement = ~_security_cookie;
  }
}
// 403080: using guessed type __int64 _security_cookie_complement;

//----- (0000000000402800) ----------------------------------------------------
void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v3; // r9
  HANDLE CurrentProcess; // rax
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+60h] [rbp-20h] BYREF
  PVOID HandlerData; // [rsp+68h] [rbp-18h] BYREF
  DWORD64 retaddr; // [rsp+88h] [rbp+8h] BYREF

  RtlCaptureContext(&GS_ContextRecord);
  Rip = GS_ContextRecord.Rip;
  v3 = RtlLookupFunctionEntry(GS_ContextRecord.Rip, &ImageBase, 0i64);
  if ( v3 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v3, &GS_ContextRecord, &HandlerData, &EstablisherFrame, 0i64);
  }
  else
  {
    GS_ContextRecord.Rip = retaddr;
    GS_ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  GS_ContextRecord.Rcx = StackCookie;
  GS_ExceptionRecord = -1073740791;
  dword_407884 = 1;
  qword_407890 = GS_ContextRecord.Rip;
  SetUnhandledExceptionFilter(0i64);
  UnhandledExceptionFilter(&GS_ExceptionPointers);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
  abort();
}
// 403080: using guessed type __int64 _security_cookie_complement;
// 407880: using guessed type int GS_ExceptionRecord;
// 407884: using guessed type int dword_407884;
// 407890: using guessed type __int64 qword_407890;

//----- (0000000000402900) ----------------------------------------------------
void _mingwthr_run_key_dtors_part_0()
{
  __int64 i; // rbx
  LPVOID Value; // rbp

  EnterCriticalSection(&_mingwthr_cs);
  for ( i = key_dtor_list; i; i = *(_QWORD *)(i + 16) )
  {
    Value = TlsGetValue(*(_DWORD *)i);
    if ( !GetLastError() && Value )
      (*(void (__fastcall **)(LPVOID))(i + 8))(Value);
  }
  LeaveCriticalSection(&_mingwthr_cs);
}
// 407968: using guessed type __int64 key_dtor_list;

//----- (0000000000402970) ----------------------------------------------------
__int64 __fastcall __w64_mingwthr_add_key_dtor(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax

  v2 = 0;
  if ( !_mingwthr_cs_init )
    return v2;
  v6 = calloc(1ui64, 0x18ui64);
  v7 = (__int64)v6;
  if ( !v6 )
    return (unsigned int)-1;
  *(_DWORD *)v6 = a1;
  v6[1] = a2;
  EnterCriticalSection(&_mingwthr_cs);
  v8 = key_dtor_list;
  key_dtor_list = v7;
  *(_QWORD *)(v7 + 16) = v8;
  LeaveCriticalSection(&_mingwthr_cs);
  return 0i64;
}
// 407920: using guessed type int _mingwthr_cs_init;
// 407968: using guessed type __int64 key_dtor_list;

//----- (00000000004029F0) ----------------------------------------------------
__int64 __fastcall __w64_mingwthr_remove_key_dtor(int a1)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx

  if ( !_mingwthr_cs_init )
    return 0i64;
  EnterCriticalSection(&_mingwthr_cs);
  v3 = key_dtor_list;
  if ( key_dtor_list )
  {
    if ( *(_DWORD *)key_dtor_list == a1 )
    {
      v4 = (_QWORD *)key_dtor_list;
      key_dtor_list = *(_QWORD *)(key_dtor_list + 16);
LABEL_12:
      free(v4);
      LeaveCriticalSection(&_mingwthr_cs);
      return 0i64;
    }
    while ( 1 )
    {
      v4 = *(_QWORD **)(v3 + 16);
      if ( !v4 )
        break;
      if ( *(_DWORD *)v4 == a1 )
      {
        *(_QWORD *)(v3 + 16) = v4[2];
        goto LABEL_12;
      }
      v3 = *(_QWORD *)(v3 + 16);
    }
  }
  LeaveCriticalSection(&_mingwthr_cs);
  return 0i64;
}
// 407920: using guessed type int _mingwthr_cs_init;
// 407968: using guessed type __int64 key_dtor_list;

//----- (0000000000402A90) ----------------------------------------------------
__int64 __fastcall _mingw_TLScallback(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 1 )
  {
    if ( !_mingwthr_cs_init )
      InitializeCriticalSection(&_mingwthr_cs);
    result = 1i64;
    _mingwthr_cs_init = 1;
  }
  else
  {
    if ( a2 )
    {
      if ( a2 == 3 )
      {
        if ( _mingwthr_cs_init )
          _mingwthr_run_key_dtors_part_0();
      }
    }
    else
    {
      if ( _mingwthr_cs_init )
        _mingwthr_run_key_dtors_part_0();
      if ( _mingwthr_cs_init == 1 )
      {
        _mingwthr_cs_init = 0;
        _IAT_start__(&_mingwthr_cs);
      }
    }
    return 1i64;
  }
  return result;
}
// 407920: using guessed type int _mingwthr_cs_init;
// 408248: using guessed type __int64 __fastcall _IAT_start__(_QWORD);

// nfuncs=104 queued=44 decompiled=44 lumina nreq=0 worse=0 better=0
// ALL OK, 44 function(s) have been successfully decompiled
