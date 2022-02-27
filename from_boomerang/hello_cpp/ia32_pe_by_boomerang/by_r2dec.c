/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41145b */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_8ch;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_74h;
    LPOSVERSIONINFOA lpVersionInformation;
    uint32_t var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    LPSTARTUPINFOA lpStartupInfo;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    eax = 0x94;
    fcn_00414c20 (edi);
    *((ebp - 0x7c)) = esp;
    *((ebp - 0x18)) = esp;
    eax = *((ebp - 0x7c));
    *((ebp - 0x70)) = eax;
    ecx = *((ebp - 0x70));
    *(ecx) = 0x94;
    edx = *((ebp - 0x70));
    GetVersionExA (edx);
    eax = *((ebp - 0x70));
    ecx = *((eax + 0x10));
    *(0x429638) = ecx;
    edx = *((ebp - 0x70));
    eax = *((edx + 4));
    *(0x429644) = eax;
    ecx = *((ebp - 0x70));
    edx = *((ecx + 8));
    *(0x429648) = edx;
    eax = *((ebp - 0x70));
    ecx = *((eax + 0xc));
    ecx &= 0x7fff;
    *(0x42963c) = ecx;
    if (*(0x429638) != 2) {
        edx = *(0x42963c);
        edx |= 0x8000;
        *(0x42963c) = edx;
    }
    eax = *(0x429644);
    eax <<= 8;
    eax += *(0x429648);
    *(0x429640) = eax;
    eax = fcn_004126e0 ();
    *((ebp - 0x6c)) = eax;
    eax = fcn_00411078 (0);
    if (eax == 0) {
        fcn_004126a0 (0x1c);
    }
    fcn_0041144c ();
    *((ebp - 4)) = 0;
    eax = fcn_0041140b ();
    if (eax < 0) {
        fcn_004114e2 (0x1b);
    }
    eax = GetCommandLineA ();
    *(0x42b100) = eax;
    eax = fcn_0041100f ();
    *(0x4295fc) = eax;
    eax = fcn_00411032 ();
    if (eax < 0) {
        fcn_004114e2 (8);
    }
    eax = fcn_00411596 ();
    if (eax < 0) {
        fcn_004114e2 (9);
    }
    eax = fcn_00411587 (1);
    *((ebp - 0x64)) = eax;
    if (*((ebp - 0x64)) != 0) {
        ecx = *((ebp - 0x64));
        fcn_004114e2 (ecx);
    }
    *((ebp - 0x34)) = 0;
    GetStartupInfoA (ebp - 0x60);
    eax = fcn_0041142e ();
    *((ebp - 0x68)) = eax;
    eax = *((ebp - 0x34));
    eax &= 1;
    if (eax != 0) {
        ecx = *((ebp - 0x30));
        *((ebp - 0x80)) = ecx;
    } else {
        *((ebp - 0x80)) = 0xa;
    }
    edx = *((ebp - 0x80));
    eax = *((ebp - 0x68));
    eax = GetModuleHandleA (0, 0, eax, edx);
    eax = fcn_004114a6 (eax);
    *((ebp - 0x74)) = eax;
    if (*((ebp - 0x6c)) == 0) {
        ecx = *((ebp - 0x74));
        fcn_0041158c (ecx);
    }
    fcn_0041115e ();
    *((ebp - 4)) = 0xffffffff;
    eax = *((ebp - 0x74));
    esp = ebp - 0x8c;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111f9 */
#include <stdint.h>
 
void fcn_004111f9 (void) {
    int32_t var_c0h;
    return void (*0x411b80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411b80 */
#include <stdint.h>
 
int32_t loc_00411b80 (void) {
    int32_t var_c0h;
    edi = ebp - 0xc0;
    ecx = 0x30;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    eax = 5;
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411424 */
#include <stdint.h>
 
void fcn_00411424 (int32_t arg_4h) {
    return void (*0x412320)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412320 */
#include <stdint.h>
 
void loc_00412320 (int32_t arg_4h) {
    if (? == ?) {
        return;
    }
    eax = *((ebp + 4));
    fcn_0041155a (eax, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41155a */
#include <stdint.h>
 
void fcn_0041155a (int32_t arg_8h, int32_t arg_ch) {
    return void (*0x4128c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4128c0 */
#include <stdint.h>
 
int32_t loc_004128c0 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    if (eax < 4) {
        if (eax < 0) {
            goto label_0;
        }
        ecx = *((eax*4 + 0x428b60));
        edx = *((eax*4 + 0x428b70));
        if (ecx != -1) {
            eax = *((ebp + 8));
            fcn_00412930 (eax, ecx, eax, edx);
        }
        return eax;
    }
label_0:
    edx = *(str.Unknown_Runtime_Check_Error_n_r);
    eax = 4;
    eax = *((ebp + 8));
    ecx = 1;
    fcn_00412930 (eax, ecx, eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412930 */
#include <stdint.h>
 
uint32_t fcn_00412930 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ebx = *((ebp + 8));
    eax = fcn_004115b4 ();
    esi = eax;
    *((ebp - 0xc)) = esi;
    eax = fcn_00412a60 ();
    edi = *((ebp + 0x14));
    if (eax == 0) {
        goto label_0;
    }
    eax = edi;
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= edx;
    eax = eax + eax + 4;
    eax += 3;
    eax &= 0xfffffffc;
    eax = fcn_00414c20 ();
    cl = *(edi);
    eax = 0;
    edx = esp;
    if (cl == 0) {
        goto label_1;
    }
    do {
        cx = (int16_t) cl;
        *((edx + eax*2)) = cx;
        cl = *((eax + edi + 1));
        eax++;
    } while (cl != 0);
label_1:
    *((edx + eax*2)) = 0;
    eax = *((ebp + 0x10));
    edx = *((eax*4 + 0x4251f8));
    eax = fcn_00412b00 ();
    if (eax == 0) {
        al = 0;
        goto label_2;
label_0:
        al = 1;
label_2:
        if (esi != 0) {
            if (al != 0) {
                eax = fcn_004130a0 ();
                if (eax != 0) {
                    goto label_3;
                }
            }
            eax = 0x204;
            fcn_00414c20 ();
            esi = esp;
            eax = ebp - 4;
            ebx += 0xfffffffb;
            fcn_00411334 (ebx, esi, 0x200, ebp - 8);
            edx = *((ebp + 0x10));
            eax = *((ebp - 4));
            ecx = *((ebp - 8));
            edx = *((ebp + 0xc));
            eax = uint32_t (*ebp - 0xc)(uint32_t, uint32_t, uint32_t, uint32_t, char*, uint32_t, uint32_t) (edx, esi, ecx, eax, "Run-Time Check Failure #%d - %s", edx, edi);
            if (eax != 1) {
                goto label_4;
            }
        }
label_3:
        DebugBreak ();
    }
label_4:
    esp = ebp - 0x18;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41159b */
#include <stdint.h>
 
void fcn_0041159b (HINSTANCE arg_8h) {
    int32_t var_f8h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    return void (*0x411d60)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411d60 */
#include <stdint.h>
 
void loc_00411d60 (HINSTANCE hInstance) {
    int32_t var_f8h;
    WNDCLASSEXA * ARG_0;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    HINSTANCE var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    edi = ebp - 0xf8;
    ecx = 0x3e;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    *((ebp - 0x34)) = 0x30;
    *((ebp - 0x30)) = 3;
    *((ebp - 0x2c)) = 0x411447;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x24)) = 0;
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    esi = esp;
    eax = *((ebp + 8));
    LoadIconA (eax, 0x6b, edi, esi, ebx);
    eax = fcn_00411424 ();
    *((ebp - 0x1c)) = eax;
    esi = esp;
    LoadCursorA (0, 0x7f00);
    eax = fcn_00411424 ();
    *((ebp - 0x18)) = eax;
    *((ebp - 0x14)) = 6;
    *((ebp - 0x10)) = 0x6d;
    *((ebp - 0xc)) = 0x429500;
    esi = esp;
    eax = *((ebp - 0x20));
    LoadIconA (eax, 0x6c);
    eax = fcn_00411424 ();
    *((ebp - 8)) = eax;
    esi = esp;
    RegisterClassExA (ebp - 0x34);
    eax = fcn_00411424 ();
    ecx = ebp;
    edx = 0x411e3d;
    fcn_004111d1 (eax);
    fcn_00411424 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111d1 */
#include <stdint.h>
 
int32_t fcn_004111d1 (int32_t arg_4h) {
    int32_t var_4h;
    esi = edx;
    eax = *(esi);
    edi = 0;
    ebx = ecx;
    *((ebp - 4)) = edi;
    if (eax <= edi) {
        goto label_0;
    }
    do {
        eax = *((esi + 4));
        ecx = *((eax + edi));
        edx = *((ecx + ebx - 4));
        eax += edi;
        if (edx == 0xcccccccc) {
            edx = *((eax + 4));
            edx += ecx;
            if (*((edx + ebx)) == 0xcccccccc) {
                goto label_1;
            }
        }
        eax = *((esi + 4));
        ecx = *((eax + edi + 8));
        edx = *((ebp + 4));
        fcn_004112ad (edx, ecx);
label_1:
        eax = *((ebp - 4));
        ecx = *(esi);
        eax++;
        edi += 0xc;
        *((ebp - 4)) = eax;
    } while (eax < ecx);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41133e */
#include <stdint.h>
 
int32_t fcn_0041133e (HINSTANCE arg_8h, int32_t nCmdShow) {
    int32_t var_cch;
    HWND hWnd;
    edi = ebp - 0xcc;
    ecx = 0x33;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    eax = *((ebp + 8));
    *(0x4295cc) = eax;
    esi = esp;
    eax = *((ebp + 8));
    CreateWindowExA (0, 0x429500, 0x429568, 0xcf0000, 0x80000000, 0, 0x80000000, 0, 0, 0, eax, 0, edi, esi, ebx);
    eax = fcn_00411424 ();
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) == 0) {
        eax = 0;
    } else {
        esi = esp;
        eax = *((ebp + 0xc));
        ecx = *((ebp - 8));
        ShowWindow (ecx, eax);
        fcn_00411424 ();
        esi = esp;
        eax = *((ebp - 8));
        UpdateWindow (eax);
        fcn_00411424 ();
        eax = 1;
    }
    fcn_00411424 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411474 */
#include <stdint.h>
 
void fcn_00411474 (void) {
    return void (*0x4128b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4128b0 */
#include <stdint.h>
 
int32_t loc_004128b0 (void) {
    eax = fcn.0041119f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41138e */
#include <stdint.h>
 
void fcn_0041138e (int32_t arg_8h) {
    return void (*0x412830)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412830 */
#include <stdint.h>
 
int32_t loc_00412830 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = *(0x42960c);
    *(0x42960c) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4112ad */
#include <stdint.h>
 
void fcn_004112ad (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_4h;
    return void (*0x412e90)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412e90 */
#include <stdint.h>
 
int32_t loc_00412e90 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x428b68);
    *((ebp - 4)) = eax;
    if (eax == -1) {
        goto label_0;
    }
    ebx = *((ebp + 0xc));
    eax = *((ebp + 0xc));
    edx = eax + 1;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    eax -= edx;
    eax += 0x53;
    eax &= 0xfffffffc;
    fcn_00414c20 ();
    edx = esp;
    ecx = 7;
    esi = "Stack around the variable ';
    edi = edx;
    eax = ebx;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    esi = eax;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    edi = edx;
    eax -= esi;
    edi--;
    do {
        cl = *((edi + 1));
        edi++;
    } while (cl != 0);
    ecx = eax;
    ecx >>= 2;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = eax;
    do {
        ecx &= 3;
    } while (ecx != 0);
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    edi = edx;
    edi--;
    do {
        al = *((edi + 1));
        edi++;
    } while (al != 0);
    eax = ' was corrupted.";
    *(edi) = eax;
    ecx = *(0x425598);
    *((edi + 4)) = ecx;
    eax = *(0x42559c);
    *((edi + 8)) = eax;
    ecx = *(0x4255a0);
    edx = *((ebp + 8));
    *((edi + 0xc)) = ecx;
    ecx = *((ebp - 4));
    al = *(0x4255a4);
    *((edi + 0x10)) = al;
    fcn_00412930 (edx, ecx, 2, edx);
label_0:
    esp = ebp - 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x414c20 */
#include <stdint.h>
 
int32_t fcn_00414c20 (int32_t arg_8h) {
    if (eax < 0x1000) {
        eax = -eax;
        eax += esp;
        eax += 4;
        tmp_0 = eax;
        eax = esp;
        esp = tmp_0;
        eax = *(eax);
        return eax;
    }
    ecx = esp + 8;
    do {
        ecx -= 0x1000;
        eax -= 0x1000;
    } while (eax >= 0x1000);
    ecx -= eax;
    eax = esp;
    ecx = *(eax);
    eax = *((eax + 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4126e0 */
#include <stdint.h>
 
uint32_t fcn_004126e0 (void) {
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    HMODULE var_4h;
    eax = GetModuleHandleA (0);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    ecx = *(eax);
    if (ecx != 0x5a4d) {
        eax = 0;
    } else {
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax += *((edx + 0x3c));
        *((ebp - 8)) = eax;
        ecx = *((ebp - 8));
        if (*(ecx) != 0x4550) {
            eax = 0;
        } else {
            edx = *((ebp - 8));
            edx += 0x18;
            *((ebp - 0xc)) = edx;
            eax = *((ebp - 0xc));
            ecx = *(eax);
            *((ebp - 0x14)) = ecx;
            if (*((ebp - 0x14)) != 0x10b) {
                if (*((ebp - 0x14)) != 0x20b) {
                } else {
                    edx = *((ebp - 0xc));
                    if (*((edx + 0x5c)) <= 0xe) {
                        eax = 0;
                        goto label_0;
                    }
                    eax = *((ebp - 0xc));
                    ecx = 0;
                    cl = (*((eax + 0xd0)) != 0) ? 1 : 0;
                    eax = ecx;
                    goto label_0;
                }
                edx = *((ebp - 0xc));
                *((ebp - 0x10)) = edx;
                eax = *((ebp - 0x10));
                if (*((eax + 0x6c)) <= 0xe) {
                    eax = 0;
                    goto label_0;
                }
                ecx = *((ebp - 0x10));
                eax = 0;
                al = (*((ecx + 0xe0)) != 0) ? 1 : 0;
                goto label_0;
            }
            eax = 0;
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411078 */
#include <stdint.h>
 
int32_t fcn_00411078 (uint32_t arg_8h) {
    eax = 0;
    al = (*((ebp + 8)) == 0) ? 1 : 0;
    eax = HeapCreate (eax, 0x1000, 0);
    *(0x42af80) = eax;
    if (*(0x42af80) == 0) {
        eax = 0;
    } else {
        eax = fcn_00411442 ();
        *(0x42af90) = eax;
        if (*(0x42af90) == 3) {
            eax = fcn_00411497 (0x3f8);
            if (eax == 0) {
                ecx = *(0x42af80);
                eax = HeapDestroy (ecx);
                eax = 0;
            }
        } else {
            eax = 1;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4126a0 */
#include <stdint.h>
 
int32_t fcn_004126a0 (int32_t arg_8h) {
    if (*(0x429604) == 1) {
        fcn_004114bf ();
    }
    eax = *((ebp + 8));
    fcn_00411230 (eax);
    fcn_0041122b (0xff);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114bf */
#include <stdint.h>
 
void fcn_004114bf (void) {
    if (*(0x429604) != 1) {
        if (*(0x429604) != 0) {
            goto label_0;
        }
        if (*(0x428b44) != 1) {
            goto label_0;
        }
    }
    fcn_00411230 (0xfc);
    if (*(0x4297d8) != 0) {
        uint32_t (*0x4297d8)() ();
    }
    fcn_00411230 (0xff);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411230 */
#include <stdint.h>
 
int32_t fcn_00411230 (uint32_t arg_8h) {
    int32_t var_128h_2;
    int32_t var_124h;
    int32_t var_120h_2;
    int32_t var_14h_2;
    int32_t var_10h_2;
    int32_t var_ch;
    int32_t var_4h_2;
    uint32_t var_8h_2;
    int32_t var_128h;
    int32_t var_120h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 0x14)) = eax;
    *((ebp - 4)) = 0;
    while (1) {
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) >= 0x13) {
            goto label_0;
        }
        ecx = *((ebp - 4));
        edx = *((ebp + 8));
        if (edx == *((ecx*8 + 0x428c60))) {
        } else {
        }
    }
label_0:
    eax = *((ebp - 4));
    ecx = *((ebp + 8));
    if (ecx == *((eax*8 + 0x428c60))) {
        if (*((ebp + 8)) != 0xfc) {
            if (*((ebp + 8)) == 0xff) {
                goto label_1;
            }
            edx = *((ebp - 4));
            eax = *((edx*8 + 0x428c64));
            eax = fcn_0041119f (1, 0, 0, 0, eax);
            if (eax != 1) {
                goto label_1;
            }
            __asm ("int3");
        }
label_1:
        if (*(0x429604) != 1) {
            if (*(0x429604) != 0) {
                goto label_2;
            }
            if (*(0x428b44) != 1) {
                goto label_2;
            }
        }
        ecx = ebp - 8;
        edx = *((ebp - 4));
        eax = *((edx*8 + 0x428c64));
        eax = fcn_00411235 (eax);
        ecx = *((ebp - 4));
        edx = *((ecx*8 + 0x428c64));
        eax = GetStdHandle (0xfffffffffffffff4, edx, eax);
        WriteFile (eax);
        goto label_3;
label_2:
        if (*((ebp + 8)) == 0xfc) {
            goto label_3;
        }
        *((ebp - 0x1c)) = 0;
        eax = GetModuleFileNameA (0, ebp - 0x120, 0x104);
        if (eax == 0) {
            fcn_00411258 (ebp - 0x120, "<program name unknown>");
        }
        edx = ebp - 0x120;
        *((ebp - 0x10)) = edx;
        eax = *((ebp - 0x10));
        eax = fcn_00411235 (eax);
        eax++;
        if (eax > 0x3c) {
            fcn_00411235 (ebp - 0x120);
            edx = *((ebp - 0x10));
            eax = edx + eax - 0x3b;
            *((ebp - 0x10)) = eax;
            ecx = *((ebp - 0x10));
            fcn_00411492 (ecx, 0x425b78, 3);
        }
        edx = *((ebp - 0x10));
        eax = fcn_00411235 (edx);
        esi = eax;
        eax = *((ebp - 4));
        ecx = *((eax*8 + 0x428c64));
        fcn_00411235 (ecx);
        eax = esi + eax + 0x1c;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00414c20 ();
        *((ebp - 0x124)) = esp;
        edx = *((ebp - 0x124));
        *((ebp - 0xc)) = edx;
        eax = *((ebp - 0xc));
        fcn_00411258 (eax, "Runtime Error!\n\nProgram: ");
        ecx = *((ebp - 0x10));
        edx = *((ebp - 0xc));
        fcn_0041120d (edx, ecx);
        eax = *((ebp - 0xc));
        fcn_0041120d (eax, 0x425b54);
        ecx = *((ebp - 4));
        edx = *((ecx*8 + 0x428c64));
        eax = *((ebp - 0xc));
        fcn_0041120d (eax, edx);
        ecx = *((ebp - 0xc));
        fcn_0041107d (ecx, "Microsoft Visual C++ Runtime Library", 0x12010);
    }
label_3:
    esp = ebp - 0x128;
    ecx = *((ebp - 0x14));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41122b */
#include <stdint.h>
 
void fcn_0041122b (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x4133d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4133d0 */
#include <stdint.h>
 
uint32_t loc_004133d0 (UINT uExitCode) {
    FARPROC var_8h;
    HMODULE hModule;
    eax = GetModuleHandleA ("mscoree.dll");
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        eax = GetProcAddress (eax, "CorExitProcess");
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) == 0) {
            goto label_0;
        }
        ecx = *((ebp + 8));
        uint32_t (*ebp - 8)(uint32_t) (ecx);
    }
label_0:
    edx = *((ebp + 8));
    ExitProcess (edx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41144c */
#include <stdint.h>
 
int32_t fcn_0041144c (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    esi = 0x427828;
    edi |= 0xffffffff;
    do {
        *((ebp - 0x1c)) = esi;
        if (esi >= 0x427a2c) {
            goto label_0;
        }
        *((ebp - 4)) = 0;
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        *((ebp - 4)) = edi;
        esi += 4;
    } while (1);
label_0:
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41140b */
#include <stdint.h>
 
uint32_t fcn_0041140b (void) {
    DWORD nStdHandle;
    int32_t var_6ch;
    HANDLE * hFile;
    uint32_t var_64h;
    HANDLE var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    DWORD var_50h;
    int32_t var_4ch;
    LPSTARTUPINFOA lpStartupInfo;
    int32_t var_16h;
    uint32_t var_14h;
    eax = fcn_00411064 (0x100, 2, "ioinit.c", 0x82);
    *((ebp - 0x64)) = eax;
    if (*((ebp - 0x64)) == 0) {
        eax |= 0xffffffff;
        goto label_1;
    }
    eax = *((ebp - 0x64));
    *(0x42afe0) = eax;
    *(0x42af94) = 0x20;
    while (1) {
        ecx = *((ebp - 0x64));
        ecx += 8;
        *((ebp - 0x64)) = ecx;
        edx = *(0x42afe0);
        edx += 0x100;
        if (*((ebp - 0x64)) >= edx) {
            goto label_2;
        }
        eax = *((ebp - 0x64));
        *((eax + 4)) = 0;
        ecx = *((ebp - 0x64));
        *(ecx) = 0xffffffff;
        edx = *((ebp - 0x64));
        *((edx + 5)) = 0xa;
    }
label_2:
    GetStartupInfoA (ebp - 0x48);
    ecx = *((ebp - 0x16));
    if (ecx == 0) {
        goto label_3;
    }
    if (*((ebp - 0x14)) == 0) {
        goto label_3;
    }
    edx = *((ebp - 0x14));
    eax = *(edx);
    *((ebp - 0x58)) = eax;
    ecx = *((ebp - 0x14));
    ecx += 4;
    *((ebp - 0x5c)) = ecx;
    edx = *((ebp - 0x5c));
    edx += *((ebp - 0x58));
    *((ebp - 0x68)) = edx;
    if (*((ebp - 0x58)) < 0x800) {
        eax = *((ebp - 0x58));
        *((ebp - 0x6c)) = eax;
    } else {
        *((ebp - 0x6c)) = 0x800;
    }
    ecx = *((ebp - 0x6c));
    *((ebp - 0x58)) = ecx;
    *((ebp - 0x4c)) = 1;
    goto label_4;
label_0:
    edx = *((ebp - 0x4c));
    edx++;
    *((ebp - 0x4c)) = edx;
label_4:
    eax = *(0x42af94);
    if (eax >= *((ebp - 0x58))) {
        goto label_5;
    }
    eax = fcn_00411064 (0x100, 2, "ioinit.c", 0xb7);
    *((ebp - 0x64)) = eax;
    if (*((ebp - 0x64)) == 0) {
        ecx = *(0x42af94);
        *((ebp - 0x58)) = ecx;
        goto label_5;
    }
    edx = *((ebp - 0x4c));
    eax = *((ebp - 0x64));
    *((edx*4 + 0x42afe0)) = eax;
    ecx = *(0x42af94);
    ecx += 0x20;
    *(0x42af94) = ecx;
    while (1) {
        edx = *((ebp - 0x64));
        edx += 8;
        *((ebp - 0x64)) = edx;
        eax = *((ebp - 0x4c));
        ecx = *((eax*4 + 0x42afe0));
        ecx += 0x100;
        if (*((ebp - 0x64)) >= ecx) {
            goto label_6;
        }
        edx = *((ebp - 0x64));
        *((edx + 4)) = 0;
        eax = *((ebp - 0x64));
        *(eax) = 0xffffffff;
        ecx = *((ebp - 0x64));
        *((ecx + 5)) = 0xa;
    }
label_6:
    goto label_0;
label_5:
    *((ebp - 0x54)) = 0;
    while (1) {
        edx = *((ebp - 0x54));
        edx++;
        *((ebp - 0x54)) = edx;
        eax = *((ebp - 0x5c));
        eax++;
        *((ebp - 0x5c)) = eax;
        ecx = *((ebp - 0x68));
        ecx += 4;
        *((ebp - 0x68)) = ecx;
        edx = *((ebp - 0x54));
        if (edx >= *((ebp - 0x58))) {
            goto label_3;
        }
        eax = *((ebp - 0x68));
        if (*(eax) != -1) {
            ecx = *((ebp - 0x5c));
            edx = *(ecx);
            edx &= 1;
            if (edx == 0) {
                goto label_7;
            }
            eax = *((ebp - 0x5c));
            ecx = *(eax);
            ecx &= 8;
            if (ecx == 0) {
                edx = *((ebp - 0x68));
                eax = *(edx);
                eax = GetFileType (eax);
                if (eax == 0) {
                    goto label_7;
                }
            }
            ecx = *((ebp - 0x54));
            ecx >>= 5;
            edx = *((ebp - 0x54));
            edx &= 0x1f;
            eax = *((ecx*4 + 0x42afe0));
            ecx = eax + edx*8;
            *((ebp - 0x64)) = ecx;
            edx = *((ebp - 0x64));
            eax = *((ebp - 0x68));
            ecx = *(eax);
            *(edx) = ecx;
            edx = *((ebp - 0x64));
            eax = *((ebp - 0x5c));
            cl = *(eax);
            *((edx + 4)) = cl;
        }
label_7:
    }
label_3:
    *((ebp - 0x54)) = 0;
    while (1) {
        edx = *((ebp - 0x54));
        edx++;
        *((ebp - 0x54)) = edx;
        if (*((ebp - 0x54)) >= 3) {
            goto label_8;
        }
        eax = *((ebp - 0x54));
        ecx = *(0x42afe0);
        edx = ecx + eax*8;
        *((ebp - 0x64)) = edx;
        eax = *((ebp - 0x64));
        if (*(eax) == -1) {
            ecx = *((ebp - 0x64));
            *((ecx + 4)) = 0x81;
            if (*((ebp - 0x54)) == 0) {
                *((ebp - 0x70)) = 0xfffffff6;
            } else {
                edx = *((ebp - 0x54));
                edx--;
                edx = -edx;
                edx -= edx;
                edx += 0xfffffff5;
                *((ebp - 0x70)) = edx;
            }
            eax = *((ebp - 0x70));
            eax = GetStdHandle (eax);
            *((ebp - 0x60)) = eax;
            if (*((ebp - 0x60)) != -1) {
                ecx = *((ebp - 0x60));
                eax = GetFileType (ecx);
                *((ebp - 0x50)) = eax;
                if (*((ebp - 0x50)) != 0) {
                    edx = *((ebp - 0x64));
                    eax = *((ebp - 0x60));
                    *(edx) = eax;
                    ecx = *((ebp - 0x50));
                    ecx &= 0xff;
                    if (ecx == 2) {
                        edx = *((ebp - 0x64));
                        eax = *((edx + 4));
                        eax |= 0x40;
                        ecx = *((ebp - 0x64));
                        *((ecx + 4)) = al;
                    } else {
                        edx = *((ebp - 0x50));
                        edx &= 0xff;
                        if (edx != 3) {
                            goto label_9;
                        }
                        eax = *((ebp - 0x64));
                        ecx = *((eax + 4));
                        ecx |= 8;
                        edx = *((ebp - 0x64));
                        *((edx + 4)) = cl;
                    }
label_9:
                }
            } else {
                eax = *((ebp - 0x64));
                ecx = *((eax + 4));
                ecx |= 0x40;
                edx = *((ebp - 0x64));
                *((edx + 4)) = cl;
            }
        } else {
            eax = *((ebp - 0x64));
            ecx = *((eax + 4));
            ecx |= 0x80;
            edx = *((ebp - 0x64));
            *((edx + 4)) = cl;
        }
    }
label_8:
    eax = *(0x42af94);
    eax = SetHandleCount (eax);
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114e2 */
#include <stdint.h>
 
void fcn_004114e2 (uint32_t arg_8h) {
    return void (*0x412660)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412660 */
#include <stdint.h>
 
int32_t loc_00412660 (int32_t arg_8h) {
    if (*(0x429604) == 1) {
        fcn_004114bf ();
    }
    eax = *((ebp + 8));
    fcn_00411230 (eax);
    uint32_t (*0x428b40)(uint32_t) (0xff);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41100f */
#include <stdint.h>
 
uint32_t fcn_0041100f (void) {
    LPCH var_18h;
    int32_t var_14h;
    LPCH var_10h;
    LPWCH var_ch;
    LPWCH penv;
    uint32_t var_4h;
    *((ebp - 8)) = 0;
    *((ebp - 0x18)) = 0;
    if (*(0x4297d4) == 0) {
        eax = GetEnvironmentStringsW ();
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) != 0) {
            *(0x4297d4) = 1;
        } else {
            eax = GetLastError ();
            if (eax != 0x78) {
                goto label_0;
            }
            *(0x4297d4) = 2;
        }
    }
label_0:
    if (*(0x4297d4) != 1) {
        goto label_1;
    }
    if (*((ebp - 8)) == 0) {
        eax = GetEnvironmentStringsW ();
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) != 0) {
            goto label_2;
        }
        eax = 0;
        goto label_3;
    }
label_2:
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    do {
        ecx = *((ebp - 0xc));
        edx = *(ecx);
        if (edx == 0) {
            goto label_4;
        }
        eax = *((ebp - 0xc));
        eax += 2;
        *((ebp - 0xc)) = eax;
        ecx = *((ebp - 0xc));
        edx = *(ecx);
        if (edx == 0) {
            eax = *((ebp - 0xc));
            eax += 2;
            *((ebp - 0xc)) = eax;
        }
    } while (1);
label_4:
    ecx = *((ebp - 0xc));
    ecx -= *((ebp - 8));
    ecx >>= 1;
    ecx++;
    *((ebp - 0x14)) = ecx;
    edx = *((ebp - 0x14));
    eax = *((ebp - 8));
    eax = WideCharToMultiByte (0, 0, eax, edx, 0, 0, 0, 0);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 4));
        eax = fcn_00411064 (ecx, 2, "a_env.c", 0x61);
        *((ebp - 0x18)) = eax;
        if (*((ebp - 0x18)) != 0) {
            goto label_5;
        }
    }
    edx = *((ebp - 8));
    eax = FreeEnvironmentStringsW (edx);
    eax = 0;
    goto label_3;
label_5:
    eax = *((ebp - 4));
    ecx = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = *((ebp - 8));
    eax = WideCharToMultiByte (0, 0, eax, edx, ecx, eax, 0, 0);
    if (eax == 0) {
        ecx = *((ebp - 0x18));
        fcn_0041141a (ecx, 2);
        *((ebp - 0x18)) = 0;
    }
    edx = *((ebp - 8));
    FreeEnvironmentStringsW (edx);
    eax = *((ebp - 0x18));
    goto label_3;
label_1:
    if (*(0x4297d4) != 2) {
        if (*(0x4297d4) != 0) {
            goto label_6;
        }
    }
    if (*((ebp - 0x18)) == 0) {
        eax = GetEnvironmentStrings ();
        *((ebp - 0x18)) = eax;
        if (*((ebp - 0x18)) != 0) {
            goto label_7;
        }
        eax = 0;
        goto label_3;
    }
label_7:
    eax = *((ebp - 0x18));
    *((ebp - 0x10)) = eax;
    do {
        ecx = *((ebp - 0x10));
        edx = *(ecx);
        if (edx == 0) {
            goto label_8;
        }
        eax = *((ebp - 0x10));
        eax++;
        *((ebp - 0x10)) = eax;
        ecx = *((ebp - 0x10));
        edx = *(ecx);
        if (edx == 0) {
            eax = *((ebp - 0x10));
            eax++;
            *((ebp - 0x10)) = eax;
        }
    } while (1);
label_8:
    ecx = *((ebp - 0x10));
    ecx -= *((ebp - 0x18));
    ecx++;
    *((ebp - 4)) = ecx;
    edx = *((ebp - 4));
    eax = fcn_00411064 (edx, 2, "a_env.c", 0x8c);
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) == 0) {
        eax = *((ebp - 0x18));
        eax = FreeEnvironmentStringsA (eax);
        eax = 0;
    } else {
        ecx = *((ebp - 4));
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x10));
        fcn_00411352 (eax, edx, ecx);
        ecx = *((ebp - 0x18));
        FreeEnvironmentStringsA (ecx);
        eax = *((ebp - 0x10));
        goto label_3;
label_6:
        eax = 0;
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411032 */
#include <stdint.h>
 
int32_t fcn_00411032 (void) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    if (*(0x42b0f8) == 0) {
        fcn_0041109b ();
    }
    *(0x42979c) = 0;
    GetModuleFileNameA (0, 0x429698, 0x104);
    *(0x429668) = 0x429698;
    if (*(0x42b100) != 0) {
        eax = *(0x42b100);
        ecx = *(eax);
        if (ecx != 0) {
            edx = *(0x42b100);
            *((ebp - 0x14)) = edx;
        }
    } else {
        eax = *(0x429668);
        *((ebp - 0x14)) = eax;
    }
    ecx = *((ebp - 0x14));
    *((ebp - 0xc)) = ecx;
    ecx = *((ebp - 0xc));
    fcn_00413b80 (ecx, 0, 0, ebp - 8, ebp - 0x10);
    edx = *((ebp - 8));
    eax = *((ebp - 0x10));
    eax = fcn_00411064 (eax + edx*4, 2, "stdargv.c", 0x82);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        eax |= 0xffffffff;
    } else {
        ecx = *((ebp - 8));
        edx = *((ebp - 4));
        ecx = *((ebp - 4));
        edx = *((ebp - 0xc));
        fcn_00413b80 (edx, ecx, edx + ecx*4, ebp - 8, ebp - 0x10);
        eax = *((ebp - 8));
        eax--;
        *(0x42964c) = eax;
        ecx = *((ebp - 4));
        *(0x429650) = ecx;
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411596 */
#include <stdint.h>
 
int32_t fcn_00411596 (void) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    if (*(0x42b0f8) == 0) {
        fcn_0041109b ();
    }
    *((ebp - 8)) = 0;
    eax = *(0x4295fc);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        goto label_0;
    }
    eax |= 0xffffffff;
    goto label_1;
    do {
label_0:
        ecx = *((ebp - 4));
        edx = *(ecx);
        if (edx == 0) {
            goto label_2;
        }
        eax = *((ebp - 4));
        ecx = *(eax);
        if (ecx != 0x3d) {
            edx = *((ebp - 8));
            edx++;
            *((ebp - 8)) = edx;
        }
        eax = *((ebp - 4));
        fcn_00411235 (eax);
        ecx = *((ebp - 4));
        edx = ecx + eax + 1;
        *((ebp - 4)) = edx;
    } while (1);
label_2:
    eax = *((ebp - 8));
    eax = fcn_00411064 (eax*4 + 4, 2, "stdenvp.c", 0x75);
    *((ebp - 0xc)) = eax;
    edx = *((ebp - 0xc));
    *(0x429658) = edx;
    if (*(0x429658) == 0) {
        eax |= 0xffffffff;
        goto label_1;
    }
    eax = *(0x4295fc);
    *((ebp - 4)) = eax;
    while (1) {
        ecx = *((ebp - 4));
        ecx += *((ebp - 0x10));
        *((ebp - 4)) = ecx;
        edx = *((ebp - 4));
        eax = *(edx);
        if (eax == 0) {
            goto label_3;
        }
        ecx = *((ebp - 4));
        eax = fcn_00411235 (ecx);
        eax++;
        *((ebp - 0x10)) = eax;
        edx = *((ebp - 4));
        eax = *(edx);
        if (eax != 0x3d) {
            ecx = *((ebp - 0x10));
            eax = fcn_00411064 (ecx, 2, "stdenvp.c", 0x82);
            edx = *((ebp - 0xc));
            *(edx) = eax;
            eax = *((ebp - 0xc));
            if (*(eax) == 0) {
                ecx = *(0x429658);
                eax = fcn_0041141a (ecx, 2);
                *(0x429658) = 0;
                eax |= 0xffffffff;
                goto label_1;
            }
            edx = *((ebp - 4));
            eax = *((ebp - 0xc));
            ecx = *(eax);
            fcn_00411258 (ecx, edx);
            edx = *((ebp - 0xc));
            edx += 4;
            *((ebp - 0xc)) = edx;
        }
    }
label_3:
    eax = *(0x4295fc);
    eax = fcn_0041141a (eax, 2);
    *(0x4295fc) = 0;
    ecx = *((ebp - 0xc));
    *(ecx) = 0;
    *(0x42b0e0) = 1;
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411587 */
#include <stdint.h>
 
int32_t fcn_00411587 (int32_t arg_8h) {
    uint32_t var_4h;
    if (*(0x42b0fc) != 0) {
        eax = *((ebp + 8));
        uint32_t (*0x42b0fc)(uint32_t) (eax);
    }
    eax = fcn_00413460 (0x42830c, 0x428520);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
    } else {
        fcn_00411181 (0x4110cd);
        eax = fcn_00413430 (section..data, 0x428208);
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41142e */
#include <stdint.h>
 
int32_t fcn_0041142e (void) {
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    *((ebp - 8)) = 0;
    if (*(0x42b0f8) == 0) {
        fcn_0041109b ();
    }
    if (*(0x42b100) == 0) {
        *((ebp - 0xc)) = 0x4250ec;
    } else {
        eax = *(0x42b100);
        *((ebp - 0xc)) = eax;
    }
    ecx = *((ebp - 0xc));
    *((ebp - 4)) = ecx;
    do {
        edx = *((ebp - 4));
        eax = *(edx);
        if (eax <= 0x20) {
            ecx = *((ebp - 4));
            edx = *(ecx);
            if (edx == 0) {
                goto label_0;
            }
            if (*((ebp - 8)) == 0) {
                goto label_0;
            }
        }
        eax = *((ebp - 4));
        ecx = *(eax);
        if (ecx == 0x22) {
            edx = 0;
            dl = (*((ebp - 8)) == 0) ? 1 : 0;
            *((ebp - 8)) = edx;
        }
        eax = *((ebp - 4));
        ecx = *(eax);
        eax = fcn_004113fc (ecx);
        if (eax != 0) {
            if (*((ebp - 4)) == 0) {
                goto label_1;
            }
            edx = *((ebp - 4));
            edx++;
            *((ebp - 4)) = edx;
        }
label_1:
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
    } while (1);
    do {
label_0:
        ecx = *((ebp - 4));
        edx = *(ecx);
        if (edx == 0) {
            goto label_2;
        }
        eax = *((ebp - 4));
        ecx = *(eax);
        if (ecx > 0x20) {
            goto label_2;
        }
        edx = *((ebp - 4));
        edx++;
        *((ebp - 4)) = edx;
    } while (1);
label_2:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114a6 */
#include <stdint.h>
 
void fcn_004114a6 (HINSTANCE hInstance, int32_t arg_14h) {
    int32_t var_f0h;
    HACCEL hAccTable;
    LPMSG lpMsg;
    int32_t var_18h;
    edi = ebp - 0xf0;
    ecx = 0x3c;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    fcn_004111f9 ();
    esi = esp;
    eax = *((ebp + 8));
    LoadStringA (eax, 0x67, 0x429568, 0x64);
    fcn_00411424 ();
    esi = esp;
    eax = *((ebp + 8));
    LoadStringA (eax, 0x6d, 0x429500, 0x64);
    fcn_00411424 ();
    eax = *((ebp + 8));
    fcn_0041159b (eax);
    eax = *((ebp + 0x14));
    ecx = *((ebp + 8));
    eax = fcn_0041133e (ecx, eax);
    if (eax == 0) {
        eax = 0;
        goto label_0;
    }
    esi = esp;
    eax = *((ebp + 8));
    LoadAcceleratorsA (eax, 0x6d);
    eax = fcn_00411424 ();
    *((ebp - 0x2c)) = eax;
    do {
        esi = esp;
        GetMessageA (ebp - 0x20, 0, 0, 0);
        eax = fcn_00411424 ();
        if (eax == 0) {
            goto label_1;
        }
        esi = esp;
        ecx = *((ebp - 0x2c));
        edx = *((ebp - 0x20));
        TranslateAcceleratorA (edx, ecx, ebp - 0x20);
        eax = fcn_00411424 ();
        if (eax == 0) {
            esi = esp;
            TranslateMessage (ebp - 0x20);
            fcn_00411424 ();
            esi = esp;
            DispatchMessageA (ebp - 0x20);
            fcn_00411424 ();
        }
    } while (1);
label_1:
    eax = *((ebp - 0x18));
label_0:
    ecx = ebp;
    edx = 0x411cf4;
    fcn_004111d1 (eax);
    fcn_00411424 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41158c */
#include <stdint.h>
 
void fcn_0041158c (int32_t arg_8h) {
    return void (*0x413230)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413230 */
#include <stdint.h>
 
int32_t loc_00413230 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_004132b0 (eax, 0, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4132b0 */
#include <stdint.h>
 
int32_t fcn_004132b0 (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h) {
    if (*(0x429678) == 1) {
        eax = *((ebp + 8));
        eax = GetCurrentProcess (eax);
        TerminateProcess (eax);
    }
    *(0x429674) = 1;
    cl = *((ebp + 0x10));
    *(0x429670) = cl;
    if (*((ebp + 0xc)) != 0) {
        goto label_0;
    }
    if (*(0x42b0f4) == 0) {
        goto label_1;
    }
    do {
        edx = *(0x42b0f0);
        edx -= 4;
        *(0x42b0f0) = edx;
        eax = *(0x42b0f0);
        if (eax < *(0x42b0f4)) {
            goto label_1;
        }
        ecx = *(0x42b0f0);
        if (*(ecx) != 0) {
            uint32_t (*0x42b0f0)() ();
        }
    } while (1);
label_1:
    fcn_00413430 (0x428624, 0x42882c);
label_0:
    fcn_00413430 (0x428930, 0x428a34);
    if (*(0x42967c) == 0) {
        eax = fcn_0041114f (0xffffffffffffffff);
        eax &= 0x20;
        if (eax == 0) {
            goto label_2;
        }
        *(0x42967c) = 1;
        fcn_004113de ();
    }
label_2:
    if (*((ebp + 0x10)) != 0) {
    } else {
        *(0x429678) = 1;
        eax = *((ebp + 8));
        fcn_0041122b (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41115e */
#include <stdint.h>
 
void fcn_0041115e (void) {
    return void (*0x413270)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413270 */
#include <stdint.h>
 
void loc_00413270 (void) {
    fcn_004132b0 (0, 0, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114f6 */
#include <stdint.h>
 
int32_t fcn_004114f6 (int32_t arg_8h, struct _EXCEPTION_POINTERS * ExceptionInfo) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 8));
    eax = fcn_00413700 (eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 4));
        if (*((ecx + 8)) != 0) {
            goto label_0;
        }
    }
    edx = *((ebp + 0xc));
    UnhandledExceptionFilter (edx);
    goto label_1;
label_0:
    eax = *((ebp - 4));
    if (*((eax + 8)) == 5) {
        ecx = *((ebp - 4));
        *((ecx + 8)) = 0;
        eax = 1;
        goto label_1;
    }
    edx = *((ebp - 4));
    if (*((edx + 8)) == 1) {
        eax |= 0xffffffff;
        goto label_1;
    }
    eax = *((ebp - 4));
    ecx = *((eax + 8));
    *((ebp - 0x10)) = ecx;
    edx = *(0x429690);
    *((ebp - 8)) = edx;
    eax = *((ebp + 0xc));
    *(0x429690) = eax;
    ecx = *((ebp - 4));
    if (*((ecx + 4)) != 8) {
        goto label_2;
    }
    edx = *(0x428c08);
    *((ebp - 0xc)) = edx;
    while (1) {
        eax = *((ebp - 0xc));
        eax++;
        *((ebp - 0xc)) = eax;
        ecx = *(0x428c08);
        ecx += *(0x428c0c);
        if (*((ebp - 0xc)) >= ecx) {
            goto label_3;
        }
        edx = *((ebp - 0xc));
        edx *= 0xc;
        *((edx + 0x428b98)) = 0;
    }
label_3:
    eax = *(0x428c14);
    *((ebp - 0x14)) = eax;
    ecx = *((ebp - 4));
    if (*(ecx) == 0xc000008e) {
        *(0x428c14) = 0x83;
    } else {
        edx = *((ebp - 4));
        if (*(edx) == 0xc0000090) {
            *(0x428c14) = 0x81;
        } else {
            eax = *((ebp - 4));
            if (*(eax) == 0xc0000091) {
                *(0x428c14) = 0x84;
            } else {
                ecx = *((ebp - 4));
                if (*(ecx) == 0xc0000093) {
                    *(0x428c14) = 0x85;
                } else {
                    edx = *((ebp - 4));
                    if (*(edx) == 0xc000008d) {
                        *(0x428c14) = 0x82;
                    } else {
                        eax = *((ebp - 4));
                        if (*(eax) == 0xc000008f) {
                            *(0x428c14) = 0x86;
                        } else {
                            ecx = *((ebp - 4));
                            if (*(ecx) != 0xc0000092) {
                                goto label_4;
                            }
                            *(0x428c14) = 0x8a;
                        }
                    }
                }
            }
        }
    }
label_4:
    edx = *(0x428c14);
    uint32_t (*ebp - 0x10)(uint32_t, uint32_t) (8, edx);
    eax = *((ebp - 0x14));
    *(0x428c14) = eax;
    goto label_5;
label_2:
    ecx = *((ebp - 4));
    *((ecx + 8)) = 0;
    edx = *((ebp - 4));
    eax = *((edx + 4));
    eax = uint32_t (*ebp - 0x10)(uint32_t) (eax);
label_5:
    ecx = *((ebp - 8));
    *(0x429690) = ecx;
    eax |= 0xffffffff;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411212 */
#include <stdint.h>
 
void fcn_00411212 (int32_t arg_8h) {
    return void (*0x413250)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413250 */
#include <stdint.h>
 
int32_t loc_00413250 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_004132b0 (eax, 1, 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411172 */
#include <stdint.h>
 
void fcn_00411172 (void) {
    return void (*0x413290)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413290 */
#include <stdint.h>
 
void loc_00413290 (void) {
    fcn_004132b0 (0, 1, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41119f */
#include <stdint.h>
 
int32_t fcn_0041119f (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, uint32_t arg_18h, int32_t arg_1ch) {
    int32_t var_3038h;
    char * var_3034h;
    int32_t var_3030h;
    int32_t var_301ch;
    uint32_t var_3018h;
    HMODULE hModule;
    int32_t var_3010h;
    int32_t var_300fh;
    int32_t var_2010h;
    int32_t var_200fh;
    LPCSTR lpOutputString;
    int32_t var_100fh;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = 0x3038;
    fcn_00411131 ();
    eax = *(0x428eb0);
    *((ebp - 0xc)) = eax;
    *((ebp - 0x2010)) = 0;
    ecx = 0x3ff;
    eax = 0;
    edi = ebp - 0x200f;
    memset (edi, eax, ecx);
    *(es:edi) = ax;
    es:edi += 2;
    *(es:edi) = al;
    es:edi++;
    *((ebp - 0x1010)) = 0;
    ecx = 0x3ff;
    eax = 0;
    edi = ebp - 0x100f;
    memset (edi, eax, ecx);
    *(es:edi) = ax;
    es:edi += 2;
    *(es:edi) = al;
    es:edi++;
    *((ebp - 0x3010)) = 0;
    ecx = 0x3ff;
    eax = 0;
    edi = ebp - 0x300f;
    memset (edi, eax, ecx);
    *(es:edi) = ax;
    es:edi += 2;
    *(es:edi) = al;
    es:edi++;
    eax = ebp + 0x1c;
    *((ebp - 4)) = eax;
    if (*((ebp + 8)) >= 0) {
        if (*((ebp + 8)) < 3) {
            goto label_0;
        }
    }
    eax |= 0xffffffff;
    goto label_1;
label_0:
    if (*((ebp + 8)) == 2) {
        eax = InterlockedIncrement (0x428d18);
        if (eax <= 0) {
            goto label_2;
        }
        if (*(0x4297dc) == 0) {
            eax = LoadLibraryA ("user32.dll");
            *((ebp - 0x3014)) = eax;
            if (*((ebp - 0x3014)) != 0) {
                ecx = *((ebp - 0x3014));
                eax = GetProcAddress (ecx, "wsprintfA");
                *(0x4297dc) = eax;
                if (*(0x4297dc) != 0) {
                    goto label_3;
                }
            }
            eax |= 0xffffffff;
            goto label_1;
        }
label_3:
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        uint32_t (*0x4297dc)(uint32_t, char*, uint32_t, uint32_t) (ebp - 0x1010, "Second Chance Assertion Failed: File %s, Line %d\n", eax, edx);
        OutputDebugStringA (ebp - 0x1010);
        InterlockedDecrement (0x428d18);
        eax = fcn_00411037 ();
        eax |= 0xffffffff;
        goto label_1;
    }
label_2:
    if (*((ebp + 0x18)) != 0) {
        eax = *((ebp - 4));
        ecx = *((ebp + 0x18));
        eax = fcn_0041127b (ebp - 0x3010, 0xfeb, ecx, eax);
        if (eax >= 0) {
            goto label_4;
        }
        fcn_00411258 (ebp - 0x3010, "_CrtDbgReport: String too long or IO Error");
    }
label_4:
    if (*((ebp + 8)) == 2) {
        if (*((ebp + 0x18)) != 0) {
            *((ebp - 0x3034)) = "Assertion failed: ";
        } else {
            *((ebp - 0x3034)) = 0x425be4;
        }
        ecx = *((ebp - 0x3034));
        fcn_00411258 (ebp - 0x2010, ecx);
    }
    fcn_0041120d (ebp - 0x2010, ebp - 0x3010);
    if (*((ebp + 8)) == 2) {
        edx = *((ebp + 8));
        eax = *((edx*4 + 0x428d1c));
        eax &= 1;
        if (eax != 0) {
            fcn_0041120d (ebp - 0x2010, 0x425be0);
        }
        fcn_0041120d (ebp - 0x2010, 0x425bdc);
    }
    if (*((ebp + 0xc)) != 0) {
        eax = ebp - 0x2010;
        ecx = *((ebp + 0x10));
        edx = *((ebp + 0xc));
        eax = fcn_0041100a (ebp - 0x1010, 0x1000, "%s(%d) : %s", edx);
        if (eax < 0) {
            fcn_00411258 (ebp - 0x1010, "_CrtDbgReport: String too long or IO Error");
        }
    } else {
        fcn_00411258 (ebp - 0x1010, ebp - 0x2010);
    }
    if (*(0x42af7c) == 0) {
        goto label_5;
    }
    ecx = *(0x42af7c);
    *((ebp - 0x3018)) = ecx;
    while (1) {
        edx = *((ebp - 0x3018));
        eax = *((edx + 4));
        *((ebp - 0x3018)) = eax;
        if (*((ebp - 0x3018)) == 0) {
            goto label_5;
        }
        eax = *((ebp + 8));
        ecx = *((ebp - 0x3018));
        eax = uint32_t (*ecx + 0xc)(uint32_t, uint32_t, uint32_t) (eax, ebp - 0x1010, ebp - 8);
        if (eax != 0) {
            if (*((ebp + 8)) == 2) {
                InterlockedDecrement (0x428d18);
            }
            eax = *((ebp - 8));
            goto label_1;
        }
    }
label_5:
    if (*(0x42af6c) != 0) {
        ecx = *((ebp + 8));
        eax = uint32_t (*0x42af6c)(uint32_t, uint32_t, uint32_t) (ecx, ebp - 0x1010, ebp - 8);
        if (eax != 0) {
            if (*((ebp + 8)) == 2) {
                InterlockedDecrement (0x428d18);
            }
            eax = *((ebp - 8));
        }
    } else {
        edx = *((ebp + 8));
        eax = *((edx*4 + 0x428d1c));
        eax &= 1;
        if (eax != 0) {
            ecx = *((ebp + 8));
            if (*((ecx*4 + 0x428d28)) == -1) {
                goto label_6;
            }
            edx = ebp - 0x301c;
            eax = fcn_00411235 (ebp - 0x1010);
            edx = *((ebp + 8));
            eax = *((edx*4 + 0x428d28));
            WriteFile (eax, ebp - 0x1010, eax);
        }
label_6:
        ecx = *((ebp + 8));
        edx = *((ecx*4 + 0x428d1c));
        edx &= 2;
        if (edx != 0) {
            OutputDebugStringA (ebp - 0x1010);
        }
        ecx = *((ebp + 8));
        edx = *((ecx*4 + 0x428d1c));
        edx &= 4;
        if (edx != 0) {
            if (*((ebp + 0x10)) != 0) {
                ecx = *((ebp + 0x10));
                eax = fcn_004111e0 (ecx, ebp - 0x3030, 0xa);
                *((ebp - 0x3038)) = eax;
            } else {
                *((ebp - 0x3038)) = 0;
            }
            eax = *((ebp + 0x14));
            ecx = *((ebp - 0x3038));
            edx = *((ebp + 0xc));
            eax = *((ebp + 8));
            eax = fcn_00415880 (eax, edx, ecx, eax, ebp - 0x3010);
            *((ebp - 8)) = eax;
            if (*((ebp + 8)) == 2) {
                InterlockedDecrement (0x428d18);
            }
            eax = *((ebp - 8));
        } else {
            if (*((ebp + 8)) == 2) {
                eax = InterlockedDecrement (0x428d18);
            }
            eax = 0;
        }
    }
label_1:
    ecx = *((ebp - 0xc));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4115b4 */
#include <stdint.h>
 
void fcn_004115b4 (void) {
    return void (*0x412850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412850 */
#include <stdint.h>
 
int32_t loc_00412850 (void) {
    eax = *(0x42960c);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412a60 */
#include <stdint.h>
 
int32_t fcn_00412a60 (void) {
    ULONG_PTR * lpArguments;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_4h;
    int32_t var_8h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    eax = 0;
    *((ebp - 0x19)) = al;
    *((ebp - 0x34)) = 0x1001;
    ecx = *((ebp + 8));
    *((ebp - 0x30)) = ecx;
    edx = ebp - 0x19;
    *((ebp - 0x2c)) = edx;
    *((ebp - 4)) = eax;
    RaiseException (0x406d1388, eax, 6, ebp - 0x34, edi, esi, ebx, eax, 0x4111a4, 0x425528, 0xffffffffffffffff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412b00 */
#include <stdint.h>
 
int32_t fcn_00412b00 (void) {
    ULONG_PTR * lpArguments;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    eax = 0;
    *((ebp - 0x19)) = al;
    *((ebp - 0x34)) = 0x1002;
    ecx = *((ebp + 8));
    *((ebp - 0x30)) = ecx;
    edx = *((ebp + 0xc));
    *((ebp - 0x2c)) = edx;
    ecx = *((ebp + 0x10));
    *((ebp - 0x28)) = ecx;
    edx = ebp - 0x19;
    *((ebp - 0x24)) = edx;
    ecx = *((ebp + 0x14));
    *((ebp - 0x20)) = ecx;
    *((ebp - 4)) = eax;
    RaiseException (0x406d1388, eax, 6, ebp - 0x34, edi, esi, ebx, eax, 0x4111a4, 0x425538, 0xffffffffffffffff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4130a0 */
#include <stdint.h>
 
int32_t fcn_004130a0 (void) {
    eax = *(0x429628);
    if (eax == 0) {
        eax = fcn_004130e0 ();
        if (eax == 0) {
            RaiseException (0xc0000135, eax, eax, eax);
        }
        *(0x429628) = 1;
    }
    uint32_t (*0x429610)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4130e0 */
#include <stdint.h>
 
uint32_t fcn_004130e0 (void) {
    int32_t var_4h;
    eax = LoadLibraryA ("Kernel32.dll", esi);
    eax = GetProcAddress (eax, "IsDebuggerPresent");
    *(0x429610) = eax;
    if (eax == 0) {
        eax = 0x94;
        fcn_00414c20 ();
        esi = esp;
        *(esi) = 0x94;
        eax = GetVersionExA (esi);
        if (eax != 0) {
            if (*((esi + 0x10)) != 1) {
                goto label_0;
            }
            if (*((esi + 4)) != 4) {
                goto label_0;
            }
            eax = 0x413180;
            ecx = 0;
            cl = (eax != 0) ? 1 : 0;
            *(0x429610) = eax;
            eax = ecx;
            esp = ebp - 4;
            return eax;
        }
label_0:
        eax = *(0x429610);
    }
    ecx = 0;
    cl = (eax != 0) ? 1 : 0;
    eax = ecx;
    esp = ebp - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411334 */
#include <stdint.h>
 
int32_t fcn_00411334 (int32_t arg_8h, int32_t arg_ch, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_40h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    LPVOID var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_ch_2;
    int32_t var_10h_2;
    int32_t var_14h_2;
    int32_t var_1ah;
    eax = 0x400;
    fcn_00414c20 (edi);
    eax = *((ebp + 0x14));
    ecx = *((ebp + 0xc));
    ebx = *((ebp + 0x18));
    esi = *((ebp + 8));
    *(eax) = 0;
    *((ebp - 0xc)) = esp;
    *(ecx) = 0;
    *((ebp - 0x1c)) = 0;
    *(ebx) = 0;
    eax = fcn_004160c0 (esi);
    edi = eax;
    if (edi == 0) {
        goto label_1;
    }
    ecx = *((edi + 4));
    eax = *(0x429838);
    edx = *((edi + 0x18));
    esi -= ecx;
    *(ebx) = edx;
    *((ebp - 0x1c)) = 1;
    if (eax == 0) {
        eax = *(0x4297e0);
        if (eax != 0) {
            goto label_1;
        }
        eax = fcn_00416570 ();
        *(0x4297e0) = eax;
        if (eax == 0) {
            goto label_1;
        }
        eax = GetProcAddress (eax, "PDBOpenValidate3");
        *(0x4297f0) = eax;
        if (eax != 0) {
            eax = *(0x4297e0);
            eax = void (*ebx)(uint32_t, char*) (eax, "PDBOpenDBI");
            *(0x4297f4) = eax;
            if (eax == 0) {
                goto label_2;
            }
            ecx = *(0x4297e0);
            eax = void (*ebx)(uint32_t, char*) (ecx, "DBIQueryModFromAddr");
            *(0x4297f8) = eax;
            if (eax == 0) {
                goto label_2;
            }
            edx = *(0x4297e0);
            eax = void (*ebx)(uint32_t, char*) (edx, "ModQueryLines");
            *(0x4297fc) = eax;
            if (eax == 0) {
                goto label_2;
            }
            eax = *(0x4297e0);
            eax = void (*ebx)(uint32_t, char*) (eax, "ModClose");
            *(0x429800) = eax;
            if (eax == 0) {
                goto label_2;
            }
            ecx = *(0x4297e0);
            eax = void (*ebx)(uint32_t, char*) (ecx, "DBIClose");
            *(0x429804) = eax;
            if (eax == 0) {
                goto label_2;
            }
            edx = *(0x4297e0);
            eax = void (*ebx)(uint32_t, char*) (edx, "PDBClose");
            *(0x429808) = eax;
            if (eax != 0) {
                goto label_3;
            }
        }
label_2:
        eax = 0;
        esp = ebp - 0x40;
        return eax;
label_3:
        *(0x429838) = 1;
    }
    eax = *((edi + 0x10));
    edx = 0;
    dx = *((eax + 6));
    ebx = 0;
    *((ebp - 0x10)) = edx;
    if (dx <= 0) {
        goto label_1;
    }
    ecx = *((edi + 0x14));
    while (bx < dx) {
        eax = (int32_t) bx;
        eax *= 5;
        eax <<= 3;
        if (*((ecx + eax + 0xc)) < esi) {
            edx = *((edi + 0x14));
            eax += edx;
            edx = esi;
            edx -= *((eax + 0xc));
            if (edx < *((eax + 0x10))) {
                goto label_4;
            }
            edx = *((ebp - 0x10));
        }
        ebx++;
    }
    eax = *((ebp - 0x1c));
    esp = ebp - 0x40;
    return eax;
label_4:
    eax = (int32_t) bx;
    eax *= 5;
    esi -= *((ecx + eax*8 + 0xc));
    *((ebp - 0x20)) = esi;
    if (esi == -1) {
        goto label_1;
    }
    eax = 0x104;
    fcn_00414c20 ();
    eax = esp;
    edx = *((ebp - 0xc));
    ecx = *((edi + 0x18));
    eax = uint32_t (*0x4297f0)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (ecx, 0x4250ec, ebp - 0x30, edx, eax, ebp - 0x2c, ebp - 0x28, ebp - 0x18);
    if (eax == 0) {
        goto label_1;
    }
    eax = *((ebp - 0x18));
    eax = uint32_t (*0x4297f4)(uint32_t, uint32_t, uint32_t, uint32_t) (eax, 0x425e20, 0, ebp - 0x14);
    if (eax == 0) {
        goto label_5;
    }
    edx = *((ebp - 0x14));
    ebx++;
    eax = uint32_t (*0x4297f8)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (edx, ebx, esi, ebp - 8, ebp + 0x1a, ebp - 0x34, ebp - 4);
    if (eax == 0) {
        goto label_6;
    }
    ecx = *((ebp - 8));
    eax = uint32_t (*0x4297fc)(uint32_t, uint32_t, uint32_t) (ecx, 0, ebp - 4);
    if (eax == 0) {
        goto label_7;
    }
    eax = *((ebp - 4));
    if (eax == 0) {
        goto label_7;
    }
    eax = GetProcessHeap (0, eax);
    eax = HeapAlloc (eax);
    edi = eax;
    eax = *((ebp - 8));
    *((ebp - 0x10)) = edi;
    eax = uint32_t (*0x4297fc)(uint32_t, uint32_t, uint32_t) (eax, edi, ebp - 4);
    if (eax == 0) {
        goto label_7;
    }
    eax = *(edi);
    ebx = 0;
    *((ebp - 0xc)) = ebx;
    if (eax <= 0) {
        goto label_8;
    }
label_0:
    eax = *((edi + ebx*4 + 4));
    edx = *((eax + edi));
    eax += edi;
    esi = eax + edx*4 + 4;
    ecx = esi + edx*8;
    *((ebp - 0x24)) = ecx;
    ecx = 0;
    if (edx <= 0) {
        goto label_9;
    }
    do {
        ebx = *((ebp - 0x20));
        if (*((esi + ecx*8)) <= ebx) {
            if (ebx <= *((esi + ecx*8 + 4))) {
                goto label_10;
            }
        }
        ecx++;
    } while (ecx < edx);
    ebx = *((ebp - 0xc));
label_9:
    eax = *(edi);
    ebx++;
    *((ebp - 0xc)) = ebx;
    if (ebx < eax) {
        goto label_0;
    }
    goto label_8;
label_10:
    eax = *((eax + ecx*4 + 4));
    esi = *((eax + edi + 2));
    eax += edi;
    edx = eax + esi*4 + 4;
    *((ebp - 0x20)) = edx;
    edi |= 0xffffffff;
    edx = 0;
    *((ebp - 0xc)) = edi;
    if (esi <= 0) {
        goto label_11;
    }
    do {
        ecx = ebx;
        ecx -= *((eax + edx*4 + 4));
        if (ecx < edi) {
            *((ebp - 0xc)) = edx;
            edi = ecx;
        }
        edx++;
    } while (edx < esi);
    eax = *((ebp - 0xc));
    if (eax < 0) {
        goto label_11;
    }
    ecx = *((ebp - 0x20));
    edx = *((ecx + eax*2));
    eax = *((ebp + 0x14));
    edi = *((ebp + 0x10));
    *(eax) = edx;
    eax = *((ebp - 0x24));
    dl = *(eax);
    ecx = 0;
    if (dl == 0) {
        goto label_12;
    }
    esi = *((ebp + 0xc));
    esi -= eax;
    do {
        if (ecx >= edi) {
            goto label_13;
        }
        dl = *(eax);
        *((esi + eax)) = dl;
        dl = *((eax + 1));
        ecx++;
        eax++;
    } while (dl != 0);
label_12:
    if (ecx >= edi) {
label_13:
        ecx = edi - 1;
    }
    eax = *((ebp + 0xc));
    *((ecx + eax)) = 0;
label_11:
    edi = *((ebp - 0x10));
label_8:
    eax = GetProcessHeap (0, edi);
    HeapFree (eax);
label_7:
    ecx = *((ebp - 8));
    uint32_t (*0x429800)(uint32_t) (ecx);
label_6:
    edx = *((ebp - 0x14));
    uint32_t (*0x429804)(uint32_t) (edx);
label_5:
    eax = *((ebp - 0x18));
    uint32_t (*0x429808)(uint32_t) (eax);
label_1:
    eax = *((ebp - 0x1c));
    esp = ebp - 0x40;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x412e30 */
#include <stdint.h>
 
int32_t fcn_00412e30 (int32_t arg_8h) {
    eax = *((ebp + 8));
    bl = (eax < 0) ? 1 : 0;
    ecx = 0xe;
    *(0x429622) = 0;
    do {
        edx:eax = (int64_t) eax;
        esi = 0xa;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        ecx--;
        dl += 0x30;
        *((ecx + 0x429614)) = dl;
    } while (eax != 0);
    if (bl != 0) {
        ecx--;
        *((ecx + 0x429614)) = 0x2d;
    }
    eax = ecx + 0x429614;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413190 */
#include <stdint.h>
 
int32_t fcn_00413190 (void) {
    fcn_004131a0 ();
    eax = *((eax + 0x20));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4131a0 */
#include <stdint.h>
 
int32_t fcn_004131a0 (void) {
    eax = *(fs:0x18);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413460 */
#include <stdint.h>
 
int32_t fcn_00413460 (int32_t arg_8h, uint32_t arg_ch) {
    uint32_t var_4h;
    *((ebp - 4)) = 0;
    do {
        eax = *((ebp + 8));
        if (eax >= *((ebp + 0xc))) {
            goto label_0;
        }
        if (*((ebp - 4)) != 0) {
            goto label_0;
        }
        ecx = *((ebp + 8));
        if (*(ecx) != 0) {
            edx = *((ebp + 8));
            eax = uint32_t (*edx)() ();
            *((ebp - 4)) = eax;
        }
        eax = *((ebp + 8));
        eax += 4;
        *((ebp + 8)) = eax;
    } while (1);
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411181 */
#include <stdint.h>
 
void fcn_00411181 (int32_t arg_8h) {
    return void (*0x416820)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x416820 */
#include <stdint.h>
 
int32_t loc_00416820 (int32_t arg_8h) {
    eax = *((ebp + 8));
    eax = fcn_0041136b (eax);
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41136b */
#include <stdint.h>
 
int32_t fcn_0041136b (int32_t arg_8h) {
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *(0x42b0f4);
    eax = fcn_0041128a (eax, 2);
    *((ebp - 8)) = eax;
    ecx = *(0x42b0f0);
    ecx -= *(0x42b0f4);
    ecx += 4;
    if (*((ebp - 8)) < ecx) {
        if (*((ebp - 8)) < 0x800) {
            edx = *((ebp - 8));
            *((ebp - 0xc)) = edx;
        } else {
            *((ebp - 0xc)) = 0x800;
        }
        eax = *((ebp - 8));
        eax += *((ebp - 0xc));
        ecx = *(0x42b0f4);
        eax = fcn_004114ec (ecx, eax, 2, "onexit.c", 0x7d);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) == 0) {
            edx = *((ebp - 8));
            edx += 0x10;
            eax = *(0x42b0f4);
            eax = fcn_004114ec (eax, edx, 2, "onexit.c", 0x83);
            *((ebp - 4)) = eax;
            if (*((ebp - 4)) != 0) {
                goto label_0;
            }
            eax = 0;
            goto label_1;
        }
label_0:
        ecx = *(0x42b0f0);
        ecx -= *(0x42b0f4);
        ecx >>= 2;
        edx = *((ebp - 4));
        eax = edx + ecx*4;
        *(0x42b0f0) = eax;
        ecx = *((ebp - 4));
        *(0x42b0f4) = ecx;
    }
    edx = *(0x42b0f0);
    eax = *((ebp + 8));
    *(edx) = eax;
    ecx = *(0x42b0f0);
    ecx += 4;
    *(0x42b0f0) = ecx;
    eax = *((ebp + 8));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413430 */
#include <stdint.h>
 
int32_t fcn_00413430 (int32_t arg_8h, uint32_t arg_ch) {
    do {
        eax = *((ebp + 8));
        if (eax >= *((ebp + 0xc))) {
            goto label_0;
        }
        ecx = *((ebp + 8));
        if (*(ecx) != 0) {
            edx = *((ebp + 8));
            uint32_t (*edx)() ();
        }
        eax = *((ebp + 8));
        eax += 4;
        *((ebp + 8)) = eax;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41114f */
#include <stdint.h>
 
int32_t fcn_0041114f (uint32_t arg_8h) {
    int32_t var_4h;
    eax = *(0x428d4c);
    *((ebp - 4)) = eax;
    if (*((ebp + 8)) != -1) {
        ecx = *((ebp + 8));
        ecx &= 4;
        if (ecx != 0) {
            *(0x429858) = 1;
        } else {
            edx = *((ebp + 8));
            edx >>= 0x10;
            edx &= 0xffff;
            *(0x429858) = edx;
        }
        *(0x429848) = 0;
        eax = *((ebp + 8));
        *(0x428d4c) = eax;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113de */
#include <stdint.h>
 
uint32_t fcn_004113de (void) {
    int32_t var_34h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_20h;
    fcn_00411294 (ebp - 0x34);
    if (*((ebp - 0x20)) == 0) {
        if (*((ebp - 0x2c)) != 0) {
            goto label_0;
        }
        ecx = *(0x428d4c);
        ecx &= 0x10;
        if (ecx == 0) {
            goto label_1;
        }
        if (*((ebp - 0x28)) == 0) {
            goto label_1;
        }
    }
label_0:
    eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "Detected memory leaks!\n");
    if (eax == 1) {
        __asm ("int3");
    }
    fcn_004114b0 (0);
    eax = 1;
    goto label_2;
label_1:
    eax = 0;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413700 */
#include <stdint.h>
 
int32_t fcn_00413700 (uint32_t arg_8h) {
    uint32_t var_4h;
    *((ebp - 4)) = 0x428b90;
    do {
        eax = *((ebp - 4));
        ecx = *(eax);
        if (ecx == *((ebp + 8))) {
            goto label_0;
        }
        edx = *((ebp - 4));
        edx += 0xc;
        *((ebp - 4)) = edx;
        eax = *(0x428c10);
        eax *= 0xc;
        eax += 0x428b90;
        if (*((ebp - 4)) >= eax) {
            goto label_0;
        }
    } while (1);
label_0:
    ecx = *(0x428c10);
    ecx *= 0xc;
    ecx += 0x428b90;
    if (*((ebp - 4)) < ecx) {
        edx = *((ebp - 4));
        eax = *(edx);
        if (eax == *((ebp + 8))) {
            goto label_1;
        }
    }
    eax = 0;
    goto label_2;
label_1:
    eax = *((ebp - 4));
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41109b */
#include <stdint.h>
 
void fcn_0041109b (void) {
    return void (*0x41a010)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41a010 */
#include <stdint.h>
 
uint32_t loc_0041a010 (void) {
    if (*(0x42b0f8) == 0) {
        eax = fcn_00411023 (0xfffffffffffffffd);
        *(0x42b0f8) = 1;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411023 */
#include <stdint.h>
 
int32_t fcn_00411023 (UINT CodePage) {
    int32_t var_2ch;
    LPCPINFO lpCPInfo;
    int32_t var_22h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 8));
    eax = fcn_00419a50 (eax);
    *((ebp + 8)) = eax;
    ecx = *((ebp + 8));
    if (ecx == *(0x42ae44)) {
        eax = 0;
        goto label_4;
    }
    if (*((ebp + 8)) == 0) {
        fcn_00419b60 ();
        eax = fcn_00419c00 ();
        eax = 0;
        goto label_4;
    }
    *((ebp - 8)) = 0;
    goto label_5;
label_2:
    edx = *((ebp - 8));
    edx++;
    *((ebp - 8)) = edx;
label_5:
    if (*((ebp - 8)) >= 5) {
        goto label_6;
    }
    eax = *((ebp - 8));
    eax *= 0x30;
    ecx = *((eax + 0x428d80));
    if (ecx != *((ebp + 8))) {
        goto label_7;
    }
    *((ebp - 0x10)) = 0;
    while (1) {
        edx = *((ebp - 0x10));
        edx++;
        *((ebp - 0x10)) = edx;
        if (*((ebp - 0x10)) >= 0x101) {
            goto label_8;
        }
        eax = *((ebp - 0x10));
        *((eax + 0x42ad40)) = 0;
    }
label_8:
    *((ebp - 4)) = 0;
    goto label_9;
label_1:
    ecx = *((ebp - 4));
    ecx++;
    *((ebp - 4)) = ecx;
label_9:
    if (*((ebp - 4)) >= 4) {
        goto label_10;
    }
    edx = *((ebp - 8));
    edx *= 0x30;
    eax = *((ebp - 4));
    ecx = edx + eax*8 + 0x428d90;
    *((ebp - 0xc)) = ecx;
    goto label_11;
label_0:
    edx = *((ebp - 0xc));
    edx += 2;
    *((ebp - 0xc)) = edx;
label_11:
    eax = *((ebp - 0xc));
    ecx = *(eax);
    if (ecx == 0) {
        goto label_12;
    }
    edx = *((ebp - 0xc));
    eax = *((edx + 1));
    if (eax == 0) {
        goto label_12;
    }
    ecx = *((ebp - 0xc));
    edx = *(ecx);
    *((ebp - 0x10)) = edx;
    while (1) {
        eax = *((ebp - 0x10));
        eax++;
        *((ebp - 0x10)) = eax;
        ecx = *((ebp - 0xc));
        edx = *((ecx + 1));
        if (*((ebp - 0x10)) > edx) {
            goto label_13;
        }
        eax = *((ebp - 4));
        ecx = *((eax + 0x428d78));
        edx = *((ebp - 0x10));
        eax = *((edx + 0x42ad41));
        eax |= ecx;
        ecx = *((ebp - 0x10));
        *((ecx + 0x42ad41)) = al;
    }
label_13:
    goto label_0;
label_12:
    goto label_1;
label_10:
    edx = *((ebp + 8));
    *(0x42ae44) = edx;
    *(0x42ad2c) = 1;
    eax = *(0x42ae44);
    eax = fcn_00419ac0 (eax);
    *(0x42acb4) = eax;
    *((ebp - 4)) = 0;
    while (1) {
        ecx = *((ebp - 4));
        ecx++;
        *((ebp - 4)) = ecx;
        if (*((ebp - 4)) >= 6) {
            goto label_14;
        }
        edx = *((ebp - 8));
        edx *= 0x30;
        eax = *((ebp - 4));
        ecx = *((ebp - 4));
        dx = *((edx + ecx*2 + 0x428d84));
        *((eax*2 + 0x42ae50)) = dx;
    }
label_14:
    eax = fcn_00419c00 ();
    eax = 0;
    goto label_4;
label_7:
    goto label_2;
label_6:
    ecx = *((ebp + 8));
    eax = GetCPInfo (ecx, ebp - 0x28);
    if (eax != 1) {
        goto label_15;
    }
    *((ebp - 0x10)) = 0;
    while (1) {
        edx = *((ebp - 0x10));
        edx++;
        *((ebp - 0x10)) = edx;
        if (*((ebp - 0x10)) >= 0x101) {
            goto label_16;
        }
        eax = *((ebp - 0x10));
        *((eax + 0x42ad40)) = 0;
    }
label_16:
    ecx = *((ebp + 8));
    *(0x42ae44) = ecx;
    *(0x42acb4) = 0;
    if (*((ebp - 0x28)) <= 1) {
        goto label_17;
    }
    edx = ebp - 0x22;
    *((ebp - 0x2c)) = edx;
    goto label_18;
label_3:
    eax = *((ebp - 0x2c));
    eax += 2;
    *((ebp - 0x2c)) = eax;
label_18:
    ecx = *((ebp - 0x2c));
    edx = *(ecx);
    if (edx == 0) {
        goto label_19;
    }
    eax = *((ebp - 0x2c));
    ecx = *((eax + 1));
    if (ecx == 0) {
        goto label_19;
    }
    edx = *((ebp - 0x2c));
    eax = *(edx);
    *((ebp - 0x10)) = eax;
    while (1) {
        ecx = *((ebp - 0x10));
        ecx++;
        *((ebp - 0x10)) = ecx;
        edx = *((ebp - 0x2c));
        eax = *((edx + 1));
        if (*((ebp - 0x10)) > eax) {
            goto label_20;
        }
        ecx = *((ebp - 0x10));
        edx = *((ecx + 0x42ad41));
        edx |= 4;
        eax = *((ebp - 0x10));
        *((eax + 0x42ad41)) = dl;
    }
label_20:
    goto label_3;
label_19:
    *((ebp - 0x10)) = 1;
    while (1) {
        ecx = *((ebp - 0x10));
        ecx++;
        *((ebp - 0x10)) = ecx;
        if (*((ebp - 0x10)) >= 0xff) {
            goto label_21;
        }
        edx = *((ebp - 0x10));
        eax = *((edx + 0x42ad41));
        eax |= 8;
        ecx = *((ebp - 0x10));
        *((ecx + 0x42ad41)) = al;
    }
label_21:
    edx = *(0x42ae44);
    eax = fcn_00419ac0 (edx);
    *(0x42acb4) = eax;
    *(0x42ad2c) = 1;
    goto label_22;
label_17:
    *(0x42ad2c) = 0;
label_22:
    *((ebp - 4)) = 0;
    while (1) {
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) >= 6) {
            goto label_23;
        }
        ecx = *((ebp - 4));
        *((ecx*2 + 0x42ae50)) = 0;
    }
label_23:
    eax = fcn_00419c00 ();
    eax = 0;
    goto label_4;
label_15:
    if (*(0x429864) != 0) {
        fcn_00419b60 ();
        eax = fcn_00419c00 ();
        eax = 0;
    } else {
        eax |= 0xffffffff;
    }
label_4:
    ecx = *((ebp - 0x14));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113fc */
#include <stdint.h>
 
void fcn_004113fc (int32_t arg_8h) {
    return void (*0x419570)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x419570 */
#include <stdint.h>
 
int32_t loc_00419570 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_00419600 (eax, 0, 4);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x419600 */
#include <stdint.h>
 
uint32_t fcn_00419600 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    int32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 8));
    *((ebp + 8)) = eax;
    ecx = *((ebp + 8));
    edx = *((ecx + 0x42ad41));
    edx &= *((ebp + 0x10));
    if (edx == 0) {
        if (*((ebp + 0xc)) != 0) {
            eax = *((ebp + 8));
            ecx = *(str.________________________________H);
            edx = *((ecx + eax*2));
            edx &= *((ebp + 0xc));
            *((ebp - 4)) = edx;
        } else {
            *((ebp - 4)) = 0;
        }
        if (*((ebp - 4)) == 0) {
            *((ebp - 8)) = 0;
        }
    } else {
        *((ebp - 8)) = 1;
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411235 */
#include <stdint.h>
 
int32_t fcn_00411235 (int32_t arg_4h) {
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
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411064 */
#include <stdint.h>
 
void fcn_00411064 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    return void (*0x4168d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4168d0 */
#include <stdint.h>
 
int32_t loc_004168d0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    eax = *((ebp + 0x14));
    ecx = *((ebp + 0x10));
    edx = *((ebp + 0xc));
    eax = *(0x4298f4);
    ecx = *((ebp + 8));
    eax = fcn_0041143d (ecx, eax, edx, ecx, eax);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41143d */
#include <stdint.h>
 
int32_t fcn_0041143d (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    uint32_t var_4h;
    do {
        eax = *((ebp + 0x18));
        ecx = *((ebp + 0x14));
        edx = *((ebp + 0x10));
        eax = *((ebp + 8));
        eax = fcn_00411384 (eax, edx, ecx, eax);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) == 0) {
            if (*((ebp + 0xc)) != 0) {
                goto label_0;
            }
        }
        eax = *((ebp - 4));
        goto label_1;
label_0:
        ecx = *((ebp + 8));
        eax = fcn_004113d9 (ecx);
        if (eax == 0) {
            eax = 0;
        } else {
        }
    } while (1);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41141a */
#include <stdint.h>
 
void fcn_0041141a (LPSTR arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    return void (*0x4175b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4175b0 */
#include <stdint.h>
 
int32_t loc_004175b0 (uint32_t arg_8h, uint32_t arg_ch) {
    uint32_t var_4h;
    if (*(0x429858) > 0) {
        eax = *(0x429858);
        eax--;
        if (*(0x429848) == eax) {
            eax = fcn_00411096 ();
            if (eax == 0) {
                eax = fcn_0041119f (2, "dbgheap.c", 0x44c, 0, "_CrtCheckMemory()");
                if (eax != 1) {
                    goto label_0;
                }
                __asm ("int3");
            }
label_0:
            *(0x429848) = 0;
        } else {
            edx = *(0x429848);
            edx++;
            *(0x429848) = edx;
        }
    }
    if (*((ebp + 8)) == 0) {
    } else {
        if (*((ebp + 0xc)) == 1) {
            al = *(0x428d5b);
            ecx = *((ebp + 8));
            ecx &= 0xfffffffc;
            ecx -= 4;
            eax = fcn_00417d50 (ecx, eax, 4);
            if (eax != 0) {
                edx = *((ebp + 8));
                eax = fcn_0041119f (1, 0, 0, 0, "The Block at 0x%p was allocated by aligned routines, use _aligned_free()", edx);
                if (eax == 1) {
                    __asm ("int3");
                }
            }
        } else {
            ecx = *((ebp + 0xc));
            edx = *((ebp + 8));
            eax = uint32_t (*0x428ec0)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (3, edx, 0, ecx, 0, 0, 0);
            if (eax == 0) {
                eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "Client hook free failure.\n");
                if (eax == 1) {
                    __asm ("int3");
                }
            } else {
                ecx = *((ebp + 8));
                eax = fcn_004111ea (ecx);
                if (eax == 0) {
                    eax = fcn_0041119f (2, "dbgheap.c", 0x46c, 0, "_CrtIsValidHeapPointer(pUserData)");
                    if (eax != 1) {
                        goto label_1;
                    }
                    __asm ("int3");
                }
label_1:
                eax = *((ebp + 8));
                eax -= 0x20;
                *((ebp - 4)) = eax;
                ecx = *((ebp - 4));
                edx = *((ecx + 0x14));
                edx &= 0xffff;
                if (edx != 4) {
                    eax = *((ebp - 4));
                    if (*((eax + 0x14)) == 1) {
                        goto label_2;
                    }
                    ecx = *((ebp - 4));
                    edx = *((ecx + 0x14));
                    edx &= 0xffff;
                    if (edx == 2) {
                        goto label_2;
                    }
                    eax = *((ebp - 4));
                    if (*((eax + 0x14)) == 3) {
                        goto label_2;
                    }
                    eax = fcn_0041119f (2, "dbgheap.c", 0x472, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
                    if (eax != 1) {
                        goto label_2;
                    }
                    __asm ("int3");
                }
label_2:
                edx = *(0x428d4c);
                edx &= 4;
                if (edx == 0) {
                    al = *(0x428d58);
                    ecx = *((ebp - 4));
                    ecx += 0x1c;
                    eax = fcn_00417d50 (ecx, eax, 4);
                    if (eax == 0) {
                        edx = *((ebp - 4));
                        edx += 0x20;
                        eax = *((ebp - 4));
                        ecx = *((eax + 0x18));
                        edx = *((ebp - 4));
                        eax = *((edx + 0x14));
                        eax &= 0xffff;
                        ecx = *((eax*4 + 0x428d5c));
                        eax = fcn_0041119f (1, 0, 0, 0, "DAMAGE: before %hs block (#%d) at 0x%p.\n", ecx);
                        if (eax != 1) {
                            goto label_3;
                        }
                        __asm ("int3");
                    }
label_3:
                    al = *(0x428d58);
                    ecx = *((ebp - 4));
                    edx = *((ecx + 0x10));
                    eax = *((ebp - 4));
                    eax = fcn_00417d50 (eax + edx + 0x20, eax, 4);
                    if (eax != 0) {
                        goto label_4;
                    }
                    edx = *((ebp - 4));
                    edx += 0x20;
                    eax = *((ebp - 4));
                    ecx = *((eax + 0x18));
                    edx = *((ebp - 4));
                    eax = *((edx + 0x14));
                    eax &= 0xffff;
                    ecx = *((eax*4 + 0x428d5c));
                    eax = fcn_0041119f (1, 0, 0, 0, "DAMAGE: after %hs block (#%d) at 0x%p.\n", ecx);
                    if (eax != 1) {
                        goto label_4;
                    }
                    __asm ("int3");
                }
label_4:
                eax = *((ebp - 4));
                if (*((eax + 0x14)) == 3) {
                    ecx = *((ebp - 4));
                    if (*((ecx + 0xc)) == 0xfedcbabc) {
                        edx = *((ebp - 4));
                        if (*((edx + 0x18)) == 0) {
                            goto label_5;
                        }
                    }
                    eax = fcn_0041119f (2, "dbgheap.c", 0x489, 0, "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ");
                    if (eax == 1) {
                        __asm ("int3");
                    }
label_5:
                    ecx = *((ebp - 4));
                    edx = *((ecx + 0x10));
                    edx += 0x24;
                    eax = *(0x428d59);
                    ecx = *((ebp - 4));
                    fcn_00411195 (ecx, eax, edx);
                    edx = *((ebp - 4));
                    fcn_004113e8 (edx);
                } else {
                    eax = *((ebp - 4));
                    if (*((eax + 0x14)) == 2) {
                        if (*((ebp + 0xc)) != 1) {
                            goto label_6;
                        }
                        *((ebp + 0xc)) = 2;
                    }
label_6:
                    ecx = *((ebp - 4));
                    edx = *((ecx + 0x14));
                    if (edx != *((ebp + 0xc))) {
                        eax = fcn_0041119f (2, "dbgheap.c", 0x497, 0, "pHead->nBlockUse == nBlockUse");
                        if (eax != 1) {
                            goto label_7;
                        }
                        __asm ("int3");
                    }
label_7:
                    ecx = *((ebp - 4));
                    edx = *(0x429854);
                    edx -= *((ecx + 0x10));
                    *(0x429854) = edx;
                    eax = *(0x428d4c);
                    eax &= 2;
                    if (eax == 0) {
                        ecx = *((ebp - 4));
                        if (*(ecx) != 0) {
                            edx = *((ebp - 4));
                            eax = *(edx);
                            ecx = *((ebp - 4));
                            edx = *((ecx + 4));
                            *((eax + 4)) = edx;
                        } else {
                            eax = *(0x429844);
                            if (eax != *((ebp - 4))) {
                                eax = fcn_0041119f (2, "dbgheap.c", 0x4a6, 0, "_pLastBlock == pHead");
                                if (eax != 1) {
                                    goto label_8;
                                }
                                __asm ("int3");
                            }
label_8:
                            edx = *((ebp - 4));
                            eax = *((edx + 4));
                            *(0x429844) = eax;
                        }
                        ecx = *((ebp - 4));
                        if (*((ecx + 4)) != 0) {
                            edx = *((ebp - 4));
                            eax = *((edx + 4));
                            ecx = *((ebp - 4));
                            edx = *(ecx);
                            *(eax) = edx;
                        } else {
                            eax = *(0x429850);
                            if (eax != *((ebp - 4))) {
                                eax = fcn_0041119f (2, "dbgheap.c", 0x4b0, 0, "_pFirstBlock == pHead");
                                if (eax != 1) {
                                    goto label_9;
                                }
                                __asm ("int3");
                            }
label_9:
                            edx = *((ebp - 4));
                            eax = *(edx);
                            *(0x429850) = eax;
                        }
                        ecx = *((ebp - 4));
                        edx = *((ecx + 0x10));
                        edx += 0x24;
                        eax = *(0x428d59);
                        ecx = *((ebp - 4));
                        fcn_00411195 (ecx, eax, edx);
                        edx = *((ebp - 4));
                        fcn_004113e8 (edx);
                    } else {
                        eax = *((ebp - 4));
                        *((eax + 0x14)) = 0;
                        ecx = *((ebp - 4));
                        edx = *((ecx + 0x10));
                        eax = *(0x428d59);
                        ecx = *((ebp - 4));
                        ecx += 0x20;
                        fcn_00411195 (ecx, eax, edx);
                    }
                }
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411096 */
#include <stdint.h>
 
int32_t fcn_00411096 (void) {
    uint32_t var_18h;
    char * var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *(0x428d4c);
    eax &= 1;
    if (eax == 0) {
        eax = 1;
        goto label_0;
    }
    eax = fcn_004111fe ();
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) != -1) {
        if (*((ebp - 8)) == 0xfffffffe) {
            goto label_1;
        }
        ecx = *((ebp - 8));
        *((ebp - 0x18)) = ecx;
        edx = *((ebp - 0x18));
        edx += 6;
        *((ebp - 0x18)) = edx;
        if (*((ebp - 0x18)) <= 3) {
            eax = *((ebp - 0x18));
            /* switch table (4 cases) at 0x4180b2 */
            eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "_heapchk fails with _HEAPBADBEGIN.\n");
            if (eax == 1) {
                __asm ("int3");
            }
            goto label_2;
            eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "_heapchk fails with _HEAPBADNODE.\n");
            if (eax == 1) {
                __asm ("int3");
            }
            goto label_2;
            eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "_heapchk fails with _HEAPBADEND.\n");
            if (eax == 1) {
                __asm ("int3");
            }
            goto label_2;
            eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "_heapchk fails with _HEAPBADPTR.\n");
            if (eax == 1) {
                __asm ("int3");
            }
        } else {
            eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "_heapchk fails with unknown return value!\n");
            if (eax != 1) {
                goto label_2;
            }
            __asm ("int3");
        }
label_2:
        *((ebp - 0xc)) = 0;
        goto label_3;
    }
label_1:
    *((ebp - 0xc)) = 1;
    eax = *(0x429850);
    *((ebp - 4)) = eax;
    while (1) {
        ecx = *((ebp - 4));
        edx = *(ecx);
        *((ebp - 4)) = edx;
        if (*((ebp - 4)) == 0) {
            goto label_3;
        }
        *((ebp - 0x10)) = 1;
        eax = *((ebp - 4));
        ecx = *((eax + 0x14));
        ecx &= 0xffff;
        if (ecx != 4) {
            edx = *((ebp - 4));
            if (*((edx + 0x14)) == 1) {
                goto label_4;
            }
            eax = *((ebp - 4));
            ecx = *((eax + 0x14));
            ecx &= 0xffff;
            if (ecx == 2) {
                goto label_4;
            }
            edx = *((ebp - 4));
            if (*((edx + 0x14)) != 3) {
                goto label_5;
            }
        }
label_4:
        eax = *((ebp - 4));
        ecx = *((eax + 0x14));
        ecx &= 0xffff;
        edx = *((ecx*4 + 0x428d5c));
        *((ebp - 0x14)) = edx;
        goto label_6;
label_5:
        *((ebp - 0x14)) = "DAMAGED";
label_6:
        al = *(0x428d58);
        ecx = *((ebp - 4));
        ecx += 0x1c;
        eax = fcn_00417d50 (ecx, eax, 4);
        if (eax == 0) {
            edx = *((ebp - 4));
            edx += 0x20;
            eax = *((ebp - 4));
            ecx = *((eax + 0x18));
            edx = *((ebp - 0x14));
            eax = fcn_0041119f (0, 0, 0, 0, "DAMAGE: before %hs block (#%d) at 0x%p.\n", edx);
            if (eax == 1) {
                __asm ("int3");
            }
            *((ebp - 0x10)) = 0;
        }
        cl = *(0x428d58);
        edx = *((ebp - 4));
        eax = *((edx + 0x10));
        ecx = *((ebp - 4));
        eax = fcn_00417d50 (ecx + eax + 0x20, ecx, 4);
        if (eax == 0) {
            eax = *((ebp - 4));
            eax += 0x20;
            ecx = *((ebp - 4));
            edx = *((ecx + 0x18));
            eax = *((ebp - 0x14));
            eax = fcn_0041119f (0, 0, 0, 0, "DAMAGE: after %hs block (#%d) at 0x%p.\n", eax);
            if (eax == 1) {
                __asm ("int3");
            }
            *((ebp - 0x10)) = 0;
        }
        edx = *((ebp - 4));
        if (*((edx + 0x14)) == 0) {
            eax = *((ebp - 4));
            ecx = *((eax + 0x10));
            dl = *(0x428d59);
            eax = *((ebp - 4));
            eax += 0x20;
            eax = fcn_00417d50 (eax, edx, ecx);
            if (eax != 0) {
                goto label_7;
            }
            ecx = *((ebp - 4));
            ecx += 0x20;
            eax = fcn_0041119f (0, 0, 0, 0, "DAMAGE: on top of Free block at 0x%p.\n", ecx);
            if (eax == 1) {
                __asm ("int3");
            }
            *((ebp - 0x10)) = 0;
        }
label_7:
        if (*((ebp - 0x10)) == 0) {
            eax = *((ebp - 4));
            if (*((eax + 8)) != 0) {
                ecx = *((ebp - 4));
                edx = *((ecx + 0xc));
                eax = *((ebp - 4));
                ecx = *((eax + 8));
                edx = *((ebp - 0x14));
                eax = fcn_0041119f (0, 0, 0, 0, "%hs allocated at file %hs(%d).\n", edx);
                if (eax != 1) {
                    goto label_8;
                }
                __asm ("int3");
            }
label_8:
            ecx = *((ebp - 4));
            edx = *((ecx + 0x10));
            eax = *((ebp - 4));
            eax += 0x20;
            ecx = *((ebp - 0x14));
            eax = fcn_0041119f (0, 0, 0, 0, "%hs located at 0x%p is %Iu bytes long.\n", ecx);
            if (eax == 1) {
                __asm ("int3");
            }
            *((ebp - 0xc)) = 0;
        }
    }
label_3:
    eax = *((ebp - 0xc));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x417d50 */
#include <stdint.h>
 
int32_t fcn_00417d50 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    *((ebp - 4)) = 1;
    do {
        eax = *((ebp + 0x10));
        ecx = *((ebp + 0x10));
        ecx--;
        *((ebp + 0x10)) = ecx;
        if (eax == 0) {
            goto label_0;
        }
        edx = *((ebp + 0xc));
        eax = *((ebp + 8));
        ecx = *(eax);
        eax = *((ebp + 8));
        eax++;
        *((ebp + 8)) = eax;
        if (ecx != edx) {
            *((ebp - 4)) = 0;
        }
    } while (1);
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111ea */
#include <stdint.h>
 
int32_t fcn_004111ea (uint32_t arg_8h) {
    uint32_t var_4h;
    if (*((ebp + 8)) == 0) {
        eax = 0;
    } else {
        eax = *((ebp + 8));
        eax -= 0x20;
        eax = fcn_004112f8 (eax, 0x20, 0);
        if (eax == 0) {
            eax = 0;
        } else {
            if (*(0x42af90) == 3) {
                ecx = *((ebp + 8));
                ecx -= 0x20;
                eax = fcn_004111c7 (ecx);
                *((ebp - 4)) = eax;
                if (*((ebp - 4)) != 0) {
                    edx = *((ebp + 8));
                    edx -= 0x20;
                    eax = *((ebp - 4));
                    fcn_00411221 (eax, edx);
                } else {
                    ecx = *(0x42963c);
                }
                ecx &= 0x8000;
                if (ecx != 0) {
                    eax = 1;
                } else {
                    edx = *((ebp + 8));
                }
                edx -= 0x20;
                eax = *(0x42af80);
                HeapValidate (eax, 0, edx);
            } else {
                ecx = *((ebp + 8));
                ecx -= 0x20;
                edx = *(0x42af80);
                HeapValidate (edx, 0, ecx);
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411195 */
#include <stdint.h>
 
int32_t fcn_00411195 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
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
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113e8 */
#include <stdint.h>
 
int32_t fcn_004113e8 (uint32_t arg_8h) {
    uint32_t var_4h;
    if (*((ebp + 8)) == 0) {
    } else {
        if (*(0x42af90) == 3) {
            eax = *((ebp + 8));
            eax = fcn_004111c7 (eax);
            *((ebp - 4)) = eax;
            if (*((ebp - 4)) != 0) {
                ecx = *((ebp + 8));
                edx = *((ebp - 4));
                fcn_0041149c (edx, ecx);
            }
            if (*((ebp - 4)) == 0) {
                eax = *((ebp + 8));
                ecx = *(0x42af80);
                HeapFree (ecx, 0, eax);
            }
        } else {
            edx = *((ebp + 8));
            eax = *(0x42af80);
            HeapFree (eax, 0, edx);
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411258 */
#include <stdint.h>
 
int32_t fcn_00411258 (int32_t arg_8h, int32_t arg_ch) {
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
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x413b80 */
#include <stdint.h>
 
int32_t fcn_00413b80 (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_14h;
    int32_t var_dh;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 0x18));
    *(eax) = 0;
    ecx = *((ebp + 0x14));
    *(ecx) = 1;
    edx = *((ebp + 8));
    *((ebp - 4)) = edx;
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 0xc));
        ecx = *((ebp + 0x10));
        *(eax) = ecx;
        edx = *((ebp + 0xc));
        edx += 4;
        *((ebp + 0xc)) = edx;
    }
    *((ebp - 8)) = 0;
    do {
label_0:
        eax = *((ebp - 4));
        ecx = *(eax);
        if (ecx == 0x22) {
            edx = 0;
            dl = (*((ebp - 8)) == 0) ? 1 : 0;
            *((ebp - 8)) = edx;
            eax = *((ebp - 4));
            cl = *(eax);
            *((ebp - 0xd)) = cl;
            edx = *((ebp - 4));
            edx++;
            *((ebp - 4)) = edx;
        } else {
            eax = *((ebp + 0x18));
            ecx = *(eax);
            ecx++;
            edx = *((ebp + 0x18));
            *(edx) = ecx;
            if (*((ebp + 0x10)) != 0) {
                eax = *((ebp + 0x10));
                ecx = *((ebp - 4));
                dl = *(ecx);
                *(eax) = dl;
                eax = *((ebp + 0x10));
                eax++;
                *((ebp + 0x10)) = eax;
            }
            ecx = *((ebp - 4));
            dl = *(ecx);
            *((ebp - 0xd)) = dl;
            eax = *((ebp - 4));
            eax++;
            *((ebp - 4)) = eax;
            ecx = *((ebp - 0xd));
            edx = *((ecx + 0x42ad41));
            edx &= 4;
            if (edx == 0) {
                goto label_3;
            }
            eax = *((ebp + 0x18));
            ecx = *(eax);
            ecx++;
            edx = *((ebp + 0x18));
            *(edx) = ecx;
            if (*((ebp + 0x10)) != 0) {
                eax = *((ebp + 0x10));
                ecx = *((ebp - 4));
                dl = *(ecx);
                *(eax) = dl;
                eax = *((ebp + 0x10));
                eax++;
                *((ebp + 0x10)) = eax;
            }
            ecx = *((ebp - 4));
            ecx++;
            *((ebp - 4)) = ecx;
        }
label_3:
        edx = *((ebp - 0xd));
        if (edx == 0) {
            goto label_4;
        }
    } while (*((ebp - 8)) != 0);
    eax = *((ebp - 0xd));
    if (eax == 0x20) {
        goto label_4;
    }
    ecx = *((ebp - 0xd));
    if (ecx != 9) {
        goto label_0;
    }
label_4:
    edx = *((ebp - 0xd));
    if (edx == 0) {
        eax = *((ebp - 4));
        eax--;
        *((ebp - 4)) = eax;
    } else {
        if (*((ebp + 0x10)) == 0) {
            goto label_5;
        }
        ecx = *((ebp + 0x10));
        *((ecx - 1)) = 0;
    }
label_5:
    *((ebp - 8)) = 0;
label_2:
    edx = *((ebp - 4));
    eax = *(edx);
    if (eax == 0) {
        goto label_6;
    }
    do {
        ecx = *((ebp - 4));
        edx = *(ecx);
        if (edx != 0x20) {
            eax = *((ebp - 4));
            ecx = *(eax);
            if (ecx != 9) {
                goto label_6;
            }
        }
        edx = *((ebp - 4));
        edx++;
        *((ebp - 4)) = edx;
    } while (1);
label_6:
    eax = *((ebp - 4));
    ecx = *(eax);
    if (ecx == 0) {
        goto label_7;
    }
    if (*((ebp + 0xc)) != 0) {
        edx = *((ebp + 0xc));
        eax = *((ebp + 0x10));
        *(edx) = eax;
        ecx = *((ebp + 0xc));
        ecx += 4;
        *((ebp + 0xc)) = ecx;
    }
    edx = *((ebp + 0x14));
    eax = *(edx);
    eax++;
    ecx = *((ebp + 0x14));
    *(ecx) = eax;
label_1:
    *((ebp - 0xc)) = 1;
    *((ebp - 0x14)) = 0;
    do {
        edx = *((ebp - 4));
        eax = *(edx);
        if (eax != 0x5c) {
            goto label_8;
        }
        ecx = *((ebp - 4));
        ecx++;
        *((ebp - 4)) = ecx;
        edx = *((ebp - 0x14));
        edx++;
        *((ebp - 0x14)) = edx;
    } while (1);
label_8:
    eax = *((ebp - 4));
    ecx = *(eax);
    if (ecx != 0x22) {
        goto label_9;
    }
    eax = *((ebp - 0x14));
    edx = 0;
    ecx = 2;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    if (edx == 0) {
        if (*((ebp - 8)) != 0) {
            edx = *((ebp - 4));
            eax = *((edx + 1));
            if (eax == 0x22) {
                ecx = *((ebp - 4));
                ecx++;
                *((ebp - 4)) = ecx;
            } else {
                *((ebp - 0xc)) = 0;
            }
        } else {
            *((ebp - 0xc)) = 0;
        }
        edx = 0;
        dl = (*((ebp - 8)) == 0) ? 1 : 0;
        *((ebp - 8)) = edx;
    }
    eax = *((ebp - 0x14));
    eax >>= 1;
    *((ebp - 0x14)) = eax;
    do {
label_9:
        ecx = *((ebp - 0x14));
        edx = *((ebp - 0x14));
        edx--;
        *((ebp - 0x14)) = edx;
        if (ecx == 0) {
            goto label_10;
        }
        if (*((ebp + 0x10)) != 0) {
            eax = *((ebp + 0x10));
            *(eax) = 0x5c;
            ecx = *((ebp + 0x10));
            ecx++;
            *((ebp + 0x10)) = ecx;
        }
        edx = *((ebp + 0x18));
        eax = *(edx);
        eax++;
        ecx = *((ebp + 0x18));
        *(ecx) = eax;
    } while (1);
label_10:
    edx = *((ebp - 4));
    eax = *(edx);
    if (eax != 0) {
        if (*((ebp - 8)) != 0) {
            goto label_11;
        }
        ecx = *((ebp - 4));
        edx = *(ecx);
        if (edx == 0x20) {
            goto label_12;
        }
        eax = *((ebp - 4));
        ecx = *(eax);
        if (ecx != 9) {
            goto label_11;
        }
    }
label_12:
    goto label_13;
label_11:
    if (*((ebp - 0xc)) != 0) {
        if (*((ebp + 0x10)) != 0) {
            edx = *((ebp - 4));
            eax = *(edx);
            ecx = *((eax + 0x42ad41));
            ecx &= 4;
            if (ecx != 0) {
                edx = *((ebp + 0x10));
                eax = *((ebp - 4));
                cl = *(eax);
                *(edx) = cl;
                edx = *((ebp + 0x10));
                edx++;
                *((ebp + 0x10)) = edx;
                eax = *((ebp - 4));
                eax++;
                *((ebp - 4)) = eax;
                ecx = *((ebp + 0x18));
                edx = *(ecx);
                edx++;
                eax = *((ebp + 0x18));
                *(eax) = edx;
            }
            ecx = *((ebp + 0x10));
            edx = *((ebp - 4));
            al = *(edx);
            *(ecx) = al;
            ecx = *((ebp + 0x10));
            ecx++;
            *((ebp + 0x10)) = ecx;
        } else {
            edx = *((ebp - 4));
            eax = *(edx);
            ecx = *((eax + 0x42ad41));
            ecx &= 4;
            if (ecx == 0) {
                goto label_14;
            }
            edx = *((ebp - 4));
            edx++;
            *((ebp - 4)) = edx;
            eax = *((ebp + 0x18));
            ecx = *(eax);
            ecx++;
            edx = *((ebp + 0x18));
            *(edx) = ecx;
        }
label_14:
        eax = *((ebp + 0x18));
        ecx = *(eax);
        ecx++;
        edx = *((ebp + 0x18));
        *(edx) = ecx;
    }
    eax = *((ebp - 4));
    eax++;
    *((ebp - 4)) = eax;
    goto label_1;
label_13:
    if (*((ebp + 0x10)) != 0) {
        ecx = *((ebp + 0x10));
        *(ecx) = 0;
        edx = *((ebp + 0x10));
        edx++;
        *((ebp + 0x10)) = edx;
    }
    eax = *((ebp + 0x18));
    ecx = *(eax);
    ecx++;
    edx = *((ebp + 0x18));
    *(edx) = ecx;
    goto label_2;
label_7:
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 0xc));
        *(eax) = 0;
        ecx = *((ebp + 0xc));
        ecx += 4;
        *((ebp + 0xc)) = ecx;
    }
    edx = *((ebp + 0x14));
    eax = *(edx);
    eax++;
    ecx = *((ebp + 0x14));
    *(ecx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411352 */
#include <stdint.h>
 
int32_t fcn_00411352 (LPVOID arg_8h, LPCH arg_ch, uint32_t arg_10h) {
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
    /* switch table (4 cases) at 0x41a37c */
label_1:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x41a310 */
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
            /* switch table (4 cases) at 0x41a518 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x41a4c8 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x41a518 */
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    eax = *((ebp + 8));
    do {
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
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411442 */
#include <stdint.h>
 
int32_t fcn_00411442 (void) {
    int32_t var_4h;
    *((ebp - 4)) = 0;
    if (*(0x429638) == 2) {
        if (*(0x429644) >= 5) {
            eax = 1;
        }
    } else {
        eax = 3;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411497 */
#include <stdint.h>
 
int32_t fcn_00411497 (int32_t arg_8h) {
    eax = *(0x42af80);
    eax = HeapAlloc (eax, 0, 0x140);
    *(0x42aca0) = eax;
    if (*(0x42aca0) == 0) {
        eax = 0;
    } else {
        ecx = *((ebp + 8));
        *(0x42aca4) = ecx;
        edx = *(0x42aca0);
        *(0x42aca8) = edx;
        *(0x42ac98) = 0;
        *(0x42ac9c) = 0;
        *(0x42acac) = 0x10;
        eax = 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113a7 */
#include <stdint.h>
 
void fcn_004113a7 (void) {
    return void (*0x42314e)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x42314e */
#include <stdint.h>
 
void RtlUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x414a72 */
#include <stdint.h>
 
void fcn_00414a72 (int32_t arg_8h) {
    ebx = 0x428c44;
    ecx = *((ebp + 8));
    *((ebx + 8)) = ecx;
    *((ebx + 4)) = eax;
    *((ebx + 0xc)) = ebp;
    ebx = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41137f */
#include <stdint.h>
 
int32_t fcn_0041137f (uint32_t arg_8h) {
    int32_t var_5ch;
    uint32_t var_58h;
    PMEMORY_BASIC_INFORMATION lpBuffer;
    int32_t var_50h;
    int32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    LPCVOID lpAddress;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 8));
    ecx = *((eax + 8));
    *((ebp - 0x20)) = ecx;
    edx = *((ebp - 0x20));
    edx &= 3;
    if (edx != 0) {
        eax = 0;
        goto label_1;
    }
    eax = *(fs:0x18);
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x24));
    ecx = *((ebp - 0x20));
    if (ecx >= *((eax + 8))) {
        edx = *((ebp - 0x24));
        eax = *((ebp - 0x20));
        if (eax >= *((edx + 4))) {
            goto label_2;
        }
        eax = 0;
        goto label_1;
    }
label_2:
    ecx = *((ebp + 8));
    if (*((ecx + 0xc)) == -1) {
        eax = 1;
        goto label_1;
    }
    *((ebp - 0x1c)) = 0;
    *((ebp - 8)) = 0;
    while (1) {
        edx = *((ebp - 8));
        edx++;
        *((ebp - 8)) = edx;
        eax = *((ebp + 8));
        ecx = *((ebp - 8));
        if (ecx > *((eax + 0xc))) {
            goto label_3;
        }
        edx = *((ebp - 8));
        edx *= 0xc;
        eax = *((ebp - 0x20));
        ecx = *((eax + edx));
        *((ebp - 0x58)) = ecx;
        if (*((ebp - 0x58)) != -1) {
            edx = *((ebp - 0x58));
            if (edx < *((ebp - 8))) {
                goto label_4;
            }
            eax = 0;
            goto label_1;
        }
label_4:
        eax = *((ebp - 8));
        eax *= 0xc;
        ecx = *((ebp - 0x20));
        if (*((ecx + eax + 4)) != 0) {
            edx = *((ebp - 0x1c));
            edx++;
            *((ebp - 0x1c)) = edx;
        }
    }
label_3:
    if (*((ebp - 0x1c)) != 0) {
        eax = *((ebp + 8));
        ecx = *((ebp - 0x24));
        edx = *((eax - 8));
        if (edx >= *((ecx + 8))) {
            eax = *((ebp + 8));
            ecx = *((eax - 8));
            if (ecx < *((ebp + 8))) {
                goto label_5;
            }
        }
        eax = 0;
        goto label_1;
    }
label_5:
    edx = *((ebp - 0x20));
    edx &= 0xfffff000;
    *((ebp - 0x34)) = edx;
    *((ebp - 0x30)) = 0;
    goto label_6;
label_0:
    eax = *((ebp - 0x30));
    eax++;
    *((ebp - 0x30)) = eax;
label_6:
    ecx = *((ebp - 0x30));
    if (ecx >= *(0x429868)) {
        goto label_7;
    }
    edx = *((ebp - 0x30));
    eax = *((edx*4 + 0x429870));
    if (eax != *((ebp - 0x34))) {
        goto label_8;
    }
    if (*((ebp - 0x30)) <= 0) {
        goto label_9;
    }
    eax = InterlockedExchange (0x4298b0, 1);
    if (eax != 0) {
        goto label_9;
    }
    ecx = *((ebp - 0x30));
    edx = *((ecx*4 + 0x429870));
    if (edx == *((ebp - 0x34))) {
        goto label_10;
    }
    eax = *(0x429868);
    eax--;
    *((ebp - 0x30)) = eax;
    while (1) {
        ecx = *((ebp - 0x30));
        ecx--;
        *((ebp - 0x30)) = ecx;
        if (*((ebp - 0x30)) < 0) {
            goto label_11;
        }
        edx = *((ebp - 0x30));
        eax = *((edx*4 + 0x429870));
        if (eax == *((ebp - 0x34))) {
        } else {
        }
    }
label_11:
    if (*((ebp - 0x30)) < 0) {
        if (*(0x429868) < 0x10) {
            ecx = *(0x429868);
            ecx++;
            *(0x429868) = ecx;
        }
        edx = *(0x429868);
        edx--;
        *((ebp - 0x30)) = edx;
    } else {
        if (*((ebp - 0x30)) != 0) {
            goto label_10;
        }
        InterlockedExchange (0x4298b0, 0);
        eax = 1;
        goto label_1;
    }
label_10:
    *((ebp - 0x28)) = 0;
    while (1) {
        eax = *((ebp - 0x28));
        eax++;
        *((ebp - 0x28)) = eax;
        ecx = *((ebp - 0x28));
        if (ecx > *((ebp - 0x30))) {
            goto label_12;
        }
        edx = *((ebp - 0x28));
        eax = *((edx*4 + 0x429870));
        *((ebp - 0x18)) = eax;
        ecx = *((ebp - 0x28));
        edx = *((ebp - 0x34));
        *((ecx*4 + 0x429870)) = edx;
        eax = *((ebp - 0x18));
        *((ebp - 0x34)) = eax;
    }
label_12:
    InterlockedExchange (0x4298b0, 0);
label_9:
    eax = 1;
    goto label_1;
label_8:
    goto label_0;
label_7:
    edx = *((ebp - 0x20));
    eax = VirtualQuery (edx, ebp - 0x54, 0x1c);
    if (eax != 0) {
        if (*((ebp - 0x3c)) == 0x1000000) {
            goto label_13;
        }
    }
    eax |= 0xffffffff;
    goto label_1;
label_13:
    eax = *((ebp - 0x40));
    eax &= 0xcc;
    if (eax == 0) {
    } else {
        ecx = *((ebp - 0x50));
        *((ebp - 0x10)) = ecx;
        edx = *((ebp - 0x10));
        eax = *(edx);
        if (eax != 0x5a4d) {
            eax |= 0xffffffff;
            goto label_1;
        }
        ecx = *((ebp - 0x10));
        edx = *((ebp - 0x10));
        edx += *((ecx + 0x3c));
        *((ebp - 0x14)) = edx;
        eax = *((ebp - 0x14));
        if (*(eax) != 0x4550) {
            eax |= 0xffffffff;
            goto label_1;
        }
        ecx = *((ebp - 0x14));
        ecx += 0x18;
        *((ebp - 0xc)) = ecx;
        edx = *((ebp - 0xc));
        eax = *(edx);
        if (eax != 0x10b) {
            eax |= 0xffffffff;
            goto label_1;
        }
        ecx = *((ebp - 0x20));
        ecx -= *((ebp - 0x10));
        *((ebp - 4)) = ecx;
        *((ebp - 0x2c)) = 0;
        edx = *((ebp - 0x14));
        eax = *((edx + 0x14));
        ecx = *((ebp - 0x14));
        edx = ecx + eax + 0x18;
        *((ebp - 0x38)) = edx;
        edx = *((ebp - 0x14));
        eax = *((edx + 6));
        if (*((ebp - 0x2c)) < eax) {
            ecx = *((ebp - 0x38));
            edx = *((ebp - 4));
            if (edx >= *((ecx + 0xc))) {
                eax = *((ebp - 0x38));
                ecx = *((eax + 0xc));
                edx = *((ebp - 0x38));
                ecx += *((edx + 8));
                if (*((ebp - 4)) >= ecx) {
                    goto label_14;
                }
                eax = *((ebp - 0x38));
                ecx = *((eax + 0x24));
                ecx &= 0x80000000;
                if (ecx == 0) {
                    goto label_14;
                }
                eax = 0;
                goto label_1;
            }
label_14:
        } else {
            eax |= 0xffffffff;
            goto label_1;
        }
    }
    eax = InterlockedExchange (0x4298b0, 1);
    if (eax != 0) {
        eax = 1;
        goto label_1;
    }
    edx = *(0x429868);
    *((ebp - 0x30)) = edx;
    while (1) {
        eax = *((ebp - 0x30));
        eax--;
        *((ebp - 0x30)) = eax;
        if (*((ebp - 0x30)) <= 0) {
            goto label_15;
        }
        ecx = *((ebp - 0x30));
        edx = *((ecx*4 + 0x42986c));
        if (edx == *((ebp - 0x34))) {
        } else {
        }
    }
label_15:
    if (*((ebp - 0x30)) != 0) {
        goto label_16;
    }
    if (*(0x429868) > 0xf) {
        *((ebp - 0x5c)) = 0xf;
    } else {
        eax = *(0x429868);
        *((ebp - 0x5c)) = eax;
    }
    ecx = *((ebp - 0x5c));
    *((ebp - 0x30)) = ecx;
    *((ebp - 0x28)) = 0;
    while (1) {
        edx = *((ebp - 0x28));
        edx++;
        *((ebp - 0x28)) = edx;
        eax = *((ebp - 0x28));
        if (eax > *((ebp - 0x30))) {
            goto label_17;
        }
        ecx = *((ebp - 0x28));
        edx = *((ecx*4 + 0x429870));
        *((ebp - 0x18)) = edx;
        eax = *((ebp - 0x28));
        ecx = *((ebp - 0x34));
        *((eax*4 + 0x429870)) = ecx;
        edx = *((ebp - 0x18));
        *((ebp - 0x34)) = edx;
    }
label_17:
    if (*(0x429868) < 0x10) {
        eax = *(0x429868);
        eax++;
        *(0x429868) = eax;
    }
label_16:
    InterlockedExchange (0x4298b0, 0);
    eax = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411320 */
#include <stdint.h>
 
void fcn_00411320 (int32_t arg_8h) {
    return void (*0x41499c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41499c */
#include <stdint.h>
 
void loc_0041499c (int32_t arg_8h) {
    fcn_004113a7 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111bd */
#include <stdint.h>
 
int32_t fcn_004111bd (int32_t arg_10h, uint32_t arg_24h) {
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
            fcn_00414a72 (0x101);
            uint32_t (*ebx + esi*4 + 8)() ();
        }
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114a1 */
#include <stdint.h>
 
void fcn_004114a1 (void) {
    return void (*0x414a72)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411492 */
#include <stdint.h>
 
int32_t fcn_00411492 (int32_t arg_8h, int32_t arg_14h, int32_t arg_ch) {
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
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41120d */
#include <stdint.h>
 
int32_t fcn_0041120d (int32_t arg_4h, int32_t arg_ch) {
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
                void (*0x41a0b5)() ();
            }
            edi = ecx - 2;
            void (*0x41a0b5)() ();
        }
        edi = ecx - 3;
        void (*0x41a0b5)() ();
    }
    edi = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41107d */
#include <stdint.h>
 
uint32_t fcn_0041107d (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    HMODULE hModule;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x1c)) = 0;
    if (*(0x4298c4) == 0) {
        eax = LoadLibraryA ("user32.dll");
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x20)) != 0) {
            eax = *((ebp - 0x20));
            eax = GetProcAddress (eax, "MessageBoxA");
            *(0x4298c4) = eax;
            if (*(0x4298c4) != 0) {
                goto label_0;
            }
        }
        eax = 0;
        goto label_1;
label_0:
        ecx = *((ebp - 0x20));
        eax = GetProcAddress (ecx, "GetActiveWindow");
        *(0x4298c8) = eax;
        edx = *((ebp - 0x20));
        eax = GetProcAddress (edx, "GetLastActivePopup");
        *(0x4298cc) = eax;
        if (*(0x429638) != 2) {
            goto label_2;
        }
        eax = *((ebp - 0x20));
        eax = GetProcAddress (eax, "GetUserObjectInformationA");
        *(0x4298d4) = eax;
        if (*(0x4298d4) == 0) {
            goto label_2;
        }
        ecx = *((ebp - 0x20));
        eax = GetProcAddress (ecx, "GetProcessWindowStation");
        *(0x4298d0) = eax;
    }
label_2:
    if (*(0x4298d0) != 0) {
        eax = uint32_t (*0x4298d0)() ();
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) != 0) {
            ecx = *((ebp - 0x10));
            eax = uint32_t (*0x4298d4)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (ecx, 1, ebp - 0xc, 0xc, ebp - 0x18);
            if (eax == 0) {
                goto label_3;
            }
            edx = *((ebp - 4));
            edx &= 1;
            if (edx != 0) {
                goto label_4;
            }
        }
label_3:
        *((ebp - 0x1c)) = 1;
    }
label_4:
    if (*((ebp - 0x1c)) != 0) {
        if (*(0x429644) >= 4) {
            eax = *((ebp + 0x10));
            eax |= 0x200000;
            *((ebp + 0x10)) = eax;
        } else {
            ecx = *((ebp + 0x10));
            ecx |= 0x40000;
            *((ebp + 0x10)) = ecx;
        }
    } else {
        if (*(0x4298c8) != 0) {
            eax = uint32_t (*0x4298c8)() ();
            *((ebp - 0x14)) = eax;
        }
        if (*((ebp - 0x14)) == 0) {
            goto label_5;
        }
        if (*(0x4298cc) == 0) {
            goto label_5;
        }
        edx = *((ebp - 0x14));
        eax = uint32_t (*0x4298cc)(uint32_t) (edx);
        *((ebp - 0x14)) = eax;
    }
label_5:
    eax = *((ebp + 0x10));
    ecx = *((ebp + 0xc));
    edx = *((ebp + 8));
    eax = *((ebp - 0x14));
    uint32_t (*0x4298c4)(uint32_t, uint32_t, uint32_t, uint32_t) (eax, edx, ecx, eax);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411087 */
#include <stdint.h>
 
void fcn_00411087 (void) {
    int32_t var_18h;
    int32_t var_4h;
    return void (*0x41d0f0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d0f0 */
#include <stdint.h>
 
void loc_0041d0f0 (void) {
    int32_t var_18h;
    int32_t var_4h;
    if (ecx == *(0x428eb0)) {
        return;
    }
    return void (*0x41d110)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d110 */
#include <stdint.h>
 
int32_t loc_0041d110 (void) {
    int32_t var_18h;
    int32_t var_4h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    fcn_004111f4 ();
    *((ebp - 4)) = 0xffffffff;
    return void (*0x41d162)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111f4 */
#include <stdint.h>
 
int32_t fcn_004111f4 (void) {
    int32_t var_150h;
    int32_t var_144h;
    char * var_13ch_2;
    int32_t var_138h_2;
    uint32_t var_140h;
    char * var_13ch;
    int32_t var_138h;
    int32_t var_2ch_2;
    int32_t var_34h;
    int32_t var_24h;
    char * var_20h_2;
    int32_t var_28h;
    int32_t var_18h_2;
    char * var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_2ch;
    int32_t var_8h_2;
    int32_t var_ch;
    int32_t var_8h;
    eax = *(fs:0);
    *(fs:0) = esp;
    eax = *(0x428eb0);
    *((ebp - 0x2c)) = eax;
    *((ebp - 0x18)) = esp;
    if (*(0x42992c) != 0) {
        *((ebp - 4)) = 0;
        eax = *((ebp + 0xc));
        ecx = *((ebp + 8));
        uint32_t (*0x42992c)(uint32_t, uint32_t) (ecx, eax);
        *((ebp - 4)) = 0xffffffff;
    } else {
        edx = *((ebp + 8));
        *((ebp - 0x140)) = edx;
        if (*((ebp - 0x140)) != 1) {
            *((ebp - 0x13c)) = "Unknown security failure detected!";
            *((ebp - 0x20)) = "A security error of unknown cause has been detected which has\ncorrupted the program's internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n";
            *((ebp - 0x1c)) = 0xd4;
        } else {
            *((ebp - 0x13c)) = "Buffer overrun detected!";
            *((ebp - 0x20)) = "A buffer overrun has been detected which has corrupted the program's\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n";
            *((ebp - 0x1c)) = 0xb9;
        }
        eax = *((ebp - 0x20));
        eax = fcn_0041119f (1, 0, 0, 0, 0x426074, eax);
        if (eax == 1) {
            __asm ("int3");
        }
        *((ebp - 0x34)) = 0;
        eax = GetModuleFileNameA (0, ebp - 0x138, 0x104);
        if (eax == 0) {
            fcn_00411258 (ebp - 0x138, "<program name unknown>");
        }
        ecx = ebp - 0x138;
        *((ebp - 0x28)) = ecx;
        eax = fcn_00411235 (ebp - 0x138);
        eax += 0xb;
        if (eax > 0x3c) {
            fcn_00411235 (ebp - 0x138);
            ecx = *((ebp - 0x28));
            edx = ecx + eax - 0x31;
            *((ebp - 0x28)) = edx;
            eax = *((ebp - 0x28));
            fcn_00411492 (eax, 0x425b78, 3);
        }
        ecx = *((ebp - 0x28));
        fcn_00411235 (ecx);
        edx = *((ebp - 0x1c));
        eax = edx + eax + 0xc;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00414c20 ();
        *((ebp - 0x144)) = esp;
        *((ebp - 0x18)) = esp;
        eax = *((ebp - 0x144));
        *((ebp - 0x24)) = eax;
        ecx = *((ebp - 0x13c));
        edx = *((ebp - 0x24));
        fcn_00411258 (edx, ecx);
        eax = *((ebp - 0x24));
        fcn_0041120d (eax, 0x425b54);
        ecx = *((ebp - 0x24));
        fcn_0041120d (ecx, "Program: ");
        edx = *((ebp - 0x28));
        eax = *((ebp - 0x24));
        fcn_0041120d (eax, edx);
        ecx = *((ebp - 0x24));
        fcn_0041120d (ecx, 0x425b54);
        edx = *((ebp - 0x20));
        eax = *((ebp - 0x24));
        fcn_0041120d (eax, edx);
        ecx = *((ebp - 0x24));
        fcn_0041107d (ecx, "Microsoft Visual C++ Runtime Library", 0x12010);
    }
    fcn_00411212 (3);
    esp = ebp - 0x150;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    ecx = *((ebp - 0x2c));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d162 */
#include <stdint.h>
 
void loc_0041d162 (void) {
    ExitProcess (3);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411131 */
#include <stdint.h>
 
void fcn_00411131 (void) {
    return void (*0x414c20)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411037 */
#include <stdint.h>
 
void fcn_00411037 (void) {
    return void (*0x414fe0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x414fe0 */
#include <stdint.h>
 
void loc_00414fe0 (void) {
    DebugBreak ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41127b */
#include <stdint.h>
 
void fcn_0041127b (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x41d670)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d670 */
#include <stdint.h>
 
uint32_t loc_0041d670 (uint32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_8h;
    int32_t var_4h;
    eax = ebp - 0x28;
    *((ebp - 8)) = eax;
    if (*((ebp + 0x10)) == 0) {
        eax = fcn_0041119f (2, "f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\vsprintf.c", 0x5a, 0, "format != NULL");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    edx = *((ebp - 8));
    eax = *((ebp + 0xc));
    *((edx + 4)) = eax;
    ecx = *((ebp - 8));
    *((ecx + 0xc)) = 0x42;
    edx = *((ebp - 8));
    eax = *((ebp + 8));
    *((edx + 8)) = eax;
    ecx = *((ebp - 8));
    edx = *((ebp + 8));
    *(ecx) = edx;
    eax = *((ebp + 0x14));
    ecx = *((ebp + 0x10));
    edx = *((ebp - 8));
    eax = fcn_0041134d (edx, ecx, eax);
    *((ebp - 4)) = eax;
    if (*((ebp + 8)) != 0) {
        eax = *((ebp - 8));
        ecx = *((eax + 4));
        ecx--;
        edx = *((ebp - 8));
        *((edx + 4)) = ecx;
        eax = *((ebp - 8));
        if (*((eax + 4)) >= 0) {
            ecx = *((ebp - 8));
            edx = *(ecx);
            *(edx) = 0;
            eax = 0;
            eax &= 0xff;
            *((ebp - 0x2c)) = eax;
            ecx = *((ebp - 8));
            edx = *(ecx);
            edx++;
            eax = *((ebp - 8));
            *(eax) = edx;
        } else {
            ecx = *((ebp - 8));
            eax = fcn_004114ab (0, ecx);
            *((ebp - 0x2c)) = eax;
        }
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41134d */
#include <stdint.h>
 
int32_t fcn_0041134d (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    int32_t var_2bah;
    int32_t var_2b8h;
    uint32_t var_2b4h;
    uint32_t var_2b0h;
    uint32_t var_2ach;
    uint32_t var_2a8h;
    int32_t var_2a4h;
    int32_t var_2a0h;
    int32_t var_298h;
    int32_t var_294h;
    uint32_t var_290h;
    int32_t var_28ch;
    uint32_t var_288h;
    uint32_t var_284h;
    uint32_t var_280h;
    int32_t var_27ch;
    uint32_t var_274h;
    int32_t var_270h;
    int32_t var_26ch;
    int32_t var_268h;
    uint32_t var_264h;
    int32_t var_260h;
    uint32_t var_25ch;
    uint32_t var_258h;
    int32_t var_254h;
    int32_t var_250h;
    int32_t var_24ch;
    int32_t var_248h;
    int32_t var_241h;
    int32_t var_240h;
    int32_t var_23ch;
    int32_t var_238h;
    int32_t var_39h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_13h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 0x34)) = eax;
    *((ebp - 0x24)) = 0;
    *((ebp - 0x23c)) = 0;
    *((ebp - 0x24c)) = 0;
    *((ebp - 0x20)) = 0;
label_0:
    eax = *((ebp + 0xc));
    cl = *(eax);
    *((ebp - 0x241)) = cl;
    edx = *((ebp - 0x241));
    eax = *((ebp + 0xc));
    eax++;
    *((ebp + 0xc)) = eax;
    if (edx == 0) {
        goto label_1;
    }
    if (*((ebp - 0x23c)) < 0) {
        goto label_1;
    }
    ecx = *((ebp - 0x241));
    if (ecx >= 0x20) {
        edx = *((ebp - 0x241));
        if (edx <= 0x78) {
            eax = *((ebp - 0x241));
            ecx = *((eax + 0x4273c0));
            ecx &= 0xf;
            *((ebp - 0x2a4)) = ecx;
        }
    } else {
        *((ebp - 0x2a4)) = 0;
    }
    edx = *((ebp - 0x2a4));
    *((ebp - 0x240)) = edx;
    eax = *((ebp - 0x240));
    ecx = *((ebp - 0x24c));
    edx = *((ecx + eax*8 + 0x4273e0));
    edx >>= 4;
    *((ebp - 0x24c)) = edx;
    eax = *((ebp - 0x24c));
    *((ebp - 0x2a8)) = eax;
    if (*((ebp - 0x2a8)) > 7) {
        goto label_2;
    }
    ecx = *((ebp - 0x2a8));
    /* switch table (8 cases) at 0x420a48 */
    do {
        *((ebp - 0xc)) = 0;
        edx = *((ebp - 0x241));
        eax = *(str.________________________________H);
        ecx = *((eax + edx*2));
        ecx &= 0x8000;
        if (ecx != 0) {
            eax = *((ebp + 8));
            cl = *((ebp - 0x241));
            fcn_00420ec0 (ecx, eax, ebp - 0x23c);
            edx = *((ebp + 0xc));
            al = *(edx);
            *((ebp - 0x241)) = al;
            ecx = *((ebp + 0xc));
            ecx++;
            *((ebp + 0xc)) = ecx;
            edx = *((ebp - 0x241));
            if (edx != 0) {
                goto label_3;
            }
            eax = fcn_0041119f (2, "output.c", 0x192, 0, "ch != _T('\\0')");
            if (eax != 1) {
                goto label_3;
            }
            __asm ("int3");
        }
label_3:
        edx = *((ebp + 8));
        al = *((ebp - 0x241));
        fcn_00420ec0 (eax, edx, ebp - 0x23c);
        goto label_2;
        *((ebp - 0x2c)) = 0;
        ecx = *((ebp - 0x2c));
        *((ebp - 0x28)) = ecx;
        edx = *((ebp - 0x28));
        *((ebp - 0x18)) = edx;
        eax = *((ebp - 0x18));
        *((ebp - 0x1c)) = eax;
        *((ebp - 0x10)) = 0;
        *((ebp - 0x30)) = 0xffffffff;
        *((ebp - 0xc)) = 0;
        goto label_2;
        ecx = *((ebp - 0x241));
        *((ebp - 0x2ac)) = ecx;
        edx = *((ebp - 0x2ac));
        edx -= 0x20;
        *((ebp - 0x2ac)) = edx;
        if (*((ebp - 0x2ac)) <= 0x10) {
            eax = *((ebp - 0x2ac));
            ecx = *((eax + 0x420a80));
            /* switch table (17 cases) at 0x420a68 */
            edx = *((ebp - 0x10));
            edx |= 4;
            *((ebp - 0x10)) = edx;
            goto label_4;
            eax = *((ebp - 0x10));
            eax |= 1;
            *((ebp - 0x10)) = eax;
            goto label_4;
            ecx = *((ebp - 0x10));
            ecx |= 2;
            *((ebp - 0x10)) = ecx;
            goto label_4;
            edx = *((ebp - 0x10));
            edx |= 0x80;
            *((ebp - 0x10)) = edx;
            goto label_4;
            eax = *((ebp - 0x10));
            eax |= 8;
            *((ebp - 0x10)) = eax;
        }
label_4:
        goto label_2;
        ecx = *((ebp - 0x241));
        if (ecx == 0x2a) {
            eax = fcn_00421070 (ebp + 0x10);
            *((ebp - 0x18)) = eax;
            if (*((ebp - 0x18)) < 0) {
                eax = *((ebp - 0x10));
                eax |= 4;
                *((ebp - 0x10)) = eax;
                ecx = *((ebp - 0x18));
                ecx = -ecx;
                *((ebp - 0x18)) = ecx;
            }
        } else {
            edx = *((ebp - 0x18));
            edx *= 0xa;
            eax = *((ebp - 0x241));
            ecx = edx + eax - 0x30;
            *((ebp - 0x18)) = ecx;
        }
        goto label_2;
        *((ebp - 0x30)) = 0;
        goto label_2;
        edx = *((ebp - 0x241));
        if (edx == 0x2a) {
            eax = fcn_00421070 (ebp + 0x10);
            *((ebp - 0x30)) = eax;
            if (*((ebp - 0x30)) < 0) {
                *((ebp - 0x30)) = 0xffffffff;
            }
        } else {
            ecx = *((ebp - 0x30));
            ecx *= 0xa;
            edx = *((ebp - 0x241));
            eax = ecx + edx - 0x30;
            *((ebp - 0x30)) = eax;
        }
        goto label_2;
        ecx = *((ebp - 0x241));
        *((ebp - 0x2b0)) = ecx;
        edx = *((ebp - 0x2b0));
        edx -= 0x49;
        *((ebp - 0x2b0)) = edx;
        if (*((ebp - 0x2b0)) > 0x2e) {
            goto label_5;
        }
        eax = *((ebp - 0x2b0));
        ecx = *((eax + 0x420aa5));
        /* switch table (47 cases) at 0x420a91 */
        edx = *((ebp - 0x10));
        edx |= 0x10;
        *((ebp - 0x10)) = edx;
        goto label_5;
        eax = *((ebp + 0xc));
        ecx = *(eax);
        if (ecx == 0x36) {
            edx = *((ebp + 0xc));
            eax = *((edx + 1));
            if (eax == 0x34) {
                ecx = *((ebp + 0xc));
                ecx += 2;
                *((ebp + 0xc)) = ecx;
                edx = *((ebp - 0x10));
                edx |= 0x8000;
                *((ebp - 0x10)) = edx;
            }
        } else {
            eax = *((ebp + 0xc));
            ecx = *(eax);
            if (ecx == 0x33) {
                edx = *((ebp + 0xc));
                eax = *((edx + 1));
                if (eax == 0x32) {
                    ecx = *((ebp + 0xc));
                    ecx += 2;
                    *((ebp + 0xc)) = ecx;
                    edx = *((ebp - 0x10));
                    edx &= 0xffff7fff;
                    *((ebp - 0x10)) = edx;
                }
            } else {
                eax = *((ebp + 0xc));
                ecx = *(eax);
                if (ecx != 0x64) {
                    edx = *((ebp + 0xc));
                    eax = *(edx);
                    if (eax == 0x69) {
                        goto label_6;
                    }
                    ecx = *((ebp + 0xc));
                    edx = *(ecx);
                    if (edx == 0x6f) {
                        goto label_6;
                    }
                    eax = *((ebp + 0xc));
                    ecx = *(eax);
                    if (ecx == 0x75) {
                        goto label_6;
                    }
                    edx = *((ebp + 0xc));
                    eax = *(edx);
                    if (eax == 0x78) {
                        goto label_6;
                    }
                    ecx = *((ebp + 0xc));
                    edx = *(ecx);
                    if (edx != 0x58) {
                        goto label_7;
                    }
                }
label_6:
                goto label_8;
label_7:
                *((ebp - 0x24c)) = 0;
            }
        } while (1);
    }
label_8:
    goto label_5;
    eax = *((ebp - 0x10));
    eax |= 0x20;
    *((ebp - 0x10)) = eax;
    goto label_5;
    ecx = *((ebp - 0x10));
    ecx |= 0x800;
    *((ebp - 0x10)) = ecx;
label_5:
    goto label_2;
    edx = *((ebp - 0x241));
    *((ebp - 0x2b4)) = edx;
    eax = *((ebp - 0x2b4));
    eax -= 0x43;
    *((ebp - 0x2b4)) = eax;
    if (*((ebp - 0x2b4)) > 0x35) {
        goto label_9;
    }
    ecx = *((ebp - 0x2b4));
    edx = *((ecx + 0x420b10));
    /* switch table (54 cases) at 0x420ad4 */
    eax = *((ebp - 0x10));
    eax &= 0x830;
    if (eax == 0) {
        ecx = *((ebp - 0x10));
        ecx |= 0x800;
        *((ebp - 0x10)) = ecx;
    }
    edx = *((ebp - 0x10));
    edx &= 0x810;
    if (edx != 0) {
        ax = fcn_004210c0 (ebp + 0x10);
        *((ebp - 0x248)) = ax;
        cx = *((ebp - 0x248));
        eax = fcn_00411262 (ebp - 0x238, ecx);
        *((ebp - 0x24)) = eax;
        if (*((ebp - 0x24)) < 0) {
            *((ebp - 0x28)) = 1;
        }
    } else {
        ax = fcn_00421070 (ebp + 0x10);
        *((ebp - 0x254)) = ax;
        cl = *((ebp - 0x254));
        *((ebp - 0x238)) = cl;
        *((ebp - 0x24)) = 1;
    }
    edx = ebp - 0x238;
    *((ebp - 4)) = edx;
    goto label_9;
    eax = fcn_00421070 (ebp + 0x10);
    *((ebp - 0x258)) = eax;
    if (*((ebp - 0x258)) != 0) {
        ecx = *((ebp - 0x258));
        if (*((ecx + 4)) != 0) {
            goto label_10;
        }
    }
    edx = *(str._null_);
    *((ebp - 4)) = edx;
    eax = *((ebp - 4));
    eax = fcn_00411235 (eax);
    *((ebp - 0x24)) = eax;
    goto label_11;
label_10:
    ecx = *((ebp - 0x10));
    ecx &= 0x800;
    if (ecx != 0) {
        edx = *((ebp - 0x258));
        eax = *((edx + 4));
        *((ebp - 4)) = eax;
        ecx = *((ebp - 0x258));
        eax = *(ecx);
        edx:eax = (int64_t) eax;
        eax -= edx;
        eax >>= 1;
        *((ebp - 0x24)) = eax;
        *((ebp - 0xc)) = 1;
    } else {
        *((ebp - 0xc)) = 0;
        edx = *((ebp - 0x258));
        eax = *((edx + 4));
        *((ebp - 4)) = eax;
        ecx = *((ebp - 0x258));
        edx = *(ecx);
        *((ebp - 0x24)) = edx;
    }
label_11:
    goto label_9;
    eax = *((ebp - 0x10));
    eax &= 0x830;
    if (eax == 0) {
        ecx = *((ebp - 0x10));
        ecx |= 0x800;
        *((ebp - 0x10)) = ecx;
    }
    if (*((ebp - 0x30)) == -1) {
        *((ebp - 0x2b8)) = 0x7fffffff;
    } else {
        edx = *((ebp - 0x30));
        *((ebp - 0x2b8)) = edx;
    }
    eax = *((ebp - 0x2b8));
    *((ebp - 0x260)) = eax;
    eax = fcn_00421070 (ebp + 0x10);
    *((ebp - 4)) = eax;
    edx = *((ebp - 0x10));
    edx &= 0x810;
    if (edx == 0) {
        goto label_12;
    }
    if (*((ebp - 4)) == 0) {
        eax = "(null)";
        *((ebp - 4)) = eax;
    }
    *((ebp - 0xc)) = 1;
    ecx = *((ebp - 4));
    *((ebp - 0x264)) = ecx;
    do {
        edx = *((ebp - 0x260));
        eax = *((ebp - 0x260));
        eax--;
        *((ebp - 0x260)) = eax;
        if (edx == 0) {
            goto label_13;
        }
        ecx = *((ebp - 0x264));
        edx = *(ecx);
        if (edx == 0) {
            goto label_13;
        }
        eax = *((ebp - 0x264));
        eax += 2;
        *((ebp - 0x264)) = eax;
    } while (1);
label_13:
    ecx = *((ebp - 0x264));
    ecx -= *((ebp - 4));
    ecx >>= 1;
    *((ebp - 0x24)) = ecx;
    goto label_14;
label_12:
    if (*((ebp - 4)) == 0) {
        edx = *(str._null_);
        *((ebp - 4)) = edx;
    }
    eax = *((ebp - 4));
    *((ebp - 0x25c)) = eax;
    do {
        ecx = *((ebp - 0x260));
        edx = *((ebp - 0x260));
        edx--;
        *((ebp - 0x260)) = edx;
        if (ecx == 0) {
            goto label_15;
        }
        eax = *((ebp - 0x25c));
        ecx = *(eax);
        if (ecx == 0) {
            goto label_15;
        }
        edx = *((ebp - 0x25c));
        edx++;
        *((ebp - 0x25c)) = edx;
    } while (1);
label_15:
    eax = *((ebp - 0x25c));
    eax -= *((ebp - 4));
    *((ebp - 0x24)) = eax;
label_14:
    goto label_9;
    eax = fcn_00421070 (ebp + 0x10);
    *((ebp - 0x268)) = eax;
    edx = *((ebp - 0x10));
    edx &= 0x20;
    if (edx != 0) {
        eax = *((ebp - 0x268));
        cx = *((ebp - 0x23c));
        *(eax) = cx;
    } else {
        edx = *((ebp - 0x268));
        eax = *((ebp - 0x23c));
        *(edx) = eax;
    }
    *((ebp - 0x28)) = 1;
    goto label_9;
    *((ebp - 0x2c)) = 1;
    ecx = *((ebp - 0x241));
    ecx += 0x20;
    *((ebp - 0x241)) = cl;
    edx = *((ebp - 0x10));
    edx |= 0x40;
    *((ebp - 0x10)) = edx;
    eax = ebp - 0x238;
    *((ebp - 4)) = eax;
    if (*((ebp - 0x30)) < 0) {
        *((ebp - 0x30)) = 6;
    } else {
        if (*((ebp - 0x30)) == 0) {
            ecx = *((ebp - 0x241));
            if (ecx == 0x67) {
                *((ebp - 0x30)) = 1;
            }
        } else {
            if (*((ebp - 0x30)) <= 0x200) {
                goto label_16;
            }
            *((ebp - 0x30)) = 0x200;
        }
    }
label_16:
    if (*((ebp - 0x30)) > 0xa3) {
        edx = *((ebp - 0x30));
        edx += 0x15d;
        eax = fcn_00411064 (edx, 2, "output.c", 0x300);
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x20)) != 0) {
            eax = *((ebp - 0x20));
            *((ebp - 4)) = eax;
        } else {
            *((ebp - 0x30)) = 0xa3;
        }
    }
    ecx = *((ebp + 0x10));
    ecx += 8;
    *((ebp + 0x10)) = ecx;
    edx = *((ebp + 0x10));
    eax = *((edx - 8));
    ecx = *((edx - 4));
    *((ebp - 0x270)) = eax;
    *((ebp - 0x26c)) = ecx;
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x30));
    ecx = *((ebp - 0x241));
    edx = *((ebp - 4));
    uint32_t (*0x429200)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (ebp - 0x270, edx, ecx, eax, edx);
    ecx = *((ebp - 0x10));
    ecx &= 0x80;
    if (ecx != 0) {
        if (*((ebp - 0x30)) != 0) {
            goto label_17;
        }
        edx = *((ebp - 4));
        uint32_t (*0x42920c)(uint32_t) (edx);
    }
label_17:
    eax = *((ebp - 0x241));
    if (eax == 0x67) {
        ecx = *((ebp - 0x10));
        ecx &= 0x80;
        if (ecx != 0) {
            goto label_18;
        }
        edx = *((ebp - 4));
        uint32_t (*0x429204)(uint32_t) (edx);
    }
label_18:
    eax = *((ebp - 4));
    ecx = *(eax);
    if (ecx == 0x2d) {
        edx = *((ebp - 0x10));
        edx |= 0x100;
        *((ebp - 0x10)) = edx;
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
    }
    ecx = *((ebp - 4));
    eax = fcn_00411235 (ecx);
    *((ebp - 0x24)) = eax;
    goto label_9;
    edx = *((ebp - 0x10));
    edx |= 0x40;
    *((ebp - 0x10)) = edx;
    *((ebp - 8)) = 0xa;
    goto label_19;
    *((ebp - 8)) = 0xa;
    goto label_19;
    *((ebp - 0x30)) = 8;
    *((ebp - 0x250)) = 7;
    goto label_20;
    *((ebp - 0x250)) = 0x27;
label_20:
    *((ebp - 8)) = 0x10;
    eax = *((ebp - 0x10));
    eax &= 0x80;
    if (eax != 0) {
        *((ebp - 0x14)) = 0x30;
        ecx = *((ebp - 0x250));
        ecx += 0x51;
        *((ebp - 0x13)) = cl;
        *((ebp - 0x1c)) = 2;
    }
    goto label_19;
    *((ebp - 8)) = 8;
    edx = *((ebp - 0x10));
    edx &= 0x80;
    if (edx != 0) {
        eax = *((ebp - 0x10));
        eax |= 0x200;
        *((ebp - 0x10)) = eax;
    }
label_19:
    ecx = *((ebp - 0x10));
    ecx &= 0x8000;
    if (ecx != 0) {
        eax = fcn_00421090 (ebp + 0x10);
        *((ebp - 0x280)) = eax;
        *((ebp - 0x27c)) = edx;
    } else {
        eax = *((ebp - 0x10));
        eax &= 0x20;
        if (eax != 0) {
            ecx = *((ebp - 0x10));
            ecx &= 0x40;
            if (ecx != 0) {
                ax = fcn_00421070 (ebp + 0x10);
                eax = (int32_t) ax;
                edx:eax = (int64_t) eax;
                *((ebp - 0x280)) = eax;
                *((ebp - 0x27c)) = edx;
            } else {
                ax = fcn_00421070 (ebp + 0x10);
                eax = (int32_t) ax;
                edx:eax = (int64_t) eax;
                *((ebp - 0x280)) = eax;
                *((ebp - 0x27c)) = edx;
            }
        } else {
            ecx = *((ebp - 0x10));
            ecx &= 0x40;
            if (ecx != 0) {
                eax = fcn_00421070 (ebp + 0x10);
                edx:eax = (int64_t) eax;
                *((ebp - 0x280)) = eax;
                *((ebp - 0x27c)) = edx;
            } else {
                eax = fcn_00421070 (ebp + 0x10);
                ecx = 0;
                *((ebp - 0x280)) = eax;
                *((ebp - 0x27c)) = ecx;
            }
        }
    }
    edx = *((ebp - 0x10));
    edx &= 0x40;
    if (edx != 0) {
        if (*((ebp - 0x27c)) <= 0) {
            if (*((ebp - 0x27c)) >= 0) {
                if (*((ebp - 0x280)) >= 0) {
                    goto label_21;
                }
            }
            eax = *((ebp - 0x280));
            eax = -eax;
            ecx = *((ebp - 0x27c));
            ecx += 0;
            ecx = -ecx;
            *((ebp - 0x288)) = eax;
            *((ebp - 0x284)) = ecx;
            edx = *((ebp - 0x10));
            edx |= 0x100;
            *((ebp - 0x10)) = edx;
        }
    } else {
label_21:
        eax = *((ebp - 0x280));
        *((ebp - 0x288)) = eax;
        ecx = *((ebp - 0x27c));
        *((ebp - 0x284)) = ecx;
    }
    edx = *((ebp - 0x10));
    edx &= 0x8000;
    if (edx == 0) {
        eax = *((ebp - 0x288));
        ecx = *((ebp - 0x284));
        ecx = 0;
        *((ebp - 0x288)) = eax;
        *((ebp - 0x284)) = ecx;
    }
    if (*((ebp - 0x30)) < 0) {
        *((ebp - 0x30)) = 1;
    } else {
        edx = *((ebp - 0x10));
        edx &= 0xfffffff7;
        *((ebp - 0x10)) = edx;
        if (*((ebp - 0x30)) <= 0x200) {
            goto label_22;
        }
        *((ebp - 0x30)) = 0x200;
    }
label_22:
    eax = *((ebp - 0x288));
    eax |= *((ebp - 0x284));
    if (eax == 0) {
        *((ebp - 0x1c)) = 0;
    }
    ecx = ebp - 0x39;
    *((ebp - 4)) = ecx;
    do {
        edx = *((ebp - 0x30));
        eax = *((ebp - 0x30));
        eax--;
        *((ebp - 0x30)) = eax;
        if (edx <= 0) {
            ecx = *((ebp - 0x288));
            ecx |= *((ebp - 0x284));
            if (ecx == 0) {
                goto label_23;
            }
        }
        eax = *((ebp - 8));
        edx:eax = (int64_t) eax;
        edx = *((ebp - 0x284));
        eax = *((ebp - 0x288));
        eax = fcn_004115a0 (eax, edx, eax, edx);
        eax += 0x30;
        *((ebp - 0x274)) = eax;
        eax = *((ebp - 8));
        edx:eax = (int64_t) eax;
        ecx = *((ebp - 0x284));
        edx = *((ebp - 0x288));
        eax = fcn_00411555 (edx, ecx, eax, edx);
        *((ebp - 0x288)) = eax;
        *((ebp - 0x284)) = edx;
        if (*((ebp - 0x274)) > 0x39) {
            eax = *((ebp - 0x274));
            eax += *((ebp - 0x250));
            *((ebp - 0x274)) = eax;
        }
        ecx = *((ebp - 4));
        dl = *((ebp - 0x274));
        *(ecx) = dl;
        eax = *((ebp - 4));
        eax--;
        *((ebp - 4)) = eax;
    } while (1);
label_23:
    ecx = ebp - 0x39;
    ecx -= *((ebp - 4));
    *((ebp - 0x24)) = ecx;
    edx = *((ebp - 4));
    edx++;
    *((ebp - 4)) = edx;
    eax = *((ebp - 0x10));
    eax &= 0x200;
    if (eax != 0) {
        ecx = *((ebp - 4));
        edx = *(ecx);
        if (edx == 0x30) {
            if (*((ebp - 0x24)) != 0) {
                goto label_9;
            }
        }
        eax = *((ebp - 4));
        eax--;
        *((ebp - 4)) = eax;
        ecx = *((ebp - 4));
        *(ecx) = 0x30;
        edx = *((ebp - 0x24));
        edx++;
        *((ebp - 0x24)) = edx;
    }
label_9:
    if (*((ebp - 0x28)) != 0) {
        goto label_24;
    }
    eax = *((ebp - 0x10));
    eax &= 0x40;
    if (eax != 0) {
        ecx = *((ebp - 0x10));
        ecx &= 0x100;
        if (ecx != 0) {
            *((ebp - 0x14)) = 0x2d;
            *((ebp - 0x1c)) = 1;
        } else {
            edx = *((ebp - 0x10));
            edx &= 1;
            if (edx != 0) {
                *((ebp - 0x14)) = 0x2b;
                *((ebp - 0x1c)) = 1;
            } else {
                eax = *((ebp - 0x10));
                eax &= 2;
                if (eax == 0) {
                    goto label_25;
                }
                *((ebp - 0x14)) = 0x20;
                *((ebp - 0x1c)) = 1;
            }
        }
    }
label_25:
    ecx = *((ebp - 0x18));
    ecx -= *((ebp - 0x24));
    ecx -= *((ebp - 0x1c));
    *((ebp - 0x28c)) = ecx;
    edx = *((ebp - 0x10));
    edx &= 0xc;
    if (edx == 0) {
        ecx = *((ebp + 8));
        edx = *((ebp - 0x28c));
        fcn_00420f90 (0x20, edx, ecx, ebp - 0x23c);
    }
    ecx = *((ebp + 8));
    edx = *((ebp - 0x1c));
    fcn_00420fe0 (ebp - 0x14, edx, ecx, ebp - 0x23c);
    ecx = *((ebp - 0x10));
    ecx &= 8;
    if (ecx != 0) {
        edx = *((ebp - 0x10));
        edx &= 4;
        if (edx != 0) {
            goto label_26;
        }
        ecx = *((ebp + 8));
        edx = *((ebp - 0x28c));
        fcn_00420f90 (0x30, edx, ecx, ebp - 0x23c);
    }
label_26:
    if (*((ebp - 0xc)) == 0) {
        goto label_27;
    }
    if (*((ebp - 0x24)) <= 0) {
        goto label_27;
    }
    eax = *((ebp - 4));
    *((ebp - 0x290)) = eax;
    ecx = *((ebp - 0x24));
    *((ebp - 0x294)) = ecx;
    do {
        edx = *((ebp - 0x294));
        eax = *((ebp - 0x294));
        eax--;
        *((ebp - 0x294)) = eax;
        if (edx == 0) {
            goto label_28;
        }
        ecx = *((ebp - 0x290));
        dx = *(ecx);
        *((ebp - 0x2ba)) = dx;
        ax = *((ebp - 0x2ba));
        eax = fcn_00411262 (ebp - 0x2a0, eax);
        *((ebp - 0x298)) = eax;
        edx = *((ebp - 0x290));
        edx += 2;
        *((ebp - 0x290)) = edx;
        if (*((ebp - 0x298)) <= 0) {
        } else {
            ecx = *((ebp + 8));
            edx = *((ebp - 0x298));
            fcn_00420fe0 (ebp - 0x2a0, edx, ecx, ebp - 0x23c);
        } while (1);
    }
label_28:
    goto label_29;
label_27:
    edx = *((ebp + 8));
    eax = *((ebp - 0x24));
    ecx = *((ebp - 4));
    fcn_00420fe0 (ecx, eax, edx, ebp - 0x23c);
label_29:
    edx = *((ebp - 0x10));
    edx &= 4;
    if (edx != 0) {
        ecx = *((ebp + 8));
        edx = *((ebp - 0x28c));
        fcn_00420f90 (0x20, edx, ecx, ebp - 0x23c);
    }
label_24:
    if (*((ebp - 0x20)) != 0) {
        eax = *((ebp - 0x20));
        fcn_0041141a (eax, 2);
        *((ebp - 0x20)) = 0;
    }
label_2:
    goto label_0;
label_1:
    eax = *((ebp - 0x23c));
    ecx = *((ebp - 0x34));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114ab */
#include <stdint.h>
 
void fcn_004114ab (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x41fa90)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41fa90 */
#include <stdint.h>
 
uint32_t loc_0041fa90 (int32_t arg_8h, uint32_t arg_ch) {
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    if (*((ebp + 0xc)) == 0) {
        eax = fcn_0041119f (2, "_flsbuf.c", 0x66, 0, "str != NULL");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    ecx = *((ebp + 0xc));
    *((ebp - 8)) = ecx;
    edx = *((ebp - 8));
    eax = *((edx + 0x10));
    *((ebp - 0x10)) = eax;
    ecx = *((ebp - 8));
    edx = *((ecx + 0xc));
    edx &= 0x82;
    if (edx != 0) {
        eax = *((ebp - 8));
        ecx = *((eax + 0xc));
        ecx &= 0x40;
        if (ecx == 0) {
            goto label_1;
        }
    }
    edx = *((ebp - 8));
    eax = *((edx + 0xc));
    eax |= 0x20;
    ecx = *((ebp - 8));
    *((ecx + 0xc)) = eax;
    eax |= 0xffffffff;
    goto label_2;
label_1:
    edx = *((ebp - 8));
    eax = *((edx + 0xc));
    eax &= 1;
    if (eax != 0) {
        ecx = *((ebp - 8));
        *((ecx + 4)) = 0;
        edx = *((ebp - 8));
        eax = *((edx + 0xc));
        eax &= 0x10;
        if (eax != 0) {
            ecx = *((ebp - 8));
            edx = *((ebp - 8));
            eax = *((edx + 8));
            *(ecx) = eax;
            ecx = *((ebp - 8));
            edx = *((ecx + 0xc));
            edx &= 0xfffffffe;
            eax = *((ebp - 8));
            *((eax + 0xc)) = edx;
        } else {
            ecx = *((ebp - 8));
            edx = *((ecx + 0xc));
            edx |= 0x20;
            eax = *((ebp - 8));
            *((eax + 0xc)) = edx;
            eax |= 0xffffffff;
        }
    } else {
        ecx = *((ebp - 8));
        edx = *((ecx + 0xc));
        edx |= 2;
        eax = *((ebp - 8));
        *((eax + 0xc)) = edx;
        ecx = *((ebp - 8));
        edx = *((ecx + 0xc));
        edx &= 0xffffffef;
        eax = *((ebp - 8));
        *((eax + 0xc)) = edx;
        ecx = *((ebp - 8));
        *((ecx + 4)) = 0;
        *((ebp - 4)) = 0;
        edx = *((ebp - 4));
        *((ebp - 0xc)) = edx;
        eax = *((ebp - 8));
        ecx = *((eax + 0xc));
        ecx &= 0x10c;
        if (ecx == 0) {
            if (*((ebp - 8)) != 0x428f20) {
                if (*((ebp - 8)) != 0x428f40) {
                    goto label_3;
                }
            }
            edx = *((ebp - 0x10));
            eax = fcn_004114ba (edx);
            if (eax != 0) {
                goto label_4;
            }
label_3:
            eax = *((ebp - 8));
            fcn_00411415 (eax);
        }
label_4:
        ecx = *((ebp - 8));
        edx = *((ecx + 0xc));
        edx &= 0x108;
        if (edx != 0) {
            eax = *((ebp - 8));
            ecx = *((ebp - 8));
            edx = *(eax);
            edx -= *((ecx + 8));
            if (edx < 0) {
                eax = fcn_0041119f (2, "_flsbuf.c", 0x9d, 0, "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)");
                if (eax != 1) {
                    goto label_5;
                }
                __asm ("int3");
            }
label_5:
            ecx = *((ebp - 8));
            edx = *((ebp - 8));
            eax = *(ecx);
            eax -= *((edx + 8));
            *((ebp - 4)) = eax;
            ecx = *((ebp - 8));
            edx = *((ecx + 8));
            edx++;
            eax = *((ebp - 8));
            *(eax) = edx;
            ecx = *((ebp - 8));
            edx = *((ecx + 0x18));
            edx--;
            eax = *((ebp - 8));
            *((eax + 4)) = edx;
            if (*((ebp - 4)) > 0) {
                ecx = *((ebp - 4));
                edx = *((ebp - 8));
                eax = *((edx + 8));
                ecx = *((ebp - 0x10));
                eax = fcn_00411154 (ecx, eax, ecx);
                *((ebp - 0xc)) = eax;
            } else {
                if (*((ebp - 0x10)) != -1) {
                    edx = *((ebp - 0x10));
                    edx >>= 5;
                    eax = *((ebp - 0x10));
                    eax &= 0x1f;
                    ecx = *((edx*4 + 0x42afe0));
                    edx = ecx + eax*8;
                    *((ebp - 0x14)) = edx;
                } else {
                    *((ebp - 0x14)) = 0x428c34;
                }
                eax = *((ebp - 0x14));
                ecx = *((eax + 4));
                ecx &= 0x20;
                if (ecx == 0) {
                    goto label_6;
                }
                edx = *((ebp - 0x10));
                fcn_0041116d (edx, 0, 2);
            }
label_6:
            eax = *((ebp - 8));
            ecx = *((eax + 8));
            dl = *((ebp + 8));
            *(ecx) = dl;
        } else {
            *((ebp - 4)) = 1;
            eax = *((ebp - 4));
            edx = *((ebp - 0x10));
            eax = fcn_00411154 (edx, ebp + 8, eax);
            *((ebp - 0xc)) = eax;
        }
        eax = *((ebp - 0xc));
        if (eax != *((ebp - 4))) {
            ecx = *((ebp - 8));
            edx = *((ecx + 0xc));
            edx |= 0x20;
            eax = *((ebp - 8));
            *((eax + 0xc)) = edx;
            eax |= 0xffffffff;
        } else {
            eax = *((ebp + 8));
            eax &= 0xff;
        }
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114ba */
#include <stdint.h>
 
int32_t fcn_004114ba (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax >= *(0x42af94)) {
        eax = 0;
    } else {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        eax = *((eax + edx*8 + 4));
        eax &= 0x40;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411415 */
#include <stdint.h>
 
void fcn_00411415 (uint32_t arg_8h) {
    int32_t var_4h;
    return void (*0x421b60)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x421b60 */
#include <stdint.h>
 
uint32_t loc_00421b60 (uint32_t arg_8h) {
    uint32_t var_4h;
    if (*((ebp + 8)) == 0) {
        eax = fcn_0041119f (2, "_getbuf.c", 0x2e, 0, "str != NULL");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    ecx = *(0x429930);
    ecx++;
    *(0x429930) = ecx;
    edx = *((ebp + 8));
    *((ebp - 4)) = edx;
    eax = fcn_00411064 (0x1000, 2, "_getbuf.c", 0x3a);
    ecx = *((ebp - 4));
    *((ecx + 8)) = eax;
    edx = *((ebp - 4));
    if (*((edx + 8)) != 0) {
        eax = *((ebp - 4));
        ecx = *((eax + 0xc));
        ecx |= 8;
        edx = *((ebp - 4));
        *((edx + 0xc)) = ecx;
        eax = *((ebp - 4));
        *((eax + 0x18)) = 0x1000;
    } else {
        ecx = *((ebp - 4));
        edx = *((ecx + 0xc));
        edx |= 4;
        eax = *((ebp - 4));
        *((eax + 0xc)) = edx;
        ecx = *((ebp - 4));
        ecx += 0x14;
        edx = *((ebp - 4));
        *((edx + 8)) = ecx;
        eax = *((ebp - 4));
        *((eax + 0x18)) = 2;
    }
    ecx = *((ebp - 4));
    edx = *((ebp - 4));
    eax = *((edx + 8));
    *(ecx) = eax;
    ecx = *((ebp - 4));
    *((ecx + 4)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411154 */
#include <stdint.h>
 
int32_t fcn_00411154 (HANDLE * hFile, LPCVOID * arg_ch, DWORD * arg_10h) {
    int32_t var_429h;
    int32_t var_428h;
    DWORD * nNumberOfBytesToWrite;
    LPDWORD * lpNumberOfBytesWritten;
    DWORD var_41ch;
    LPDWORD * var_418h;
    int32_t var_414h;
    LPCVOID * lpBuffer;
    int32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            goto label_1;
        }
    }
    *(0x42962c) = 9;
    *(0x429630) = 0;
    eax |= 0xffffffff;
    goto label_2;
label_1:
    *((ebp - 0x418)) = 0;
    edx = *((ebp - 0x418));
    *((ebp - 0x428)) = edx;
    if (*((ebp + 0x10)) == 0) {
        eax = 0;
        goto label_2;
    }
    eax = *((ebp + 8));
    eax >>= 5;
    ecx = *((ebp + 8));
    ecx &= 0x1f;
    edx = *((eax*4 + 0x42afe0));
    eax = *((edx + ecx*8 + 4));
    eax &= 0x20;
    if (eax != 0) {
        ecx = *((ebp + 8));
        fcn_004112fd (ecx, 0, 0, 2);
    }
    edx = *((ebp + 8));
    edx >>= 5;
    eax = *((ebp + 8));
    eax &= 0x1f;
    ecx = *((edx*4 + 0x42afe0));
    edx = *((ecx + eax*8 + 4));
    edx &= 0x80;
    if (edx == 0) {
        goto label_3;
    }
    eax = *((ebp + 0xc));
    *((ebp - 0x414)) = eax;
    *((ebp - 0x41c)) = 0;
label_0:
    ecx = *((ebp - 0x414));
    ecx -= *((ebp + 0xc));
    if (ecx >= *((ebp + 0x10))) {
        goto label_4;
    }
    edx = ebp - 0x410;
    *((ebp - 0x424)) = edx;
    do {
        eax = *((ebp - 0x424));
        ecx = ebp - 0x410;
        eax -= ecx;
        if (eax >= 0x400) {
            goto label_5;
        }
        edx = *((ebp - 0x414));
        edx -= *((ebp + 0xc));
        if (edx >= *((ebp + 0x10))) {
            goto label_5;
        }
        eax = *((ebp - 0x414));
        cl = *(eax);
        *((ebp - 0x429)) = cl;
        edx = *((ebp - 0x414));
        edx++;
        *((ebp - 0x414)) = edx;
        eax = *((ebp - 0x429));
        if (eax == 0xa) {
            ecx = *((ebp - 0x428));
            ecx++;
            *((ebp - 0x428)) = ecx;
            edx = *((ebp - 0x424));
            *(edx) = 0xd;
            eax = *((ebp - 0x424));
            eax++;
            *((ebp - 0x424)) = eax;
        }
        ecx = *((ebp - 0x424));
        dl = *((ebp - 0x429));
        *(ecx) = dl;
        eax = *((ebp - 0x424));
        eax++;
        *((ebp - 0x424)) = eax;
    } while (1);
label_5:
    edx = *((ebp - 0x424));
    eax = ebp - 0x410;
    edx -= eax;
    edx = *((ebp + 8));
    edx >>= 5;
    eax = *((ebp + 8));
    eax &= 0x1f;
    ecx = *((edx*4 + 0x42afe0));
    edx = *((ecx + eax*8));
    eax = WriteFile (edx, ebp - 0x410, edx, ebp - 0x420, 0);
    if (eax != 0) {
        eax = *((ebp - 0x418));
        eax += *((ebp - 0x420));
        *((ebp - 0x418)) = eax;
        ecx = *((ebp - 0x424));
        edx = ebp - 0x410;
        ecx -= edx;
        if (*((ebp - 0x420)) < ecx) {
            goto label_4;
        }
    } else {
        eax = GetLastError ();
        *((ebp - 0x41c)) = eax;
        goto label_4;
    }
    goto label_0;
label_4:
    goto label_6;
label_3:
    ecx = *((ebp + 0x10));
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax >>= 5;
    ecx = *((ebp + 8));
    ecx &= 0x1f;
    edx = *((eax*4 + 0x42afe0));
    eax = *((edx + ecx*8));
    eax = WriteFile (eax, edx, ecx, ebp - 0x420, 0);
    if (eax != 0) {
        *((ebp - 0x41c)) = 0;
        ecx = *((ebp - 0x420));
        *((ebp - 0x418)) = ecx;
    } else {
        eax = GetLastError ();
        *((ebp - 0x41c)) = eax;
    }
label_6:
    if (*((ebp - 0x418)) == 0) {
        if (*((ebp - 0x41c)) != 0) {
            if (*((ebp - 0x41c)) == 5) {
                *(0x42962c) = 9;
                edx = *((ebp - 0x41c));
                *(0x429630) = edx;
            } else {
                eax = *((ebp - 0x41c));
                eax = fcn_00411113 (eax);
            }
            eax |= 0xffffffff;
            ecx = *((ebp + 8));
            ecx >>= 5;
            edx = *((ebp + 8));
            edx &= 0x1f;
            eax = *((ecx*4 + 0x42afe0));
            ecx = *((eax + edx*8 + 4));
            ecx &= 0x40;
        } else {
        } else {
        }
    }
    if (ecx != 0) {
        edx = *((ebp + 0xc));
        eax = *(edx);
        if (eax == 0x1a) {
            eax = 0;
        }
    } else {
        *(0x42962c) = 0x1c;
        *(0x429630) = 0;
        eax |= 0xffffffff;
        eax = *((ebp - 0x418));
        eax -= *((ebp - 0x428));
    }
label_2:
    ecx = *((ebp - 4));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41116d */
#include <stdint.h>
 
int32_t fcn_0041116d (uint32_t arg_8h, LONG lDistanceToMove, int32_t arg_10h) {
    DWORD var_ch;
    HANDLE hFile;
    DWORD var_4h;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            goto label_0;
        }
    }
    *(0x42962c) = 9;
    *(0x429630) = 0;
    eax |= 0xffffffff;
    goto label_1;
label_0:
    edx = *((ebp + 8));
    eax = fcn_00411375 (edx);
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) == -1) {
        *(0x42962c) = 9;
        eax |= 0xffffffff;
    } else {
        eax = *((ebp + 0x10));
        ecx = *((ebp + 0xc));
        edx = *((ebp - 8));
        eax = SetFilePointer (edx, ecx, 0, eax);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) == -1) {
            eax = GetLastError ();
            *((ebp - 0xc)) = eax;
        } else {
            *((ebp - 0xc)) = 0;
        }
        if (*((ebp - 0xc)) != 0) {
            eax = *((ebp - 0xc));
            eax = fcn_00411113 (eax);
            eax |= 0xffffffff;
        } else {
            ecx = *((ebp + 8));
            ecx >>= 5;
            edx = *((ebp + 8));
            edx &= 0x1f;
            eax = *((ecx*4 + 0x42afe0));
            ecx = *((eax + edx*8 + 4));
            ecx &= 0xfffffffd;
            edx = *((ebp + 8));
            edx >>= 5;
            eax = *((ebp + 8));
            eax &= 0x1f;
            edx = *((edx*4 + 0x42afe0));
            *((edx + eax*8 + 4)) = cl;
            eax = *((ebp - 4));
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41100a */
#include <stdint.h>
 
void fcn_0041100a (LPCSTR arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x41d540)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d540 */
#include <stdint.h>
 
uint32_t loc_0041d540 (uint32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = ebp - 0x2c;
    *((ebp - 0xc)) = eax;
    ecx = ebp + 0x14;
    *((ebp - 4)) = ecx;
    if (*((ebp + 0x10)) == 0) {
        eax = fcn_0041119f (2, "f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\sprintf.c", 0x5d, 0, "format != NULL");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    if (*((ebp + 8)) == 0) {
        eax = fcn_0041119f (2, "f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\sprintf.c", 0x5e, 0, "string != NULL");
        if (eax != 1) {
            goto label_1;
        }
        __asm ("int3");
    }
label_1:
    ecx = *((ebp - 0xc));
    edx = *((ebp + 0xc));
    *((ecx + 4)) = edx;
    eax = *((ebp - 0xc));
    *((eax + 0xc)) = 0x42;
    ecx = *((ebp - 0xc));
    edx = *((ebp + 8));
    *((ecx + 8)) = edx;
    eax = *((ebp - 0xc));
    ecx = *((ebp + 8));
    *(eax) = ecx;
    edx = *((ebp - 4));
    eax = *((ebp + 0x10));
    ecx = *((ebp - 0xc));
    eax = fcn_0041134d (ecx, eax, edx);
    *((ebp - 8)) = eax;
    if (*((ebp + 8)) != 0) {
        edx = *((ebp - 0xc));
        eax = *((edx + 4));
        eax--;
        ecx = *((ebp - 0xc));
        *((ecx + 4)) = eax;
        edx = *((ebp - 0xc));
        if (*((edx + 4)) >= 0) {
            eax = *((ebp - 0xc));
            ecx = *(eax);
            *(ecx) = 0;
            edx = 0;
            edx &= 0xff;
            *((ebp - 0x30)) = edx;
            eax = *((ebp - 0xc));
            ecx = *(eax);
            ecx++;
            edx = *((ebp - 0xc));
            *(edx) = ecx;
        } else {
            eax = *((ebp - 0xc));
            eax = fcn_004114ab (0, eax);
            *((ebp - 0x30)) = eax;
        }
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111e0 */
#include <stdint.h>
 
int32_t fcn_004111e0 (uint32_t arg_8h, int32_t arg_ch, uint32_t arg_10h) {
    if (*((ebp + 0x10)) == 0xa) {
        if (*((ebp + 8)) < 0) {
            eax = *((ebp + 0x10));
            ecx = *((ebp + 0xc));
            edx = *((ebp + 8));
            fcn_0041d200 (edx, ecx, eax, 1);
        }
    } else {
        eax = *((ebp + 0x10));
        ecx = *((ebp + 0xc));
        edx = *((ebp + 8));
        fcn_0041d200 (edx, ecx, eax, 0);
    }
    eax = *((ebp + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x415880 */
#include <stdint.h>
 
int32_t fcn_00415880 (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, uint32_t arg_18h) {
    char * var_1144h;
    uint32_t var_1140h;
    char * var_113ch;
    uint32_t var_1138h;
    char * var_1134h;
    uint32_t var_1130h;
    int32_t var_112ch;
    char * var_1128h;
    uint32_t var_1124h;
    char * var_1120h;
    uint32_t var_111ch;
    int32_t var_1118h;
    int32_t var_1014h;
    int32_t var_1010h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    eax = 0x1144;
    fcn_00411131 ();
    eax = *(0x428eb0);
    *((ebp - 0xc)) = eax;
    if (*((ebp + 0x18)) == 0) {
        eax = fcn_0041119f (2, "dbgrpt.c", 0x23a, 0, "szUserMessage != NULL");
        if (eax != 1) {
            goto label_0;
        }
        fcn_00411037 ();
    }
label_0:
    *((ebp - 0x1014)) = 0;
    eax = GetModuleFileNameA (0, ebp - 0x1118, 0x104);
    if (eax == 0) {
        fcn_00411258 (ebp - 0x1118, "<program name unknown>");
    }
    eax = ebp - 0x1118;
    *((ebp - 8)) = eax;
    ecx = *((ebp - 8));
    eax = fcn_00411235 (ecx);
    if (eax > 0x40) {
        edx = *((ebp - 8));
        fcn_00411235 (edx);
        ecx = *((ebp - 8));
        edx = ecx + eax - 0x40;
        *((ebp - 8)) = edx;
        eax = *((ebp - 8));
        fcn_00411492 (eax, 0x425b78, 3);
    }
    ecx = *((ebp + 0x14));
    *((ebp - 4)) = ecx;
    if (*((ebp - 4)) != 0) {
        edx = *((ebp - 4));
        eax = fcn_00411235 (edx);
        if (eax <= 0x40) {
            goto label_1;
        }
        eax = *((ebp - 4));
        fcn_00411235 (eax);
        ecx = *((ebp - 4));
        edx = ecx + eax - 0x40;
        *((ebp - 4)) = edx;
        eax = *((ebp - 4));
        fcn_00411492 (eax, 0x425b78, 3);
    }
label_1:
    if (*((ebp + 8)) == 2) {
        *((ebp - 0x1120)) = "\n\nFor information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts.";
    } else {
        *((ebp - 0x1120)) = 0x4250ec;
    }
    ecx = *((ebp + 0x18));
    edx = *(ecx);
    if (edx != 0) {
        eax = *((ebp + 0x18));
        *((ebp - 0x1124)) = eax;
    } else {
        *((ebp - 0x1124)) = 0x4250ec;
    }
    ecx = *((ebp + 0x18));
    edx = *(ecx);
    if (edx != 0) {
        if (*((ebp + 8)) == 2) {
            *((ebp - 0x1128)) = "Expression: ";
        }
    } else {
        *((ebp - 0x1128)) = 0x4250ec;
    }
    eax = *((ebp + 0x18));
    ecx = *(eax);
    if (ecx != 0) {
        *((ebp - 0x112c)) = 0x425b54;
    } else {
        *((ebp - 0x112c)) = 0x4250ec;
    }
    if (*((ebp + 0x10)) != 0) {
        edx = *((ebp + 0x10));
        *((ebp - 0x1130)) = edx;
    } else {
        *((ebp - 0x1130)) = 0x4250ec;
    }
    if (*((ebp + 0x10)) != 0) {
        *((ebp - 0x1134)) = "\nLine: ";
    } else {
        *((ebp - 0x1134)) = 0x4250ec;
    }
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 0xc));
        *((ebp - 0x1138)) = eax;
    } else {
        *((ebp - 0x1138)) = 0x4250ec;
    }
    if (*((ebp + 0xc)) != 0) {
        *((ebp - 0x113c)) = "\nFile: ";
    } else {
        *((ebp - 0x113c)) = 0x4250ec;
    }
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 4));
        *((ebp - 0x1140)) = ecx;
    } else {
        *((ebp - 0x1140)) = 0x4250ec;
    }
    if (*((ebp - 4)) != 0) {
        *((ebp - 0x1144)) = "\nModule: ";
    } else {
        *((ebp - 0x1144)) = 0x4250ec;
    }
    edx = *((ebp - 0x1120));
    eax = *((ebp - 0x1124));
    ecx = *((ebp - 0x1128));
    edx = *((ebp - 0x112c));
    eax = *((ebp - 0x1130));
    ecx = *((ebp - 0x1134));
    edx = *((ebp - 0x1138));
    eax = *((ebp - 0x113c));
    ecx = *((ebp - 0x1140));
    edx = *((ebp - 0x1144));
    eax = *((ebp - 8));
    ecx = *((ebp + 8));
    edx = *((ecx*4 + 0x428d34));
    eax = fcn_0041100a (ebp - 0x1010, 0x1000, "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)", edx);
    if (eax < 0) {
        fcn_00411258 (ebp - 0x1010, "_CrtDbgReport: String too long or IO Error");
    }
    eax = fcn_0041107d (ebp - 0x1010, "Microsoft Visual C++ Debug Library", 0x12012);
    *((ebp - 0x111c)) = eax;
    if (*((ebp - 0x111c)) == 3) {
        fcn_00411401 (0x16);
        fcn_00411212 (3);
    }
    if (*((ebp - 0x111c)) == 4) {
        eax = 1;
    } else {
        eax = 0;
    }
    ecx = *((ebp - 0xc));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411401 */
#include <stdint.h>
 
void fcn_00411401 (int32_t arg_8h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x41da00)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41da00 */
#include <stdint.h>
 
int32_t loc_0041da00 (uint32_t arg_8h) {
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    ecx = *((ebp - 0x18));
    ecx -= 2;
    *((ebp - 0x18)) = ecx;
    if (*((ebp - 0x18)) <= 0x14) {
        edx = *((ebp - 0x18));
        eax = *((edx + 0x41db9b));
        /* switch table (21 cases) at 0x41db83 */
        *((ebp - 0x10)) = 0x4298dc;
        ecx = *((ebp - 0x10));
        edx = *(ecx);
        *((ebp - 4)) = edx;
        goto label_0;
        *((ebp - 0x10)) = 0x4298e0;
        eax = *((ebp - 0x10));
        ecx = *(eax);
        *((ebp - 4)) = ecx;
        goto label_0;
        *((ebp - 0x10)) = 0x4298e4;
        edx = *((ebp - 0x10));
        eax = *(edx);
        *((ebp - 4)) = eax;
        goto label_0;
        *((ebp - 0x10)) = 0x4298e8;
        ecx = *((ebp - 0x10));
        edx = *(ecx);
        *((ebp - 4)) = edx;
        goto label_0;
        eax = *((ebp + 8));
        eax = fcn_0041dc20 (eax);
        eax += 8;
        *((ebp - 0x10)) = eax;
        ecx = *((ebp - 0x10));
        edx = *(ecx);
        *((ebp - 4)) = edx;
    } else {
        eax |= 0xffffffff;
        goto label_1;
    }
label_0:
    if (*((ebp - 4)) == 1) {
        eax = 0;
        goto label_1;
    }
    if (*((ebp - 4)) == 0) {
        fcn_00411212 (3);
    }
    if (*((ebp + 8)) != 8) {
        if (*((ebp + 8)) == 0xb) {
            goto label_2;
        }
        if (*((ebp + 8)) != 4) {
            goto label_3;
        }
    }
label_2:
    eax = *(0x429690);
    *((ebp - 8)) = eax;
    *(0x429690) = 0;
    if (*((ebp + 8)) == 8) {
        ecx = *(0x428c14);
        *((ebp - 0x14)) = ecx;
        *(0x428c14) = 0x8c;
    }
label_3:
    if (*((ebp + 8)) != 8) {
        goto label_4;
    }
    edx = *(0x428c08);
    *((ebp - 0xc)) = edx;
    while (1) {
        eax = *((ebp - 0xc));
        eax++;
        *((ebp - 0xc)) = eax;
        ecx = *(0x428c08);
        ecx += *(0x428c0c);
        if (*((ebp - 0xc)) >= ecx) {
            goto label_5;
        }
        edx = *((ebp - 0xc));
        edx *= 0xc;
        *((edx + 0x428b98)) = 0;
    }
label_5:
    goto label_6;
label_4:
    eax = *((ebp - 0x10));
    *(eax) = 0;
label_6:
    if (*((ebp + 8)) == 8) {
        ecx = *(0x428c14);
        uint32_t (*ebp - 4)(uint32_t, uint32_t) (8, ecx);
    } else {
        edx = *((ebp + 8));
        uint32_t (*ebp - 4)(uint32_t) (edx);
    }
    if (*((ebp + 8)) != 8) {
        if (*((ebp + 8)) == 0xb) {
            goto label_7;
        }
        if (*((ebp + 8)) != 4) {
            goto label_8;
        }
    }
label_7:
    eax = *((ebp - 8));
    *(0x429690) = eax;
    if (*((ebp + 8)) == 8) {
        ecx = *((ebp - 0x14));
        *(0x428c14) = ecx;
    }
label_8:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41dc20 */
#include <stdint.h>
 
int32_t fcn_0041dc20 (uint32_t arg_8h) {
    uint32_t var_4h;
    *((ebp - 4)) = 0x428b90;
    do {
        eax = *((ebp - 4));
        ecx = *((eax + 4));
        if (ecx == *((ebp + 8))) {
            goto label_0;
        }
        edx = *((ebp - 4));
        edx += 0xc;
        *((ebp - 4)) = edx;
        eax = *(0x428c10);
        eax *= 0xc;
        eax += 0x428b90;
        if (*((ebp - 4)) >= eax) {
            goto label_0;
        }
    } while (1);
label_0:
    ecx = *(0x428c10);
    ecx *= 0xc;
    ecx += 0x428b90;
    if (*((ebp - 4)) < ecx) {
        edx = *((ebp - 4));
        eax = *((edx + 4));
        if (eax == *((ebp + 8))) {
            eax = *((ebp - 4));
        }
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4160c0 */
#include <stdint.h>
 
int32_t fcn_004160c0 (int32_t arg_8h) {
    int32_t var_81ch;
    int32_t var_810h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    ecx = *(0x429824);
    eax = ecx;
    if (ecx == 0) {
        goto label_4;
    }
    do {
        edx = *((eax + 4));
        esi = *((ebp + 8));
        if (edx <= esi) {
            esi -= edx;
            if (esi <= *((eax + 8))) {
                goto label_5;
            }
        }
        eax = *((eax + 0x1c));
    } while (eax != 0);
    do {
        esi = *((ecx + 0x1c));
        eax = GetProcessHeap (0, ecx);
        HeapFree (eax);
        ecx = esi;
        *(0x429824) = ecx;
    } while (esi != 0);
label_4:
    eax = *(0x4297e8);
    if (eax == 0) {
        eax = LoadLibraryA ("KERNEL32.DLL");
        *(0x4297ec) = eax;
        eax = LoadLibraryA ("IMAGEHLP.DLL");
        ecx = *(0x4297ec);
        *(0x4297e8) = eax;
        if (ecx == 0) {
            goto label_2;
        }
        if (eax == 0) {
            goto label_2;
        }
        eax = GetProcAddress (eax, "ImageNtHeader");
        *(0x42980c) = eax;
        if (eax == 0) {
            goto label_2;
        }
        eax = *(0x4297ec);
        eax = void (*esi)(uint32_t, char*) (eax, "CreateToolhelp32Snapshot");
        *(0x429818) = eax;
        if (eax == 0) {
            eax = void (*edi)(char*) ("PSAPI.DLL");
            *(0x4297e4) = eax;
            if (eax == 0) {
                goto label_2;
            }
            eax = void (*esi)(uint32_t, char*) (eax, "EnumProcessModules");
            *(0x429814) = eax;
            if (eax == 0) {
                goto label_2;
            }
            ecx = *(0x4297e4);
            eax = void (*esi)(uint32_t, char*) (ecx, "GetModuleInformation");
            *(0x429810) = eax;
            if (eax != 0) {
                goto label_6;
            }
            esp = ebp - 0x81c;
            return eax;
        }
        edx = *(0x4297ec);
        eax = void (*esi)(uint32_t, char*) (edx, "Module32First");
        *(0x42981c) = eax;
        if (eax == 0) {
            goto label_2;
        }
        eax = *(0x4297ec);
        eax = void (*esi)(uint32_t, char*) (eax, "Module32Next");
        *(0x429820) = eax;
        if (eax == 0) {
            goto label_2;
        }
    }
label_6:
    eax = *(0x429818);
    ebx = *(sym.imp.KERNEL32.dll_HeapAlloc);
    if (eax != 0) {
        goto label_7;
    }
    eax = GetCurrentProcess ();
    edx = ebp - 0x810;
    edi = eax;
    eax = uint32_t (*0x429814)(uint32_t, uint32_t, uint32_t, uint32_t) (edi, edx, 0x800, ebp - 4);
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp - 4));
    eax >>= 2;
    esi = 0;
    *((ebp - 4)) = eax;
    if (eax <= 0) {
        goto label_8;
    }
    do {
        ecx = *((ebp + esi*4 - 0x810));
        eax = uint32_t (*0x429810)(uint32_t, uint32_t, uint32_t, uint32_t) (edi, ecx, ebp - 0x10, 0xc);
        if (eax == 0) {
            goto label_2;
        }
        eax = GetProcessHeap (0, 0x20);
        eax = void (*ebx)(uint32_t) (eax);
        if (eax == 0) {
            goto label_0;
        }
        edx = *((ebp + esi*4 - 0x810));
        *((eax + 0xc)) = edx;
        ecx = *((ebp - 0x10));
        *((eax + 4)) = ecx;
        edx = *((ebp - 0xc));
        ecx = *(0x429824);
        *((eax + 8)) = edx;
        *((eax + 0x18)) = 0;
        *((eax + 0x1c)) = ecx;
        ecx = *((ebp - 4));
        esi++;
        *(0x429824) = eax;
    } while (esi < ecx);
    goto label_9;
label_7:
    eax = void (*eax)(uint32_t, uint32_t) (8, 0);
    edi = eax;
    if (edi == -1) {
        goto label_2;
    }
    eax = 0x224;
    fcn_00414c20 ();
    esi = esp;
    *(esi) = 0x224;
    eax = uint32_t (*0x42981c)(uint32_t, uint32_t) (edi, esi);
    if (eax == 0) {
        goto label_10;
    }
    do {
        eax = GetProcessHeap (0, 0x20);
        eax = void (*ebx)(uint32_t) (eax);
        if (eax == 0) {
            goto label_11;
        }
        edx = *((esi + 0x1c));
        *((eax + 0xc)) = edx;
        ecx = *((esi + 0x14));
        *((eax + 4)) = ecx;
        edx = *((esi + 0x18));
        ecx = *(0x429824);
        *((eax + 8)) = edx;
        *((eax + 0x18)) = 0;
        *((eax + 0x1c)) = ecx;
        *(0x429824) = eax;
        eax = uint32_t (*0x429820)(uint32_t, uint32_t) (edi, esi);
    } while (eax != 0);
label_10:
    CloseHandle (edi);
label_8:
    eax = *(0x429824);
label_9:
    esi = eax;
    if (eax == 0) {
        goto label_12;
    }
    goto label_13;
label_11:
    CloseHandle (edi);
label_0:
    eax = *(0x429824);
label_3:
    if (eax == 0) {
        goto label_2;
    }
    do {
        ecx = *((eax + 0x18));
        esi = *((eax + 0x1c));
        if (ecx != 0) {
            eax = GetProcessHeap (0, ecx);
            HeapFree (eax);
            eax = *(0x429824);
        }
        eax = GetProcessHeap (0, eax);
        HeapFree (eax);
        eax = esi;
        *(0x429824) = eax;
    } while (esi != 0);
label_2:
    eax = 0;
label_5:
    esp = ebp - 0x81c;
    return eax;
label_1:
    ebx = *(sym.imp.KERNEL32.dll_HeapAlloc);
label_13:
    edx = *((esi + 4));
    eax = uint32_t (*0x42980c)(uint32_t) (edx);
    *((esi + 0x10)) = eax;
    ecx = *((eax + 0x14));
    edx = ecx + eax + 0x18;
    eax = 0x204;
    *((esi + 0x14)) = edx;
    fcn_00414c20 ();
    edi = esp;
    *((edi + 0x200)) = 0;
    eax = *((esi + 0xc));
    eax = GetModuleFileNameA (eax, edi, 0x200);
    if (eax == 0) {
        goto label_0;
    }
    cl = *(edi);
    eax = 0;
    if (cl == 0) {
        goto label_14;
    }
    while (cl != 0) {
        cl = *((eax + edi + 1));
        eax++;
    }
label_14:
    eax++;
    eax = GetProcessHeap (0, eax);
    eax = void (*ebx)(uint32_t) (eax);
    *((esi + 0x18)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    eax = 0;
    do {
        edx = *((esi + 0x18));
        bl = *((eax + edi));
        ecx = eax + edi;
        *((eax + edx)) = bl;
        dl = *(ecx);
        eax++;
    } while (dl != 0);
    esi = *((esi + 0x1c));
    if (esi != 0) {
        goto label_1;
    }
    eax = *(0x429824);
label_12:
    ecx = eax;
    if (eax == 0) {
        goto label_2;
    }
    do {
        edx = *((ecx + 4));
        esi = *((ebp + 8));
        if (edx <= esi) {
            esi -= edx;
            if (esi <= *((ecx + 8))) {
                goto label_15;
            }
        }
        ecx = *((ecx + 0x1c));
    } while (ecx != 0);
    goto label_3;
label_15:
    eax = ecx;
    esp = ebp - 0x81c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x416570 */
#include <stdint.h>
 
int32_t fcn_00416570 (void) {
    int32_t var_20h;
    LSTATUS var_14h;
    int32_t var_10h;
    LSTATUS var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x42983c);
    if (eax != 0) {
        goto label_0;
    }
    eax = *(str.MSPDB71.DLL);
    *(0x42983c) = 1;
    eax = LoadLibraryA (eax);
    if (eax != 0) {
        goto label_1;
    }
    eax = void (*esi)(char*) ("ADVAPI32.DLL");
    edi = eax;
    if (edi == 0) {
        goto label_0;
    }
    eax = GetProcAddress (edi, "RegOpenKeyExA");
    *((ebp - 0xc)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    eax = void (*esi)(uint32_t, char*) (edi, "RegQueryValueExA");
    ebx = eax;
    if (ebx == 0) {
        goto label_0;
    }
    eax = void (*esi)(uint32_t, char*) (edi, "RegCloseKey");
    *((ebp - 0x14)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    eax = uint32_t (*ebp - 0xc)(uint32_t, char*, uint32_t, uint32_t, uint32_t) (0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\7.1\\Setup\\VS", 0, 1, ebp - 8);
    if (eax == 0) {
        goto label_2;
    }
    eax = FreeLibrary (edi);
    do {
label_0:
        eax = 0;
        esp = ebp - 0x20;
        return eax;
label_2:
        ecx = *((ebp - 8));
        eax = void (*ebx)(uint32_t, char*, uint32_t, uint32_t, uint32_t, uint32_t) (ecx, "EnvironmentDirectory", 0, ebp - 0x10, 0, ebp - 4);
    } while (eax != 0);
    eax = *((ebp - 4));
    eax += 0xd;
    *((ebp - 4)) = eax;
    eax += 3;
    eax &= 0xfffffffc;
    fcn_00414c20 ();
    ecx = *((ebp - 8));
    esi = esp;
    eax = void (*ebx)(uint32_t, char*, uint32_t, uint32_t, uint32_t, uint32_t) (ecx, "EnvironmentDirectory", 0, ebp - 0x10, esi, ebp - 4);
    edx = *((ebp - 8));
    ebx = eax;
    uint32_t (*ebp - 0x14)(uint32_t) (edx);
    FreeLibrary (edi);
    if (ebx != 0) {
        goto label_0;
    }
    ecx = *((ebp - 4));
    dl = *((esi + ecx - 2));
    al = 0x5c;
    if (dl != al) {
        *((esi + ecx - 1)) = al;
    } else {
        ecx--;
        *((ebp - 4)) = ecx;
    }
    ecx = *(str.MSPDB71.DLL);
    eax = esi;
    ecx -= esi;
    edi = 0xc;
    edi = 0xc;
    do {
        dl = *((ecx + eax));
        ebx = *((ebp - 4));
        *((eax + ebx)) = dl;
        eax++;
        edi--;
    } while (edi != 0);
    LoadLibraryA (esi);
label_1:
    esp = ebp - 0x20;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41128a */
#include <stdint.h>
 
void fcn_0041128a (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x417af0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x417af0 */
#include <stdint.h>
 
int32_t loc_00417af0 (int32_t arg_8h, uint32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    if (*(0x429858) > 0) {
        eax = *(0x429858);
        eax--;
        if (*(0x429848) == eax) {
            eax = fcn_00411096 ();
            if (eax == 0) {
                eax = fcn_0041119f (2, "dbgheap.c", 0x4fb, 0, "_CrtCheckMemory()");
                if (eax != 1) {
                    goto label_0;
                }
                __asm ("int3");
            }
label_0:
            *(0x429848) = 0;
        } else {
            edx = *(0x429848);
            edx++;
            *(0x429848) = edx;
        }
    }
    eax = *((ebp + 8));
    eax = fcn_004111ea (eax);
    if (eax == 0) {
        eax = fcn_0041119f (2, "dbgheap.c", 0x50b, 0, "_CrtIsValidHeapPointer(pUserData)");
        if (eax != 1) {
            goto label_1;
        }
        __asm ("int3");
    }
label_1:
    edx = *((ebp + 8));
    edx -= 0x20;
    *((ebp - 8)) = edx;
    eax = *((ebp - 8));
    ecx = *((eax + 0x14));
    ecx &= 0xffff;
    if (ecx != 4) {
        edx = *((ebp - 8));
        if (*((edx + 0x14)) == 1) {
            goto label_2;
        }
        eax = *((ebp - 8));
        ecx = *((eax + 0x14));
        ecx &= 0xffff;
        if (ecx == 2) {
            goto label_2;
        }
        edx = *((ebp - 8));
        if (*((edx + 0x14)) == 3) {
            goto label_2;
        }
        eax = fcn_0041119f (2, "dbgheap.c", 0x511, 0, "_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)");
        if (eax != 1) {
            goto label_2;
        }
        __asm ("int3");
    }
label_2:
    ecx = *((ebp - 8));
    if (*((ecx + 0x14)) == 2) {
        if (*((ebp + 0xc)) != 1) {
            goto label_3;
        }
        *((ebp + 0xc)) = 2;
    }
label_3:
    edx = *((ebp - 8));
    eax = *((edx + 0x10));
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114ec */
#include <stdint.h>
 
void fcn_004114ec (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h;
    return void (*0x416e80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x416e80 */
#include <stdint.h>
 
int32_t loc_00416e80 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h;
    eax = *((ebp + 0x18));
    ecx = *((ebp + 0x14));
    edx = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    ecx = *((ebp + 8));
    eax = fcn_00416ec0 (ecx, eax, edx, ecx, eax, 1);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x416ec0 */
#include <stdint.h>
 
int32_t fcn_00416ec0 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h, uint32_t arg_18h, uint32_t arg_1ch) {
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    *((ebp - 4)) = 0;
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0x18));
        ecx = *((ebp + 0x14));
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        fcn_00411064 (eax, edx, ecx, eax);
    } else {
        if (*((ebp + 0x1c)) != 0) {
            if (*((ebp + 0xc)) == 0) {
                ecx = *((ebp + 0x10));
                edx = *((ebp + 8));
                eax = fcn_0041141a (edx, ecx);
                eax = 0;
            }
        } else {
            if (*(0x429858) > 0) {
                eax = *(0x429858);
                eax--;
                if (*(0x429848) == eax) {
                    eax = fcn_00411096 ();
                    if (eax == 0) {
                        eax = fcn_0041119f (2, "dbgheap.c", 0x264, 0, "_CrtCheckMemory()");
                        if (eax != 1) {
                            goto label_0;
                        }
                        __asm ("int3");
                    }
label_0:
                    *(0x429848) = 0;
                } else {
                    edx = *(0x429848);
                    edx++;
                    *(0x429848) = edx;
                }
            }
            eax = *(0x428d50);
            *((ebp - 0x14)) = eax;
            if (*(0x428d54) != -1) {
                ecx = *((ebp - 0x14));
                if (ecx != *(0x428d54)) {
                    goto label_1;
                }
                __asm ("int3");
            }
label_1:
            edx = *((ebp + 0x18));
            eax = *((ebp + 0x14));
            ecx = *((ebp - 0x14));
            edx = *((ebp + 0x10));
            eax = *((ebp + 0xc));
            ecx = *((ebp + 8));
            eax = uint32_t (*0x428ec0)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (2, ecx, eax, edx, ecx, eax, edx);
            if (eax == 0) {
                if (*((ebp + 0x14)) != 0) {
                    edx = *((ebp + 0x18));
                    eax = *((ebp + 0x14));
                    eax = fcn_0041119f (0, 0, 0, 0, "Client hook re-allocation failure at file %hs line %d.\n", eax);
                    if (eax == 1) {
                        __asm ("int3");
                    }
                } else {
                    eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "Client hook re-allocation failure.\n");
                    if (eax != 1) {
                        goto label_2;
                    }
                    __asm ("int3");
                }
label_2:
                eax = 0;
            } else {
                if (*((ebp + 0xc)) > 0xffffffdb) {
                    eax = *((ebp + 0xc));
                    eax = fcn_0041119f (1, 0, 0, 0, "Allocation too large or negative: %Iu bytes.\n", eax);
                    if (eax == 1) {
                        __asm ("int3");
                    }
                    eax = 0;
                } else {
                    if (*((ebp + 0x10)) != 1) {
                        edx = *((ebp + 0x10));
                        edx &= 0xffff;
                        if (edx != 4) {
                            eax = *((ebp + 0x10));
                            eax &= 0xffff;
                            if (eax == 2) {
                                goto label_3;
                            }
                            eax = fcn_0041119f (1, 0, 0, 0, 0x426074, "Error: memory allocation: bad memory block type.\n");
                            if (eax == 1) {
                                __asm ("int3");
                            }
                        }
                    } else {
label_3:
                        dl = *(0x428d5b);
                        eax = *((ebp + 8));
                        eax &= 0xfffffffc;
                        eax -= 4;
                        eax = fcn_00417d50 (eax, edx, 4);
                        if (eax == 0) {
                            goto label_4;
                        }
                        ecx = *((ebp + 8));
                        eax = fcn_0041119f (1, 0, 0, 0, "The Block at 0x%p was allocated by aligned routines, use _aligned_realloc()", ecx);
                        if (eax == 1) {
                            __asm ("int3");
                        }
                        eax = 0;
                        goto label_5;
                    }
label_4:
                    eax = *((ebp + 8));
                    eax = fcn_004111ea (eax);
                    if (eax == 0) {
                        eax = fcn_0041119f (2, "dbgheap.c", 0x297, 0, "_CrtIsValidHeapPointer(pUserData)");
                        if (eax != 1) {
                            goto label_6;
                        }
                        __asm ("int3");
                    }
label_6:
                    edx = *((ebp + 8));
                    edx -= 0x20;
                    *((ebp - 8)) = edx;
                    eax = *((ebp - 8));
                    if (*((eax + 0x14)) == 3) {
                        *((ebp - 4)) = 1;
                    }
                    if (*((ebp - 4)) != 0) {
                        ecx = *((ebp - 8));
                        if (*((ecx + 0xc)) == 0xfedcbabc) {
                            edx = *((ebp - 8));
                            if (*((edx + 0x18)) == 0) {
                                goto label_7;
                            }
                        }
                        eax = fcn_0041119f (2, "dbgheap.c", 0x2a1, 0, "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ");
                        if (eax == 1) {
                            __asm ("int3");
                        }
label_7:
                    } else {
                        ecx = *((ebp - 8));
                        edx = *((ecx + 0x14));
                        edx &= 0xffff;
                        if (edx != 2) {
                            goto label_8;
                        }
                        eax = *((ebp + 0x10));
                        eax &= 0xffff;
                        if (eax != 1) {
                            goto label_8;
                        }
                        *((ebp + 0x10)) = 2;
                    }
label_8:
                    if (*((ebp + 0x1c)) != 0) {
                        ecx = *((ebp + 0xc));
                        ecx += 0x24;
                        edx = *((ebp - 8));
                        eax = fcn_00411203 (edx, ecx);
                        *((ebp - 0xc)) = eax;
                        if (*((ebp - 0xc)) == 0) {
                            eax = 0;
                            goto label_5;
                        }
                    } else {
                        eax = *((ebp + 0xc));
                        eax += 0x24;
                        ecx = *((ebp - 8));
                        eax = fcn_004110be (ecx, eax);
                        *((ebp - 0xc)) = eax;
                        if (*((ebp - 0xc)) != 0) {
                            goto label_9;
                        }
                        eax = 0;
                        goto label_5;
                    }
label_9:
                    edx = *(0x428d50);
                    edx++;
                    *(0x428d50) = edx;
                    if (*((ebp - 4)) == 0) {
                        eax = *((ebp - 0xc));
                        ecx = *(0x429840);
                        ecx -= *((eax + 0x10));
                        *(0x429840) = ecx;
                        edx = *(0x429840);
                        edx += *((ebp + 0xc));
                        *(0x429840) = edx;
                        eax = *((ebp - 0xc));
                        ecx = *(0x429854);
                        ecx -= *((eax + 0x10));
                        *(0x429854) = ecx;
                        edx = *(0x429854);
                        edx += *((ebp + 0xc));
                        *(0x429854) = edx;
                        eax = *(0x429854);
                        if (eax <= *(0x42984c)) {
                            goto label_10;
                        }
                        ecx = *(0x429854);
                        *(0x42984c) = ecx;
                    }
label_10:
                    edx = *((ebp - 0xc));
                    edx += 0x20;
                    *((ebp - 0x10)) = edx;
                    eax = *((ebp - 0xc));
                    ecx = *((ebp + 0xc));
                    if (ecx > *((eax + 0x10))) {
                        edx = *((ebp - 0xc));
                        eax = *((ebp + 0xc));
                        eax -= *((edx + 0x10));
                        ecx = *(0x428d5a);
                        edx = *((ebp - 0xc));
                        eax = *((ebp - 0x10));
                        eax += *((edx + 0x10));
                        fcn_00411195 (eax, ecx, eax);
                    }
                    ecx = *(0x428d58);
                    edx = *((ebp - 0x10));
                    edx += *((ebp + 0xc));
                    fcn_00411195 (edx, ecx, 4);
                    if (*((ebp - 4)) == 0) {
                        eax = *((ebp - 0xc));
                        ecx = *((ebp + 0x14));
                        *((eax + 8)) = ecx;
                        edx = *((ebp - 0xc));
                        eax = *((ebp + 0x18));
                        *((edx + 0xc)) = eax;
                        ecx = *((ebp - 0xc));
                        edx = *((ebp - 0x14));
                        *((ecx + 0x18)) = edx;
                    }
                    eax = *((ebp - 0xc));
                    ecx = *((ebp + 0xc));
                    *((eax + 0x10)) = ecx;
                    if (*((ebp + 0x1c)) == 0) {
                        if (*((ebp + 0x1c)) == 0) {
                            edx = *((ebp - 0xc));
                            if (edx == *((ebp - 8))) {
                                goto label_11;
                            }
                        }
                        eax = fcn_0041119f (2, "dbgheap.c", 0x2eb, 0, "fRealloc || (!fRealloc && pNewBlock == pOldBlock)");
                        if (eax != 1) {
                            goto label_11;
                        }
                        __asm ("int3");
                    }
label_11:
                    ecx = *((ebp - 0xc));
                    if (ecx != *((ebp - 8))) {
                        if (*((ebp - 4)) == 0) {
                            goto label_12;
                        }
                    }
                    eax = *((ebp - 0x10));
                    goto label_5;
label_12:
                    edx = *((ebp - 0xc));
                    if (*(edx) != 0) {
                        eax = *((ebp - 0xc));
                        ecx = *(eax);
                        edx = *((ebp - 0xc));
                        eax = *((edx + 4));
                        *((ecx + 4)) = eax;
                    } else {
                        ecx = *(0x429844);
                        if (ecx != *((ebp - 8))) {
                            eax = fcn_0041119f (2, "dbgheap.c", 0x2fc, 0, "_pLastBlock == pOldBlock");
                            if (eax != 1) {
                                goto label_13;
                            }
                            __asm ("int3");
                        }
label_13:
                        eax = *((ebp - 0xc));
                        ecx = *((eax + 4));
                        *(0x429844) = ecx;
                    }
                    edx = *((ebp - 0xc));
                    if (*((edx + 4)) != 0) {
                        eax = *((ebp - 0xc));
                        ecx = *((eax + 4));
                        edx = *((ebp - 0xc));
                        eax = *(edx);
                        *(ecx) = eax;
                    } else {
                        ecx = *(0x429850);
                        if (ecx != *((ebp - 8))) {
                            eax = fcn_0041119f (2, "dbgheap.c", 0x307, 0, "_pFirstBlock == pOldBlock");
                            if (eax != 1) {
                                goto label_14;
                            }
                            __asm ("int3");
                        }
label_14:
                        eax = *((ebp - 0xc));
                        ecx = *(eax);
                        *(0x429850) = ecx;
                    }
                    if (*(0x429850) != 0) {
                        edx = *(0x429850);
                        eax = *((ebp - 0xc));
                        *((edx + 4)) = eax;
                    } else {
                        ecx = *((ebp - 0xc));
                        *(0x429844) = ecx;
                    }
                    edx = *((ebp - 0xc));
                    eax = *(0x429850);
                    *(edx) = eax;
                    ecx = *((ebp - 0xc));
                    *((ecx + 4)) = 0;
                    edx = *((ebp - 0xc));
                    *(0x429850) = edx;
                    eax = *((ebp - 0x10));
                }
            }
        }
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411384 */
#include <stdint.h>
 
void fcn_00411384 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x4169c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4169c0 */
#include <stdint.h>
 
int32_t loc_004169c0 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h) {
    int32_t var_10h;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    *((ebp - 4)) = 0;
    if (*(0x429858) > 0) {
        eax = *(0x429858);
        eax--;
        if (*(0x429848) == eax) {
            eax = fcn_00411096 ();
            if (eax == 0) {
                eax = fcn_0041119f (2, "dbgheap.c", 0x15a, 0, "_CrtCheckMemory()");
                if (eax != 1) {
                    goto label_0;
                }
                __asm ("int3");
            }
label_0:
            *(0x429848) = 0;
        } else {
            edx = *(0x429848);
            edx++;
            *(0x429848) = edx;
        }
    }
    eax = *(0x428d50);
    *((ebp - 0xc)) = eax;
    if (*(0x428d54) != -1) {
        ecx = *((ebp - 0xc));
        if (ecx != *(0x428d54)) {
            goto label_1;
        }
        __asm ("int3");
    }
label_1:
    edx = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    ecx = *((ebp - 0xc));
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = uint32_t (*0x428ec0)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (1, 0, eax, edx, ecx, eax, edx);
    if (eax == 0) {
        if (*((ebp + 0x10)) != 0) {
            ecx = *((ebp + 0x14));
            edx = *((ebp + 0x10));
            eax = fcn_0041119f (0, 0, 0, 0, "Client hook allocation failure at file %hs line %d.\n", edx);
            if (eax == 1) {
                __asm ("int3");
            }
        } else {
            eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "Client hook allocation failure.\n");
            if (eax != 1) {
                goto label_2;
            }
            __asm ("int3");
        }
label_2:
        eax = 0;
    } else {
        edx = *((ebp + 0xc));
        edx &= 0xffff;
        if (edx != 2) {
            eax = *(0x428d4c);
            eax &= 1;
            if (eax != 0) {
                goto label_3;
            }
            *((ebp - 4)) = 1;
        }
label_3:
        if (*((ebp + 8)) <= 0xffffffe0) {
            ecx = *((ebp + 8));
            ecx += 0x24;
            if (ecx <= 0xffffffe0) {
                goto label_4;
            }
        }
        edx = *((ebp + 8));
        eax = fcn_0041119f (1, 0, 0, 0, "Invalid allocation size: %Iu bytes.\n", edx);
        if (eax == 1) {
            __asm ("int3");
        }
        eax = 0;
        goto label_5;
label_4:
        ecx = *((ebp + 0xc));
        ecx &= 0xffff;
        if (ecx != 4) {
            if (*((ebp + 0xc)) == 1) {
                goto label_6;
            }
            edx = *((ebp + 0xc));
            edx &= 0xffff;
            if (edx == 2) {
                goto label_6;
            }
            if (*((ebp + 0xc)) == 3) {
                goto label_6;
            }
            eax = fcn_0041119f (1, 0, 0, 0, 0x426074, "Error: memory allocation: bad memory block type.\n");
            if (eax != 1) {
                goto label_6;
            }
            __asm ("int3");
        }
label_6:
        ecx = *((ebp + 8));
        ecx += 0x24;
        *((ebp - 0x10)) = ecx;
        edx = *((ebp - 0x10));
        eax = fcn_0041106e (edx);
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) == 0) {
            eax = 0;
        } else {
            eax = *(0x428d50);
            eax++;
            *(0x428d50) = eax;
            if (*((ebp - 4)) != 0) {
                ecx = *((ebp - 8));
                *(ecx) = 0;
                edx = *((ebp - 8));
                *((edx + 4)) = 0;
                eax = *((ebp - 8));
                *((eax + 8)) = 0;
                ecx = *((ebp - 8));
                *((ecx + 0xc)) = 0xfedcbabc;
                edx = *((ebp - 8));
                eax = *((ebp + 8));
                *((edx + 0x10)) = eax;
                ecx = *((ebp - 8));
                *((ecx + 0x14)) = 3;
                edx = *((ebp - 8));
                *((edx + 0x18)) = 0;
            } else {
                eax = *(0x429840);
                eax += *((ebp + 8));
                *(0x429840) = eax;
                ecx = *(0x429854);
                ecx += *((ebp + 8));
                *(0x429854) = ecx;
                edx = *(0x429854);
                if (edx > *(0x42984c)) {
                    eax = *(0x429854);
                    *(0x42984c) = eax;
                }
                if (*(0x429850) != 0) {
                    ecx = *(0x429850);
                    edx = *((ebp - 8));
                    *((ecx + 4)) = edx;
                } else {
                    eax = *((ebp - 8));
                    *(0x429844) = eax;
                }
                ecx = *((ebp - 8));
                edx = *(0x429850);
                *(ecx) = edx;
                eax = *((ebp - 8));
                *((eax + 4)) = 0;
                ecx = *((ebp - 8));
                edx = *((ebp + 0x10));
                *((ecx + 8)) = edx;
                eax = *((ebp - 8));
                ecx = *((ebp + 0x14));
                *((eax + 0xc)) = ecx;
                edx = *((ebp - 8));
                eax = *((ebp + 8));
                *((edx + 0x10)) = eax;
                ecx = *((ebp - 8));
                edx = *((ebp + 0xc));
                *((ecx + 0x14)) = edx;
                eax = *((ebp - 8));
                ecx = *((ebp - 0xc));
                *((eax + 0x18)) = ecx;
                edx = *((ebp - 8));
                *(0x429850) = edx;
            }
            eax = *(0x428d58);
            ecx = *((ebp - 8));
            ecx += 0x1c;
            fcn_00411195 (ecx, eax, 4);
            edx = *(0x428d58);
            eax = *((ebp + 8));
            ecx = *((ebp - 8));
            fcn_00411195 (ecx + eax + 0x20, edx, 4);
            eax = *((ebp + 8));
            ecx = *(0x428d5a);
            edx = *((ebp - 8));
            edx += 0x20;
            fcn_00411195 (edx, ecx, eax);
            eax = *((ebp - 8));
            eax += 0x20;
        }
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41106e */
#include <stdint.h>
 
int32_t fcn_0041106e (uint32_t arg_8h) {
    uint32_t var_4h;
    if (*(0x42af90) == 3) {
        eax = *((ebp + 8));
        if (eax <= *(0x42aca4)) {
            ecx = *((ebp + 8));
            eax = fcn_00411528 (ecx);
            *((ebp - 4)) = eax;
            if (*((ebp - 4)) == 0) {
                goto label_0;
            }
            eax = *((ebp - 4));
        }
    } else {
label_0:
        if (*((ebp + 8)) == 0) {
            *((ebp + 8)) = 1;
        }
        if (*(0x42af90) != 1) {
            edx = *((ebp + 8));
            edx += 0xf;
            edx &= 0xfffffff0;
            *((ebp + 8)) = edx;
        }
        eax = *((ebp + 8));
        ecx = *(0x42af80);
        HeapAlloc (ecx, 0, eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113d9 */
#include <stdint.h>
 
int32_t fcn_004113d9 (uint32_t arg_8h) {
    uint32_t var_4h;
    eax = *(0x4298f8);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp + 8));
        eax = uint32_t (*ebp - 4)(uint32_t) (ecx);
        if (eax != 0) {
            goto label_0;
        }
    }
    eax = 0;
    goto label_1;
label_0:
    eax = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411564 */
#include <stdint.h>
 
int32_t fcn_00411564 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 0xc));
    eax *= *((ebp + 8));
    *((ebp + 0xc)) = eax;
    ecx = *((ebp + 0x18));
    edx = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    ecx = *((ebp + 0xc));
    eax = fcn_00411064 (ecx, eax, edx, ecx);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        goto label_0;
    }
    edx = *((ebp - 4));
    *((ebp - 8)) = edx;
    eax = *((ebp - 8));
    eax += *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    do {
        ecx = *((ebp - 8));
        if (ecx >= *((ebp - 0xc))) {
            goto label_0;
        }
        edx = *((ebp - 8));
        *(edx) = 0;
        eax = *((ebp - 8));
        eax++;
        *((ebp - 8)) = eax;
    } while (1);
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411203 */
#include <stdint.h>
 
int32_t fcn_00411203 (uint32_t arg_8h, uint32_t arg_ch) {
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    LPVOID var_4h;
    eax = *((ebp + 0xc));
    *((ebp - 8)) = eax;
    if (*((ebp + 8)) == 0) {
        ecx = *((ebp + 0xc));
        fcn_00411127 (ecx);
        goto label_0;
    }
    if (*((ebp + 0xc)) == 0) {
        edx = *((ebp + 8));
        eax = fcn_004113e8 (edx);
        eax = 0;
        goto label_0;
    }
    if (*(0x42af90) != 3) {
        goto label_1;
    }
    do {
        *((ebp - 4)) = 0;
        if (*((ebp + 0xc)) <= 0xffffffe0) {
            eax = *((ebp + 8));
            eax = fcn_004111c7 (eax);
            *((ebp - 0x10)) = eax;
            if (*((ebp - 0x10)) != 0) {
                ecx = *((ebp + 0xc));
                if (ecx <= *(0x42aca4)) {
                    edx = *((ebp + 0xc));
                    eax = *((ebp + 8));
                    ecx = *((ebp - 0x10));
                    eax = fcn_004111e5 (ecx, eax, edx);
                    if (eax != 0) {
                        edx = *((ebp + 8));
                        *((ebp - 4)) = edx;
                    } else {
                        eax = *((ebp + 0xc));
                        eax = fcn_00411528 (eax);
                        *((ebp - 4)) = eax;
                        if (*((ebp - 4)) == 0) {
                            goto label_2;
                        }
                        ecx = *((ebp + 8));
                        edx = *((ecx - 4));
                        edx--;
                        *((ebp - 0xc)) = edx;
                        eax = *((ebp - 0xc));
                        if (eax < *((ebp + 0xc))) {
                            ecx = *((ebp - 0xc));
                            *((ebp - 0x14)) = ecx;
                        } else {
                            edx = *((ebp + 0xc));
                            *((ebp - 0x14)) = edx;
                        }
                        eax = *((ebp - 0x14));
                        ecx = *((ebp + 8));
                        edx = *((ebp - 4));
                        fcn_00411352 (edx, ecx, eax);
                        eax = *((ebp + 8));
                        eax = fcn_004111c7 (eax);
                        *((ebp - 0x10)) = eax;
                        ecx = *((ebp + 8));
                        edx = *((ebp - 0x10));
                        fcn_0041149c (edx, ecx);
                    }
                }
label_2:
                if (*((ebp - 4)) != 0) {
                    goto label_3;
                }
                if (*((ebp + 0xc)) == 0) {
                    *((ebp + 0xc)) = 1;
                }
                eax = *((ebp + 0xc));
                eax += 0xf;
                eax &= 0xfffffff0;
                *((ebp + 0xc)) = eax;
                ecx = *((ebp + 0xc));
                edx = *(0x42af80);
                eax = HeapAlloc (edx, 0, ecx);
                *((ebp - 4)) = eax;
                if (*((ebp - 4)) == 0) {
                    goto label_3;
                }
                eax = *((ebp + 8));
                ecx = *((eax - 4));
                ecx--;
                *((ebp - 0xc)) = ecx;
                edx = *((ebp - 0xc));
                if (edx < *((ebp + 0xc))) {
                    eax = *((ebp - 0xc));
                    *((ebp - 0x18)) = eax;
                } else {
                    ecx = *((ebp + 0xc));
                    *((ebp - 0x18)) = ecx;
                }
                edx = *((ebp - 0x18));
                eax = *((ebp + 8));
                ecx = *((ebp - 4));
                fcn_00411352 (ecx, eax, edx);
                edx = *((ebp + 8));
                eax = *((ebp - 0x10));
                fcn_0041149c (eax, edx);
            }
label_3:
            if (*((ebp - 0x10)) != 0) {
                goto label_4;
            }
            if (*((ebp + 0xc)) == 0) {
                *((ebp + 0xc)) = 1;
            }
            ecx = *((ebp + 0xc));
            ecx += 0xf;
            ecx &= 0xfffffff0;
            *((ebp + 0xc)) = ecx;
            edx = *((ebp + 0xc));
            eax = *((ebp + 8));
            ecx = *(0x42af80);
            eax = HeapReAlloc (ecx, 0, eax, edx);
            *((ebp - 4)) = eax;
        }
label_4:
        if (*((ebp - 4)) == 0) {
            if (*(0x4298f4) != 0) {
                goto label_5;
            }
        }
        eax = *((ebp - 4));
        goto label_0;
label_5:
        edx = *((ebp + 0xc));
        eax = fcn_004113d9 (edx);
        if (eax == 0) {
            eax = 0;
            goto label_0;
        }
    } while (1);
    do {
label_1:
        *((ebp - 4)) = 0;
        if (*((ebp + 0xc)) <= 0xffffffe0) {
            if (*((ebp + 0xc)) == 0) {
                *((ebp + 0xc)) = 1;
            }
            eax = *((ebp + 0xc));
            ecx = *((ebp + 8));
            edx = *(0x42af80);
            eax = HeapReAlloc (edx, 0, ecx, eax);
            *((ebp - 4)) = eax;
        }
        if (*((ebp - 4)) == 0) {
            if (*(0x4298f4) != 0) {
                goto label_6;
            }
        }
        eax = *((ebp - 4));
        goto label_0;
label_6:
        eax = *((ebp + 0xc));
        eax = fcn_004113d9 (eax);
        if (eax == 0) {
            eax = 0;
        } else {
        }
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4110be */
#include <stdint.h>
 
int32_t fcn_004110be (LPVOID * lpMem, SIZE_T * dwBytes) {
    uint32_t var_8h;
    LPVOID var_4h;
    if (*((ebp + 0xc)) > 0xffffffe0) {
        eax = 0;
    } else {
        if (*(0x42af90) == 3) {
            eax = *((ebp + 8));
            eax = fcn_004111c7 (eax);
            *((ebp - 8)) = eax;
            if (*((ebp - 8)) != 0) {
                *((ebp - 4)) = 0;
                ecx = *((ebp + 0xc));
                if (ecx > *(0x42aca4)) {
                    goto label_0;
                }
                edx = *((ebp + 0xc));
                eax = *((ebp + 8));
                ecx = *((ebp - 8));
                eax = fcn_004111e5 (ecx, eax, edx);
                if (eax == 0) {
                    goto label_0;
                }
                edx = *((ebp + 8));
                *((ebp - 4)) = edx;
            }
label_0:
            if (*((ebp - 8)) == 0) {
                if (*((ebp + 0xc)) == 0) {
                    *((ebp + 0xc)) = 1;
                }
                eax = *((ebp + 0xc));
                eax += 0xf;
                eax &= 0xfffffff0;
                *((ebp + 0xc)) = eax;
                ecx = *((ebp + 0xc));
                edx = *((ebp + 8));
                eax = *(0x42af80);
                eax = HeapReAlloc (eax, 0x10, edx, ecx);
                *((ebp - 4)) = eax;
            }
        } else {
            if (*((ebp + 0xc)) == 0) {
                *((ebp + 0xc)) = 1;
            }
            ecx = *((ebp + 0xc));
            edx = *((ebp + 8));
            eax = *(0x42af80);
            eax = HeapReAlloc (eax, 0x10, edx, ecx);
            *((ebp - 4)) = eax;
        }
        eax = *((ebp - 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114fb */
#include <stdint.h>
 
void fcn_004114fb (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h;
    return void (*0x417550)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x417550 */
#include <stdint.h>
 
int32_t loc_00417550 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_4h;
    eax = *((ebp + 0x18));
    ecx = *((ebp + 0x14));
    edx = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    ecx = *((ebp + 8));
    eax = fcn_00416ec0 (ecx, eax, edx, ecx, eax, 0);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111fe */
#include <stdint.h>
 
uint32_t fcn_004111fe (void) {
    int32_t var_4h;
    *((ebp - 4)) = 0xfffffffe;
    if (*(0x42af90) == 3) {
        eax = fcn_004111d6 ();
        if (eax >= 0) {
            goto label_0;
        }
        *((ebp - 4)) = 0xfffffffc;
    }
label_0:
    eax = *(0x42af80);
    eax = HeapValidate (eax, 0, 0);
    if (eax == 0) {
        eax = GetLastError ();
        if (eax == 0x78) {
            *(0x429630) = 0x78;
            *(0x42962c) = 0x28;
        } else {
            *((ebp - 4)) = 0xfffffffc;
        }
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4112f8 */
#include <stdint.h>
 
int32_t fcn_004112f8 (VOID * lp, UINT_PTR ucb, uint32_t arg_10h) {
    int32_t var_4h;
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 0xc));
        ecx = *((ebp + 8));
        eax = IsBadReadPtr (ecx, eax);
        if (eax == 0) {
            if (*((ebp + 0x10)) != 0) {
                edx = *((ebp + 0xc));
                eax = *((ebp + 8));
                eax = IsBadWritePtr (eax, edx);
                if (eax != 0) {
                    goto label_0;
                }
            }
            *((ebp - 4)) = 1;
        }
    } else {
label_0:
        *((ebp - 4)) = 0;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111c7 */
#include <stdint.h>
 
int32_t fcn_004111c7 (uint32_t arg_8h) {
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    eax = *(0x42ac9c);
    eax *= 0x14;
    eax += *(0x42aca0);
    *((ebp - 4)) = eax;
    ecx = *(0x42aca0);
    *((ebp - 8)) = ecx;
    do {
        edx = *((ebp - 8));
        if (edx >= *((ebp - 4))) {
            goto label_0;
        }
        eax = *((ebp - 8));
        ecx = *((ebp + 8));
        ecx -= *((eax + 0xc));
        *((ebp - 0xc)) = ecx;
        if (*((ebp - 0xc)) < 0x100000) {
            eax = *((ebp - 8));
            goto label_1;
        }
        edx = *((ebp - 8));
        edx += 0x14;
        *((ebp - 8)) = edx;
    } while (1);
label_0:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411221 */
#include <stdint.h>
 
int32_t fcn_00411221 (uint32_t arg_8h, uint32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    ecx -= *((eax + 0xc));
    *((ebp - 8)) = ecx;
    edx = *((ebp - 8));
    edx >>= 0xf;
    *((ebp - 4)) = edx;
    eax = 0x80000000;
    ecx = *((ebp - 4));
    eax >>= cl;
    ecx = *((ebp + 8));
    eax &= *((ecx + 8));
    if (eax == 0) {
        edx = *((ebp - 8));
        edx &= 0xf;
        if (edx == 0) {
            eax = *((ebp - 8));
            eax &= 0xfff;
            if (eax == 0) {
                goto label_0;
            }
            *((ebp - 0xc)) = 1;
        }
    } else {
label_0:
        *((ebp - 0xc)) = 0;
    }
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x418b40 */
#include <stdint.h>
 
int32_t fcn_00418b40 (uint32_t arg_8h) {
    int32_t var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    int32_t var_51h;
    int32_t var_50h;
    int32_t var_3ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 8)) = eax;
    *((ebp - 4)) = 0;
    while (1) {
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
        ecx = *((ebp + 8));
        if (*((ecx + 0x10)) < 0x10) {
            edx = *((ebp + 8));
            eax = *((edx + 0x10));
            *((ebp - 0x58)) = eax;
        } else {
            *((ebp - 0x58)) = 0x10;
        }
        ecx = *((ebp - 4));
        if (ecx >= *((ebp - 0x58))) {
            goto label_0;
        }
        edx = *((ebp + 8));
        edx += *((ebp - 4));
        al = *((edx + 0x20));
        *((ebp - 0x51)) = al;
        if (*(0x428ec4) > 1) {
            ecx = *((ebp - 0x51));
            eax = fcn_0041124e (ecx, 0x157);
            *((ebp - 0x5c)) = eax;
        } else {
            edx = *((ebp - 0x51));
            eax = fcn_004110c8 (edx, 0x157);
            *((ebp - 0x5c)) = eax;
        }
        if (*((ebp - 0x5c)) != 0) {
            eax = *((ebp - 0x51));
            *((ebp - 0x60)) = eax;
        } else {
            *((ebp - 0x60)) = 0x20;
        }
        ecx = *((ebp - 4));
        dl = *((ebp - 0x60));
        *((ebp + ecx - 0x50)) = dl;
        eax = *((ebp - 0x51));
        ecx = *((ebp - 4));
        ecx *= 3;
        fcn_00411456 (ebp + ecx - 0x3c, "%.2X ", eax);
    }
label_0:
    eax = *((ebp - 4));
    *((ebp + eax - 0x50)) = 0;
    ecx = ebp - 0x3c;
    eax = fcn_0041119f (0, 0, 0, 0, " Data: <%s> %s\n", ebp - 0x50);
    if (eax == 1) {
        __asm ("int3");
    }
    ecx = *((ebp - 8));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41124e */
#include <stdint.h>
 
int32_t fcn_0041124e (uint32_t arg_8h, int32_t arg_ch) {
    uint32_t var_ch;
    uint32_t var_bh;
    int32_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    eax++;
    if (eax <= 0x100) {
        ecx = *((ebp + 8));
        edx = *(str.________________________________H);
        eax = *((edx + ecx*2));
        eax &= *((ebp + 0xc));
    } else {
        eax = *((ebp + 8));
        eax >>= 8;
        eax &= 0xff;
        ecx = (int32_t) al;
        edx = *(str.________________________________H);
        eax = *((edx + ecx*2));
        eax &= 0x8000;
        if (eax != 0) {
            ecx = *((ebp + 8));
            ecx >>= 8;
            ecx &= 0xff;
            *((ebp - 0xc)) = cl;
            dl = *((ebp + 8));
            *((ebp - 0xb)) = dl;
            *((ebp - 0xa)) = 0;
            *((ebp - 8)) = 2;
        } else {
            al = *((ebp + 8));
            *((ebp - 0xc)) = al;
            *((ebp - 0xb)) = 0;
            *((ebp - 8)) = 1;
        }
        ecx = *(0x429904);
        edx = *(0x429914);
        eax = ebp - 4;
        ecx = *((ebp - 8));
        edx = ebp - 0xc;
        eax = fcn_004113c0 ();
        if (eax == 0) {
            eax = 0;
        } else {
            eax = *((ebp - 4));
            eax &= *((ebp + 0xc));
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4110c8 */
#include <stdint.h>
 
void fcn_004110c8 (uint32_t arg_8h, int32_t arg_ch) {
    return void (*0x41e5c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41e5c0 */
#include <stdint.h>
 
int32_t loc_0041e5c0 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    eax++;
    if (eax > 0x100) {
        eax = fcn_0041119f (2, "isctype.c", 0x38, 0, "(unsigned)(c + 1) <= 256");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    edx = *((ebp + 8));
    eax = *(str.________________________________H);
    eax = *((eax + edx*2));
    eax &= *((ebp + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411456 */
#include <stdint.h>
 
void fcn_00411456 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x41e3f0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41e3f0 */
#include <stdint.h>
 
uint32_t loc_0041e3f0 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = ebp - 0x2c;
    *((ebp - 0xc)) = eax;
    ecx = ebp + 0x10;
    *((ebp - 4)) = ecx;
    if (*((ebp + 0xc)) == 0) {
        eax = fcn_0041119f (2, "sprintf.c", 0x5d, 0, "format != NULL");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    if (*((ebp + 8)) == 0) {
        eax = fcn_0041119f (2, "sprintf.c", 0x5e, 0, "string != NULL");
        if (eax != 1) {
            goto label_1;
        }
        __asm ("int3");
    }
label_1:
    ecx = *((ebp - 0xc));
    *((ecx + 4)) = 0x7fffffff;
    edx = *((ebp - 0xc));
    *((edx + 0xc)) = 0x42;
    eax = *((ebp - 0xc));
    ecx = *((ebp + 8));
    *((eax + 8)) = ecx;
    edx = *((ebp - 0xc));
    eax = *((ebp + 8));
    *(edx) = eax;
    ecx = *((ebp - 4));
    edx = *((ebp + 0xc));
    eax = *((ebp - 0xc));
    eax = fcn_0041134d (eax, edx, ecx);
    *((ebp - 8)) = eax;
    if (*((ebp + 8)) != 0) {
        ecx = *((ebp - 0xc));
        edx = *((ecx + 4));
        edx--;
        eax = *((ebp - 0xc));
        *((eax + 4)) = edx;
        ecx = *((ebp - 0xc));
        if (*((ecx + 4)) >= 0) {
            edx = *((ebp - 0xc));
            eax = *(edx);
            *(eax) = 0;
            ecx = 0;
            ecx &= 0xff;
            *((ebp - 0x30)) = ecx;
            edx = *((ebp - 0xc));
            eax = *(edx);
            eax++;
            ecx = *((ebp - 0xc));
            *(ecx) = eax;
        } else {
            edx = *((ebp - 0xc));
            eax = fcn_004114ab (0, edx);
            *((ebp - 0x30)) = eax;
        }
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411294 */
#include <stdint.h>
 
void fcn_00411294 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x418530)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x418530 */
#include <stdint.h>
 
uint32_t loc_00418530 (int32_t arg_8h) {
    uint32_t var_8h;
    int32_t var_4h;
    if (*((ebp + 8)) == 0) {
        eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "_CrtMemCheckPoint: NULL state pointer.\n");
        if (eax == 1) {
            __asm ("int3");
        }
        goto label_0;
    }
    ecx = *((ebp + 8));
    edx = *(0x429850);
    *(ecx) = edx;
    *((ebp - 4)) = 0;
    while (1) {
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) >= 5) {
            goto label_1;
        }
        ecx = *((ebp - 4));
        edx = *((ebp + 8));
        *((edx + ecx*4 + 0x18)) = 0;
        eax = *((ebp - 4));
        ecx = *((ebp + 8));
        *((ecx + eax*4 + 4)) = 0;
    }
label_1:
    edx = *(0x429850);
    *((ebp - 8)) = edx;
    while (1) {
        eax = *((ebp - 8));
        ecx = *(eax);
        *((ebp - 8)) = ecx;
        if (*((ebp - 8)) == 0) {
            goto label_2;
        }
        edx = *((ebp - 8));
        eax = *((edx + 0x14));
        eax &= 0xffff;
        if (eax >= 0) {
            ecx = *((ebp - 8));
            edx = *((ecx + 0x14));
            edx &= 0xffff;
            if (edx < 5) {
                eax = *((ebp - 8));
                ecx = *((eax + 0x14));
                ecx &= 0xffff;
                edx = *((ebp + 8));
                eax = *((edx + ecx*4 + 4));
                eax++;
                ecx = *((ebp - 8));
                edx = *((ecx + 0x14));
                edx &= 0xffff;
                ecx = *((ebp + 8));
                *((ecx + edx*4 + 4)) = eax;
                edx = *((ebp - 8));
                eax = *((edx + 0x14));
                eax &= 0xffff;
                ecx = *((ebp + 8));
                edx = *((ecx + eax*4 + 0x18));
                eax = *((ebp - 8));
                edx += *((eax + 0x10));
                ecx = *((ebp - 8));
                eax = *((ecx + 0x14));
                eax &= 0xffff;
                ecx = *((ebp + 8));
                *((ecx + eax*4 + 0x18)) = edx;
            }
        } else {
            edx = *((ebp - 8));
            eax = fcn_0041119f (0, 0, 0, 0, "Bad memory block found at 0x%p.\n", edx);
            if (eax != 1) {
                goto label_3;
            }
            __asm ("int3");
        }
label_3:
    }
label_2:
    ecx = *((ebp + 8));
    edx = *(0x42984c);
    *((ecx + 0x2c)) = edx;
    eax = *((ebp + 8));
    ecx = *(0x429840);
    *((eax + 0x30)) = ecx;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4114b0 */
#include <stdint.h>
 
void fcn_004114b0 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x418830)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x418830 */
#include <stdint.h>
 
uint32_t loc_00418830 (uint32_t arg_8h) {
    uint32_t var_8h;
    uint32_t var_4h;
    *((ebp - 8)) = 0;
    eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "Dumping objects ->\n");
    if (eax == 1) {
        __asm ("int3");
    }
    if (*((ebp + 8)) != 0) {
        ecx = *((ebp + 8));
        edx = *(ecx);
        *((ebp - 8)) = edx;
    }
    eax = *(0x429850);
    *((ebp - 4)) = eax;
    while (1) {
        ecx = *((ebp - 4));
        edx = *(ecx);
        *((ebp - 4)) = edx;
        if (*((ebp - 4)) == 0) {
            goto label_0;
        }
        eax = *((ebp - 4));
        if (eax == *((ebp - 8))) {
            goto label_0;
        }
        ecx = *((ebp - 4));
        edx = *((ecx + 0x14));
        edx &= 0xffff;
        if (edx != 3) {
            eax = *((ebp - 4));
            ecx = *((eax + 0x14));
            ecx &= 0xffff;
            if (ecx == 0) {
                goto label_1;
            }
            edx = *((ebp - 4));
            eax = *((edx + 0x14));
            eax &= 0xffff;
            if (eax != 2) {
                goto label_2;
            }
            ecx = *(0x428d4c);
            ecx &= 0x10;
            if (ecx != 0) {
                goto label_2;
            }
        }
label_1:
        goto label_3;
label_2:
        edx = *((ebp - 4));
        if (*((edx + 8)) != 0) {
            eax = *((ebp - 4));
            ecx = *((eax + 8));
            eax = fcn_004112f8 (ecx, 1, 0);
            if (eax == 0) {
                edx = *((ebp - 4));
                eax = *((edx + 0xc));
                eax = fcn_0041119f (0, 0, 0, 0, "#File Error#(%d) : ", eax);
                if (eax == 1) {
                    __asm ("int3");
                }
            } else {
                edx = *((ebp - 4));
                eax = *((edx + 0xc));
                ecx = *((ebp - 4));
                edx = *((ecx + 8));
                eax = fcn_0041119f (0, 0, 0, 0, "%hs(%d) : ", edx);
                if (eax != 1) {
                    goto label_4;
                }
                __asm ("int3");
            }
        }
label_4:
        ecx = *((ebp - 4));
        edx = *((ecx + 0x18));
        eax = fcn_0041119f (0, 0, 0, 0, "{%ld} ", edx);
        if (eax == 1) {
            __asm ("int3");
        }
        ecx = *((ebp - 4));
        edx = *((ecx + 0x14));
        edx &= 0xffff;
        if (edx == 4) {
            eax = *((ebp - 4));
            ecx = *((eax + 0x10));
            edx = *((ebp - 4));
            eax = *((edx + 0x14));
            eax >>= 0x10;
            eax &= 0xffff;
            ecx = *((ebp - 4));
            ecx += 0x20;
            eax = fcn_0041119f (0, 0, 0, 0, "client block at 0x%p, subtype %x, %Iu bytes long.\n", ecx);
            if (eax == 1) {
                __asm ("int3");
            }
            if (*(0x42af60) != 0) {
                eax = *((ebp - 4));
                ecx = *((eax + 0x10));
                edx = *((ebp - 4));
                edx += 0x20;
                uint32_t (*0x42af60)(uint32_t, uint32_t) (edx, ecx);
            } else {
                eax = *((ebp - 4));
                fcn_00418b40 (eax);
            }
        } else {
            ecx = *((ebp - 4));
            if (*((ecx + 0x14)) == 1) {
                edx = *((ebp - 4));
                eax = *((edx + 0x10));
                ecx = *((ebp - 4));
                ecx += 0x20;
                eax = fcn_0041119f (0, 0, 0, 0, "normal block at 0x%p, %Iu bytes long.\n", ecx);
                if (eax == 1) {
                    __asm ("int3");
                }
                eax = *((ebp - 4));
                fcn_00418b40 (eax);
            } else {
                ecx = *((ebp - 4));
                edx = *((ecx + 0x14));
                edx &= 0xffff;
                if (edx != 2) {
                    goto label_3;
                }
                eax = *((ebp - 4));
                ecx = *((eax + 0x10));
                edx = *((ebp - 4));
                eax = *((edx + 0x14));
                eax >>= 0x10;
                eax &= 0xffff;
                ecx = *((ebp - 4));
                ecx += 0x20;
                eax = fcn_0041119f (0, 0, 0, 0, "crt block at 0x%p, subtype %x, %Iu bytes long.\n", ecx);
                if (eax == 1) {
                    __asm ("int3");
                }
                eax = *((ebp - 4));
                fcn_00418b40 (eax);
            }
        }
label_3:
    }
label_0:
    eax = fcn_0041119f (0, 0, 0, 0, 0x426074, "Object dump complete.\n");
    if (eax == 1) {
        __asm ("int3");
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111ae */
#include <stdint.h>
 
void fcn_004111ae (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    return void (*0x418ee0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x418ee0 */
#include <stdint.h>
 
int32_t loc_00418ee0 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0xc));
    eax--;
    eax &= *((ebp + 0xc));
    if (eax != 0) {
        ecx = 0;
        if (eax == 0) {
            eax = fcn_0041119f (2, "dbgheap.c", 0x99f, 0, "(\"alignment must be a power of 2\",0)");
            if (eax != 1) {
                goto label_0;
            }
            __asm ("int3");
        }
label_0:
        *(0x42962c) = 0x16;
        eax = 0;
    } else {
        eax = *((ebp + 0x10));
        if (eax >= *((ebp + 8))) {
            if (*((ebp + 0x10)) != 0) {
                ecx = 0;
                if (*((ebp + 0x10)) == 0) {
                    eax = fcn_0041119f (2, "dbgheap.c", 0x9a6, 0, "(\"offset must be within size\", 0)");
                    if (eax != 1) {
                        goto label_1;
                    }
                    __asm ("int3");
                }
label_1:
                *(0x42962c) = 0x16;
                eax = 0;
            }
        } else {
            if (*((ebp + 0xc)) > 4) {
                eax = *((ebp + 0xc));
                *((ebp - 0x14)) = eax;
            } else {
                *((ebp - 0x14)) = 4;
            }
            ecx = *((ebp - 0x14));
            ecx--;
            *((ebp + 0xc)) = ecx;
            edx = 0;
            edx -= *((ebp + 0x10));
            edx &= 3;
            *((ebp - 0x10)) = edx;
            eax = *((ebp + 0x18));
            ecx = *((ebp + 0x14));
            edx = *((ebp - 0x10));
            edx += *((ebp + 8));
            eax = *((ebp + 0xc));
            eax = fcn_00411064 (edx + eax + 8, 1, ecx, eax);
            *((ebp - 0xc)) = eax;
            if (*((ebp - 0xc)) == 0) {
                eax = 0;
            } else {
                edx = *((ebp - 0xc));
                edx += *((ebp + 0xc));
                edx += *((ebp - 0x10));
                eax = *((ebp + 0x10));
                ecx = edx + eax + 8;
                edx = *((ebp + 0xc));
                edx = ~edx;
                ecx &= edx;
                ecx -= *((ebp + 0x10));
                *((ebp - 8)) = ecx;
                eax = *((ebp - 8));
                eax -= *((ebp - 0x10));
                eax -= 8;
                *((ebp - 4)) = eax;
                ecx = *(0x428d5b);
                edx = *((ebp - 4));
                edx += 4;
                fcn_00411195 (edx, ecx, 4);
                eax = *((ebp - 4));
                ecx = *((ebp - 0xc));
                *(eax) = ecx;
                eax = *((ebp - 8));
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41119a */
#include <stdint.h>
 
int32_t fcn_0041119a (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0x1c));
        ecx = *((ebp + 0x18));
        edx = *((ebp + 0x14));
        eax = *((ebp + 0x10));
        ecx = *((ebp + 0xc));
        fcn_004111ae (ecx, eax, edx, ecx, eax);
    } else {
        if (*((ebp + 0xc)) == 0) {
            edx = *((ebp + 8));
            eax = fcn_004115af (edx);
            eax = 0;
        } else {
            eax = *((ebp + 8));
            eax &= 0xfffffffc;
            eax -= 8;
            *((ebp - 0x18)) = eax;
            cl = *(0x428d58);
            edx = *((ebp + 8));
            edx -= 4;
            eax = fcn_00417d50 (edx, ecx, 4);
            if (eax != 0) {
                eax = *((ebp + 8));
                eax = fcn_0041119f (1, 0, 0, 0, "The block at 0x%p was not allocated by _aligned routines, use realloc()", eax);
                if (eax == 1) {
                    __asm ("int3");
                }
                eax = 0;
            } else {
                dl = *(0x428d5b);
                eax = *((ebp - 0x18));
                eax += 4;
                eax = fcn_00417d50 (eax, edx, 4);
                if (eax == 0) {
                    ecx = *((ebp + 8));
                    eax = fcn_0041119f (1, 0, 0, 0, "Damage before 0x%p which was allocated by aligned routine\n", ecx);
                    if (eax != 1) {
                        goto label_0;
                    }
                    __asm ("int3");
                }
label_0:
                eax = *((ebp + 0x10));
                eax--;
                eax &= *((ebp + 0x10));
                if (eax != 0) {
                    ecx = 0;
                    if (eax == 0) {
                        eax = fcn_0041119f (2, "dbgheap.c", 0xa22, 0, "(\"alignment must be a power of 2\",0)");
                        if (eax != 1) {
                            goto label_1;
                        }
                        __asm ("int3");
                    }
label_1:
                    *(0x42962c) = 0x16;
                    eax = 0;
                } else {
                    eax = *((ebp + 0x14));
                    if (eax >= *((ebp + 0xc))) {
                        if (*((ebp + 0x14)) != 0) {
                            ecx = 0;
                            if (*((ebp + 0x14)) == 0) {
                                eax = fcn_0041119f (2, "dbgheap.c", 0xa28, 0, "(\"offset must be within size\", 0)");
                                if (eax != 1) {
                                    goto label_2;
                                }
                                __asm ("int3");
                            }
label_2:
                            *(0x42962c) = 0x16;
                            eax = 0;
                        }
                    } else {
                        eax = *((ebp - 0x18));
                        ecx = *(eax);
                        eax = fcn_00411366 (ecx);
                        edx = *((ebp - 0x18));
                        ecx = *((ebp + 8));
                        ecx -= *(edx);
                        eax -= ecx;
                        *((ebp - 0xc)) = eax;
                        if (*((ebp + 0x10)) > 4) {
                            edx = *((ebp + 0x10));
                            *((ebp - 0x1c)) = edx;
                        } else {
                            *((ebp - 0x1c)) = 4;
                        }
                        eax = *((ebp - 0x1c));
                        eax--;
                        *((ebp + 0x10)) = eax;
                        ecx = 0;
                        ecx -= *((ebp + 0x14));
                        ecx &= 3;
                        *((ebp - 0x14)) = ecx;
                        edx = *((ebp + 0x1c));
                        eax = *((ebp + 0x18));
                        ecx = *((ebp - 0x14));
                        ecx += *((ebp + 0xc));
                        edx = *((ebp + 0x10));
                        eax = fcn_00411064 (ecx + edx + 8, 1, eax, edx);
                        *((ebp - 0x10)) = eax;
                        if (*((ebp - 0x10)) == 0) {
                            eax = 0;
                        } else {
                            ecx = *((ebp - 0x10));
                            ecx += *((ebp + 0x10));
                            ecx += *((ebp - 0x14));
                            edx = *((ebp + 0x14));
                            eax = ecx + edx + 8;
                            ecx = *((ebp + 0x10));
                            ecx = ~ecx;
                            eax &= ecx;
                            eax -= *((ebp + 0x14));
                            *((ebp - 8)) = eax;
                            edx = *((ebp - 8));
                            edx -= *((ebp - 0x14));
                            edx -= 8;
                            *((ebp - 4)) = edx;
                            eax = *(0x428d5b);
                            ecx = *((ebp - 4));
                            ecx += 4;
                            fcn_00411195 (ecx, eax, 4);
                            edx = *((ebp - 4));
                            eax = *((ebp - 0x10));
                            *(edx) = eax;
                            ecx = *((ebp - 0xc));
                            if (ecx > *((ebp + 0xc))) {
                                edx = *((ebp + 0xc));
                                *((ebp - 0x20)) = edx;
                            } else {
                                eax = *((ebp - 0xc));
                                *((ebp - 0x20)) = eax;
                            }
                            ecx = *((ebp - 0x20));
                            edx = *((ebp + 8));
                            eax = *((ebp - 8));
                            fcn_00411352 (eax, edx, ecx);
                            ecx = *((ebp - 0x18));
                            edx = *(ecx);
                            fcn_0041141a (edx, 1);
                            eax = *((ebp - 8));
                        }
                    }
                }
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4115af */
#include <stdint.h>
 
int32_t fcn_004115af (uint32_t arg_8h) {
    int32_t var_4h;
    if (*((ebp + 8)) == 0) {
    } else {
        eax = *((ebp + 8));
        eax &= 0xfffffffc;
        eax -= 8;
        *((ebp - 4)) = eax;
        cl = *(0x428d58);
        edx = *((ebp + 8));
        edx -= 4;
        eax = fcn_00417d50 (edx, ecx, 4);
        if (eax != 0) {
            eax = *((ebp + 8));
            eax = fcn_0041119f (1, 0, 0, 0, "The block at 0x%p was not allocated by _aligned routines, use free()", eax);
            if (eax == 1) {
                __asm ("int3");
            }
        } else {
            dl = *(0x428d5b);
            eax = *((ebp - 4));
            eax += 4;
            eax = fcn_00417d50 (eax, edx, 4);
            if (eax == 0) {
                ecx = *((ebp + 8));
                eax = fcn_0041119f (1, 0, 0, 0, "Damage before 0x%p which was allocated by aligned routine\n", ecx);
                if (eax != 1) {
                    goto label_0;
                }
                __asm ("int3");
            }
label_0:
            eax = *((ebp - 4));
            ecx = *(eax);
            fcn_0041141a (ecx, 1);
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411366 */
#include <stdint.h>
 
void fcn_00411366 (int32_t arg_8h) {
    return void (*0x417ad0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x417ad0 */
#include <stdint.h>
 
int32_t loc_00417ad0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_0041128a (eax, 1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x419a50 */
#include <stdint.h>
 
int32_t fcn_00419a50 (uint32_t arg_8h) {
    *(0x429864) = 0;
    if (*((ebp + 8)) == 0xfffffffe) {
        *(0x429864) = 1;
        GetOEMCP ();
    } else {
        if (*((ebp + 8)) == 0xfffffffd) {
            *(0x429864) = 1;
            GetACP ();
        } else {
            if (*((ebp + 8)) == 0xfffffffc) {
                *(0x429864) = 1;
                eax = *(0x429914);
            } else {
                eax = *((ebp + 8));
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x419b60 */
#include <stdint.h>
 
int32_t fcn_00419b60 (void) {
    int32_t var_4h;
    *((ebp - 4)) = 0;
    while (1) {
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) >= 0x101) {
            goto label_0;
        }
        ecx = *((ebp - 4));
        *((ecx + 0x42ad40)) = 0;
    }
label_0:
    *(0x42ae44) = 0;
    *(0x42ad2c) = 0;
    *(0x42acb4) = 0;
    *((ebp - 4)) = 0;
    while (1) {
        edx = *((ebp - 4));
        edx++;
        *((ebp - 4)) = edx;
        if (*((ebp - 4)) >= 6) {
            goto label_1;
        }
        eax = *((ebp - 4));
        *((eax*2 + 0x42ae50)) = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x419c00 */
#include <stdint.h>
 
int32_t fcn_00419c00 (uint32_t arg_20h) {
    LPCPINFO * lpCPInfo;
    int32_t var_522h;
    uint32_t var_514h;
    int32_t var_510h;
    int32_t var_40ch;
    uint32_t var_408h;
    uint32_t var_308h;
    uint32_t var_208h;
    int32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 4)) = eax;
    ecx = *(0x42ae44);
    eax = GetCPInfo (ecx, ebp - 0x528);
    if (eax != 1) {
        goto label_1;
    }
    *((ebp - 0x514)) = 0;
    while (1) {
        edx = *((ebp - 0x514));
        edx++;
        *((ebp - 0x514)) = edx;
        if (*((ebp - 0x514)) >= 0x100) {
            goto label_2;
        }
        eax = *((ebp - 0x514));
        cl = *((ebp - 0x514));
        *((ebp + eax - 0x510)) = cl;
    }
label_2:
    *((ebp - 0x510)) = 0x20;
    edx = ebp - 0x522;
    *((ebp - 0x40c)) = edx;
    goto label_3;
label_0:
    eax = *((ebp - 0x40c));
    eax += 2;
    *((ebp - 0x40c)) = eax;
label_3:
    ecx = *((ebp - 0x40c));
    edx = *(ecx);
    if (edx == 0) {
        goto label_4;
    }
    eax = *((ebp - 0x40c));
    ecx = *(eax);
    *((ebp - 0x514)) = ecx;
    while (1) {
        edx = *((ebp - 0x514));
        edx++;
        *((ebp - 0x514)) = edx;
        eax = *((ebp - 0x40c));
        ecx = *((eax + 1));
        if (*((ebp - 0x514)) > ecx) {
            goto label_5;
        }
        edx = *((ebp - 0x514));
        *((ebp + edx - 0x510)) = 0x20;
    }
label_5:
    goto label_0;
label_4:
    eax = *(0x42acb4);
    ecx = *(0x42ae44);
    edx = ebp - 0x208;
    eax = ebp - 0x510;
    fcn_004113c0 ();
    ecx = *(0x42ae44);
    edx = ebp - 0x308;
    eax = ebp - 0x510;
    ecx = *(0x42acb4);
    fcn_004113ed ();
    edx = *(0x42ae44);
    eax = ebp - 0x408;
    ecx = ebp - 0x510;
    edx = *(0x42acb4);
    fcn_004113ed ();
    *((ebp - 0x514)) = 0;
    while (1) {
        eax = *((ebp - 0x514));
        eax++;
        *((ebp - 0x514)) = eax;
        if (*((ebp - 0x514)) >= 0x100) {
            goto label_6;
        }
        ecx = *((ebp - 0x514));
        edx = *((ebp + ecx*2 - 0x208));
        edx &= 1;
        if (edx != 0) {
            eax = *((ebp - 0x514));
            ecx = *((eax + 0x42ad41));
            ecx |= 0x10;
            edx = *((ebp - 0x514));
            *((edx + 0x42ad41)) = cl;
            eax = *((ebp - 0x514));
            ecx = *((ebp - 0x514));
            dl = *((ebp + ecx - 0x308));
            *((eax + 0x42ae60)) = dl;
        } else {
            eax = *((ebp - 0x514));
            ecx = *((ebp + eax*2 - 0x208));
            ecx &= 2;
            if (ecx != 0) {
                edx = *((ebp - 0x514));
                eax = *((edx + 0x42ad41));
                eax |= 0x20;
                ecx = *((ebp - 0x514));
                *((ecx + 0x42ad41)) = al;
                edx = *((ebp - 0x514));
                eax = *((ebp - 0x514));
                cl = *((ebp + eax - 0x408));
                *((edx + 0x42ae60)) = cl;
            } else {
                edx = *((ebp - 0x514));
                *((edx + 0x42ae60)) = 0;
            }
        }
    }
label_6:
    goto label_7;
label_1:
    *((ebp - 0x514)) = 0;
    while (1) {
        eax = *((ebp - 0x514));
        eax++;
        *((ebp - 0x514)) = eax;
        if (*((ebp - 0x514)) >= 0x100) {
            goto label_7;
        }
        if (*((ebp - 0x514)) >= 0x41) {
            if (*((ebp - 0x514)) <= 0x5a) {
                ecx = *((ebp - 0x514));
                edx = *((ecx + 0x42ad41));
                edx |= 0x10;
                eax = *((ebp - 0x514));
                *((eax + 0x42ad41)) = dl;
                ecx = *((ebp - 0x514));
                ecx += 0x20;
                edx = *((ebp - 0x514));
                *((edx + 0x42ae60)) = cl;
            }
        } else {
            if (*((ebp - 0x514)) >= 0x61) {
                if (*((ebp - 0x514)) <= 0x7a) {
                    eax = *((ebp - 0x514));
                    ecx = *((eax + 0x42ad41));
                    ecx |= 0x20;
                    edx = *((ebp - 0x514));
                    *((edx + 0x42ad41)) = cl;
                    eax = *((ebp - 0x514));
                    eax -= 0x20;
                    ecx = *((ebp - 0x514));
                    *((ecx + 0x42ae60)) = al;
                }
            } else {
                edx = *((ebp - 0x514));
                *((edx + 0x42ae60)) = 0;
            }
        }
    }
label_7:
    ecx = *((ebp - 4));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x419ac0 */
#include <stdint.h>
 
int32_t fcn_00419ac0 (int32_t arg_8h) {
    uint32_t var_4h;
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    ecx = *((ebp - 4));
    ecx -= 0x3a4;
    *((ebp - 4)) = ecx;
    if (*((ebp - 4)) <= 0x12) {
        edx = *((ebp - 4));
        eax = *((edx + 0x419b23));
        /* switch table (19 cases) at 0x419b0f */
        eax = 0x411;
        goto label_0;
        eax = 0x804;
        goto label_0;
        eax = 0x412;
        goto label_0;
        eax = 0x404;
    } else {
        eax = 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113c0 */
#include <stdint.h>
 
int32_t fcn_004113c0 (void) {
    int32_t var_40h;
    LPWSTR lpWideCharStr;
    uint32_t var_38h_2;
    int32_t cchWideChar;
    uint32_t cchSrc;
    BOOL var_2ch_2;
    int32_t var_38h;
    LPWORD lpCharType;
    int32_t var_18h_3;
    int32_t var_2ch;
    BOOL var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_4h_2;
    int32_t var_18h;
    DWORD var_10h_2;
    LPCCH var_ch_2;
    int32_t var_10h_3;
    LPWORD var_4h;
    UINT var_18h_4;
    DWORD dwInfoType;
    LPCSTR lpMultiByteStr;
    int32_t cbMultiByte;
    LPWORD var_14h;
    UINT CodePage;
    LCID Locale;
    uint32_t var_20h_2;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    if (*(0x429928) == 0) {
        eax = GetStringTypeW (1, 0x427128, 1, ebp - 0x1c);
        if (eax != 0) {
            *(0x429928) = 1;
        } else {
            eax = GetLastError ();
            if (eax != 0x78) {
                goto label_0;
            }
            *(0x429928) = 2;
        }
    }
label_0:
    if (*(0x429928) != 2) {
        if (*(0x429928) != 0) {
            goto label_1;
        }
    }
    *((ebp - 0x20)) = 0;
    if (*((ebp + 0x1c)) == 0) {
        ecx = *(0x429904);
        *((ebp + 0x1c)) = ecx;
    }
    if (*((ebp + 0x18)) == 0) {
        edx = *(0x429914);
        *((ebp + 0x18)) = edx;
    }
    eax = *((ebp + 0x1c));
    eax = fcn_00411578 (eax);
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0x24)) == -1) {
        eax = 0;
    } else {
        ecx = *((ebp - 0x24));
        if (ecx != *((ebp + 0x18))) {
            edx = ebp + 0x10;
            eax = *((ebp + 0xc));
            ecx = *((ebp - 0x24));
            edx = *((ebp + 0x18));
            eax = fcn_00411253 ();
            *((ebp - 0x20)) = eax;
            if (*((ebp - 0x20)) == 0) {
                eax = 0;
                goto label_2;
            }
            eax = *((ebp - 0x20));
            *((ebp + 0xc)) = eax;
        }
        ecx = *((ebp + 0x14));
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        ecx = *((ebp + 8));
        edx = *((ebp + 0x1c));
        eax = GetStringTypeA (edx, ecx, eax, edx, ecx);
        *((ebp - 0x28)) = eax;
        if (*((ebp - 0x20)) != 0) {
            eax = *((ebp - 0x20));
            fcn_0041141a (eax, 2);
        }
        eax = *((ebp - 0x28));
        goto label_2;
label_1:
        if (*(0x429928) == 1) {
            *((ebp - 0x2c)) = 0;
            *((ebp - 0x38)) = 0;
            if (*((ebp + 0x18)) == 0) {
                ecx = *(0x429914);
                *((ebp + 0x18)) = ecx;
            }
            edx = *((ebp + 0x10));
            eax = *((ebp + 0xc));
            ecx = 0;
            cl = (*((ebp + 0x20)) != 0) ? 1 : 0;
            edx = *((ebp + 0x18));
            eax = MultiByteToWideChar (edx, ecx*8 + 1, eax, edx, 0, 0);
            *((ebp - 0x34)) = eax;
            if (*((ebp - 0x34)) == 0) {
                eax = 0;
            } else {
                *((ebp - 4)) = 0;
            }
            eax = *((ebp - 0x34));
            eax <<= 1;
            eax += 3;
            eax &= 0xfffffffc;
            fcn_00414c20 ();
            *((ebp - 0x40)) = esp;
            *((ebp - 0x18)) = esp;
            eax = *((ebp - 0x40));
            *((ebp - 0x3c)) = eax;
            ecx = *((ebp - 0x34));
            ecx <<= 1;
            edx = *((ebp - 0x3c));
            fcn_00411195 (edx, 0, ecx);
            *((ebp - 4)) = 0xffffffff;
            if (*((ebp - 0x3c)) == 0) {
                eax = *((ebp - 0x34));
                eax = fcn_00411564 (2, eax, 2, "a_str.c", 0xa6);
                *((ebp - 0x3c)) = eax;
                if (*((ebp - 0x3c)) == 0) {
                    eax = 0;
                    goto label_2;
                }
                ecx = *((ebp - 0x38));
                ecx++;
                *((ebp - 0x38)) = ecx;
            }
            edx = *((ebp - 0x34));
            eax = *((ebp - 0x3c));
            ecx = *((ebp + 0x10));
            edx = *((ebp + 0xc));
            eax = *((ebp + 0x18));
            eax = MultiByteToWideChar (eax, 1, edx, ecx, eax, edx);
            *((ebp - 0x30)) = eax;
            if (*((ebp - 0x30)) != 0) {
                ecx = *((ebp + 0x14));
                edx = *((ebp - 0x30));
                eax = *((ebp - 0x3c));
                ecx = *((ebp + 8));
                eax = GetStringTypeW (ecx, eax, edx, ecx);
                *((ebp - 0x2c)) = eax;
            }
            if (*((ebp - 0x38)) != 0) {
                edx = *((ebp - 0x3c));
                fcn_0041141a (edx, 2);
            }
            eax = *((ebp - 0x2c));
        } else {
            eax = 0;
        }
    }
label_2:
    esp = ebp - 0x4c;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4113ed */
#include <stdint.h>
 
int32_t fcn_004113ed (void) {
    int32_t var_58h;
    uint32_t var_4ch;
    int32_t var_48h_2;
    int32_t var_44h_2;
    LPCWSTR var_40h_2;
    uint32_t var_3ch_2;
    uint32_t var_38h_2;
    LPWSTR var_64h_2;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_64h;
    uint32_t var_48h;
    uint32_t cchWideChar;
    LPWSTR lpWideCharStr;
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_4h_2;
    int32_t var_30h_2;
    uint32_t var_2ch_2;
    LPSTR lpDestStr;
    DWORD var_24h_2;
    uint32_t cchDest;
    int32_t var_14h_2;
    LPWSTR var_30h;
    int32_t var_2ch;
    UINT var_28h;
    uint32_t var_24h;
    uint32_t var_20h_2;
    uint32_t var_1ch;
    int32_t var_18h;
    LCID Locale;
    DWORD var_ch_2;
    LPCSTR lpMultiByteStr;
    int32_t cbMultiByte;
    int32_t var_18h_3;
    int32_t var_1ch_3;
    LCID CodePage;
    DWORD dwMapFlags;
    LPCSTR lpSrcStr;
    int32_t cchSrc;
    LPSTR var_18h_2;
    int32_t var_1ch_2;
    uint32_t var_20h;
    eax = *(fs:0);
    *(fs:0) = esp;
    *((ebp - 0x18)) = esp;
    if (*(0x429924) == 0) {
        eax = LCMapStringW (0, 0x100, 0x427128, 1, 0, 0);
        if (eax != 0) {
            *(0x429924) = 1;
        } else {
            eax = GetLastError ();
            if (eax != 0x78) {
                goto label_0;
            }
            *(0x429924) = 2;
        }
    }
label_0:
    if (*((ebp + 0x14)) > 0) {
        eax = *((ebp + 0x14));
        ecx = *((ebp + 0x10));
        eax = fcn_0041edd0 (ecx, eax);
        *((ebp + 0x14)) = eax;
    }
    if (*(0x429924) != 2) {
        if (*(0x429924) != 0) {
            goto label_1;
        }
    }
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x2c)) = 0;
    if (*((ebp + 8)) == 0) {
        edx = *(0x429904);
        *((ebp + 8)) = edx;
    }
    if (*((ebp + 0x20)) == 0) {
        eax = *(0x429914);
        *((ebp + 0x20)) = eax;
    }
    ecx = *((ebp + 8));
    eax = fcn_00411578 (ecx);
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0x24)) == -1) {
        eax = 0;
    } else {
        edx = *((ebp - 0x24));
        if (edx != *((ebp + 0x20))) {
            eax = ebp + 0x14;
            ecx = *((ebp + 0x10));
            edx = *((ebp - 0x24));
            eax = *((ebp + 0x20));
            eax = fcn_00411253 ();
            *((ebp - 0x1c)) = eax;
            if (*((ebp - 0x1c)) == 0) {
                eax = 0;
                goto label_2;
            }
            ecx = *((ebp - 0x1c));
            *((ebp + 0x10)) = ecx;
            edx = *((ebp + 0x14));
            eax = *((ebp + 0x10));
            ecx = *((ebp + 0xc));
            edx = *((ebp + 8));
            eax = LCMapStringA (edx, ecx, eax, edx, 0, 0);
            *((ebp - 0x20)) = eax;
            if (*((ebp - 0x20)) == 0) {
            } else {
                *((ebp - 4)) = 0;
                eax = *((ebp - 0x20));
                eax += 3;
                eax &= 0xfffffffc;
                fcn_00414c20 ();
                *((ebp - 0x50)) = esp;
                *((ebp - 0x18)) = esp;
                eax = *((ebp - 0x50));
                *((ebp - 0x28)) = eax;
                ecx = *((ebp - 0x20));
                edx = *((ebp - 0x28));
                fcn_00411195 (edx, 0, ecx);
                *((ebp - 4)) = 0xffffffff;
                if (*((ebp - 0x28)) == 0) {
                    eax = *((ebp - 0x20));
                    eax = fcn_00411064 (eax, 2, "a_map.c", 0xa6);
                    *((ebp - 0x28)) = eax;
                    if (*((ebp - 0x28)) == 0) {
                        *((ebp - 0x30)) = 0;
                        goto label_3;
                    }
                    ecx = *((ebp - 0x20));
                    edx = *((ebp - 0x28));
                    fcn_00411195 (edx, 0, ecx);
                    eax = *((ebp - 0x2c));
                    eax++;
                    *((ebp - 0x2c)) = eax;
                }
                ecx = *((ebp - 0x20));
                edx = *((ebp - 0x28));
                eax = *((ebp + 0x14));
                ecx = *((ebp + 0x10));
                edx = *((ebp + 0xc));
                eax = *((ebp + 8));
                eax = LCMapStringA (eax, edx, ecx, eax, edx, ecx);
                *((ebp - 0x20)) = eax;
                if (*((ebp - 0x20)) == 0) {
                    *((ebp - 0x30)) = 0;
                } else {
                    ecx = *((ebp + 0x1c));
                    edx = *((ebp + 0x18));
                    eax = ebp - 0x20;
                    ecx = *((ebp - 0x28));
                    edx = *((ebp + 0x20));
                    eax = *((ebp - 0x24));
                    eax = fcn_00411253 ();
                    if (eax == 0) {
                        *((ebp - 0x30)) = 0;
                    } else {
                        *((ebp - 0x30)) = 1;
                    }
                }
            }
label_3:
            if (*((ebp - 0x2c)) != 0) {
                ecx = *((ebp - 0x28));
                fcn_0041141a (ecx, 2);
            }
        } else {
            edx = *((ebp + 0x1c));
            eax = *((ebp + 0x18));
            ecx = *((ebp + 0x14));
            edx = *((ebp + 0x10));
            eax = *((ebp + 0xc));
            ecx = *((ebp + 8));
            eax = LCMapStringA (ecx, eax, edx, ecx, eax, edx);
            *((ebp - 0x30)) = eax;
        }
        if (*((ebp - 0x1c)) != 0) {
            edx = *((ebp - 0x1c));
            fcn_0041141a (edx, 2);
        }
        eax = *((ebp - 0x30));
        goto label_2;
label_1:
        if (*(0x429924) == 1) {
            *((ebp - 0x38)) = 0;
            *((ebp - 0x3c)) = 0;
            *((ebp - 0x4c)) = 0;
            if (*((ebp + 0x20)) == 0) {
                eax = *(0x429914);
                *((ebp + 0x20)) = eax;
            }
            ecx = *((ebp + 0x14));
            edx = *((ebp + 0x10));
            eax = 0;
            al = (*((ebp + 0x24)) != 0) ? 1 : 0;
            ecx = *((ebp + 0x20));
            eax = MultiByteToWideChar (ecx, eax*8 + 1, edx, ecx, 0, 0);
            *((ebp - 0x44)) = eax;
            if (*((ebp - 0x44)) == 0) {
                eax = 0;
            } else {
                *((ebp - 4)) = 1;
            }
            eax = *((ebp - 0x44));
            eax <<= 1;
            eax += 3;
            eax &= 0xfffffffc;
            fcn_00414c20 ();
            *((ebp - 0x54)) = esp;
            *((ebp - 0x18)) = esp;
            edx = *((ebp - 0x54));
            *((ebp - 0x40)) = edx;
            *((ebp - 4)) = 0xffffffff;
            if (*((ebp - 0x40)) == 0) {
                eax = *((ebp - 0x44));
                eax <<= 1;
                eax = fcn_00411064 (eax, 2, "a_map.c", 0x101);
                *((ebp - 0x40)) = eax;
                if (*((ebp - 0x40)) == 0) {
                    eax = 0;
                    goto label_2;
                }
                ecx = *((ebp - 0x3c));
                ecx++;
                *((ebp - 0x3c)) = ecx;
            }
            edx = *((ebp - 0x44));
            eax = *((ebp - 0x40));
            ecx = *((ebp + 0x14));
            edx = *((ebp + 0x10));
            eax = *((ebp + 0x20));
            eax = MultiByteToWideChar (eax, 1, edx, ecx, eax, edx);
            if (eax == 0) {
            } else {
                ecx = *((ebp - 0x44));
                edx = *((ebp - 0x40));
                eax = *((ebp + 0xc));
                ecx = *((ebp + 8));
                eax = LCMapStringW (ecx, eax, edx, ecx, 0, 0);
                *((ebp - 0x38)) = eax;
                if (*((ebp - 0x38)) == 0) {
                } else {
                    edx = *((ebp + 0xc));
                    edx &= 0x400;
                    if (edx != 0) {
                        if (*((ebp + 0x1c)) != 0) {
                            eax = *((ebp - 0x38));
                            if (eax > *((ebp + 0x1c))) {
                            } else {
                                ecx = *((ebp + 0x1c));
                            }
                            edx = *((ebp + 0x18));
                            eax = *((ebp - 0x44));
                            ecx = *((ebp - 0x40));
                            edx = *((ebp + 0xc));
                            eax = *((ebp + 8));
                            eax = LCMapStringW (eax, edx, ecx, eax, edx, ecx);
                            if (eax == 0) {
                            }
                        } else {
                        } else {
                            ecx = *((ebp - 0x38));
                            *((ebp - 0x48)) = ecx;
                            *((ebp - 4)) = 2;
                            eax = *((ebp - 0x48));
                            eax <<= 1;
                            eax += 3;
                            eax &= 0xfffffffc;
                            fcn_00414c20 ();
                            *((ebp - 0x58)) = esp;
                            *((ebp - 0x18)) = esp;
                            edx = *((ebp - 0x58));
                            *((ebp - 0x34)) = edx;
                            *((ebp - 4)) = 0xffffffff;
                        }
                    }
                }
            }
            if (*((ebp - 0x34)) == 0) {
                eax = *((ebp - 0x48));
                eax <<= 1;
                eax = fcn_00411064 (eax, 2, "a_map.c", 0x13a);
                *((ebp - 0x34)) = eax;
                if (*((ebp - 0x34)) == 0) {
                    goto label_4;
                }
                ecx = *((ebp - 0x4c));
                ecx++;
                *((ebp - 0x4c)) = ecx;
            }
            edx = *((ebp - 0x48));
            eax = *((ebp - 0x34));
            ecx = *((ebp - 0x44));
            edx = *((ebp - 0x40));
            eax = *((ebp + 0xc));
            ecx = *((ebp + 8));
            eax = LCMapStringW (ecx, eax, edx, ecx, eax, edx);
            if (eax == 0) {
            } else {
                if (*((ebp + 0x1c)) == 0) {
                    edx = *((ebp - 0x48));
                    eax = *((ebp - 0x34));
                    ecx = *((ebp + 0x20));
                    eax = WideCharToMultiByte (ecx, 0, eax, edx, 0, 0, 0, 0);
                    *((ebp - 0x38)) = eax;
                    if (*((ebp - 0x38)) == 0) {
                    } else {
                    }
                } else {
                    edx = *((ebp + 0x1c));
                    eax = *((ebp + 0x18));
                    ecx = *((ebp - 0x48));
                    edx = *((ebp - 0x34));
                    eax = *((ebp + 0x20));
                    eax = WideCharToMultiByte (eax, 0, edx, ecx, eax, edx, 0, 0);
                    *((ebp - 0x38)) = eax;
                }
            }
label_4:
            if (*((ebp - 0x4c)) != 0) {
                ecx = *((ebp - 0x34));
                fcn_0041141a (ecx, 2);
            }
            if (*((ebp - 0x3c)) != 0) {
                edx = *((ebp - 0x40));
                fcn_0041141a (edx, 2);
            }
            eax = *((ebp - 0x38));
        } else {
            eax = 0;
        }
    }
label_2:
    esp = ebp - 0x64;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411343 */
#include <stdint.h>
 
int32_t fcn_00411343 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
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
    /* switch table (4 cases) at 0x41f2bc */
label_1:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x41f250 */
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
            /* switch table (4 cases) at 0x41f458 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x41f408 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x41f458 */
    eax = *((ebp + 8));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    eax = *((ebp + 8));
    do {
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
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4112cb */
#include <stdint.h>
 
int32_t fcn_004112cb (void) {
    LPVOID var_4h;
    eax = *(0x42ac9c);
    if (eax == *(0x42acac)) {
        ecx = *(0x42acac);
        ecx += 0x10;
        ecx *= 0x14;
        edx = *(0x42aca0);
        eax = *(0x42af80);
        eax = HeapReAlloc (eax, 0, edx, ecx);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) == 0) {
            eax = 0;
            goto label_0;
        }
        ecx = *((ebp - 4));
        *(0x42aca0) = ecx;
        edx = *(0x42acac);
        edx += 0x10;
        *(0x42acac) = edx;
    }
    eax = *(0x42ac9c);
    eax *= 0x14;
    eax += *(0x42aca0);
    *((ebp - 4)) = eax;
    ecx = *(0x42af80);
    eax = HeapAlloc (ecx, 8, 0x41c4);
    edx = *((ebp - 4));
    *((edx + 0x10)) = eax;
    eax = *((ebp - 4));
    if (*((eax + 0x10)) == 0) {
        eax = 0;
    } else {
        eax = VirtualAlloc (0, 0x100000, 0x2000, 4);
        ecx = *((ebp - 4));
        *((ecx + 0xc)) = eax;
        edx = *((ebp - 4));
        if (*((edx + 0xc)) == 0) {
            eax = *((ebp - 4));
            ecx = *((eax + 0x10));
            edx = *(0x42af80);
            eax = HeapFree (edx, 0, ecx);
            eax = 0;
        } else {
            eax = *((ebp - 4));
            *(eax) = 0;
            ecx = *((ebp - 4));
            *((ecx + 4)) = 0;
            edx = *((ebp - 4));
            *((edx + 8)) = 0xffffffff;
            eax = *(0x42ac9c);
            eax++;
            *(0x42ac9c) = eax;
            ecx = *((ebp - 4));
            edx = *((ecx + 0x10));
            *(edx) = 0xffffffff;
            eax = *((ebp - 4));
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4110af */
#include <stdint.h>
 
int32_t fcn_004110af (uint32_t arg_8h) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    LPVOID var_10h;
    LPVOID lpAddress;
    int32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 8));
    ecx = *((eax + 0x10));
    *((ebp - 0x20)) = ecx;
    edx = *((ebp + 8));
    eax = *((edx + 8));
    *((ebp - 0x2c)) = eax;
    *((ebp - 0x28)) = 0;
    do {
        if (*((ebp - 0x2c)) < 0) {
            goto label_0;
        }
        ecx = *((ebp - 0x2c));
        ecx <<= 1;
        *((ebp - 0x2c)) = ecx;
        edx = *((ebp - 0x28));
        edx++;
        *((ebp - 0x28)) = edx;
    } while (1);
label_0:
    eax = *((ebp - 0x28));
    eax *= 0x204;
    ecx = *((ebp - 0x20));
    edx = ecx + eax + 0x144;
    *((ebp - 0x1c)) = edx;
    *((ebp - 0x14)) = 0;
    while (1) {
        eax = *((ebp - 0x14));
        eax++;
        *((ebp - 0x14)) = eax;
        if (*((ebp - 0x14)) >= 0x3f) {
            goto label_1;
        }
        ecx = *((ebp - 0x14));
        edx = *((ebp - 0x1c));
        eax = edx + ecx*8;
        *((ebp - 8)) = eax;
        ecx = *((ebp - 8));
        edx = *((ebp - 8));
        *((ecx + 8)) = edx;
        eax = *((ebp - 8));
        ecx = *((ebp - 8));
        *((eax + 4)) = ecx;
    }
label_1:
    edx = *((ebp - 0x28));
    edx <<= 0xf;
    eax = *((ebp + 8));
    edx += *((eax + 0xc));
    *((ebp - 0xc)) = edx;
    ecx = *((ebp - 0xc));
    eax = VirtualAlloc (ecx, 0x8000, 0x1000, 4);
    if (eax == 0) {
        eax |= 0xffffffff;
        goto label_2;
    }
    edx = *((ebp - 0xc));
    edx += 0x7000;
    *((ebp - 4)) = edx;
    eax = *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (1) {
        ecx = *((ebp - 0x10));
        ecx += 0x1000;
        *((ebp - 0x10)) = ecx;
        edx = *((ebp - 0x10));
        if (edx > *((ebp - 4))) {
            goto label_3;
        }
        eax = *((ebp - 0x10));
        *((eax + 8)) = 0xffffffff;
        ecx = *((ebp - 0x10));
        *((ecx + 0xffc)) = 0xffffffff;
        edx = *((ebp - 0x10));
        edx += 0xc;
        *((ebp - 8)) = edx;
        eax = *((ebp - 8));
        *(eax) = 0xff0;
        ecx = *((ebp - 8));
        ecx += 0x1000;
        edx = *((ebp - 8));
        *((edx + 4)) = ecx;
        eax = *((ebp - 8));
        eax -= 0x1000;
        ecx = *((ebp - 8));
        *((ecx + 8)) = eax;
        edx = *((ebp - 8));
        edx += 0xfec;
        *((ebp - 0x24)) = edx;
        eax = *((ebp - 0x24));
        *(eax) = 0xff0;
    }
label_3:
    ecx = *((ebp - 0x1c));
    ecx += 0x1f8;
    *((ebp - 0x18)) = ecx;
    edx = *((ebp - 0xc));
    edx += 0xc;
    eax = *((ebp - 0x18));
    *((eax + 4)) = edx;
    ecx = *((ebp - 0x18));
    edx = *((ecx + 4));
    *((ebp - 8)) = edx;
    eax = *((ebp - 8));
    ecx = *((ebp - 0x18));
    *((eax + 8)) = ecx;
    edx = *((ebp - 4));
    edx += 0xc;
    eax = *((ebp - 0x18));
    *((eax + 8)) = edx;
    ecx = *((ebp - 0x18));
    edx = *((ecx + 8));
    *((ebp - 8)) = edx;
    eax = *((ebp - 8));
    ecx = *((ebp - 0x18));
    *((eax + 4)) = ecx;
    edx = *((ebp - 0x28));
    eax = *((ebp - 0x20));
    *((eax + edx*4 + 0x44)) = 0;
    ecx = *((ebp - 0x28));
    edx = *((ebp - 0x20));
    *((edx + ecx*4 + 0xc4)) = 1;
    eax = *((ebp - 0x20));
    ecx = *((eax + 0x43));
    edx = *((ebp - 0x20));
    al = *((edx + 0x43));
    al++;
    edx = *((ebp - 0x20));
    *((edx + 0x43)) = al;
    if (ecx == 0) {
        eax = *((ebp + 8));
        ecx = *((eax + 4));
        ecx |= 1;
        edx = *((ebp + 8));
        *((edx + 4)) = ecx;
    }
    eax = 0x80000000;
    ecx = *((ebp - 0x28));
    eax >>= cl;
    eax = ~eax;
    ecx = *((ebp + 8));
    eax &= *((ecx + 8));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x28));
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d200 */
#include <stdint.h>
 
int32_t fcn_0041d200 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h) {
    int32_t var_10h;
    int32_t var_9h;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    if (*((ebp + 0x14)) != 0) {
        ecx = *((ebp - 4));
        *(ecx) = 0x2d;
        edx = *((ebp - 4));
        edx++;
        *((ebp - 4)) = edx;
        eax = *((ebp + 8));
        eax = -eax;
        *((ebp + 8)) = eax;
    }
    ecx = *((ebp - 4));
    *((ebp - 0x10)) = ecx;
    do {
        eax = *((ebp + 8));
        edx = 0;
        eax = *(edx:eax) / ebp + 0x10;
        edx = *(edx:eax) % ebp + 0x10;
        *((ebp - 8)) = edx;
        eax = *((ebp + 8));
        edx = 0;
        eax = *(edx:eax) / ebp + 0x10;
        edx = *(edx:eax) % ebp + 0x10;
        *((ebp + 8)) = eax;
        if (*((ebp - 8)) > 9) {
            edx = *((ebp - 8));
            edx += 0x57;
            eax = *((ebp - 4));
            *(eax) = dl;
            ecx = *((ebp - 4));
            ecx++;
            *((ebp - 4)) = ecx;
        } else {
            edx = *((ebp - 8));
            edx += 0x30;
            eax = *((ebp - 4));
            *(eax) = dl;
            ecx = *((ebp - 4));
            ecx++;
            *((ebp - 4)) = ecx;
        }
    } while (*((ebp + 8)) > 0);
    edx = *((ebp - 4));
    *(edx) = 0;
    eax = *((ebp - 4));
    eax--;
    *((ebp - 4)) = eax;
    do {
        ecx = *((ebp - 4));
        dl = *(ecx);
        *((ebp - 9)) = dl;
        eax = *((ebp - 4));
        ecx = *((ebp - 0x10));
        dl = *(ecx);
        *(eax) = dl;
        eax = *((ebp - 0x10));
        cl = *((ebp - 9));
        *(eax) = cl;
        edx = *((ebp - 4));
        edx--;
        *((ebp - 4)) = edx;
        eax = *((ebp - 0x10));
        eax++;
        *((ebp - 0x10)) = eax;
        ecx = *((ebp - 0x10));
    } while (ecx < *((ebp - 4)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41d3e0 */
#include <stdint.h>
 
int32_t fcn_0041d3e0 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h) {
    int32_t var_10h;
    int32_t var_9h;
    uint32_t var_8h;
    uint32_t var_4h;
    eax = *((ebp + 0x10));
    *((ebp - 4)) = eax;
    if (*((ebp + 0x18)) != 0) {
        ecx = *((ebp - 4));
        *(ecx) = 0x2d;
        edx = *((ebp - 4));
        edx++;
        *((ebp - 4)) = edx;
        eax = *((ebp + 8));
        eax = -eax;
        ecx = *((ebp + 0xc));
        ecx += 0;
        ecx = -ecx;
        *((ebp + 8)) = eax;
        *((ebp + 0xc)) = ecx;
    }
    edx = *((ebp - 4));
    *((ebp - 0x10)) = edx;
    do {
label_0:
        eax = *((ebp + 0x14));
        ecx = 0;
        edx = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = fcn_004115a0 (eax, edx, eax, ecx);
        *((ebp - 8)) = eax;
        ecx = *((ebp + 0x14));
        edx = 0;
        eax = *((ebp + 0xc));
        ecx = *((ebp + 8));
        eax = fcn_00411555 (ecx, eax, ecx, edx);
        *((ebp + 8)) = eax;
        *((ebp + 0xc)) = edx;
        if (*((ebp - 8)) > 9) {
            edx = *((ebp - 8));
            edx += 0x57;
            eax = *((ebp - 4));
            *(eax) = dl;
            ecx = *((ebp - 4));
            ecx++;
            *((ebp - 4)) = ecx;
        } else {
            edx = *((ebp - 8));
            edx += 0x30;
            eax = *((ebp - 4));
            *(eax) = dl;
            ecx = *((ebp - 4));
            ecx++;
            *((ebp - 4)) = ecx;
        }
    } while (*((ebp + 0xc)) > 0);
    if (*((ebp + 0xc)) < 0) {
        goto label_1;
    }
    if (*((ebp + 8)) > 0) {
        goto label_0;
    }
label_1:
    edx = *((ebp - 4));
    *(edx) = 0;
    eax = *((ebp - 4));
    eax--;
    *((ebp - 4)) = eax;
    do {
        ecx = *((ebp - 4));
        dl = *(ecx);
        *((ebp - 9)) = dl;
        eax = *((ebp - 4));
        ecx = *((ebp - 0x10));
        dl = *(ecx);
        *(eax) = dl;
        eax = *((ebp - 0x10));
        cl = *((ebp - 9));
        *(eax) = cl;
        edx = *((ebp - 4));
        edx--;
        *((ebp - 4)) = edx;
        eax = *((ebp - 0x10));
        eax++;
        *((ebp - 0x10)) = eax;
        ecx = *((ebp - 0x10));
    } while (ecx < *((ebp - 4)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4115a0 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_004115a0 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    eax = *((esp + 0x14));
    eax |= eax;
    if (eax == 0) {
        ecx = *((esp + 0x10));
        eax = *((esp + 0xc));
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax = *((esp + 8));
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        eax = edx;
        edx = 0;
        goto label_0;
    }
    ecx = eax;
    ebx = *((esp + 0x10));
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    do {
        ecx >>= 1;
        ebx = rotate_right32 (ebx, 1);
        edx >>= 1;
        eax = rotate_right32 (eax, 1);
        ecx |= ecx;
    } while (ecx != 0);
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    ecx = eax;
    edx:eax = eax * *((esp + 0x14));
    tmp_0 = eax;
    eax = ecx;
    ecx = tmp_0;
    edx:eax = eax * *((esp + 0x10));
    edx += ecx;
    if (edx >= 0) {
        if (edx > *((esp + 0xc))) {
            goto label_1;
        }
        if (edx < *((esp + 0xc))) {
            goto label_2;
        }
        if (eax <= *((esp + 8))) {
            goto label_2;
        }
    }
label_1:
    eax -= *((esp + 0x10));
    edx -= *((esp + 0x14));
label_2:
    eax -= *((esp + 8));
    edx -= *((esp + 0xc));
    edx = -edx;
    eax = -eax;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411555 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00411555 (uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = *((esp + 0x18));
    eax |= eax;
    if (eax == 0) {
        ecx = *((esp + 0x14));
        eax = *((esp + 0x10));
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ebx = eax;
        eax = *((esp + 0xc));
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        edx = ebx;
        goto label_0;
    }
    ecx = eax;
    ebx = *((esp + 0x14));
    edx = *((esp + 0x10));
    eax = *((esp + 0xc));
    do {
        ecx >>= 1;
        ebx = rotate_right32 (ebx, 1);
        edx >>= 1;
        eax = rotate_right32 (eax, 1);
        ecx |= ecx;
    } while (ecx != 0);
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    esi = eax;
    edx:eax = eax * *((esp + 0x18));
    ecx = eax;
    eax = *((esp + 0x14));
    edx:eax = eax * esi;
    edx += ecx;
    if (edx >= 0) {
        if (edx > *((esp + 0x10))) {
            goto label_1;
        }
        if (edx < *((esp + 0x10))) {
            goto label_2;
        }
        if (eax <= *((esp + 0xc))) {
            goto label_2;
        }
    }
label_1:
    esi--;
label_2:
    edx = 0;
    eax = esi;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4110a5 */
#include <stdint.h>
 
int32_t fcn_004110a5 (uint32_t arg_8h, uint32_t arg_ch) {
    uint32_t var_4h;
    if (*((ebp + 8)) <= 0xffffffe0) {
        goto label_0;
    }
    eax = 0;
    goto label_1;
    do {
label_0:
        if (*((ebp + 8)) <= 0xffffffe0) {
            eax = *((ebp + 8));
            eax = fcn_0041106e (eax);
            *((ebp - 4)) = eax;
        } else {
            *((ebp - 4)) = 0;
        }
        if (*((ebp - 4)) == 0) {
            if (*((ebp + 0xc)) != 0) {
                goto label_2;
            }
        }
        eax = *((ebp - 4));
        goto label_1;
label_2:
        ecx = *((ebp + 8));
        eax = fcn_004113d9 (ecx);
        if (eax == 0) {
            eax = 0;
        } else {
        }
    } while (1);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411528 */
#include <stdint.h>
 
int32_t fcn_00411528 (uint32_t arg_8h) {
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x42ac9c);
    eax *= 0x14;
    eax += *(0x42aca0);
    *((ebp - 0xc)) = eax;
    ecx = *((ebp + 8));
    ecx += 0x17;
    ecx &= 0xfffffff0;
    *((ebp - 0x38)) = ecx;
    edx = *((ebp - 0x38));
    edx >>= 4;
    edx--;
    *((ebp - 0x34)) = edx;
    if (*((ebp - 0x34)) < 0x20) {
        eax |= 0xffffffff;
        ecx = *((ebp - 0x34));
        eax >>= cl;
        *((ebp - 0x18)) = eax;
        *((ebp - 0x30)) = 0xffffffff;
    } else {
        *((ebp - 0x18)) = 0;
        ecx = *((ebp - 0x34));
        ecx -= 0x20;
        edx |= 0xffffffff;
        edx >>= cl;
        *((ebp - 0x30)) = edx;
    }
    eax = *(0x42aca8);
    *((ebp - 0x1c)) = eax;
    do {
        ecx = *((ebp - 0x1c));
        if (ecx >= *((ebp - 0xc))) {
            goto label_0;
        }
        edx = *((ebp - 0x1c));
        eax = *((ebp - 0x18));
        eax &= *(edx);
        ecx = *((ebp - 0x1c));
        edx = *((ebp - 0x30));
        edx &= *((ecx + 4));
        eax |= edx;
        if (eax != 0) {
        } else {
            eax = *((ebp - 0x1c));
            eax += 0x14;
            *((ebp - 0x1c)) = eax;
        } while (1);
    }
label_0:
    ecx = *((ebp - 0x1c));
    if (ecx != *((ebp - 0xc))) {
        goto label_1;
    }
    edx = *(0x42aca0);
    *((ebp - 0x1c)) = edx;
    do {
        eax = *((ebp - 0x1c));
        if (eax >= *(0x42aca8)) {
            goto label_2;
        }
        ecx = *((ebp - 0x1c));
        edx = *((ebp - 0x18));
        edx &= *(ecx);
        eax = *((ebp - 0x1c));
        ecx = *((ebp - 0x30));
        ecx &= *((eax + 4));
        edx |= ecx;
        if (edx != 0) {
        } else {
            edx = *((ebp - 0x1c));
            edx += 0x14;
            *((ebp - 0x1c)) = edx;
        }
    } while (1);
label_2:
    eax = *((ebp - 0x1c));
    if (eax != *(0x42aca8)) {
        goto label_1;
    }
    do {
        ecx = *((ebp - 0x1c));
        if (ecx >= *((ebp - 0xc))) {
            goto label_3;
        }
        edx = *((ebp - 0x1c));
        if (*((edx + 8)) != 0) {
        } else {
            eax = *((ebp - 0x1c));
            eax += 0x14;
            *((ebp - 0x1c)) = eax;
        }
    } while (1);
label_3:
    ecx = *((ebp - 0x1c));
    if (ecx != *((ebp - 0xc))) {
        goto label_4;
    }
    edx = *(0x42aca0);
    *((ebp - 0x1c)) = edx;
    do {
        eax = *((ebp - 0x1c));
        if (eax >= *(0x42aca8)) {
            goto label_5;
        }
        ecx = *((ebp - 0x1c));
        if (*((ecx + 8)) != 0) {
        } else {
            edx = *((ebp - 0x1c));
            edx += 0x14;
            *((ebp - 0x1c)) = edx;
        }
    } while (1);
label_5:
    eax = *((ebp - 0x1c));
    if (eax == *(0x42aca8)) {
        eax = fcn_004112cb ();
        *((ebp - 0x1c)) = eax;
        if (*((ebp - 0x1c)) != 0) {
            goto label_4;
        }
        eax = 0;
        goto label_6;
    }
label_4:
    ecx = *((ebp - 0x1c));
    eax = fcn_004110af (ecx);
    edx = *((ebp - 0x1c));
    ecx = *((edx + 0x10));
    *(ecx) = eax;
    edx = *((ebp - 0x1c));
    eax = *((edx + 0x10));
    if (*(eax) == -1) {
        eax = 0;
        goto label_6;
    }
label_1:
    ecx = *((ebp - 0x1c));
    *(0x42aca8) = ecx;
    edx = *((ebp - 0x1c));
    eax = *((edx + 0x10));
    *((ebp - 0x28)) = eax;
    ecx = *((ebp - 0x28));
    edx = *(ecx);
    *((ebp - 0x14)) = edx;
    if (*((ebp - 0x14)) != -1) {
        eax = *((ebp - 0x14));
        ecx = *((ebp - 0x28));
        edx = *((ebp - 0x18));
        edx &= *((ecx + eax*4 + 0x44));
        eax = *((ebp - 0x14));
        ecx = *((ebp - 0x28));
        esi = *((ebp - 0x30));
        esi &= *((ecx + eax*4 + 0xc4));
        edx |= esi;
        if (edx != 0) {
            goto label_7;
        }
    }
    *((ebp - 0x14)) = 0;
    do {
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x28));
        ecx = *((ebp - 0x18));
        ecx &= *((eax + edx*4 + 0x44));
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x28));
        esi = *((ebp - 0x30));
        esi &= *((eax + edx*4 + 0xc4));
        ecx |= esi;
        if (ecx != 0) {
            goto label_7;
        }
        ecx = *((ebp - 0x14));
        ecx++;
        *((ebp - 0x14)) = ecx;
    } while (1);
label_7:
    edx = *((ebp - 0x14));
    edx *= 0x204;
    eax = *((ebp - 0x28));
    ecx = eax + edx + 0x144;
    *((ebp - 0x24)) = ecx;
    *((ebp - 0x34)) = 0;
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x28));
    ecx = *((ebp - 0x18));
    ecx &= *((eax + edx*4 + 0x44));
    *((ebp - 4)) = ecx;
    if (ecx != 0) {
        goto label_8;
    }
    *((ebp - 0x34)) = 0x20;
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x28));
    ecx = *((ebp - 0x30));
    ecx &= *((eax + edx*4 + 0xc4));
    *((ebp - 4)) = ecx;
    do {
label_8:
        if (*((ebp - 4)) < 0) {
            goto label_9;
        }
        edx = *((ebp - 4));
        edx <<= 1;
        *((ebp - 4)) = edx;
        eax = *((ebp - 0x34));
        eax++;
        *((ebp - 0x34)) = eax;
    } while (1);
label_9:
    ecx = *((ebp - 0x34));
    edx = *((ebp - 0x24));
    eax = *((edx + ecx*8 + 4));
    *((ebp - 8)) = eax;
    ecx = *((ebp - 8));
    edx = *(ecx);
    edx -= *((ebp - 0x38));
    *((ebp - 0x2c)) = edx;
    eax = *((ebp - 0x2c));
    eax >>= 4;
    eax--;
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) > 0x3f) {
        *((ebp - 0x10)) = 0x3f;
    }
    ecx = *((ebp - 0x10));
    if (ecx != *((ebp - 0x34))) {
        edx = *((ebp - 8));
        eax = *((ebp - 8));
        ecx = *((edx + 4));
        if (ecx == *((eax + 8))) {
            if (*((ebp - 0x34)) < 0x20) {
                edx = 0x80000000;
                ecx = *((ebp - 0x34));
                edx >>= cl;
                edx = ~edx;
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x28));
                edx &= *((ecx + eax*4 + 0x44));
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x28));
                *((ecx + eax*4 + 0x44)) = edx;
                edx = *((ebp - 0x28));
                edx += *((ebp - 0x34));
                al = *((edx + 4));
                al--;
                ecx = *((ebp - 0x28));
                ecx += *((ebp - 0x34));
                *((ecx + 4)) = al;
                edx = *((ebp - 0x28));
                edx += *((ebp - 0x34));
                eax = *((edx + 4));
                if (eax == 0) {
                    edx = 0x80000000;
                    ecx = *((ebp - 0x34));
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp - 0x1c));
                    edx &= *(eax);
                    ecx = *((ebp - 0x1c));
                    *(ecx) = edx;
                }
            } else {
                ecx = *((ebp - 0x34));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                edx = ~edx;
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x28));
                edx &= *((ecx + eax*4 + 0xc4));
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x28));
                *((ecx + eax*4 + 0xc4)) = edx;
                edx = *((ebp - 0x28));
                edx += *((ebp - 0x34));
                al = *((edx + 4));
                al--;
                ecx = *((ebp - 0x28));
                ecx += *((ebp - 0x34));
                *((ecx + 4)) = al;
                edx = *((ebp - 0x28));
                edx += *((ebp - 0x34));
                eax = *((edx + 4));
                if (eax != 0) {
                    goto label_10;
                }
                ecx = *((ebp - 0x34));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                edx = ~edx;
                eax = *((ebp - 0x1c));
                edx &= *((eax + 4));
                ecx = *((ebp - 0x1c));
                *((ecx + 4)) = edx;
            }
        }
label_10:
        edx = *((ebp - 8));
        eax = *((edx + 8));
        ecx = *((ebp - 8));
        edx = *((ecx + 4));
        *((eax + 4)) = edx;
        eax = *((ebp - 8));
        ecx = *((eax + 4));
        edx = *((ebp - 8));
        eax = *((edx + 8));
        *((ecx + 8)) = eax;
        if (*((ebp - 0x2c)) == 0) {
            goto label_11;
        }
        ecx = *((ebp - 0x10));
        edx = *((ebp - 0x24));
        eax = edx + ecx*8;
        *((ebp - 0x20)) = eax;
        ecx = *((ebp - 8));
        edx = *((ebp - 0x20));
        eax = *((edx + 4));
        *((ecx + 4)) = eax;
        ecx = *((ebp - 8));
        edx = *((ebp - 0x20));
        *((ecx + 8)) = edx;
        eax = *((ebp - 0x20));
        ecx = *((ebp - 8));
        *((eax + 4)) = ecx;
        edx = *((ebp - 8));
        eax = *((edx + 4));
        ecx = *((ebp - 8));
        *((eax + 8)) = ecx;
        edx = *((ebp - 8));
        eax = *((ebp - 8));
        ecx = *((edx + 4));
        if (ecx != *((eax + 8))) {
            goto label_11;
        }
        if (*((ebp - 0x10)) < 0x20) {
            edx = *((ebp - 0x28));
            edx += *((ebp - 0x10));
            eax = *((edx + 4));
            ecx = *((ebp - 0x28));
            ecx += *((ebp - 0x10));
            dl = *((ecx + 4));
            dl++;
            ecx = *((ebp - 0x28));
            ecx += *((ebp - 0x10));
            *((ecx + 4)) = dl;
            if (eax == 0) {
                edx = 0x80000000;
                ecx = *((ebp - 0x10));
                edx >>= cl;
                eax = *((ebp - 0x1c));
                edx |= *(eax);
                ecx = *((ebp - 0x1c));
                *(ecx) = edx;
            }
            edx = 0x80000000;
            ecx = *((ebp - 0x10));
            edx >>= cl;
            eax = *((ebp - 0x14));
            ecx = *((ebp - 0x28));
            edx |= *((ecx + eax*4 + 0x44));
            eax = *((ebp - 0x14));
            ecx = *((ebp - 0x28));
            *((ecx + eax*4 + 0x44)) = edx;
        } else {
            edx = *((ebp - 0x28));
            edx += *((ebp - 0x10));
            eax = *((edx + 4));
            ecx = *((ebp - 0x28));
            ecx += *((ebp - 0x10));
            dl = *((ecx + 4));
            dl++;
            ecx = *((ebp - 0x28));
            ecx += *((ebp - 0x10));
            *((ecx + 4)) = dl;
            if (eax == 0) {
                ecx = *((ebp - 0x10));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                eax = *((ebp - 0x1c));
                edx |= *((eax + 4));
                ecx = *((ebp - 0x1c));
                *((ecx + 4)) = edx;
            }
            ecx = *((ebp - 0x10));
            ecx -= 0x20;
            edx = 0x80000000;
            edx >>= cl;
            eax = *((ebp - 0x14));
            ecx = *((ebp - 0x28));
            edx |= *((ecx + eax*4 + 0xc4));
            eax = *((ebp - 0x14));
            ecx = *((ebp - 0x28));
            *((ecx + eax*4 + 0xc4)) = edx;
        }
    }
label_11:
    if (*((ebp - 0x2c)) != 0) {
        edx = *((ebp - 8));
        eax = *((ebp - 0x2c));
        *(edx) = eax;
        ecx = *((ebp - 8));
        ecx += *((ebp - 0x2c));
        edx = *((ebp - 0x2c));
        *((ecx - 4)) = edx;
    }
    eax = *((ebp - 8));
    eax += *((ebp - 0x2c));
    *((ebp - 8)) = eax;
    ecx = *((ebp - 0x38));
    ecx++;
    edx = *((ebp - 8));
    *(edx) = ecx;
    eax = *((ebp - 0x38));
    eax++;
    ecx = *((ebp - 8));
    ecx += *((ebp - 0x38));
    *((ecx - 4)) = eax;
    edx = *((ebp - 0x24));
    eax = *(edx);
    ecx = *((ebp - 0x24));
    edx = *(ecx);
    edx++;
    ecx = *((ebp - 0x24));
    *(ecx) = edx;
    if (eax == 0) {
        edx = *((ebp - 0x1c));
        if (edx != *(0x42ac98)) {
            goto label_12;
        }
        eax = *((ebp - 0x14));
        if (eax != *(0x42acb0)) {
            goto label_12;
        }
        *(0x42ac98) = 0;
    }
label_12:
    ecx = *((ebp - 0x28));
    edx = *((ebp - 0x14));
    *(ecx) = edx;
    eax = *((ebp - 8));
    eax += 4;
label_6:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111e5 */
#include <stdint.h>
 
int32_t fcn_004111e5 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h) {
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0x10));
    eax += 0x17;
    eax &= 0xfffffff0;
    *((ebp - 0x1c)) = eax;
    ecx = *((ebp + 8));
    edx = *((ecx + 0x10));
    *((ebp - 0x24)) = edx;
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    ecx -= *((eax + 0xc));
    *((ebp - 0x14)) = ecx;
    edx = *((ebp - 0x14));
    edx >>= 0xf;
    *((ebp - 0xc)) = edx;
    eax = *((ebp - 0xc));
    eax *= 0x204;
    ecx = *((ebp - 0x24));
    edx = ecx + eax + 0x144;
    *((ebp - 0x20)) = edx;
    eax = *((ebp + 0xc));
    eax -= 4;
    *((ebp - 0x10)) = eax;
    ecx = *((ebp - 0x10));
    edx = *(ecx);
    edx--;
    *((ebp - 0x30)) = edx;
    eax = *((ebp - 0x10));
    eax += *((ebp - 0x30));
    *((ebp - 4)) = eax;
    ecx = *((ebp - 4));
    edx = *(ecx);
    *((ebp - 0x28)) = edx;
    eax = *((ebp - 0x1c));
    if (eax > *((ebp - 0x30))) {
        ecx = *((ebp - 0x28));
        ecx &= 1;
        if (ecx == 0) {
            edx = *((ebp - 0x30));
            edx += *((ebp - 0x28));
            if (*((ebp - 0x1c)) <= edx) {
                goto label_0;
            }
        }
        eax = 0;
        goto label_1;
label_0:
        eax = *((ebp - 0x28));
        eax >>= 4;
        eax--;
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) > 0x3f) {
            *((ebp - 8)) = 0x3f;
        }
        ecx = *((ebp - 4));
        edx = *((ebp - 4));
        eax = *((ecx + 4));
        if (eax == *((edx + 8))) {
            if (*((ebp - 8)) < 0x20) {
                edx = 0x80000000;
                ecx = *((ebp - 8));
                edx >>= cl;
                edx = ~edx;
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                edx &= *((ecx + eax*4 + 0x44));
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                *((ecx + eax*4 + 0x44)) = edx;
                edx = *((ebp - 0x24));
                edx += *((ebp - 8));
                al = *((edx + 4));
                al--;
                ecx = *((ebp - 0x24));
                ecx += *((ebp - 8));
                *((ecx + 4)) = al;
                edx = *((ebp - 0x24));
                edx += *((ebp - 8));
                eax = *((edx + 4));
                if (eax == 0) {
                    edx = 0x80000000;
                    ecx = *((ebp - 8));
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp + 8));
                    edx &= *(eax);
                    ecx = *((ebp + 8));
                    *(ecx) = edx;
                }
            } else {
                ecx = *((ebp - 8));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                edx = ~edx;
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                edx &= *((ecx + eax*4 + 0xc4));
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                *((ecx + eax*4 + 0xc4)) = edx;
                edx = *((ebp - 0x24));
                edx += *((ebp - 8));
                al = *((edx + 4));
                al--;
                ecx = *((ebp - 0x24));
                ecx += *((ebp - 8));
                *((ecx + 4)) = al;
                edx = *((ebp - 0x24));
                edx += *((ebp - 8));
                eax = *((edx + 4));
                if (eax != 0) {
                    goto label_2;
                }
                ecx = *((ebp - 8));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                edx = ~edx;
                eax = *((ebp + 8));
                edx &= *((eax + 4));
                ecx = *((ebp + 8));
                *((ecx + 4)) = edx;
            }
        }
label_2:
        edx = *((ebp - 4));
        eax = *((edx + 8));
        ecx = *((ebp - 4));
        edx = *((ecx + 4));
        *((eax + 4)) = edx;
        eax = *((ebp - 4));
        ecx = *((eax + 4));
        edx = *((ebp - 4));
        eax = *((edx + 8));
        *((ecx + 8)) = eax;
        ecx = *((ebp - 0x30));
        ecx += *((ebp - 0x28));
        ecx -= *((ebp - 0x1c));
        *((ebp - 0x28)) = ecx;
        if (*((ebp - 0x28)) > 0) {
            edx = *((ebp - 0x10));
            edx += *((ebp - 0x1c));
            *((ebp - 4)) = edx;
            eax = *((ebp - 0x28));
            eax >>= 4;
            eax--;
            *((ebp - 8)) = eax;
            if (*((ebp - 8)) > 0x3f) {
                *((ebp - 8)) = 0x3f;
            }
            ecx = *((ebp - 8));
            edx = *((ebp - 0x20));
            eax = edx + ecx*8;
            *((ebp - 0x18)) = eax;
            ecx = *((ebp - 4));
            edx = *((ebp - 0x18));
            eax = *((edx + 4));
            *((ecx + 4)) = eax;
            ecx = *((ebp - 4));
            edx = *((ebp - 0x18));
            *((ecx + 8)) = edx;
            eax = *((ebp - 0x18));
            ecx = *((ebp - 4));
            *((eax + 4)) = ecx;
            edx = *((ebp - 4));
            eax = *((edx + 4));
            ecx = *((ebp - 4));
            *((eax + 8)) = ecx;
            edx = *((ebp - 4));
            eax = *((ebp - 4));
            ecx = *((edx + 4));
            if (ecx == *((eax + 8))) {
                if (*((ebp - 8)) < 0x20) {
                    edx = *((ebp - 0x24));
                    edx += *((ebp - 8));
                    eax = *((edx + 4));
                    ecx = *((ebp - 0x24));
                    ecx += *((ebp - 8));
                    dl = *((ecx + 4));
                    dl++;
                    ecx = *((ebp - 0x24));
                    ecx += *((ebp - 8));
                    *((ecx + 4)) = dl;
                    if (eax == 0) {
                        edx = 0x80000000;
                        ecx = *((ebp - 8));
                        edx >>= cl;
                        eax = *((ebp + 8));
                        edx |= *(eax);
                        ecx = *((ebp + 8));
                        *(ecx) = edx;
                    }
                    edx = 0x80000000;
                    ecx = *((ebp - 8));
                    edx >>= cl;
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    edx |= *((ecx + eax*4 + 0x44));
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    *((ecx + eax*4 + 0x44)) = edx;
                } else {
                    edx = *((ebp - 0x24));
                    edx += *((ebp - 8));
                    eax = *((edx + 4));
                    ecx = *((ebp - 0x24));
                    ecx += *((ebp - 8));
                    dl = *((ecx + 4));
                    dl++;
                    ecx = *((ebp - 0x24));
                    ecx += *((ebp - 8));
                    *((ecx + 4)) = dl;
                    if (eax == 0) {
                        ecx = *((ebp - 8));
                        ecx -= 0x20;
                        edx = 0x80000000;
                        edx >>= cl;
                        eax = *((ebp + 8));
                        edx |= *((eax + 4));
                        ecx = *((ebp + 8));
                        *((ecx + 4)) = edx;
                    }
                    ecx = *((ebp - 8));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    edx |= *((ecx + eax*4 + 0xc4));
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    *((ecx + eax*4 + 0xc4)) = edx;
                }
            }
            edx = *((ebp - 4));
            eax = *((ebp - 0x28));
            *(edx) = eax;
            ecx = *((ebp - 4));
            ecx += *((ebp - 0x28));
            edx = *((ebp - 0x28));
            *((ecx - 4)) = edx;
        }
        eax = *((ebp - 0x1c));
        eax++;
        ecx = *((ebp - 0x10));
        *(ecx) = eax;
        edx = *((ebp - 0x1c));
        edx++;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x1c));
        *((eax - 4)) = edx;
    } else {
        ecx = *((ebp - 0x1c));
        if (ecx >= *((ebp - 0x30))) {
            goto label_3;
        }
        edx = *((ebp - 0x1c));
        edx++;
        eax = *((ebp - 0x10));
        *(eax) = edx;
        ecx = *((ebp - 0x1c));
        ecx++;
        edx = *((ebp - 0x10));
        edx += *((ebp - 0x1c));
        *((edx - 4)) = ecx;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x1c));
        *((ebp - 0x10)) = eax;
        ecx = *((ebp - 0x30));
        ecx -= *((ebp - 0x1c));
        *((ebp - 0x30)) = ecx;
        edx = *((ebp - 0x30));
        edx >>= 4;
        edx--;
        *((ebp - 0x2c)) = edx;
        if (*((ebp - 0x2c)) > 0x3f) {
            *((ebp - 0x2c)) = 0x3f;
        }
        eax = *((ebp - 0x28));
        eax &= 1;
        if (eax == 0) {
            ecx = *((ebp - 0x28));
            ecx >>= 4;
            ecx--;
            *((ebp - 8)) = ecx;
            if (*((ebp - 8)) > 0x3f) {
                *((ebp - 8)) = 0x3f;
            }
            edx = *((ebp - 4));
            eax = *((ebp - 4));
            ecx = *((edx + 4));
            if (ecx == *((eax + 8))) {
                if (*((ebp - 8)) < 0x20) {
                    edx = 0x80000000;
                    ecx = *((ebp - 8));
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    edx &= *((ecx + eax*4 + 0x44));
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    *((ecx + eax*4 + 0x44)) = edx;
                    edx = *((ebp - 0x24));
                    edx += *((ebp - 8));
                    al = *((edx + 4));
                    al--;
                    ecx = *((ebp - 0x24));
                    ecx += *((ebp - 8));
                    *((ecx + 4)) = al;
                    edx = *((ebp - 0x24));
                    edx += *((ebp - 8));
                    eax = *((edx + 4));
                    if (eax == 0) {
                        edx = 0x80000000;
                        ecx = *((ebp - 8));
                        edx >>= cl;
                        edx = ~edx;
                        eax = *((ebp + 8));
                        edx &= *(eax);
                        ecx = *((ebp + 8));
                        *(ecx) = edx;
                    }
                } else {
                    ecx = *((ebp - 8));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    edx &= *((ecx + eax*4 + 0xc4));
                    eax = *((ebp - 0xc));
                    ecx = *((ebp - 0x24));
                    *((ecx + eax*4 + 0xc4)) = edx;
                    edx = *((ebp - 0x24));
                    edx += *((ebp - 8));
                    al = *((edx + 4));
                    al--;
                    ecx = *((ebp - 0x24));
                    ecx += *((ebp - 8));
                    *((ecx + 4)) = al;
                    edx = *((ebp - 0x24));
                    edx += *((ebp - 8));
                    eax = *((edx + 4));
                    if (eax != 0) {
                        goto label_4;
                    }
                    ecx = *((ebp - 8));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp + 8));
                    edx &= *((eax + 4));
                    ecx = *((ebp + 8));
                    *((ecx + 4)) = edx;
                }
            }
label_4:
            edx = *((ebp - 4));
            eax = *((edx + 8));
            ecx = *((ebp - 4));
            edx = *((ecx + 4));
            *((eax + 4)) = edx;
            eax = *((ebp - 4));
            ecx = *((eax + 4));
            edx = *((ebp - 4));
            eax = *((edx + 8));
            *((ecx + 8)) = eax;
            ecx = *((ebp - 0x30));
            ecx += *((ebp - 0x28));
            *((ebp - 0x30)) = ecx;
            edx = *((ebp - 0x30));
            edx >>= 4;
            edx--;
            *((ebp - 0x2c)) = edx;
            if (*((ebp - 0x2c)) <= 0x3f) {
                goto label_5;
            }
            *((ebp - 0x2c)) = 0x3f;
        }
label_5:
        eax = *((ebp - 0x2c));
        ecx = *((ebp - 0x20));
        edx = ecx + eax*8;
        *((ebp - 0x18)) = edx;
        eax = *((ebp - 0x10));
        ecx = *((ebp - 0x18));
        edx = *((ecx + 4));
        *((eax + 4)) = edx;
        eax = *((ebp - 0x10));
        ecx = *((ebp - 0x18));
        *((eax + 8)) = ecx;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x10));
        *((edx + 4)) = eax;
        ecx = *((ebp - 0x10));
        edx = *((ecx + 4));
        eax = *((ebp - 0x10));
        *((edx + 8)) = eax;
        ecx = *((ebp - 0x10));
        edx = *((ebp - 0x10));
        eax = *((ecx + 4));
        if (eax == *((edx + 8))) {
            if (*((ebp - 0x2c)) < 0x20) {
                ecx = *((ebp - 0x24));
                ecx += *((ebp - 0x2c));
                edx = *((ecx + 4));
                eax = *((ebp - 0x24));
                eax += *((ebp - 0x2c));
                cl = *((eax + 4));
                cl++;
                eax = *((ebp - 0x24));
                eax += *((ebp - 0x2c));
                *((eax + 4)) = cl;
                if (edx == 0) {
                    edx = 0x80000000;
                    ecx = *((ebp - 0x2c));
                    edx >>= cl;
                    eax = *((ebp + 8));
                    edx |= *(eax);
                    ecx = *((ebp + 8));
                    *(ecx) = edx;
                }
                edx = 0x80000000;
                ecx = *((ebp - 0x2c));
                edx >>= cl;
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                edx |= *((ecx + eax*4 + 0x44));
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                *((ecx + eax*4 + 0x44)) = edx;
            } else {
                edx = *((ebp - 0x24));
                edx += *((ebp - 0x2c));
                eax = *((edx + 4));
                ecx = *((ebp - 0x24));
                ecx += *((ebp - 0x2c));
                dl = *((ecx + 4));
                dl++;
                ecx = *((ebp - 0x24));
                ecx += *((ebp - 0x2c));
                *((ecx + 4)) = dl;
                if (eax == 0) {
                    ecx = *((ebp - 0x2c));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    eax = *((ebp + 8));
                    edx |= *((eax + 4));
                    ecx = *((ebp + 8));
                    *((ecx + 4)) = edx;
                }
                ecx = *((ebp - 0x2c));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                edx |= *((ecx + eax*4 + 0xc4));
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0x24));
                *((ecx + eax*4 + 0xc4)) = edx;
            }
        }
        edx = *((ebp - 0x10));
        eax = *((ebp - 0x30));
        *(edx) = eax;
        ecx = *((ebp - 0x10));
        ecx += *((ebp - 0x30));
        edx = *((ebp - 0x30));
        *((ecx - 4)) = edx;
    }
label_3:
    eax = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411127 */
#include <stdint.h>
 
void fcn_00411127 (int32_t arg_8h) {
    int32_t var_4h;
    return void (*0x41dda0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41dda0 */
#include <stdint.h>
 
int32_t loc_0041dda0 (int32_t arg_8h) {
    int32_t var_4h;
    eax = *(0x4298f4);
    ecx = *((ebp + 8));
    eax = fcn_004110a5 (ecx, eax);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41149c */
#include <stdint.h>
 
int32_t fcn_0041149c (uint32_t arg_8h, uint32_t arg_ch) {
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    LPVOID lpAddress;
    eax = *((ebp + 8));
    ecx = *((eax + 0x10));
    *((ebp - 0x2c)) = ecx;
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    eax -= *((edx + 0xc));
    *((ebp - 0x20)) = eax;
    ecx = *((ebp - 0x20));
    ecx >>= 0xf;
    *((ebp - 0x14)) = ecx;
    edx = *((ebp - 0x14));
    edx *= 0x204;
    eax = *((ebp - 0x2c));
    ecx = eax + edx + 0x144;
    *((ebp - 0x28)) = ecx;
    edx = *((ebp + 0xc));
    edx -= 4;
    *((ebp - 0x18)) = edx;
    eax = *((ebp - 0x18));
    ecx = *(eax);
    ecx--;
    *((ebp - 0x3c)) = ecx;
    edx = *((ebp - 0x3c));
    edx &= 1;
    if (edx != 0) {
    } else {
        eax = *((ebp - 0x18));
        eax += *((ebp - 0x3c));
        *((ebp - 8)) = eax;
        ecx = *((ebp - 8));
        edx = *(ecx);
        *((ebp - 0x34)) = edx;
        eax = *((ebp - 0x18));
        ecx = *((eax - 4));
        *((ebp - 0x1c)) = ecx;
        edx = *((ebp - 0x34));
        edx &= 1;
        if (edx == 0) {
            eax = *((ebp - 0x34));
            eax >>= 4;
            eax--;
            *((ebp - 0x10)) = eax;
            if (*((ebp - 0x10)) > 0x3f) {
                *((ebp - 0x10)) = 0x3f;
            }
            ecx = *((ebp - 8));
            edx = *((ebp - 8));
            eax = *((ecx + 4));
            if (eax == *((edx + 8))) {
                if (*((ebp - 0x10)) < 0x20) {
                    edx = 0x80000000;
                    ecx = *((ebp - 0x10));
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp - 0x14));
                    ecx = *((ebp - 0x2c));
                    edx &= *((ecx + eax*4 + 0x44));
                    eax = *((ebp - 0x14));
                    ecx = *((ebp - 0x2c));
                    *((ecx + eax*4 + 0x44)) = edx;
                    edx = *((ebp - 0x2c));
                    edx += *((ebp - 0x10));
                    al = *((edx + 4));
                    al--;
                    ecx = *((ebp - 0x2c));
                    ecx += *((ebp - 0x10));
                    *((ecx + 4)) = al;
                    edx = *((ebp - 0x2c));
                    edx += *((ebp - 0x10));
                    eax = *((edx + 4));
                    if (eax == 0) {
                        edx = 0x80000000;
                        ecx = *((ebp - 0x10));
                        edx >>= cl;
                        edx = ~edx;
                        eax = *((ebp + 8));
                        edx &= *(eax);
                        ecx = *((ebp + 8));
                        *(ecx) = edx;
                    }
                } else {
                    ecx = *((ebp - 0x10));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp - 0x14));
                    ecx = *((ebp - 0x2c));
                    edx &= *((ecx + eax*4 + 0xc4));
                    eax = *((ebp - 0x14));
                    ecx = *((ebp - 0x2c));
                    *((ecx + eax*4 + 0xc4)) = edx;
                    edx = *((ebp - 0x2c));
                    edx += *((ebp - 0x10));
                    al = *((edx + 4));
                    al--;
                    ecx = *((ebp - 0x2c));
                    ecx += *((ebp - 0x10));
                    *((ecx + 4)) = al;
                    edx = *((ebp - 0x2c));
                    edx += *((ebp - 0x10));
                    eax = *((edx + 4));
                    if (eax != 0) {
                        goto label_0;
                    }
                    ecx = *((ebp - 0x10));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    edx = ~edx;
                    eax = *((ebp + 8));
                    edx &= *((eax + 4));
                    ecx = *((ebp + 8));
                    *((ecx + 4)) = edx;
                }
            }
label_0:
            edx = *((ebp - 8));
            eax = *((edx + 8));
            ecx = *((ebp - 8));
            edx = *((ecx + 4));
            *((eax + 4)) = edx;
            eax = *((ebp - 8));
            ecx = *((eax + 4));
            edx = *((ebp - 8));
            eax = *((edx + 8));
            *((ecx + 8)) = eax;
            ecx = *((ebp - 0x3c));
            ecx += *((ebp - 0x34));
            *((ebp - 0x3c)) = ecx;
        }
        edx = *((ebp - 0x3c));
        edx >>= 4;
        edx--;
        *((ebp - 0x38)) = edx;
        if (*((ebp - 0x38)) > 0x3f) {
            *((ebp - 0x38)) = 0x3f;
        }
        eax = *((ebp - 0x1c));
        eax &= 1;
        if (eax == 0) {
            ecx = *((ebp - 0x18));
            ecx -= *((ebp - 0x1c));
            *((ebp - 0xc)) = ecx;
            edx = *((ebp - 0x1c));
            edx >>= 4;
            edx--;
            *((ebp - 0x30)) = edx;
            if (*((ebp - 0x30)) > 0x3f) {
                *((ebp - 0x30)) = 0x3f;
            }
            eax = *((ebp - 0x3c));
            eax += *((ebp - 0x1c));
            *((ebp - 0x3c)) = eax;
            ecx = *((ebp - 0x3c));
            ecx >>= 4;
            ecx--;
            *((ebp - 0x38)) = ecx;
            if (*((ebp - 0x38)) > 0x3f) {
                *((ebp - 0x38)) = 0x3f;
            }
            edx = *((ebp - 0x30));
            if (edx != *((ebp - 0x38))) {
                eax = *((ebp - 0xc));
                ecx = *((ebp - 0xc));
                edx = *((eax + 4));
                if (edx == *((ecx + 8))) {
                    if (*((ebp - 0x30)) < 0x20) {
                        eax = 0x80000000;
                        ecx = *((ebp - 0x30));
                        eax >>= cl;
                        eax = ~eax;
                        ecx = *((ebp - 0x14));
                        edx = *((ebp - 0x2c));
                        eax &= *((edx + ecx*4 + 0x44));
                        ecx = *((ebp - 0x14));
                        edx = *((ebp - 0x2c));
                        *((edx + ecx*4 + 0x44)) = eax;
                        eax = *((ebp - 0x2c));
                        eax += *((ebp - 0x30));
                        cl = *((eax + 4));
                        cl--;
                        edx = *((ebp - 0x2c));
                        edx += *((ebp - 0x30));
                        *((edx + 4)) = cl;
                        eax = *((ebp - 0x2c));
                        eax += *((ebp - 0x30));
                        ecx = *((eax + 4));
                        if (ecx == 0) {
                            edx = 0x80000000;
                            ecx = *((ebp - 0x30));
                            edx >>= cl;
                            edx = ~edx;
                            eax = *((ebp + 8));
                            edx &= *(eax);
                            ecx = *((ebp + 8));
                            *(ecx) = edx;
                        }
                    } else {
                        ecx = *((ebp - 0x30));
                        ecx -= 0x20;
                        edx = 0x80000000;
                        edx >>= cl;
                        edx = ~edx;
                        eax = *((ebp - 0x14));
                        ecx = *((ebp - 0x2c));
                        edx &= *((ecx + eax*4 + 0xc4));
                        eax = *((ebp - 0x14));
                        ecx = *((ebp - 0x2c));
                        *((ecx + eax*4 + 0xc4)) = edx;
                        edx = *((ebp - 0x2c));
                        edx += *((ebp - 0x30));
                        al = *((edx + 4));
                        al--;
                        ecx = *((ebp - 0x2c));
                        ecx += *((ebp - 0x30));
                        *((ecx + 4)) = al;
                        edx = *((ebp - 0x2c));
                        edx += *((ebp - 0x30));
                        eax = *((edx + 4));
                        if (eax != 0) {
                            goto label_1;
                        }
                        ecx = *((ebp - 0x30));
                        ecx -= 0x20;
                        edx = 0x80000000;
                        edx >>= cl;
                        edx = ~edx;
                        eax = *((ebp + 8));
                        edx &= *((eax + 4));
                        ecx = *((ebp + 8));
                        *((ecx + 4)) = edx;
                    }
                }
label_1:
                edx = *((ebp - 0xc));
                eax = *((edx + 8));
                ecx = *((ebp - 0xc));
                edx = *((ecx + 4));
                *((eax + 4)) = edx;
                eax = *((ebp - 0xc));
                ecx = *((eax + 4));
                edx = *((ebp - 0xc));
                eax = *((edx + 8));
                *((ecx + 8)) = eax;
            }
            ecx = *((ebp - 0xc));
            *((ebp - 0x18)) = ecx;
        }
        edx = *((ebp - 0x1c));
        edx &= 1;
        if (edx == 0) {
            eax = *((ebp - 0x30));
            if (eax == *((ebp - 0x38))) {
                goto label_2;
            }
        }
        ecx = *((ebp - 0x38));
        edx = *((ebp - 0x28));
        eax = edx + ecx*8;
        *((ebp - 0x24)) = eax;
        ecx = *((ebp - 0x18));
        edx = *((ebp - 0x24));
        eax = *((edx + 4));
        *((ecx + 4)) = eax;
        ecx = *((ebp - 0x18));
        edx = *((ebp - 0x24));
        *((ecx + 8)) = edx;
        eax = *((ebp - 0x24));
        ecx = *((ebp - 0x18));
        *((eax + 4)) = ecx;
        edx = *((ebp - 0x18));
        eax = *((edx + 4));
        ecx = *((ebp - 0x18));
        *((eax + 8)) = ecx;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x18));
        ecx = *((edx + 4));
        if (ecx == *((eax + 8))) {
            if (*((ebp - 0x38)) < 0x20) {
                edx = *((ebp - 0x2c));
                edx += *((ebp - 0x38));
                eax = *((edx + 4));
                ecx = *((ebp - 0x2c));
                ecx += *((ebp - 0x38));
                dl = *((ecx + 4));
                dl++;
                ecx = *((ebp - 0x2c));
                ecx += *((ebp - 0x38));
                *((ecx + 4)) = dl;
                if (eax == 0) {
                    edx = 0x80000000;
                    ecx = *((ebp - 0x38));
                    edx >>= cl;
                    eax = *((ebp + 8));
                    edx |= *(eax);
                    ecx = *((ebp + 8));
                    *(ecx) = edx;
                }
                edx = 0x80000000;
                ecx = *((ebp - 0x38));
                edx >>= cl;
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x2c));
                edx |= *((ecx + eax*4 + 0x44));
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x2c));
                *((ecx + eax*4 + 0x44)) = edx;
            } else {
                edx = *((ebp - 0x2c));
                edx += *((ebp - 0x38));
                eax = *((edx + 4));
                ecx = *((ebp - 0x2c));
                ecx += *((ebp - 0x38));
                dl = *((ecx + 4));
                dl++;
                ecx = *((ebp - 0x2c));
                ecx += *((ebp - 0x38));
                *((ecx + 4)) = dl;
                if (eax == 0) {
                    ecx = *((ebp - 0x38));
                    ecx -= 0x20;
                    edx = 0x80000000;
                    edx >>= cl;
                    eax = *((ebp + 8));
                    edx |= *((eax + 4));
                    ecx = *((ebp + 8));
                    *((ecx + 4)) = edx;
                }
                ecx = *((ebp - 0x38));
                ecx -= 0x20;
                edx = 0x80000000;
                edx >>= cl;
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x2c));
                edx |= *((ecx + eax*4 + 0xc4));
                eax = *((ebp - 0x14));
                ecx = *((ebp - 0x2c));
                *((ecx + eax*4 + 0xc4)) = edx;
            }
        }
label_2:
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x3c));
        *(edx) = eax;
        ecx = *((ebp - 0x18));
        ecx += *((ebp - 0x3c));
        edx = *((ebp - 0x3c));
        *((ecx - 4)) = edx;
        eax = *((ebp - 0x28));
        ecx = *(eax);
        ecx--;
        edx = *((ebp - 0x28));
        *(edx) = ecx;
        eax = *((ebp - 0x28));
        if (*(eax) != 0) {
            goto label_3;
        }
        if (*(0x42ac98) != 0) {
            ecx = *(0x42acb0);
            ecx <<= 0xf;
            edx = *(0x42ac98);
            ecx += *((edx + 0xc));
            *((ebp - 4)) = ecx;
            eax = *((ebp - 4));
            VirtualFree (eax, 0x8000, 0x4000);
            edx = 0x80000000;
            ecx = *(0x42acb0);
            edx >>= cl;
            eax = *(0x42ac98);
            edx |= *((eax + 8));
            ecx = *(0x42ac98);
            *((ecx + 8)) = edx;
            edx = *(0x42ac98);
            eax = *((edx + 0x10));
            ecx = *(0x42acb0);
            *((eax + ecx*4 + 0xc4)) = 0;
            edx = *(0x42ac98);
            eax = *((edx + 0x10));
            cl = *((eax + 0x43));
            cl--;
            edx = *(0x42ac98);
            eax = *((edx + 0x10));
            *((eax + 0x43)) = cl;
            ecx = *(0x42ac98);
            edx = *((ecx + 0x10));
            eax = *((edx + 0x43));
            if (eax == 0) {
                ecx = *(0x42ac98);
                edx = *((ecx + 4));
                edx &= 0xfffffffe;
                eax = *(0x42ac98);
                *((eax + 4)) = edx;
            }
            ecx = *(0x42ac98);
            if (*((ecx + 8)) != -1) {
                goto label_4;
            }
            edx = *(0x42ac98);
            eax = *((edx + 0xc));
            VirtualFree (eax, 0, 0x8000);
            ecx = *(0x42ac98);
            edx = *((ecx + 0x10));
            eax = *(0x42af80);
            HeapFree (eax, 0, edx);
            ecx = *(0x42ac9c);
            ecx *= 0x14;
            ecx += *(0x42aca0);
            edx = *(0x42ac98);
            edx += 0x14;
            ecx -= edx;
            eax = *(0x42ac98);
            eax += 0x14;
            ecx = *(0x42ac98);
            fcn_00411343 (ecx, eax, ecx);
            edx = *(0x42ac9c);
            edx--;
            *(0x42ac9c) = edx;
            eax = *((ebp + 8));
            if (eax > *(0x42ac98)) {
                ecx = *((ebp + 8));
                ecx -= 0x14;
                *((ebp + 8)) = ecx;
            }
            edx = *(0x42aca0);
            *(0x42aca8) = edx;
        }
label_4:
        eax = *((ebp + 8));
        *(0x42ac98) = eax;
        ecx = *((ebp - 0x14));
        *(0x42acb0) = ecx;
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4111d6 */
#include <stdint.h>
 
int32_t fcn_004111d6 (void) {
    int32_t var_16ch;
    int32_t var_168h;
    int32_t var_164h;
    uint32_t var_160h;
    int32_t var_15ch;
    int32_t var_158h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    LPVOID lp;
    int32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    LPVOID var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    LPVOID var_10h;
    LPVOID var_ch;
    uint32_t var_8h;
    LPVOID var_4h;
    eax = *(0x42ac9c);
    eax *= 0x14;
    ecx = *(0x42aca0);
    eax = IsBadWritePtr (ecx, eax);
    if (eax != 0) {
        eax |= 0xffffffff;
        goto label_5;
    }
    edx = *(0x42aca0);
    *((ebp - 0x38)) = edx;
    *((ebp - 0x16c)) = 0;
    goto label_6;
label_4:
    eax = *((ebp - 0x16c));
    eax++;
    *((ebp - 0x16c)) = eax;
label_6:
    ecx = *((ebp - 0x16c));
    if (ecx >= *(0x42ac9c)) {
        goto label_7;
    }
    edx = *((ebp - 0x38));
    eax = *((edx + 0x10));
    *((ebp - 0x48)) = eax;
    ecx = *((ebp - 0x48));
    eax = IsBadWritePtr (ecx, 0x41c4);
    if (eax != 0) {
        eax = 0xfffffffe;
        goto label_5;
    }
    edx = *((ebp - 0x38));
    eax = *((edx + 0xc));
    *((ebp - 0x10)) = eax;
    ecx = *((ebp - 0x48));
    ecx += 0x144;
    *((ebp - 0x44)) = ecx;
    edx = *((ebp - 0x38));
    eax = *((edx + 8));
    *((ebp - 0x15c)) = eax;
    *((ebp - 0x34)) = 0;
    *((ebp - 0x50)) = 0;
    *((ebp - 0x1c)) = 0;
    goto label_8;
label_3:
    ecx = *((ebp - 0x1c));
    ecx++;
    *((ebp - 0x1c)) = ecx;
label_8:
    if (*((ebp - 0x1c)) >= 0x20) {
        goto label_9;
    }
    *((ebp - 0xc)) = 0;
    *((ebp - 4)) = 0;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x168)) = 0;
    while (1) {
        edx = *((ebp - 0x168));
        edx++;
        *((ebp - 0x168)) = edx;
        if (*((ebp - 0x168)) >= 0x40) {
            goto label_10;
        }
        eax = *((ebp - 0x168));
        *((ebp + eax*4 - 0x158)) = 0;
    }
label_10:
    if (*((ebp - 0x15c)) < 0) {
        goto label_11;
    }
    ecx = *((ebp - 0x10));
    eax = IsBadWritePtr (ecx, 0x8000);
    if (eax != 0) {
        eax = 0xfffffffc;
        goto label_5;
    }
    edx = *((ebp - 0x10));
    *((ebp - 0x28)) = edx;
    *((ebp - 0x18)) = 0;
    goto label_12;
label_0:
    eax = *((ebp - 0x18));
    eax++;
    *((ebp - 0x18)) = eax;
label_12:
    if (*((ebp - 0x18)) >= 8) {
        goto label_13;
    }
    ecx = *((ebp - 0x28));
    ecx += 0xc;
    *((ebp - 0x24)) = ecx;
    edx = *((ebp - 0x24));
    edx += 0xff0;
    *((ebp - 0x30)) = edx;
    eax = *((ebp - 0x24));
    if (*((eax - 4)) == -1) {
        ecx = *((ebp - 0x30));
        if (*(ecx) == -1) {
            goto label_14;
        }
    }
    eax = 0xfffffffb;
    goto label_5;
    do {
label_14:
        edx = *((ebp - 0x24));
        eax = *(edx);
        *((ebp - 0x3c)) = eax;
        ecx = *((ebp - 0x3c));
        *((ebp - 0x160)) = ecx;
        edx = *((ebp - 0x160));
        edx &= 1;
        if (edx != 0) {
            eax = *((ebp - 0x3c));
            eax--;
            *((ebp - 0x3c)) = eax;
            if (*((ebp - 0x3c)) > 0x400) {
                eax = 0xfffffffa;
                goto label_5;
            }
            ecx = *((ebp - 0x14));
            ecx++;
            *((ebp - 0x14)) = ecx;
        } else {
            edx = *((ebp - 0x3c));
            edx >>= 4;
            edx--;
            *((ebp - 0x168)) = edx;
            if (*((ebp - 0x168)) > 0x3f) {
                *((ebp - 0x168)) = 0x3f;
            }
            eax = *((ebp - 0x168));
            ecx = *((ebp + eax*4 - 0x158));
            ecx++;
            edx = *((ebp - 0x168));
            *((ebp + edx*4 - 0x158)) = ecx;
        }
        if (*((ebp - 0x3c)) >= 0x10) {
            eax = *((ebp - 0x3c));
            eax &= 0xf;
            if (eax != 0) {
                goto label_15;
            }
            if (*((ebp - 0x3c)) <= 0xff0) {
                goto label_16;
            }
        }
label_15:
        eax = 0xfffffff9;
        goto label_5;
label_16:
        ecx = *((ebp - 0x24));
        ecx += *((ebp - 0x3c));
        edx = *((ecx - 4));
        if (edx != *((ebp - 0x160))) {
            eax = 0xfffffff8;
            goto label_5;
        }
        eax = *((ebp - 0x24));
        eax += *((ebp - 0x3c));
        *((ebp - 0x24)) = eax;
        ecx = *((ebp - 0x24));
    } while (ecx < *((ebp - 0x30)));
    edx = *((ebp - 0x24));
    if (edx != *((ebp - 0x30))) {
        eax = 0xfffffff8;
        goto label_5;
    }
    eax = *((ebp - 0x28));
    eax += 0x1000;
    *((ebp - 0x28)) = eax;
    goto label_0;
label_13:
    ecx = *((ebp - 0x44));
    edx = *(ecx);
    if (edx != *((ebp - 0x14))) {
        eax = 0xfffffff7;
        goto label_5;
    }
    eax = *((ebp - 0x44));
    *((ebp - 0x40)) = eax;
    *((ebp - 0x164)) = 0;
    goto label_17;
label_2:
    ecx = *((ebp - 0x164));
    ecx++;
    *((ebp - 0x164)) = ecx;
label_17:
    if (*((ebp - 0x164)) >= 0x40) {
        goto label_11;
    }
    *((ebp - 0x54)) = 0;
    edx = *((ebp - 0x40));
    *((ebp - 0x24)) = edx;
label_1:
    eax = *((ebp - 0x24));
    ecx = *((eax + 4));
    *((ebp - 8)) = ecx;
    edx = *((ebp - 8));
    if (edx == *((ebp - 0x40))) {
        goto label_18;
    }
    eax = *((ebp - 0x164));
    ecx = *((ebp - 0x54));
    if (ecx == *((ebp + eax*4 - 0x158))) {
        goto label_18;
    }
    edx = *((ebp - 8));
    if (edx >= *((ebp - 0x10))) {
        eax = *((ebp - 0x10));
        eax += 0x8000;
        if (*((ebp - 8)) < eax) {
            goto label_19;
        }
    }
    eax = 0xfffffff6;
    goto label_5;
label_19:
    ecx = *((ebp - 8));
    ecx &= 0xfffff000;
    *((ebp - 0x4c)) = ecx;
    edx = *((ebp - 0x4c));
    edx += 0xc;
    *((ebp - 0x2c)) = edx;
    eax = *((ebp - 0x2c));
    eax += 0xff0;
    *((ebp - 0x20)) = eax;
    do {
        ecx = *((ebp - 0x2c));
        if (ecx == *((ebp - 0x20))) {
            goto label_20;
        }
        edx = *((ebp - 0x2c));
        if (edx == *((ebp - 8))) {
        } else {
            eax = *((ebp - 0x2c));
            ecx = *(eax);
            ecx &= 0xfffffffe;
            ecx += *((ebp - 0x2c));
            *((ebp - 0x2c)) = ecx;
        }
    } while (1);
label_20:
    edx = *((ebp - 0x2c));
    if (edx == *((ebp - 0x20))) {
        eax = 0xfffffff5;
    } else {
        eax = *((ebp - 8));
        ecx = *(eax);
        ecx >>= 4;
        ecx--;
        *((ebp - 0x168)) = ecx;
        if (*((ebp - 0x168)) > 0x3f) {
            *((ebp - 0x168)) = 0x3f;
        }
        edx = *((ebp - 0x168));
        if (edx != *((ebp - 0x164))) {
            eax = 0xfffffff4;
        } else {
            eax = *((ebp - 8));
            ecx = *((eax + 8));
            if (ecx != *((ebp - 0x24))) {
                eax = 0xfffffff3;
            } else {
                edx = *((ebp - 8));
                *((ebp - 0x24)) = edx;
                eax = *((ebp - 0x54));
                eax++;
                *((ebp - 0x54)) = eax;
                goto label_1;
label_18:
                if (*((ebp - 0x54)) != 0) {
                    if (*((ebp - 0x164)) < 0x20) {
                        edx = 0x80000000;
                        ecx = *((ebp - 0x164));
                        edx >>= cl;
                        edx |= *((ebp - 0xc));
                        *((ebp - 0xc)) = edx;
                        eax = 0x80000000;
                        ecx = *((ebp - 0x164));
                        eax >>= cl;
                        eax |= *((ebp - 0x34));
                        *((ebp - 0x34)) = eax;
                    } else {
                        ecx = *((ebp - 0x164));
                        ecx -= 0x20;
                        edx = 0x80000000;
                        edx >>= cl;
                        edx |= *((ebp - 4));
                        *((ebp - 4)) = edx;
                        ecx = *((ebp - 0x164));
                        ecx -= 0x20;
                        eax = 0x80000000;
                        eax >>= cl;
                        eax |= *((ebp - 0x50));
                        *((ebp - 0x50)) = eax;
                    }
                }
                ecx = *((ebp - 0x24));
                edx = *((ecx + 4));
                if (edx == *((ebp - 0x40))) {
                    eax = *((ebp - 0x164));
                    ecx = *((ebp - 0x54));
                    if (ecx == *((ebp + eax*4 - 0x158))) {
                        goto label_21;
                    }
                }
                eax = 0xfffffff2;
                goto label_5;
label_21:
                edx = *((ebp - 0x40));
                eax = *((edx + 8));
                if (eax != *((ebp - 0x24))) {
                    eax = 0xfffffff1;
                } else {
                    ecx = *((ebp - 0x40));
                    ecx += 8;
                    *((ebp - 0x40)) = ecx;
                    goto label_2;
label_11:
                    edx = *((ebp - 0x1c));
                    eax = *((ebp - 0x48));
                    ecx = *((ebp - 0xc));
                    if (ecx == *((eax + edx*4 + 0x44))) {
                        edx = *((ebp - 0x1c));
                        eax = *((ebp - 0x48));
                        ecx = *((ebp - 4));
                        if (ecx == *((eax + edx*4 + 0xc4))) {
                            goto label_22;
                        }
                    }
                    eax = 0xfffffff0;
                    goto label_5;
label_22:
                    edx = *((ebp - 0x10));
                    edx += 0x8000;
                    *((ebp - 0x10)) = edx;
                    eax = *((ebp - 0x44));
                    eax += 0x204;
                    *((ebp - 0x44)) = eax;
                    ecx = *((ebp - 0x15c));
                    ecx <<= 1;
                    *((ebp - 0x15c)) = ecx;
                    goto label_3;
label_9:
                    edx = *((ebp - 0x38));
                    eax = *((ebp - 0x34));
                    if (eax == *(edx)) {
                        ecx = *((ebp - 0x38));
                        edx = *((ebp - 0x50));
                        if (edx == *((ecx + 4))) {
                            goto label_23;
                        }
                    }
                    eax = 0xffffffef;
                    goto label_5;
label_23:
                    eax = *((ebp - 0x38));
                    eax += 0x14;
                    *((ebp - 0x38)) = eax;
                    goto label_4;
label_7:
                    eax = 0;
                }
            }
        }
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41edd0 */
#include <stdint.h>
 
int32_t fcn_0041edd0 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0xc));
    *((ebp - 8)) = eax;
    ecx = *((ebp + 8));
    *((ebp - 4)) = ecx;
    do {
        edx = *((ebp - 8));
        eax = *((ebp - 8));
        eax--;
        *((ebp - 8)) = eax;
        if (edx == 0) {
            goto label_0;
        }
        ecx = *((ebp - 4));
        edx = *(ecx);
        if (edx == 0) {
            goto label_0;
        }
        eax = *((ebp - 4));
        eax++;
        *((ebp - 4)) = eax;
    } while (1);
label_0:
    eax = *((ebp + 0xc));
    eax -= *((ebp - 8));
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411578 */
#include <stdint.h>
 
int32_t fcn_00411578 (LCID Locale) {
    LPSTR lpLCData;
    int32_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x428eb0);
    *((ebp - 8)) = eax;
    *((ebp - 0xa)) = 0;
    ecx = *((ebp + 8));
    eax = GetLocaleInfoA (ecx, 0x1004, ebp - 0x10, 6);
    if (eax == 0) {
        *((ebp - 4)) = 0xffffffff;
    } else {
        eax = fcn_0041157d (ebp - 0x10);
        *((ebp - 4)) = eax;
    }
    eax = *((ebp - 4));
    ecx = *((ebp - 8));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411253 */
#include <stdint.h>
 
int32_t fcn_00411253 (void) {
    int32_t var_58h;
    int32_t var_4ch;
    LPCPINFO var_48h_2;
    LPCPINFO lpCPInfo;
    LPWSTR lpWideCharStr;
    int32_t var_34h_2;
    uint32_t cchWideChar;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t cbMultiByte;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_4h_2;
    int32_t var_4h;
    UINT CodePage;
    UINT var_ch_2;
    UINT lpMultiByteStr;
    uint32_t var_ch;
    uint32_t var_18h_2;
    int32_t var_14h;
    int32_t var_34h;
    eax = *(fs:0);
    *(fs:0) = esp;
    eax = *(0x428eb0);
    *((ebp - 0x34)) = eax;
    *((ebp - 0x18)) = esp;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x2c)) = 0;
    eax = *((ebp + 0x14));
    ecx = *(eax);
    *((ebp - 0x1c)) = ecx;
    *((ebp - 0x24)) = 0;
    edx = *((ebp + 8));
    if (edx != *((ebp + 0xc))) {
        ecx = *((ebp + 8));
        eax = GetCPInfo (ecx, ebp - 0x48);
        if (eax != 0) {
            if (*((ebp - 0x48)) != 1) {
                goto label_0;
            }
            eax = *((ebp + 0xc));
            eax = GetCPInfo (eax, ebp - 0x48);
            if (eax == 0) {
                goto label_0;
            }
            if (*((ebp - 0x48)) != 1) {
                goto label_0;
            }
            *((ebp - 0x24)) = 1;
        }
label_0:
        if (*((ebp - 0x24)) != 0) {
            if (*((ebp - 0x1c)) != -1) {
                ecx = *((ebp - 0x1c));
                *((ebp - 0x28)) = ecx;
            } else {
                edx = *((ebp + 0x10));
                eax = fcn_00411235 (edx);
                eax++;
                *((ebp - 0x28)) = eax;
            }
        }
        if (*((ebp - 0x24)) == 0) {
            eax = *((ebp - 0x1c));
            ecx = *((ebp + 0x10));
            edx = *((ebp + 8));
            eax = MultiByteToWideChar (edx, 1, ecx, eax, 0, 0);
            *((ebp - 0x28)) = eax;
            if (*((ebp - 0x28)) != 0) {
                goto label_1;
            }
            eax = 0;
            goto label_2;
        }
label_1:
        *((ebp - 4)) = 0;
        eax = *((ebp - 0x28));
        eax <<= 1;
        eax += 3;
        eax &= 0xfffffffc;
        fcn_00414c20 ();
        *((ebp - 0x4c)) = esp;
        *((ebp - 0x18)) = esp;
        eax = *((ebp - 0x4c));
        *((ebp - 0x30)) = eax;
        ecx = *((ebp - 0x28));
        ecx <<= 1;
        edx = *((ebp - 0x30));
        fcn_00411195 (edx, 0, ecx);
        *((ebp - 4)) = 0xffffffff;
        if (*((ebp - 0x30)) == 0) {
            eax = *((ebp - 0x28));
            eax = fcn_00411564 (2, eax, 2, "convrtcp.c", 0x7e);
            *((ebp - 0x30)) = eax;
            if (*((ebp - 0x30)) == 0) {
                eax = 0;
                goto label_2;
            }
            ecx = *((ebp - 0x2c));
            ecx++;
            *((ebp - 0x2c)) = ecx;
        }
        edx = *((ebp - 0x28));
        eax = *((ebp - 0x30));
        ecx = *((ebp - 0x1c));
        edx = *((ebp + 0x10));
        eax = *((ebp + 8));
        eax = MultiByteToWideChar (eax, 1, edx, ecx, eax, edx);
        if (eax == 0) {
            goto label_3;
        }
        if (*((ebp + 0x18)) != 0) {
            ecx = *((ebp + 0x1c));
            edx = *((ebp + 0x18));
            eax = *((ebp - 0x28));
            ecx = *((ebp - 0x30));
            edx = *((ebp + 0xc));
            eax = WideCharToMultiByte (edx, 0, ecx, eax, edx, ecx, 0, 0);
            if (eax != 0) {
                eax = *((ebp + 0x18));
                *((ebp - 0x20)) = eax;
            }
        } else {
            if (*((ebp - 0x24)) == 0) {
                ecx = *((ebp - 0x28));
                edx = *((ebp - 0x30));
                eax = *((ebp + 0xc));
                eax = WideCharToMultiByte (eax, 0, edx, ecx, 0, 0, 0, 0);
                *((ebp - 0x28)) = eax;
                if (*((ebp - 0x28)) == 0) {
                    goto label_3;
                }
            }
            ecx = *((ebp - 0x28));
            eax = fcn_00411564 (1, ecx, 2, "convrtcp.c", 0xa1);
            *((ebp - 0x20)) = eax;
            if (*((ebp - 0x20)) == 0) {
                goto label_3;
            }
            edx = *((ebp - 0x28));
            eax = *((ebp - 0x20));
            ecx = *((ebp - 0x28));
            edx = *((ebp - 0x30));
            eax = *((ebp + 0xc));
            eax = WideCharToMultiByte (eax, 0, edx, ecx, eax, edx, 0, 0);
            *((ebp - 0x28)) = eax;
            if (*((ebp - 0x28)) == 0) {
                ecx = *((ebp - 0x20));
                fcn_0041141a (ecx, 2);
                *((ebp - 0x20)) = 0;
            } else {
                if (*((ebp - 0x1c)) == -1) {
                    goto label_3;
                }
                edx = *((ebp + 0x14));
                eax = *((ebp - 0x28));
                *(edx) = eax;
            }
        }
    }
label_3:
    if (*((ebp - 0x2c)) != 0) {
        ecx = *((ebp - 0x30));
        fcn_0041141a (ecx, 2);
    }
    eax = *((ebp - 0x20));
label_2:
    esp = ebp - 0x58;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    ecx = *((ebp - 0x34));
    fcn_00411087 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411325 */
#include <stdint.h>
 
int32_t fcn_00411325 (void) {
    int32_t var_64h;
    int32_t var_60h;
    LPCVOID var_5ch;
    PMEMORY_BASIC_INFORMATION lpBuffer;
    int32_t var_54h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    LPSYSTEM_INFO lpSystemInfo;
    int32_t var_38h;
    SIZE_T dwSize;
    int32_t var_14h;
    LPCVOID lpAddress;
    PDWORD lpflOldProtect;
    uint32_t var_8h;
    DWORD flNewProtect;
    eax = 4;
    fcn_00414c20 (ebp);
    *((ebp - 0x64)) = esp;
    eax = *((ebp - 0x64));
    *((ebp - 0x10)) = eax;
    edx = *((ebp - 0x10));
    eax = VirtualQuery (edx, ebp - 0x58, 0x1c);
    if (eax == 0) {
        eax = 0;
        goto label_0;
    }
    eax = *((ebp - 0x54));
    *((ebp - 0x60)) = eax;
    GetSystemInfo (ebp - 0x3c);
    edx = *((ebp - 0x38));
    *((ebp - 0x18)) = edx;
    eax = *((ebp - 0x18));
    eax--;
    eax = ~eax;
    eax &= *((ebp - 0x10));
    eax -= *((ebp - 0x18));
    *((ebp - 0x14)) = eax;
    ecx = *(0x429638);
    ecx--;
    ecx = -ecx;
    ecx -= ecx;
    ecx &= 0xfffffff1;
    ecx += 0x11;
    ecx *= *((ebp - 0x18));
    ecx += *((ebp - 0x60));
    *((ebp - 8)) = ecx;
    edx = *((ebp - 0x14));
    if (edx < *((ebp - 8))) {
        eax = 0;
        goto label_0;
    }
    if (*(0x429638) == 1) {
        goto label_1;
    }
    eax = *((ebp - 0x60));
    *((ebp - 0x5c)) = eax;
    do {
        edx = *((ebp - 0x5c));
        eax = VirtualQuery (edx, ebp - 0x58, 0x1c);
        if (eax == 0) {
            eax = 0;
            goto label_0;
        }
        eax = *((ebp - 0x5c));
        eax += *((ebp - 0x4c));
        *((ebp - 0x5c)) = eax;
        ecx = *((ebp - 0x48));
        ecx &= 0x1000;
    } while (ecx == 0);
    edx = *((ebp - 0x58));
    *((ebp - 0x5c)) = edx;
    eax = *((ebp - 0x44));
    eax &= 0x100;
    if (eax != 0) {
        eax = 1;
    } else {
        ecx = *((ebp - 0x14));
        if (ecx < *((ebp - 0x5c))) {
            eax = 0;
        } else {
            edx = *((ebp - 0x5c));
            if (edx < *((ebp - 8))) {
                eax = *((ebp - 8));
                *((ebp - 0x5c)) = eax;
            }
            ecx = *((ebp - 0x18));
            edx = *((ebp - 0x5c));
            VirtualAlloc (edx, ecx, 0x1000, 4);
            goto label_2;
label_1:
            eax = *((ebp - 0x14));
            *((ebp - 0x5c)) = eax;
label_2:
            ecx = *(0x429638);
            ecx--;
            ecx = -ecx;
            ecx -= ecx;
            ecx &= 0x103;
            ecx++;
            *((ebp - 4)) = ecx;
            eax = *((ebp - 4));
            ecx = *((ebp - 0x18));
            edx = *((ebp - 0x5c));
            VirtualProtect (edx, ecx, eax, ebp - 0xc);
        }
    }
label_0:
    esp = ebp - 0x64;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411028 */
#include <stdint.h>
 
void fcn_00411028 (int32_t arg_8h) {
    int32_t var_4h;
    return void (*0x41f8f0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41f8f0 */
#include <stdint.h>
 
int32_t loc_0041f8f0 (int32_t arg_8h) {
    int32_t var_4h;
    eax = *(0x42992c);
    *((ebp - 4)) = eax;
    ecx = *((ebp + 8));
    *(0x42992c) = ecx;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x420ec0 */
#include <stdint.h>
 
int32_t fcn_00420ec0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    uint32_t var_4h;
    eax = *((ebp + 0xc));
    ecx = *((eax + 0xc));
    ecx &= 0x40;
    if (ecx != 0) {
        edx = *((ebp + 0xc));
        if (*((edx + 8)) == 0) {
            eax = *((ebp + 0x10));
            ecx = *(eax);
            ecx++;
            edx = *((ebp + 0x10));
            *(edx) = ecx;
        }
    } else {
        eax = *((ebp + 0xc));
        ecx = *((eax + 4));
        ecx--;
        edx = *((ebp + 0xc));
        *((edx + 4)) = ecx;
        eax = *((ebp + 0xc));
        if (*((eax + 4)) >= 0) {
            ecx = *((ebp + 0xc));
            edx = *(ecx);
            al = *((ebp + 8));
            *(edx) = al;
            ecx = *((ebp + 8));
            ecx &= 0xff;
            *((ebp - 4)) = ecx;
            edx = *((ebp + 0xc));
            eax = *(edx);
            eax++;
            ecx = *((ebp + 0xc));
            *(ecx) = eax;
        } else {
            edx = *((ebp + 0xc));
            eax = *((ebp + 8));
            eax = fcn_004114ab (eax, edx);
            *((ebp - 4)) = eax;
        }
        if (*((ebp - 4)) == -1) {
            ecx = *((ebp + 0x10));
            *(ecx) = 0xffffffff;
        } else {
            edx = *((ebp + 0x10));
            eax = *(edx);
            eax++;
            ecx = *((ebp + 0x10));
            *(ecx) = eax;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x421070 */
#include <stdint.h>
 
int32_t fcn_00421070 (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = *(eax);
    ecx += 4;
    edx = *((ebp + 8));
    *(edx) = ecx;
    eax = *((ebp + 8));
    ecx = *(eax);
    eax = *((ecx - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4210c0 */
#include <stdint.h>
 
int32_t fcn_004210c0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = *(eax);
    ecx += 4;
    edx = *((ebp + 8));
    *(edx) = ecx;
    eax = *((ebp + 8));
    ecx = *(eax);
    ax = *((ecx - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411262 */
#include <stdint.h>
 
int32_t fcn_00411262 (uint32_t arg_8h, uint32_t arg_ch) {
    uint32_t var_8h;
    uint32_t var_4h;
    if (*((ebp + 8)) == 0) {
        eax = 0;
    } else {
        if (*(0x429904) == 0) {
            eax = *((ebp + 0xc));
            if (eax > 0xff) {
                *(0x42962c) = 0x2a;
                eax |= 0xffffffff;
            } else {
                ecx = *((ebp + 8));
            }
            dl = *((ebp + 0xc));
            *(ecx) = dl;
            eax = 1;
        } else {
            *((ebp - 4)) = 0;
            ecx = *(0x428ec4);
            edx = *((ebp + 8));
            ecx = *(0x429914);
            eax = WideCharToMultiByte (ecx, 0, ebp + 0xc, 1, edx, ecx, 0, ebp - 4);
            *((ebp - 8)) = eax;
            if (*((ebp - 8)) != 0) {
                if (*((ebp - 4)) == 0) {
                    goto label_0;
                }
            }
            *(0x42962c) = 0x2a;
            eax |= 0xffffffff;
            goto label_1;
label_0:
            eax = *((ebp - 8));
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x421090 */
#include <stdint.h>
 
int32_t fcn_00421090 (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = *(eax);
    ecx += 8;
    edx = *((ebp + 8));
    *(edx) = ecx;
    eax = *((ebp + 8));
    ecx = *(eax);
    eax = *((ecx - 8));
    edx = *((ecx - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x420f90 */
#include <stdint.h>
 
int32_t fcn_00420f90 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    do {
        eax = *((ebp + 0xc));
        ecx = *((ebp + 0xc));
        ecx--;
        *((ebp + 0xc)) = ecx;
        if (eax <= 0) {
            goto label_0;
        }
        edx = *((ebp + 0x14));
        eax = *((ebp + 0x10));
        cl = *((ebp + 8));
        fcn_00420ec0 (ecx, eax, edx);
        edx = *((ebp + 0x14));
        if (*(edx) == -1) {
        } else {
        }
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x420fe0 */
#include <stdint.h>
 
int32_t fcn_00420fe0 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_1h;
    eax = *((ebp + 0x10));
    ecx = *((eax + 0xc));
    ecx &= 0x40;
    if (ecx == 0) {
        goto label_0;
    }
    edx = *((ebp + 0x10));
    if (*((edx + 8)) != 0) {
        goto label_0;
    }
    eax = *((ebp + 0x14));
    ecx = *(eax);
    ecx += *((ebp + 0xc));
    edx = *((ebp + 0x14));
    *(edx) = ecx;
    goto label_1;
    do {
label_0:
        eax = *((ebp + 0xc));
        ecx = *((ebp + 0xc));
        ecx--;
        *((ebp + 0xc)) = ecx;
        if (eax <= 0) {
            goto label_1;
        }
        edx = *((ebp + 8));
        al = *(edx);
        *((ebp - 1)) = al;
        ecx = *((ebp + 0x14));
        edx = *((ebp + 0x10));
        al = *((ebp - 1));
        fcn_00420ec0 (eax, edx, ecx);
        ecx = *((ebp + 8));
        ecx++;
        *((ebp + 8)) = ecx;
        edx = *((ebp + 0x14));
        if (*(edx) == -1) {
        } else {
        }
    } while (1);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41157d */
#include <stdint.h>
 
int32_t fcn_0041157d (LPSTR arg_8h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    do {
        eax = *((ebp + 8));
        ecx = *(eax);
        eax = fcn_00411118 (ecx);
        if (eax == 0) {
            goto label_0;
        }
        edx = *((ebp + 8));
        edx++;
        *((ebp + 8)) = edx;
    } while (1);
label_0:
    eax = *((ebp + 8));
    ecx = *(eax);
    *((ebp - 0xc)) = ecx;
    edx = *((ebp + 8));
    edx++;
    *((ebp + 8)) = edx;
    eax = *((ebp - 0xc));
    *((ebp - 4)) = eax;
    if (*((ebp - 0xc)) != 0x2d) {
        if (*((ebp - 0xc)) != 0x2b) {
            goto label_1;
        }
    }
    ecx = *((ebp + 8));
    edx = *(ecx);
    *((ebp - 0xc)) = edx;
    eax = *((ebp + 8));
    eax++;
    *((ebp + 8)) = eax;
label_1:
    *((ebp - 8)) = 0;
    do {
        if (*((ebp - 0xc)) >= 0x30) {
            if (*((ebp - 0xc)) <= 0x39) {
                ecx = *((ebp - 0xc));
                ecx -= 0x30;
                *((ebp - 0x10)) = ecx;
            }
        } else {
            *((ebp - 0x10)) = 0xffffffff;
        }
        edx = *((ebp - 0x10));
        *((ebp - 0xc)) = edx;
        if (*((ebp - 0xc)) == -1) {
            goto label_2;
        }
        eax = *((ebp - 8));
        eax *= 0xa;
        eax += *((ebp - 0xc));
        *((ebp - 8)) = eax;
        ecx = *((ebp + 8));
        edx = *(ecx);
        *((ebp - 0xc)) = edx;
        eax = *((ebp + 8));
        eax++;
        *((ebp + 8)) = eax;
    } while (1);
label_2:
    if (*((ebp - 4)) == 0x2d) {
        eax = *((ebp - 8));
        eax = -eax;
    } else {
        eax = *((ebp - 8));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411375 */
#include <stdint.h>
 
int32_t fcn_00411375 (uint32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            edx = *((ebp + 8));
            edx >>= 5;
            eax = *((ebp + 8));
            eax &= 0x1f;
            ecx = *((edx*4 + 0x42afe0));
            eax = *((ecx + eax*8));
        }
    } else {
        *(0x42962c) = 9;
        *(0x429630) = 0;
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411113 */
#include <stdint.h>
 
int32_t fcn_00411113 (DWORD arg_8h) {
    uint32_t var_4h;
    eax = *((ebp + 8));
    *(0x429630) = eax;
    *((ebp - 4)) = 0;
    while (1) {
        ecx = *((ebp - 4));
        ecx++;
        *((ebp - 4)) = ecx;
        if (*((ebp - 4)) >= 0x2d) {
            goto label_0;
        }
        edx = *((ebp - 4));
        eax = *((ebp + 8));
        if (eax == *((edx*8 + 0x429220))) {
            ecx = *((ebp - 4));
            edx = *((ecx*8 + 0x429224));
            *(0x42962c) = edx;
            goto label_1;
        }
    }
label_0:
    if (*((ebp + 8)) >= 0x13) {
        if (*((ebp + 8)) <= 0x24) {
            *(0x42962c) = 0xd;
        }
    } else {
        if (*((ebp + 8)) >= 0xbc) {
            if (*((ebp + 8)) <= 0xca) {
                *(0x42962c) = 8;
            }
        } else {
            *(0x42962c) = 0x16;
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4112fd */
#include <stdint.h>
 
int32_t fcn_004112fd (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, DWORD dwMoveMethod) {
    DWORD var_10h;
    HANDLE hFile;
    LONG lDistanceToMove;
    PLONG lpDistanceToMoveHigh;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            goto label_0;
        }
    }
    *(0x42962c) = 9;
    *(0x429630) = 0;
    eax |= 0xffffffff;
    edx |= 0xffffffff;
    goto label_1;
label_0:
    edx = *((ebp + 0xc));
    *((ebp - 8)) = edx;
    eax = *((ebp + 0x10));
    *((ebp - 4)) = eax;
    ecx = *((ebp + 8));
    eax = fcn_00411375 (ecx);
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) == -1) {
        *(0x42962c) = 9;
        eax |= 0xffffffff;
        edx |= 0xffffffff;
    } else {
        edx = *((ebp + 0x14));
        ecx = *((ebp - 8));
        edx = *((ebp - 0xc));
        eax = SetFilePointer (edx, ecx, ebp - 4, edx);
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) == -1) {
            eax = GetLastError ();
            *((ebp - 0x10)) = eax;
            if (*((ebp - 0x10)) != 0) {
                eax = *((ebp - 0x10));
                eax = fcn_00411113 (eax);
                eax |= 0xffffffff;
                edx |= 0xffffffff;
            }
        } else {
            ecx = *((ebp + 8));
            ecx >>= 5;
            edx = *((ebp + 8));
            edx &= 0x1f;
            eax = *((ecx*4 + 0x42afe0));
            ecx = *((eax + edx*8 + 4));
            ecx &= 0xfffffffd;
            edx = *((ebp + 8));
            edx >>= 5;
            eax = *((ebp + 8));
            eax &= 0x1f;
            edx = *((edx*4 + 0x42afe0));
            *((edx + eax*8 + 4)) = cl;
            eax = *((ebp - 8));
            edx = *((ebp - 4));
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41121c */
#include <stdint.h>
 
void fcn_0041121c (void) {
    return void (*0x422a80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x422a80 */
#include <stdint.h>
 
void loc_00422a80 (void) {
    fcn_00422aa0 (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x422aa0 */
#include <stdint.h>
 
int32_t fcn_00422aa0 (uint32_t arg_8h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 4)) = 0;
    *((ebp - 0xc)) = 0;
    *((ebp - 8)) = 0;
    while (1) {
        eax = *((ebp - 8));
        eax++;
        *((ebp - 8)) = eax;
        ecx = *((ebp - 8));
        if (ecx >= *(0x42ac80)) {
            goto label_0;
        }
        edx = *((ebp - 8));
        eax = *(0x429934);
        if (*((eax + edx*4)) != 0) {
            ecx = *((ebp - 8));
            edx = *(0x429934);
            eax = *((edx + ecx*4));
            ecx = *((eax + 0xc));
            ecx &= 0x83;
            if (ecx == 0) {
                goto label_1;
            }
            if (*((ebp + 8)) == 1) {
                edx = *((ebp - 8));
                eax = *(0x429934);
                ecx = *((eax + edx*4));
                eax = fcn_00411550 (ecx);
                if (eax != -1) {
                    edx = *((ebp - 4));
                    edx++;
                    *((ebp - 4)) = edx;
                }
            } else {
                if (*((ebp + 8)) != 0) {
                    goto label_1;
                }
                eax = *((ebp - 8));
                ecx = *(0x429934);
                edx = *((ecx + eax*4));
                eax = *((edx + 0xc));
                eax &= 2;
                if (eax == 0) {
                    goto label_1;
                }
                ecx = *((ebp - 8));
                edx = *(0x429934);
                eax = *((edx + ecx*4));
                eax = fcn_00411550 (eax);
                if (eax != -1) {
                    goto label_1;
                }
                *((ebp - 0xc)) = 0xffffffff;
            }
        }
label_1:
    }
label_0:
    if (*((ebp + 8)) == 1) {
        eax = *((ebp - 4));
    } else {
        eax = *((ebp - 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411285 */
#include <stdint.h>
 
int32_t fcn_00411285 (void) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 4)) = 0;
    *((ebp - 8)) = 3;
    while (1) {
        eax = *((ebp - 8));
        eax++;
        *((ebp - 8)) = eax;
        ecx = *((ebp - 8));
        if (ecx >= *(0x42ac80)) {
            goto label_0;
        }
        edx = *((ebp - 8));
        eax = *(0x429934);
        if (*((eax + edx*4)) != 0) {
            ecx = *((ebp - 8));
            edx = *(0x429934);
            eax = *((edx + ecx*4));
            ecx = *((eax + 0xc));
            ecx &= 0x83;
            if (ecx != 0) {
                edx = *((ebp - 8));
                eax = *(0x429934);
                ecx = *((eax + edx*4));
                eax = fcn_00411145 (ecx);
                if (eax == -1) {
                    goto label_1;
                }
                edx = *((ebp - 4));
                edx++;
                *((ebp - 4)) = edx;
            }
label_1:
            if (*((ebp - 8)) < 0x14) {
                goto label_2;
            }
            eax = *((ebp - 8));
            ecx = *(0x429934);
            edx = *((ecx + eax*4));
            fcn_0041141a (edx, 2);
            eax = *((ebp - 8));
            ecx = *(0x429934);
            *((ecx + eax*4)) = 0;
        }
label_2:
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411118 */
#include <stdint.h>
 
int32_t fcn_00411118 (uint32_t arg_8h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_7h;
    int32_t var_4h;
    int32_t var_2h;
    if (*((ebp + 8)) > 0xff) {
        *((ebp - 4)) = 0;
        eax = 0;
        *((ebp - 2)) = ax;
        ecx = *((ebp + 8));
        ecx >>= 8;
        ecx &= 0xff;
        *((ebp - 8)) = cl;
        edx = *((ebp + 8));
        edx &= 0xff;
        *((ebp - 7)) = dl;
        if (*(0x42ad2c) == 0) {
            eax = 0;
        } else {
        }
        eax = *(0x42acb4);
        ecx = *(0x42ae44);
        edx = ebp - 4;
        eax = ebp - 8;
        eax = fcn_004113c0 ();
        if (eax == 0) {
            eax = 0;
        } else {
            ecx = *((ebp - 2));
        }
        if (ecx == 0) {
            edx = *((ebp - 4));
            edx &= 8;
            if (edx != 0) {
                *((ebp - 0xc)) = 1;
            }
        } else {
            *((ebp - 0xc)) = 0;
        }
        eax = *((ebp - 0xc));
    } else {
        if (*(0x428ec4) > 1) {
            eax = *((ebp + 8));
            eax = fcn_0041124e (eax, 8);
            *((ebp - 0x10)) = eax;
        } else {
            ecx = *((ebp + 8));
            eax = fcn_004110c8 (ecx, 8);
            *((ebp - 0x10)) = eax;
        }
        eax = *((ebp - 0x10));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41113b */
#include <stdint.h>
 
void fcn_0041113b (int32_t arg_8h_2, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    return void (*0x422ce0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x422ce0 */
#include <stdint.h>
 
int32_t loc_00422ce0 (int32_t arg_8h_2, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((esp + 8));
    ecx = *((esp + 0x10));
    ecx |= eax;
    ecx = *((esp + 0xc));
    if (ecx == 0) {
        eax = *((esp + 4));
        edx:eax = eax * ecx;
        return eax;
    }
    edx:eax = eax * ecx;
    ebx = eax;
    eax = *((esp + 8));
    edx:eax = eax * *((esp + 0x14));
    ebx += eax;
    eax = *((esp + 8));
    edx:eax = eax * ecx;
    edx += ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41101e */
#include <stdint.h>
 
int32_t fcn_0041101e (void) {
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    *((ebp - 8)) = 0xffffffff;
    *((ebp - 4)) = 0;
    goto label_1;
label_0:
    eax = *((ebp - 4));
    eax++;
    *((ebp - 4)) = eax;
label_1:
    if (*((ebp - 4)) >= 0x40) {
        goto label_2;
    }
    ecx = *((ebp - 4));
    if (*((ecx*4 + 0x42afe0)) == 0) {
        goto label_3;
    }
    edx = *((ebp - 4));
    eax = *((edx*4 + 0x42afe0));
    *((ebp - 0xc)) = eax;
    while (1) {
        ecx = *((ebp - 0xc));
        ecx += 8;
        *((ebp - 0xc)) = ecx;
        edx = *((ebp - 4));
        eax = *((edx*4 + 0x42afe0));
        eax += 0x100;
        if (*((ebp - 0xc)) >= eax) {
            goto label_4;
        }
        ecx = *((ebp - 0xc));
        edx = *((ecx + 4));
        edx &= 1;
        if (edx == 0) {
            eax = *((ebp - 0xc));
            *(eax) = 0xffffffff;
            ecx = *((ebp - 4));
            ecx <<= 5;
            edx = *((ebp - 4));
            eax = *((ebp - 0xc));
            eax -= *((edx*4 + 0x42afe0));
            eax >>= 3;
            ecx += eax;
            *((ebp - 8)) = ecx;
        } else {
        }
    }
label_4:
    if (*((ebp - 8)) != -1) {
        goto label_2;
    }
    goto label_5;
label_3:
    eax = fcn_00411064 (0x100, 2, "osfinfo.c", 0x85);
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) == 0) {
        goto label_6;
    }
    ecx = *((ebp - 4));
    edx = *((ebp - 0xc));
    *((ecx*4 + 0x42afe0)) = edx;
    eax = *(0x42af94);
    eax += 0x20;
    *(0x42af94) = eax;
    while (1) {
        ecx = *((ebp - 0xc));
        ecx += 8;
        *((ebp - 0xc)) = ecx;
        edx = *((ebp - 4));
        eax = *((edx*4 + 0x42afe0));
        eax += 0x100;
        if (*((ebp - 0xc)) >= eax) {
            goto label_7;
        }
        ecx = *((ebp - 0xc));
        *((ecx + 4)) = 0;
        edx = *((ebp - 0xc));
        *(edx) = 0xffffffff;
        eax = *((ebp - 0xc));
        *((eax + 5)) = 0xa;
    }
label_7:
    ecx = *((ebp - 4));
    ecx <<= 5;
    *((ebp - 8)) = ecx;
label_6:
    goto label_2;
label_5:
    goto label_0;
label_2:
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4110a0 */
#include <stdint.h>
 
int32_t fcn_004110a0 (int32_t arg_8h, HANDLE hHandle) {
    uint32_t var_4h;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        if (*((eax + edx*8)) == -1) {
            if (*(0x428b44) == 1) {
                ecx = *((ebp + 8));
                *((ebp - 4)) = ecx;
                if (*((ebp - 4)) != 0) {
                    if (*((ebp - 4)) != 1) {
                        if (*((ebp - 4)) != 2) {
                        } else {
                            edx = *((ebp + 0xc));
                            SetStdHandle (0xfffffffffffffff6, edx);
                        } else {
                            eax = *((ebp + 0xc));
                        }
                        SetStdHandle (0xfffffffffffffff5, eax);
                    } else {
                        ecx = *((ebp + 0xc));
                    }
                    SetStdHandle (0xfffffffffffffff4, ecx);
                }
            }
            edx = *((ebp + 8));
            edx >>= 5;
            eax = *((ebp + 8));
            eax &= 0x1f;
            ecx = *((edx*4 + 0x42afe0));
            edx = *((ebp + 0xc));
            *((ecx + eax*8)) = edx;
            eax = 0;
        }
    } else {
        *(0x42962c) = 9;
        *(0x429630) = 0;
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411145 */
#include <stdint.h>
 
int32_t fcn_00411145 (uint32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 8)) = 0xffffffff;
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    ecx = *((ebp - 4));
    edx = *((ecx + 0xc));
    edx &= 0x40;
    if (edx != 0) {
        eax = *((ebp - 4));
        *((eax + 0xc)) = 0;
        eax |= 0xffffffff;
    } else {
        if (*((ebp + 8)) == 0) {
            eax = fcn_0041119f (2, "fclose.c", 0x71, 0, "str != NULL");
            if (eax != 1) {
                goto label_0;
            }
            __asm ("int3");
        }
label_0:
        edx = *((ebp - 4));
        eax = *((edx + 0xc));
        eax &= 0x83;
        if (eax != 0) {
            ecx = *((ebp - 4));
            eax = fcn_0041152d (ecx);
            *((ebp - 8)) = eax;
            edx = *((ebp - 4));
            fcn_00411244 (edx);
            eax = *((ebp - 4));
            ecx = *((eax + 0x10));
            eax = fcn_0041151e (ecx);
            if (eax < 0) {
                *((ebp - 8)) = 0xffffffff;
            } else {
                edx = *((ebp - 4));
                if (*((edx + 0x1c)) == 0) {
                    goto label_1;
                }
                eax = *((ebp - 4));
                ecx = *((eax + 0x1c));
                fcn_0041141a (ecx, 2);
                edx = *((ebp - 4));
                *((edx + 0x1c)) = 0;
            }
        }
label_1:
        eax = *((ebp - 4));
        *((eax + 0xc)) = 0;
        eax = *((ebp - 8));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41152d */
#include <stdint.h>
 
int32_t fcn_0041152d (uint32_t arg_8h) {
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 4)) = 0;
    eax = *((ebp + 8));
    *((ebp - 0xc)) = eax;
    ecx = *((ebp - 0xc));
    edx = *((ecx + 0xc));
    edx &= 3;
    if (edx == 2) {
        eax = *((ebp - 0xc));
        ecx = *((eax + 0xc));
        ecx &= 0x108;
        if (ecx == 0) {
            goto label_0;
        }
        edx = *((ebp - 0xc));
        eax = *((ebp - 0xc));
        ecx = *(edx);
        ecx -= *((eax + 8));
        *((ebp - 8)) = ecx;
        if (*((ebp - 8)) <= 0) {
            goto label_0;
        }
        edx = *((ebp - 8));
        eax = *((ebp - 0xc));
        ecx = *((eax + 8));
        edx = *((ebp - 0xc));
        eax = *((edx + 0x10));
        eax = fcn_00411154 (eax, ecx, edx);
        if (eax == *((ebp - 8))) {
            ecx = *((ebp - 0xc));
            edx = *((ecx + 0xc));
            edx &= 0x80;
            if (edx != 0) {
                eax = *((ebp - 0xc));
                ecx = *((eax + 0xc));
                ecx &= 0xfffffffd;
                edx = *((ebp - 0xc));
                *((edx + 0xc)) = ecx;
            }
        } else {
            eax = *((ebp - 0xc));
            ecx = *((eax + 0xc));
            ecx |= 0x20;
            edx = *((ebp - 0xc));
            *((edx + 0xc)) = ecx;
            *((ebp - 4)) = 0xffffffff;
        }
    }
label_0:
    eax = *((ebp - 0xc));
    ecx = *((ebp - 0xc));
    edx = *((ecx + 8));
    *(eax) = edx;
    eax = *((ebp - 0xc));
    *((eax + 4)) = 0;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x4112ee */
#include <stdint.h>
 
int32_t fcn_004112ee (int32_t arg_8h) {
    DWORD var_4h;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            goto label_0;
        }
    }
    *(0x42962c) = 9;
    eax |= 0xffffffff;
    goto label_1;
label_0:
    edx = *((ebp + 8));
    eax = fcn_00411375 (edx);
    eax = FlushFileBuffers (eax);
    if (eax == 0) {
        eax = GetLastError ();
        *((ebp - 4)) = eax;
    } else {
        *((ebp - 4)) = 0;
    }
    if (*((ebp - 4)) == 0) {
    } else {
        eax = *((ebp - 4));
        *(0x429630) = eax;
        *(0x42962c) = 9;
        *((ebp - 4)) = 0xffffffff;
    }
    eax = *((ebp - 4));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411550 */
#include <stdint.h>
 
int32_t fcn_00411550 (uint32_t arg_8h) {
    if (*((ebp + 8)) == 0) {
        fcn_00422aa0 (0);
    } else {
        eax = *((ebp + 8));
        eax = fcn_0041152d (eax);
        if (eax != 0) {
            eax |= 0xffffffff;
        } else {
            ecx = *((ebp + 8));
            edx = *((ecx + 0xc));
            edx &= 0x4000;
            if (edx != 0) {
                eax = *((ebp + 8));
                ecx = *((eax + 0x10));
                eax = fcn_004112ee (ecx);
                eax = -eax;
                eax -= eax;
            } else {
                eax = 0;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x411244 */
#include <stdint.h>
 
void fcn_00411244 (int32_t arg_8h) {
    return void (*0x423010)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x423010 */
#include <stdint.h>
 
uint32_t loc_00423010 (uint32_t arg_8h) {
    if (*((ebp + 8)) == 0) {
        eax = fcn_0041119f (2, "_freebuf.c", 0x30, 0, "stream != NULL");
        if (eax != 1) {
            goto label_0;
        }
        __asm ("int3");
    }
label_0:
    ecx = *((ebp + 8));
    edx = *((ecx + 0xc));
    edx &= 0x83;
    if (edx != 0) {
        eax = *((ebp + 8));
        ecx = *((eax + 0xc));
        ecx &= 8;
        if (ecx == 0) {
            goto label_1;
        }
        edx = *((ebp + 8));
        eax = *((edx + 8));
        fcn_0041141a (eax, 2);
        ecx = *((ebp + 8));
        edx = *((ecx + 0xc));
        edx &= 0xfffffbf7;
        eax = *((ebp + 8));
        *((eax + 0xc)) = edx;
        ecx = *((ebp + 8));
        *(ecx) = 0;
        edx = *((ebp + 8));
        *((edx + 8)) = 0;
        eax = *((ebp + 8));
        *((eax + 4)) = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41151e */
#include <stdint.h>
 
int32_t fcn_0041151e (uint32_t arg_8h) {
    DWORD var_4h;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            goto label_0;
        }
    }
    *(0x42962c) = 9;
    *(0x429630) = 0;
    eax |= 0xffffffff;
    goto label_1;
label_0:
    edx = *((ebp + 8));
    eax = fcn_00411375 (edx);
    if (eax != -1) {
        if (*((ebp + 8)) != 1) {
            if (*((ebp + 8)) != 2) {
                goto label_2;
            }
        }
        eax = fcn_00411375 (1);
        esi = eax;
        eax = fcn_00411375 (2);
        if (esi == eax) {
            goto label_3;
        }
label_2:
        eax = *((ebp + 8));
        eax = fcn_00411375 (eax);
        eax = CloseHandle (eax);
        if (eax == 0) {
            goto label_4;
        }
    }
label_3:
    *((ebp - 4)) = 0;
    goto label_5;
label_4:
    eax = GetLastError ();
    *((ebp - 4)) = eax;
label_5:
    ecx = *((ebp + 8));
    fcn_0041102d (ecx);
    edx = *((ebp + 8));
    edx >>= 5;
    eax = *((ebp + 8));
    eax &= 0x1f;
    ecx = *((edx*4 + 0x42afe0));
    *((ecx + eax*8 + 4)) = 0;
    if (*((ebp - 4)) != 0) {
        edx = *((ebp - 4));
        eax = fcn_00411113 (edx);
        eax |= 0xffffffff;
    } else {
        eax = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe @ 0x41102d */
#include <stdint.h>
 
int32_t fcn_0041102d (uint32_t arg_8h) {
    uint32_t var_4h;
    eax = *((ebp + 8));
    if (eax < *(0x42af94)) {
        ecx = *((ebp + 8));
        ecx >>= 5;
        edx = *((ebp + 8));
        edx &= 0x1f;
        eax = *((ecx*4 + 0x42afe0));
        ecx = *((eax + edx*8 + 4));
        ecx &= 1;
        if (ecx != 0) {
            edx = *((ebp + 8));
            edx >>= 5;
            eax = *((ebp + 8));
            eax &= 0x1f;
            ecx = *((edx*4 + 0x42afe0));
            if (*((ecx + eax*8)) == -1) {
                goto label_0;
            }
            if (*(0x428b44) == 1) {
                edx = *((ebp + 8));
                *((ebp - 4)) = edx;
                if (*((ebp - 4)) != 0) {
                    if (*((ebp - 4)) != 1) {
                        if (*((ebp - 4)) != 2) {
                        } else {
                            SetStdHandle (0xfffffffffffffff6, 0);
                        } else {
                        }
                        SetStdHandle (0xfffffffffffffff5, 0);
                    } else {
                    }
                    SetStdHandle (0xfffffffffffffff4, 0);
                }
            }
            eax = *((ebp + 8));
            eax >>= 5;
            ecx = *((ebp + 8));
            ecx &= 0x1f;
            edx = *((eax*4 + 0x42afe0));
            *((edx + ecx*8)) = 0xffffffff;
            eax = 0;
        }
    } else {
label_0:
        *(0x42962c) = 9;
        *(0x429630) = 0;
        eax |= 0xffffffff;
    }
    return eax;
}
