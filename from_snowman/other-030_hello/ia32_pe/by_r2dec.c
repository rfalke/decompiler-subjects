/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x40126c */
#include <stdint.h>
 
void dbg_mainCRTStartup (void) {
    /* void mainCRTStartup(); */
    _set_app_type (1);
    return _mingw_CRTStartup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t dbg_mingw_CRTStartup (int32_t nRet) {
    _startupinfo start_info;
    char ** dummy_environ;
    int32_t var_4h_2;
    int32_t var_8h_2;
    int32_t var_ch_2;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    ebx = nRet;
    /* void __mingw_CRTStartup(); */
    eax = *(dbg.__dyn_tls_init_12);
    if (eax != 0) {
        void (*eax)(uint32_t, uint32_t, uint32_t) (0, 2, 0);
    }
    eax = SetUnhandledExceptionFilter_4 (dbg._gnu_exception_handler);
    dbg_cpu_features_init ();
    _fpreset ();
    *((ebp - 0x10)) = 0;
    eax = ebp - 0x10;
    eax = *(section..data);
    eax = ebp - 0xc;
    getmainargs (eax, 0x405004, eax);
    eax = *(0x405034);
    while (1) {
        _p_fmode ();
        edx = *(0x402004);
        *(eax) = edx;
        _pei386_runtime_relocator ();
        _main ();
        eax = p_environ ();
        eax = *(eax);
        *((esp + 8)) = eax;
        eax = *(0x405004);
        *((esp + 4)) = eax;
        eax = *(section..bss);
        eax = _main (eax);
        ebx = eax;
        _cexit ();
        eax = ExitProcess_4 (ebx);
        *(0x402004) = eax;
        ebx = *(sym.imp.msvcrt.dll__iob);
        eax = *((ebx + 0x10));
        setmode (eax, eax);
        eax = *(0x405034);
        eax = *((ebx + 0x30));
        setmode (eax, eax);
        eax = *(0x405034);
        eax = *((ebx + 0x50));
        setmode (eax, eax);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401110 */
#include <stdint.h>
 
int32_t dbg_gnu_exception_handler (void (*)() old_handler) {
    EXCEPTION_POINTERS * exception_data;
    void * func;
    eax = old_handler;
    /* long int _gnu_exception_handler(EXCEPTION_POINTERS * exception_data); */
    eax = *((ebp + 8));
    eax = *(eax);
    eax = *(eax);
    if (eax > 0xc0000091) {
        goto label_4;
    }
    if (eax < 0xc000008d) {
        goto label_5;
    }
label_0:
    ebx = 1;
label_3:
    *((esp + 4)) = 0;
    eax = signal (8);
    if (eax == 1) {
        goto label_6;
    }
    if (eax != 0) {
        goto label_7;
    }
    do {
label_1:
        eax = 0;
label_2:
        return eax;
label_4:
        if (eax == 0xc0000094) {
            goto label_8;
        }
        if (eax == 0xc0000096) {
            goto label_9;
        }
    } while (eax != 0xc0000093);
    goto label_0;
label_5:
    if (eax == 0xc0000005) {
        goto label_10;
    }
    if (eax != 0xc000001d) {
        goto label_1;
    }
label_9:
    *((esp + 4)) = 0;
    eax = signal (4);
    if (eax == 1) {
        goto label_11;
    }
    if (eax == 0) {
        goto label_1;
    }
    void (*eax)(uint32_t) (4);
    eax = 0xffffffff;
    goto label_2;
label_8:
    ebx = 0;
    goto label_3;
label_10:
    *((esp + 4)) = 0;
    eax = signal (0xb);
    if (eax == 1) {
        goto label_12;
    }
    if (eax == 0) {
        goto label_1;
    }
    void (*eax)(uint32_t) (0xb);
    eax = 0xffffffff;
    goto label_2;
label_7:
    void (*eax)(uint32_t) (8);
    eax = 0xffffffff;
    goto label_2;
label_11:
    *((esp + 4)) = 1;
    eax = signal (4);
    eax |= 0xffffffff;
    goto label_2;
label_12:
    *((esp + 4)) = 1;
    eax = signal (0xb);
    eax |= 0xffffffff;
    goto label_2;
label_6:
    *((esp + 4)) = 1;
    signal (8);
    if (ebx == 0) {
        eax = 0xffffffff;
        goto label_2;
    }
    eax = _fpreset ();
    eax |= 0xffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401284 */
#include <stdint.h>
 
void dbg_WinMainCRTStartup (void) {
    /* void WinMainCRTStartup(); */
    _set_app_type (2);
    return _mingw_CRTStartup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x40129c */
#include <stdint.h>
 
int32_t dbg_atexit (void) {
    void (*)() pfn;
    /* int atexit(void (*)() pfn); */
    return void (*sym.imp.msvcrt.dll_atexit)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4012ac */
#include <stdint.h>
 
int32_t dbg_onexit (void) {
    _onexit_t pfn;
    /* _onexit_t _onexit(_onexit_t pfn); */
    return void (*sym.imp.msvcrt.dll__onexit)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4012bc */
#include <stdint.h>
 
uint32_t gcc_register_frame (void) {
    char * var_4h;
    char * lpProcName;
    eax = GetModuleHandleA_4 ("libgcc_s_dw2-1.dll");
    if (eax == 0) {
        goto label_1;
    }
    eax = GetProcAddress_8 (eax, "__register_frame_info");
    do {
        if (eax != 0) {
            void (*eax)(uint32_t, uint32_t) (section..eh_frame, 0x405008);
        }
        ecx = *(0x40200c);
        if (ecx != 0) {
            eax = GetModuleHandleA_4 ("libgcj-13.dll");
            if (eax == 0) {
                goto label_2;
            }
            eax = GetProcAddress_8 (eax, "_Jv_RegisterClasses");
label_0:
            if (eax == 0) {
                goto label_3;
            }
            void (*eax)(uint32_t) (0x40200c);
        }
label_3:
        return eax;
label_1:
        eax = ___register_frame_info;
    } while (1);
label_2:
    eax = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401348 */
#include <stdint.h>
 
uint32_t gcc_deregister_frame (void) {
    char * lpProcName;
    eax = GetModuleHandleA_4 ("libgcc_s_dw2-1.dll");
    if (eax == 0) {
        goto label_0;
    }
    eax = GetProcAddress_8 (eax, "__deregister_frame_info");
    do {
        if (eax != 0) {
            void (*eax)(uint32_t) (section..eh_frame);
        }
        return eax;
label_0:
        eax = ___deregister_frame_info;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x40138c */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_bp_4h;
    char * var_4h;
    /* int main(); */
    ecx = esp + 4;
    _main ();
    eax = symstd::basic_ostream<char (sym.imp.libstdc_6.dll_std::cerr, "Hello, World!");
    ecx = eax;
    symstd::ostream::operator << (std::ostream&(*)(std::ostream&)) (sym.std::basic_ostream_char__std::char_traits_char____std::endl_char__std::char_traits_char____std::basic_ostream_char__std::char_traits_char____);
    eax = 0;
    ecx = *((ebp - 4));
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401974 */
#include <stdint.h>
 
void dbg_main (void) {
    /* void __main(); */
    ecx = *(0x405040);
    if (ecx != 0) {
        return;
    }
    *(0x405040) = 1;
    return void (*0x401928)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401438 */
#include <stdint.h>
 
void std::basic_ostream_char_std::char_traits_char_std::operator_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401440 */
#include <stdint.h>
 
void std::ostream::operator_std::ostream_std::ostream_ (void) {
    /* std::ostream::operator<<(std::ostream& (*)(std::ostream&)) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4013d4 */
#include <stdint.h>
 
void dbg_tcf_0 (void) {
    /* void __tcf_0(); */
    ecx = 0x405020;
    symstd::ios_base::Init::~Init() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401448 */
#include <stdint.h>
 
void std::ios_base::Init::Init_ (void) {
    /* std::ios_base::Init::~Init() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4013e6 */
#include <stdint.h>
 
void dbg_static_initialization_and_destruction_0 (void) {
    int32_t __initialize_p;
    int32_t __priority;
    /* void __static_initialization_and_destruction_0(int __initialize_p,int __priority); */
    if (*((ebp + 8)) == 1) {
        if (*((ebp + 0xc)) != 0xffff) {
            goto label_0;
        }
        ecx = 0x405020;
        std::ios_base::Init::Init() ();
        *(esp) = dbg.__tcf_0;
        dbg_atexit ();
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401450 */
#include <stdint.h>
 
void fcn_00401450 (void) {
    /* std::ios_base::Init::Init() */
    uint32_t (*0x406184)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401413 */
#include <stdint.h>
 
void dbg_GLOBAL_sub_I_main (void) {
    int32_t var_4h;
    /* void _GLOBAL__sub_I_main(); */
    *((esp + 4)) = 0xffff;
    *(esp) = 1;
    sym_static_initialization_and_destruction_0(int ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401458 */
#include <stdint.h>
 
int32_t dbg_dyn_tls_dtor (void) {
    HANDLE hDllHandle;
    DWORD dwReason;
    LPVOID lpreserved;
    int32_t var_4h;
    int32_t var_8h;
    /* BOOL __dyn_tls_dtor(HANDLE hDllHandle,DWORD dwReason,LPVOID lpreserved); */
    eax = *((ebp + 0xc));
    if (eax != 3) {
        if (eax != 0) {
            goto label_0;
        }
    }
    edx = *((ebp + 0x10));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    _mingw_TLScallback ();
label_0:
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x40148c */
#include <stdint.h>
 
int32_t dbg_dyn_tls_init@12 (int32_t arg_ch, _PVFV * pfunc) {
    HANDLE hDllHandle;
    LPVOID lpreserved;
    int32_t var_4h;
    int32_t var_8h;
    ebx = pfunc;
    /* BOOL __dyn_tls_init@12(HANDLE hDllHandle,DWORD dwReason,LPVOID lpreserved); */
    eax = *((ebp + 0xc));
    if (*(0x405044) != 2) {
        *(0x405044) = 2;
    }
    if (eax == 2) {
        goto label_1;
    }
    eax--;
    if (eax == 0) {
        goto label_2;
    }
    do {
label_0:
        eax = 1;
        return eax;
label_1:
        ebx = 0x407014;
    } while (ebx == 0x407014);
    do {
        eax = *(ebx);
        if (eax != 0) {
            void (*eax)() ();
        }
        ebx += 4;
    } while (ebx != 0x407014);
    eax = 1;
    return eax;
label_2:
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    *((esp + 4)) = 1;
    eax = *((ebp + 8));
    *(esp) = eax;
    _mingw_TLScallback ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x40150c */
#include <stdint.h>
 
int32_t dbg_tlregdtor (void) {
    _PVFV func;
    /* int __tlregdtor(_PVFV func); */
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401514 */
#include <stdint.h>
 
int32_t dbg_cpu_features_init (uint32_t edx, uint32_t ecx, uint32_t eax) {
    ecx = edx;
    edx = ecx;
    eax = eax;
    /* void __cpu_features_init(); */
    __asm ("pushfd");
    __asm ("pushfd");
    eax = ebx;
    edx = eax;
    eax ^= 0x200000;
    __asm ("popfd");
    __asm ("pushfd");
    __asm ("popfd");
    eax ^= edx;
    if ((eax & 0x200000) == 0) {
        goto label_1;
    }
    eax = 0;
    __asm ("cpuid");
    if (eax == 0) {
        goto label_1;
    }
    eax = 1;
    __asm ("cpuid");
    if ((dh & 1) != 0) {
        *(0x405038) |= 1;
    }
    if ((dh & 0x80) != 0) {
        *(0x405038) |= 2;
    }
    if ((edx & 0x800000) != 0) {
        *(0x405038) |= 4;
    }
    if ((edx & 0x1000000) != 0) {
        *(0x405038) |= 8;
    }
    if ((edx & 0x2000000) != 0) {
        *(0x405038) |= 0x10;
    }
    edx &= 0x4000000;
    if (edx != 0) {
        *(0x405038) |= 0x20;
    }
    if ((cl & 1) != 0) {
        *(0x405038) |= 0x40;
    }
    ch &= 0x20;
    while (1) {
        eax = 0x80000000;
        __asm ("cpuid");
        if (eax > 0x80000000) {
            eax = 0x80000001;
            __asm ("cpuid");
            if (edx < 0) {
                goto label_2;
            }
label_0:
            edx &= 0x40000000;
            if (edx == 0) {
                goto label_1;
            }
            *(0x405038) |= 0x200;
        }
label_1:
        ebx = eax;
        return eax;
        *(0x405038) |= 0x80;
    }
label_2:
    *(0x405038) |= 0x100;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4015f4 */
#include <stdint.h>
 
void dbg_fpreset (void) {
    /* void _fpreset(); */
    __asm ("fninit");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4015fc */
#include <stdint.h>
 
int32_t dbg_report_error (int32_t arg_8h, int32_t arg_ch, va_list argp) {
    char const * msg;
    size_t format;
    size_t nitems;
    FILE * stream;
    esi = argp;
    /* void __report_error(char const * msg,va_args ...); */
    esi = ebp + 0xc;
    ebx = *(sym.imp.msvcrt.dll__iob);
    ebx += 0x40;
    fwrite (ebx, 1, 0x17);
    eax = *((ebp + 8));
    vfprintf (ebx, eax, esi);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401648 */
#include <stdint.h>
 
uint32_t dbg_write_memory (void * addr, size_t len,  const * src) {
    int32_t var_40h;
    int32_t var_3ch_2;
    MEMORY_BASIC_INFORMATION b;
    int32_t var_2ch;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_bp_ch;
    int32_t var_3ch;
    int32_t var_38h;
    LPVOID var_4h_5;
    LPVOID var_8h_4;
    LPVOID var_ch_3;
    LPVOID dwSize;
    DWORD flNewProtect;
    PDWORD lpflOldProtect;
    PMEMORY_BASIC_INFORMATION lpBuffer;
    SIZE_T dwLength;
    ebx = addr;
    edx = len;
    esi = src;
    /* void __write_memory(void * addr, const * src,size_t len); */
    ebx = eax;
    esi = edx;
    if (ecx == 0) {
label_0:
        esp = ebp - 0xc;
        return;
    }
    eax = ebp - 0x38;
    *((ebp - 0x3c)) = ecx;
    eax = _VirtualQuery@12 (ebx, eax, 0x1c);
    ecx = *((ebp - 0x3c));
    if (eax == 0) {
        goto label_1;
    }
    eax = *((ebp - 0x24));
    if (eax == 0x40) {
        goto label_2;
    }
    if (eax == 4) {
        goto label_2;
    }
    edx = ebp - 0x1c;
    eax = *((ebp - 0x2c));
    eax = *((ebp - 0x38));
    *((ebp - 0x40)) = edx;
    *((ebp - 0x3c)) = ecx;
    _VirtualProtect@16 (edx, eax, 0x40);
    eax = *((ebp - 0x24));
    ecx = *((ebp - 0x3c));
    edi = ebx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    edx = *((ebp - 0x40));
    if (eax == 0x40) {
        goto label_0;
    }
    if (eax == 4) {
        goto label_0;
    }
    eax = *((ebp - 0x1c));
    eax = *((ebp - 0x2c));
    eax = *((ebp - 0x38));
    _VirtualProtect@16 (edx, eax, eax);
    esp = ebp - 0xc;
    return eax;
label_2:
    edi = ebx;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    esp = ebp - 0xc;
    return eax;
label_1:
    *((esp + 8)) = ebx;
    return dbg_report_error ("  VirtualQuery failed for %d bytes at address %p", 0x1c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x40172c */
#include <stdint.h>
 
int32_t dbg_pei386_runtime_relocator (runtime_pseudo_reloc_item_v1 * o, ptrdiff_t addr_imp, ptrdiff_t reloc_target) {
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_4h_4;
    ebx = o;
    esi = addr_imp;
    eax = reloc_target;
    /* void _pei386_runtime_relocator(); */
    eax = *(0x40503c);
    while (eax <= 7) {
label_0:
        return eax;
        *(0x40503c) = 1;
        eax = 0x403140;
        eax -= 0x403128;
    }
    ebx = 0x403128;
    if (eax <= 0xb) {
        goto label_3;
    }
    edi = *(0x403128);
    if (edi == 0) {
        esi = *(0x40312c);
        if (esi == 0) {
            goto label_4;
        }
    }
label_1:
    if (ebx >= 0x403140) {
        goto label_0;
    }
    esi = 0x400000;
    edi = ebp - 0x20;
    do {
        eax = *((ebx + 4));
        eax += esi;
        edx = *(eax);
        edx += *(ebx);
        *((ebp - 0x20)) = edx;
        ecx = 4;
        edx = edi;
        _write_memory ();
        ebx += 8;
    } while (ebx < 0x403140);
    return eax;
label_4:
    ecx = *(0x403130);
    if (ecx != 0) {
        goto label_5;
    }
    ebx = 0x403134;
label_3:
    edx = *(ebx);
    if (edx != 0) {
        goto label_1;
    }
    eax = *((ebx + 4));
    if (eax != 0) {
        goto label_1;
    }
label_5:
    eax = *((ebx + 8));
    if (eax != 1) {
        goto label_6;
    }
    ebx += 0xc;
    if (ebx >= 0x403140) {
        goto label_0;
    }
    do {
        eax = 0x400000;
        eax += *((ebx + 4));
        ecx = *(ebx);
        esi = *((ecx + 0x400000));
        edx = *((ebx + 8));
        edx &= 0xff;
        if (edx != 0x10) {
            if (edx == 0x20) {
                goto label_7;
            }
            if (edx != 8) {
                *((ebp - 0x1c)) = 0;
                eax = dbg_report_error ("  Unknown pseudo relocation bit size %d.\n", edx);
            }
            edi = *(eax);
            if ((edi & 0x80) != 0) {
                edi |= 0xffffff00;
                edi -= ecx;
                edi -= 0x400000;
                esi = edi + esi;
                *((ebp - 0x1c)) = esi;
            } else {
                edi = *(eax);
                if ((edi & 0x8000) != 0) {
                    goto label_8;
                }
            }
            edi -= ecx;
            ecx = edi;
            ecx -= 0x400000;
            ecx += esi;
            *((ebp - 0x1c)) = ecx;
            if (edx == 0x10) {
                goto label_9;
            }
            if (edx == 0x20) {
                goto label_10;
            }
            if (edx != 8) {
                goto label_2;
            }
        }
        ecx = 1;
        edx = ebp - 0x1c;
        eax = _write_memory ();
        goto label_2;
label_7:
        edx = *(eax);
        edx -= ecx;
        edx -= 0x400000;
        edx += esi;
        *((ebp - 0x1c)) = edx;
label_10:
        ecx = 4;
        edx = ebp - 0x1c;
        _write_memory ();
label_2:
        ebx += 0xc;
        eax = 0x403140;
    } while (eax > ebx);
    goto label_0;
label_8:
    edi |= 0xffff0000;
    edi -= ecx;
    edi -= 0x400000;
    esi = edi + esi;
    *((ebp - 0x1c)) = esi;
label_9:
    ecx = 2;
    edx = ebp - 0x1c;
    eax = _write_memory ();
    goto label_2;
label_6:
    dbg_report_error ("  Unknown pseudo relocation protocol version %d.\n", eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x4018f8 */
#include <stdint.h>
 
int32_t dbg_do_global_dtors (void) {
    /* void __do_global_dtors(); */
    eax = *(0x402008);
    eax = *(eax);
    if (eax == 0) {
        goto label_0;
    }
    do {
        void (*eax)() ();
        eax = *(0x402008);
        edx = eax + 4;
        *(0x402008) = edx;
        eax = *((eax + 4));
    } while (eax != 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401928 */
#include <stdint.h>
 
uint32_t dbg_do_global_ctors (uint32_t i) {
    ebx = i;
    /* void __do_global_ctors(); */
    ebx = *(0x401c60);
    if (ebx == -1) {
        goto label_1;
    }
label_0:
    if (ebx == 0) {
        goto label_2;
    }
    do {
        uint32_t (*ebx*4 + 0x401c60)() ();
        ebx--;
    } while (ebx != 0);
label_2:
    *(esp) = dbg.__do_global_dtors;
    eax = dbg_atexit ();
    return eax;
label_1:
    ebx = 0;
    while (edx != 0) {
        ebx = eax;
        eax = ebx + 1;
        edx = *((eax*4 + 0x401c60));
    }
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401998 */
#include <stdint.h>
 
int32_t dbg_mingwthr_run_key_dtors (__mingwthr_key_t volatile * keyp, LPVOID value) {
    int32_t var_8h;
    ebx = keyp;
    esi = value;
    /* void __mingwthr_run_key_dtors(); */
    eax = *(0x405048);
    if (eax == 0) {
        esp = ebp - 8;
        return eax;
    }
    EnterCriticalSection_4 (0x40504c);
    ebx = *(0x405064);
    if (ebx == 0) {
        goto label_0;
    }
    do {
        eax = *(ebx);
        eax = TlsGetValue_4 (eax);
        esi = eax;
        eax = GetLastError_0 (edx);
        if (eax == 0) {
            if (esi == 0) {
                goto label_1;
            }
            eax = *((ebx + 4));
            void (*eax)(uint32_t) (esi);
        }
label_1:
        ebx = *((ebx + 8));
    } while (ebx != 0);
label_0:
    eax = LeaveCriticalSection_4 (0x40504c);
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c14 */
#include <stdint.h>
 
void EnterCriticalSection_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c1c */
#include <stdint.h>
 
void TlsGetValue_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c24 */
#include <stdint.h>
 
void GetLastError_0 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c2c */
#include <stdint.h>
 
void LeaveCriticalSection_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401a08 */
#include <stdint.h>
 
int32_t dbg_w64_mingwthr_add_key_dtor (__mingwthr_key_t * new_key) {
    int32_t var_bp_4h;
    DWORD key;
    void (*)() dtor;
    size_t size;
    ebx = new_key;
    /* int ___w64_mingwthr_add_key_dtor(DWORD key,void (*)() dtor); */
    eax = *(0x405048);
    if (eax != 0) {
        goto label_1;
    }
    eax = 0;
    do {
label_0:
        ebx = *((ebp - 4));
        return eax;
label_1:
        eax = calloc (1, 0xc);
        ebx = eax;
        if (eax == 0) {
            goto label_2;
        }
        eax = *((ebp + 8));
        *(ebx) = eax;
        eax = *((ebp + 0xc));
        *((ebx + 4)) = eax;
        eax = EnterCriticalSection_4 (0x40504c);
        eax = *(0x405064);
        *((ebx + 8)) = eax;
        *(0x405064) = ebx;
        eax = LeaveCriticalSection_4 (eax);
        eax = 0;
    } while (1);
label_2:
    eax = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bd4 */
#include <stdint.h>
 
void calloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401a78 */
#include <stdint.h>
 
int32_t dbg_w64_mingwthr_remove_key_dtor (__mingwthr_key_t volatile * cur_key) {
    int32_t var_4h;
    DWORD key;
    eax = cur_key;
    /* int ___w64_mingwthr_remove_key_dtor(DWORD key); */
    ebx = *((ebp + 8));
    eax = *(0x405048);
    if (eax == 0) {
        eax = 0;
        ebx = *((ebp - 4));
        return eax;
    }
    EnterCriticalSection_4 (0x40504c);
    edx = *(0x405064);
    if (edx == 0) {
        goto label_1;
    }
    eax = *(edx);
    if (eax != ebx) {
        goto label_2;
    }
    goto label_3;
    do {
        ecx = *(eax);
        if (ecx == ebx) {
            goto label_4;
        }
        edx = eax;
label_2:
        eax = *((edx + 8));
    } while (eax != 0);
label_1:
    eax = LeaveCriticalSection_4 (0x40504c);
    do {
        eax = 0;
        ebx = *((ebp - 4));
        return eax;
label_4:
        ecx = *((eax + 8));
        *((edx + 8)) = ecx;
label_0:
        _free (edx);
        LeaveCriticalSection_4 (0x40504c);
    } while (1);
label_3:
    eax = *((edx + 8));
    *(0x405064) = eax;
    eax = edx;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bdc */
#include <stdint.h>
 
void free (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401b04 */
#include <stdint.h>
 
int32_t dbg_mingw_TLScallback (void) {
    HANDLE hDllHandle;
    DWORD reason;
    LPVOID reserved;
    /* WINBOOL __mingw_TLScallback(HANDLE hDllHandle,DWORD reason,LPVOID reserved); */
    eax = *((ebp + 0xc));
    if (eax == 1) {
        goto label_1;
    }
    if (eax < 1) {
        goto label_2;
    }
    if (eax != 3) {
        goto label_0;
    }
    _mingwthr_run_key_dtors ();
    do {
label_0:
        eax = 1;
        return eax;
label_2:
        _mingwthr_run_key_dtors ();
        eax = *(0x405048);
        eax--;
    } while (eax != 0);
    *(0x405048) = 0;
    eax = _DeleteCriticalSection@4 (0x40504c);
    goto label_0;
label_1:
    eax = *(0x405048);
    while (1) {
        *(0x405048) = 1;
        eax = 1;
        return eax;
        InitializeCriticalSection_4 (0x40504c);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c34 */
#include <stdint.h>
 
void DeleteCriticalSection_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c3c */
#include <stdint.h>
 
void InitializeCriticalSection_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c44 */
#include <stdint.h>
 
void register_frame_ctor (void) {
    gcc_register_frame ();
    *(esp) = sym.___gcc_deregister_frame;
    dbg_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401ba4 */
#include <stdint.h>
 
void cexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c0c */
#include <stdint.h>
 
void VirtualProtect_16 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401b94 */
#include <stdint.h>
 
void p_fmode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401be4 */
#include <stdint.h>
 
void SetUnhandledExceptionFilter_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401c04 */
#include <stdint.h>
 
void VirtualQuery_12 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bf4 */
#include <stdint.h>
 
void GetModuleHandleA_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401b84 */
#include <stdint.h>
 
void register_frame_info (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401b9c */
#include <stdint.h>
 
void p_environ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bfc */
#include <stdint.h>
 
void GetProcAddress_8 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bbc */
#include <stdint.h>
 
void fwrite (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bec */
#include <stdint.h>
 
void ExitProcess_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401b8c */
#include <stdint.h>
 
void getmainargs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401430 */
#include <stdint.h>
 
void std::basic_ostream_char_std::char_traits_char_std::endl_char_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bb4 */
#include <stdint.h>
 
void signal (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bcc */
#include <stdint.h>
 
void abort (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401b7c */
#include <stdint.h>
 
void deregister_frame_info (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bac */
#include <stdint.h>
 
void setmode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-030_hello/ia32_pe/subject.exe @ 0x401bc4 */
#include <stdint.h>
 
void vfprintf (void) {
}
