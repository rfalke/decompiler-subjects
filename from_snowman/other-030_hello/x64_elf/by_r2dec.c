/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4014d0 */
#include <stdint.h>
 
void dbg_mainCRTStartup (void) {
    /* int mainCRTStartup(); */
    *(0x00407080) = 0;
    _security_init_cookie ();
    _tmainCRTStartup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402730 */
#include <stdint.h>
 
int64_t security_init_cookie (void) {
    LPFILETIME lpSystemTimeAsFileTime;
    LARGE_INTEGER * lpPerformanceCount;
    rbx = *(0x00403070);
    rax = 0x2b992ddfa232;
    *((rsp + 0x20)) = 0;
    if (rbx != rax) {
        rbx = ~rbx;
        *(0x00403080) = rbx;
        return rax;
    }
    rcx = rsp + 0x20;
    GetSystemTimeAsFileTime ();
    r12 = *((rsp + 0x20));
    eax = GetCurrentProcessId ();
    eax = GetCurrentThreadId ();
    edi = eax;
    eax = GetTickCount ();
    rcx = rsp + 0x30;
    esi = eax;
    QueryPerformanceCounter ();
    r12 ^= *((rsp + 0x30));
    rax = 0xffffffffffff;
    r12 ^= rbp;
    r12 ^= rdi;
    r12 ^= rsi;
    r12 &= rax;
    rax = r12;
    rax = ~rax;
    while (1) {
        *(0x00403070) = r12;
        *(0x00403080) = rax;
        return rax;
        rax = 0xffffd466d2205dcc;
        r12 = 0x2b992ddfa233;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401180 */
#include <stdint.h>
 
int64_t dbg_tmainCRTStartup (PVOID ExChange, int32_t l, char ** avl, int32_t ac) {
    char ** n;
    STARTUPINFO StartupInfo;
    int64_t var_20h;
    int64_t var_5ch;
    int64_t var_60h;
    rbx = ExChange;
    rax = l;
    rsi = avl;
    rdi = ac;
    /* int __tmainCRTStartup(); */
    r11d = *(0x00407080);
    eax = 0;
    ecx = 0xd;
    rdx = rsp + 0x20;
    rdi = rdx;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    if (r11d != 0) {
        goto label_6;
    }
label_4:
    rax = *(gs:0x30);
    rbx = *((rax + 8));
    eax = 0;
    __asm ("lock cmpxchg qword [0x004079c0], rbx");
    esi = 0;
    if (rax == 0) {
        goto label_7;
    }
    sil = 1;
    if (rbx == rax) {
        goto label_7;
    }
    rdi = *(sym.imp.KERNEL32.dll_Sleep);
    esi = 0;
    while (rax != 0) {
        if (rbx == rax) {
            goto label_8;
        }
        ecx = 0x3e8;
        void (*rdi)() ();
        rax = rsi;
        __asm ("lock cmpxchg qword [0x004079c0], rbx");
    }
    esi = 0;
label_7:
    eax = *(0x004079b8);
    if (eax == 1) {
        goto label_9;
    }
label_2:
    eax = *(0x004079b8);
    if (eax == 0) {
        goto label_10;
    }
    *(section..bss) = 1;
label_5:
    eax = *(0x004079b8);
    if (eax == 1) {
        goto label_11;
    }
label_3:
    if (esi == 0) {
        eax = 0;
        tmp_0 = 0x004079c0;
        0x004079c0 = rax;
        rax = tmp_0;
    }
    rax = *(section..data);
    if (rax != 0) {
        r8d = 0;
        edx = 2;
        ecx = 0;
        void (*rax)() ();
    }
    _pei386_runtime_relocator ();
    rcx = sym__gnu_exception_handler;
    rax = SetUnhandledExceptionFilter ();
    *(0x004070a0) = rax;
    _mingw_init_ehandler ();
    rax = _mingw_get_msvcrt_handle ();
    rdx = "_set_invalid_parameter_handler";
    rcx = rax;
    rax = GetProcAddress ();
    if (rax != 0) {
        rcx = dbg___mingw_invalidParameterHandler;
        void (*rax)() ();
    }
    _fpreset ();
    r10d = *(0x00407080);
    if (r10d == 0) {
        goto label_12;
    }
    rax = *(sym.imp.msvcrt.dll__acmdln);
    ecx = 0;
    rax = *(rax);
    while (dl <= 0x20) {
        if (dl == 0) {
            goto label_13;
        }
        if (cl == 0) {
            goto label_14;
        }
label_0:
        rax++;
        edx = *(rax);
    }
    r8d = ecx;
    r8d ^= 1;
    if (dl == 0x22) {
        ecx = r8d;
    }
    goto label_0;
    do {
        if (dl == 0) {
            goto label_13;
        }
label_14:
        rax++;
        edx = *(rax);
    } while (dl <= 0x20);
label_13:
    rdx = 0x00400000;
    *(0x00407990) = rax;
    eax = 0xa;
    *(0x004079a0) = rdx;
    if ((*((rsp + 0x5c)) & 1) != 0) {
        goto label_15;
    }
label_1:
    *(0x00407998) = eax;
label_12:
    edi = *(0x00407004);
    ecx = rdi + 1;
    rcx = (int64_t) ecx;
    rcx <<= 3;
    rax = malloc ();
    eax = 0;
    rsi = *(0x00407008);
    if (edi <= 0) {
        goto label_16;
    }
    ebx = 0;
    do {
        rcx = *((rsi + rbx*8));
        strlen ();
        r12d = rax + 1;
        r12 = (int64_t) r12d;
        rcx = r12;
        rax = malloc ();
        *((rbp + rbx*8)) = rax;
        rbx++;
        memcpy (rax, *((rsi + rbx*8)), r12);
    } while (edi > ebx);
    rdi = (int64_t) edi;
    rax = rdi*8;
label_16:
    *((rbp + rax)) = 0;
    *(0x00407008) = rbp;
    _main ();
    rdx = *(0x00407010);
    rax = *(sym.imp.msvcrt.dll___initenv);
    ecx = *(0x00407004);
    *(rax) = rdx;
    r8 = *(0x00407010);
    rdx = *(0x00407008);
    eax = main ();
    r9d = *(0x0040701c);
    *(0x00407018) = eax;
    if (r9d == 0) {
        goto label_17;
    }
    r8d = *(section..bss);
    if (r8d == 0) {
        _cexit ();
        eax = *(0x00407018);
    }
    return rax;
label_15:
    eax = *((rsp + 0x60));
    goto label_1;
label_8:
    eax = *(0x004079b8);
    esi = 1;
    if (eax != 1) {
        goto label_2;
    }
label_9:
    ecx = 0x1f;
    amsg_exit ();
    eax = *(0x004079b8);
    if (eax != 1) {
        goto label_3;
    }
label_11:
    rdx = 0x00409010;
    rcx = section__CRT;
    initterm ();
    *(0x004079b8) = 2;
    goto label_3;
label_6:
    rcx = rdx;
    GetStartupInfoA ();
    goto label_4;
label_10:
    rdx = 0x00409030;
    rcx = 0x00409018;
    *(0x004079b8) = 1;
    eax = initterm ();
    goto label_5;
label_17:
    ecx = eax;
    exit (rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
void dbg_mingw_invalidParameterHandler (uint32_t line, wchar_t const * file, wchar_t const * expression, wchar_t const * function) {
    uintptr_t pReserved;
    r9 = line;
    r8 = file;
    rcx = expression;
    rdx = function;
    /* void __mingw_invalidParameterHandler(wchar_t const * expression,wchar_t const * function,wchar_t const * file,unsigned int line,uintptr_t pReserved); */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401010 */
#include <stdint.h>
 
uint64_t dbg_pre_cpp_init (void) {
    int64_t var_20h;
    /* void pre_cpp_init(); */
    eax = *(0x00407040);
    r9d = *(0x00407050);
    r8 = 0x00407010;
    rdx = 0x00407008;
    rcx = 0x00407004;
    *(0x00407020) = eax;
    rax = 0x00407020;
    *((rsp + 0x20)) = rax;
    eax = _getmainargs ();
    *(0x00407024) = eax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402b78 */
#include <stdint.h>
 
void getmainargs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401060 */
#include <stdint.h>
 
uint64_t dbg_pre_c_init (PIMAGE_OPTIONAL_HEADER64 pNTHeader64) {
    rdx = pNTHeader64;
    /* int pre_c_init(); */
    eax = 0;
    *(0x00407068) = 1;
    *(0x00407064) = 1;
    *(0x00407060) = 1;
    *(0x00407070) = 1;
    if (*(0x00400000) == 0x5a4d) {
        goto label_1;
    }
label_0:
    *(0x0040701c) = eax;
    eax = *(0x00407080);
    if (eax == 0) {
        goto label_2;
    }
    ecx = 2;
    set_app_type ();
    do {
        rcx = 0xffffffffffffffff;
        rax = encode_pointer ();
        edx = *(0x00407090);
        *(0x004079b0) = rax;
        *(0x004079a8) = rax;
        rax = *(sym.imp.msvcrt.dll__fmode);
        *(rax) = edx;
        eax = _setargv ();
        if (*(0x00403060) == 1) {
            goto label_3;
        }
        eax = 0;
        return rax;
label_2:
        ecx = 1;
        eax = set_app_type ();
    } while (1);
label_1:
    rcx = *(0x0040003c);
    rdx = 0x00400000;
    rdx += rcx;
    if (*(rdx) != 0x4550) {
        goto label_0;
    }
    ecx = *((rdx + 0x18));
    if (cx == 0x10b) {
        goto label_4;
    }
    if (cx != 0x20b) {
        goto label_0;
    }
    if (*((rdx + 0x84)) <= 0xe) {
        goto label_0;
    }
    edx = *((rdx + 0xf8));
    eax = 0;
    al = (edx != 0) ? 1 : 0;
    goto label_0;
label_3:
    rcx = sym__matherr;
    eax = _mingw_setusermatherr ();
    eax = 0;
    return rax;
label_4:
    if (*((rdx + 0x74)) <= 0xe) {
        goto label_0;
    }
    ecx = *((rdx + 0xe8));
    eax = 0;
    al = (ecx != 0) ? 1 : 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4014b0 */
#include <stdint.h>
 
void dbg_WinMainCRTStartup (void) {
    /* int WinMainCRTStartup(); */
    *(0x00407080) = 1;
    _security_init_cookie ();
    _tmainCRTStartup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4014f0 */
#include <stdint.h>
 
uint64_t dbg_main (void) {
    /* int main(); */
    _main ();
    rdx = "Hello, World!";
    rcx = sym_imp_libstdc_6_dll_std::cerr;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    rdx = sym_std::basic_ostream_char__std::char_traits_char____std::endl_char__std::char_traits_char____std::basic_ostream_char__std::char_traits_char____;
    rcx = rax;
    symstd::ostream::operator << (std::ostream&(*)(std::ostream&)) ();
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402710 */
#include <stdint.h>
 
int32_t main (void) {
    eax = *(0x00407380);
    if (eax != 0) {
        return eax;
    }
    *(0x00407380) = 1;
    return do_global_ctors ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4016b0 */
#include <stdint.h>
 
uint64_t mingw_onexit (int64_t arg1) {
    int64_t var_20h;
    int64_t var_28h;
    rcx = arg1;
    rbx = rcx;
    rcx = *(0x004079a8);
    rax = decode_pointer ();
    *((rsp + 0x20)) = rax;
    if (rax != -1) {
        ecx = 8;
        _lock ();
        rcx = *(0x004079a8);
        rax = decode_pointer ();
        rcx = *(0x004079b0);
        *((rsp + 0x20)) = rax;
        rax = decode_pointer ();
        r8 = rsp + 0x28;
        rdx = rsp + 0x20;
        rcx = rbx;
        *((rsp + 0x28)) = rax;
        rax = dllonexit ();
        rcx = *((rsp + 0x20));
        rbx = rax;
        rax = encode_pointer ();
        rcx = *((rsp + 0x28));
        *(0x004079a8) = rax;
        rax = encode_pointer ();
        ecx = 8;
        *(0x004079b0) = rax;
        unlock ();
        rax = rbx;
        return rax;
    }
    rcx = rbx;
    rax = _onexit ();
    rbx = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401690 */
#include <stdint.h>
 
int64_t decode_pointer (int64_t arg1) {
    rcx = arg1;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402bd0 */
#include <stdint.h>
 
void lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402bd8 */
#include <stdint.h>
 
void dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4016a0 */
#include <stdint.h>
 
int64_t encode_pointer (int64_t arg1) {
    rcx = arg1;
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402be0 */
#include <stdint.h>
 
void unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4015a8 */
#include <stdint.h>
 
void std::basic_ostream_char_std::char_traits_char_std::operator_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4015b0 */
#include <stdint.h>
 
void std::ostream::operator_std::ostream_std::ostream_ (void) {
    /* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x40152a */
#include <stdint.h>
 
void dbg_tcf_0 (void) {
    /* void __tcf_0(); */
    rcx = 0x00407030;
    symstd::ios_base::Init::~Init() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4015b8 */
#include <stdint.h>
 
void std::ios_base::Init::Init_ (void) {
    /* std::ios_base::Init::~Init() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401545 */
#include <stdint.h>
 
void dbg_static_initialization_and_destruction_0 (uint32_t arg1, uint32_t arg2) {
    int32_t __initialize_p;
    int32_t __priority;
    rcx = arg1;
    rdx = arg2;
    /* void __static_initialization_and_destruction_0(int __initialize_p,int __priority); */
    *((rbp + 0x10)) = ecx;
    *((rbp + 0x18)) = edx;
    if (*((rbp + 0x10)) == 1) {
        if (*((rbp + 0x18)) != 0xffff) {
            goto label_0;
        }
        rcx = 0x00407030;
        fcn_004015c0 ();
        rcx = dbg___tcf_0;
        atexit ();
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4015c0 */
#include <stdint.h>
 
void fcn_004015c0 (void) {
    /* std::ios_base::Init::Init() */
    _ZNSt8ios_base4InitC1Ev ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401760 */
#include <stdint.h>
 
uint64_t atexit (int64_t arg1) {
    rcx = arg1;
    rax = mingw_onexit ();
    eax -= eax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401581 */
#include <stdint.h>
 
void dbg_GLOBAL_sub_I_main (void) {
    /* void _GLOBAL__sub_I_main(); */
    edx = 0xffff;
    sym_static_initialization_and_destruction_0(int (rcx, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4015d0 */
#include <stdint.h>
 
int32_t dyn_tls_dtor (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    if (edx != 0) {
        if (edx == 3) {
            goto label_0;
        }
        eax = 1;
        return eax;
    }
label_0:
    _mingw_TLScallback ();
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402a90 */
#include <stdint.h>
 
int32_t mingw_TLScallback (uint32_t arg2) {
    rdx = arg2;
    if (edx == 1) {
        goto label_3;
    }
    if (edx < 1) {
        goto label_4;
    }
    if (edx == 3) {
        goto label_5;
    }
    do {
label_0:
        eax = 1;
        return eax;
label_4:
        eax = *(0x00407920);
        if (eax != 0) {
            goto label_6;
        }
label_2:
        eax = *(0x00407920);
    } while (eax != 1);
    rcx = 0x00407940;
    *(0x00407920) = 0;
    DeleteCriticalSection ();
    goto label_0;
label_3:
    eax = *(0x00407920);
    if (eax == 0) {
        goto label_7;
    }
label_1:
    eax = 1;
    *(0x00407920) = 1;
    return eax;
label_5:
    eax = *(0x00407920);
    if (eax == 0) {
        goto label_0;
    }
    _mingwthr_run_key_dtors_part_0 ();
    goto label_0;
label_7:
    rcx = 0x00407940;
    InitializeCriticalSection ();
    goto label_1;
label_6:
    _mingwthr_run_key_dtors_part_0 ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401600 */
#include <stdint.h>
 
int64_t dyn_tls_init (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    if (*(0x00403050) != 2) {
        *(0x00403050) = 2;
    }
    if (edx == 2) {
        goto label_1;
    }
    if (edx == 1) {
        goto label_2;
    }
    do {
label_0:
        eax = 1;
        return eax;
label_1:
        rbx = 0x00409060;
        rsi = 0x00409060;
    } while (rbx == rsi);
    do {
        rax = *(rbx);
        if (rax != 0) {
            void (*rax)() ();
        }
        rbx += 8;
    } while (rsi != rbx);
    eax = 1;
    return rax;
label_2:
    _mingw_TLScallback ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401670 */
#include <stdint.h>
 
int32_t tlregdtor (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401680 */
#include <stdint.h>
 
int64_t my_lconv_init (void) {
    return void (*sym.imp.msvcrt.dll___lconv_init)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401780 */
#include <stdint.h>
 
uint64_t mingw_SEH_error_handler (int64_t arg1) {
    int64_t var_28h;
    rcx = arg1;
    eax = *(rcx);
    if (eax > 0xc0000091) {
        goto label_4;
    }
    if (eax < 0xc000008d) {
        goto label_5;
    }
    do {
        ebx = 1;
label_2:
        edx = 0;
        ecx = 8;
        rax = signal (rcx);
        rdx = rax;
        if (rax == 1) {
            goto label_6;
        }
        eax = 1;
        if (rdx != 0) {
            ecx = 8;
            eax = void (*rdx)() ();
            eax = 0;
        }
label_0:
        return rax;
label_4:
        if (eax == 0xc0000094) {
            goto label_7;
        }
        if (eax > 0xc0000094) {
            goto label_8;
        }
        if (eax == 0xc0000092) {
            goto label_9;
        }
    } while (eax == 0xc0000093);
    do {
label_1:
        eax = 1;
        return rax;
label_5:
        if (eax == 0xc0000008) {
            goto label_9;
        }
        if (eax > 0xc0000008) {
            goto label_10;
        }
        if (eax == 0x80000002) {
            goto label_9;
        }
    } while (eax != 0xc0000005);
    edx = 0;
    ecx = 0xb;
    rax = signal (rcx);
    rdx = rax;
    if (rax == 1) {
        goto label_11;
    }
    eax = 4;
    if (rdx == 0) {
        goto label_0;
    }
    ecx = 0xb;
    eax = void (*rdx)() ();
    eax = 0;
    goto label_0;
label_8:
    if (eax == 0xc0000095) {
        goto label_9;
    }
    if (eax != 0xc0000096) {
        goto label_1;
    }
label_3:
    edx = 0;
    ecx = 4;
    rax = signal (rcx);
    rdx = rax;
    if (rax == 1) {
        goto label_12;
    }
    eax = 4;
    if (rdx == 0) {
        goto label_0;
    }
    ecx = 4;
    eax = void (*rdx)() ();
    eax = 0;
    goto label_0;
label_7:
    ebx = 0;
    goto label_2;
label_10:
    if (eax == 0xc000001d) {
        goto label_3;
    }
    if (eax != 0xc000008c) {
        goto label_1;
    }
label_9:
    return rax;
label_6:
    ecx = 8;
    eax = signal (0);
    eax = 0;
    if (ebx == 0) {
        goto label_0;
    }
    *((rsp + 0x28)) = eax;
    _fpreset ();
    eax = *((rsp + 0x28));
    goto label_0;
label_11:
    ecx = 0xb;
    eax = signal (rcx);
    eax = 0;
    goto label_0;
label_12:
    ecx = 4;
    eax = signal (rcx);
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401920 */
#include <stdint.h>
 
uint64_t mingw_init_ehandler (void) {
    rax = _GetPEImageBase ();
    rbx = rax;
    eax = *(0x004070a8);
    while (eax != 0) {
label_0:
        return rax;
    }
    rcx = ".pdata";
    *(0x004070a8) = 1;
    rax = _FindPESectionByName ();
    r8 = rax;
    eax = 1;
    if (r8 != 0) {
        goto label_0;
    }
    rdx = 0x004070c0;
    rax = r8;
    ecx = 0x30;
    rsi = 0x00407240;
    r12 = sym___mingw_SEH_error_handler;
    rdi = rdx;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    rdi = rsi;
    r12 -= rbx;
    cl = 0x20;
    *(rdi) = rax;
    rcx--;
    rdi += 8;
    edi = 0;
    while (rax != 0) {
        rdx = 0x00407244;
        *((rsi + rdi*8)) = 9;
        *((rdx + rdi*8)) = r12d;
        edx = *((rax + 0xc));
        *(rbp) = edx;
        edx += *((rax + 8));
        rax = rsi + rdi*8;
        rdi++;
        rax -= rbx;
        *((rbp + 8)) = eax;
        *((rbp + 4)) = edx;
        rbp += 0xc;
        if (rdi == 0x20) {
            goto label_1;
        }
        rcx = rdi;
        rax = _FindPESectionExec ();
    }
    if (rdi != 0) {
        goto label_2;
    }
    do {
        eax = 1;
    } while (rcx != 0);
    goto label_0;
label_1:
    edx = 0x20;
    do {
        r8 = rbx;
        rcx = 0x004070c0;
        RtlAddFunctionTable ();
        eax = 1;
        goto label_0;
label_2:
        edx = edi;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401a30 */
#include <stdint.h>
 
int64_t gnu_exception_handler (int64_t arg1) {
    int64_t var_28h;
    rcx = arg1;
    rdx = *(rcx);
    rbx = rcx;
    eax = *(rdx);
    ecx = *(rdx);
    ecx &= 0x20ffffff;
    if (ecx == 0x20474343) {
        goto label_6;
    }
label_0:
    if (eax <= 0xc0000091) {
        goto label_7;
    }
    if (eax == 0xc0000094) {
        goto label_8;
    }
    if (eax > 0xc0000094) {
        goto label_9;
    }
    if (eax == 0xc0000092) {
        goto label_1;
    }
    if (eax == 0xc0000093) {
        goto label_10;
    }
    do {
label_2:
        rax = *(0x004070a0);
        if (rax == 0) {
            goto label_11;
        }
        rcx = rbx;
        eax = void (*rax)() ();
label_7:
        if (eax < 0xc000008d) {
            goto label_12;
        }
label_10:
        esi = 1;
label_3:
        edx = 0;
        ecx = 8;
        rax = signal (rcx);
        if (rax == 1) {
            goto label_13;
        }
    } while (rax == 0);
    ecx = 8;
    void (*rax)() ();
    eax = 0xffffffff;
label_5:
    return rax;
label_6:
    if ((*((rdx + 4)) & 1) != 0) {
        goto label_0;
    }
    do {
label_1:
        eax = 0xffffffff;
        return rax;
label_12:
    } while (eax == 0xc0000008);
    if (eax > 0xc0000008) {
        goto label_14;
    }
    if (eax == 0x80000002) {
        goto label_1;
    }
    if (eax != 0xc0000005) {
        goto label_2;
    }
    edx = 0;
    ecx = 0xb;
    rax = signal (rcx);
    if (rax == 1) {
        goto label_15;
    }
    if (rax == 0) {
        goto label_2;
    }
    ecx = 0xb;
    void (*rax)() ();
    eax = 0xffffffff;
    return rax;
label_9:
    if (eax == 0xc0000095) {
        goto label_1;
    }
    if (eax != 0xc0000096) {
        goto label_2;
    }
label_4:
    edx = 0;
    ecx = 4;
    rax = signal (rcx);
    if (rax == 1) {
        goto label_16;
    }
    if (rax == 0) {
        goto label_2;
    }
    ecx = 4;
    void (*rax)() ();
    eax = 0xffffffff;
    return rax;
label_8:
    esi = 0;
    goto label_3;
label_14:
    if (eax == 0xc000001d) {
        goto label_4;
    }
    if (eax != 0xc000008c) {
        goto label_2;
    }
    goto label_1;
label_11:
    eax = 0;
    goto label_5;
label_13:
    edx = 1;
    ecx = 8;
    signal (rcx);
    eax = 0xffffffff;
    if (esi == 0) {
        goto label_5;
    }
    *((rsp + 0x28)) = eax;
    _fpreset ();
    eax = *((rsp + 0x28));
    goto label_5;
label_15:
    edx = 1;
    ecx = 0xb;
    signal (rcx);
    eax = 0xffffffff;
    goto label_5;
label_16:
    edx = 1;
    ecx = 4;
    signal (rcx);
    eax = 0xffffffff;
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401c40 */
#include <stdint.h>
 
int64_t mingw_raise_matherr (int64_t arg_80h, int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    rcx = arg1;
    rdx = arg2;
    rax = *(0x00407340);
    if (rax != 0) {
        rdx = *((rsp + 0x80));
        *((rsp + 0x30)) = xmm2;
        *((rsp + 0x38)) = xmm3;
        rcx = rsp + 0x20;
        void (*rax)(uint64_t) (rdx);
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401c80 */
#include <stdint.h>
 
void mingw_setusermatherr (int64_t arg1) {
    rcx = arg1;
    *(0x00407340) = rcx;
    return setusermatherr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402bf0 */
#include <stdint.h>
 
void setusermatherr (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401c90 */
#include <stdint.h>
 
uint64_t matherr (uint32_t arg1) {
    double var_20h;
    double var_28h;
    double var_30h;
    rcx = arg1;
    if (*(rcx) <= 6) {
        goto label_1;
    }
    rbx = "Unknown error";
    do {
label_0:
        rsi = *((rcx + 8));
        r12 = *((rcx + 0x20));
        rbp = *((rcx + 0x18));
        rdi = *((rcx + 0x10));
        _iob_func ();
        r9 = rsi;
        r8 = rbx;
        *((rsp + 0x30)) = r12;
        *((rsp + 0x28)) = rbp;
        *((rsp + 0x20)) = rdi;
        eax = fprintf (rax + 0x60, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n");
        eax = 0;
        return eax;
label_1:
        edx = *(rcx);
        rax = 0x00404164;
        rdx = *((rax + rdx*4));
        rax += rdx;
        /* switch table (7 cases) at 0x404164 */
        void (*rax)() ();
        rbx = "Partial loss of significance (PLOSS)";
    } while (1);
    rbx = "Argument domain error (DOMAIN)";
    goto label_0;
    rbx = "Argument singularity (SIGN)";
    goto label_0;
    rbx = "Overflow range error (OVERFLOW)";
    goto label_0;
    rbx = "The result is too small to be represented (UNDERFLOW)";
    goto label_0;
    rbx = "Total loss of significance (TLOSS)";
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401d70 */
#include <stdint.h>
 
int32_t setargv (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401d80 */
#include <stdint.h>
 
uint64_t report_error (int64_t arg4, int64_t arg3, int64_t arg1, int64_t arg2) {
    int64_t var_28h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    r9 = arg4;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = rsp + 0x58;
    rbx = rcx;
    *((rsp + 0x58)) = rdx;
    *((rsp + 0x60)) = r8;
    *((rsp + 0x68)) = r9;
    *((rsp + 0x28)) = rax;
    _iob_func ();
    r8d = 0x1b;
    fwrite ("Mingw-w64 runtime failure:\n", rdx, 1, rax + 0x60);
    rsi = *((rsp + 0x28));
    _iob_func ();
    rcx = rax + 0x60;
    rdx = rbx;
    r8 = rsi;
    vfprintf ();
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402bf8 */
#include <stdint.h>
 
void iob_func (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c08 */
#include <stdint.h>
 
void fwrite (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c10 */
#include <stdint.h>
 
void vfprintf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c18 */
#include <stdint.h>
 
void abort (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402390 */
#include <stdint.h>
 
uint32_t mingw_GetSectionForAddress (int64_t arg1) {
    rcx = arg1;
    rbx = rcx;
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    if (eax != 0) {
        rcx = 0x00400000;
        rdx = rbx;
        rdx -= rcx;
        void (*0x4022a0)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402480 */
#include <stdint.h>
 
uint64_t GetPEImageBase (void) {
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    edx = 0;
    rax = 0x00400000;
    if (eax != 0) {
        rdx = rax;
    }
    rax = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402270 */
#include <stdint.h>
 
int32_t ValidateImageBase (uint32_t arg1) {
    rcx = arg1;
    eax = 0;
    while (*(rcx) != 0x4550) {
        return eax;
        rdx = *((rcx + 0x3c));
        rcx += rdx;
    }
    eax = 0;
    al = (*((rcx + 0x18)) == 0x20b) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402b88 */
#include <stdint.h>
 
void memcpy (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4023d0 */
#include <stdint.h>
 
int64_t mingw_GetSectionCount (void) {
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    edx = 0;
    if (eax != 0) {
        rax = *(0x0040003c);
        rdx = 0x00400000;
        edx = *((rdx + rax + 6));
    }
    eax = edx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402b30 */
#include <stdint.h>
 
int64_t fcn_00402b30 (int64_t arg1) {
    int64_t var_18h;
    rcx = arg1;
    rcx = rsp + 0x18;
    if (rax < 0x1000) {
        goto label_0;
    }
    do {
        rcx -= 0x1000;
        rax -= 0x1000;
    } while (rax > 0x1000);
label_0:
    rcx -= rax;
    rcx = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401df0 */
#include <stdint.h>
 
int64_t write_memory (int64_t arg3, int64_t arg1, int64_t arg2) {
    PMEMORY_BASIC_INFORMATION * lpAddress;
    SIZE_T dwSize;
    int64_t var_44h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rbx = rcx;
    rdi = rdx;
    rsi = r8;
    if (r8 == 0) {
        return;
    }
    ecx = *(0x00407360);
    if (ecx <= 0) {
        goto label_2;
    }
    rax = *(0x00407358);
    r12d = 0;
    do {
        rdx = *((rax + 8));
        if (rbx >= rdx) {
            r8 = *((rax + 0x10));
            r8d = *((r8 + 8));
            rdx += r8;
            if (rbx < rdx) {
                goto label_3;
            }
        }
        r12d++;
        rax += 0x18;
    } while (r12d != ecx);
label_1:
    rcx = rbx;
    rax = _mingw_GetSectionForAddress ();
    if (rax == 0) {
        goto label_4;
    }
    r12 = (int64_t) r12d;
    r12 *= 3;
    r12 <<= 3;
    r13 = r12;
    r13 += *(0x00407358);
    *((r13 + 0x10)) = rax;
    *(r13) = 0;
    rax = _GetPEImageBase ();
    edx = *((rbp + 0xc));
    r8d = 0x30;
    rax += rdx;
    rdx = rsp + 0x20;
    *((r13 + 8)) = rax;
    rax = *(0x00407358);
    rcx = *((rax + r12 + 8));
    rax = VirtualQuery ();
    if (rax == 0) {
        goto label_5;
    }
    eax = *((rsp + 0x44));
    while (eax == 0x40) {
label_0:
        *(0x00407360)++;
label_3:
        r8 = rsi;
        rdx = rdi;
        rcx = rbx;
        void (*0x402b88)() ();
    }
    r9 = *(0x00407358);
    r8d = 0x40;
    rdx = *((rsp + 0x38));
    rcx = *((rsp + 0x20));
    r9 += r12;
    VirtualProtect ();
    goto label_0;
label_2:
    r12d = 0;
    goto label_1;
label_4:
    rcx = "Address %p has no image-section";
    rdx = rbx;
    report_error ();
label_5:
    rax = *(0x00407358);
    edx = *((rbp + 8));
    rcx = "  VirtualQuery failed for %d bytes at address %p";
    r8 = *((rax + r12 + 8));
    report_error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x401f60 */
#include <stdint.h>
 
int64_t pei386_runtime_relocator (void) {
    int64_t var_20h;
    r12d = *(0x00407350);
    while (rax <= 7) {
label_0:
        rsp = rbp - 0x20;
        return;
        *(0x00407350) = 1;
        _mingw_GetSectionCount ();
        rax = (int64_t) eax;
        rax *= 3;
        rax = rax*8 + 0x1e;
        rax &= 0xfffffffffffffff0;
        rax = fcn_00402b30 (rcx);
        rsi = 0x004042a0;
        rbx = 0x00404288;
        *(0x00407360) = 0;
        rax = rsp + 0x20;
        *(0x00407358) = rax;
        rax = rsi;
        rax -= rbx;
    }
    if (rax <= 0xb) {
        goto label_10;
    }
    edi = *(0x00404288);
    if (edi == 0) {
        r11d = *(0x0040428c);
        if (r11d == 0) {
            goto label_11;
        }
    }
label_2:
    if (rbx >= rsi) {
        goto label_0;
    }
    rdi = 0x00400000;
    do {
        ecx = *((rbx + 4));
        rdx = rbp - 0x24;
        r8d = 4;
        rcx += rdi;
        eax = *(rcx);
        eax += *(rbx);
        rbx += 8;
        *((rbp - 0x24)) = eax;
        _write_memory ();
    } while (rbx < rsi);
label_4:
    ecx = *(0x00407360);
    if (ecx <= 0) {
        goto label_0;
    }
    ebx = 0;
    esi = 0;
    r12 = *(sym.imp.KERNEL32.dll_VirtualQuery);
    rdi = *(sym.imp.KERNEL32.dll_VirtualProtect);
    goto label_12;
label_1:
    esi++;
    rbx += 0x18;
    if (esi >= *(0x00407360)) {
        goto label_0;
    }
label_12:
    rax = rbx;
    rax += *(0x00407358);
    edx = *(rax);
    if (edx == 0) {
        goto label_1;
    }
    rcx = *((rax + 8));
    r8d = 0x30;
    rdx = rbp - 0x60;
    rax = void (*r12)() ();
    if (rax == 0) {
        goto label_13;
    }
    rax = *(0x00407358);
    r9 = rbp - 0x24;
    rdx = *((rbp - 0x48));
    rcx = *((rbp - 0x60));
    r8d = *((rax + rbx));
    void (*rdi)() ();
    goto label_1;
label_11:
    r10d = *(0x00404290);
    if (r10d != 0) {
        goto label_14;
    }
    rbx = 0x00404294;
label_10:
    r9d = *(rbx);
    if (r9d != 0) {
        goto label_2;
    }
    r8d = *((rbx + 4));
    if (r8d != 0) {
        goto label_2;
    }
label_14:
    edx = *((rbx + 8));
    if (edx != 1) {
        goto label_15;
    }
    rbx += 0xc;
    if (rbx >= rsi) {
        goto label_0;
    }
    rdi = 0x00400000;
    r12 = 0xffffffff00000000;
label_3:
    ecx = *((rbx + 4));
    edx = *(rbx);
    r8d = *((rbx + 8));
    eax = (int32_t) r8b;
    rdx += rdi;
    rcx += rdi;
    r9 = *(rdx);
    if (eax == 0x10) {
        goto label_16;
    }
    if (eax > 0x10) {
        goto label_17;
    }
    if (eax == 8) {
        goto label_18;
    }
    do {
        rcx = "  Unknown pseudo relocation bit size %d.\n";
        edx = (int32_t) r8b;
        *((rbp - 0x30)) = 0;
        eax = report_error ();
label_17:
        if (eax == 0x20) {
            goto label_19;
        }
    } while (eax != 0x40);
    r9 -= rdx;
    r9 += *(rcx);
    *((rbp - 0x30)) = r9;
label_9:
    rdx = rbp - 0x30;
    r8d = 8;
    _write_memory ();
label_5:
    rbx += 0xc;
    if (rbx < rsi) {
        goto label_3;
    }
    goto label_4;
label_16:
    r8d = *(rcx);
    if ((r8d & 0x8000) == 0) {
        goto label_6;
    }
    r8 |= 0xffffffffffff0000;
    r8 -= rdx;
    r8 += r9;
    *((rbp - 0x30)) = r8;
    do {
        rdx = rbp - 0x30;
        r8d = 2;
        eax = _write_memory ();
        goto label_5;
label_6:
        r8 -= rdx;
        r9 += r8;
        *((rbp - 0x30)) = r9;
    } while (eax == 0x10);
    if (eax > 0x10) {
        goto label_20;
    }
    if (eax != 8) {
        goto label_5;
    }
label_7:
    rdx = rbp - 0x30;
    r8d = 1;
    _write_memory ();
    goto label_5;
label_19:
    r8d = *(rcx);
    if ((r8d & 0x80000000) == 0) {
        goto label_6;
    }
    r8 |= r12;
    r8 -= rdx;
    r8 += r9;
    *((rbp - 0x30)) = r8;
label_8:
    rdx = rbp - 0x30;
    r8d = 4;
    eax = _write_memory ();
    goto label_5;
label_18:
    r8d = *(rcx);
    if ((r8b & 0x80) == 0) {
        goto label_6;
    }
    r8 |= 0xffffffffffffff00;
    r8 -= rdx;
    r8 += r9;
    *((rbp - 0x30)) = r8;
    goto label_7;
label_20:
    if (eax == 0x20) {
        goto label_8;
    }
    if (eax != 0x40) {
        goto label_5;
    }
    goto label_9;
label_13:
    rbx += *(0x00407358);
    rcx = "  VirtualQuery failed for %d bytes at address %p";
    rax = *((rbx + 0x10));
    r8 = *((rbx + 8));
    edx = *((rax + 8));
    report_error ();
label_15:
    rcx = "  Unknown pseudo relocation protocol version %d.\n";
    report_error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4022a0 */
#include <stdint.h>
 
int64_t FindPESection (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    rax = *((rcx + 0x3c));
    rcx += rax;
    eax = 0;
    r8d = *((rcx + 6));
    r9d = *((rcx + 0x14));
    if (r8d == 0) {
        goto label_0;
    }
    r9d = (int32_t) r9w;
    r8d--;
    rax = rcx + r9 + 0x18;
    rcx = r8 * 5;
    r9 = rax + rcx*8 + 0x28;
    do {
        ecx = *((rax + 0xc));
        r8d = *((rax + 0xc));
        if (r8 <= rdx) {
            ecx += *((rax + 8));
            if (rdx < rcx) {
                goto label_0;
            }
        }
        rax += 0x28;
    } while (rax != r9);
    eax = 0;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4022f0 */
#include <stdint.h>
 
uint64_t FindPESectionByName (int64_t arg1) {
    rcx = arg1;
    ebx = 0;
    rsi = rcx;
    rax = strlen ();
    if (rax > 8) {
        goto label_0;
    }
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    if (eax == 0) {
        goto label_0;
    }
    rdx = *(0x0040003c);
    rax = 0x00400000;
    rax += rdx;
    edx = *((rax + 6));
    ecx = *((rax + 0x14));
    if (edx == 0) {
        goto label_0;
    }
    ecx = (int32_t) cx;
    edx--;
    rbx = rax + rcx + 0x18;
    rax = rdx * 5;
    rdi = rbx + rax*8 + 0x28;
    while (eax != 0) {
        rbx += 0x28;
        if (rbx == rdi) {
            goto label_1;
        }
        r8d = 8;
        eax = strncmp (rbx, rsi, r8);
    }
label_0:
    rax = rbx;
    return rax;
label_1:
    ebx = 0;
    rax = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402400 */
#include <stdint.h>
 
uint64_t FindPESectionExec (int64_t arg1) {
    rcx = arg1;
    rbx = rcx;
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    edx = 0;
    if (eax == 0) {
        goto label_0;
    }
    rcx = *(0x0040003c);
    rax = 0x00400000;
    rax += rcx;
    ecx = *((rax + 6));
    r8d = *((rax + 0x14));
    if (ecx == 0) {
        goto label_0;
    }
    r8d = (int32_t) r8w;
    ecx--;
    rdx = rax + r8 + 0x18;
    rax = rcx * 5;
    rax = rdx + rax*8 + 0x28;
    do {
        if ((*((rdx + 0x27)) & 0x20) != 0) {
            if (rbx == 0) {
                goto label_0;
            }
            rbx--;
        }
        rdx += 0x28;
    } while (rdx != rax);
    edx = 0;
label_0:
    rax = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4024b0 */
#include <stdint.h>
 
uint64_t IsNonwritableInCurrentImage (int64_t arg1) {
    rcx = arg1;
    ebx = 0;
    rsi = rcx;
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    while (rax == 0) {
        eax = ebx;
        return eax;
        rcx = 0x00400000;
        rdx = rsi;
        rdx -= rcx;
        rax = _FindPESection ();
    }
    ebx = *((rax + 0x24));
    ebx = ~ebx;
    ebx >>= 0x1f;
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402500 */
#include <stdint.h>
 
int64_t mingw_enum_import_library_names (int64_t arg1) {
    rcx = arg1;
    ebp = 0;
    ebx = ecx;
    rcx = 0x00400000;
    eax = _ValidateImageBase ();
    if (eax == 0) {
        goto label_0;
    }
    rax = *(0x0040003c);
    rsi = 0x00400000;
    edi = *((rsi + rax + 0x90));
    if (edi == 0) {
        goto label_0;
    }
    rdx = rdi;
    rcx = rsi;
    rax = _FindPESection ();
    if (rax == 0) {
        goto label_0;
    }
    rdi += rsi;
    if (rdi != 0) {
        goto label_1;
    }
    goto label_0;
    do {
        ebx--;
        rdi += 0x14;
label_1:
        edx = *((rdi + 4));
        if (edx == 0) {
            eax = *((rdi + 0xc));
            if (eax == 0) {
                goto label_2;
            }
        }
    } while (ebx > 0);
    ebp = *((rdi + 0xc));
    rbp += rsi;
label_0:
    rax = rbp;
    return rax;
label_2:
    ebp = 0;
    rax = rbp;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402590 */
#include <stdint.h>
 
int64_t mingw_get_msvcrt_handle (void) {
    rax = *(0x00407370);
    if (rax != 0) {
label_0:
        return rax;
    }
    ecx = 0;
    do {
        ebx = rcx + 1;
        rax = _mingw_enum_import_library_names ();
        if (rax == 0) {
            goto label_1;
        }
        edx = *(rax);
        if (dl != 0x4d) {
            if (dl != 0x6d) {
                goto label_2;
            }
        }
        edx = *((rax + 1));
        if (dl != 0x53) {
            if (dl != 0x73) {
                goto label_2;
            }
        }
        edx = *((rax + 2));
        if (dl != 0x56) {
            if (dl != 0x76) {
                goto label_2;
            }
        }
        edx = *((rax + 3));
        if (dl != 0x43) {
            if (dl != 0x63) {
                goto label_2;
            }
        }
        edx = *((rax + 4));
        if (dl != 0x52) {
            if (dl != 0x72) {
                goto label_2;
            }
        }
        edx = *((rax + 5));
        if (dl == 0x54) {
            goto label_3;
        }
        if (dl == 0x74) {
            goto label_3;
        }
        edx -= 0x30;
        if (dl <= 9) {
            goto label_3;
        }
label_2:
        ecx = ebx;
    } while (1);
label_3:
    rcx = rax;
    rax = GetModuleHandleA ();
    *(0x00407370) = rax;
    if (rax != 0) {
        goto label_0;
    }
label_1:
    rcx = "msvcrt.dll";
    rax = LoadLibraryW ();
    *(0x00407370) = rax;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402660 */
#include <stdint.h>
 
void fpreset (void) {
    __asm ("fninit");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402670 */
#include <stdint.h>
 
int64_t do_global_dtors (void) {
    rax = *(0x00403030);
    rax = *(rax);
    if (rax == 0) {
        goto label_0;
    }
    do {
        void (*rax)() ();
        rax = *(0x00403030);
        rdx = rax + 8;
        rax = *((rax + 8));
        *(0x00403030) = rdx;
    } while (rax != 0);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4026b0 */
#include <stdint.h>
 
int64_t do_global_ctors (void) {
    rax = *(0x00402d10);
    ebx = eax;
    if (eax == 0xffffffff) {
        goto label_1;
    }
label_0:
    if (ebx == 0) {
        goto label_2;
    }
    rsi = 0x00402d10;
    do {
        eax = ebx;
        eax = uint64_t (*rsi + rax*8)() ();
        ebx--;
    } while (ebx != 0);
label_2:
    rcx = sym___do_global_dtors;
    void (*0x401760)() ();
label_1:
    ebx = 0;
    rsi = 0x00402d10;
    while (*((rsi + rdx*8)) != 0) {
        ebx = eax;
        eax = rbx + 1;
        edx = eax;
    }
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402800 */
#include <stdint.h>
 
uint64_t report_gsfailure (int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    PULONG_PTR ImageBase;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_8h;
    int64_t var_sp_20h;
    int64_t var_sp_28h;
    int64_t var_30h;
    int64_t var_sp_38h;
    rcx = arg1;
    rsi = rcx;
    rcx = 0x004073a0;
    RtlCaptureContext (rbx, rsi);
    rbx = *(0x00407498);
    r8d = 0;
    rdx = rbp - 0x28;
    rcx = rbx;
    rax = RtlLookupFunctionEntry ();
    r9 = rax;
    if (rax == 0) {
        goto label_0;
    }
    rax = rbp - 0x20;
    r8 = rbx;
    rdx = *((rbp - 0x28));
    ecx = 0;
    rax = rbp - 0x18;
    rax = 0x004073a0;
    RtlVirtualUnwind (0);
    do {
        rax = *(0x00407498);
        ecx = 0;
        *(0x00407420) = rsi;
        *(0x00407880) = 0xc0000409;
        *(0x00407884) = 1;
        *(0x00407890) = rax;
        rax = *(0x00403070);
        *((rbp - 0x40)) = rax;
        rax = *(0x00403080);
        *((rbp - 0x38)) = rax;
        SetUnhandledExceptionFilter ();
        rcx = 0x00403040;
        UnhandledExceptionFilter ();
        rax = GetCurrentProcess ();
        edx = 0xc0000409;
        rcx = rax;
        TerminateProcess ();
        abort ();
label_0:
        rax = *((rbp + 8));
        *(0x00407498) = rax;
        rax = rbp + 8;
        *(0x00407438) = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402900 */
#include <stdint.h>
 
uint64_t mingwthr_run_key_dtors_part_0 (void) {
    rcx = 0x00407940;
    EnterCriticalSection (rbx, rsi, rdi);
    rbx = *(0x00407968);
    if (rbx == 0) {
        goto label_0;
    }
    rdi = *(sym.imp.KERNEL32.dll_TlsGetValue);
    rsi = *(sym.imp.KERNEL32.dll_GetLastError);
    do {
        ecx = *(rbx);
        rax = void (*rdi)() ();
        eax = void (*rsi)() ();
        if (eax == 0) {
            if (rbp == 0) {
                goto label_1;
            }
            rax = *((rbx + 8));
            rcx = rbp;
            void (*rax)() ();
        }
label_1:
        rbx = *((rbx + 0x10));
    } while (rbx != 0);
label_0:
    rcx = 0x00407940;
    return void (*sym.imp.KERNEL32.dll_LeaveCriticalSection)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402970 */
#include <stdint.h>
 
uint64_t w64_mingwthr_add_key_dtor (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    eax = *(0x00407920);
    ebx = 0;
    edi = ecx;
    rsi = rdx;
    while (1) {
        eax = ebx;
        return eax;
        edx = 0x18;
        ecx = 1;
        rax = calloc ();
        if (rax != 0) {
            *(rax) = edi;
            *((rax + 8)) = rsi;
            rcx = 0x00407940;
            EnterCriticalSection ();
            rax = *(0x00407968);
            rcx = 0x00407940;
            *(0x00407968) = rbp;
            *((rbp + 0x10)) = rax;
            LeaveCriticalSection ();
            eax = ebx;
            return rax;
        }
        ebx = 0xffffffff;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4029f0 */
#include <stdint.h>
 
int64_t w64_mingwthr_remove_key_dtor (int64_t arg1) {
    rcx = arg1;
    eax = *(0x00407920);
    ebx = ecx;
    if (eax == 0) {
        eax = 0;
        return eax;
    }
    rcx = 0x00407940;
    EnterCriticalSection ();
    rax = *(0x00407968);
    if (rax == 0) {
        goto label_1;
    }
    edx = *(rax);
    if (edx != ebx) {
        goto label_2;
    }
    goto label_3;
    do {
        edx = *(rcx);
        if (edx == ebx) {
            goto label_4;
        }
        rax = rcx;
label_2:
        rcx = *((rax + 0x10));
    } while (rcx != 0);
label_1:
    rcx = 0x00407940;
    eax = LeaveCriticalSection ();
    do {
        eax = 0;
        return rax;
label_4:
        rdx = *((rcx + 0x10));
        *((rax + 0x10)) = rdx;
label_0:
        free ();
        rcx = 0x00407940;
        rax = LeaveCriticalSection ();
    } while (1);
label_3:
    rdx = *((rax + 0x10));
    rcx = rax;
    *(0x00407968) = rdx;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c30 */
#include <stdint.h>
 
void free (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402ba0 */
#include <stdint.h>
 
void cexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402b90 */
#include <stdint.h>
 
void malloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c28 */
#include <stdint.h>
 
void calloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c00 */
#include <stdint.h>
 
void fprintf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402be8 */
#include <stdint.h>
 
void signal (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402c20 */
#include <stdint.h>
 
void strncmp (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402b80 */
#include <stdint.h>
 
void set_app_type (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402ba8 */
#include <stdint.h>
 
void amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402bb0 */
#include <stdint.h>
 
void initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x4015a0 */
#include <stdint.h>
 
void std::basic_ostream_char_std::char_traits_char_std::endl_char_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402bb8 */
#include <stdint.h>
 
void exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/x64_elf/subject.exe @ 0x402b98 */
#include <stdint.h>
 
void strlen (void) {
}
