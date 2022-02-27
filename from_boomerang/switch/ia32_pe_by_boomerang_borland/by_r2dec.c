/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_ch;
    int32_t var_8h_2;
    int32_t var_8h;
    /* [00] -r-x section size 36864 named .text */
    eax = *(0x40a10f);
    eax <<= 2;
    *(0x40a113) = eax;
    eax = KERNEL32_DLL_GetModuleHandleA (0, edx);
    edx = eax;
    fcn_00402134 ();
    fcn_004014d0 ();
    fcn_00402138 ();
    fcn_00402d50 (0);
    eax = KERNEL32_DLL_GetModuleHandleA (0, 0x40a0b8);
    *(0x40a117) = eax;
    esi = *((ebp + 8));
    eax = *((esi + 0x10));
    eax &= 1;
    *(0x40bbf4) = eax;
    fcn_00405010 ();
    edx = *((esi + 0x20));
    ecx = *((esi + 0x1c));
    fcn_00405348 (ecx, edx);
    eax = *((esi + 0x28));
    fcn_004033a0 (eax);
    edx = *((esi + 0x44));
    fcn_004033b0 (edx);
    *(0x40ccd4) = 1;
    *(0x40ccd8) = esi;
    ecx = ebp - 8;
    *(0x40ccc0) = ecx;
    fcn_00402f38 ();
    eax = KERNEL32_DLL_GetEnvironmentStrings ();
    *(0x40ccb0) = eax;
    eax = KERNEL32_DLL_GetCommandLineA ();
    *(0x40ccac) = eax;
    eax = *((esi + 0x30));
    edx = *((esi + 0x2c));
    fcn_00406f78 (edx, eax);
    ecx = *((esi + 0x40));
    eax = *((esi + 0x3c));
    edx = *((esi + 0x38));
    ecx = *((esi + 0x34));
    fcn_00406fbc (ecx, edx, eax, ecx);
    eax = fcn_00407a50 ();
    edi = eax;
    if (eax == 0) {
        goto label_2;
    }
    edx = *(edi);
    *((edi + edx*4 + 4)) = 0xffffffff;
    fcn_00407a58 (edi, 0);
    ecx = 0;
    *((ebp - 0xc)) = ecx;
    ebx = edi + 4;
    while (ecx > *((ebp - 0xc))) {
        eax = *(ebx);
        edx = *((eax + 0x14));
        uint32_t (*eax + 0x18)(uint32_t, uint32_t) (0, edx);
        *((ebp - 0xc))++;
        ebx += 4;
        ecx = *(edi);
    }
label_2:
    fcn_00407a58 (0x40ccd4, 0);
    if ((*((esi + 0x10)) & 1) == 0) {
        goto label_3;
    }
    ebx = *(0x40ccac);
    while (al == 0x20) {
label_0:
        ebx++;
        al = *(ebx);
    }
    if (al == 9) {
        goto label_0;
    }
    if (*(ebx) == 0x22) {
        dl = 0x22;
        ebx++;
        goto label_4;
    }
    dl = 0x20;
    while (al != 9) {
        ebx++;
label_4:
        al = *(ebx);
        if (al == 0) {
            goto label_5;
        }
        if (dl == al) {
            goto label_5;
        }
    }
label_5:
    if (*(ebx) != 0x22) {
        goto label_6;
    }
    ebx++;
    while (al == 0x20) {
label_1:
        ebx++;
label_6:
        al = *(ebx);
        if (al == 0) {
            goto label_7;
        }
    }
label_7:
    if (al == 9) {
        goto label_1;
    }
    eax = fcn_00407d1c ();
    eax = KERNEL32_DLL_GetModuleHandleA (0, 0, ebx, eax);
    eax = uint32_t (*esi + 0x18)(uint32_t) (eax);
    fcn_00406f28 (eax);
    goto label_8;
label_3:
    edx = *(0x40cca8);
    ecx = *(0x40cca4);
    eax = *(0x40cca0);
    eax = uint32_t (*esi + 0x18)(uint32_t, uint32_t, uint32_t) (eax, ecx, edx);
    fcn_00406f28 (eax);
label_8:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401059 */
#include <stdint.h>
 
