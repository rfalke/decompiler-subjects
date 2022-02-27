/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401350 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    LPSTARTUPINFOA lpStartupInfo;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    eax = GetVersion (edi, esi, ebx, eax, 0x401e84, 0x4040f0, 0xffffffffffffffff);
    edx = 0;
    dl = ah;
    *(0x405580) = edx;
    ecx = eax;
    ecx &= 0xff;
    *(0x40557c) = ecx;
    ecx <<= 8;
    ecx += edx;
    *(0x405578) = ecx;
    eax >>= 0x10;
    *(0x405574) = eax;
    esi = 0;
    eax = fcn_00401d50 (esi);
    if (eax == 0) {
        fcn_0040146b (0x1c);
    }
    *((ebp - 4)) = esi;
    fcn_00401ba5 ();
    eax = GetCommandLineA ();
    *(0x405a78) = eax;
    eax = fcn_00401a73 ();
    *(0x40555c) = eax;
    fcn_00401826 ();
    fcn_0040176d ();
    fcn_0040148f ();
    *((ebp - 0x30)) = esi;
    GetStartupInfoA (ebp - 0x5c);
    eax = fcn_00401715 ();
    *((ebp - 0x64)) = eax;
    if ((*((ebp - 0x30)) & 1) != 0) {
        eax = *((ebp - 0x2c));
    } else {
        eax = 0xa;
    }
    eax = GetModuleHandleA (esi, esi, *((ebp - 0x64)), eax, 0xa);
    eax = main (eax);
    *((ebp - 0x60)) = eax;
    fcn_004014bc (eax);
    eax = *((ebp - 0x14));
    ecx = *(eax);
    ecx = *(ecx);
    *((ebp - 0x68)) = ecx;
    fcn_00401591 (ecx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_10h_4;
    MSG * lpMsg;
    int32_t var_18h;
    int32_t var_10h_3;
    int32_t var_10h_2;
    int32_t var_10h;
    int32_t var_38h;
    /* [00] -r-x section size 12288 named .text */
    esi = *((esp + 0x24));
    LoadStringA (esi, 0x67, 0x4054f4, 0x64, edi, esi);
    LoadStringA (esi, 0x6d, 0x405490, 0x64);
    fcn_004010c0 (esi);
    eax = *((esp + 0x38));
    eax = fcn_00401150 (esi);
    if (eax == 0) {
        return eax;
    }
    eax = LoadAcceleratorsA (esi, 0x6d);
    ecx = esp + 0x10;
    esi = eax;
    eax = GetMessageA (ecx, 0, 0, 0);
    if (eax == 0) {
        goto label_0;
    }
    ebx = *(sym.imp.USER32.dll_TranslateAcceleratorA);
    ebp = *(sym.imp.USER32.dll_TranslateMessage);
    do {
        eax = *((esp + 0x10));
        eax = void (*ebx)(uint32_t, uint32_t, uint32_t, uint32_t) (eax, esi, esp + 0x10, ebp);
        if (eax == 0) {
            void (*ebp)(uint32_t) (esp + 0x10);
            DispatchMessageA (esp + 0x10);
        }
        eax = esp + 0x18;
        eax = void (*edi)(uint32_t, uint32_t, uint32_t, uint32_t) (eax, 0, 0, 0);
    } while (eax != 0);
label_0:
    eax = *((esp + 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4010c0 */
#include <stdint.h>
 
int32_t fcn_004010c0 (int32_t arg_34h) {
    WNDCLASSEXA * ARG_0;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    HCURSOR var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_34h;
    eax = *((esp + 0x34));
    eax = LoadIconA (eax, 0x6b, esi);
    eax = LoadCursorA (0, 0x7f00);
    eax = *((esp + 0x18));
    eax = LoadIconA (eax, 0x6c);
    ecx = esp + 4;
    RegisterClassExA (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401150 */
#include <stdint.h>
 
int32_t fcn_00401150 (int32_t arg_4h) {
    int32_t nCmdShow;
    eax = *((esp + 4));
    *(0x405558) = eax;
    eax = CreateWindowExA (0, 0x405490, 0x4054f4, 0xcf0000, 0x80000000, 0, 0x80000000, 0, 0, 0, eax, 0, esi);
    esi = eax;
    if (esi == 0) {
        return eax;
    }
    eax = *((esp + 0xc));
    ShowWindow (esi, eax);
    UpdateWindow (esi);
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401d50 */
#include <stdint.h>
 
int32_t fcn_00401d50 (uint32_t arg_8h) {
    eax = 0;
    al = (*((esp + 8)) == eax) ? 1 : 0;
    eax = HeapCreate (eax, 0x1000, 0);
    *(0x405948) = eax;
    if (eax != 0) {
        eax = fcn_00402a65 ();
        if (eax != 0) {
            goto label_0;
        }
        eax = HeapDestroy (*(0x405948));
    }
    eax = 0;
    return eax;
label_0:
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402a65 */
#include <stdint.h>
 
uint32_t fcn_00402a65 (void) {
    eax = HeapAlloc (*(0x405948), 0, 0x140);
    *(0x405718) = eax;
    if (eax == 0) {
        return eax;
    }
    *(0x405710) = 0;
    *(0x405714) = 0;
    *(0x40570c) = eax;
    *(0x405704) = 0x10;
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40146b */
#include <stdint.h>
 
void fcn_0040146b (int32_t arg_4h) {
    if (*(0x405564) == 1) {
        fcn_00401f5c ();
    }
    fcn_00401f95 (*((esp + 4)));
    ExitProcess (0xff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401f5c */
#include <stdint.h>
 
int32_t fcn_00401f5c (void) {
    eax = *(0x405564);
    if (eax != 1) {
        if (eax != 0) {
            goto label_0;
        }
        if (*(0x405034) != 1) {
            goto label_0;
        }
    }
    fcn_00401f95 (0xfc);
    eax = *(0x4056c0);
    if (eax != 0) {
        void (*eax)() ();
    }
    fcn_00401f95 (0xff);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401f95 */
#include <stdint.h>
 
int32_t fcn_00401f95 (int32_t arg_8h) {
    int32_t var_1a4h;
    int32_t var_a0h;
    edx = *((ebp + 8));
    ecx = 0;
    eax = 0x4050e0;
    do {
        if (edx == *(eax)) {
            goto label_0;
        }
        eax += 8;
        ecx++;
    } while (eax < 0x405170);
label_0:
    esi = ecx;
    esi <<= 3;
    if (edx == *((esi + 0x4050e0))) {
        eax = *(0x405564);
        if (eax != 1) {
            if (eax == 0) {
                if (*(0x405034) == 1) {
                    goto label_1;
                }
            }
            if (edx == 0xfc) {
                goto label_2;
            }
            eax = ebp - 0x1a4;
            eax = GetModuleFileNameA (0, eax, 0x104);
            if (eax == 0) {
                eax = ebp - 0x1a4;
                fcn_00402540 (eax, "<program name unknown>");
            }
            eax = ebp - 0x1a4;
            edi = ebp - 0x1a4;
            eax = fcn_004026b0 (eax);
            eax++;
            if (eax > 0x3c) {
                eax = fcn_004026b0 (ebp - 0x1a4);
                edi = eax;
                eax = ebp - 0x1a4;
                eax -= 0x3b;
                edi += eax;
                fcn_00403340 (edi, 0x4043d0, 3);
            }
            eax = ebp - 0xa0;
            fcn_00402540 (eax, "Runtime Error!\n\nProgram: ");
            eax = ebp - 0xa0;
            fcn_00402550 (eax, edi);
            eax = ebp - 0xa0;
            fcn_00402550 (eax, 0x4043b0);
            fcn_00402550 (ebp - 0xa0, *((esi + 0x4050e4)));
            eax = ebp - 0xa0;
            fcn_004032ae (eax, "Microsoft Visual C++ Runtime Library", 0x12010);
        } else {
label_1:
            eax = ebp + 8;
            esi = esi + 0x4050e4;
            eax = fcn_004026b0 (*(esi));
            eax = GetStdHandle (0xfffffffffffffff4, *(esi), eax);
            WriteFile (eax);
        }
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401ba5 */
#include <stdint.h>
 
uint32_t fcn_00401ba5 (void) {
    LPSTARTUPINFOA lpStartupInfo;
    uint32_t var_42h;
    int32_t var_44h;
    eax = fcn_00402630 (0x100);
    esi = eax;
    if (esi == 0) {
        fcn_00401446 (0x1b);
    }
    *(0x405960) = esi;
    *(0x405a60) = 0x20;
    eax = esi + 0x100;
    do {
        if (esi >= eax) {
            goto label_1;
        }
        *((esi + 4)) = 0;
        *(esi) |= 0xffffffff;
        *((esi + 5)) = 0xa;
        eax = *(0x405960);
        esi += 8;
        eax += 0x100;
    } while (1);
label_1:
    GetStartupInfoA (esp + 0x10);
    if (*((esp + 0x42)) == 0) {
        goto label_2;
    }
    eax = *((esp + 0x44));
    if (eax == 0) {
        goto label_2;
    }
    esi = *(eax);
    ebp = eax + 4;
    eax = 0x800;
    ebx = esi + ebp;
    if (esi >= eax) {
        esi = eax;
    }
    if (*(0x405a60) >= esi) {
        goto label_3;
    }
    edi = 0x405964;
label_0:
    eax = fcn_00402630 (0x100);
    if (eax == 0) {
        goto label_4;
    }
    *(0x405a60) += 0x20;
    *(edi) = eax;
    ecx = eax + 0x100;
    do {
        if (eax >= ecx) {
            goto label_5;
        }
        *((eax + 4)) = 0;
        *(eax) |= 0xffffffff;
        *((eax + 5)) = 0xa;
        ecx = *(edi);
        eax += 8;
        ecx += 0x100;
    } while (1);
label_5:
    edi += 4;
    if (*(0x405a60) < esi) {
        goto label_0;
    }
    goto label_3;
label_4:
    esi = *(0x405a60);
label_3:
    edi = 0;
    if (esi <= 0) {
        goto label_2;
    }
    do {
        eax = *(ebx);
        if (eax != -1) {
            cl = *(ebp);
            if ((cl & 1) == 0) {
                goto label_6;
            }
            if ((cl & 8) == 0) {
                eax = GetFileType (eax);
                if (eax == 0) {
                    goto label_6;
                }
            }
            eax = edi;
            ecx = edi;
            eax >>= 5;
            ecx &= 0x1f;
            eax = *((eax*4 + 0x405960));
            eax = eax + ecx*8;
            ecx = *(ebx);
            *(eax) = ecx;
            cl = *(ebp);
            *((eax + 4)) = cl;
        }
label_6:
        edi++;
        ebp++;
        ebx += 4;
    } while (edi < esi);
label_2:
    ebx = 0;
    do {
        eax = *(0x405960);
        esi = eax + ebx*8;
        if (*((eax + ebx*8)) == -1) {
            *((esi + 4)) = 0x81;
            if (ebx == 0) {
                eax = 0xfffffffffffffff6;
            } else {
                eax = ebx;
                eax--;
                eax = -eax;
                eax -= eax;
                eax += 0xfffffff5;
            }
            eax = GetStdHandle (eax);
            edi = eax;
            if (edi != -1) {
                eax = GetFileType (edi);
                if (eax == 0) {
                    goto label_7;
                }
                eax &= 0xff;
                *(esi) = edi;
                if (eax != 2) {
                    goto label_8;
                }
            }
label_7:
            *((esi + 4)) |= 0x40;
            goto label_9;
label_8:
            if (eax != 3) {
                goto label_9;
            }
            *((esi + 4)) |= 8;
        } else {
            *((esi + 4)) |= 0x80;
        }
label_9:
        ebx++;
    } while (ebx < 3);
    SetHandleCount (*(0x405a60));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401a73 */
#include <stdint.h>
 
int32_t fcn_00401a73 (void) {
    int32_t var_10h_3;
    int32_t var_10h_2;
    int32_t var_10h;
    int32_t var_34h;
    eax = *(0x4056bc);
    ebp = *(sym.imp.KERNEL32.dll_GetEnvironmentStringsW);
    ebx = 0;
    esi = 0;
    edi = 0;
    if (eax == ebx) {
        eax = void (*ebp)() ();
        esi = eax;
        if (esi != ebx) {
            *(0x4056bc) = 1;
            goto label_2;
        }
        eax = GetEnvironmentStrings ();
        edi = eax;
        if (edi == ebx) {
            goto label_3;
        }
        *(0x4056bc) = 2;
        goto label_4;
    }
    if (eax != 1) {
        goto label_5;
    }
label_2:
    if (esi == ebx) {
        eax = void (*ebp)() ();
        esi = eax;
        if (esi == ebx) {
            goto label_3;
        }
    }
    eax = esi;
    if (*(esi) == bx) {
        goto label_6;
    }
    do {
label_0:
        eax++;
        eax++;
    } while (*(eax) != bx);
    eax++;
    eax++;
    if (*(eax) != bx) {
        goto label_0;
    }
label_6:
    eax -= esi;
    eax >>= 1;
    eax++;
    eax = WideCharToMultiByte (ebx, ebx, esi, eax, ebx, ebx, ebx, ebx);
    if (ebp != ebx) {
        eax = fcn_00402630 (ebp);
        *((esp + 0x10)) = eax;
        if (eax == ebx) {
            goto label_7;
        }
        eax = void (*edi)(uint32_t, uint32_t, uint32_t, uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t) (ebx, ebx, esi, *((esp + 0x24)), eax, ebp, ebx, ebx);
        if (eax == 0) {
            fcn_0040250a (*((esp + 0x10)));
        }
        ebx = *((esp + 0x10));
    }
label_7:
    FreeEnvironmentStringsW (ebx);
    eax = ebx;
    goto label_8;
label_5:
    if (eax != 2) {
        goto label_3;
    }
label_4:
    if (edi == ebx) {
        eax = GetEnvironmentStrings ();
        edi = eax;
        if (edi == ebx) {
            goto label_3;
        }
    }
    eax = edi;
    if (*(edi) == bl) {
        goto label_9;
    }
    do {
label_1:
        eax++;
    } while (*(eax) != bl);
    eax++;
    if (*(eax) != bl) {
        goto label_1;
    }
label_9:
    eax -= edi;
    eax++;
    eax = fcn_00402630 (ebp);
    esi = eax;
    if (esi == ebx) {
        esi = 0;
    } else {
        fcn_00402730 (esi, edi, ebp);
    }
    FreeEnvironmentStringsA (edi);
    eax = esi;
    goto label_8;
label_3:
    eax = 0;
label_8:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401826 */
#include <stdint.h>
 
int32_t fcn_00401826 (void) {
    int32_t var_8h;
    int32_t var_4h;
    ebx = 0;
    if (*(0x405a68) == ebx) {
        fcn_004024ee ();
    }
    esi = 0x4055b8;
    GetModuleFileNameA (ebx, esi, 0x104);
    eax = *(0x405a78);
    *(0x4055a0) = esi;
    edi = esi;
    if (*(eax) != bl) {
        edi = eax;
    }
    fcn_004018bf (edi, ebx, ebx, ebp - 4, ebp - 8);
    eax = *((ebp - 8));
    ecx = *((ebp - 4));
    eax = fcn_00402630 (eax + ecx*4);
    esi = eax;
    if (esi == ebx) {
        fcn_00401446 (8);
    }
    eax = *((ebp - 4));
    fcn_004018bf (edi, esi, esi + eax*4, ebp - 4, ebp - 8);
    eax = *((ebp - 4));
    eax--;
    *(0x405588) = esi;
    *(0x405584) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40176d */
#include <stdint.h>
 
uint32_t fcn_0040176d (void) {
    ebx = 0;
    if (*(0x405a68) == ebx) {
        fcn_004024ee ();
    }
    esi = *(0x40555c);
    edi = 0;
    do {
        al = *(esi);
        if (al == bl) {
            goto label_0;
        }
        if (al != 0x3d) {
            edi++;
        }
        fcn_004026b0 (esi);
        esi = esi + eax + 1;
    } while (1);
label_0:
    eax = fcn_00402630 (edi*4 + 4);
    esi = eax;
    *(0x405590) = esi;
    if (esi == ebx) {
        fcn_00401446 (9);
    }
    edi = *(0x40555c);
    if (*(edi) == bl) {
        goto label_1;
    }
    do {
        eax = fcn_004026b0 (edi);
        ebp++;
        if (*(edi) != 0x3d) {
            eax = fcn_00402630 (ebp);
            *(esi) = eax;
            if (eax == ebx) {
                fcn_00401446 (9);
            }
            fcn_00402540 (*(esi), edi);
            esi += 4;
        }
        edi += ebp;
    } while (*(edi) != bl);
label_1:
    fcn_0040250a (*(0x40555c));
    *(0x40555c) = ebx;
    *(esi) = ebx;
    *(0x405a64) = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40148f */
#include <stdint.h>
 
int32_t fcn_0040148f (void) {
    eax = *(0x405a74);
    if (eax != 0) {
        void (*eax)() ();
    }
    fcn_00401577 (0x405008, 0x405010);
    fcn_00401577 (section..data, 0x405004);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401577 */
#include <stdint.h>
 
int32_t fcn_00401577 (int32_t arg_8h, uint32_t arg_ch) {
    esi = *((esp + 8));
    do {
        if (esi >= *((esp + 0xc))) {
            goto label_0;
        }
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi += 4;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401715 */
#include <stdint.h>
 
uint32_t fcn_00401715 (void) {
    if (*(0x405a68) == 0) {
        fcn_004024ee ();
    }
    esi = *(0x405a78);
    al = *(esi);
    if (al != 0x22) {
        goto label_2;
    }
    do {
label_0:
        al = *((esi + 1));
        esi++;
        if (al == 0x22) {
            goto label_3;
        }
        if (al == 0) {
            goto label_3;
        }
        eax = (int32_t) al;
        eax = fcn_004020e8 (eax);
    } while (eax == 0);
    esi++;
    goto label_0;
label_3:
    if (*(esi) != 0x22) {
        goto label_4;
    }
label_1:
    esi++;
    goto label_4;
label_2:
    if (al <= 0x20) {
        goto label_4;
    }
    do {
        esi++;
    } while (*(esi) > 0x20);
label_4:
    al = *(esi);
    if (al == 0) {
        goto label_5;
    }
    if (al <= 0x20) {
        goto label_1;
    }
label_5:
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4014bc */
#include <stdint.h>
 
void fcn_004014bc (int32_t arg_ch) {
    fcn_004014de (*((esp + 0xc)), 0, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4014de */
#include <stdint.h>
 
uint32_t fcn_004014de (UINT uExitCode, int32_t arg_14h_2, uint32_t arg_ch, int32_t arg_14h) {
    edi = 1;
    if (*(0x4055b0) == edi) {
        eax = GetCurrentProcess (*((esp + 8)));
        TerminateProcess (eax);
    }
    ebx = *((esp + 0x14));
    *(0x4055ac) = edi;
    *(0x4055a8) = bl;
    if (*((esp + 0xc)) != 0) {
        goto label_0;
    }
    eax = *(0x405a70);
    if (eax == 0) {
        goto label_1;
    }
    ecx = *(0x405a6c);
    esi = ecx - 4;
    if (esi < eax) {
        goto label_2;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi -= 4;
    } while (esi >= *(0x405a70));
label_2:
label_1:
    fcn_00401577 (0x405014, 0x405018);
label_0:
    fcn_00401577 (0x40501c, 0x405020);
    if (ebx == 0) {
        *(0x4055b0) = edi;
        ExitProcess (*((esp + 8)));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401591 */
#include <stdint.h>
 
uint32_t fcn_00401591 (int32_t arg_8h, struct _EXCEPTION_POINTERS * ExceptionInfo) {
    eax = fcn_004016d2 (*((ebp + 8)));
    if (eax == 0) {
        goto label_0;
    }
    ebx = *((eax + 8));
    if (ebx == 0) {
        goto label_0;
    }
    if (ebx == 5) {
        *((eax + 8)) = 0;
        eax = 1;
        goto label_1;
    }
    if (ebx == 1) {
        goto label_2;
    }
    ecx = *(0x4055b4);
    *((ebp + 8)) = ecx;
    ecx = *((ebp + 0xc));
    *(0x4055b4) = ecx;
    ecx = *((eax + 4));
    if (ecx != 8) {
        goto label_3;
    }
    ecx = *(0x4050b0);
    edx = *(0x4050b4);
    edx += ecx;
    if (ecx >= edx) {
        goto label_4;
    }
    esi = ecx * 3;
    edx -= ecx;
    esi = esi*4 + 0x405040;
    do {
        *(esi) = 0;
        esi += 0xc;
        edx--;
    } while (edx != 0);
label_4:
    eax = *(eax);
    esi = *(0x4050bc);
    if (eax == 0xc000008e) {
        *(0x4050bc) = 0x83;
    } else {
        if (eax == 0xc0000090) {
            *(0x4050bc) = 0x81;
        } else {
            if (eax == 0xc0000091) {
                *(0x4050bc) = 0x84;
            } else {
                if (eax == 0xc0000093) {
                    *(0x4050bc) = 0x85;
                } else {
                    if (eax == 0xc000008d) {
                        *(0x4050bc) = 0x82;
                    } else {
                        if (eax == 0xc000008f) {
                            *(0x4050bc) = 0x86;
                        } else {
                            if (eax != 0xc0000092) {
                                goto label_5;
                            }
                            *(0x4050bc) = 0x8a;
                        }
                    }
                }
            }
        }
    }
label_5:
    void (*ebx)(uint32_t, uint32_t*) (8, *(0x4050bc));
    *(0x4050bc) = esi;
    goto label_6;
label_3:
    *((eax + 8)) = 0;
    void (*ebx)(uint32_t) (ecx);
label_6:
    eax = *((ebp + 8));
    *(0x4055b4) = eax;
label_2:
    eax |= 0xffffffff;
    goto label_1;
label_0:
    UnhandledExceptionFilter (*((ebp + 0xc)));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4014cd */
#include <stdint.h>
 
void fcn_004014cd (int32_t arg_ch) {
    fcn_004014de (*((esp + 0xc)), 1, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4016d2 */
#include <stdint.h>
 
int32_t fcn_004016d2 (int32_t arg_4h) {
    edx = *((esp + 4));
    ecx = *(0x4050b8);
    eax = 0x405038;
    if (*(0x405038) == edx) {
        goto label_0;
    }
    esi = ecx * 3;
    esi = esi*4 + 0x405038;
    do {
        eax += 0xc;
        if (eax >= esi) {
            goto label_0;
        }
    } while (*(eax) != edx);
label_0:
    ecx *= 3;
    ecx = ecx*4 + 0x405038;
    if (eax < ecx) {
        if (*(eax) == edx) {
            goto label_1;
        }
    }
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4024ee */
#include <stdint.h>
 
void fcn_004024ee (void) {
    if (*(0x405a68) == 0) {
        fcn_0040212a (0xfffffffffffffffd);
        *(0x405a68) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40212a */
#include <stdint.h>
 
uint32_t fcn_0040212a (int32_t arg_8h) {
    LPCPINFO lpCPInfo;
    uint32_t var_12h;
    int32_t var_11h;
    uint32_t var_4h;
    eax = fcn_004022c3 (*((ebp + 8)));
    esi = eax;
    *((ebp + 8)) = esi;
    if (esi == *(0x40571c)) {
        goto label_3;
    }
    ebx = 0;
    if (esi == ebx) {
        goto label_4;
    }
    edx = 0;
    eax = 0x405178;
    do {
        if (*(eax) == esi) {
            goto label_5;
        }
        eax += 0x30;
        edx++;
    } while (eax < 0x405268);
    eax = GetCPInfo (esi, ebp - 0x18);
    if (eax != 1) {
        goto label_6;
    }
    eax = 0;
    ecx = 0x40;
    edi = 0x405840;
    *(0x40571c) = esi;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    *(0x405944) = ebx;
    if (*((ebp - 0x18)) <= 1) {
        goto label_7;
    }
    if (*((ebp - 0x12)) == 0) {
        goto label_8;
    }
    ecx = ebp - 0x11;
label_2:
    dl = *(ecx);
    if (dl == 0) {
        goto label_8;
    }
    eax = *((ecx - 1));
    edx = (int32_t) dl;
    do {
        if (eax > edx) {
            goto label_9;
        }
        *((eax + 0x405841)) |= 4;
        eax++;
    } while (1);
label_5:
    eax = 0;
    ecx = 0x40;
    edi = 0x405840;
    memset (edi, eax, ecx);
    esi = edx * 3;
    *((ebp - 4)) = ebx;
    esi <<= 4;
    *(es:edi) = al;
    es:edi++;
    ebx = esi + 0x405188;
label_1:
    ecx = ebx;
    if (*(ebx) == 0) {
        goto label_10;
    }
label_0:
    dl = *((ecx + 1));
    if (dl == 0) {
        goto label_10;
    }
    eax = *(ecx);
    edi = (int32_t) dl;
    if (eax > edi) {
        goto label_11;
    }
    edx = *((ebp - 4));
    dl = *((edx + 0x405170));
    do {
        *((eax + 0x405841)) |= dl;
        eax++;
    } while (eax <= edi);
label_11:
    ecx++;
    ecx++;
    if (*(ecx) != 0) {
        goto label_0;
    }
label_10:
    *((ebp - 4))++;
    ebx += 8;
    if (*((ebp - 4)) < 4) {
        goto label_1;
    }
    eax = *((ebp + 8));
    *(0x40572c) = 1;
    *(0x40571c) = eax;
    eax = fcn_0040230d (eax);
    esi = esi + 0x40517c;
    edi = 0x405720;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(0x405944) = eax;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    goto label_12;
label_9:
    ecx++;
    ecx++;
    if (*((ecx - 1)) != 0) {
        goto label_2;
    }
label_8:
    eax = 1;
    do {
        *((eax + 0x405841)) |= 8;
        eax++;
    } while (eax < 0xff);
    eax = fcn_0040230d (esi);
    *(0x405944) = eax;
    *(0x40572c) = 1;
    goto label_13;
label_7:
    *(0x40572c) = ebx;
label_13:
    eax = 0;
    edi = 0x405720;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    goto label_12;
label_6:
    if (*(0x4056c4) != ebx) {
label_4:
        fcn_00402340 ();
label_12:
        eax = fcn_00402369 ();
label_3:
        eax = 0;
    } else {
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4020e8 */
#include <stdint.h>
 
void fcn_004020e8 (int32_t arg_ch) {
    fcn_004020f9 (*((esp + 0xc)), 0, 4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4020f9 */
#include <stdint.h>
 
uint32_t fcn_004020f9 (int32_t arg_4h, uint32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 4));
    cl = *((esp + 0xc));
    if ((*((eax + 0x405841)) & cl) == 0) {
        if (*((esp + 8)) != 0) {
            eax = *((eax*2 + 0x40528a));
            eax &= *((esp + 8));
        } else {
            eax = 0;
        }
        if (eax != 0) {
            goto label_0;
        }
        return eax;
    }
label_0:
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4026b0 */
#include <stdint.h>
 
int32_t fcn_004026b0 (int32_t arg_4h) {
    ecx = *((esp + 4));
    if ((ecx & 3) == 0) {
        goto label_0;
    }
    do {
        al = *(ecx);
        ecx++;
        if (al == 0) {
            goto label_1;
        }
    } while ((ecx & 3) != 0);
    eax += 0;
    do {
label_0:
        eax = *(ecx);
        edx = 0x7efefeff;
        edx += eax;
        eax ^= 0xffffffff;
        eax ^= edx;
        ecx += 4;
    } while ((eax & 0x81010100) == 0);
    eax = *((ecx - 4));
    if (al != 0) {
        if (ah != 0) {
            if ((eax & 0xff0000) != 0) {
                if ((eax & 0xff000000) != 0) {
                    goto label_0;
                }
label_1:
                eax = ecx - 1;
                ecx = *((esp + 4));
                eax -= ecx;
                return eax;
            }
            eax = ecx - 2;
            ecx = *((esp + 4));
            eax -= ecx;
            return eax;
        }
        eax = ecx - 3;
        ecx = *((esp + 4));
        eax -= ecx;
        return eax;
    }
    eax = ecx - 4;
    ecx = *((esp + 4));
    eax -= ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402630 */
#include <stdint.h>
 
void fcn_00402630 (int32_t arg_8h) {
    fcn_00402642 (*((esp + 8)), *(0x4056fc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402642 */
#include <stdint.h>
 
uint32_t fcn_00402642 (int32_t arg_4h_2, uint32_t arg_4h, uint32_t arg_8h) {
    if (*((esp + 4)) > 0xffffffe0) {
        goto label_0;
    }
    do {
        eax = fcn_0040266e (*((esp + 4)));
        if (eax != 0) {
            goto label_1;
        }
        if (*((esp + 8)) == eax) {
            goto label_1;
        }
        eax = fcn_004037d6 (*((esp + 4)));
    } while (eax != 0);
label_0:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401446 */
#include <stdint.h>
 
void fcn_00401446 (int32_t arg_4h) {
    if (*(0x405564) == 1) {
        fcn_00401f5c ();
    }
    fcn_00401f95 (*((esp + 4)));
    uint32_t (*0x405030)(uint32_t) (0xff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402540 */
#include <stdint.h>
 
int32_t fcn_00402540 (int32_t arg_8h, int32_t arg_ch) {
    edi = *((esp + 8));
    ecx = *((esp + 0xc));
    if ((ecx & 3) == 0) {
        goto label_1;
    }
    do {
        dl = *(ecx);
        ecx++;
        if (dl == 0) {
            goto label_2;
        }
        *(edi) = dl;
        edi++;
    } while ((ecx & 3) != 0);
    while ((eax & 0x81010100) == 0) {
label_0:
        *(edi) = edx;
        edi += 4;
label_1:
        edx = 0x7efefeff;
        eax = *(ecx);
        edx += eax;
        eax ^= 0xffffffff;
        eax ^= edx;
        edx = *(ecx);
        ecx += 4;
    }
    if (dl != 0) {
        if (dh != 0) {
            if ((edx & 0xff0000) != 0) {
                if ((edx & 0xff000000) != 0) {
                    goto label_0;
                }
                *(edi) = edx;
                eax = *((esp + 8));
                return eax;
            }
            *(edi) = dx;
            eax = *((esp + 8));
            *((edi + 2)) = 0;
            return eax;
        }
        *(edi) = dx;
        eax = *((esp + 8));
        return eax;
    }
label_2:
    *(edi) = dl;
    eax = *((esp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40250a */
#include <stdint.h>
 
uint32_t fcn_0040250a (int32_t arg_8h) {
    esi = *((esp + 8));
    if (esi != 0) {
        eax = fcn_00402aa3 (esi);
        if (eax != 0) {
            fcn_00402ace (eax);
            return eax;
        }
        HeapFree (*(0x405948), 0);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402aa3 */
#include <stdint.h>
 
int32_t fcn_00402aa3 (int32_t arg_4h) {
    eax = *(0x405714);
    ecx = eax * 5;
    eax = *(0x405718);
    ecx = eax + ecx*4;
    do {
        if (eax >= ecx) {
            goto label_0;
        }
        edx = *((esp + 4));
        edx -= *((eax + 0xc));
        if (edx < 0x100000) {
            goto label_1;
        }
        eax += 0x14;
    } while (1);
label_0:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402ace */
#include <stdint.h>
 
int32_t fcn_00402ace (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_fh) {
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    edx = *((ebp + 0xc));
    ecx = *((ebp + 8));
    eax = *((ecx + 0x10));
    esi = edx;
    esi -= *((ecx + 0xc));
    ebx = *((edx - 4));
    edx += 0xfffffffc;
    esi >>= 0xf;
    ecx = esi;
    edi = *((edx - 4));
    ecx *= 0x204;
    ebx--;
    *((ebp - 4)) = edi;
    ecx = ecx + eax + 0x144;
    *((ebp - 0xc)) = ebx;
    *((ebp - 0x10)) = ecx;
    ecx = *((ebx + edx));
    *((ebp - 8)) = ecx;
    if ((cl & 1) == 0) {
        ecx >>= 4;
        ecx--;
        edi = 0x3f;
        *((ebp + 0xc)) = ecx;
        if (ecx > edi) {
            *((ebp + 0xc)) = edi;
        }
        ecx = *((ebx + edx + 4));
        if (ecx == *((ebx + edx + 8))) {
            ecx = *((ebp + 0xc));
            if (ecx < 0x20) {
                edi = 0x80000000;
                edi >>= cl;
                ecx = ecx + eax + 4;
                edi = ~edi;
                *((eax + esi*4 + 0x44)) &= edi;
                *(ecx)--;
                if (*(ecx) != 0) {
                    goto label_0;
                }
                ecx = *((ebp + 8));
                *(ecx) &= edi;
            } else {
                ecx += 0xffffffe0;
                edi = 0x80000000;
                edi >>= cl;
                ecx = *((ebp + 0xc));
                ecx = ecx + eax + 4;
                edi = ~edi;
                *((eax + esi*4 + 0xc4)) &= edi;
                *(ecx)--;
                if (*(ecx) != 0) {
                    goto label_0;
                }
                ecx = *((ebp + 8));
                *((ecx + 4)) &= edi;
            }
        }
label_0:
        ecx = *((ebx + edx + 8));
        edi = *((ebx + edx + 4));
        *((ecx + 4)) = edi;
        ecx = *((ebx + edx + 4));
        edi = *((ebx + edx + 8));
        ebx += *((ebp - 8));
        *((ecx + 8)) = edi;
        *((ebp - 0xc)) = ebx;
    }
    edi = ebx;
    edi >>= 4;
    edi--;
    if (edi > 0x3f) {
        edi = 0x3f;
    }
    ecx = *((ebp - 4));
    ecx &= 1;
    *((ebp - 0x14)) = ecx;
    if (ecx == 0) {
        edx -= *((ebp - 4));
        ecx = *((ebp - 4));
        ecx >>= 4;
        *((ebp - 8)) = edx;
        ecx--;
        edx = 0x3f;
        *((ebp + 0xc)) = ecx;
        if (ecx > edx) {
            *((ebp + 0xc)) = edx;
            ecx = edx;
        }
        ebx += *((ebp - 4));
        edi = ebx;
        *((ebp - 0xc)) = ebx;
        edi >>= 4;
        edi--;
        if (edi > edx) {
            edi = edx;
        }
        if (ecx != edi) {
            ecx = *((ebp - 8));
            edx = *((ecx + 4));
            if (edx == *((ecx + 8))) {
                ecx = *((ebp + 0xc));
                if (ecx < 0x20) {
                    edx = 0x80000000;
                    edx >>= cl;
                    ecx = ecx + eax + 4;
                    edx = ~edx;
                    *((eax + esi*4 + 0x44)) &= edx;
                    *(ecx)--;
                    if (*(ecx) != 0) {
                        goto label_1;
                    }
                    ecx = *((ebp + 8));
                    *(ecx) &= edx;
                } else {
                    ecx += 0xffffffe0;
                    edx = 0x80000000;
                    edx >>= cl;
                    ecx = *((ebp + 0xc));
                    ecx = ecx + eax + 4;
                    edx = ~edx;
                    *((eax + esi*4 + 0xc4)) &= edx;
                    *(ecx)--;
                    if (*(ecx) != 0) {
                        goto label_1;
                    }
                    ecx = *((ebp + 8));
                    *((ecx + 4)) &= edx;
                }
            }
label_1:
            ecx = *((ebp - 8));
            edx = *((ecx + 8));
            ecx = *((ecx + 4));
            *((edx + 4)) = ecx;
            ecx = *((ebp - 8));
            edx = *((ecx + 4));
            ecx = *((ecx + 8));
            *((edx + 8)) = ecx;
        }
        edx = *((ebp - 8));
    }
    if (*((ebp - 0x14)) == 0) {
        if (*((ebp + 0xc)) == edi) {
            goto label_2;
        }
    }
    ecx = *((ebp - 0x10));
    ecx = ecx + edi*8;
    ecx = *((ecx + 4));
    *((edx + 4)) = ecx;
    ecx = *((ebp - 0x10));
    ecx = ecx + edi*8;
    *((edx + 8)) = ecx;
    *((ecx + 4)) = edx;
    ecx = *((edx + 4));
    *((ecx + 8)) = edx;
    ecx = *((edx + 4));
    if (ecx == *((edx + 8))) {
        cl = *((edi + eax + 4));
        *((ebp + 0xf)) = cl;
        cl++;
        *((edi + eax + 4)) = cl;
        if (cl < 0) {
            if (*((ebp + 0xf)) == 0) {
                ebx = 0x80000000;
                ecx = edi;
                ebx >>= cl;
                ecx = *((ebp + 8));
                *(ecx) |= ebx;
            }
            ebx = 0x80000000;
            ecx = edi;
            ebx >>= cl;
            eax = eax + esi*4 + 0x44;
            *(eax) |= ebx;
        } else {
            if (*((ebp + 0xf)) == 0) {
                ecx = edi - 0x20;
                ebx = 0x80000000;
                ebx >>= cl;
                ecx = *((ebp + 8));
                *((ecx + 4)) |= ebx;
            }
            ecx = edi - 0x20;
            edi = 0x80000000;
            edi >>= cl;
            eax = eax + esi*4 + 0xc4;
            *(eax) |= edi;
        }
        ebx = *((ebp - 0xc));
    }
label_2:
    eax = *((ebp - 0x10));
    *(edx) = ebx;
    *((ebx + edx - 4)) = ebx;
    *(eax)--;
    if (*(eax) == 0) {
        eax = *(0x405710);
        if (eax != 0) {
            ecx = *(0x405708);
            ecx <<= 0xf;
            ecx += *((eax + 0xc));
            ebx = 0x8000;
            VirtualFree (ecx, ebx, 0x4000);
            ecx = *(0x405708);
            eax = *(0x405710);
            edx = 0x80000000;
            edx >>= cl;
            *((eax + 8)) |= edx;
            eax = *(0x405710);
            ecx = *(0x405708);
            eax = *((eax + 0x10));
            *((eax + ecx*4 + 0xc4)) = 0;
            eax = *(0x405710);
            eax = *((eax + 0x10));
            *((eax + 0x43))--;
            eax = *(0x405710);
            ecx = *((eax + 0x10));
            if (*((ecx + 0x43)) == 0) {
                *((eax + 4)) &= 0xfffffffe;
                eax = *(0x405710);
            }
            if (*((eax + 8)) == -1) {
                void (*edi)(uint32_t*, uint32_t, uint32_t) (*((eax + 0xc)), 0, ebx);
                eax = *(0x405710);
                HeapFree (*(0x405948), 0, *((eax + 0x10)));
                eax = *(0x405714);
                edx = *(0x405718);
                eax *= 5;
                eax <<= 2;
                ecx = eax;
                eax = *(0x405710);
                ecx -= eax;
                fcn_00403800 (eax, eax + 0x14, ecx + edx - 0x14);
                eax = *((ebp + 8));
                *(0x405714)--;
                if (eax > *(0x405710)) {
                    eax -= 0x14;
                }
                ecx = *(0x405718);
                *(0x40570c) = ecx;
            }
        } else {
            eax = *((ebp + 8));
        }
        *(0x405710) = eax;
        *(0x405708) = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4018bf */
#include <stdint.h>
 
int32_t fcn_004018bf (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h) {
    ecx = *((ebp + 0x18));
    eax = *((ebp + 0x14));
    *(ecx) = 0;
    esi = *((ebp + 0x10));
    edi = *((ebp + 0xc));
    *(eax) = 1;
    eax = *((ebp + 8));
    if (edi != 0) {
        *(edi) = esi;
        edi += 4;
        *((ebp + 0xc)) = edi;
    }
    if (*(eax) != 0x22) {
        goto label_3;
    }
    do {
label_0:
        dl = *((eax + 1));
        eax++;
        if (dl == 0x22) {
            goto label_4;
        }
        if (dl == 0) {
            goto label_4;
        }
        edx = (int32_t) dl;
        if ((*((edx + 0x405841)) & 4) != 0) {
            *(ecx)++;
            if (esi == 0) {
                goto label_5;
            }
            dl = *(eax);
            *(esi) = dl;
            esi++;
            eax++;
        }
label_5:
        *(ecx)++;
    } while (esi == 0);
    dl = *(eax);
    *(esi) = dl;
    esi++;
    goto label_0;
label_4:
    *(ecx)++;
    if (esi != 0) {
        *(esi) = 0;
        esi++;
    }
    if (*(eax) != 0x22) {
        goto label_6;
    }
    eax++;
    goto label_6;
    do {
label_3:
        *(ecx)++;
        if (esi != 0) {
            dl = *(eax);
            *(esi) = dl;
            esi++;
        }
        dl = *(eax);
        eax++;
        ebx = (int32_t) dl;
        if ((*((ebx + 0x405841)) & 4) != 0) {
            *(ecx)++;
            if (esi != 0) {
                bl = *(eax);
                *(esi) = bl;
                esi++;
            }
            eax++;
        }
        if (dl == 0x20) {
            goto label_7;
        }
        if (dl == 0) {
            goto label_8;
        }
    } while (dl != 9);
label_7:
    if (dl == 0) {
label_8:
        eax--;
    } else {
        if (esi == 0) {
            goto label_6;
        }
        *((esi - 1)) = 0;
    }
label_6:
    *((ebp + 0x18)) = 0;
label_2:
    if (*(eax) == 0) {
        goto label_9;
    }
    do {
        dl = *(eax);
        if (dl != 0x20) {
            if (dl != 9) {
                goto label_10;
            }
        }
        eax++;
    } while (1);
label_10:
    if (*(eax) == 0) {
        goto label_9;
    }
    if (edi != 0) {
        *(edi) = esi;
        edi += 4;
        *((ebp + 0xc)) = edi;
    }
    edx = *((ebp + 0x14));
    *(edx)++;
label_1:
    *((ebp + 8)) = 1;
    ebx = 0;
    do {
        if (*(eax) != 0x5c) {
            goto label_11;
        }
        eax++;
        ebx++;
    } while (1);
label_11:
    if (*(eax) == 0x22) {
        if ((bl & 1) == 0) {
            edi = 0;
            if (*((ebp + 0x18)) != edi) {
                edx = eax + 1;
                if (*((eax + 1)) == 0x22) {
                    eax = edx;
                }
            } else {
                *((ebp + 8)) = edi;
            }
            edi = *((ebp + 0xc));
            edx = 0;
            dl = (*((ebp + 0x18)) == edx) ? 1 : 0;
            *((ebp + 0x18)) = edx;
        }
        ebx >>= 1;
    }
    edx = ebx;
    ebx--;
    if (edx == 0) {
        goto label_12;
    }
    ebx++;
    do {
        if (esi != 0) {
            *(esi) = 0x5c;
            esi++;
        }
        *(ecx)++;
        ebx--;
    } while (ebx != 0);
label_12:
    dl = *(eax);
    if (dl != 0) {
        if (*((ebp + 0x18)) == 0) {
            if (dl == 0x20) {
                goto label_13;
            }
            if (dl == 9) {
                goto label_13;
            }
        }
        if (*((ebp + 8)) != 0) {
            if (esi != 0) {
                ebx = (int32_t) dl;
                if ((*((ebx + 0x405841)) & 4) != 0) {
                    *(esi) = dl;
                    esi++;
                    eax++;
                    *(ecx)++;
                }
                dl = *(eax);
                *(esi) = dl;
                esi++;
            } else {
                edx = (int32_t) dl;
                if ((*((edx + 0x405841)) & 4) == 0) {
                    goto label_14;
                }
                eax++;
                *(ecx)++;
            }
label_14:
            *(ecx)++;
        }
        eax++;
        goto label_1;
    }
label_13:
    if (esi != 0) {
        *(esi) = 0;
        esi++;
    }
    *(ecx)++;
    goto label_2;
label_9:
    if (edi != 0) {
        *(edi) = 0;
    }
    eax = *((ebp + 0x14));
    esi = edi;
    ebx = edi;
    *(eax)++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402730 */
#include <stdint.h>
 
int32_t fcn_00402730 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edi = *((ebp + 8));
    eax = ecx;
    edx = ecx;
    eax += esi;
    if (edi > esi) {
        if (edi < eax) {
            goto label_0;
        }
    }
    if ((edi & 3) != 0) {
        goto label_1;
    }
    ecx >>= 2;
    edx &= 3;
    if (ecx < 8) {
        goto label_2;
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    /* switch table (4 cases) at 0x402878 */
label_1:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x40280c */
label_2:
    eax = *((esi + ecx*4 - 0x1c));
    *((edi + ecx*4 - 0x1c)) = eax;
    eax = *((esi + ecx*4 - 0x18));
    *((edi + ecx*4 - 0x18)) = eax;
    eax = *((esi + ecx*4 - 0x14));
    *((edi + ecx*4 - 0x14)) = eax;
    eax = *((esi + ecx*4 - 0x10));
    *((edi + ecx*4 - 0x10)) = eax;
    eax = *((esi + ecx*4 - 0xc));
    *((edi + ecx*4 - 0xc)) = eax;
    eax = *((esi + ecx*4 - 8));
    *((edi + ecx*4 - 8)) = eax;
    eax = *((esi + ecx*4 - 4));
    *((edi + ecx*4 - 4)) = eax;
    eax = ecx*4;
    esi += eax;
    edi += eax;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
label_0:
    esi = ecx + esi - 4;
    edi = ecx + edi - 4;
    if ((edi & 3) == 0) {
        ecx >>= 2;
        edx &= 3;
        if (ecx >= 8) {
            __asm ("std");
            *(es:edi) = *(esi);
            ecx--;
            esi += 4;
            es:edi += 4;
            /* switch table (4 cases) at 0x402a10 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x4029c0 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x402a10 */
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    do {
        eax = *((ebp + 8));
    } while (ecx != 0);
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403bc8 */
#include <stdint.h>
 
void RtlUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401e62 */
#include <stdint.h>
 
void fcn_00401e62 (int32_t arg_8h) {
    ebx = 0x4050cc;
    ecx = *((ebp + 8));
    *((ebx + 8)) = ecx;
    *((ebx + 4)) = eax;
    *((ebx + 0xc)) = ebp;
    ebx = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401d8c */
#include <stdint.h>
 
void fcn_00401d8c (PVOID TargetFrame) {
    RtlUnwind (*((ebp + 8)), 0x401da4, 0, 0, ebp, edi, esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x401dce */
#include <stdint.h>
 
int32_t fcn_00401dce (int32_t arg_10h, uint32_t arg_24h) {
    int32_t var_8h;
    eax = *((esp + 0x10));
    *(fs:0) = esp;
    do {
        eax = *((esp + 0x20));
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        if (esi == -1) {
            goto label_0;
        }
        if (esi == *((esp + 0x24))) {
            goto label_0;
        }
        esi *= 3;
        ecx = *((ebx + esi*4));
        *((esp + 8)) = ecx;
        *((eax + 0xc)) = ecx;
        if (*((ebx + esi*4 + 4)) == 0) {
            eax = *((ebx + esi*4 + 8));
            fcn_00401e62 (0x101);
            uint32_t (*ebx + esi*4 + 8)() ();
        }
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403340 */
#include <stdint.h>
 
int32_t fcn_00403340 (int32_t arg_8h, int32_t arg_14h, int32_t arg_ch) {
    ecx = *((esp + 0xc));
    if (ecx == 0) {
        goto label_3;
    }
    ebx = ecx;
    esi = *((esp + 0x14));
    edi = *((esp + 0x10));
    if ((esi & 3) != 0) {
        goto label_4;
    }
    ecx >>= 2;
    if (ecx != 0) {
        goto label_5;
    }
    goto label_6;
    do {
label_4:
        al = *(esi);
        esi++;
        *(edi) = al;
        edi++;
        ecx--;
        if (ecx == 0) {
            goto label_7;
        }
        if (al == 0) {
            goto label_8;
        }
    } while ((esi & 3) != 0);
    ebx = ecx;
    ecx >>= 2;
    if (ecx != 0) {
        goto label_5;
    }
label_0:
    ebx &= 3;
    if (ebx == 0) {
        goto label_7;
    }
    do {
label_6:
        al = *(esi);
        esi++;
        *(edi) = al;
        edi++;
        if (al == 0) {
            goto label_9;
        }
        ebx--;
    } while (ebx != 0);
label_7:
    eax = *((esp + 0x10));
    esi = ebx;
    edi = ebx;
    return eax;
label_8:
    if ((edi & 3) == 0) {
        goto label_10;
    }
    do {
        *(edi) = al;
        edi++;
        ecx--;
        if (ecx == 0) {
            goto label_11;
        }
    } while ((edi & 3) != 0);
label_10:
    ebx = ecx;
    ecx >>= 2;
    if (ecx != 0) {
        goto label_12;
    }
    do {
label_2:
        *(edi) = al;
        edi++;
label_9:
        ebx--;
    } while (ebx != 0);
    esi = ebx;
label_3:
    eax = *((esp + 8));
    edi = ebx;
    return eax;
label_1:
    *(edi) = edx;
    edi += 4;
    ecx--;
    if (ecx == 0) {
        goto label_0;
    }
label_5:
    edx = 0x7efefeff;
    eax = *(esi);
    edx += eax;
    eax ^= 0xffffffff;
    eax ^= edx;
    edx = *(esi);
    esi += 4;
    if ((eax & 0x81010100) == 0) {
        goto label_1;
    }
    if (dl == 0) {
        goto label_13;
    }
    if (dh == 0) {
        goto label_14;
    }
    if ((edx & 0xff0000) == 0) {
        goto label_15;
    }
    if ((edx & 0xff000000) != 0) {
        goto label_1;
    }
    *(edi) = edx;
    goto label_16;
label_15:
    edx &= 0xffff;
    *(edi) = edx;
    goto label_16;
label_14:
    edx &= 0xff;
    *(edi) = edx;
    goto label_16;
label_13:
    edx = 0;
    *(edi) = edx;
label_16:
    edi += 4;
    eax = 0;
    ecx--;
    if (ecx == 0) {
        goto label_17;
    }
label_12:
    eax = 0;
    do {
        *(edi) = eax;
        edi += 4;
        ecx--;
    } while (ecx != 0);
label_17:
    ebx &= 3;
    if (ebx != 0) {
        goto label_2;
    }
label_11:
    eax = *((esp + 0x10));
    esi = ebx;
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402550 */
#include <stdint.h>
 
int32_t fcn_00402550 (int32_t arg_4h, int32_t arg_ch) {
    ecx = *((esp + 4));
    if ((ecx & 3) == 0) {
        goto label_0;
    }
    do {
        al = *(ecx);
        ecx++;
        if (al == 0) {
            goto label_1;
        }
    } while ((ecx & 3) != 0);
    do {
label_0:
        eax = *(ecx);
        edx = 0x7efefeff;
        edx += eax;
        eax ^= 0xffffffff;
        eax ^= edx;
        ecx += 4;
    } while ((eax & 0x81010100) == 0);
    eax = *((ecx - 4));
    if (al != 0) {
        if (ah != 0) {
            if ((eax & 0xff0000) != 0) {
                if ((eax & 0xff000000) != 0) {
                    goto label_0;
                }
label_1:
                edi = ecx - 1;
                void (*0x4025b1)() ();
            }
            edi = ecx - 2;
            void (*0x4025b1)() ();
        }
        edi = ecx - 3;
        void (*0x4025b1)() ();
    }
    edi = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4032ae */
#include <stdint.h>
 
uint32_t fcn_004032ae (int32_t arg_18h_3, int32_t arg_18h_2, int32_t arg_18h) {
    int32_t var_18h;
    ebx = 0;
    if (*(0x4056c8) == ebx) {
        eax = LoadLibraryA ("user32.dll");
        edi = eax;
        if (edi == ebx) {
            goto label_0;
        }
        eax = GetProcAddress (edi, "MessageBoxA");
        *(0x4056c8) = eax;
        if (eax == 0) {
            goto label_0;
        }
        eax = void (*esi)(uint32_t, char*) (edi, "GetActiveWindow");
        *(0x4056cc) = eax;
        eax = void (*esi)(uint32_t, char*) (edi, "GetLastActivePopup");
        *(0x4056d0) = eax;
    }
    eax = *(0x4056cc);
    if (eax != 0) {
        eax = void (*eax)() ();
        ebx = eax;
        if (ebx == 0) {
            goto label_1;
        }
        eax = *(0x4056d0);
        if (eax == 0) {
            goto label_1;
        }
        eax = void (*eax)(uint32_t) (ebx);
        ebx = eax;
    }
label_1:
    eax = uint32_t (*0x4056c8)(uint32_t, uint32_t*, uint32_t*, uint32_t*) (ebx, *((esp + 0x18)), *((esp + 0x18)), *((esp + 0x18)));
    do {
        return eax;
label_0:
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4022c3 */
#include <stdint.h>
 
int32_t fcn_004022c3 (int32_t arg_4h) {
    eax = *((esp + 4));
    *(0x4056c4) = 0;
    if (eax == 0xfffffffe) {
        *(0x4056c4) = 1;
    }
    if (eax == 0xfffffffd) {
        *(0x4056c4) = 1;
    }
    if (eax == 0xfffffffc) {
        eax = *(0x4056ec);
        *(0x4056c4) = 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40230d */
#include <stdint.h>
 
int32_t fcn_0040230d (int32_t arg_4h) {
    eax = *((esp + 4));
    eax -= 0x3a4;
    if (eax != 0) {
        eax -= 4;
        if (eax != 0) {
            eax -= 0xd;
            if (eax != 0) {
                eax--;
                if (eax != 0) {
                    eax = 0;
                    return eax;
                }
                eax = 0x404;
                return eax;
            }
            eax = 0x412;
            return eax;
        }
        eax = 0x804;
        return eax;
    }
    eax = 0x411;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402340 */
#include <stdint.h>
 
int32_t fcn_00402340 (void) {
    ecx = 0x40;
    eax = 0;
    edi = 0x405840;
    memset (edi, eax, ecx);
    *(es:edi) = al;
    es:edi++;
    eax = 0;
    edi = 0x405720;
    *(0x40571c) = eax;
    *(0x40572c) = eax;
    *(0x405944) = eax;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    edi = 0x40;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402369 */
#include <stdint.h>
 
uint32_t fcn_00402369 (void) {
    int32_t var_514h;
    int32_t var_314h;
    int32_t var_214h;
    int32_t var_114h;
    LPCPINFO lpCPInfo;
    int32_t var_eh;
    int32_t var_dh;
    eax = ebp - 0x14;
    eax = GetCPInfo (*(0x40571c), eax, esi);
    if (eax != 1) {
        goto label_2;
    }
    eax = 0;
    esi = 0x100;
    do {
        *((ebp + eax - 0x114)) = al;
        eax++;
    } while (eax < esi);
    al = *((ebp - 0xe));
    *((ebp - 0x114)) = 0x20;
    if (al == 0) {
        goto label_3;
    }
    edx = ebp - 0xd;
    do {
        ecx = *(edx);
        eax = (int32_t) al;
        if (eax <= ecx) {
            ecx -= eax;
            edi = ebp + eax - 0x114;
            ecx++;
            eax = 0x20202020;
            ebx = ecx;
            ecx >>= 2;
            memset (edi, eax, ecx);
            ecx = ebx;
            ecx &= 3;
            *(es:edi) = al;
            ecx--;
            es:edi++;
        }
        edx++;
        edx++;
        al = *((edx - 1));
    } while (al != 0);
    ebx = edi;
label_3:
    eax = ebp - 0x514;
    eax = ebp - 0x114;
    do {
    } while (ecx != 0);
    fcn_0040368d ();
    eax = ebp - 0x214;
    eax = ebp - 0x114;
    fcn_0040343e ();
    eax = ebp - 0x314;
    eax = ebp - 0x114;
    eax = fcn_0040343e ();
    eax = 0;
    ecx = ebp - 0x514;
label_0:
    dx = *(ecx);
    if ((dl & 1) == 0) {
        goto label_4;
    }
    *((eax + 0x405841)) |= 0x10;
    dl = *((ebp + eax - 0x214));
    do {
        *((eax + 0x405740)) = dl;
        goto label_5;
label_4:
        if ((dl & 2) == 0) {
            goto label_6;
        }
        *((eax + 0x405841)) |= 0x20;
        dl = *((ebp + eax - 0x314));
    } while (1);
label_6:
    *((eax + 0x405740)) = 0;
label_5:
    eax++;
    ecx++;
    ecx++;
    if (eax < esi) {
        goto label_0;
    }
    goto label_7;
label_2:
    eax = 0;
    esi = 0x100;
label_1:
    if (eax < 0x41) {
        goto label_8;
    }
    if (eax > 0x5a) {
        goto label_8;
    }
    *((eax + 0x405841)) |= 0x10;
    cl = al;
    cl += 0x20;
    do {
        *((eax + 0x405740)) = cl;
        goto label_9;
label_8:
        if (eax < 0x61) {
            goto label_10;
        }
        if (eax > 0x7a) {
            goto label_10;
        }
        *((eax + 0x405841)) |= 0x20;
        cl = al;
        cl -= 0x20;
    } while (1);
label_10:
    *((eax + 0x405740)) = 0;
label_9:
    eax++;
    if (eax < esi) {
        goto label_1;
    }
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40368d */
#include <stdint.h>
 
int32_t fcn_0040368d (void) {
    int32_t var_24h;
    int32_t cchWideChar;
    LPWORD lpCharType;
    int32_t var_18h_3;
    int32_t var_20h_2;
    int32_t var_4h_2;
    int32_t var_18h;
    DWORD dwInfoType;
    LPCSTR lpSrcStr;
    int32_t cchSrc;
    LPWORD var_4h;
    UINT var_18h_4;
    int32_t var_1ch;
    int32_t var_20h_4;
    LPCCH lpMultiByteStr;
    int32_t cbMultiByte;
    UINT CodePage;
    DWORD dwFlags;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    eax = *(0x4056f8);
    ebx = 0;
    if (eax == ebx) {
        esi = 1;
        eax = GetStringTypeW (esi, 0x40442c, esi, 1, ebp - 0x1c);
        if (eax != 0) {
            eax = esi;
        } else {
            eax = GetStringTypeA (ebx, esi, 0x404428, esi, ebp - 0x1c);
            if (eax == 0) {
                goto label_0;
            }
            eax = 2;
        }
        *(0x4056f8) = eax;
    }
    if (eax == 2) {
        eax = *((ebp + 0x1c));
        if (eax == ebx) {
            eax = *(0x4056dc);
        }
        eax = GetStringTypeA (eax, *((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
    } else {
        if (eax == 1) {
            if (*((ebp + 0x18)) == ebx) {
                eax = *(0x4056ec);
                *((ebp + 0x18)) = eax;
            }
            eax = *((ebp + 0x20));
            eax = -eax;
            eax -= eax;
            eax &= 8;
            eax++;
            eax = MultiByteToWideChar (*((ebp + 0x18)), eax, *((ebp + 0xc)), *((ebp + 0x10)), ebx, ebx);
            *((ebp - 0x20)) = eax;
            if (eax != ebx) {
                *((ebp - 4)) = ebx;
                edi = eax + eax;
                eax = edi;
                eax += 3;
                al &= 0xfc;
                fcn_00403b40 ();
                *((ebp - 0x18)) = esp;
                esi = esp;
                *((ebp - 0x24)) = esi;
                fcn_00403b70 (esi, ebx, edi);
                *((ebp - 4)) |= 0xffffffff;
                if (esi == ebx) {
                    goto label_0;
                }
                eax = MultiByteToWideChar (*((ebp + 0x18)), 1, *((ebp + 0xc)), *((ebp + 0x10)), esi, *((ebp - 0x20)));
                if (eax == ebx) {
                    goto label_0;
                }
                eax = GetStringTypeW (*((ebp + 8)), esi, eax, *((ebp + 0x14)));
            }
        } else {
label_0:
            eax = 0;
        }
    }
    esp = ebp - 0x34;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40343e */
#include <stdint.h>
 
int32_t fcn_0040343e (void) {
    LPCWSTR var_24h_3;
    int32_t var_20h_3;
    int32_t var_1ch_2;
    int32_t var_18h_3;
    int32_t var_4h_2;
    LCID Locale;
    DWORD lpWideCharStr;
    LPCSTR lpSrcStr;
    int32_t cchSrc;
    LPSTR lpDestStr;
    int32_t cchDest;
    UINT var_20h_4;
    int32_t var_24h_4;
    int32_t var_1ch;
    int32_t var_18h;
    LCID var_10h;
    DWORD dwMapFlags;
    int32_t var_dh;
    LPCCH var_10h_3;
    int32_t var_4h;
    UINT var_20h_2;
    LPCCH lpMultiByteStr;
    int32_t cbMultiByte;
    UINT CodePage;
    DWORD dwFlags;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    edi = 0;
    if (*(0x4056f4) == edi) {
        ebx = 1;
        esi = 0x100;
        eax = LCMapStringW (edi, esi, 0x40442c, ebx, 1, edi, edi);
        if (eax != 0) {
            *(0x4056f4) = ebx;
        } else {
            eax = LCMapStringA (edi, esi, 0x404428, ebx, edi, edi);
            if (eax == 0) {
                goto label_0;
            }
            *(0x4056f4) = 2;
        }
    }
    if (*((ebp + 0x14)) > edi) {
        eax = fcn_00403662 (*((ebp + 0x10)), *((ebp + 0x14)));
        *((ebp + 0x14)) = eax;
    }
    eax = *(0x4056f4);
    if (eax == 2) {
        eax = LCMapStringA (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)));
        goto label_1;
    }
    if (eax != 1) {
        goto label_0;
    }
    if (*((ebp + 0x20)) == edi) {
        eax = *(0x4056ec);
        *((ebp + 0x20)) = eax;
    }
    eax = *((ebp + 0x24));
    eax = -eax;
    eax -= eax;
    eax &= 8;
    eax++;
    eax = MultiByteToWideChar (*((ebp + 0x20)), eax, *((ebp + 0x10)), *((ebp + 0x14)), edi, edi);
    ebx = eax;
    *((ebp - 0x1c)) = ebx;
    if (ebx == edi) {
        goto label_0;
    }
    *((ebp - 4)) = edi;
    eax = ebx + ebx;
    eax += 3;
    al &= 0xfc;
    fcn_00403b40 ();
    *((ebp - 0x18)) = esp;
    eax = esp;
    *((ebp - 0x24)) = eax;
    *((ebp - 4)) |= 0xffffffff;
    if (*((ebp - 0x24)) == edi) {
        goto label_0;
    }
    eax = MultiByteToWideChar (*((ebp + 0x20)), 1, *((ebp + 0x10)), *((ebp + 0x14)), *((ebp - 0x24)), ebx);
    if (eax == 0) {
        goto label_0;
    }
    eax = LCMapStringW (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x24)), ebx, edi, edi);
    esi = eax;
    *((ebp - 0x28)) = esi;
    if (esi == edi) {
        goto label_0;
    }
    if ((*((ebp + 0xd)) & 4) == 0) {
        goto label_2;
    }
    if (*((ebp + 0x1c)) == edi) {
        goto label_3;
    }
    if (esi > *((ebp + 0x1c))) {
        goto label_0;
    }
    eax = LCMapStringW (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x24)), ebx, *((ebp + 0x18)), *((ebp + 0x1c)));
    if (eax != 0) {
        goto label_3;
    }
    do {
label_0:
        eax = 0;
label_1:
        esp = ebp - 0x38;
        ecx = *((ebp - 0x10));
        *(fs:0) = ecx;
        return eax;
label_2:
        *((ebp - 4)) = 1;
        eax = esi + esi;
        eax += 3;
        al &= 0xfc;
        fcn_00403b40 ();
        *((ebp - 0x18)) = esp;
        ebx = esp;
        *((ebp - 0x20)) = ebx;
        *((ebp - 4)) |= 0xffffffff;
    } while (ebx == edi);
    eax = LCMapStringW (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 0x24)), *((ebp - 0x1c)), ebx, esi);
    if (eax == 0) {
        goto label_0;
    }
    if (*((ebp + 0x1c)) == edi) {
    } else {
    }
    eax = WideCharToMultiByte (*((ebp + 0x20)), 0x220, ebx, esi, *((ebp + 0x18)), *((ebp + 0x1c)));
    esi = eax;
    if (esi == edi) {
        goto label_0;
    }
label_3:
    eax = esi;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x40266e */
#include <stdint.h>
 
uint32_t fcn_0040266e (int32_t arg_8h) {
    esi = *((esp + 8));
    if (esi <= *(0x405270)) {
        eax = fcn_00402df9 (esi);
        if (eax != 0) {
            goto label_0;
        }
    }
    if (esi == 0) {
        esi = 1;
    }
    esi += 0xf;
    esi &= 0xfffffff0;
    HeapAlloc (*(0x405948), 0, esi, 1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4037d6 */
#include <stdint.h>
 
int32_t fcn_004037d6 (int32_t arg_4h) {
    eax = *(0x405700);
    if (eax != 0) {
        eax = void (*eax)(uint32_t*) (*((esp + 4)));
        if (eax == 0) {
            goto label_0;
        }
        eax = 1;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x402df9 */
#include <stdint.h>
 
int32_t fcn_00402df9 (int32_t arg_8h, uint32_t arg_bh) {
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *(0x405714);
    edx = *(0x405718);
    eax *= 5;
    edi = edx + eax*4;
    eax = *((ebp + 8));
    *((ebp - 4)) = edi;
    ecx = eax + 0x17;
    ecx &= 0xfffffff0;
    *((ebp - 0x10)) = ecx;
    ecx >>= 4;
    ecx--;
    if (ecx < 0x20) {
        esi |= 0xffffffff;
        esi >>= cl;
        *((ebp - 8)) |= 0xffffffff;
        *((ebp - 0xc)) = esi;
    } else {
        ecx += 0xffffffe0;
        eax |= 0xffffffff;
        esi = 0;
        eax >>= cl;
        *((ebp - 0xc)) = esi;
        *((ebp - 8)) = eax;
    }
    eax = *(0x40570c);
    ebx = *(0x40570c);
    *((ebp + 8)) = ebx;
    if (ebx >= edi) {
        goto label_0;
    }
    do {
        ecx = *((ebx + 4));
        edi = *(ebx);
        ecx &= *((ebp - 8));
        edi &= esi;
        ecx |= edi;
        if (ecx != 0) {
            goto label_0;
        }
        ebx += 0x14;
        *((ebp + 8)) = ebx;
    } while (ebx < *((ebp - 4)));
label_0:
    if (ebx != *((ebp - 4))) {
        goto label_1;
    }
    ebx = edx;
    do {
        *((ebp + 8)) = ebx;
        if (ebx >= eax) {
            goto label_2;
        }
        ecx = *((ebx + 4));
        edi = *(ebx);
        ecx &= *((ebp - 8));
        edi &= esi;
        ecx |= edi;
        if (ecx != 0) {
            goto label_3;
        }
        ebx += 0x14;
    } while (1);
label_3:
    if (ebx != eax) {
label_2:
        goto label_1;
    }
    do {
        if (ebx >= *((ebp - 4))) {
            goto label_4;
        }
        if (*((ebx + 8)) != 0) {
            goto label_5;
        }
        ebx += 0x14;
        *((ebp + 8)) = ebx;
    } while (1);
label_5:
    if (ebx != *((ebp - 4))) {
label_4:
        goto label_6;
    }
    ebx = edx;
    do {
        *((ebp + 8)) = ebx;
        if (ebx >= eax) {
            goto label_7;
        }
        if (*((ebx + 8)) != 0) {
            goto label_8;
        }
        ebx += 0x14;
    } while (1);
label_8:
    if (ebx == eax) {
label_7:
        eax = fcn_00403102 ();
        ebx = eax;
        *((ebp + 8)) = ebx;
        if (ebx == 0) {
            goto label_9;
        }
    }
label_6:
    eax = fcn_004031b3 (ebx);
    ecx = *((ebx + 0x10));
    *(ecx) = eax;
    eax = *((ebx + 0x10));
    if (*(eax) == -1) {
label_9:
        eax = 0;
        goto label_10;
    }
label_1:
    *(0x40570c) = ebx;
    eax = *((ebx + 0x10));
    edx = *(eax);
    *((ebp - 4)) = edx;
    if (edx != -1) {
        ecx = *((eax + edx*4 + 0xc4));
        edi = *((eax + edx*4 + 0x44));
        ecx &= *((ebp - 8));
        edi &= esi;
        ecx |= edi;
        if (ecx != 0) {
            goto label_11;
        }
    }
    edx = *((eax + 0xc4));
    esi = *((eax + 0x44));
    edx &= *((ebp - 8));
    esi &= *((ebp - 0xc));
    *((ebp - 4)) = 0;
    ecx = eax + 0x44;
    edx |= esi;
    esi = *((ebp - 0xc));
    if (edx != 0) {
        goto label_12;
    }
    do {
        edx = *((ecx + 0x84));
        *((ebp - 4))++;
        edx &= *((ebp - 8));
        ecx += 4;
        edi = esi;
        edi &= *(ecx);
        edx |= edi;
    } while (edx == 0);
label_12:
    edx = *((ebp - 4));
label_11:
    ecx = *((ebp - 4));
    edi = 0;
    ecx *= 0x204;
    ecx = ecx + eax + 0x144;
    *((ebp - 0xc)) = ecx;
    ecx = *((eax + edx*4 + 0x44));
    ecx &= esi;
    if (ecx != 0) {
        goto label_13;
    }
    ecx = *((eax + edx*4 + 0xc4));
    ecx &= *((ebp - 8));
    edi = 0x20;
    do {
label_13:
        if (ecx < 0) {
            goto label_14;
        }
        ecx <<= 1;
        edi++;
    } while (1);
label_14:
    ecx = *((ebp - 0xc));
    edx = *((ecx + edi*8 + 4));
    ecx = *(edx);
    ecx -= *((ebp - 0x10));
    esi = ecx;
    *((ebp - 8)) = ecx;
    esi >>= 4;
    esi--;
    if (esi > 0x3f) {
        esi = 0x3f;
    }
    if (esi != edi) {
        ecx = *((edx + 4));
        if (ecx == *((edx + 8))) {
            if (edi < 0x20) {
                ebx = 0x80000000;
                ecx = edi;
                ebx >>= cl;
                ecx = *((ebp - 4));
                edi = eax + edi + 4;
                ebx = ~ebx;
                *((ebp - 0x14)) = ebx;
                ebx &= *((eax + ecx*4 + 0x44));
                *((eax + ecx*4 + 0x44)) = ebx;
                *(edi)--;
                if (*(edi) == 0) {
                    ebx = *((ebp + 8));
                    ecx = *((ebp - 0x14));
                    *(ebx) &= ecx;
                } else {
                    ecx = edi - 0x20;
                    ebx = 0x80000000;
                    ebx >>= cl;
                    ecx = *((ebp - 4));
                    edi = eax + edi + 4;
                    ecx = eax + ecx*4 + 0xc4;
                    ebx = ~ebx;
                    *(ecx) &= ebx;
                    *(edi)--;
                    *((ebp - 0x14)) = ebx;
                    if (*(edi) == 0) {
                        ebx = *((ebp + 8));
                        ecx = *((ebp - 0x14));
                        *((ebx + 4)) &= ecx;
                    }
                } else {
                    ebx = *((ebp + 8));
                }
            }
        }
        ecx = *((edx + 8));
        edi = *((edx + 4));
        *((ecx + 4)) = edi;
        ecx = *((edx + 4));
        edi = *((edx + 8));
        *((ecx + 8)) = edi;
        if (*((ebp - 8)) == 0) {
            goto label_15;
        }
        ecx = *((ebp - 0xc));
        edi = *((ecx + esi*8 + 4));
        ecx = ecx + esi*8;
        *((edx + 4)) = edi;
        *((edx + 8)) = ecx;
        *((ecx + 4)) = edx;
        ecx = *((edx + 4));
        *((ecx + 8)) = edx;
        ecx = *((edx + 4));
        if (ecx == *((edx + 8))) {
            cl = *((esi + eax + 4));
            *((ebp + 0xb)) = cl;
            if (esi < 0x20) {
                cl++;
                *((esi + eax + 4)) = cl;
                if (*((ebp + 0xb)) == 0) {
                    edi = 0x80000000;
                    ecx = esi;
                    edi >>= cl;
                    *(ebx) |= edi;
                }
                edi = 0x80000000;
                ecx = esi;
                edi >>= cl;
                ecx = *((ebp - 4));
                *((eax + ecx*4 + 0x44)) |= edi;
            } else {
                cl++;
                *((esi + eax + 4)) = cl;
                if (*((ebp + 0xb)) == 0) {
                    ecx = esi - 0x20;
                    edi = 0x80000000;
                    edi >>= cl;
                    *((ebx + 4)) |= edi;
                }
                ecx = *((ebp - 4));
                edi = eax + ecx*4 + 0xc4;
                ecx = esi - 0x20;
                esi = 0x80000000;
                esi >>= cl;
                *(edi) |= esi;
            }
        }
        ecx = *((ebp - 8));
    }
    if (ecx != 0) {
        *(edx) = ecx;
        *((ecx + edx - 4)) = ecx;
        goto label_16;
label_15:
        ecx = *((ebp - 8));
    }
label_16:
    esi = *((ebp - 0x10));
    edx += ecx;
    ecx = esi + 1;
    *(edx) = ecx;
    *((edx + esi - 4)) = ecx;
    esi = *((ebp - 0xc));
    ecx = *(esi);
    edi = ecx + 1;
    *(esi) = edi;
    if (ecx == 0) {
        if (ebx != *(0x405710)) {
            goto label_17;
        }
        ecx = *((ebp - 4));
        if (ecx != *(0x405708)) {
            goto label_17;
        }
        *(0x405710) = 0;
    }
label_17:
    ecx = *((ebp - 4));
    *(eax) = ecx;
    eax = edx + 4;
label_10:
    edi = 0x3f;
    esi = 0x3f;
    ebx = 0x3f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403800 */
#include <stdint.h>
 
int32_t fcn_00403800 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edi = *((ebp + 8));
    eax = ecx;
    edx = ecx;
    eax += esi;
    if (edi > esi) {
        if (edi < eax) {
            goto label_0;
        }
    }
    if ((edi & 3) != 0) {
        goto label_1;
    }
    ecx >>= 2;
    edx &= 3;
    if (ecx < 8) {
        goto label_2;
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    /* switch table (4 cases) at 0x403948 */
label_1:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x4038dc */
label_2:
    eax = *((esi + ecx*4 - 0x1c));
    *((edi + ecx*4 - 0x1c)) = eax;
    eax = *((esi + ecx*4 - 0x18));
    *((edi + ecx*4 - 0x18)) = eax;
    eax = *((esi + ecx*4 - 0x14));
    *((edi + ecx*4 - 0x14)) = eax;
    eax = *((esi + ecx*4 - 0x10));
    *((edi + ecx*4 - 0x10)) = eax;
    eax = *((esi + ecx*4 - 0xc));
    *((edi + ecx*4 - 0xc)) = eax;
    eax = *((esi + ecx*4 - 8));
    *((edi + ecx*4 - 8)) = eax;
    eax = *((esi + ecx*4 - 4));
    *((edi + ecx*4 - 4)) = eax;
    eax = ecx*4;
    esi += eax;
    edi += eax;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
label_0:
    esi = ecx + esi - 4;
    edi = ecx + edi - 4;
    if ((edi & 3) == 0) {
        ecx >>= 2;
        edx &= 3;
        if (ecx >= 8) {
            __asm ("std");
            *(es:edi) = *(esi);
            ecx--;
            esi += 4;
            es:edi += 4;
            /* switch table (4 cases) at 0x403ae0 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x403a90 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x403ae0 */
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    do {
        eax = *((ebp + 8));
    } while (ecx != 0);
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((ebp + 8));
    edi = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403102 */
#include <stdint.h>
 
int32_t fcn_00403102 (void) {
    eax = *(0x405714);
    ecx = *(0x405704);
    edi = 0;
    if (eax == ecx) {
        eax = ecx * 5;
        eax <<= 2;
        eax = HeapReAlloc (*(0x405948), edi, *(0x405718), eax);
        if (eax == edi) {
            goto label_0;
        }
        *(0x405704) += 0x10;
        *(0x405718) = eax;
        eax = *(0x405714);
    }
    ecx = *(0x405718);
    eax *= 5;
    esi = ecx + eax*4;
    eax = HeapAlloc (*(0x405948), 8, 0x41c4);
    *((esi + 0x10)) = eax;
    if (eax != edi) {
        eax = VirtualAlloc (edi, 0x100000, 0x2000, 4);
        *((esi + 0xc)) = eax;
        if (eax != edi) {
            goto label_1;
        }
        eax = HeapFree (*(0x405948), edi, *((esi + 0x10)));
    }
label_0:
    eax = 0;
    goto label_2;
label_1:
    *((esi + 8)) |= 0xffffffff;
    *(esi) = edi;
    *((esi + 4)) = edi;
    *(0x405714)++;
    eax = *((esi + 0x10));
    *(eax) |= 0xffffffff;
    eax = esi;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x4031b3 */
#include <stdint.h>
 
int32_t fcn_004031b3 (int32_t arg_8h) {
    int32_t var_4h;
    ecx = *((ebp + 8));
    esi = *((ecx + 0x10));
    eax = *((ecx + 8));
    ebx = 0;
    do {
        if (eax < 0) {
            goto label_0;
        }
        eax <<= 1;
        ebx++;
    } while (1);
label_0:
    eax = ebx;
    eax *= 0x204;
    edx = 0x3f;
    eax = eax + esi + 0x144;
    *((ebp - 4)) = eax;
    do {
        *((eax + 8)) = eax;
        *((eax + 4)) = eax;
        eax += 8;
        edx--;
    } while (edx != 0);
    edi = ebx;
    edi <<= 0xf;
    edi += *((ecx + 0xc));
    eax = VirtualAlloc (edi, 0x8000, 0x1000, 4);
    if (eax == 0) {
        eax |= 0xffffffff;
        goto label_1;
    }
    edx = edi + 0x7000;
    if (edi > edx) {
        goto label_2;
    }
    eax = edi + 0x10;
    do {
        *((eax - 8)) |= 0xffffffff;
        *((eax + 0xfec)) |= 0xffffffff;
        ecx = eax + 0xffc;
        *((eax - 4)) = 0xff0;
        *(eax) = ecx;
        ecx = eax - 0x1004;
        *((eax + 4)) = ecx;
        *((eax + 0xfe8)) = 0xff0;
        eax += 0x1000;
        ecx = eax - 0x10;
    } while (ecx <= edx);
label_2:
    eax = *((ebp - 4));
    ecx = edi + 0xc;
    eax += 0x1f8;
    edi = 1;
    *((eax + 4)) = ecx;
    *((ecx + 8)) = eax;
    ecx = edx + 0xc;
    *((eax + 8)) = ecx;
    *((ecx + 4)) = eax;
    *((esi + ebx*4 + 0x44)) = 0;
    *((esi + ebx*4 + 0xc4)) = edi;
    al = *((esi + 0x43));
    cl = *((esi + 0x43));
    cl++;
    eax = *((ebp + 8));
    *((esi + 0x43)) = cl;
    if (al == 0) {
        *((eax + 4)) |= edi;
    }
    edx = 0x80000000;
    ecx = ebx;
    edx >>= cl;
    edx = ~edx;
    *((eax + 8)) &= edx;
    eax = ebx;
label_1:
    edi = 1;
    esi = 1;
    ebx = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403662 */
#include <stdint.h>
 
int32_t fcn_00403662 (int32_t arg_4h, int32_t arg_8h) {
    edx = *((esp + 8));
    eax = *((esp + 4));
    ecx = edx - 1;
    if (edx == 0) {
        goto label_0;
    }
    do {
        if (*(eax) == 0) {
            goto label_0;
        }
        eax++;
        esi = ecx;
        ecx--;
    } while (esi != 0);
label_0:
    if (*(eax) == 0) {
        eax -= *((esp + 4));
        return eax;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403b40 */
#include <stdint.h>
 
int32_t fcn_00403b40 (int32_t arg_8h) {
    ecx = esp + 8;
    if (eax < 0x1000) {
        goto label_0;
    }
    do {
        ecx -= 0x1000;
        eax -= 0x1000;
    } while (eax >= 0x1000);
label_0:
    ecx -= eax;
    eax = esp;
    ecx = *(eax);
    eax = *((eax + 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe @ 0x403b70 */
#include <stdint.h>
 
int32_t fcn_00403b70 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    ecx = *((esp + 4));
    if (edx == 0) {
        goto label_0;
    }
    eax = 0;
    al = *((esp + 8));
    edi = ecx;
    if (edx < 4) {
        goto label_1;
    }
    ecx = -ecx;
    ecx &= 3;
    if (ecx == 0) {
        goto label_2;
    }
    edx -= ecx;
    do {
        *(edi) = al;
        edi++;
        ecx--;
    } while (ecx != 0);
label_2:
    ecx = eax;
    eax <<= 8;
    eax += ecx;
    ecx = eax;
    eax <<= 0x10;
    eax += ecx;
    ecx = edx;
    edx &= 3;
    ecx >>= 2;
    if (ecx == 0) {
        goto label_1;
    }
    memset (edi, eax, ecx);
    if (edx == 0) {
        goto label_3;
    }
    do {
label_1:
        *(edi) = al;
        edi++;
        edx--;
    } while (edx != 0);
label_3:
    eax = *((esp + 8));
    return eax;
label_0:
    eax = *((esp + 4));
    return eax;
}