void switch_borland_exe_GetExceptDLLinfo (int32_t arg_8h) {
    return void (*0x402d9c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402d9c */
#include <stdint.h>
 
uint32_t fcn_00402d9c (int32_t arg_8h) {
    ebx = *((ebp + 8));
    eax = fcn_00401140 ();
    eax += 0x1c;
    *(0x40a5cc) = eax;
    *(ebx) = 0x82727349;
    *((ebx + 4)) = 0x40a5b8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401140 */
#include <stdint.h>
 
int32_t fcn_00401140 (void) {
    eax = *(0x40a10f);
    edx = *(fs:0x2c);
    eax = *((edx + eax*4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409978 */
#include <stdint.h>
 
void KERNEL32_DLL_GetModuleHandleA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402134 */
#include <stdint.h>
 
void fcn_00402134 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4014d0 */
#include <stdint.h>
 
void fcn_004014d0 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402138 */
#include <stdint.h>
 
void fcn_00402138 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402d50 */
#include <stdint.h>
 
int32_t fcn_00402d50 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    ebx = *((ebp + 8));
    al = (ebx != 0) ? 1 : 0;
    eax &= 1;
    if (ebx == 0) {
        if (ebx != 0) {
            goto label_0;
        }
        fcn_00402d9c (ebp - 8);
        ebx = *((ebp - 4));
    }
label_0:
    eax = fcn_00401140 ();
    eax += 0;
    fcn_0040213c (eax);
    fcn_00402bd8 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40213c */
#include <stdint.h>
 
int32_t fcn_0040213c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 8));
    eax = *((ebp + 8));
    esi = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edx = *((ebp + 0x10));
    ecx >>= 1;
    ecx >>= 1;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    ecx = edx;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402bd8 */
#include <stdint.h>
 
void fcn_00402bd8 (void) {
    if (*(0x40a57c) == 0) {
        *(0x40a57c) = 0x402c00;
    }
    if (*(0x40a580) == 0) {
        *(0x40a580) = 0x402c50;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40106c */
#include <stdint.h>
 
void fcn_0040106c (void) {
    __asm ("pushal");
    ebx = 0xbcb05000;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40998a */
#include <stdint.h>
 
void KERNEL32_DLL_GetProcessHeap (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099b4 */
#include <stdint.h>
 
void KERNEL32_DLL_HeapAlloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d64 */
#include <stdint.h>
 
int32_t fcn_00407d64 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    KERNEL32_DLL_TlsSetValue (edx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099fc */
#include <stdint.h>
 
void KERNEL32_DLL_TlsSetValue (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d78 */
#include <stdint.h>
 
void fcn_00407d78 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d3c */
#include <stdint.h>
 
void fcn_00407d3c (void) {
    KERNEL32_DLL_TlsAlloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099ea */
#include <stdint.h>
 
void KERNEL32_DLL_TlsAlloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d54 */
#include <stdint.h>
 
int32_t fcn_00407d54 (int32_t arg_8h) {
    eax = *((ebp + 8));
    KERNEL32_DLL_TlsGetValue (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099f6 */
#include <stdint.h>
 
void KERNEL32_DLL_TlsGetValue (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099ba */
#include <stdint.h>
 
void KERNEL32_DLL_HeapFree (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d80 */
#include <stdint.h>
 
void fcn_00407d80 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4010f3 */
#include <stdint.h>
 
uint32_t fcn_004010f3 (void) {
    if (*(0x40a10f) >= 0) {
        eax = fcn_00407d54 (*(0x40a10f));
        eax |= eax;
        if (eax == 0) {
            goto label_0;
        }
        eax = KERNEL32_DLL_GetProcessHeap (8, eax);
        KERNEL32_DLL_HeapFree (eax);
        fcn_00407d80 ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d44 */
#include <stdint.h>
 
int32_t fcn_00407d44 (int32_t arg_8h) {
    eax = *((ebp + 8));
    KERNEL32_DLL_TlsFree (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099f0 */
#include <stdint.h>
 
void KERNEL32_DLL_TlsFree (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4038e4 */
#include <stdint.h>
 
uint32_t fcn_004038e4 (int32_t arg_8h, int32_t arg_ch) {
    edx = *((ebp + 8));
    fcn_00403ad0 (0x4033c4, 0x40a6d0, edx, 0, 0, ebp + 0xc);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403ad0 */
#include <stdint.h>
 
int32_t fcn_00403ad0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_520h;
    int32_t var_4d0h;
    int32_t var_4cch;
    int32_t var_4c8h;
    char * var_4c4h;
    uint32_t var_4c0h;
    int32_t var_4bch;
    int32_t var_4b8h;
    int32_t var_b8h;
    int32_t var_b7h;
    int32_t var_b6h;
    int32_t var_b0h;
    int32_t var_56h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_32h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    int32_t var_1dh;
    uint32_t var_1ch;
    char * var_18h;
    int32_t var_14h;
    int32_t var_10h;
    char * var_9h;
    int32_t var_8h;
    int32_t var_4h;
    eax = 0;
    esi = *((ebp + 0x10));
    *((ebp - 0x4c0)) = eax;
    *((ebp - 0x4c4)) = eax;
    *((ebp - 0x4d0)) = eax;
    edx = *((ebp + 8));
    *((ebp - 0x4cc)) = edx;
    ecx = *((ebp + 0xc));
    *((ebp - 0x4c8)) = ecx;
    if (*((ebp + 0x14)) != 0) {
        eax = ebp + 0x18;
    } else {
        eax = 0;
    }
    *((ebp - 0x4bc)) = eax;
    do {
label_2:
        bl = *(esi);
        esi++;
        if (bl == 0) {
            goto label_3;
        }
        if (bl == 0x25) {
            bl = *(esi);
            if (bl != 0x25) {
                goto label_4;
            }
            esi++;
        }
        eax = 0;
        al = bl;
        if ((*((eax + 0x40ca55)) & 4) != 0) {
            if (*(esi) == 0) {
                goto label_5;
            }
            fcn_00403a68 (ebx, ebp - 0x520);
            bl = *(esi);
            esi++;
        }
label_5:
        eax = fcn_00403a68 (ebx, ebp - 0x520);
    } while (1);
label_4:
    edx = esi - 1;
    eax = 0;
    *((ebp - 0x14)) = edx;
    edx = 0;
    *((ebp - 0x10)) = edx;
    edx |= 0xffffffff;
    *((ebp - 9)) = 0;
    *((ebp - 8)) = edx;
    *((ebp - 4)) = edx;
    ecx = 0;
    edi = 0x20;
    *((ebp - 0x1c)) = ecx;
    do {
label_0:
        bl = *(esi);
        esi++;
        if (bl < 0x20) {
            goto label_6;
        }
        edx = (int32_t) bl;
        if (edx > 0x7f) {
            goto label_6;
        }
        ecx = ebx;
        cl += 0xe0;
        edx = 0;
        dl = cl;
        ecx = 0;
        cl = *((edx + 0x40b1fa));
    } while (ecx > 0x1a);
    /* switch table (27 cases) at 0x403bc0 */
    if (eax > 0) {
        goto label_6;
    }
    edi |= 1;
    goto label_0;
    if (eax > 0) {
        goto label_6;
    }
    edi |= 2;
    goto label_0;
    if (eax > 0) {
        goto label_6;
    }
    if (*((ebp - 9)) == 0x2b) {
        goto label_0;
    }
    *((ebp - 9)) = bl;
    goto label_0;
    edi &= 0xffffffdf;
    eax = 5;
    goto label_0;
    edi |= 0x20;
    eax = 5;
    goto label_0;
    if (eax > 0) {
        goto label_7;
    }
    if ((edi & 2) != 0) {
        goto label_0;
    }
    edi |= 8;
    eax = 1;
    goto label_0;
    *((ebp + 0x1c)) += 4;
    edx = *((ebp + 0x1c));
    ecx = *((edx - 4));
    *((ebp - 0x30)) = ecx;
    if (eax < 2) {
        if (*((ebp - 0x30)) < 0) {
            eax = *((ebp - 0x30));
            eax = -eax;
            *((ebp - 4)) = eax;
            edi |= 2;
        } else {
            edx = *((ebp - 0x30));
            *((ebp - 4)) = edx;
        }
        eax = 3;
        goto label_0;
    }
    if (eax != 4) {
        goto label_6;
    }
    edx = *((ebp - 0x30));
    eax++;
    *((ebp - 8)) = edx;
    goto label_0;
    if (eax >= 4) {
        goto label_6;
    }
    eax = 4;
    *((ebp - 8))++;
    goto label_0;
label_7:
    bl += 0xd0;
    if (eax <= 2) {
        eax = 2;
        if (*((ebp - 4)) == -1) {
            edx = (int32_t) bl;
            *((ebp - 4)) = edx;
            goto label_0;
        }
        ecx = *((ebp - 4));
        ecx += ecx;
        ecx *= 5;
        edx = (int32_t) bl;
        ecx += edx;
        *((ebp - 4)) = ecx;
        goto label_0;
    }
    if (eax != 4) {
        goto label_6;
    }
    ecx = *((ebp - 8));
    ecx += ecx;
    ecx *= 5;
    edx = (int32_t) bl;
    ecx += edx;
    *((ebp - 8)) = ecx;
    goto label_0;
    edi |= 0x10;
    eax = 5;
    goto label_0;
    edi |= 0x100;
    eax = 5;
    edi &= 0xffffffef;
    goto label_0;
    edi |= 0x200;
    eax = 5;
    edi &= 0xffffffef;
    goto label_0;
    if (*(esi) == 0x36) {
        if (*((esi + 1)) != 0x34) {
            goto label_8;
        }
        esi += 2;
        edi |= 0x100;
        edi &= 0xfffffdef;
        eax = 5;
        goto label_0;
    }
label_8:
    if (*(esi) == 0x33) {
        if (*((esi + 1)) != 0x32) {
            goto label_9;
        }
        esi += 2;
        edi |= 0x10;
        edi &= 0xfffffcff;
        eax = 5;
        goto label_0;
    }
label_9:
    if (*(esi) == 0x31) {
        if (*((esi + 1)) != 0x36) {
            goto label_10;
        }
        esi += 2;
        edi |= 0x200;
        edi &= 0xfffffeef;
        eax = 5;
        goto label_0;
    }
label_10:
    if (*(esi) != 0x38) {
        goto label_0;
    }
    esi++;
    edi &= 0xfffffcef;
    eax = 5;
    goto label_0;
    *((ebp - 0x38)) = 8;
    goto label_11;
    *((ebp - 0x38)) = 0xa;
    goto label_11;
    *((ebp - 0x38)) = 0x10;
    edx = ebx - 0x17;
    *((ebp - 0x1d)) = dl;
label_11:
    *((ebp - 9)) = 0;
    ecx = 0;
    goto label_12;
    *((ebp - 0x38)) = 0xa;
    cl = 1;
label_12:
    if ((edi & 0x100) != 0) {
        *((ebp + 0x1c)) += 8;
        eax = *((ebp + 0x1c));
        edx = *((eax - 8));
        *((ebp - 0x28)) = edx;
        edx = *((eax - 4));
        *((ebp - 0x24)) = edx;
    } else {
        if ((edi & 0x10) != 0) {
            *((ebp + 0x1c)) += 4;
            eax = *((ebp + 0x1c));
            edx = *((eax - 4));
            *((ebp - 0x2c)) = edx;
            if (cl != 0) {
                eax = *((ebp - 0x2c));
                edx:eax = (int64_t) eax;
                *((ebp - 0x28)) = eax;
                *((ebp - 0x24)) = edx;
            } else {
                eax = *((ebp - 0x2c));
            }
            edx = 0;
            *((ebp - 0x28)) = eax;
            *((ebp - 0x24)) = edx;
        } else {
            if ((edi & 0x200) != 0) {
                *((ebp + 0x1c)) += 4;
                eax = *((ebp + 0x1c));
                dx = *((eax - 4));
                *((ebp - 0x32)) = dx;
                if (cl != 0) {
                    eax = *((ebp - 0x32));
                    edx:eax = (int64_t) eax;
                    *((ebp - 0x28)) = eax;
                    *((ebp - 0x24)) = edx;
                } else {
                    eax = *((ebp - 0x32));
                }
                edx = 0;
                *((ebp - 0x28)) = eax;
                *((ebp - 0x24)) = edx;
            } else {
                *((ebp + 0x1c)) += 4;
                eax = *((ebp + 0x1c));
                edx = *((eax - 4));
                *((ebp - 0x30)) = edx;
                if (cl != 0) {
                    eax = *((ebp - 0x30));
                    edx:eax = (int64_t) eax;
                    *((ebp - 0x28)) = eax;
                    *((ebp - 0x24)) = edx;
                } else {
                    eax = *((ebp - 0x30));
                    edx = 0;
                    *((ebp - 0x28)) = eax;
                    *((ebp - 0x24)) = edx;
                }
            }
        }
    }
    eax = ebp - 0xb7;
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x24)) == 0) {
        if (*((ebp - 0x28)) == 0) {
            if (*((ebp - 8)) != 0) {
                goto label_13;
            }
            edx = *((ebp - 0x18));
            *(edx) = 0;
        }
    } else {
        edi |= 4;
label_13:
        al = *((ebp - 0x1d));
        edx = *((ebp - 0x38));
        ecx = *((ebp - 0x18));
        fcn_00405090 (*((ebp - 0x28)), *((ebp - 0x24)), ecx, edx, ecx, eax);
    }
    if (*((ebp - 8)) < 0) {
        goto label_14;
    }
    edx = *((ebp - 0x18));
    eax = fcn_00402250 (edx);
    *((ebp - 0x3c)) = eax;
    *((ebp - 0x40)) = eax;
    edx = *((ebp - 0x18));
    if (*(edx) == 0x2d) {
        *((ebp - 0x3c))--;
    } else {
        if (*((ebp - 9)) == 0) {
            goto label_15;
        }
        *((ebp - 0x40))++;
        *((ebp - 0x18))--;
        ecx = *((ebp - 0x18));
        al = *((ebp - 9));
        *(ecx) = al;
    }
label_15:
    edx = *((ebp - 8));
    if (edx <= *((ebp - 0x3c))) {
        goto label_16;
    }
    ecx = *((ebp - 8));
    ecx -= *((ebp - 0x3c));
    *((ebp - 0x10)) = ecx;
    goto label_16;
    *((ebp + 0x1c)) += 4;
    eax = *((ebp + 0x1c));
    ecx = ebp - 0xb8;
    edx = *((eax - 4));
    *((ebp - 0x18)) = edx;
    eax = *((ebp - 0x18));
    fcn_00403a9c (eax, ecx);
    *((ebp - 0xb0)) = 0;
    edi &= 0xfffffffb;
    edx = ebp - 0xb8;
    *((ebp - 0x18)) = edx;
    goto label_14;
    if ((edi & 0x210) == 0) {
        edi |= 0x10;
    }
    if ((edi & 0x10) != 0) {
        *((ebp + 0x1c)) += 4;
        ecx = *((ebp + 0x1c));
        edx = ebp - 0xb8;
        ax = *((ecx - 4));
        *((ebp - 0xb8)) = ax;
        *((ebp - 0xb6)) = 0;
        *((ebp - 0x1c)) = 1;
        *((ebp - 0x18)) = edx;
        *((ebp - 0x40)) = 1;
        goto label_16;
    }
    *((ebp + 0x1c)) += 4;
    ecx = *((ebp + 0x1c));
    edx = ebp - 0xb8;
    al = *((ecx - 4));
    ecx = 0;
    *((ebp - 0xb8)) = al;
    *((ebp - 0xb7)) = 0;
    *((ebp - 0x18)) = edx;
    *((ebp - 0x1c)) = ecx;
    *((ebp - 0x40)) = 1;
    goto label_16;
    if ((edi & 0x210) == 0) {
        edi |= 0x10;
    }
    if ((edi & 0x10) != 0) {
        *((ebp + 0x1c)) += 4;
        eax = *((ebp + 0x1c));
        edx = *((eax - 4));
        *((ebp - 0x18)) = edx;
        *((ebp - 0x1c)) = 1;
        if (*((ebp - 0x18)) != 0) {
            goto label_17;
        }
        *((ebp - 0x18)) = "(null)";
    } else {
        *((ebp + 0x1c)) += 4;
        ecx = *((ebp + 0x1c));
        edx = 0;
        eax = *((ecx - 4));
        *((ebp - 0x18)) = eax;
        *((ebp - 0x1c)) = edx;
        if (*((ebp - 0x18)) != 0) {
            goto label_17;
        }
        *((ebp - 0x18)) = "(null)";
    }
label_17:
    if (*((ebp - 0x1c)) == 0) {
        goto label_18;
    }
    if (*((ebp - 8)) >= 0) {
        eax = *((ebp - 8));
    } else {
        eax = 0x7fffffff;
    }
    edx = *((ebp - 0x18));
    ecx = 0;
    *((ebp - 0x40)) = ecx;
    while (*(edx) != 0) {
        eax--;
        *((ebp - 0x40))++;
        edx += 2;
        if (eax == 0) {
            goto label_16;
        }
    }
    goto label_16;
label_18:
    if (*((ebp - 8)) >= 0) {
        eax = *((ebp - 8));
    } else {
        eax = 0x7fffffff;
    }
    edx = *((ebp - 0x18));
    ecx = 0;
    *((ebp - 0x40)) = ecx;
    while (*(edx) != 0) {
        eax--;
        *((ebp - 0x40))++;
        edx++;
        if (eax == 0) {
            goto label_16;
        }
    }
    goto label_16;
    if ((edi & 0x100) != 0) {
        eax = 8;
    } else {
        eax = 6;
    }
    edx = edi;
    dl &= 1;
    ecx = ebp - 0xb7;
    *((ebp - 0x18)) = ecx;
    if (*((ebp - 8)) < 0) {
        eax = 6;
    } else {
        eax = *((ebp - 8));
    }
    edx = *((ebp + 0x1c));
    fcn_00404fc8 ();
    ecx = edi;
    ecx &= 0x100;
    eax = *((ebp + 0x1c));
    eax = fcn_00404fce ();
    *((ebp + 0x1c)) = eax;
label_14:
    if ((edi & 8) != 0) {
        if (*((ebp - 4)) <= 0) {
            goto label_19;
        }
        edx = *((ebp - 0x18));
        eax = fcn_00402250 (edx);
        *((ebp - 0x40)) = eax;
        ecx = *((ebp - 0x18));
        if (*(ecx) == 0x2d) {
            *((ebp - 0x40))--;
        }
        eax = *((ebp - 4));
        if (eax <= *((ebp - 0x40))) {
            goto label_19;
        }
        edx = *((ebp - 4));
        edx -= *((ebp - 0x40));
        *((ebp - 0x10)) = edx;
    }
label_19:
    ecx = *((ebp - 0x18));
    if (*(ecx) != 0x2d) {
        if (*((ebp - 9)) == 0) {
            goto label_20;
        }
    }
    eax = *((ebp - 0x18));
    if (*(eax) != 0x2d) {
        *((ebp - 0x18))--;
        edx = *((ebp - 0x18));
        cl = *((ebp - 9));
        *(edx) = cl;
    }
    if (*((ebp - 0x10)) > 0) {
        *((ebp - 0x10))--;
    }
label_20:
    eax = *((ebp - 0x18));
    eax = fcn_00402250 (eax);
    *((ebp - 0x40)) = eax;
label_16:
    if ((edi & 1) != 0) {
        if (bl == 0x6f) {
            if (*((ebp - 0x10)) > 0) {
                goto label_21;
            }
            *((ebp - 0x10)) = 1;
        } else {
            if (bl != 0x78) {
                if (bl != 0x58) {
                    goto label_21;
                }
            }
            edi |= 0x40;
            *((ebp - 4)) -= 2;
            *((ebp - 0x10)) -= 2;
            if (*((ebp - 0x10)) >= 0) {
                goto label_21;
            }
            edx = 0;
            *((ebp - 0x10)) = edx;
        }
    }
label_21:
    ecx = *((ebp - 0x10));
    *((ebp - 0x40)) += ecx;
    if ((edi & 2) != 0) {
        goto label_22;
    }
    eax = *((ebp - 4));
    if (eax <= *((ebp - 0x40))) {
        goto label_22;
    }
    do {
        fcn_00403a68 (0x20, ebp - 0x520);
        *((ebp - 4))--;
        ecx = *((ebp - 4));
    } while (ecx > *((ebp - 0x40)));
label_22:
    if ((edi & 0x40) != 0) {
        fcn_00403a68 (0x30, ebp - 0x520);
        fcn_00403a68 (ebx, ebp - 0x520);
    }
    if (*((ebp - 0x10)) <= 0) {
        goto label_23;
    }
    ecx = *((ebp - 0x10));
    *((ebp - 0x40)) -= ecx;
    eax = *((ebp - 0x10));
    *((ebp - 4)) -= eax;
    edx = *((ebp - 0x18));
    if (*(edx) != 0x2d) {
        ecx = *((ebp - 0x18));
        if (*(ecx) == 0x20) {
            goto label_24;
        }
        eax = *((ebp - 0x18));
        if (*(eax) != 0x2b) {
            goto label_25;
        }
    }
label_24:
    ecx = *((ebp - 0x18));
    *((ebp - 0x18))++;
    al = *(ecx);
    fcn_00403a68 (eax, ebp - 0x520);
    *((ebp - 0x40))--;
    *((ebp - 4))--;
    while (ecx != 0) {
        fcn_00403a68 (0x30, ebp - 0x520);
label_25:
        ecx = *((ebp - 0x10));
        *((ebp - 0x10)) += 0xffffffff;
    }
label_23:
    if (*((ebp - 0x1c)) == 0) {
        goto label_26;
    }
    eax = *((ebp - 0x18));
    edx = 0;
    *((ebp - 0x44)) = eax;
    *((ebp - 0x4c)) = edx;
    ecx = *((ebp - 0x40));
    *((ebp - 0x54)) = ecx;
    goto label_27;
label_1:
    eax = *((ebp - 0x44));
    *((ebp - 0x44)) += 2;
    dx = *(eax);
    eax = fcn_0040487c (ebp - 0x56, edx);
    *((ebp - 0x50)) = eax;
    if (*((ebp - 0x50)) <= 0) {
        goto label_28;
    }
    ecx = 0;
    eax = *((ebp - 0x4c));
    edx = ebp + eax - 0x4b8;
    eax = ebp - 0x56;
    if (ecx >= *((ebp - 0x50))) {
        goto label_27;
    }
    do {
        bl = *(eax);
        eax++;
        *(edx) = bl;
        edx++;
        *((ebp - 0x4c))++;
        ecx++;
    } while (ecx < *((ebp - 0x50)));
label_27:
    eax = *((ebp - 0x54));
    *((ebp - 0x54)) += 0xffffffff;
    if (eax > 0) {
        goto label_1;
    }
label_28:
    edx = ebp - 0x4b8;
    *((ebp - 0x18)) = edx;
    ecx = *((ebp - 0x4c));
    *((ebp - 0x40)) = ecx;
label_26:
    if (*((ebp - 0x40)) == 0) {
        goto label_29;
    }
    eax = *((ebp - 0x40));
    *((ebp - 4)) -= eax;
    while (edx != 0) {
        ecx = *((ebp - 0x18));
        *((ebp - 0x18))++;
        al = *(ecx);
        fcn_00403a68 (eax, ebp - 0x520);
        edx = *((ebp - 0x40));
        *((ebp - 0x40)) += 0xffffffff;
    }
    while (eax > 0) {
        fcn_00403a68 (0x20, ebp - 0x520);
label_29:
        eax = *((ebp - 4));
        *((ebp - 4)) += 0xffffffff;
    }
    goto label_2;
    *((ebp + 0x1c)) += 4;
    edx = *((ebp + 0x1c));
    ecx = *((edx - 4));
    *((ebp - 0x18)) = ecx;
    if ((edi & 0x10) != 0) {
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x4c4));
        *(eax) = edx;
        goto label_2;
    }
    if ((edi & 0x200) != 0) {
        ecx = *((ebp - 0x18));
        ax = *((ebp - 0x4c4));
        *(ecx) = ax;
        goto label_2;
    }
    edx = *((ebp - 0x18));
    ecx = *((ebp - 0x4c4));
    *(edx) = ecx;
    goto label_2;
    do {
        fcn_00403a68 (eax, ebp - 0x520);
label_6:
        eax = *((ebp - 0x14));
        *((ebp - 0x14))++;
        al = *(eax);
    } while (al != 0);
label_3:
    eax = fcn_00403a20 (ebp - 0x520);
    if (*((ebp - 0x4c0)) != 0) {
        eax |= 0xffffffff;
    } else {
        eax = *((ebp - 0x4c4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4013e0 */
#include <stdint.h>
 
int32_t fcn_004013e0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    uint32_t (*0x40a20c)(uint32_t) (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4021ac */
#include <stdint.h>
 
int32_t fcn_004021ac (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    al = *((ebp + 0xc));
    edx = *((ebp + 0x10));
    edi = *((ebp + 8));
    ah = al;
    if ((edx & 0xfffffffc) == 0) {
        goto label_0;
    }
    *(edi) = ax;
    ecx = edi + edx - 4;
    *((edi + 2)) = ax;
    eax = *(edi);
    edx >>= 3;
    if (edx == 0) {
        goto label_1;
    }
    do {
        *(edi) = eax;
        *((edi + 4)) = eax;
        edx--;
        if (edx == 0) {
            goto label_2;
        }
        *((edi + 8)) = eax;
        *((edi + 0xc)) = eax;
        edx--;
        if (edx == 0) {
            goto label_2;
        }
        *((edi + 0x10)) = eax;
        *((edi + 0x14)) = eax;
        edx--;
        if (edx == 0) {
            goto label_2;
        }
        *((edi + 0x18)) = eax;
        *((edi + 0x1c)) = eax;
        edx--;
        if (edx == 0) {
            goto label_2;
        }
        *((edi + 0x20)) = eax;
        *((edi + 0x24)) = eax;
        edx--;
        if (edx == 0) {
            goto label_2;
        }
        *((edi + 0x28)) = eax;
        *((edi + 0x2c)) = eax;
        edi = edi + 0x30;
        edx--;
    } while (edx != 0);
label_2:
    *(ecx) = eax;
    *((ecx - 4)) = eax;
    eax = *((ebp + 8));
    return eax;
label_1:
    *(ecx) = eax;
    eax = *((ebp + 8));
    return eax;
label_0:
    edx &= 3;
    if (edx != 0) {
        *(edi) = al;
        dl--;
        if (dl == 0) {
            goto label_3;
        }
        *((edi + edx - 1)) = ax;
    }
label_3:
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4013f0 */
#include <stdint.h>
 
int32_t fcn_004013f0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    uint32_t (*0x40a208)(uint32_t) (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40120c */
#include <stdint.h>
 
int32_t fcn_0040120c (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_004013f0 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a08 */
#include <stdint.h>
 
void KERNEL32_DLL_VirtualAlloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40130c */
#include <stdint.h>
 
uint32_t fcn_0040130c (void) {
    eax = KERNEL32_DLL_VirtualFree (eax, edx, 0x4000);
    eax--;
    if (eax != 0) {
        eax = 0;
        return eax;
    }
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a0e */
#include <stdint.h>
 
void KERNEL32_DLL_VirtualFree (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099c0 */
#include <stdint.h>
 
void KERNEL32_DLL_LoadLibraryA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406e08 */
#include <stdint.h>
 
int32_t fcn_00406e08 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_00406cdc (eax);
    fcn_00406f40 (1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406cdc */
#include <stdint.h>
 
uint32_t fcn_00406cdc (int32_t arg_8h) {
    int32_t var_84h;
    int32_t var_4h;
    esi = *((ebp + 8));
    if (*(0x40ba04) == 0) {
        if (*(0x40ba00) == 0) {
            if (*(0x40bbf4) != 0) {
                KERNEL32_DLL_GetModuleFileNameA (0, ebp - 0x84, 0x80);
                eax = fcn_00406acc (ebp - 0x84, 0x5c);
                ebx = eax;
                if (eax == 0) {
                    eax = fcn_00406acc (ebp - 0x84, 0x3a);
                    ebx = eax;
                    if (eax == 0) {
                        ebx = ebp - 0x84;
                    }
                } else {
                    ebx++;
                }
                eax = fcn_00406c98 ();
                eax |= 0x10010;
                USER32_DLL_MessageBoxA (0, esi, ebx, eax);
                goto label_0;
            }
            eax = KERNEL32_DLL_GetStdHandle (0xfffffffffffffff4);
            ebx = eax;
            eax = ebp - 4;
            KERNEL32_DLL_WriteFile (ebx, 0x40ba08, 2, eax, 0);
            edx = ebp - 4;
            eax = fcn_00402250 (esi);
            KERNEL32_DLL_WriteFile (ebx, esi, eax);
            KERNEL32_DLL_WriteFile (ebx, 0x40ba0b, 2, ebp - 4, 0);
        }
    } else {
        if (*(0x40ba00) != 0) {
            if (*(0x40ba00) == -1) {
                goto label_0;
            }
            uint32_t (*0x40ba00)(uint32_t) (esi);
        }
        eax = *(0x40ba04);
        if (eax == 0) {
            goto label_0;
        }
        if (*(0x40ba04) == -1) {
            goto label_0;
        }
        if (*(eax) == 0) {
            goto label_0;
        }
        fcn_00406c1c (eax, esi);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406f40 */
#include <stdint.h>
 
int32_t fcn_00406f40 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_00406ed4 (1, 0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406ed4 */
#include <stdint.h>
 
uint32_t fcn_00406ed4 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    ebx = *((ebp + 8));
    if (ebx == 0) {
        if (*(0x40ba58) != 0) {
            uint32_t (*0x40ba58)() ();
        }
        fcn_00407b2c ();
        eax = uint32_t (*0x40ba5c)() ();
    } else {
        eax = 0;
        *(0x40ba58) = eax;
    }
    if (*((ebp + 0xc)) == 0) {
        if (ebx == 0) {
            uint32_t (*0x40ba60)() ();
            uint32_t (*0x40ba64)() ();
        }
        edx = *((ebp + 0x10));
        fcn_00407a40 (edx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409984 */
#include <stdint.h>
 
void KERNEL32_DLL_GetProcAddress (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4013dc */
#include <stdint.h>
 
int32_t fcn_004013dc (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401418 */
#include <stdint.h>
 
uint32_t fcn_00401418 (int32_t arg_8h) {
    eax = fcn_004013dc ();
    if (eax == 0) {
        *(0x40a208) = fcn.00401ab8;
        *(0x40a20c) = 0x401c28;
        *(0x40a210) = 0x402080;
        *(0x40a214) = 0x401e40;
        *(0x40a204) = 1;
    }
    eax = *((ebp + 8));
    *(0x40a200) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4014d4 */
#include <stdint.h>
 
int32_t fcn_004014d4 (void) {
    edx = 0xc;
    while (edx < *(0x40a228)) {
        eax = edx;
        eax += eax;
        eax += *(0x40a23c);
        eax += 0xfffffff4;
        *((eax + 4)) = eax;
        *((eax + 8)) = eax;
        edx += 4;
    }
    eax = *(0x40a228);
    edx = 0;
    eax += eax;
    eax += *(0x40a23c);
    eax += 0xfffffff4;
    ecx = 0;
    *((eax + 4)) = edx;
    *((eax + 8)) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401ae4 */
#include <stdint.h>
 
int32_t fcn_00401ae4 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax != 0) {
        eax += 0xfffffffc;
        ecx = *(eax);
        if ((cl & 2) != 0) {
            edx = eax;
            edx -= *((eax - 4));
            ecx &= 0xfffffffc;
            ecx += 4;
            *(edx) += ecx;
            eax = edx;
            edx = *(0x40a24c);
            if (eax == edx) {
                ecx = *((edx + 4));
                *(0x40a24c) = ecx;
            }
            edx = *((eax + 4));
            ecx = *((eax + 8));
            *((edx + 8)) = ecx;
            ecx = *((eax + 8));
            *((ecx + 4)) = edx;
        } else {
            *(eax) |= 1;
        }
        edx = *(eax);
        edx &= 0xfffffffc;
        edx += eax;
        edx += 4;
        if ((*(edx) & 1) != 0) {
            ecx = *(edx);
            ecx &= 0xfffffffc;
            ecx += 4;
            *(eax) += ecx;
            if (edx == *(0x40a24c)) {
                ecx = *((edx + 4));
                *(0x40a24c) = ecx;
            }
            ebx = *((edx + 8));
            ecx = *((edx + 4));
            *((ecx + 8)) = ebx;
            edx = *((edx + 8));
            *((edx + 4)) = ecx;
        }
        edx = *(eax);
        edx &= 0xfffffffc;
        *((eax + edx + 4)) |= 2;
        ecx = *(eax);
        ecx &= 0xfffffffc;
        if (ecx < *(0x40a228)) {
            edx = ecx;
            edx += edx;
            edx += *(0x40a23c);
            edx += 0xfffffff4;
        } else {
            edx = *(0x40a24c);
            edx = *((edx + 4));
        }
        ebx = *((edx + 4));
        *((eax + 4)) = ebx;
        *((eax + 8)) = edx;
        ebx = *((eax + 4));
        *((ebx + 8)) = eax;
        *((edx + 4)) = eax;
        edx = ecx + 4;
        *((eax + ecx)) = edx;
        edx = *(eax);
        ecx = *(eax);
        ecx &= 0xfffffffc;
        if (*((eax + ecx + 4)) != 2) {
            goto label_0;
        }
        ecx = *(0x40a250);
        if (ecx > *(0x40a254)) {
            ecx = *(0x40a22c);
        } else {
            ecx = *(0x40a230);
        }
        if (edx <= ecx) {
            goto label_0;
        }
        fcn_004019c4 (eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401e28 */
#include <stdint.h>
 
int32_t fcn_00401e28 (void) {
    int32_t var_ch;
    KERNEL32_DLL_GlobalMemoryStatus (0x20);
    eax = *((esp + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099ae */
#include <stdint.h>
 
void KERNEL32_DLL_GlobalMemoryStatus (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4012c0 */
#include <stdint.h>
 
uint32_t fcn_004012c0 (void) {
    esi = edx;
    ebx = eax;
    edi = ebx;
    if (esi == 0) {
        goto label_0;
    }
    do {
        eax = KERNEL32_DLL_VirtualAlloc (ebx, 0x1000, 0x1000, 4);
        if (eax == 0) {
            edx = ebx;
            eax = edi;
            edx -= edi;
            eax = fcn_0040130c ();
            eax = 0;
            goto label_1;
        }
        ebx += 0x1000;
        esi -= 0x1000;
    } while (esi != 0);
label_0:
    eax = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401614 */
#include <stdint.h>
 
int32_t fcn_00401614 (int32_t arg_8h, int32_t arg_ch) {
    edx = *((ebp + 0xc));
    ebx = *((ebp + 8));
    edx &= 0xfffff000;
    ecx = *(ebx);
    eax = *(ebx);
    eax += ebx;
    eax += 0xfffffffc;
    if (ecx > edx) {
        if ((*(eax) & 2) != 0) {
            eax -= *((eax - 4));
            esi = ecx;
            esi -= edx;
            edx = *(eax);
            edx &= 0xfffffffc;
            edx -= 0xc;
            if (esi > edx) {
                eax |= 0xffffffff;
                goto label_0;
            }
            *(eax) -= esi;
            edx = *(eax);
            edx &= 0xfffffffc;
            ecx = edx;
            ecx += 4;
            *((eax + edx)) = ecx;
            edx = *(eax);
            edx &= 0xfffffffc;
            *((eax + edx + 4)) = 2;
            ecx = *(eax);
            ecx &= 0xfffffffc;
            if (ecx >= *(0x40a228)) {
                goto label_1;
            }
            edx = *((eax + 4));
            ecx = *((eax + 8));
            *((edx + 8)) = ecx;
            ecx = *((eax + 8));
            *((ecx + 4)) = edx;
            edx = *(eax);
            edx &= 0xfffffffc;
            edx += edx;
            ecx = *(0x40a23c);
            edx = *((ecx + edx - 8));
            *((eax + 4)) = edx;
            edx = *(eax);
            edx &= 0xfffffffc;
            edx += edx;
            edx += *(0x40a23c);
            edx += 0xfffffff4;
            *((eax + 8)) = edx;
            ecx = *((eax + 4));
            *((ecx + 8)) = eax;
            edx = *(eax);
            edx &= 0xfffffffc;
            edx += edx;
            ecx = *(0x40a23c);
            *((ecx + edx - 8)) = eax;
            eax |= 0xffffffff;
        } else {
        } else {
            esi = edx;
            esi -= *(ebx);
            edx = esi;
            edx -= 4;
            *(eax) += edx;
            ecx = *(eax);
            ecx &= 0xfffffffc;
            edx = 0;
            *((eax + ecx + 4)) = edx;
            eax += 4;
            eax = fcn_00401ae4 (eax);
            *(ebx) += esi;
        }
label_1:
        eax = 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40122c */
#include <stdint.h>
 
uint32_t fcn_0040122c (void) {
    edi = ecx;
    esi = edx;
    if (*(0x40a15c) == 0) {
        edx = *(0x40cc78);
        if (edx != 2) {
            if (edx != 1) {
                goto label_0;
            }
        }
        *(0x40a15c) = 0x100000;
        goto label_1;
label_0:
        *(0x40a15c) = 0x400000;
    }
label_1:
    edx = *(0x40a15c);
    ebx = *(0x40a15c);
    ebx += eax;
    ebx--;
    edx--;
    edx = ~edx;
    ebx &= edx;
    eax = KERNEL32_DLL_VirtualAlloc (0, ebx, 0x2000, 1);
    *(esi) = eax;
    if (eax == 0) {
        eax = 0;
    } else {
        *(edi) = ebx;
        eax = 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401324 */
#include <stdint.h>
 
uint32_t fcn_00401324 (void) {
    eax = KERNEL32_DLL_VirtualFree (eax, 0, 0x8000);
    eax--;
    if (eax != 0) {
        eax = 0;
        return eax;
    }
    eax = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401514 */
#include <stdint.h>
 
int32_t fcn_00401514 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 0xc));
    edx = *((ebp + 8));
    eax = *((ebp + 8));
    esi = 0;
    if (edi < 0x1000) {
        eax |= 0xffffffff;
    } else {
        *((eax + 8)) = 1;
        *((eax + 0xc)) = edx;
        *(eax) = edi;
        edx = *((ebp + 0x10));
        *((eax + 4)) = edx;
        edx = 0;
        ecx = *(0x40a234);
        *((eax + 0x8c)) = ecx;
        *((eax + 0x90)) = edx;
        edx = *(0x40a234);
        if (edx != 0) {
            *((edx + 0x90)) = eax;
        } else {
            *(0x40a238) = eax;
        }
        *(0x40a234) = eax;
        ebx = eax + 0x94;
        eax = 0;
        *(ebx) = eax;
        eax &= 0xfffffffc;
        ebx += eax;
        ebx += 4;
        if (*(0x40a23c) == 0) {
            esi = *(0x40a228);
            esi += esi;
            esi += 3;
            esi &= 0xfffffffc;
            eax = ebx + 4;
            *(0x40a23c) = eax;
            eax = esi;
            *(ebx) = eax;
            eax &= 0xfffffffc;
            ebx += eax;
            ebx += 4;
            fcn_004014d4 ();
            esi += 4;
        }
        eax = edi;
        eax -= 0x94;
        eax -= 0xc;
        eax -= esi;
        edx = eax + 1;
        *(ebx) = edx;
        edx &= 0xfffffffc;
        *((ebx + edx + 4)) = 2;
        if (eax < *(0x40a228)) {
            edx = eax;
            edx += edx;
            edx += *(0x40a23c);
            edx += 0xfffffff4;
        } else {
            edx = *(0x40a24c);
        }
        ecx = *((edx + 4));
        *((ebx + 4)) = ecx;
        *((ebx + 8)) = edx;
        ecx = *((ebx + 4));
        *((ecx + 8)) = ebx;
        *((edx + 4)) = ebx;
        edx = eax + 4;
        *((ebx + eax)) = edx;
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4019c4 */
#include <stdint.h>
 
int32_t fcn_004019c4 (int32_t arg_8h) {
    edx = *((ebp + 8));
    eax = *(edx);
    eax &= 0xfffffffc;
    eax += edx;
    eax += 4;
    ecx = *(0x40a250);
    if (ecx > *(0x40a254)) {
        ecx = *(0x40a22c);
    } else {
        ecx = *(0x40a230);
    }
    ebx = *(edx);
    ebx -= 0xc;
    if (ecx > ebx) {
        eax = 0;
        goto label_1;
    }
    ecx--;
    ecx = ~ecx;
    ebx &= ecx;
    ecx = ebx;
    ebx = *(0x40a234);
    if (ebx == 0) {
        goto label_2;
    }
label_0:
    edx = *(ebx);
    esi = *(ebx);
    esi += ebx;
    esi += 0xfffffffc;
    if (eax != esi) {
        goto label_3;
    }
    edi = edx;
    edi -= ecx;
    fcn_00401614 (ebx, edi);
    while (eax <= *((ebx + edx*4 + 8))) {
        *((ebx + 8))--;
        eax = *((ebx + 8));
        esi = *(ebx);
        edx = *((ebx + eax*4 + 0xc));
        eax = *((ebx + 8));
        edx -= ebx;
        esi -= edx;
        eax = *((ebx + eax*4 + 0xc));
        edx = esi;
        fcn_0040130c ();
        *(0x40a254) -= esi;
        ecx = *((ebx + 8));
        eax = *((ebx + ecx*4 + 0xc));
        fcn_00401324 ();
        edx = *((ebx + 8));
        ecx = *((ebx + edx*4 + 0xc));
        ecx -= ebx;
        *((ebx + 4)) = ecx;
        *(ebx) = ecx;
        edx = *((ebx + 8));
        eax = edi;
        eax += ebx;
    }
    edx = *(ebx);
    edx -= edi;
    eax = edi;
    eax += ebx;
    fcn_0040130c ();
    ecx = *(ebx);
    ecx -= edi;
    *(0x40a254) -= ecx;
    *(ebx) = edi;
    eax = 1;
    goto label_1;
label_3:
    ebx = *((ebx + 0x8c));
    if (ebx != 0) {
        goto label_0;
    }
label_2:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401298 */
#include <stdint.h>
 
int32_t fcn_00401298 (void) {
    edi = edx;
    ebx = eax;
    eax = *(ebx);
    eax = KERNEL32_DLL_VirtualAlloc (eax, edi, 0x1000, 4, edi, esi, ebx);
    esi = eax;
    *(ebx) = esi;
    al = (esi != 0) ? 1 : 0;
    eax &= 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401bec */
#include <stdint.h>
 
int32_t fcn_00401bec (int32_t arg_8h) {
    int32_t var_4h;
    ebx = *((ebp + 8));
    eax = 0;
    *((ebp - 4)) = eax;
    ebx += 0x1003;
    ebx &= 0xfffff000;
    eax = ebp - 4;
    edx = ebx;
    eax = fcn_00401298 ();
    if (eax != 0) {
        *((ebp - 4)) += 4;
        ebx -= 4;
        ecx = *((ebp - 4));
        *((ecx - 4)) = ebx;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401c50 */
#include <stdint.h>
 
int32_t fcn_00401c50 (int32_t arg_8h) {
label_0:
    esi = *((ebp + 8));
    if (esi == 0) {
        eax = 0;
        goto label_1;
    }
    if (esi < 0xc) {
        ebx = 0xc;
    } else {
        ebx = esi + 3;
        ebx &= 0xfffffffc;
    }
    if (*(0x40a23c) == 0) {
        fcn_00401700 (1);
    }
    if (ebx >= *(0x40a228)) {
        goto label_2;
    }
    ecx = ebx;
    ecx += ecx;
    eax = ecx;
    eax += *(0x40a23c);
    eax += 0xfffffff4;
    edx = *((eax + 4));
    if (eax != edx) {
        eax = edx;
        *(eax) &= 0xfffffffe;
        edx = *(eax);
        edx &= 0xfffffffc;
        *((eax + edx + 4)) &= 0xfffffffd;
        edx = *((eax + 4));
        ecx = *((eax + 8));
        *((edx + 8)) = ecx;
        ecx = *((eax + 8));
        eax += 4;
        *((ecx + 4)) = edx;
        goto label_1;
    }
    edx = *(0x40a244);
    eax = *(0x40a244);
    if (edx != 0x40a240) {
        goto label_3;
    }
    eax = ecx;
    eax += 8;
    eax += *(0x40a23c);
    eax += 0xfffffff4;
    while (eax == *((eax + 4))) {
        eax += 8;
    }
    edx = *((eax + 4));
    if (edx != 0) {
        eax = edx;
        goto label_3;
    }
    eax = *(0x40a24c);
    goto label_3;
label_2:
    ecx = *(0x40a24c);
    eax = *(0x40a24c);
    edx = *(ecx);
    if (ebx <= edx) {
        goto label_3;
    }
    *(ecx) = 0xfffffffd;
    eax = *((eax + 4));
    while (ebx > *(eax)) {
        eax = *((eax + 4));
    }
    ecx = *(0x40a24c);
    *(ecx) = edx;
    if (eax == *(0x40a24c)) {
        eax = 0x40a240;
    }
label_3:
    if (eax != 0x40a240) {
        ecx = *(eax);
        ecx &= 0xfffffffc;
        esi = ecx;
        esi -= ebx;
        if (esi < 0x10) {
            *(eax) &= 0xfffffffe;
            edx = *(eax);
            edx &= 0xfffffffc;
            *((eax + edx + 4)) &= 0xfffffffd;
            if (ecx >= *(0x40a228)) {
                ecx = *((eax + 4));
                *(0x40a24c) = ecx;
            }
            edx = *((eax + 4));
            ecx = *((eax + 8));
            *((edx + 8)) = ecx;
            ecx = *((eax + 8));
            eax += 4;
            *((ecx + 4)) = edx;
            edx = ebx;
            esi -= 4;
            *(eax) = edx;
            edx &= 0xfffffffc;
            ecx = esi;
            edx += eax;
            edx += 4;
            ebx = ecx + 1;
            *(edx) = ebx;
            ebx = ecx + 4;
            *((edx + ecx)) = ebx;
        } else {
        } else {
        }
    }
    if (ecx < *(0x40a228)) {
        ecx += ecx;
        ecx += *(0x40a23c);
        ecx += 0xfffffff4;
        ebx = *((ecx + 4));
        *((edx + 4)) = ebx;
        *((edx + 8)) = ecx;
        ebx = *((edx + 4));
        *((ebx + 8)) = edx;
        *((ecx + 4)) = edx;
        if (eax == *(0x40a24c)) {
            edx = *((eax + 4));
            *(0x40a24c) = edx;
        }
        edx = *((eax + 4));
        ecx = *((eax + 8));
        *((edx + 8)) = ecx;
        ecx = *((eax + 8));
        *((ecx + 4)) = edx;
    } else {
        ecx = *((eax + 8));
        *((ecx + 4)) = edx;
        *((edx + 8)) = ecx;
        ecx = *((eax + 4));
        *((ecx + 8)) = edx;
        *((edx + 4)) = ecx;
        *(0x40a24c) = edx;
    }
    eax += 4;
    eax = fcn_00401700 (esi + 0x40);
    if (eax == 0) {
        eax = fcn_00401c50 (esi);
        goto label_0;
    } else {
        eax = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401700 */
#include <stdint.h>
 
uint32_t fcn_00401700 (int32_t arg_8h) {
    int32_t var_8h;
    uint32_t var_4h;
    edi = 0x40a21c;
    esi = *((ebp + 8));
    esi += 0xfff;
    esi &= 0xfffff000;
    if (*(0x40a250) == 0) {
        eax = fcn_00401e28 ();
        *(0x40a250) = eax;
    }
    if (*(0x40a23c) == 0) {
        eax = *(0x40a228);
        eax += eax;
        eax += 0x109f;
        eax &= 0xfffff000;
        esi += eax;
    }
    ebx = *(0x40a234);
    if (ebx == 0) {
        goto label_0;
    }
    do {
        eax = *((ebx + 4));
        edx = *((ebx + 4));
        edx -= *(ebx);
        if (esi < edx) {
            ecx = *(0x40a254);
            ecx += *(edi);
            if (ecx < *(0x40a250)) {
                edx = *(edi);
            } else {
                edx = *(0x40a220);
            }
            ecx = *(0x40a254);
            edx--;
            ecx += *(edi);
            edx += esi;
            if (ecx < *(0x40a250)) {
                ecx = *(edi);
            } else {
                ecx = *(0x40a220);
            }
            ecx--;
            ecx = ~ecx;
            edx &= ecx;
            edx += *(ebx);
            if (eax < edx) {
                eax = *((ebx + 4));
            } else {
                edx = *(0x40a254);
                edx += *(edi);
                if (edx < *(0x40a250)) {
                    eax = *(edi);
                } else {
                    eax = *(0x40a220);
                }
                edx = *(0x40a254);
                eax--;
                edx += *(edi);
                eax += esi;
                if (edx < *(0x40a250)) {
                    ecx = *(edi);
                } else {
                    ecx = *(0x40a220);
                }
                ecx--;
                ecx = ~ecx;
                eax &= ecx;
                eax += *(ebx);
            }
            esi = eax;
            edx = eax;
            eax = *(ebx);
            edx -= eax;
            eax += ebx;
            eax = fcn_004012c0 ();
            if (eax != 0) {
                edx = esi;
                edx -= *(ebx);
                *(0x40a254) += edx;
                eax = fcn_00401614 (ebx, esi);
                eax = 0;
                goto label_1;
            }
            eax = *(ebx);
            edx = 0x1000;
            eax += ebx;
            eax = fcn_004012c0 ();
            if (eax != 0) {
                *(0x40a254) += 0x1000;
                ecx = *(ebx);
                ecx += 0x1000;
                eax = fcn_00401614 (ebx, ecx);
                eax = 0;
                goto label_1;
            }
            eax |= 0xffffffff;
            goto label_1;
        }
        ebx = *((ebx + 0x8c));
    } while (ebx != 0);
label_0:
    ecx = ebp - 8;
    edx = ebp - 4;
    eax = esi + 0x1000;
    if (eax < *(0x40a218)) {
        eax = *(0x40a218);
    } else {
        eax = esi + 0x1000;
    }
    eax = fcn_0040122c ();
    if (eax == 0) {
        eax |= 0xffffffff;
        goto label_1;
    }
    edx = *(0x40a254);
    edx += *(edi);
    if (edx < *(0x40a250)) {
        ecx = *(edi);
    } else {
        ecx = *(0x40a220);
    }
    ecx--;
    eax = *(0x40a254);
    esi += ecx;
    eax += *(edi);
    esi += 0x1000;
    if (eax < *(0x40a250)) {
        edx = *(edi);
    } else {
        edx = *(0x40a220);
    }
    edx--;
    ebx = *(0x40a234);
    edx = ~edx;
    esi &= edx;
    edi = esi;
    if (ebx == 0) {
        goto label_2;
    }
    do {
        eax = *((ebx + 4));
        edx = *((ebx + 4));
        edx += ebx;
        if (edx == *((ebp - 4))) {
            if (*((ebx + 8)) >= 0x20) {
                goto label_3;
            }
            esi = eax;
            edx = *(ebx);
            esi -= edx;
            if (esi != 0) {
                eax = edx;
                edx = esi;
                eax += ebx;
                eax = fcn_004012c0 ();
                if (eax != 0) {
                    *(0x40a254) += esi;
                    eax = *((ebx + 4));
                    eax = fcn_00401614 (ebx, eax);
                } else {
                    eax |= 0xffffffff;
                    goto label_1;
                }
            }
            edx = edi;
            eax = *((ebp - 4));
            edx -= esi;
            eax = fcn_004012c0 ();
            if (eax != 0) {
                edx = edi;
                edx -= esi;
                *(0x40a254) += edx;
                ecx = *((ebx + 8));
                *((ebx + 8))++;
                eax = *((ebp - 4));
                *((ebx + ecx*4 + 0xc)) = eax;
                edx = *((ebp - 8));
                *((ebx + 4)) += edx;
                edi += *(ebx);
                edi -= esi;
                eax = fcn_00401614 (ebx, edi);
                eax = 0;
                goto label_1;
            }
            eax |= 0xffffffff;
            goto label_1;
        }
label_3:
        ebx = *((ebx + 0x8c));
    } while (ebx != 0);
label_2:
    edx = edi;
    eax = *((ebp - 4));
    eax = fcn_004012c0 ();
    if (eax == 0) {
        eax = *((ebp - 4));
        eax = fcn_00401324 ();
        eax |= 0xffffffff;
    } else {
        *(0x40a254) += edi;
        edx = *((ebp - 8));
        ecx = *((ebp - 4));
        eax = fcn_00401514 (ecx, edi, edx);
        eax = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401c28 */
#include <stdint.h>
 
int32_t fcn_00401c28 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax == 0) {
        eax = 0;
        return eax;
    }
    if (eax >= 0x100000) {
        eax = fcn_00401bec (eax);
        return eax;
    }
    fcn_00401c50 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401ab8 */
#include <stdint.h>
 
int32_t fcn_00401ab8 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax != 0) {
        edx = *((eax - 4));
        edx &= 0xfffffffc;
        if (edx >= 0x100000) {
            eax += 0xfffffffc;
            eax = fcn_00401324 ();
            return eax;
        }
        fcn_00401ae4 (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401fc8 */
#include <stdint.h>
 
int32_t fcn_00401fc8 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 8));
    ebx = *((ebp + 0xc));
    ebx += 0x1003;
    ebx &= 0xfffff000;
    edi = *((esi - 4));
    eax = ebx;
    edi &= 0xfffffffc;
    eax -= 4;
    if (edi == eax) {
        eax = esi;
    } else {
        edx = ebx;
        edx -= 4;
        if (edi < edx) {
            ecx = *((ebp + 0xc));
            eax = fcn_00401c28 (ecx);
            ebx = eax;
            if (ebx != 0) {
                fcn_0040213c (ebx, esi, edi);
                fcn_00401ab8 (esi);
            }
            eax = ebx;
        } else {
            edx = ebx;
            edx -= 4;
            if (edx < 0x100000) {
                ecx = *((ebp + 0xc));
                eax = fcn_00401c28 (ecx);
                ebx = eax;
                if (ebx != 0) {
                    eax = *((ebp + 0xc));
                    fcn_0040213c (ebx, esi, eax);
                    fcn_00401ab8 (esi);
                }
                eax = ebx;
            } else {
                edx = edi + 4;
                eax = ebx;
                eax += esi;
                edx -= ebx;
                eax += 0xfffffffc;
                fcn_0040130c ();
                ebx -= 4;
                eax = esi;
                *((esi - 4)) = ebx;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401ea0 */
#include <stdint.h>
 
int32_t fcn_00401ea0 (int32_t arg_8h, int32_t arg_ch) {
    uint32_t var_4h;
    ecx = *((ebp + 0xc));
    edx = *((ebp + 8));
    edx += 0xfffffffc;
    eax = *(edx);
    eax &= 0xfffffffc;
    eax += edx;
    eax += 4;
    if (ecx < 0xc) {
        ecx = 0xc;
    } else {
        ecx += 3;
        ecx &= 0xfffffffc;
    }
    ebx = *(edx);
    ebx &= 0xfffffffc;
    if (ecx == ebx) {
        eax = *((ebp + 8));
    } else {
        esi = *(eax);
        esi &= 1;
        if (esi != 0) {
            edi = *(eax);
            edi &= 0xfffffffc;
            edi += 4;
            ebx += edi;
        }
        if (ecx <= ebx) {
            edi = 0;
            *((ebp - 4)) = edi;
            if (esi != 0) {
                esi = *(eax);
                esi &= 0xfffffffc;
                if (esi >= *(0x40a228)) {
                    esi = *((eax + 8));
                    *((ebp - 4)) = esi;
                }
                if (eax == *(0x40a24c)) {
                    esi = *((eax + 4));
                    *(0x40a24c) = esi;
                }
                esi = *((eax + 4));
                edi = *((eax + 8));
                *((esi + 8)) = edi;
                esi = *((eax + 8));
                edi = *((eax + 4));
                *((esi + 4)) = edi;
                esi = *(eax);
                esi &= 0xfffffffc;
                *((eax + esi + 4)) &= 0xfffffffd;
                eax = *(edx);
                eax &= 2;
                eax += ebx;
                *(edx) = eax;
            }
            eax = ebx;
            eax -= ecx;
            if (eax >= 0x10) {
                eax -= 4;
                ebx = eax;
                eax = *(edx);
                eax &= 2;
                eax += ecx;
                *(edx) = eax;
                eax &= 0xfffffffc;
                edx += eax;
                edx += 4;
                eax = edx;
                edx = ebx + 1;
                *(eax) = edx;
                edx &= 0xfffffffc;
                *((eax + edx + 4)) |= 2;
                if (ebx < *(0x40a228)) {
                    edx = ebx;
                    edx += edx;
                    edx += *(0x40a23c);
                    edx += 0xfffffff4;
                } else {
                    if (*((ebp - 4)) != 0) {
                        edx = *((ebp - 4));
                    } else {
                        ecx = *(0x40a24c);
                        edx = *((ecx + 4));
                    }
                }
                ecx = *((edx + 4));
                *((eax + 4)) = ecx;
                *((eax + 8)) = edx;
                ecx = *((eax + 4));
                *((ecx + 8)) = eax;
                *((edx + 4)) = eax;
                edx = ebx + 4;
                *((eax + ebx)) = edx;
            }
            eax = *((ebp + 8));
        } else {
            eax = 0;
        }
    }
    esi = edi;
    ebx = edi;
    ecx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402160 */
#include <stdint.h>
 
int32_t fcn_00402160 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 8));
    esi = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    edx = *((ebp + 0x10));
    if (edi < esi) {
        goto label_0;
    }
    if (edi == esi) {
        goto label_1;
    }
    __asm ("std");
    esi = esi + ecx - 1;
    edi = edi + ecx - 1;
    ecx &= 3;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    ecx = edx;
    ecx >>= 1;
    ecx >>= 1;
    esi -= 3;
    edi -= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    goto label_1;
label_0:
    ecx >>= 1;
    ecx >>= 1;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = edx;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
label_1:
    eax = *((ebp + 8));
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402250 */
#include <stdint.h>
 
int32_t fcn_00402250 (int32_t arg_4h) {
    eax = *((esp + 4));
    if ((al & 3) != 0) {
        goto label_1;
    }
    do {
label_0:
        edx = *(eax);
        eax += 4;
        ecx = edx;
        edx -= 0x1010101;
        edx &= 0x80808080;
    } while (edx == 0);
    ecx = ~ecx;
    edx &= ecx;
    if (edx == 0) {
        goto label_0;
    }
    if (dl == 0) {
        if (dh != 0) {
            goto label_2;
        }
        if ((edx & 0xff0000) != 0) {
            goto label_3;
        }
        goto label_4;
label_1:
        eax += 4;
        if ((*((eax - 4)) & 0xff) == 0) {
            goto label_5;
        }
        if ((*((eax - 3)) & 0xff) == 0) {
            goto label_2;
        }
        if ((*((eax - 2)) & 0xff) == 0) {
            goto label_3;
        }
        eax--;
        al &= 0xfc;
        goto label_0;
    }
label_5:
    eax--;
label_2:
    eax--;
label_3:
    eax--;
label_4:
    ecx = *((esp + 4));
    eax--;
    eax -= ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4023bc */
#include <stdint.h>
 
int32_t fcn_004023bc (int32_t arg_8h) {
    edx = 0;
    eax = *((ebp + 8));
    while (*(eax) != 0) {
        edx++;
        eax += 2;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408b5c */
#include <stdint.h>
 
int32_t fcn_00408b5c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    edx = *((eax + 0x1c));
    *((ebp - 4)) = edx;
    ecx = *((ebp + 0xc));
    edi = *((ecx + 8));
    eax = *((ebp + 0xc));
    eax -= *((edi + 4));
    *((ebp - 0xc)) = eax;
    edx = *((ebp + 0xc));
    ecx = *((edx + 0xc));
    *((ebp - 0x10)) = ecx;
    eax = *((ebp + 8));
    if (*(eax) == 0xeedfae6) {
        eax = 0;
        goto label_1;
    }
    fcn_00405010 ();
    edx = *((ebp + 8));
    if ((*((edx + 4)) & 6) == 0) {
        goto label_2;
    }
    fcn_0040897d (*((ebp + 0xc)), 0);
    ecx = *((ebp + 8));
    if (*(ecx) != 0xeefface) {
        goto label_3;
    }
    ebx = *(edi);
    if (ebx == 0) {
        goto label_3;
    }
    while (*(ebx) != 0) {
        eax = *((ebp - 4));
        edx = *((ebp - 4));
        ecx = *((ebp - 4));
        eax = fcn_00407e35 (*((ecx + 4)), *((edx + 8)), *(ebx), *((eax + 0xc)));
        if (eax != 0) {
            goto label_3;
        }
        ebx += 4;
    }
    ebx = *(fs:0);
    eax = *((ebp + 0xc));
    edx = *(eax);
    *(fs:0) = edx;
    fcn_00402d18 ();
    *(fs:0) = ebx;
label_3:
    eax = 1;
    goto label_1;
label_2:
    edx = *((ebp + 0xc));
    ebx = *((edx + 0x10));
    if (ebx == 0) {
        goto label_4;
    }
label_0:
    esi = ebx;
    eax = *((edi + esi));
    *((ebp - 8)) = eax;
    esi += 2;
    edx = *((edi + esi));
    *((ebp - 0x14)) = edx;
    esi += 2;
    ecx = *((ebp - 0x14));
    if (ecx > 5) {
        goto label_5;
    }
    /* switch table (6 cases) at 0x408c4e */
    eax = *((ebp + 8));
    edx = *(eax);
    edx -= 0xeefface;
    if (edx != 0) {
        goto label_6;
    }
    ecx = *((edi + esi));
    *((ebp - 0x1c)) = ecx;
    esi += 4;
    eax = fcn_00408b17 (*((ebp - 0x1c)), *((ebp - 4)));
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) == 0) {
        goto label_6;
    }
    eax = *(0x40cce4);
    if (*(eax) != 1) {
        edx = *(0x40cce4);
        if (*(edx) != 2) {
            goto label_7;
        }
    }
    ecx = *((ebp + 8));
    if (*(ecx) >= 0xeedface) {
        eax = *((ebp + 8));
        if (*(eax) <= 0xeefface) {
            goto label_7;
        }
    }
    fcn_00408021 (2, 3);
label_7:
    eax = fcn_00401140 ();
    edx = *(eax);
    ecx = *((ebp - 4));
    *(ecx) = edx;
    fcn_00401140 ();
    edx = *((ebp - 4));
    *(eax) = edx;
    eax = *((ebp - 4));
    ecx = *((ebp + 0xc));
    *((eax + 0x28)) = ecx;
    eax = *((ebp - 4));
    edx = *((ebp - 0x18));
    *((eax + 0x2c)) = edx;
    ecx = *((ebp - 4));
    *((ecx + 0x30)) = esi;
    *((ebp - 0x20)) = esi;
    eax = *((ebp - 0x18));
    esi = *(eax);
    do {
        fcn_0040847c (*((ebp + 0xc)), *((ebp + 8)));
        fcn_0040897d (*((ebp + 0xc)), ebx);
        eax = *((ebp + 0xc));
        dx = *((ebp - 0x20));
        *((eax + 0x10)) = dx;
        if (*((ebp - 0x14)) == 3) {
            fcn_004086a9 (*((ebp - 0x18)), *((ebp + 0xc)), *((ebp - 4)), *((ebp - 0x1c)), *((ebp - 0xc)));
        }
        fcn_00401140 ();
        *((eax + 4)) &= 0xfffffffd;
        ecx = *(0x40cce4);
        if (*(ecx) == 2) {
            if (*((ebp - 0x14)) != 3) {
                goto label_8;
            }
            eax = *((ebp - 4));
            eax = fcn_00402938 (*((eax + 4)));
            ebx = eax;
            eax = *((ebp - 4));
            if (*((eax + 0x44)) != 0) {
                edx = *((ebp - 4));
                edx += 0x52;
            } else {
                ecx = *((ebp - 4));
                edx = *((ecx + 0x40));
            }
            eax = fcn_00408009 (ebx);
            fcn_00408021 (3, 5);
        }
label_8:
        eax = 0x7b;
        ebx = 0x7b;
        ecx = 0x7b;
        eax = esi;
        ebx = *((ebp - 0x10));
        ecx = *((ebp - 0xc));
        fcn_00407db7 ();
        goto label_6;
        eax = *((ebp + 8));
        if (*(eax) == 0xeefface) {
            goto label_6;
        }
        ecx = *((ebp + 8));
        *((ebp - 0x28)) = ecx;
        eax = *((ebp + 0x10));
        *((ebp - 0x24)) = eax;
        edx = *((ebp + 8));
        eax = *((ebp + 0xc));
        ecx = *(edx);
        edx = ebp - 0x28;
        *((eax + 0x14)) = ecx;
        ecx = *((ebp + 0xc));
        *((ecx + 0x18)) = edx;
        eax = *((edi + esi));
        *(0x40ccec) = eax;
        ecx = 0x7b;
        ebx = 0x7b;
        ecx = *((ebp - 0xc));
        ebx = 0x40ccec;
        fcn_00402faf ();
        goto label_9;
        edx = *((ebp + 8));
        if (*(edx) == 0xeefface) {
            goto label_6;
        }
        ecx = *((ebp + 8));
        edx = *((ebp + 0xc));
        eax = *(ecx);
        *((edx + 0x14)) = eax;
        eax = *((edi + esi));
label_9:
        if (eax < 0) {
            edx = *((ebp + 8));
            if ((*((edx + 4)) & 1) != 0) {
                ecx = *((ebp + 0xc));
                ax = *((ebp - 8));
                *((ecx + 0x10)) = ax;
            }
            eax = 0;
            goto label_1;
        }
        if (eax == 0) {
            goto label_6;
        }
        edx = *((ebp + 0xc));
        ecx = 0;
        *((edx + 0x18)) = ecx;
        esi += 4;
        eax = *((ebp - 8));
        *((ebp - 0x20)) = eax;
        ebx = eax;
        esi = *((edi + esi));
    } while (1);
label_5:
    eax = "bogus context in _ExceptionHandler()";
    if (eax != 0) {
        fcn_00406b6c ("!\"bogus context in _ExceptionHandler()\", "xx.cpp", 0xc00);
    }
label_6:
    ebx = *((ebp - 8));
    if (ebx != 0) {
        goto label_0;
    }
label_4:
    eax = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406b6c */
#include <stdint.h>
 
int32_t fcn_00406b6c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    fcn_00406b24 (0x40cb5c, 0xf6, "Assertion failed: ");
    eax = fcn_00402250 (0x40cb5c);
    eax += 0x40cb5c;
    ecx = *((ebp + 0x10));
    fcn_004052d0 (ecx, eax);
    fcn_00406cdc (0x40cb5c);
    fcn_00406ec0 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406b24 */
#include <stdint.h>
 
uint32_t fcn_00406b24 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    ebx = *((ebp + 8));
    *(ebx) = 0;
    eax = ebp + 0x10;
    *((ebp - 4)) = eax;
    while (esi != 0) {
        eax = fcn_00402250 (ebx);
        edi = *((ebp + 0xc));
        edi -= eax;
        edi--;
        if (edi <= 0) {
            goto label_0;
        }
        fcn_004022ac (ebx, esi, edi);
        *((ebp - 4)) += 4;
        eax = *((ebp - 4));
        esi = *((eax - 4));
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4052d0 */
#include <stdint.h>
 
int32_t fcn_004052d0 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    fcn_0040525c (edx, eax, 0xa, 0, 0x61);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40525c */
#include <stdint.h>
 
int32_t fcn_0040525c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h) {
    int32_t var_24h;
    edi = *((ebp + 0x10));
    esi = *((ebp + 8));
    ebx = *((ebp + 0xc));
    if (edi < 2) {
        goto label_0;
    }
    if (edi > 0x24) {
        goto label_0;
    }
    if (esi < 0) {
        if (*((ebp + 0x14)) == 0) {
            goto label_1;
        }
        *(ebx) = 0x2d;
        ebx++;
        esi = -esi;
    }
label_1:
    ecx = ebp - 0x24;
    do {
        eax = esi;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        *(ecx) = dl;
        ecx++;
        eax = esi;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        esi = eax;
    } while (eax != 0);
    while (ecx != edx) {
        ecx--;
        al = *(ecx);
        if (al < 0xa) {
            eax += 0x30;
            *(ebx) = al;
            ebx++;
        } else {
            al += *((ebp + 0x18));
            al += 0xf6;
            *(ebx) = al;
            ebx++;
        }
        edx = ebp - 0x24;
    }
label_0:
    *(ebx) = 0;
    eax = *((ebp + 0xc));
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406ec0 */
#include <stdint.h>
 
void fcn_00406ec0 (void) {
    fcn_004079d0 (0x16);
    fcn_00406eac ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4079d0 */
#include <stdint.h>
 
uint32_t fcn_004079d0 (int32_t arg_8h) {
    esi = *((ebp + 8));
    eax = fcn_00407748 (esi);
    ebx = eax;
    eax++;
    if (eax == 0) {
        eax = 1;
    } else {
        eax = *((ebx*4 + 0x40bb98));
        if (eax != 1) {
            if (eax == 0) {
                esi += 0xfffffff0;
                esi -= 2;
                if (esi < 0) {
                    goto label_0;
                }
                esi -= 2;
                if (esi == 0) {
                    goto label_0;
                }
                esi -= 2;
                if (esi != 0) {
                } else {
                    fcn_00406eac ();
                    goto label_0;
                }
                eax = fcn_00406f40 (3);
            } else {
                edx = 0;
                *((ebx*4 + 0x40bb98)) = edx;
                edx = 0;
                dl = *((ebx + 0x40bbe8));
                eax = void (*eax)(uint32_t, uint32_t, uint32_t) (esi, edx, 0);
            }
        }
label_0:
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406eac */
#include <stdint.h>
 
void fcn_00406eac (void) {
    fcn_00406cdc ("Abnormal program termination");
    fcn_00406f40 (3);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402970 */
#include <stdint.h>
 
int32_t fcn_00402970 (uint32_t arg_8h, uint32_t arg_ch) {
    esi = *((ebp + 0xc));
    ebx = *((ebp + 8));
    if (ebx == 0) {
        fcn_00406b6c (0x40a283, "xxtype.cpp", 0x105);
    }
    if (esi == 0) {
        fcn_00406b6c (0x40a292, "xxtype.cpp", 0x106);
    }
    if (esi == ebx) {
        eax = 1;
        goto label_0;
    }
    dx = *((ebx + 4));
    if (dx == *((esi + 4))) {
        ecx = *(ebx);
        if (ecx == *(esi)) {
            goto label_1;
        }
    }
    eax = 0;
    goto label_0;
label_1:
    dx = *((ebx + 4));
    dx |= *((esi + 4));
    if ((dl & 0x80) != 0) {
        eax = 0;
        goto label_0;
    }
    edi = *((ebx + 6));
    edi += ebx;
    if (*((ebx + 6)) == 0) {
        fcn_00406b6c ("tp1->tpName", "xxtype.cpp", 0x11e);
    }
    ebx = *((esi + 6));
    ebx += esi;
    if (*((esi + 6)) != 0) {
        goto label_2;
    }
    fcn_00406b6c ("tp2->tpName", "xxtype.cpp", 0x11f);
    do {
label_2:
        eax = *(edi);
        edx = *(ebx);
        ebx++;
        edi++;
        if (edx != eax) {
            eax = 0;
            goto label_0;
        }
    } while (eax != 0);
    eax = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402484 */
#include <stdint.h>
 
int32_t fcn_00402484 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h) {
    uint32_t var_8h;
    uint32_t var_4h;
    do {
label_1:
        edi = *((ebp + 0xc));
        if ((*((edi + 4)) & 1) == 0) {
            fcn_00406b6c ("IS_STRUC(base->tpMask)", "xxtype.cpp", 0x13b);
        }
        eax = *((ebp + 8));
        if ((*((eax + 4)) & 1) == 0) {
            fcn_00406b6c ("IS_STRUC(derv->tpMask)", "xxtype.cpp", 0x13c);
        }
        edx = *((ebp + 8));
        if ((*((edx + 0xc)) & 4) == 0) {
            fcn_00406b6c ("derv->tpClass.tpcFlags & CF_HAS_BASES", "xxtype.cpp", 0x13e);
        }
        ecx = *((ebp + 8));
        ebx = *((ecx + 0x12));
        ebx += *((ebp + 8));
label_0:
        esi = *(ebx);
        if (esi == 0) {
            goto label_2;
        }
        if ((*((ebx + 8)) & 8) != 0) {
            goto label_3;
        }
        if (*((ebp + 0x14)) != 0) {
            eax = *((ebx + 8));
            eax &= 3;
            if (eax == 3) {
                goto label_4;
            }
        }
        edx = 0;
        goto label_5;
label_4:
        edx = 1;
label_5:
        *((ebp - 4)) = edx;
        eax = fcn_00402970 (edi, esi);
        if (eax != 0) {
            if (*((ebp - 4)) == 0) {
                goto label_6;
            }
            eax = 1;
            goto label_7;
        }
label_6:
        if ((*((esi + 0xc)) & 4) == 0) {
            goto label_3;
        }
        eax = fcn_00402484 (esi, edi, *((ebp + 0x10)), *((ebp - 4)));
    } while (1);
    if (eax != 0) {
        eax = 1;
        goto label_7;
    }
label_3:
    ebx += 0xc;
    goto label_0;
label_2:
    edx = *((ebp + 8));
    ebx = *((edx + 0x10));
    ebx += *((ebp + 8));
    do {
        esi = *(ebx);
        if (esi == 0) {
            goto label_8;
        }
        if (*((ebp + 0x14)) != 0) {
            eax = *((ebx + 8));
            eax &= 3;
            if (eax == 3) {
                goto label_9;
            }
        }
        edx = 0;
        goto label_10;
label_9:
        edx = 1;
label_10:
        *((ebp - 8)) = edx;
        eax = fcn_00402970 (edi, esi);
        if (eax != 0) {
            if (*((ebp - 8)) == 0) {
                goto label_11;
            }
            eax = 1;
            goto label_7;
        }
label_11:
        if ((*((esi + 0xc)) & 4) != 0) {
            eax = fcn_00402484 (esi, edi, *((ebp + 0x10)), *((ebp - 8)));
            goto label_1;
            if (eax == 0) {
                goto label_12;
            }
            eax = 1;
            goto label_7;
        }
label_12:
        ebx += 0xc;
    } while (1);
label_8:
    eax = 0;
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402414 */
#include <stdint.h>
 
uint32_t fcn_00402414 (int32_t arg_8h) {
    ebx = ebp;
    ebx += *((eax + 4));
    *((ebx + 8)) = eax;
    eax = esp + 8;
    *((ebx + 0xc)) = eax;
    *((ebx + 4)) = 0x40245b;
    *((ebx + 0x10)) = 0;
    *((ebx + 0x12)) = 0;
    *((ebx + 0x1c)) = 0;
    eax = *(fs:0);
    *(ebx) = eax;
    *(fs:0) = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40262e */
#include <stdint.h>
 
int32_t fcn_0040262e (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h, uint32_t arg_18h, uint32_t arg_1ch, int32_t arg_20h, uint32_t arg_24h, int32_t arg_28h) {
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    do {
label_0:
        eax = 0;
        edx = 0;
        ecx = 0;
        *((ebp - 8)) = eax;
        *((ebp - 0xc)) = edx;
        *((ebp - 0x10)) = ecx;
        if (*((ebp + 0xc)) != 0) {
            eax = *((ebp + 0xc));
            if ((*((eax + 4)) & 1) != 0) {
                goto label_2;
            }
        }
        fcn_00406b6c ("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)", "xxtype.cpp", 0x34f);
label_2:
        if (*((ebp + 0x14)) != 0) {
            edx = *((ebp + 0x14));
            if ((*((edx + 4)) & 1) != 0) {
                goto label_3;
            }
        }
        fcn_00406b6c ("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)", "xxtype.cpp", 0x350);
label_3:
        if (*((ebp + 0x1c)) != 0) {
            ecx = *((ebp + 0x1c));
            if ((*((ecx + 4)) & 1) != 0) {
                goto label_4;
            }
            fcn_00406b6c ("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)", "xxtype.cpp", 0x351);
        }
label_4:
        if (*((ebp + 0x1c)) != 0) {
            eax = fcn_00402970 (*((ebp + 0x1c)), *((ebp + 0x14)));
            if (eax != 0) {
                fcn_00406b6c ("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 0x355);
            }
            eax = fcn_00402970 (*((ebp + 0x1c)), *((ebp + 0xc)));
            if (eax == 0) {
                goto label_5;
            }
            eax = 0;
            goto label_6;
        }
label_5:
        if (*((ebp + 0x14)) != 0) {
            eax = fcn_00402970 (*((ebp + 0xc)), *((ebp + 0x14)));
            if (eax == 0) {
                goto label_7;
            }
        }
        eax = fcn_00406b6c ("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0", "xxtype.cpp", 0x35b);
label_7:
        edx = *((ebp + 0xc));
        if ((*((edx + 0xc)) & 4) == 0) {
            eax = 0;
            goto label_6;
        }
        edx = 0;
        *((ebp - 4)) = edx;
        ecx = *((ebp + 0xc));
        ebx = *((ecx + 0x12));
        ebx += *((ebp + 0xc));
label_1:
        edi = *(ebx);
        if (edi == 0) {
            goto label_8;
        }
        if ((*((ebx + 8)) & 8) != 0) {
            goto label_9;
        }
        if (*((ebp + 0x24)) != 0) {
            eax = *((ebx + 8));
            eax &= 3;
            if (eax == 3) {
                goto label_10;
            }
        }
        edx = 0;
        goto label_11;
label_10:
        edx = 1;
label_11:
        *((ebp - 0x14)) = edx;
        esi = *((ebp + 8));
        eax = *((ebp + 0x28));
        esi += *((ebx + 4));
        *((ebp - 0x18)) = eax;
        if ((*((ebx + 8)) & 4) != 0) {
            esi = *(esi);
            *((ebp - 0x18)) = edi;
        }
        eax = fcn_00402970 (*((ebp + 0x14)), edi);
        if (eax != 0) {
            goto label_12;
        }
        if ((*((edi + 0xc)) & 4) == 0) {
            goto label_9;
        }
        eax = fcn_0040262e (esi, edi, *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)), *((ebp + 0x20)), *((ebp - 0x14)), *((ebp - 0x18)));
    } while (1);
    if (eax != 0) {
        esi = eax;
        eax = *((ebp + 0x20));
        edx = *(eax);
        *((ebp - 0x14)) = edx;
        goto label_13;
label_12:
        if (*((ebp + 0x10)) != 0) {
            if (esi != *((ebp + 0x10))) {
                goto label_9;
            }
            eax = esi;
            goto label_6;
        }
        if (*((ebp + 0x18)) != 0) {
            if (*((ebp + 0x1c)) == 0) {
                fcn_00406b6c ("srcTypPtr", "xxtype.cpp", 0x3d0);
            }
            eax = fcn_0040262e (esi, edi, *((ebp + 0x18)), *((ebp + 0x1c)), 0, 0, *((ebp + 0x20)), 0, 0);
            goto label_0;
            if (eax == 0) {
                goto label_9;
            }
        }
label_13:
        if (*((ebp - 0x10)) != 0) {
            if (esi == *((ebp - 0xc))) {
                edx = *((ebp - 0x14));
                *((ebp - 8)) |= edx;
            }
        } else {
            *((ebp - 0x10))++;
            *((ebp - 0xc)) = esi;
            ecx = *((ebp - 0x14));
            *((ebp - 8)) = ecx;
        }
    }
label_9:
    ebx += 0xc;
    goto label_1;
label_8:
    if (*((ebp - 4)) == 0) {
        *((ebp - 4))++;
        eax = *((ebp + 0xc));
        ebx = *((eax + 0x10));
        ebx += *((ebp + 0xc));
        goto label_1;
    }
    eax = *((ebp + 0x20));
    edx = *((ebp - 8));
    *(eax) = edx;
    if (*((ebp - 0x10)) != 1) {
        ecx = 0;
        *((ebp - 0xc)) = ecx;
    }
    eax = *((ebp - 0xc));
label_6:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402895 */
#include <stdint.h>
 
uint32_t fcn_00402895 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    do {
        edi = *((ebp + 0x14));
        esi = *((ebp + 8));
        if (*(edi) == 0) {
            eax = fcn_00406b6c ("addr", "xxtype.cpp", 0x515);
        }
label_0:
        ebx = *(esi);
        if (ebx == 0) {
            eax = 0;
            goto label_1;
        }
        edx = *(edi);
        edx += *((esi + 4));
        *((ebp - 4)) = edx;
        if (*((ebp + 0xc)) != 0) {
            ecx = *((ebp - 4));
            eax = *(ecx);
            *((ebp - 4)) = eax;
        }
        eax = fcn_00402970 (ebx, *((ebp + 0x10)));
        if (eax != 0) {
            edx = *((ebp - 4));
            eax = 1;
            *(edi) = edx;
            goto label_1;
        }
        if ((*((ebx + 4)) & 2) == 0) {
            goto label_2;
        }
        eax = *((ebx + 0x10));
        eax += ebx;
        if (eax == 0) {
            goto label_2;
        }
        eax = fcn_00402895 (eax, 0, *((ebp + 0x10)), ebp - 4);
    } while (1);
    if (eax != 0) {
        ecx = *((ebp - 4));
        eax = 1;
        *(edi) = ecx;
    } else {
label_2:
        esi += 0xc;
        goto label_0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4085b8 */
#include <stdint.h>
 
uint32_t fcn_004085b8 (void) {
    *((ebp - 8)) = ebx;
    *((ebp - 0xc)) = edi;
    *((ebp - 0x10)) = esi;
    eax = fcn_00401140 ();
    if (*(eax) == 0) {
        fcn_00406b6c ("__CPPexceptionList", "xx.cpp", 0x629);
    }
    eax = fcn_00401140 ();
    ebx = *(eax);
    fcn_00401140 ();
    edx = *(ebx);
    *(eax) = edx;
    eax = *((ebx + 0x28));
    *((ebp - 4)) = eax;
    esi = *(fs:0);
    if (esi == 0) {
        fcn_00406b6c (0x40be14, "xx.cpp", 0x637);
    }
    if (esi != *((ebx + 0x28))) {
        fcn_00406b6c ("xdrPtr->xdERRaddr == xl", "xx.cpp", 0x638);
    }
    eax = *((ebp - 4));
    ecx = *((ebp - 4));
    edx = *((eax + 0x10));
    eax = *((ecx + 8));
    ecx = *((ebp - 4));
    dx = *((eax + edx));
    *((ecx + 0x10)) = dx;
    fcn_00408530 (ebx);
    uint32_t (*ebx + 0x1c)(uint32_t) (ebx);
    eax = *(0x40cce4);
    if (*(eax) == 2) {
        fcn_00408021 (6, 1);
    }
    ebx = *((ebp - 8));
    edi = *((ebp - 0xc));
    esi = *((ebp - 0x10));
    eax = ebp;
    eax = *((ebp + 4));
    edx = *((ebp - 4));
    edx = *((edx + 0xc));
    ebp = *(ebp);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402ca4 */
#include <stdint.h>
 
int32_t fcn_00402ca4 (void) {
    int32_t var_24h;
    int32_t var_14h;
    eax = 0x40a688;
    fcn_00402414 (edi);
    fcn_00401140 ();
    *((eax + 4)) &= 0xfffffffd;
    edx = *(0x40c8b4);
    if (*(edx) == 2) {
        fcn_00408021 (4, 1);
    }
    fcn_004031a8 ();
    *((ebp - 0x14)) = 8;
    void (*0x40a57c)() ();
    *((ebp - 0x14)) = 0;
    fcn_00406ec0 ();
    edx = *((ebp - 0x24));
    *(fs:0) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408021 */
#include <stdint.h>
 
uint32_t fcn_00408021 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    eax++;
    eax++;
    KERNEL32_DLL_RaiseException (0xeedfae6, 0, eax, ebp + 8, ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099cc */
#include <stdint.h>
 
void KERNEL32_DLL_RaiseException (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4031a8 */
#include <stdint.h>
 
int32_t fcn_004031a8 (void) {
    edi = 0;
    esi = *(0x40ab68);
    ebx = 0x40a6b8;
    while (eax != 0) {
        if ((*((ebx + 0x12)) & 3) != 0) {
            if (*((ebx + 8)) == 0) {
                goto label_0;
            }
            fcn_004032c4 (ebx);
            edi++;
        }
label_0:
        ebx += 0x18;
        eax = esi;
        esi += 0xffffffff;
    }
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402f9a */
#include <stdint.h>
 
void fcn_00402f9a (void) {
    KERNEL32_DLL_RtlUnwind (eax, 0x402fab, edx, 0, edi, esi, ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099d2 */
#include <stdint.h>
 
void KERNEL32_DLL_RtlUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a02 */
#include <stdint.h>
 
void KERNEL32_DLL_UnhandledExceptionFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402f4c */
#include <stdint.h>
 
int32_t fcn_00402f4c (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = *(fs:0);
    *(eax) = ecx;
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402f61 */
#include <stdint.h>
 
int32_t fcn_00402f61 (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = *(fs:0);
    if (eax != ecx) {
        goto label_0;
    }
    eax = *(eax);
    *(fs:0) = eax;
    do {
label_1:
        return eax;
label_0:
    } while (ecx == -1);
    if (*(ecx) != eax) {
        ecx = *(ecx);
        goto label_0;
    }
    eax = *(eax);
    *(ecx) = eax;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402edc */
#include <stdint.h>
 
int32_t fcn_00402edc (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_00402f61 (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402ec0 */
#include <stdint.h>
 
int32_t fcn_00402ec0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    edx = 0;
    *(eax) = edx;
    *((eax + 4)) = 0x402dd0;
    fcn_00402f4c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409960 */
#include <stdint.h>
 
void KERNEL32_DLL_GetFileType (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40375c */
#include <stdint.h>
 
int32_t fcn_0040375c (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax < 0) {
        goto label_0;
    }
    while (eax >= *(0x40ae2c)) {
        eax = 1;
        *(0x40ca50) = eax;
        edx = *((eax + 0x40ac3c));
        eax = edx;
        goto label_1;
label_0:
        eax = -eax;
    }
    *(0x40ca50) = 0xffffffff;
label_1:
    *(0x40b9fc) = eax;
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099de */
#include <stdint.h>
 
void KERNEL32_DLL_SetFilePointer (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4037c0 */
#include <stdint.h>
 
uint32_t fcn_004037c0 (void) {
    eax = KERNEL32_DLL_GetLastError ();
    eax &= 0xffff;
    fcn_0040375c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409966 */
#include <stdint.h>
 
void KERNEL32_DLL_GetLastError (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403000 */
#include <stdint.h>
 
int32_t fcn_00403000 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    ebx = *((ebp + 8));
    if (ebx >= *(0x40ab68)) {
        fcn_0040375c (6);
    } else {
        eax = *((ebp + 0x10));
        eax--;
        if (eax >= 0) {
            if (eax != 0) {
                eax--;
                if (eax == 0) {
                    goto label_0;
                }
            } else {
                edi = 0;
                goto label_1;
            }
            edi = 1;
            goto label_1;
label_0:
            edi = 2;
            goto label_1;
        }
        fcn_0040375c (1);
        goto label_2;
label_1:
        *((ebx*4 + 0x40ab6c)) &= 0xfffffdff;
        eax = *((ebp + 0xc));
        edx = *((ebx*4 + 0x40c988));
        eax = KERNEL32_DLL_SetFilePointer (edx, eax, 0, edi);
        esi = eax;
        eax++;
        if (eax == 0) {
            fcn_004037c0 ();
        }
        eax = esi;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4031e0 */
#include <stdint.h>
 
int32_t fcn_004031e0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    eax = *((ebp + 8));
    if (eax >= *(0x40ab68)) {
        fcn_0040375c (6);
        return eax;
    }
    ecx = *((ebp + 0x10));
    edx = *((ebp + 0xc));
    eax = *((eax*4 + 0x40c988));
    eax = KERNEL32_DLL_WriteFile (eax, edx, ecx, ebp - 4, 0);
    eax--;
    if (eax != 0) {
        fcn_004037c0 ();
        return eax;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a1a */
#include <stdint.h>
 
void KERNEL32_DLL_WriteFile (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4032c4 */
#include <stdint.h>
 
uint32_t fcn_004032c4 (int32_t arg_8h) {
    ebx = *((ebp + 8));
    if (ebx == 0) {
        eax = fcn_00403344 ();
        eax = 0;
    } else {
        if (bl != *((ebx + 0x17))) {
            eax |= 0xffffffff;
        } else {
            if (*((ebx + 8)) >= 0) {
                if ((*((ebx + 0x12)) & 8) == 0) {
                    edx = ebx + 0x14;
                    if (edx != *(ebx)) {
                        goto label_0;
                    }
                }
                ecx = 0;
                *((ebx + 8)) = ecx;
                eax = ebx + 0x14;
                if (eax == *(ebx)) {
                    edx = *((ebx + 4));
                    *(ebx) = edx;
                }
label_0:
                eax = 0;
            } else {
                esi = *((ebx + 0xc));
                esi += *((ebx + 8));
                esi++;
                *((ebx + 8)) -= esi;
                eax = *((ebx + 4));
                *(ebx) = eax;
                edx = *((ebx + 0x16));
                eax = fcn_00403078 (edx, eax, esi);
                if (esi != eax) {
                    if ((*((ebx + 0x13)) & 2) == 0) {
                        *((ebx + 0x12)) |= 0x10;
                        eax |= 0xffffffff;
                    }
                } else {
                    eax = 0;
                }
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403078 */
#include <stdint.h>
 
int32_t fcn_00403078 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h) {
    int32_t var_208h;
    int32_t var_8h;
    int32_t var_4h;
    edi = *((ebp + 0xc));
    eax = *((ebp + 8));
    if (eax >= *(0x40ab68)) {
        eax = fcn_0040375c (0xfffffffffffffffa);
        goto label_1;
    }
    edx = *((ebp + 0x10));
    edx++;
    if (edx < 2) {
        eax = 0;
        goto label_1;
    }
    edx = *((ebp + 8));
    if ((*((edx*4 + 0x40ab6d)) & 8) != 0) {
        ecx = *((ebp + 8));
        fcn_00403000 (ecx, 0, 2);
    }
    eax = *((ebp + 8));
    if ((*((eax*4 + 0x40ab6d)) & 0x40) == 0) {
        edx = *((ebp + 0x10));
        ecx = *((ebp + 8));
        eax = fcn_004031e0 (ecx, edi, edx);
        goto label_1;
    }
    esi = edi;
    eax = 0;
    *((ebp - 4)) = eax;
    edx = 0;
    *((ebp - 8)) = edx;
    goto label_2;
label_0:
    ebx = ebp - 0x208;
    while (eax < *((ebp + 0x10))) {
        al = *(esi);
        esi++;
        if (al == 0xa) {
            *((ebp - 4))++;
            *(ebx) = 0xd;
            ebx++;
            *(ebx) = 0xa;
            ebx++;
        } else {
            *(ebx) = al;
            ebx++;
        }
        edx = ebp - 0x208;
        ecx = ebx;
        ecx -= edx;
        if (ecx >= 0x1ff) {
            goto label_3;
        }
        eax = esi;
        eax -= edi;
    }
label_3:
    edx = ebp - 0x208;
    ecx = ebx;
    ecx -= edx;
    eax = ebp - 0x208;
    edx = *((ebp + 8));
    eax = fcn_004031e0 (edx, eax, ecx);
    ecx = ebp - 0x208;
    ebx -= ecx;
    if (eax != ebx) {
        if (eax == -1) {
            edx |= 0xffffffff;
        } else {
            edx = *((ebp - 8));
            edx -= *((ebp - 4));
            edx += eax;
        }
        eax = edx;
        goto label_1;
    }
    *((ebp - 8)) += eax;
label_2:
    eax = esi;
    eax -= edi;
    if (eax < *((ebp + 0x10))) {
        goto label_0;
    }
    eax = *((ebp - 8));
    eax -= *((ebp - 4));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403344 */
#include <stdint.h>
 
int32_t fcn_00403344 (void) {
    ebp = 0;
    edi = *(0x40ab68);
    ebx = 0x40a6b8;
    while (ecx != 0) {
        eax = *((ebx + 8));
        if (eax < 0) {
            esi = *((ebx + 0xc));
            esi += eax;
            esi++;
            *((ebx + 8)) -= esi;
            eax = *((ebx + 4));
            *(ebx) = eax;
            edx = *((ebx + 0x16));
            eax = fcn_00403078 (edx, eax, esi);
            if (esi != eax) {
                if ((*((ebx + 0x13)) & 2) != 0) {
                    goto label_0;
                }
                *((ebx + 0x12)) |= 0x10;
            }
label_0:
            ebp++;
        }
        ebx += 0x18;
        ecx = edi;
        edi += 0xffffffff;
    }
    eax = ebp;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4037d4 */
#include <stdint.h>
 
int32_t fcn_004037d4 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_2h;
    edi = *((ebp + 0xc));
    bl = *((ebp + 8));
    *((ebp - 2)) = bl;
    esi = 1;
    eax = 1;
    eax = -eax;
    if (eax > *((edi + 8))) {
        ecx = *(edi);
        fcn_0040213c (ecx, ebp - 2, esi);
        *((edi + 8)) += esi;
        *(edi) += esi;
        if ((*((edi + 0x12)) & 8) != 0) {
            if (bl != 0xa) {
                if (bl != 0xd) {
                    goto label_0;
                }
            }
            eax = fcn_004032c4 (edi);
            if (eax != 0) {
                eax |= 0xffffffff;
            }
label_0:
            eax = 0;
            al = bl;
        } else {
        } else {
            ax = *((edi + 0x12));
        }
    }
    if ((al & 0x90) == 0) {
        if ((al & 2) != 0) {
            goto label_1;
        }
    }
    *((edi + 0x12)) |= 0x10;
    eax |= 0xffffffff;
    goto label_2;
label_1:
    *((edi + 0x12)) |= 0x100;
    if (*((edi + 0xc)) != 0) {
        if (*((edi + 8)) != 0) {
            eax = fcn_004032c4 (edi);
            if (eax != 0) {
                eax |= 0xffffffff;
            }
            edx = *((edi + 0xc));
            ecx = ebp - 2;
            edx = -edx;
            *((edi + 8)) = edx;
            eax = *(edi);
            fcn_0040213c (eax, ecx, esi);
            edx = esi - 1;
            *((edi + 8)) += edx;
            *(edi) += esi;
        } else {
        } else {
        }
    }
    if ((*((edi + 0x12)) & 8) != 0) {
        if (bl != 0xa) {
            if (bl != 0xd) {
                goto label_3;
            }
        }
        eax = fcn_004032c4 (edi);
        if (eax != 0) {
            eax |= 0xffffffff;
        }
    } else {
label_3:
        eax = 0;
        al = bl;
        ecx = *((edi + 0x16));
        eax = fcn_00403078 (ecx, ebp - 2, esi);
        if (esi != eax) {
            if ((*((edi + 0x13)) & 2) == 0) {
                *((edi + 0x12)) |= 0x10;
                eax |= 0xffffffff;
            }
        } else {
            eax = 0;
            al = bl;
        }
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099e4 */
#include <stdint.h>
 
void KERNEL32_DLL_SetHandleCount (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409990 */
#include <stdint.h>
 
void KERNEL32_DLL_GetStartupInfoA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409996 */
#include <stdint.h>
 
void KERNEL32_DLL_GetStdHandle (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402fb8 */
#include <stdint.h>
 
int32_t fcn_00402fb8 (int32_t arg_8h) {
    ebx = *((ebp + 8));
    if (ebx >= *(0x40ab68)) {
        eax = 0;
        return eax;
    }
    edx = *((ebx*4 + 0x40c988));
    eax = KERNEL32_DLL_GetFileType (edx);
    al = (eax == 2) ? 1 : 0;
    eax &= 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403244 */
#include <stdint.h>
 
int32_t fcn_00403244 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    ebx = *((ebp + 8));
    edi = *((ebp + 0x14));
    esi = *((ebp + 0xc));
    if ((*((ebx + 0x12)) & 4) != 0) {
        eax = *((ebx + 4));
        fcn_004013f0 (eax);
    }
    *((ebx + 0x12)) &= 0xfff3;
    edx = 0;
    *((ebx + 0xc)) = edx;
    ecx = ebx + 0x14;
    *((ebx + 4)) = ecx;
    *(ebx) = ecx;
    if (*((ebp + 0x10)) != 2) {
        if (edi <= 0) {
            goto label_0;
        }
        *(0x40ba5c) = 0x40440c;
        if (esi == 0) {
            eax = fcn_004013e0 (edi);
            esi = eax;
            if (eax != 0) {
                *((ebx + 0x12)) |= 4;
            } else {
                eax |= 0xffffffff;
                goto label_1;
            }
        }
        *(ebx) = esi;
        *((ebx + 4)) = esi;
        *((ebx + 0xc)) = edi;
        if (*((ebp + 0x10)) != 1) {
            goto label_0;
        }
        *((ebx + 0x12)) |= 8;
    }
label_0:
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403a20 */
#include <stdint.h>
 
int32_t fcn_00403a20 (int32_t arg_8h) {
    ebx = *((ebp + 8));
    eax = 1;
    if (*((ebx + 0x50)) != 0) {
        edx = *((ebx + 0x64));
        if (edx != 0) {
            ecx = *(edx);
            if (ecx > *((ebx + 0x5c))) {
                goto label_0;
            }
            eax = 0;
        }
label_0:
        edx = *((ebx + 0x58));
        ecx = *((ebx + 0x50));
        eax = uint32_t (*ebx + 0x54)(uint32_t, uint32_t, uint32_t, uint32_t) (ebx, ecx, edx, eax);
        if (eax == 0) {
            *((ebx + 0x60)) = 1;
        }
        eax = 0;
        *((ebx + 0x50)) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403a68 */
#include <stdint.h>
 
int32_t fcn_00403a68 (int32_t arg_8h, int32_t arg_ch) {
    ebx = *((ebp + 0xc));
    if (*((ebx + 0x50)) >= 0x50) {
        fcn_00403a20 (ebx);
    }
    eax = *((ebx + 0x64));
    if (eax != 0) {
        edx = *(eax);
        if (edx <= *((ebx + 0x5c))) {
            goto label_0;
        }
    }
    ecx = *((ebx + 0x50));
    al = *((ebp + 8));
    *((ebx + ecx)) = al;
    *((ebx + 0x50))++;
label_0:
    *((ebx + 0x5c))++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405090 */
#include <stdint.h>
 
int32_t fcn_00405090 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h, int32_t arg_1ch) {
    int32_t var_44h;
    edi = *((ebp + 0x14));
    esi = *((ebp + 0x10));
    if (edi < 2) {
        goto label_1;
    }
    if (edi > 0x24) {
        goto label_1;
    }
    if (*((ebp + 0xc)) == 0) {
        if (*((ebp + 8)) >= 0) {
            goto label_2;
        }
    } else {
        if (*((ebp + 8)) >= 0) {
            goto label_2;
        }
    }
    if (*((ebp + 0x18)) != 0) {
        *(esi) = 0x2d;
        esi++;
        eax = *((ebp + 8));
        edx = *((ebp + 0xc));
        eax = -eax;
        edx += 0;
        *((ebp + 8)) = eax;
        edx = -edx;
        *((ebp + 0xc)) = edx;
    }
label_2:
    ebx = ebp - 0x44;
    do {
label_0:
        eax = edi;
        edx:eax = (int64_t) eax;
        eax = *((ebp + 8));
        edx = *((ebp + 0xc));
        al = fcn_00404d5a (eax, edx);
        *(ebx) = al;
        eax = edi;
        edx:eax = (int64_t) eax;
        eax = *((ebp + 8));
        edx = *((ebp + 0xc));
        ebx++;
        eax = fcn_00404c97 (eax, edx);
        *((ebp + 8)) = eax;
        *((ebp + 0xc)) = edx;
    } while (edx != 0);
    if (eax != 0) {
        goto label_0;
    }
    while (ebx != edx) {
        ebx--;
        al = *(ebx);
        if (al < 0xa) {
            eax += 0x30;
            *(esi) = al;
            esi++;
        } else {
            al += *((ebp + 0x1c));
            al += 0xf6;
            *(esi) = al;
            esi++;
        }
        edx = ebp - 0x44;
    }
label_1:
    *(esi) = 0;
    eax = *((ebp + 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x403a9c */
#include <stdint.h>
 
int32_t fcn_00403a9c (int32_t arg_8h, int32_t arg_ch) {
    ecx = 7;
    eax = *((ebp + 0xc));
    esi = *((ebp + 8));
    eax += 7;
    do {
        edx = esi;
        edx &= 0xf;
        if (edx < 0xa) {
            dl += 0x30;
            *(eax) = dl;
        } else {
            dl += 0x37;
            *(eax) = dl;
        }
        esi >>= 4;
        ecx--;
        eax--;
    } while (ecx >= 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404fc8 */
#include <stdint.h>
 
void fcn_00404fc8 (void) {
    uint32_t (*0x40b780)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404fce */
#include <stdint.h>
 
void fcn_00404fce (void) {
    uint32_t (*0x40b784)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40487c */
#include <stdint.h>
 
int32_t fcn_0040487c (int32_t arg_8h, uint32_t arg_ch) {
    uint32_t var_4h;
    eax = *((ebp + 8));
    if (eax == 0) {
        eax = 0;
        return eax;
    }
    edx = *(0x40b59c);
    if (*((edx + 8)) != 0) {
        if (*((ebp + 0xc)) > 0xff) {
            eax |= 0xffffffff;
            return eax;
        }
        dl = *((ebp + 0xc));
        *(eax) = dl;
        eax = 1;
        return eax;
    }
    edx = 0;
    ecx = ebp - 4;
    *((ebp - 4)) = edx;
    eax = ebp + 0xc;
    edx = *(0x40b59c);
    ecx = *(edx);
    eax = KERNEL32_DLL_WideCharToMultiByte (ecx, 0x220, eax, 1, eax, 2, 0, ecx);
    if (eax != 0) {
        if (*((ebp - 4)) == 0) {
            goto label_0;
        }
    }
    eax |= 0xffffffff;
    return eax;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a14 */
#include <stdint.h>
 
void KERNEL32_DLL_WideCharToMultiByte (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404690 */
#include <stdint.h>
 
int32_t fcn_00404690 (int32_t arg_8h, int32_t arg_ch) {
    ecx = *((ebp + 0xc));
    edx = *((ebp + 8));
    if (edx > 0xff) {
        eax = 0;
        return eax;
    }
    eax = *(0x40b59c);
    if (*((eax + 8)) == 0) {
        if (*((eax + 0x10)) != 0) {
            goto label_0;
        }
    }
    edx = (int32_t) dx;
    eax = *((edx*2 + str.________________________________H));
    eax &= ecx;
    return eax;
label_0:
    eax = *((eax + 0x10));
    edx = *((eax + edx*2 + 2));
    ecx &= edx;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4046d4 */
#include <stdint.h>
 
int32_t fcn_004046d4 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_2h;
    ebx = *((ebp + 0xc));
    if (*((ebp + 8)) == 0xffff) {
        eax = 0;
    } else {
        edx = *(0x40b59c);
        if (*((edx + 8)) != 0) {
            if (*((ebp + 8)) < 0x100) {
                ecx = *((ebp + 8));
                eax = *((ecx*2 + str.________________________________H));
                eax &= ebx;
            }
        } else {
            edx = ebp - 2;
            ecx = ebp + 8;
            KERNEL32_DLL_GetStringTypeW (1, ecx, 1, edx);
            eax = *((ebp - 2));
            eax &= ebx;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40999c */
#include <stdint.h>
 
void KERNEL32_DLL_GetStringTypeW (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099c6 */
#include <stdint.h>
 
void KERNEL32_DLL_MultiByteToWideChar (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404f98 */
#include <stdint.h>
 
int32_t fcn_00404f98 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    esp = ebp - 4;
    __asm ("wait");
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    __asm ("jecxz 0x404faf");
    *(0x40b850) = eax;
    eax &= ecx;
    ecx = ~ecx;
    __asm ("wait");
    edx = *((ebp - 4));
    edx &= ecx;
    eax |= edx;
    *((ebp - 4)) = ax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404d5a */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00404d5a (int32_t arg_14h, int32_t arg_18h) {
    ebx = *((esp + 0x14));
    ecx = *((esp + 0x18));
    ecx |= ecx;
    if (ecx == 0) {
        edx |= edx;
        if (edx == 0) {
            goto label_0;
        }
        ebx |= ebx;
        if (ebx == 0) {
            goto label_0;
        }
    }
    ecx = 0x40;
    edi = 0;
    esi = 0;
    do {
        eax <<= 1;
        edx = rotate_left32 (edx, 1);
        esi = rotate_left32 (esi, 1);
        edi = rotate_left32 (edi, 1);
        if (edi >= ebp) {
            if (edi <= ebp) {
                if (esi < ebx) {
                    goto label_1;
                }
            }
            esi -= ebx;
            edi -= ebp;
            eax++;
        }
label_1:
        __asm ("loop 0x404d7d");
    } while (1);
    eax = esi;
    edx = edi;
    do {
        esi = edi;
        ebx = edi;
        return eax;
label_0:
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        tmp_0 = eax;
        eax = edx;
        edx = tmp_0;
        edx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404c97 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00404c97 (int32_t arg_14h, int32_t arg_18h) {
    ebx = *((esp + 0x14));
    ecx = *((esp + 0x18));
    ecx |= ecx;
    if (ecx == 0) {
        edx |= edx;
        if (edx == 0) {
            goto label_0;
        }
        ebx |= ebx;
        if (ebx == 0) {
            goto label_0;
        }
    }
    ecx = 0x40;
    edi = 0;
    esi = 0;
    do {
        eax <<= 1;
        edx = rotate_left32 (edx, 1);
        esi = rotate_left32 (esi, 1);
        edi = rotate_left32 (edi, 1);
        if (edi >= ebp) {
            if (edi <= ebp) {
                if (esi < ebx) {
                    goto label_1;
                }
            }
            esi -= ebx;
            edi -= ebp;
            eax++;
        }
label_1:
        __asm ("loop 0x404cba");
    } while (1);
    do {
        esi = edi;
        ebx = edi;
        return eax;
label_0:
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404434 */
#include <stdint.h>
 
int32_t fcn_00404434 (int32_t arg_8h) {
    eax = *(0x40b59c);
    edx = *((ebp + 8));
    if (edx <= 0x10) {
        if (edx != 0x10) {
            edx -= 0xe;
            if (edx != 0) {
                edx--;
                if (edx == 0) {
                    goto label_0;
                }
            } else {
                edx -= 0x50;
                if (edx == 0) {
                    goto label_1;
                }
                edx--;
                if (edx == 0) {
                    goto label_2;
                }
                goto label_3;
            }
            ecx = *((eax + 0x18));
            eax = *((ecx + 4));
            return eax;
label_0:
            eax = *((eax + 0x18));
            eax = *(eax);
            return eax;
        }
        edx = *((eax + 0x18));
        eax = *((edx + 8));
        return eax;
label_1:
        ecx = *((eax + 0x18));
        eax = *((ecx + 0xc));
        return eax;
label_2:
        eax = *((eax + 0x18));
        eax = *((eax + 0x10));
        return eax;
    }
label_3:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4063ac */
#include <stdint.h>
 
int32_t fcn_004063ac (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_2h;
    *((ebp - 2)) = 0xa;
    eax = *((ebp + 0x18));
    eax -= 2;
    if (eax != 0) {
        eax -= 4;
        if (eax != 0) {
            eax -= 2;
            if (eax != 0) {
            } else {
                edx = *((ebp + 8));
                *(fp_stack--) = *(edx);
                ? = fp_stack[0];
                fp_stack--;
                __asm ("wait");
            } else {
                ecx = *((ebp + 8));
            }
            *(fp_stack--) = *(ecx);
            ? = fp_stack[0];
            fp_stack--;
            __asm ("wait");
        } else {
            eax = *((ebp + 8));
        }
        edx = *(eax);
        *((ebp - 0xc)) = edx;
        edx = *((eax + 4));
        *((ebp - 8)) = edx;
        dx = *((eax + 8));
        *((ebp - 4)) = dx;
    }
    eax = ebp - 0xc;
    edx = ebp - 0xc;
    *((ebp - 0x10)) = edx;
    bx = *((eax + 8));
    edx = ebx;
    dx &= 0x7fff;
    *((eax + 8)) = dx;
    al = ((bh & 0x80) != 0) ? 1 : 0;
    eax &= 1;
    ecx = *((ebp + 0x10));
    *(ecx) = eax;
    ax = fcn_0040507c (ebp - 0xc);
    ax &= 0x4700;
    while (edi < 0) {
label_0:
        ebx = *((ebp + 0xc));
        if (ebx <= 0) {
            ebx = -ebx;
            ebx++;
        }
        if (ebx > 0x28) {
            ebx = 0x28;
        }
        eax = *((ebp + 0x14));
        fcn_004021ac (eax, 0x30, ebx);
        edx = *((ebp + 0x14));
        *((edx + ebx)) = 0;
        eax = 1;
        goto label_1;
        if (ax == 0x500) {
            eax = 0x7fff;
            goto label_1;
        }
        if (ax == 0x100) {
            eax = 0x7ffe;
            goto label_1;
        }
        eax = (int32_t) bx;
        eax &= 0x7fff;
        ecx = *((ebp - 0x10));
        eax += 0xffffc001;
        edx = eax * 0x4d10;
        eax = edx;
        edx = 0;
        dl = *((ecx + 7));
        edx += edx;
        edx &= 0xff;
        ecx = edx;
        edx = ecx + edx*8;
        edx = ecx + edx*2;
        edx = ecx + edx*4;
        edx = (int32_t) dx;
        edx &= 0xffff;
        eax += edx;
        ecx = eax;
        ecx >>= 0x10;
        *((ebp - 0x14)) = ecx;
        if ((eax & 0xffff) != 0) {
            *((ebp - 0x14))++;
        }
        edi = *((ebp + 0xc));
        if (edi > 0) {
            goto label_2;
        }
        edi = *((ebp - 0x14));
        edi -= *((ebp + 0xc));
    }
label_2:
    if (edi > 0x13) {
        edi = 0x13;
    }
    esi = 0x13;
    esi -= *((ebp - 0x14));
    if (esi == 0) {
        goto label_3;
    }
    do {
        ebx = esi;
        if (esi < 0) {
            ebx = esi;
            ebx = -ebx;
        }
        if (ebx > 0x1344) {
            ebx = 0x1344;
        }
        fcn_00404dfc (ebx);
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        if (esi < 0) {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[1] /= fp_stack[0];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
            __asm ("wait");
            esi += ebx;
        } else {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
            __asm ("wait");
            esi -= ebx;
        }
    } while (esi != 0);
label_3:
    ax = fcn_00404dfc (edi);
    ? = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (esi < 0) {
        *((ebp - 0x14))++;
        edi++;
        if (edi > 0x13) {
            goto label_4;
        }
        if (*((ebp + 0xc)) <= 0) {
            goto label_4;
        }
        edx = *((ebp - 2));
        *((ebp - 0x28)) = edx;
        *(fp_stack--) = *((ebp - 0x28));
        *(fp_stack--) = fp_stack[?];
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        edi--;
    } else {
        ax = fcn_00404dfc (edi - 1);
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (edi <= 0) {
            goto label_4;
        }
        *((ebp - 0x14))--;
        edi--;
        if (*((ebp + 0xc)) <= 0) {
            goto label_4;
        }
        edx = *((ebp - 2));
        *((ebp - 0x28)) = edx;
        *(fp_stack--) = *((ebp - 0x28));
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        edi++;
    }
label_4:
    if (edi < 0) {
        goto label_0;
    }
    fcn_00405058 (ebp - 0xc, ebp - 0xc);
    edx = *((ebp + 0x14));
    edx += edi;
    esi = 0;
    ebx = edx;
    *((ebp - 0x24)) = edx;
    *(ebx) = 0;
    ebx--;
    if (edi != 0) {
        goto label_5;
    }
    eax = *((ebp - 0x10));
    esi = *(eax);
    esi &= 0xff;
    esi ^= 1;
    if (esi != 0) {
        goto label_0;
    }
    goto label_6;
    do {
label_5:
        al = fcn_00405360 (ebp - 0xc);
        edx = (int32_t) al;
        esi |= edx;
        eax += 0x30;
        *(ebx) = al;
        ebx--;
        edi--;
        if (edi == 0) {
            goto label_6;
        }
    } while (1);
label_6:
    if (esi == 0) {
        *((ebp - 0x14))++;
        if (*((ebp + 0xc)) <= 0) {
            edx = *((ebp - 0x24));
            *(edx) = 0x30;
        }
        *((ebp - 0x24))++;
        *((ebx + 1)) = 0x31;
    }
    ebx = *((ebp + 0xc));
    if (ebx <= 0) {
        ebx = *((ebp - 0x14));
        ebx -= *((ebp + 0xc));
    }
    if (ebx > 0x28) {
        ebx = 0x28;
    }
    eax = *((ebp - 0x24));
    *(eax) = 0;
    edx = *((ebp - 0x24));
    edx -= *((ebp + 0x14));
    ebx -= edx;
    if (ebx > 0) {
        ecx = *((ebp - 0x24));
        fcn_004021ac (ecx, 0x30, ebx);
        eax = *((ebp - 0x24));
        *((eax + ebx)) = 0;
    }
    eax = *((ebp - 0x14));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4053b8 */
#include <stdint.h>
 
int32_t fcn_004053b8 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 0x10));
    esi = *((ebp + 0xc));
    ebx = *((ebp + 8));
    fcn_00404434 (0xe);
    if (bl == 0x47) {
        goto label_0;
    }
    if (bl != 0x67) {
        goto label_1;
    }
    while (*((edi - 1)) == 0x30) {
        edi--;
        if (esi >= edi) {
            eax = esi;
            goto label_2;
        }
label_0:
    }
label_1:
    dl = *(eax);
    if (dl == *((edi - 1))) {
        edi--;
    }
    eax = edi;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406680 */
#include <stdint.h>
 
int32_t fcn_00406680 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_2h;
    *((ebp - 2)) = 0xa;
    eax = *((ebp + 0x18));
    eax -= 2;
    if (eax != 0) {
        eax -= 4;
        if (eax != 0) {
            eax -= 2;
            if (eax != 0) {
            } else {
                edx = *((ebp + 8));
                *(fp_stack--) = *(edx);
                ? = fp_stack[0];
                fp_stack--;
                __asm ("wait");
            } else {
                ecx = *((ebp + 8));
            }
            *(fp_stack--) = *(ecx);
            ? = fp_stack[0];
            fp_stack--;
            __asm ("wait");
        } else {
            eax = *((ebp + 8));
        }
        edx = *(eax);
        *((ebp - 0xc)) = edx;
        edx = *((eax + 4));
        *((ebp - 8)) = edx;
        dx = *((eax + 8));
        *((ebp - 4)) = dx;
    }
    eax = ebp - 0xc;
    edx = ebp - 0xc;
    *((ebp - 0x10)) = edx;
    bx = *((eax + 8));
    edx = ebx;
    dx &= 0x7fff;
    *((eax + 8)) = dx;
    al = ((bh & 0x80) != 0) ? 1 : 0;
    eax &= 1;
    ecx = *((ebp + 0x10));
    *(ecx) = eax;
    ax = fcn_0040507c (ebp - 0xc);
    ax &= 0x4700;
    while (edi < 0) {
label_0:
        ebx = *((ebp + 0xc));
        if (ebx <= 0) {
            ebx = -ebx;
            ebx++;
        }
        if (ebx > 0x28) {
            ebx = 0x28;
        }
        eax = *((ebp + 0x14));
        fcn_00402238 (eax, 0x30, ebx);
        edx = *((ebp + 0x14));
        eax = 1;
        *((edx + ebx*2)) = 0;
        goto label_1;
        if (ax == 0x500) {
            eax = 0x7fff;
            goto label_1;
        }
        if (ax == 0x100) {
            eax = 0x7ffe;
            goto label_1;
        }
        eax = (int32_t) bx;
        eax &= 0x7fff;
        ecx = *((ebp - 0x10));
        eax += 0xffffc001;
        edx = eax * 0x4d10;
        eax = edx;
        edx = 0;
        dl = *((ecx + 7));
        edx += edx;
        edx &= 0xff;
        ecx = edx;
        edx = ecx + edx*8;
        edx = ecx + edx*2;
        edx = ecx + edx*4;
        edx = (int32_t) dx;
        edx &= 0xffff;
        eax += edx;
        ecx = eax;
        ecx >>= 0x10;
        *((ebp - 0x14)) = ecx;
        if ((eax & 0xffff) != 0) {
            *((ebp - 0x14))++;
        }
        edi = *((ebp + 0xc));
        if (edi > 0) {
            goto label_2;
        }
        edi = *((ebp - 0x14));
        edi -= *((ebp + 0xc));
    }
label_2:
    if (edi > 0x13) {
        edi = 0x13;
    }
    esi = 0x13;
    esi -= *((ebp - 0x14));
    if (esi == 0) {
        goto label_3;
    }
    do {
        ebx = esi;
        if (esi < 0) {
            ebx = esi;
            ebx = -ebx;
        }
        if (ebx > 0x1344) {
            ebx = 0x1344;
        }
        fcn_00404dfc (ebx);
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        if (esi < 0) {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[1] /= fp_stack[0];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
            __asm ("wait");
            esi += ebx;
        } else {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
            __asm ("wait");
            esi -= ebx;
        }
    } while (esi != 0);
label_3:
    ax = fcn_00404dfc (edi);
    ? = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (esi < 0) {
        *((ebp - 0x14))++;
        edi++;
        if (edi > 0x13) {
            goto label_4;
        }
        if (*((ebp + 0xc)) <= 0) {
            goto label_4;
        }
        edx = *((ebp - 2));
        *((ebp - 0x28)) = edx;
        *(fp_stack--) = *((ebp - 0x28));
        *(fp_stack--) = fp_stack[?];
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        edi--;
    } else {
        ax = fcn_00404dfc (edi - 1);
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (edi <= 0) {
            goto label_4;
        }
        *((ebp - 0x14))--;
        edi--;
        if (*((ebp + 0xc)) <= 0) {
            goto label_4;
        }
        edx = *((ebp - 2));
        *((ebp - 0x28)) = edx;
        *(fp_stack--) = *((ebp - 0x28));
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        edi++;
    }
label_4:
    if (edi < 0) {
        goto label_0;
    }
    fcn_00405058 (ebp - 0xc, ebp - 0xc);
    edx = edi;
    edx += edx;
    esi = 0;
    edx += *((ebp + 0x14));
    ebx = edx;
    *((ebp - 0x24)) = edx;
    *(ebx) = 0;
    ebx -= 2;
    if (edi != 0) {
        goto label_5;
    }
    eax = *((ebp - 0x10));
    esi = *(eax);
    esi &= 0xff;
    esi ^= 1;
    if (esi != 0) {
        goto label_0;
    }
    goto label_6;
    do {
label_5:
        al = fcn_00405360 (ebp - 0xc);
        edx = (int32_t) al;
        esi |= edx;
        ecx = (int32_t) al;
        cx += 0x30;
        *(ebx) = cx;
        ebx -= 2;
        edi--;
        if (edi == 0) {
            goto label_6;
        }
    } while (1);
label_6:
    if (esi == 0) {
        *((ebp - 0x14))++;
        if (*((ebp + 0xc)) <= 0) {
            eax = *((ebp - 0x24));
            *(eax) = 0x30;
        }
        *((ebp - 0x24)) += 2;
        *((ebx + 2)) = 0x31;
    }
    ebx = *((ebp + 0xc));
    if (ebx <= 0) {
        ebx = *((ebp - 0x14));
        ebx -= *((ebp + 0xc));
    }
    if (ebx > 0x28) {
        ebx = 0x28;
    }
    eax = *((ebp - 0x24));
    *(eax) = 0;
    edx = *((ebp - 0x24));
    edx -= *((ebp + 0x14));
    edx >>= 1;
    if (edx < 0) {
        edx += 0;
    }
    ebx -= edx;
    if (ebx > 0) {
        ecx = *((ebp - 0x24));
        fcn_00402238 (ecx, 0x30, ebx);
        eax = *((ebp - 0x24));
        *((eax + ebx*2)) = 0;
    }
    eax = *((ebp - 0x14));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4023d4 */
#include <stdint.h>
 
uint32_t fcn_004023d4 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 0xc));
    eax = fcn_004023bc (esi);
    ebx = eax;
    ecx = 0;
    eax = *((ebp + 8));
    edx = *((ebp + 8));
    eax = esi;
    if (ebx <= ecx) {
        goto label_0;
    }
    do {
        si = *(eax);
        *(edx) = si;
        ecx++;
        edx += 2;
        eax += 2;
    } while (ebx > ecx);
label_0:
    eax = *((ebp + 8));
    *((eax + ebx*2)) = 0;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4056b4 */
#include <stdint.h>
 
int32_t fcn_004056b4 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    ebx = *((ebp + 0x10));
    esi = *((ebp + 0xc));
    edi = *((ebp + 8));
    fcn_00404434 (0xe);
    if (di == 0x47) {
        goto label_0;
    }
    if (di != 0x67) {
        goto label_1;
    }
    while (*((ebx - 2)) == 0x30) {
        ebx -= 2;
        if (esi >= ebx) {
            eax = esi;
            goto label_2;
        }
label_0:
    }
label_1:
    dx = *(eax);
    if (dx == *((ebx - 2))) {
        ebx -= 2;
    }
    eax = ebx;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406ab0 */
#include <stdint.h>
 
int32_t fcn_00406ab0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax > 0xff) {
        eax = 0;
        return eax;
    }
    fcn_0040454c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40454c */
#include <stdint.h>
 
int32_t fcn_0040454c (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_00404690 (eax, 8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405388 */
#include <stdint.h>
 
int32_t fcn_00405388 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 8));
    ecx = 0xa;
    eax = *(esi);
    edx:eax = eax * ecx;
    eax += *((ebp + 0xc));
    edx += 0;
    *(esi) = eax;
    edi = edx;
    eax = *((esi + 4));
    edx:eax = eax * ecx;
    eax += edi;
    edx += 0;
    *((esi + 4)) = eax;
    eax = edx;
    esi = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405028 */
#include <stdint.h>
 
int32_t fcn_00405028 (int32_t arg_8h) {
    int32_t var_ah;
    int32_t var_6h;
    int32_t var_2h;
    esp = ebp - 0xa;
    eax = *((ebp + 8));
    if ((*((eax + 7)) & 0x80) == 0) {
        *(fp_stack--) = *(eax);
        return eax;
    }
    ecx = *(eax);
    *((ebp - 0xa)) = ecx;
    ecx = *((eax + 4));
    *((ebp - 6)) = ecx;
    *((ebp - 2)) = 0x403e;
    *(fp_stack--) = fp_stack[?];
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404dfc */
#include <stdint.h>
 
int32_t fcn_00404dfc (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    edx = *((ebp + 8));
    if (edx < 0xffffecbc) {
        *(fp_stack--) = fp_stack[?];
    } else {
        if (edx > 0x1344) {
            eax = 0x40b776;
            *(fp_stack--) = fp_stack[?];
        } else {
            if (edx == 0) {
                *(fp_stack--) = fp_stack[?];
            } else {
                eax = edx;
                if (edx < 0) {
                    eax = edx;
                    eax = -eax;
                }
                ecx = eax;
                ecx &= 7;
                eax >>= 3;
                ecx *= 5;
                ebx = *((ecx*2 + 0x40b6c0));
                *((ebp - 0xc)) = ebx;
                ebx = *((ecx*2 + 0x40b6c4));
                *((ebp - 8)) = ebx;
                bx = *((ecx*2 + 0x40b6c8));
                *((ebp - 4)) = bx;
                if ((al & 1) != 0) {
                    *(fp_stack--) = fp_stack[?];
                    *(fp_stack--) = fp_stack[?];
                    fp_stack[0] *= fp_stack[1];
                    fp_stack++;
                    ? = fp_stack[0];
                    fp_stack--;
                    __asm ("wait");
                }
                eax >>= 1;
                if (eax != 0) {
                    if ((al & 1) != 0) {
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b726;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b730;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b73a;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b744;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b74e;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b758;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) != 0) {
                        ecx = 0x40b762;
                        *(fp_stack--) = fp_stack[?];
                        *(fp_stack--) = fp_stack[?];
                        fp_stack[0] *= fp_stack[1];
                        fp_stack++;
                        ? = fp_stack[0];
                        fp_stack--;
                        __asm ("wait");
                    }
                    eax >>= 1;
                    if ((al & 1) == 0) {
                        goto label_0;
                    }
                    eax = 0x40b76c;
                    *(fp_stack--) = fp_stack[?];
                    *(fp_stack--) = fp_stack[?];
                    fp_stack[0] *= fp_stack[1];
                    fp_stack++;
                    ? = fp_stack[0];
                    fp_stack--;
                    __asm ("wait");
                }
label_0:
                if (edx < 0) {
                    *(fp_stack--) = fp_stack[?];
                    *(0x404f80) /= fp_stack[0];
                } else {
                    *(fp_stack--) = fp_stack[?];
                }
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405144 */
#include <stdint.h>
 
uint32_t fcn_00405144 (int32_t arg_8h, int32_t arg_ch, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_6h;
    int32_t var_4h;
    esi = *((ebp + 8));
    if (esi == 0) {
        cx = 0x407e;
        bx = 0x3f6a;
    } else {
        cx = 0x43fe;
        bx = 0x3bcd;
    }
    eax = ebp + 0xc;
    dx = *((eax + 8));
    edi = edx;
    di &= 0x8000;
    *((ebp - 6)) = di;
    dx &= 0x7fff;
    if (dx == 0x7fff) {
        *(fp_stack--) = fp_stack[?];
        *((ebp - 0x1c)) = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        *(fp_stack--) = *((ebp - 0x1c));
    } else {
        if (cx < dx) {
            eax = *((ebp + 0x18));
            *((ebp - 0x10)) = eax;
            eax = *((ebp + 0x1c));
            *((ebp - 0xc)) = eax;
        } else {
            if (cx == dx) {
                eax = fcn_00404f98 (0, 0);
                *((ebp - 4)) = eax;
                fcn_00404f98 (0xc00, 0xc00);
                if (esi == 0) {
                    *(fp_stack--) = fp_stack[?];
                    *((ebp - 0x14)) = fp_stack[0];
                    fp_stack--;
                    __asm ("wait");
                    *(fp_stack--) = *((ebp - 0x14));
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                    __asm ("wait");
                } else {
                    *(fp_stack--) = fp_stack[?];
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                    __asm ("wait");
                }
                edx = *((ebp - 4));
                eax = fcn_00404f98 (edx, 0xc00);
                *(fp_stack--) = *((ebp - 0x10));
                goto label_0;
            }
            cx = *(eax);
            cx |= dx;
            cx |= *((eax + 2));
            cx |= *((eax + 4));
            cx |= *((eax + 6));
            if (cx == 0) {
                *(fp_stack--) = fp_stack[?];
                *((ebp - 0x1c)) = fp_stack[0];
                fp_stack--;
                __asm ("wait");
                *(fp_stack--) = *((ebp - 0x1c));
                goto label_0;
            }
            if (bx <= dx) {
                goto label_1;
            }
            eax = 0;
            *((ebp - 0x10)) = eax;
            *((ebp - 0xc)) = eax;
        }
        *(0x40b9fc) = 0x22;
        if (*((ebp - 6)) != 0) {
            *(fp_stack--) = *((ebp - 0x10));
            fp_stack[0] = -fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp - 0x10));
            goto label_0;
label_1:
            *(fp_stack--) = fp_stack[?];
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            __asm ("wait");
            *(fp_stack--) = *((ebp - 0x1c));
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404650 */
#include <stdint.h>
 
uint32_t fcn_00404650 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_004046d4 (eax, 8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40507c */
#include <stdint.h>
 
int32_t fcn_0040507c (int32_t arg_4h) {
    eax = *((esp + 4));
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    eax = 0;
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    __asm ("wait");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405058 */
#include <stdint.h>
 
int32_t fcn_00405058 (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 4));
    edx = *((esp + 8));
    if (*((edx + 8)) != 0x403e) {
        *(fp_stack--) = fp_stack[?];
        *(eax) = fp_stack[0];
        fp_stack--;
        __asm ("wait");
        return eax;
    }
    ecx = *(edx);
    *(eax) = ecx;
    ecx = *((edx + 4));
    *((eax + 4)) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405360 */
#include <stdint.h>
 
int32_t fcn_00405360 (int32_t arg_8h) {
    esi = *((ebp + 8));
    ecx = 0xa;
    eax = *((esi + 4));
    edx = 0;
    eax |= eax;
    if (eax != 0) {
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        *((esi + 4)) = eax;
    }
    eax = *(esi);
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *(esi) = eax;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402238 */
#include <stdint.h>
 
int32_t fcn_00402238 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 8));
    ax = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    do {
        *(es:edi) = ax;
        ecx--;
        es:edi += 2;
    } while (ecx != 0);
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40997e */
#include <stdint.h>
 
void KERNEL32_DLL_GetOEMCP (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409942 */
#include <stdint.h>
 
void KERNEL32_DLL_GetACP (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409948 */
#include <stdint.h>
 
void KERNEL32_DLL_GetCPInfo (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406974 */
#include <stdint.h>
 
uint32_t fcn_00406974 (int32_t arg_8h) {
    uint32_t var_14h;
    int32_t var_eh;
    esi = *((ebp + 8));
    if (esi == 0xfffffffe) {
        eax = KERNEL32_DLL_GetOEMCP ();
        esi = eax;
    } else {
        if (esi == 0xfffffffd) {
            eax = KERNEL32_DLL_GetACP ();
            esi = eax;
        } else {
            if (esi != 0xfffffffc) {
                goto label_1;
            }
            eax = *(0x40b59c);
            esi = *(eax);
        }
    }
label_1:
    if (esi != 0) {
        eax = KERNEL32_DLL_GetCPInfo (esi, ebp - 0x14);
        if (eax != 0) {
            goto label_2;
        }
        eax = fcn_00406cdc ("Error: system code page access failure; MBCS table not initialized");
        eax |= 0xffffffff;
        goto label_3;
    }
label_2:
    eax = 0;
    edx = 0x40ca54;
    do {
        *(edx) = 0;
        eax++;
        edx++;
    } while (eax < 0x101);
    if (esi == 0) {
        goto label_4;
    }
    if (*((ebp - 0x14)) <= 1) {
        goto label_4;
    }
    ecx = ebp - 0xe;
    goto label_5;
label_0:
    eax &= 0xff;
    edx = eax + 0x40ca55;
    while (eax <= ebx) {
        *(edx) = 4;
        eax++;
        edx++;
        ebx = 0;
        bl = *((ecx + 1));
    }
    ecx += 2;
label_5:
    al = *(ecx);
    if (al == 0) {
        goto label_6;
    }
    if (*((ecx + 1)) != 0) {
        goto label_0;
    }
label_6:
    eax = 1;
    edx = 0x40ca56;
    do {
        *(edx) |= 8;
        eax++;
        edx++;
    } while (eax < 0xff);
    if (esi != 0x3a4) {
        goto label_7;
    }
    eax = 0;
    al = *(0x40b96c);
    edx = eax + 0x40ca55;
    while (eax <= ecx) {
        *(edx) |= 1;
        eax++;
        edx++;
        ecx = 0;
        cl = *(0x40b96d);
    }
    eax = 0;
    al = *(0x40b96e);
    edx = eax + 0x40ca55;
    while (eax <= ecx) {
        *(edx) |= 2;
        eax++;
        edx++;
        ecx = 0;
        cl = *(0x40b96f);
    }
label_7:
    *(0x40cb58) = esi;
    goto label_8;
label_4:
    eax = 0;
    *(0x40cb58) = eax;
label_8:
    eax = 0;
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4022ac */
#include <stdint.h>
 
int32_t fcn_004022ac (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 8));
    ecx = 0xffffffff;
    al = 0;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = *((ebp + 0x10));
    ebx = edi - 1;
    ecx &= 3;
    edx = *((ebp + 0xc));
    __asm ("jecxz 0x4022d9");
    do {
        al = *(edx);
        *(ebx) = al;
        if (al == 0) {
            goto label_0;
        }
        edx++;
        ebx++;
        ecx--;
    } while (ecx != 0);
    ecx = *((ebp + 0x10));
    ecx >>= 2;
    __asm ("jecxz 0x402310");
    do {
        al = *(edx);
        *(ebx) = al;
        if (al == 0) {
            goto label_0;
        }
        al = *((edx + 1));
        *((ebx + 1)) = al;
        if (al == 0) {
            goto label_0;
        }
        al = *((edx + 2));
        *((ebx + 2)) = al;
        if (al == 0) {
            goto label_0;
        }
        al = *((edx + 3));
        edx += 4;
        *((ebx + 3)) = al;
        ebx += 4;
        if (al == 0) {
            goto label_0;
        }
        ecx--;
    } while (ecx != 0);
    *(ebx) = 0;
label_0:
    eax = *((ebp + 8));
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40996c */
#include <stdint.h>
 
void KERNEL32_DLL_GetLocalTime (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a2c */
#include <stdint.h>
 
void USER32_DLL_wsprintfA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409936 */
#include <stdint.h>
 
void KERNEL32_DLL_CreateFileA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406bcc */
#include <stdint.h>
 
uint32_t fcn_00406bcc (void) {
    int32_t var_10h_2;
    int32_t var_1ah_2;
    int32_t var_1ah;
    int32_t var_14h;
    int32_t var_12h;
    int32_t var_10h;
    int32_t var_eh;
    KERNEL32_DLL_GetLocalTime (esp);
    eax = *((esp + 0xe));
    edx = *((esp + 0x10));
    ecx = *((esp + 0x12));
    eax = *((esp + 0x14));
    edx = *((esp + 0x10));
    ecx = *((esp + 0x1a));
    eax = *((esp + 0x1a));
    USER32_DLL_wsprintfA (0x40cc5c, "%02d/%02d/%04d %02d:%02d:%02d.%03d ", eax, ecx, edx, eax, ecx, edx, eax);
    eax = 0x40cc5c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409930 */
#include <stdint.h>
 
void KERNEL32_DLL_CloseHandle (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099a2 */
#include <stdint.h>
 
void KERNEL32_DLL_GetVersion (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409954 */
#include <stdint.h>
 
void KERNEL32_DLL_GetCurrentThreadId (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a20 */
#include <stdint.h>
 
void USER32_DLL_EnumThreadWindows (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409972 */
#include <stdint.h>
 
void KERNEL32_DLL_GetModuleFileNameA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406acc */
#include <stdint.h>
 
int32_t fcn_00406acc (int32_t arg_8h, int32_t arg_ch) {
    ecx = *((ebp + 0xc));
    eax = *((ebp + 8));
    edx = 0;
    do {
        ebx = 0;
        bl = *(eax);
        if ((*((ebx + 0x40ca55)) & 4) != 0) {
            if (*((eax + 1)) == 0) {
                eax++;
                if (ecx != 0) {
                    goto label_0;
                }
                edx = eax;
                goto label_0;
            }
            ebx = 0;
            bl = *(eax);
            ebx <<= 8;
            esi = *((eax + 1));
            ebx |= esi;
            if (ecx == ebx) {
                edx = eax;
            }
            eax++;
        } else {
            ebx = 0;
            bl = *(eax);
            if (ecx != ebx) {
                goto label_1;
            }
            edx = eax;
        }
label_1:
        bl = *(eax);
        eax++;
    } while (bl != 0);
label_0:
    eax = edx;
    ebx = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406c98 */
#include <stdint.h>
 
int32_t fcn_00406c98 (void) {
    eax = 0;
    eax = KERNEL32_DLL_GetVersion (ecx);
    eax >>= 0x10;
    edx = (int32_t) ax;
    if ((dh & 0x80) == 0) {
        eax = 0x2000;
        return eax;
    }
    edx = esp;
    eax = KERNEL32_DLL_GetCurrentThreadId (0x406c84, edx);
    USER32_DLL_EnumThreadWindows (eax);
    if (*(esp) != 0) {
        eax = 0x2000;
    } else {
        eax = 0x1000;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409a26 */
#include <stdint.h>
 
void USER32_DLL_MessageBoxA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406c1c */
#include <stdint.h>
 
int32_t fcn_00406c1c (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    edi = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = KERNEL32_DLL_CreateFileA (eax, 0xc0000000, 0, 0, 2, 0x80, 0, edi, esi, ebx, ecx);
    ebx = eax;
    if (eax != 0) {
        eax = fcn_00406bcc ();
        esi = eax;
        eax = ebp - 4;
        eax = fcn_00402250 (esi);
        KERNEL32_DLL_WriteFile (ebx, esi, eax);
        edx = ebp - 4;
        eax = fcn_00402250 (edi);
        KERNEL32_DLL_WriteFile (ebx, edi, eax);
        KERNEL32_DLL_CloseHandle (ebx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099a8 */
#include <stdint.h>
 
void KERNEL32_DLL_GetVersionExA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407b2c */
#include <stdint.h>
 
uint32_t fcn_00407b2c (void) {
    if (*(0x40bbf8) != 0) {
        goto label_0;
    }
    *(0x40bbf8) = 1;
    fcn_00407a58 (0x40ccd4, 1);
    fcn_00407a58 (0x40ccb8, 1);
    eax = fcn_00407a54 ();
    edi = eax;
    if (eax == 0) {
        goto label_0;
    }
    fcn_00407a58 (edi, 1);
    esi = 0;
    ebx = edi + 4;
    while (esi < *(edi)) {
        eax = *(ebx);
        edx = *((eax + 0x14));
        uint32_t (*eax + 0x18)(uint32_t, uint32_t) (1, edx);
        esi++;
        ebx += 4;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407a40 */
#include <stdint.h>
 
int32_t fcn_00407a40 (int32_t arg_8h) {
    eax = *((ebp + 8));
    KERNEL32_DLL_ExitProcess (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40993c */
#include <stdint.h>
 
void KERNEL32_DLL_ExitProcess (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402388 */
#include <stdint.h>
 
uint32_t fcn_00402388 (int32_t arg_8h) {
    edi = *((ebp + 8));
    eax = fcn_00402250 (edi);
    esi = eax;
    esi++;
    eax = fcn_004013e0 (esi);
    ebx = eax;
    if (eax != 0) {
        fcn_0040213c (ebx, edi, esi);
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4070a0 */
#include <stdint.h>
 
int32_t fcn_004070a0 (int32_t arg_8h, uint32_t arg_ch) {
    esi = *((ebp + 8));
    eax = *(0x40ccb4);
    if (eax == *(0x40cc80)) {
        *(0x40cc80) += 0x10;
        edx = *(0x40cc80);
        edx <<= 2;
        ecx = *(0x40cc7c);
        eax = fcn_00401400 (ecx, edx);
        *(0x40cc7c) = eax;
        if (eax != 0) {
            goto label_0;
        }
        fcn_00406e08 ("No space for command line argument vector");
    }
label_0:
    if (*((ebp + 0xc)) == 0) {
        goto label_1;
    }
    eax = fcn_00402250 (esi);
    eax++;
    eax = fcn_004013e0 (eax);
    ebx = eax;
    if (eax == 0) {
        eax = fcn_00406e08 ("No space for command line argument");
    }
    eax = 0;
    edi = esi;
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    edi -= ecx;
    esi = ebx;
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    edx = ecx;
    eax = edi;
    ecx >>= 2;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    ecx = edx;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    goto label_2;
label_1:
    ebx = esi;
label_2:
    eax = *(0x40cc7c);
    edx = *(0x40ccb4);
    *((eax + edx*4)) = ebx;
    *(0x40ccb4)++;
    edi = esi;
    ebx = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x401400 */
#include <stdint.h>
 
int32_t fcn_00401400 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    uint32_t (*0x40a210)(uint32_t, uint32_t) (edx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4072c4 */
#include <stdint.h>
 
int32_t fcn_004072c4 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    ecx = *(eax);
    if (*(ecx) == 0x5c) {
        if (*((ecx + 1)) == 0x22) {
            ecx = *(edx);
            *(ecx) = 0x22;
            *(eax) += 2;
        }
    } else {
        if (*(0x40bacc) != 0) {
            ecx = *(eax);
            if (*(ecx) == 0x5c) {
                if (*((ecx + 1)) != 0x5c) {
                    goto label_0;
                }
                ecx = *(edx);
                *(ecx) = 0x5c;
                *(eax) += 2;
            }
        } else {
label_0:
            esi = *(eax);
            cl = *(esi);
            ebx = 0;
            bl = cl;
            if ((*((ebx + 0x40ca55)) & 4) != 0) {
                if (*((esi + 1)) == 0) {
                    goto label_1;
                }
                ebx = *(edx);
                *(ebx) = cl;
                *(eax)++;
                *(edx)++;
            }
label_1:
            ecx = *(eax);
            ebx = *(edx);
            cl = *(ecx);
            *(ebx) = cl;
            *(eax)++;
        }
    }
    *(edx)++;
    ebx = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4074e8 */
#include <stdint.h>
 
int32_t fcn_004074e8 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    ecx = *(eax);
    if (*(ecx) == 0x5c) {
        if (*((ecx + 2)) == 0x22) {
            ecx = *(edx);
            *(ecx) = 0x22;
            *(eax) += 4;
        }
    } else {
        if (*(0x40bacc) != 0) {
            ecx = *(eax);
            if (*(ecx) == 0x5c) {
                if (*((ecx + 2)) != 0x5c) {
                    goto label_0;
                }
                ecx = *(edx);
                *(ecx) = 0x5c;
                *(eax) += 4;
            }
        } else {
label_0:
            ecx = *(eax);
            ebx = *(edx);
            cx = *(ecx);
            *(ebx) = cx;
            *(eax) += 2;
        }
    }
    *(edx) += 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40995a */
#include <stdint.h>
 
void KERNEL32_DLL_GetEnvironmentStrings (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4011e0 */
#include <stdint.h>
 
uint32_t fcn_004011e0 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 8));
    esi *= *((ebp + 0xc));
    eax = fcn_004013e0 (esi);
    ebx = eax;
    if (eax != 0) {
        fcn_004021ac (ebx, 0, esi);
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4075dc */
#include <stdint.h>
 
uint32_t fcn_004075dc (void) {
    if (*(0x40cc90) != 0) {
        goto label_0;
    }
    if (*(0x40ccb0) == 0) {
        eax = KERNEL32_DLL_GetEnvironmentStrings ();
        *(0x40ccb0) = eax;
        if (eax != 0) {
            goto label_1;
        }
        fcn_00406e08 ("GetEnvironmentStrings failed");
    }
label_1:
    ebp = 0;
    esi = 0;
    ebx = *(0x40ccb0);
    while (eax != 0) {
        eax = edi + 1;
        esi++;
        ebp += eax;
        ebx += eax;
        eax = fcn_00402250 (ebx);
        edi = eax;
    }
    eax = fcn_004013e0 (ebp + 1);
    ebx = eax;
    *(0x40cc94) = ebx;
    if (ebx == 0) {
        eax = 0;
        goto label_2;
    }
    edx = *(0x40ccb0);
    eax = fcn_0040213c (ebx, edx, edi);
    goto label_3;
label_0:
    esi = 0;
    ebx = *(0x40cc90);
    while (eax != 0) {
        eax = fcn_00402250 (eax);
        if (eax == 0) {
            esi--;
        }
        esi++;
        ebx += 4;
        eax = *(ebx);
    }
label_3:
    ebx = esi + 4;
    *(0x40cc98) = ebx;
    ebx++;
    eax = fcn_004011e0 (ebx, 4);
    *(esp) = eax;
    if (eax == 0) {
        eax = 0;
        goto label_2;
    }
    if (*(0x40cc90) != 0) {
        goto label_4;
    }
    esi = 0;
    ebx = *(0x40cc94);
    eax = *(esp);
    while (eax != 0) {
        *(ebp) = ebx;
        ebp += 4;
        esi++;
        edi++;
        ebx += edi;
        eax = fcn_00402250 (ebx);
        edi = eax;
    }
    goto label_5;
label_4:
    esi = 0;
    ebx = *(0x40cc90);
    eax = *(esp);
    edi = *(esp);
    while (eax != 0) {
        eax = fcn_00402250 (eax);
        if (eax != 0) {
            eax = *(ebx);
            *(edi) = eax;
        } else {
            esi--;
            edi += 0xfffffffc;
        }
        edi += 4;
        esi++;
        ebx += 4;
        eax = *(ebx);
    }
label_5:
    eax = *(0x40cc90);
    if (eax != 0) {
        fcn_004013f0 (eax);
    }
    edx = *(esp);
    eax = 1;
    *(0x40cc90) = edx;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x404f84 */
#include <stdint.h>
 
uint32_t fcn_00404f84 (void) {
    int32_t var_2h;
    esp = ebp - 2;
    ebp - 2 = fp_status;
    eax = *((ebp - 2));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4099d8 */
#include <stdint.h>
 
void KERNEL32_DLL_SetConsoleCtrlHandler (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407748 */
#include <stdint.h>
 
int32_t fcn_00407748 (int32_t arg_8h) {
    eax = 0;
    edx = 0x40bbc0;
    ecx = *((ebp + 8));
    do {
        if (ecx == *(edx)) {
            goto label_0;
        }
        eax++;
        edx += 4;
    } while (eax < 0xa);
    eax |= 0xffffffff;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407a58 */
#include <stdint.h>
 
int32_t fcn_00407a58 (int32_t arg_8h, uint32_t arg_ch) {
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    if (*((ebp + 0xc)) != 0) {
        *((ebp - 0xc)) = 0xffffffff;
        *((ebp - 0x10)) = 0xffffffff;
        eax = 0xff;
    } else {
        *((ebp - 0xc)) = 0x100;
        *((ebp - 0x10)) = 1;
        eax = 0;
    }
    esi = eax;
    if (esi == *((ebp - 0xc))) {
        goto label_2;
    }
label_1:
    eax = 0;
    *((ebp - 8)) = eax;
    edx = *((ebp + 8));
    ecx = edx + 4;
    *((ebp - 0x14)) = ecx;
    goto label_3;
label_0:
    eax = *((ebp - 0x14));
    eax = *(eax);
    if (*((ebp + 0xc)) != 0) {
        edi = *((eax + 8));
    } else {
        edi = *(eax);
    }
    if (*((ebp + 0xc)) != 0) {
        edx = *((eax + 0xc));
    } else {
        edx = *((eax + 4));
    }
    *((ebp - 4)) = edx;
    if (*((ebp + 0xc)) != 0) {
        goto label_4;
    }
    ebx = edi;
    if (ebx >= *((ebp - 4))) {
        goto label_5;
    }
    do {
        eax = esi;
        if (al == *((ebx + 1))) {
            uint32_t (*ebx + 2)() ();
        }
        ebx += 6;
    } while (ebx < *((ebp - 4)));
    goto label_5;
label_4:
    ebx = *((ebp - 4));
    ebx += 0xfffffffa;
    if (edi > ebx) {
        goto label_5;
    }
    do {
        eax = esi;
        if (al == *((ebx + 1))) {
            uint32_t (*ebx + 2)() ();
        }
        ebx -= 6;
    } while (edi <= ebx);
label_5:
    *((ebp - 8))++;
    *((ebp - 0x14)) += 4;
label_3:
    edx = *((ebp + 8));
    ecx = *(edx);
    if (ecx > *((ebp - 8))) {
        goto label_0;
    }
    esi += *((ebp - 0x10));
    if (esi != *((ebp - 0xc))) {
        goto label_1;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407a54 */
#include <stdint.h>
 
int32_t fcn_00407a54 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405010 */
#include <stdint.h>
 
void fcn_00405010 (void) {
    __asm ("fninit");
    fcn_00404f98 (*(0x40b850), 0x1fff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x405348 */
#include <stdint.h>
 
int32_t fcn_00405348 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *(0x40b8d8) = eax;
    *(0x40b8dc) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4033a0 */
#include <stdint.h>
 
int32_t fcn_004033a0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x40ac38) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4033b0 */
#include <stdint.h>
 
int32_t fcn_004033b0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax != 0) {
        eax = *(eax);
        *(0x40a6b4) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402f38 */
#include <stdint.h>
 
int32_t fcn_00402f38 (void) {
    eax = *(0x40ccc0);
    if (eax != 0) {
        fcn_00402ec0 (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40994e */
#include <stdint.h>
 
void KERNEL32_DLL_GetCommandLineA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406f78 */
#include <stdint.h>
 
int32_t fcn_00406f78 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    edx = *(eax);
    *(0x40bb18) = edx;
    eax = *(ecx);
    *(0x40bb1c) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406fbc */
#include <stdint.h>
 
int32_t fcn_00406fbc (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *(0x40ba68) = eax;
    *(0x40ba6c) = edx;
    ecx = *((ebp + 0x10));
    eax = *((ebp + 0x14));
    *(0x40ba70) = ecx;
    *(0x40ba74) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407a50 */
#include <stdint.h>
 
int32_t fcn_00407a50 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407d1c */
#include <stdint.h>
 
uint32_t fcn_00407d1c (void) {
    int32_t var_2ch;
    int32_t var_30h;
    KERNEL32_DLL_GetStartupInfoA (esp);
    if ((*((esp + 0x2c)) & 1) != 0) {
        eax = *((esp + 0x30));
    } else {
        eax = 0xa;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x406f28 */
#include <stdint.h>
 
int32_t fcn_00406f28 (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_00406ed4 (0, 0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402a4c */
#include <stdint.h>
 
int32_t fcn_00402a4c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    uint32_t var_4h;
    eax = *((ebp + 0x10));
    esi = *((ebp + 0xc));
    ebx = *((ebp + 8));
    do {
label_0:
        if (esi == ebx) {
            eax = 1;
            goto label_1;
        }
        edi = *((ebx + 4));
        edx = *((esi + 4));
        *((ebp - 4)) = edx;
        ecx = *((ebp - 4));
        ecx &= edi;
        if ((cl & 0x10) == 0) {
            goto label_2;
        }
        edi &= 0x300;
        *((ebp - 4)) &= 0x300;
        if (edi != *((ebp - 4))) {
            if (eax == 0) {
                eax = edi;
                edx = *((ebp - 4));
                edx &= 0x300;
                eax &= 0x300;
                if (eax == edx) {
                    goto label_3;
                }
                eax = *((ebp - 4));
                eax &= 0x300;
                eax = ~eax;
                eax &= edi;
                if ((ah & 3) != 0) {
                    eax = 0;
                    goto label_1;
                }
                edi |= 0x300;
                *((ebp - 4)) |= 0x300;
                if (edi == *((ebp - 4))) {
                    goto label_4;
                }
            }
label_3:
            eax = 0;
            goto label_1;
        }
label_4:
        eax = 1;
        ebx = *((ebx + 8));
        esi = *((esi + 8));
    } while (1);
label_2:
    edx = *((ebp - 4));
    edx &= edi;
    if ((dh & 4) != 0) {
        ecx = *((ebx + 0xc));
        if (ecx != *((esi + 0xc))) {
            if (eax == 0) {
                eax = *((ebx + 0xc));
                eax |= *((esi + 0xc));
                if (eax == 0) {
                    goto label_5;
                }
            }
            eax = 0;
            goto label_1;
        }
label_5:
        eax = 1;
        ebx = *((ebx + 8));
        esi = *((esi + 8));
        goto label_0;
    }
    eax = fcn_00402970 (ebx, esi);
    if (eax != 0) {
        eax = 1;
    } else {
        if ((edi & 2) != 0) {
            if ((*((ebp - 4)) & 1) != 0) {
                if ((*((ebx + 0xc)) & 4) == 0) {
                    goto label_6;
                }
                eax = fcn_00402484 (ebx, esi, *((ebp + 0x14)), 1);
            }
        } else {
label_6:
            eax = 0;
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402938 */
#include <stdint.h>
 
int32_t fcn_00402938 (int32_t arg_8h) {
    ebx = *((ebp + 8));
    if (ebx == 0) {
        eax = "<notype>";
        return eax;
    }
    if (*((ebx + 6)) == 0) {
        fcn_00406b6c ("id->tpName", "xxtype.cpp", 0x22);
    }
    eax = *((ebx + 6));
    eax += ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408009 */
#include <stdint.h>
 
int32_t fcn_00408009 (int32_t arg_8h) {
    edx = *((ebp + 8));
    eax = 0;
    if (edx == 0) {
        goto label_0;
    }
    while (cl != 0) {
        eax++;
        cl = *(edx);
        edx++;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407dbe */
#include <stdint.h>
 
uint32_t fcn_00407dbe (int32_t arg_8h) {
    ebx = *((ebp + 8));
    eax = fcn_004013e0 (ebx);
    if (eax == 0) {
        if (ebx <= 0x80) {
            fcn_00401140 ();
            if ((*((eax + 4)) & 1) == 0) {
                goto label_0;
            }
        }
        fcn_00406ec0 ();
label_0:
        fcn_00401140 ();
        *((eax + 4)) |= 1;
        fcn_00401140 ();
        eax = *((eax + 0x14));
        return eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407efb */
#include <stdint.h>
 
int32_t fcn_00407efb (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    ebx = *((ebp + 0x14));
    edi = *((ebp + 0xc));
    esi = *((ebp + 8));
    if ((bh & 1) == 0) {
        if ((bl & 0x20) == 0) {
            goto label_0;
        }
        fcn_00406b6c ("(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0", "xx.cpp", 0x205);
    }
label_0:
    if ((bl & 0x80) != 0) {
        fcn_00406b6c ("(ctorMask & 0x0080) == 0", "xx.cpp", 0x207);
    }
    if ((bh & 0x10) != 0) {
        ebx &= 7;
        ebx--;
        if (ebx != 0) {
            ebx--;
            if (ebx != 0) {
                ebx--;
                if (ebx == 0) {
                    goto label_1;
                }
                ebx -= 2;
                if (ebx == 0) {
                    goto label_2;
                }
            } else {
                uint32_t (*ebp + 0x10)(uint32_t, uint32_t, uint32_t) (esi, 0, edi);
                goto label_3;
            }
            uint32_t (*ebp + 0x10)(uint32_t, uint32_t, uint32_t) (esi, edi, 0);
            goto label_3;
label_1:
            ecx = edi;
            edx = 0;
            eax = esi;
            uint32_t (*ebp + 0x10)() ();
            goto label_3;
label_2:
            uint32_t (*ebp + 0x10)(uint32_t, uint32_t, uint32_t) (esi, 0, edi);
            goto label_3;
        }
        eax = "what?";
        if (eax == 0) {
            goto label_3;
        }
        fcn_00406b6c ("!\"what?\", "xx.cpp", 0x232);
    } else {
        ebx &= 7;
        ebx--;
        if (ebx != 0) {
            ebx--;
            if (ebx != 0) {
                ebx--;
                if (ebx == 0) {
                    goto label_4;
                }
                ebx -= 2;
                if (ebx == 0) {
                    goto label_5;
                }
            } else {
                uint32_t (*ebp + 0x10)(uint32_t, uint32_t) (esi, edi);
                goto label_3;
            }
            uint32_t (*ebp + 0x10)(uint32_t, uint32_t) (edi, esi);
            goto label_3;
label_4:
            edx = edi;
            eax = esi;
            uint32_t (*ebp + 0x10)() ();
            goto label_3;
label_5:
            uint32_t (*ebp + 0x10)(uint32_t, uint32_t) (esi, edi);
            goto label_3;
        }
        edx = "what?";
        if (edx == 0) {
            goto label_3;
        }
        fcn_00406b6c ("!\"what?\", "xx.cpp", 0x25e);
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40818c */
#include <stdint.h>
 
int32_t fcn_0040818c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_34h) {
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_14h;
    eax = 0x40bc20;
    fcn_00402414 (edi);
    ebx = *((ebp + 8));
    fcn_00401140 ();
    *((eax + 4)) |= 2;
    fcn_00401140 ();
    if (ebx != 0) {
        edx = *((ebx + 6));
        edx += ebx;
    } else {
        edx = 0;
    }
    *((eax + 0x10)) = edx;
    fcn_00401140 ();
    ecx = *((ebp + 0x20));
    *((eax + 0xc)) = ecx;
    fcn_00401140 ();
    edx = *((ebp + 0x24));
    *((eax + 8)) = edx;
    *((ebp - 0x28)) = ebx;
    edi = *((ebx + 4));
    esi = *(ebx);
    if ((edi & 2) != 0) {
        eax = *((ebx + 0xc));
    } else {
        eax = 0;
    }
    *((ebp - 0x2c)) = eax;
    if ((edi & 0x30) != 0) {
        edx = *((ebp - 0x28));
        ecx = *((edx + 8));
        *((ebp - 0x28)) = ecx;
    }
    eax = fcn_00407dbe (esi + 0x52);
    *((ebp - 0x30)) = eax;
    edx = *((ebp - 0x30));
    ecx = 0;
    *(edx) = ecx;
    eax = *((ebp - 0x30));
    *((eax + 4)) = ebx;
    edx = *((ebp - 0x30));
    ecx = *((ebp + 0x1c));
    *((edx + 0xc)) = ecx;
    eax = *((ebp - 0x30));
    *((eax + 0x10)) = esi;
    edx = *((ebp - 0x30));
    *((edx + 0x18)) = di;
    ecx = *((ebp - 0x30));
    ax = *((ebp - 0x2c));
    *((ecx + 0x1a)) = ax;
    edx = *((ebp - 0x30));
    ecx = *((ebp - 0x28));
    *((edx + 0x14)) = ecx;
    eax = *((ebp - 0x30));
    edx = *((ebp + 0x10));
    *((eax + 8)) = edx;
    ecx = *((ebp - 0x30));
    eax = 0;
    *((ecx + 0x28)) = eax;
    edx = *((ebp - 0x30));
    ecx = 0;
    *((edx + 0x2c)) = ecx;
    eax = *((ebp - 0x30));
    *((eax + 0x1c)) = 0x407e08;
    edx = *((ebp - 0x30));
    ecx = *((ebp + 0x20));
    *((edx + 0x34)) = ecx;
    eax = *((ebp - 0x30));
    edx = *((ebp + 0x24));
    *((eax + 0x38)) = edx;
    ecx = *((ebp - 0x30));
    eax = *((ebp + 0x14));
    *((ecx + 0x20)) = eax;
    edx = *((ebp - 0x30));
    ecx = *((ebp + 0x18));
    *((edx + 0x24)) = ecx;
    eax = *((ebp - 0x30));
    *((eax + 0x45)) = 0;
    edx = *((ebp - 0x30));
    *((edx + 0x44)) = 1;
    ecx = *((ebp - 0x30));
    ecx += 0x52;
    fcn_0040213c (ecx, *((ebp + 0xc)), esi);
    eax = *(0x40cce4);
    if (*(eax) != 1) {
        edx = *(0x40cce4);
        if (*(edx) != 2) {
            goto label_0;
        }
    }
    eax = fcn_00402938 (ebx);
    ebx = eax;
    ecx = *((ebp + 0x34));
    eax = *((ebp + 0x34));
    edx = *((ebp + 0x34));
    ecx = *((ebp + 0x34));
    eax = *((ebp + 0x34));
    edx = *((ebp + 0x34));
    ecx = *((ebp + 0x34));
    eax = *((ebp - 0x30));
    if (*((eax + 0x44)) != 0) {
        edx = *((ebp - 0x30));
        edx += 0x52;
    } else {
        ecx = *((ebp - 0x30));
        edx = *((ecx + 0x40));
    }
    eax = fcn_00408009 (ebx);
    eax = *((ebp + 0x28));
    eax -= 5;
    fcn_00408021 (1, 0xb);
label_0:
    if ((*((ebp - 0x2c)) & 1) != 0) {
        if (*((ebp + 0x14)) == 0) {
            fcn_00406b6c ("cctrAddr", "xx.cpp", 0x445);
        }
        ecx = *(0x40cce0);
        *((ebp - 0x34)) = ecx;
        *((ebp - 0x14)) = 8;
        eax = *((ebp - 0x30));
        eax += 0x52;
        fcn_00407efb (eax, *((ebp + 0xc)), *((ebp + 0x14)), *((ebp + 0x18)));
        *((ebp - 0x14)) = 0;
        edx = *((ebp - 0x34));
        *(0x40cce0) = edx;
    }
    fcn_00401140 ();
    ecx = *((eax + 0x10));
    *((ebp - 0x40)) = ecx;
    ecx = ebp - 0x40;
    eax = *((ebp + 0x28));
    *((ebp - 0x3c)) = eax;
    edx = *((ebp - 0x30));
    *((ebp - 0x38)) = edx;
    KERNEL32_DLL_RaiseException (0xeefface, 1, 3, ecx);
    eax = *((ebp - 0x24));
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40803e */
#include <stdint.h>
 
int32_t fcn_0040803e (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, uint32_t arg_1ch) {
    esi = *((ebp + 0x18));
    if (*((ebp + 0x1c)) != 0) {
        ebx = 2;
    } else {
        ebx = 0;
    }
    if ((*((ebp + 0x10)) & 2) != 0) {
        ebx |= 0x80;
    }
    eax = *(0x40cce4);
    if (*(eax) == 2) {
        eax = fcn_00402938 (*((ebp + 0xc)));
        edi = eax;
        eax = fcn_00408009 (edi);
        fcn_00408021 (0, 3);
    }
    if ((esi & 0x80) != 0) {
        fcn_00406b6c ("(dtorMask & 0x0080) == 0", "xx.cpp", 0x2cd);
    }
    esi &= 7;
    esi--;
    if (esi != 0) {
        esi--;
        if (esi != 0) {
            esi--;
            if (esi == 0) {
                goto label_0;
            }
            esi -= 2;
            if (esi == 0) {
                goto label_1;
            }
        } else {
            uint32_t (*ebp + 0x14)(uint32_t*, uint32_t) (*((ebp + 8)), ebx);
            goto label_2;
        }
        uint32_t (*ebp + 0x14)(uint32_t*, uint32_t) (*((ebp + 8)), ebx);
        goto label_2;
label_0:
        edx = ebx;
        eax = *((ebp + 8));
        uint32_t (*ebp + 0x14)() ();
        goto label_2;
label_1:
        uint32_t (*ebp + 0x14)(uint32_t*, uint32_t) (*((ebp + 8)), ebx);
        goto label_2;
    }
    ecx = "what?";
    if (ecx != 0) {
        fcn_00406b6c ("!\"what?\", "xx.cpp", 0x2f4);
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4084bb */
#include <stdint.h>
 
int32_t fcn_004084bb (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_24h;
    int32_t var_14h;
    eax = 0x40bc54;
    ebx = *((ebp + 0x10));
    fcn_00402414 (edi);
    if (ebx == 0) {
        fcn_00406b6c ("dtorAddr", "xx.cpp", 0x5b9);
    }
    *((ebp - 0x14)) = 8;
    fcn_0040803e (*((ebp + 8)), *((ebp + 0xc)), 0, ebx, *((ebp + 0x14)), 1);
    *((ebp - 0x14)) = 0;
    edx = *((ebp - 0x24));
    *(fs:0) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408530 */
#include <stdint.h>
 
int32_t fcn_00408530 (int32_t arg_8h) {
    ebx = *((ebp + 8));
    if (*((ebx + 0x44)) != 0) {
        if ((*((ebx + 0x1a)) & 2) != 0) {
            eax = *((ebx + 0x14));
            esi = *(0x40cce0);
            edx = ebx + 0x52;
            ecx = *((eax + 0x2c));
            fcn_004084bb (edx, eax, *((eax + 0x28)), ecx);
            *(0x40cce0) = esi;
        }
        *((ebx + 0x44)) = 0;
    }
    if (*((ebx + 0x45)) != 0) {
        esi = *((ebx + 0x3c));
        if (esi == 0) {
            fcn_00406b6c ("argType", "xx.cpp", 0x5fe);
        }
        if ((*((esi + 4)) & 2) != 0) {
            if ((*((esi + 0xc)) & 2) == 0) {
                goto label_0;
            }
            eax = *((esi + 0x2c));
            fcn_004084bb (*((ebx + 0x40)), esi, *((esi + 0x28)), eax);
        }
label_0:
        *((ebx + 0x45)) = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402b5c */
#include <stdint.h>
 
int32_t fcn_00402b5c (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0x10));
    ebx = *((ebp + 0xc));
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 8));
    } else {
        eax = *((ebx + 0x10));
        eax += ebx;
        eax = fcn_00402895 (eax, 0, esi, ebp + 8);
        if (eax != 0) {
            eax = *((ebp + 8));
        } else {
            eax = *((ebx + 0x12));
            eax += ebx;
            eax = fcn_00402895 (eax, 1, esi, ebp + 8);
            if (eax != 0) {
                eax = *((ebp + 8));
            } else {
                edx = "Can't adjust class address (no base class entry found)";
                if (edx != 0) {
                    eax = fcn_00406b6c ("!\"Can't adjust class address (no base class entry found)\", "xxtype.cpp", 0x57e);
                }
                eax = 0;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402faf */
#include <stdint.h>
 
void fcn_00402faf (void) {
    uint32_t (*ebx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x409456 */
#include <stdint.h>
 
int32_t fcn_00409456 (uint32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    eax = 0;
    *((ebp - 8)) = eax;
    if (*((ebp + 8)) == 0) {
        eax = 0;
        goto label_0;
    }
    edx = *((ebp + 0x10));
    eax = *((edx + 0x1c));
    *((ebp - 4)) = eax;
    edx = *((ebp + 0xc));
    *((ebp - 4)) -= edx;
    ecx = *((ebp + 8));
    if ((*((ecx + 4)) & 0x20) != 0) {
        eax = *((ebp + 8));
        if ((*((eax + 4)) & 0x11) == 0) {
            fcn_00406b6c ("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)", "xx.cpp", 0xe78);
        }
        edx = *((ebp + 8));
        ecx = *(edx);
        if ((*((ecx + 4)) & 0x10) == 0) {
            fcn_00406b6c ("dttPtr->dttType->tpMask & TM_IS_PTR", "xx.cpp", 0xe7c);
        }
        eax = *((ebp + 8));
        edx = *(eax);
        ecx = *((edx + 8));
        if ((*((ecx + 0xc)) & 2) == 0) {
            fcn_00406b6c ("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xe7d);
        }
        eax = *((ebp + 8));
        edx = *(eax);
        ecx = *((edx + 8));
        eax = *((ecx + 0x20));
        *((ebp - 4)) = eax;
    }
    edx = *((ebp + 8));
    if ((*((edx + 5)) & 1) != 0) {
        ecx = *((ebp + 8));
        eax = *(ecx);
        if ((*((eax + 4)) & 2) != 0) {
            edx = *((ebp + 8));
            ecx = *(edx);
            if ((*((ecx + 0xc)) & 2) != 0) {
                goto label_1;
            }
        }
        fcn_00406b6c ("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)", "xx.cpp", 0xe8b);
label_1:
        eax = *((ebp + 8));
        edx = *(eax);
        eax = *((edx + 0x24));
        goto label_0;
    }
    if (*((ebp - 4)) <= 0) {
        edx = *((ebp + 8));
        if ((*((edx + 5)) & 4) != 0) {
            goto label_2;
        }
        ecx = *((ebp + 8));
        eax = *((ecx + 4));
        eax &= 3;
        if (eax == 3) {
            ebx = *((ebp + 8));
            *((ebp - 8))++;
            goto label_3;
        }
        eax = 0;
        goto label_0;
    }
label_2:
    ebx = *((ebp + 8));
    do {
        if (*(ebx) == 0) {
            ebx -= 0xc;
        } else {
            if ((*((ebx + 5)) & 0x10) != 0) {
                eax = *(ebx);
                if ((*((eax + 5)) & 4) == 0) {
                    fcn_00406b6c ("dtvtPtr->dttType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xed7);
                }
                edx = *(ebx);
                esi = *((edx + 8));
                *((ebp - 0xc)) = esi;
            } else {
                esi = *(ebx);
                *((ebp - 0xc)) = esi;
            }
            edi = 1;
            eax = *((ebp - 0xc));
            if ((*((eax + 4)) & 0x10) != 0) {
                edx = *((ebp - 0xc));
                esi = *((edx + 8));
                *((ebp - 0xc)) = esi;
                ecx = *((ebp - 0xc));
                if ((*((ecx + 4)) & 2) == 0) {
                    goto label_4;
                }
                eax = *((ebp - 0xc));
                if ((*((eax + 0xc)) & 0x20) == 0) {
                    goto label_4;
                }
                if ((*((ebx + 4)) & 8) == 0) {
                    goto label_4;
                }
                esi = 0;
                eax = *((ebp - 0xc));
                if ((*((eax + 0xc)) & 2) == 0) {
                    fcn_00406b6c ("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xef7);
                }
                if ((*((ebx + 4)) & 4) != 0) {
                    edx = *((ebp + 0x14));
                    edx += *((ebx + 8));
                    *((ebp - 0x10)) = edx;
                } else {
                    ecx = *((ebx + 8));
                    *((ebp - 0x10)) = ecx;
                }
                eax = *((ebp - 0x10));
                edx = *(eax);
                *((ebp - 0x10)) = edx;
                if ((*((ebx + 5)) & 0x10) != 0) {
                    esi = *((eax + 4));
                }
                if ((*((ebx + 4)) & 0x40) != 0) {
                    *((ebp - 0x10)) += 4;
                }
                eax = fcn_004093cf (*((ebp - 0x10)), ebp - 0xc, esi);
                *((ebp - 0x10)) = eax;
                esi = *((ebp - 0xc));
            }
label_4:
            eax = *((ebp - 0xc));
            if ((*((eax + 5)) & 4) != 0) {
                edi = *((esi + 0xc));
                esi = *((esi + 8));
            }
            if ((*((esi + 0xc)) & 2) == 0) {
                fcn_00406b6c ("elemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xf22);
            }
            edi *= *((esi + 0x20));
            if (edi >= *((ebp - 4))) {
                goto label_3;
            }
            *((ebp - 4)) -= edi;
            ebx += 0xc;
        } while (1);
    }
    do {
label_3:
        eax = *(ebx);
        *((ebp - 0x14)) = eax;
        esi = *((ebx + 4));
        if ((esi & 4) != 0) {
            eax = *((ebp + 0x14));
            eax += *((ebx + 8));
            *((ebp - 0x18)) = eax;
        } else {
            edx = *((ebx + 8));
            *((ebp - 0x18)) = edx;
        }
        if ((esi & 0x1000) != 0) {
            ecx = *((ebp - 0x14));
            if ((*((ecx + 5)) & 4) == 0) {
                fcn_00406b6c ("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xf52);
            }
            eax = *((ebp - 0x14));
            edx = *((eax + 8));
            *((ebp - 0x14)) = edx;
        }
        if ((esi & 0x11) != 0) {
            edi = 0;
            eax = *((ebp - 0x14));
            if ((*((eax + 4)) & 0x10) == 0) {
                fcn_00406b6c ("varType->tpMask & TM_IS_PTR", "xx.cpp", 0xf5c);
            }
            edx = *((ebp - 0x14));
            ecx = *((edx + 8));
            *((ebp - 0x14)) = ecx;
            eax = *((ebp - 0x18));
            edx = *(eax);
            *((ebp - 0x18)) = edx;
            if ((esi & 0x1000) != 0) {
                edi = *((eax + 4));
            }
            edx = esi;
            eax = *((ebp - 0x18));
            edx &= 0x48;
            *((ebp - 0x1c)) = eax;
            if (edx == 0x40) {
                *((ebp - 0x18)) += 4;
            }
            ecx = *((ebp - 0x14));
            if ((*((ecx + 4)) & 2) == 0) {
                goto label_5;
            }
            eax = *((ebp - 0x14));
            if ((*((eax + 0xc)) & 0x20) == 0) {
                goto label_5;
            }
            if ((esi & 8) == 0) {
                goto label_5;
            }
            eax = fcn_004093cf (*((ebp - 0x18)), ebp - 0x14, edi);
            *((ebp - 0x18)) = eax;
            ecx = *((ebp - 0x18));
            *((ebp - 0x1c)) = ecx;
        }
label_5:
        if (*((ebp - 8)) == 0) {
            if ((esi & 0x400) != 0) {
                eax = *((ebp - 0x14));
                if (*((eax + 0x10)) != 0) {
                    edx = *((ebp - 0x14));
                    edi = *((edx + 0x10));
                    edi += *((ebp - 0x14));
                    if (edi == 0) {
                        fcn_00406b6c (0x40c475, "xx.cpp", 0xf92);
                    }
                    eax = *(edi);
                    eax = *((eax + 0x20));
                } else {
                    eax = 0;
                }
                edx = *((ebp - 4));
                if (edx >= eax) {
                    eax = 1;
                } else {
                    eax = 2;
                }
            } else {
                eax = 0;
            }
            edx = *((ebp - 0x14));
            if ((*((edx + 5)) & 4) != 0) {
                eax = fcn_004092ab (*((ebp - 0x18)), *((ebp - 0x14)), *((ebp - 4)), *((ebp + 0x14)), *((ebp + 0x10)));
            } else {
                fcn_00408ffb (*((ebp - 0x18)), *((ebp - 0x14)), eax, *((ebp - 4)), 1, *((ebp + 0x14)), *((ebp + 0x10)));
            }
            if ((esi & 0x400) == 0) {
                goto label_6;
            }
            ecx = *((ebp + 0x10));
            if ((*((ecx + 0x20)) & 1) == 0) {
                goto label_6;
            }
            eax = *((ebp + 0x10));
            if (*((eax + 0x20)) == 0xff) {
                goto label_6;
            }
            edx = *((ebp - 0x18));
            eax = *(edx);
            eax = *((eax - 8));
            edi = *((eax - 8));
            eax = *((ebp - 0x18));
            void (*edi)() ();
        }
label_6:
        edx = esi;
        edx &= 3;
        if (edx == 3) {
            esi &= 0x48;
            if (esi == 0x48) {
                *((ebp - 0x1c)) -= 4;
            }
            ecx = *((ebp - 0x14));
            if ((*((ecx + 5)) & 4) != 0) {
                eax = *((ebp - 0x14));
                edx = *((eax + 8));
                *((ebp - 0x14)) = edx;
                ecx = *((ebp - 0x14));
                if (*((ecx + 0x1c)) != 0) {
                    eax = *((ebp - 0x14));
                    edx = *((eax + 0x1a));
                    ecx = *((ebp - 0x14));
                    fcn_0040810e (*((ebp - 0x1c)), *((ecx + 0x1c)), edx);
                } else {
                }
                fcn_0040121c (*((ebp - 0x1c)));
            } else {
                eax = *((ebp - 0x14));
                if (*((eax + 0x14)) != 0) {
                    edx = *((ebp - 0x14));
                    ecx = *((edx + 0x18));
                    eax = *((ebp - 0x14));
                    fcn_0040810e (*((ebp - 0x1c)), *((eax + 0x14)), ecx);
                } else {
                    eax = fcn_0040120c (*((ebp - 0x1c)));
                }
            }
        }
        edx = 0;
        *((ebp - 4)) = edx;
        ecx = ebx;
        ebx += 0xfffffff4;
    } while (ecx > *((ebp + 8)));
    eax = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40897d */
#include <stdint.h>
 
int32_t fcn_0040897d (uint32_t arg_8h, uint32_t arg_ch) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = 0;
    *((ebp - 0xc)) = eax;
    edx = *((ebp + 8));
    ecx = *((edx + 8));
    *((ebp - 4)) = ecx;
    eax = *((ebp - 4));
    edx = *((ebp + 8));
    edx -= *((eax + 4));
    *((ebp - 8)) = edx;
    ecx = *((ebp + 8));
    ebx = *((ecx + 0x10));
    goto label_1;
label_0:
    eax = ebx;
    edx = *((ebp - 4));
    ecx = *((ebp + 8));
    edi = *((edx + eax));
    eax += 2;
    edx = *((ebp - 4));
    edx = *((edx + eax));
    *((ecx + 0x10)) = di;
    eax += 2;
    edx--;
    if (edx >= 0) {
        edx -= 3;
        if (edx < 0) {
            goto label_2;
        }
        if (edx == 0) {
            goto label_3;
        }
        edx--;
        if (edx == 0) {
            goto label_4;
        }
        goto label_5;
    }
    edx = *((ebp - 4));
    ecx = *((ebp + 8));
    eax = *((edx + eax + 4));
    *(0x40cce8) = eax;
    *((ecx + 0x12)) = 1;
    ecx = 0x7b;
    ebx = 0x7b;
    ecx = *((ebp - 8));
    ebx = 0x40cce8;
    fcn_00402faf ();
    eax = *((ebp + 8));
    *((eax + 0x12)) = 0;
    goto label_2;
label_3:
    eax = fcn_00401140 ();
    eax += 0;
    *((ebp - 0x10)) = eax;
    while (esi != 0) {
        edx = *((esi + 0x28));
        if (edx == *((ebp + 8))) {
            if (ebx == *((esi + 0x30))) {
                goto label_6;
            }
        }
        *((ebp - 0x10)) = esi;
        ecx = *((ebp - 0x10));
        esi = *(ecx);
    }
label_6:
    if (esi != 0) {
        eax = *((ebp - 0x10));
        if (esi == *(eax)) {
            goto label_7;
        }
    }
    fcn_00406b6c ("xdrPtr && xdrPtr == *xdrLPP", "xx.cpp", 0x8ba);
label_7:
    edx = *(esi);
    ecx = *((ebp - 0x10));
    *(ecx) = edx;
    fcn_00408530 (esi);
    eax = uint32_t (*esi + 0x1c)(uint32_t) (esi);
    goto label_2;
label_4:
    edx = *((ebp - 4));
    ecx = *((ebp - 4));
    edx = *((edx + eax));
    eax += 4;
    eax = *((ecx + eax));
    edx += *((ebp - 0xc));
    eax = fcn_00409456 (eax, edx, *((ebp + 8)), *((ebp - 8)));
    *((ebp - 0xc)) = eax;
    goto label_2;
label_5:
    eax = "bogus context in Local_unwind()";
    if (eax != 0) {
        fcn_00406b6c ("!\"bogus context in Local_unwind()\", "xx.cpp", 0x8e9);
    }
label_2:
    ebx = edi;
label_1:
    if (ebx == 0) {
        goto label_8;
    }
    if (ebx != *((ebp + 0xc))) {
        goto label_0;
    }
label_8:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407e35 */
#include <stdint.h>
 
uint32_t fcn_00407e35 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    int32_t var_3h;
    esi = *((ebp + 0x10));
    edi = *((ebp + 8));
    eax = fcn_00402a4c (edi, esi, 0, *((ebp + 0xc)));
    if (eax != 0) {
        eax = 1;
    } else {
        edx = *((edi + 4));
        *((ebp - 4)) = edx;
        ebx = *((esi + 4));
        if ((bl & 0x20) != 0) {
            eax = fcn_00402a4c (edi, *((esi + 8)), 1, *((ebp + 0xc)));
            if (eax != 0) {
                eax = 1;
            } else {
                esi = *((esi + 8));
            }
            ebx = *((esi + 4));
            if ((bl & 0x10) == 0) {
                eax = 0;
            } else {
            }
            eax = fcn_00402a4c (edi, esi, 0, *((ebp + 0xc)));
            if (eax != 0) {
                eax = 1;
            }
        } else {
            if ((bl & 0x10) != 0) {
                if ((*((ebp + 0x14)) & 1) != 0) {
                    eax = 1;
                } else {
                }
                if ((*((ebp - 4)) & 0x10) == 0) {
                    eax = 0;
                } else {
                }
                if ((bl & 0x40) != 0) {
                    if ((bh & 1) == 0) {
                        if ((*((ebp - 3)) & 1) != 0) {
                            goto label_0;
                        }
                    }
                    if ((bh & 2) == 0) {
                        if ((*((ebp - 3)) & 2) != 0) {
                            goto label_0;
                        }
                    }
                    eax = 1;
                }
            } else {
label_0:
                eax = 0;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x402d18 */
#include <stdint.h>
 
int32_t fcn_00402d18 (void) {
    fcn_00401140 ();
    *((eax + 4)) &= 0xfffffffd;
    eax = *(0x40c8b4);
    if (*(eax) == 2) {
        fcn_00408021 (5, 1);
    }
    void (*0x40a580)() ();
    fcn_00406ec0 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408b17 */
#include <stdint.h>
 
int32_t fcn_00408b17 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 0xc));
    ebx = *((ebp + 8));
    ebx += 8;
    while (*(ebx) != 0) {
        eax = *((ebx + 4));
        if (eax == 0) {
            eax = ebx;
            goto label_0;
        }
        eax = fcn_00407e35 (*((esi + 4)), *((esi + 8)), eax, *((esi + 0xc)));
        if (eax != 0) {
            eax = ebx;
            goto label_0;
        }
        ebx += 0x14;
    }
    eax = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40847c */
#include <stdint.h>
 
int32_t fcn_0040847c (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_40h;
    ecx = *((ebp + 0xc));
    if (ecx == 0) {
        *((ebp - 0x50)) = 0x26;
        *((ebp - 0x4c)) = 2;
        eax = 0;
        ecx = ebp - 0x50;
        *((ebp - 0x40)) = eax;
    }
    *((ecx + 4)) |= 2;
    eax = 0x7b;
    edx = 0x7b;
    eax = *((ebp + 8));
    edx = ecx;
    fcn_00402f9a ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4086a9 */
#include <stdint.h>
 
int32_t fcn_004086a9 (uint32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ebx = *((ebp + 0x10));
    eax = *((ebx + 0x28));
    if (eax != *((ebp + 0xc))) {
        fcn_00406b6c ("dscPtr->xdERRaddr == errPtr", "xx.cpp", 0x722);
    }
    edx = *((ebx + 0x2c));
    if (edx != *((ebp + 8))) {
        fcn_00406b6c ("dscPtr->xdHtabAdr == hdtPtr", "xx.cpp", 0x723);
    }
    if (*((ebx + 0x45)) != 0) {
        fcn_00406b6c ("dscPtr->xdArgCopy == 0", "xx.cpp", 0x725);
    }
    ecx = *((ebp + 8));
    eax = *((ecx + 4));
    *((ebx + 0x3c)) = eax;
    if (eax != 0) {
        edx = *((ebp + 8));
        if ((*((edx + 8)) & 0x80) != 0) {
            goto label_0;
        }
        ecx = *((ebp + 8));
        esi = eax;
        dl = ((*((ecx + 8)) & 1) == 0) ? 1 : 0;
        edx &= 1;
        ecx = ebx + 0x52;
        *((ebp - 0xc)) = edx;
        *((ebp - 8)) = ecx;
        *((ebx + 0x45)) = 1;
        edx = *((ebp + 0x14));
        ecx = *(edx);
        ecx += *((ebp + 0x18));
        *((ebx + 0x40)) = ecx;
        eax = *((esi + 4));
        edi = *(esi);
        *((ebp - 4)) = eax;
        if ((al & 0x30) != 0) {
            esi = *((esi + 8));
            edx = *((esi + 4));
            *((ebp - 4)) = edx;
        }
        if ((al & 0x10) != 0) {
            if ((*((ebx + 0xc)) & 1) != 0) {
                al = fcn_004021ac (*((ebx + 0x40)), 0, edi);
                *((ebp - 0xc)) = 1;
            }
        } else {
            if ((*((ebp - 4)) & 1) != 0) {
                if ((al & 0x30) != 0) {
                    if ((al & 0x20) != 0) {
                        if ((*((ebx + 0x18)) & 0x10) != 0) {
                            al = fcn_00406b6c ("(dscPtr->xdMask & TM_IS_PTR) == 0", "xx.cpp", 0x782);
                        }
                        *((ebp - 0xc)) = 1;
                    } else {
                        if ((al & 0x10) == 0) {
                            fcn_00406b6c ("mask & TM_IS_PTR", "xx.cpp", 0x795);
                        }
                        if ((*((ebx + 0x18)) & 0x10) == 0) {
                            fcn_00406b6c ("dscPtr->xdMask & TM_IS_PTR", "xx.cpp", 0x796);
                        }
                        ecx = *((ebp - 8));
                        eax = *(ecx);
                        *((ebp - 8)) = eax;
                    }
                    eax = fcn_00402970 (*((ebx + 0x14)), esi);
                    if (eax == 0) {
                        edx = *((ebp - 8));
                        *((ebp - 0x10)) = edx;
                        eax = fcn_00402b5c (*((ebp - 8)), *((ebx + 0x14)), esi);
                        *((ebp - 8)) = eax;
                        ecx = *((ebp - 8));
                        if (ecx == *((ebp - 0x10))) {
                            goto label_1;
                        }
                        *((ebp - 0xc)) = 1;
                    }
label_1:
                    fcn_0040213c (*((ebx + 0x40)), ebp - 8, edi);
                }
            } else {
                if ((*((ebx + 0x18)) & 1) != 0) {
                    edx = *((ebx + 4));
                    if (edx != *((ebx + 0x14))) {
                        fcn_00406b6c ("dscPtr->xdTypeID == dscPtr->xdBase", "xx.cpp", 0x7b6);
                    }
                    eax = fcn_00402970 (*((ebx + 0x14)), esi);
                    if (eax == 0) {
                        eax = fcn_00402b5c (*((ebp - 8)), *((ebx + 0x14)), esi);
                        *((ebp - 8)) = eax;
                        *((ebp - 0xc)) = 1;
                    }
                    if ((*((esi + 0xc)) & 1) != 0) {
                        ecx = *((ebp + 8));
                        if (*((ecx + 0xc)) == 0) {
                            fcn_00406b6c ("hdtPtr->HDcctrAddr", "xx.cpp", 0x7d0);
                        }
                        eax = *((ebp + 8));
                        edx = *((ebp + 8));
                        fcn_00407efb (*((ebx + 0x40)), *((ebp - 8)), *((edx + 0xc)), *((eax + 0x10)));
                        *((ebp - 0xc)) = 1;
                        al = fcn_0040213c (*((ebx + 0x40)), *((ebp - 8)), edi);
                    } else {
                    } else {
                    }
                }
            }
        }
        if ((al & 0x20) != 0) {
            fcn_0040213c (*((ebx + 0x40)), ebp - 8, edi);
            *((ebp - 0xc)) = 1;
        } else {
            if (edi != *((ebx + 0x10))) {
                fcn_00406b6c ("dscPtr->xdSize == size", "xx.cpp", 0x7f8);
            }
            fcn_0040213c (*((ebx + 0x40)), *((ebp - 8)), edi);
        }
        if (*((ebp - 0xc)) != 0) {
            goto label_0;
        }
        if ((*((ebp - 4)) & 3) == 0) {
            goto label_0;
        }
        if ((*((esi + 0xc)) & 2) != 0) {
            eax = *((esi + 0x2c));
            fcn_004084bb (*((ebp - 8)), esi, *((esi + 0x28)), eax);
        }
        *((ebx + 0x44)) = 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x407db7 */
#include <stdint.h>
 
void fcn_00407db7 (void) {
    return void (*eax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408ffb */
#include <stdint.h>
 
int32_t fcn_00408ffb (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h, int32_t arg_1ch, uint32_t arg_20h) {
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
label_0:
    esi = *((ebp + 0x14));
    eax = *((ebp + 0xc));
    if ((*((eax + 0xc)) & 2) == 0) {
        fcn_00406b6c ("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xcb3);
    }
    if (*((ebp + 0x18)) != 0) {
        edx = *((ebp + 0xc));
        ebx = *((edx + 0x20));
    } else {
        eax = *((ebp + 0xc));
        ebx = *((eax + 0x24));
    }
    if (esi != 0) {
        if (ebx > esi) {
            goto label_2;
        }
    }
    fcn_00408eb9 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x18)), *((ebp + 0x20)));
    goto label_3;
label_2:
    if (ebx <= esi) {
        fcn_00406b6c ("dtorCnt < varCount", "xx.cpp", 0xced);
    }
    ebx = esi;
    eax = *((ebp + 0xc));
    edx = *((eax + 0x12));
    edx += *((ebp + 0xc));
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = edx;
    if (*((ebp + 0x18)) == 0) {
        goto label_4;
    }
    do {
        eax = *((ebp - 0x10));
        esi = *(eax);
        if (esi == 0) {
            goto label_4;
        }
        if ((*((esi + 4)) & 1) == 0) {
            fcn_00406b6c ("IS_STRUC(blType->tpMask)", "xx.cpp", 0xd18);
        }
        if ((*((esi + 0xc)) & 2) != 0) {
            eax = *((esi + 0x24));
            if (ebx <= eax) {
                edx = *((ebp - 0x10));
                edx += 0xc;
                eax = fcn_00408fb0 (*((ebp + 8)), *((ebp + 0x10)), edx, *((ebp - 0xc)), ebx, 1, *((ebp + 0x1c)), *((ebp + 0x20)));
                goto label_3;
            }
            ebx -= eax;
        }
        *((ebp - 0x10)) += 0xc;
    } while (1);
label_4:
    ecx = *((ebp + 0xc));
    eax = *((ecx + 0x10));
    eax += *((ebp + 0xc));
    *((ebp - 8)) = eax;
    *((ebp - 4)) = eax;
    do {
        edx = *((ebp - 8));
        esi = *(edx);
        if (esi == 0) {
            goto label_5;
        }
        if ((*((esi + 4)) & 1) == 0) {
            fcn_00406b6c ("IS_STRUC(blType->tpMask)", "xx.cpp", 0xd3f);
        }
        if ((*((esi + 0xc)) & 2) != 0) {
            eax = *((esi + 0x24));
            if (ebx <= eax) {
                edx = *((ebp - 8));
                edx += 0xc;
                fcn_00408fb0 (*((ebp + 8)), *((ebp + 0x10)), edx, *((ebp - 4)), ebx, 0, *((ebp + 0x1c)), *((ebp + 0x20)));
                if (*((ebp + 0x18)) == 0) {
                    goto label_3;
                }
                eax = fcn_00408fb0 (*((ebp + 8)), *((ebp + 0x10)), *((ebp - 0x10)), *((ebp - 0xc)), 0, 1, *((ebp + 0x1c)), *((ebp + 0x20)));
                goto label_3;
            }
            ebx -= eax;
        }
        *((ebp - 8)) += 0xc;
    } while (1);
label_5:
    ecx = *((ebp + 0xc));
    edi = *((ecx + 0x2e));
    edi += *((ebp + 0xc));
    *((ebp - 0x14)) = edi;
label_1:
    esi = *(edi);
    if (esi == 0) {
        fcn_00406b6c ("memType", "xx.cpp", 0xd65);
    }
    *((ebp - 0x18)) = 1;
    if ((*((esi + 5)) & 4) != 0) {
        eax = *((esi + 0xc));
        *((ebp - 0x18)) = eax;
        esi = *((esi + 8));
    }
    if ((*((esi + 0xc)) & 2) == 0) {
        fcn_00406b6c ("memType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xd73);
    }
    eax = *((ebp - 0x18));
    edx:eax = eax * *((esi + 0x20));
    if (ebx <= eax) {
        goto label_6;
    }
    ebx -= eax;
    goto label_7;
    do {
label_6:
        edx = *((edi + 4));
        edx += *((ebp + 8));
        eax = *(edi);
        *((ebp - 0x18)) = 1;
        if ((*((eax + 5)) & 4) != 0) {
            ecx = *((eax + 0xc));
            *((ebp - 0x18)) = ecx;
            eax = *((eax + 8));
        }
        if (*((ebp - 0x18)) > 1) {
            eax = fcn_004092ab (edx, *(edi), ebx, *((ebp + 0x1c)), *((ebp + 0x20)));
        } else {
            fcn_00408ffb (edx, eax, 0, ebx, 1, *((ebp + 0x1c)), *((ebp + 0x20)));
            goto label_0;
        }
        ebx = 0;
        edi -= 8;
    } while (edi >= *((ebp - 0x14)));
    fcn_00408fb0 (*((ebp + 8)), *((ebp + 0x10)), *((ebp - 8)), *((ebp - 4)), 0, 0, *((ebp + 0x1c)), *((ebp + 0x20)));
    if (*((ebp + 0x18)) != 0) {
        fcn_00408fb0 (*((ebp + 8)), *((ebp + 0x10)), *((ebp - 0x10)), *((ebp - 0xc)), 0, 1, *((ebp + 0x1c)), *((ebp + 0x20)));
        goto label_3;
label_7:
        edi += 8;
        goto label_1;
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408eb9 */
#include <stdint.h>
 
int32_t fcn_00408eb9 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h) {
    int32_t var_24h;
    int32_t var_14h;
    eax = 0x40bca8;
    edi = *((ebp + 0x14));
    esi = *((ebp + 0x10));
    ebx = *((ebp + 0xc));
    fcn_00402414 (edi);
    if ((*((ebx + 0xc)) & 2) == 0) {
        fcn_00406b6c ("varType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xc1c);
    }
    if (*((ebx + 0x28)) == 0) {
        fcn_00406b6c ("varType->tpClass.tpcDtorAddr", "xx.cpp", 0xc1d);
    }
    *((ebp - 0x14)) = 8;
    *((ebp - 0x14)) = 0x14;
    edx = *((ebp + 0x18));
    ecx = *((edx + 0x1c));
    if (ecx < *((ebx + 0x20))) {
        if (esi != 0) {
            goto label_0;
        }
        fcn_00406b6c ("(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags", "xx.cpp", 0xc28);
    }
label_0:
    if ((esi & 2) == 0) {
        if (edi != 0) {
            eax = *((ebx + 0x20));
        } else {
            eax = *((ebx + 0x24));
        }
        edx = *((ebp + 0x18));
        *((edx + 0x1c)) -= eax;
    }
    ecx = *((ebx + 0x2c));
    fcn_0040803e (*((ebp + 8)), ebx, esi, *((ebx + 0x28)), ecx, edi);
    *((ebp - 0x14)) = 8;
    *((ebp - 0x14)) = 0;
    eax = *((ebp - 0x24));
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x408fb0 */
#include <stdint.h>
 
int32_t fcn_00408fb0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h, uint32_t arg_1ch, int32_t arg_20h, int32_t arg_24h) {
    esi = *((ebp + 0x18));
    ebx = *((ebp + 0x10));
    edi = *((ebp + 8));
    while (ebx >= *((ebp + 0x14))) {
        eax = *((ebx + 4));
        eax += edi;
        if (*((ebp + 0x1c)) != 0) {
            eax = *(eax);
        }
        edx = *(ebx);
        if ((*((edx + 0xc)) & 2) != 0) {
            fcn_00408ffb (eax, edx, *((ebp + 0xc)), esi, 0, *((ebp + 0x20)), *((ebp + 0x24)));
            esi = 0;
        }
        ebx -= 0xc;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4092ab */
#include <stdint.h>
 
int32_t fcn_004092ab (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h) {
    int32_t var_8h;
    int32_t var_4h;
    ebx = *((ebp + 0xc));
    esi = *((ebp + 8));
    if ((*((ebx + 5)) & 4) == 0) {
        fcn_00406b6c ("varType->tpMask & TM_IS_ARRAY", "xx.cpp", 0xdcc);
    }
    eax = *((ebx + 8));
    if ((*((eax + 0xc)) & 2) == 0) {
        fcn_00406b6c ("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR", "xx.cpp", 0xdcd);
    }
    edx = *((ebx + 0xc));
    *((ebp - 4)) = edx;
    ebx = *((ebx + 8));
    edi = *((ebx + 0x20));
    if (edi == 0) {
        fcn_00406b6c ("vdtCount", "xx.cpp", 0xdd6);
    }
    if (*((ebp + 0x10)) == 0) {
        eax = edi;
        edx:eax = eax * *((ebp - 4));
        *((ebp + 0x10)) = eax;
    }
    eax = *((ebp + 0x10));
    edx = 0;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    *((ebp - 8)) = eax;
    ecx = *((ebp - 8));
    if (ecx > *((ebp - 4))) {
        if (*((ebp - 4)) == 0) {
            goto label_0;
        }
        fcn_00406b6c ("etdCount <= elemCount || elemCount == 0", "xx.cpp", 0xddf);
    }
label_0:
    eax = *((ebp - 8));
    edx:eax = eax * edi;
    *((ebp + 0x10)) -= eax;
    if (edi < *((ebp + 0x10))) {
        fcn_00406b6c ("dtrCount <= vdtCount", "xx.cpp", 0xde0);
    }
    edx = *((ebp - 8));
    edx *= *(ebx);
    esi += edx;
    if (*((ebp + 0x10)) == 0) {
        goto label_1;
    }
    fcn_00408ffb (esi, ebx, 0, *((ebp + 0x10)), 1, *((ebp + 0x14)), *((ebp + 0x18)));
    while (ecx != 0) {
        esi -= *(ebx);
        fcn_00408ffb (esi, ebx, 0, edi, 1, *((ebp + 0x14)), *((ebp + 0x18)));
label_1:
        ecx = *((ebp - 8));
        *((ebp - 8)) += 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x4093cf */
#include <stdint.h>
 
int32_t fcn_004093cf (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h) {
    edi = *((ebp + 0xc));
    esi = *((ebp + 8));
    ebx = *(edi);
    if ((*((ebx + 4)) & 2) == 0) {
        fcn_00406b6c ("IS_CLASS(varType->tpMask)", "xx.cpp", 0xe13);
    }
    eax = *((ebx + 0xc));
    eax &= 0x50;
    if (eax != 0x50) {
        eax = esi;
    } else {
        if (*((ebx + 8)) == -1) {
            eax = esi;
        } else {
            if (*((ebp + 0x10)) == 0) {
                edx = *((ebx + 8));
                edx += esi;
                ebx = edx;
                ebx = *(ebx);
            } else {
                ebx = *((ebp + 0x10));
            }
            esi -= *((ebx - 8));
            ebx -= *((ebx - 4));
            if (*((ebx - 4)) != 0) {
                fcn_00406b6c ("((unsigned __far *)vftAddr)[-1] == 0", "xx.cpp", 0xe39);
            }
            eax = *((ebx - 0xc));
            *(edi) = eax;
            eax = esi;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40810e */
#include <stdint.h>
 
int32_t fcn_0040810e (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    ebx = *((ebp + 0x10));
    if ((bl & 0x80) != 0) {
        fcn_00406b6c ("(mfnMask & 0x0080) == 0", "xx.cpp", 0x2fc);
    }
    ebx &= 7;
    ebx--;
    if (ebx != 0) {
        ebx--;
        if (ebx != 0) {
            ebx--;
            if (ebx == 0) {
                goto label_0;
            }
            ebx -= 2;
            if (ebx == 0) {
                goto label_1;
            }
        } else {
            uint32_t (*ebp + 0xc)(uint32_t*) (*((ebp + 8)));
            return;
        }
        uint32_t (*ebp + 0xc)(uint32_t*) (*((ebp + 8)));
        return;
label_0:
        eax = *((ebp + 8));
        uint32_t (*ebp + 0xc)() ();
        return eax;
label_1:
        uint32_t (*ebp + 0xc)(uint32_t*) (*((ebp + 8)));
        return eax;
    }
    edx = "what?";
    if (edx != 0) {
        fcn_00406b6c ("!\"what?\", "xx.cpp", 0x323);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40121c */
#include <stdint.h>
 
int32_t fcn_0040121c (int32_t arg_8h) {
    eax = *((ebp + 8));
    fcn_0040120c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe @ 0x40231c */
#include <stdint.h>
 
int32_t fcn_0040231c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 0x10));
    ecx = *((ebp + 8));
    esi = *((ebp + 0xc));
    do {
        if (edi < 4) {
            goto label_0;
        }
        al = *(ecx);
        dl = *(esi);
        if (dl != al) {
            goto label_0;
        }
        al = *((ecx + 1));
        dl = *((esi + 1));
        if (dl != al) {
            goto label_0;
        }
        al = *((ecx + 2));
        dl = *((esi + 2));
        if (dl != al) {
            goto label_0;
        }
        al = *((ecx + 3));
        dl = *((esi + 3));
        if (dl != al) {
            goto label_0;
        }
        edi -= 4;
        ecx += 4;
        esi += 4;
    } while (edi >= 4);
label_0:
    if (edi != 0) {
        goto label_1;
    }
    eax = 0;
    goto label_2;
    do {
label_1:
        al = *(ecx);
        dl = *(esi);
        if (dl != al) {
            goto label_3;
        }
        ecx++;
        esi++;
        edi--;
    } while (edi != 0);
label_3:
    ecx = 0;
    cl = al;
    eax = 0;
    al = dl;
    ecx -= eax;
    eax = ecx;
label_2:
    esi = edi;
    return eax;
}
