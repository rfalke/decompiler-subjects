/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402b10 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_4h;
label_1:
    fcn_00404590 (0x417680);
    fcn_00407bdc (1);
    eax = 0x5a4d;
    while (*((eax + 0x400000)) != 0x4550) {
label_0:
        ebx = 0;
        goto label_2;
        eax = *(0x40003c);
    }
    ecx = 0x10b;
    if (*((eax + 0x400018)) != cx) {
        goto label_0;
    }
    ebx = 0;
    if (*((eax + 0x400074)) > 0xe) {
        bl = (*((eax + 0x4000e8)) != ebx) ? 1 : 0;
    }
label_2:
    *((ebp - 0x1c)) = ebx;
    eax = fcn_004071d8 ();
    if (eax == 0) {
        fcn_00402ae9 (0x1c);
    }
    eax = fcn_00407839 ();
    if (eax == 0) {
        fcn_00402ae9 (0x10);
    }
    fcn_00407cc5 ();
    *((ebp - 4)) = 0;
    eax = fcn_00405830 ();
    if (eax < 0) {
        fcn_00402ae9 (0x1b);
    }
    eax = GetCommandLineA ();
    *(0x41b008) = eax;
    eax = fcn_00407d05 ();
    *(0x4191c0) = eax;
    eax = fcn_004078cc ();
    if (eax < 0) {
        fcn_00406d07 (8);
    }
    eax = fcn_00407afb ();
    if (eax < 0) {
        fcn_00406d07 (9);
    }
    eax = fcn_00406d41 (1);
    if (eax != 0) {
        fcn_00406d07 (eax);
    }
    eax = *(0x4192e4);
    *(0x419304) = eax;
    eax = main (*(0x4192d8), *(0x4192dc));
    esi = eax;
    *((ebp - 0x24)) = esi;
    if (ebx == 0) {
        fcn_00406faa (esi);
    }
    fcn_00406d32 ();
    *((ebp - 4)) = 0xfffffffe;
    eax = esi;
    fcn_004045d5 ();
    return eax;
    fcn_00407c29 ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401a00 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    int32_t var_134h;
    int32_t var_40h;
    int32_t var_30h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_16h;
    int32_t var_14h;
    int32_t var_4h;
    if (*((ebp + 8)) != 4) {
        eax = 1;
        return eax;
    }
    esi = *((ebp + 0xc));
    edx = ebp - 0x14;
    ecx = *((esi + 4));
    al = fcn_00401960 ();
    if (al == 0) {
        eax = 2;
        return eax;
    }
    ecx = 0;
    do {
        al = cl;
        al += al;
        al ^= *((ebp + ecx - 0x14));
        al ^= 0x55;
        *((ebp + ecx - 0x14)) = al;
        ecx++;
    } while (ecx < 0x10);
    eax = fcn_00401e79 (*((esi + 8)), 0x417534);
    edi = eax;
    if (edi == 0) {
        eax = edi + 3;
        return eax;
    }
    eax = fcn_00401e79 (*((esi + 0xc)), 0x417538);
    *((ebp - 4)) = eax;
    if (eax == 0) {
        fcn_00401efa (edi);
        eax = 4;
        return eax;
    }
    fcn_00402000 (edi, 0, 2);
    eax = fcn_00402413 (edi);
    ecx = ebp - 0x14;
    esi = eax;
    *((ebp + 8)) = esi;
    ebx = esi;
    fcn_004019e0 ();
    ebx &= 0xf;
    if (ebx != 0) {
        esi -= ebx;
        esi += 0x10;
    }
    fcn_00402000 (edi, 0, 0);
    __asm ("movdqu xmm0, xmmword [str.Total_toll_verschluesselt_]");
    ax = *(0x417554);
    ecx = ebp - 0x30;
    *((ebp - 0x18)) = ax;
    edx = ecx + 1;
    al = *(0x417556);
    __asm ("movdqu xmmword [ebp - 0x30], xmm0");
    *((ebp - 0x16)) = al;
    xmm0 = *(0x41754c);
    *((ebp - 0x20)) = xmm0;
    do {
        al = *(ecx);
        ecx++;
    } while (al != 0);
    ebx = *((ebp - 4));
    eax = ebp - 0x30;
    ecx -= edx;
    fcn_004025d8 (eax, ecx, 1, ebx);
    eax = ebp + 8;
    fcn_004025d8 (eax, 4, 1, ebx);
    ecx = ebp - 0x14;
    fcn_004019e0 ();
    eax = ecx;
    fcn_004025d8 (eax, 0x10, 1, ebx);
    ecx = ebp - 0x14;
    fcn_004019e0 ();
    eax = fcn_0040265a (esi);
    *((ebp - 4)) = eax;
    fcn_00407390 (eax, 0, esi);
    fcn_004028b1 (*((ebp - 4)), *((ebp + 8)), 1, edi);
    fcn_00401efa (edi);
    eax = fcn_0040265a (esi);
    edi = eax;
    fcn_00407390 (edi, 0, esi);
    edx = *((ebp + 8));
    ecx = 0;
    do {
        al = dl;
        al ^= cl;
        *((ebp + ecx - 0x40)) = al;
        ecx++;
    } while (ecx < 0x10);
    ecx = ebp - 0x14;
    eax = fcn_00401000 (ebp - 0x134);
    if (eax != 0) {
        eax = 4;
        return eax;
    }
    ecx = *((ebp - 4));
    eax = ebp - 0x134;
    edx = edi;
    fcn_00401780 (esi, eax, ebp - 0x40);
    fcn_004025d8 (edi, esi, 1, ebx);
    fcn_0040295d (*((ebp - 4)));
    fcn_0040295d (edi);
    eax = fcn_00401efa (ebx);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401960 */
#include <stdint.h>
 
uint32_t fcn_00401960 (void) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_2h;
    ebx = edx;
    edi = ecx;
    edx = ecx + 1;
    do {
        al = *(ecx);
        ecx++;
    } while (al != 0);
    ecx -= edx;
    if (ecx != 0x20) {
        ebx = edi;
        return al;
    }
    *((ebp - 2)) = 0;
    esi = 0;
    while (esi < 0x10) {
        eax = ebp - 4;
        fcn_00401c00 (eax, edi, 2);
        eax = ebp - 4;
        eax = fcn_00401d24 (eax, 0x417530, ebp - 8);
        if (eax != 1) {
            goto label_0;
        }
        al = *((ebp - 8));
        edi += 2;
        *((esi + ebx)) = al;
        esi++;
    }
    al = 1;
    return eax;
label_0:
    al = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401c00 */
#include <stdint.h>
 
int32_t fcn_00401c00 (int32_t arg_8h, int32_t arg_14h, int32_t arg_ch) {
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
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401d24 */
#include <stdint.h>
 
uint32_t fcn_00401d24 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    fcn_00401d42 (0x402e75, *((ebp + 8)), *((ebp + 0xc)), 0, ebp + 0x10);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401d42 */
#include <stdint.h>
 
int32_t fcn_00401d42 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    *((ebp - 0x20)) = 0;
    eax = 0;
    esi = *((ebp + 0xc));
    edi = ebp - 0x1c;
    ecx = 7;
    memset (edi, eax, ecx);
    while (*((ebp + 0x10)) == eax) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
        goto label_0;
    }
    eax = fcn_00402cc0 (esi);
    ecx = 0x7fffffff;
    *((ebp - 0x14)) = 0x49;
    *((ebp - 0x18)) = esi;
    *((ebp - 0x20)) = esi;
    *((ebp - 0x1c)) = ecx;
    if (eax <= ecx) {
        *((ebp - 0x1c)) = eax;
    }
    eax = ebp - 0x20;
    uint32_t (*ebp + 8)(uint32_t, uint32_t*, uint32_t*, uint32_t*) (eax, *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401e79 */
#include <stdint.h>
 
void fcn_00401e79 (int32_t arg_8h, int32_t arg_ch) {
    fcn_00401db5 (*((ebp + 8)), *((ebp + 0xc)), 0x40);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401db5 */
#include <stdint.h>
 
uint32_t fcn_00401db5 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_1ch;
    int32_t var_10h;
    int32_t var_4h;
    eax = fcn_00404590 (0x4175c0);
    *((ebp - 0x1c)) = 0;
    eax = 0;
    edi = *((ebp + 8));
    al = (edi != 0) ? 1 : 0;
    while (eax == 0) {
label_0:
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
label_1:
        eax = 0;
        goto label_2;
        eax = 0;
        ebx = *((ebp + 0xc));
        al = (ebx != 0) ? 1 : 0;
    }
    eax = 0;
    al = (*(ebx) != al) ? 1 : 0;
    if (eax == 0) {
        goto label_0;
    }
    eax = fcn_004041f0 ();
    esi = eax;
    *((ebp + 8)) = esi;
    if (esi == 0) {
        fcn_00404026 ();
        *(eax) = 0x18;
        goto label_1;
    }
    *((ebp - 4)) = 0;
    if (*(edi) == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00404790 (0x4183f0, ebp - 0x10, 0xfffffffffffffffe);
        goto label_1;
    }
    eax = fcn_0040430f (edi, ebx, *((ebp + 0x10)), esi);
    edi = eax;
    *((ebp - 0x1c)) = edi;
    *((ebp - 4)) = 0xfffffffe;
    fcn_00401e71 ();
    eax = edi;
label_2:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401efa */
#include <stdint.h>
 
uint32_t fcn_00401efa (int32_t arg_8h) {
    int32_t var_1ch;
    int32_t var_4h;
    eax = fcn_00404590 (0x4175e0);
    edi |= 0xffffffff;
    *((ebp - 0x1c)) = edi;
    eax = 0;
    esi = *((ebp + 8));
    al = (esi != 0) ? 1 : 0;
    if (eax != 0) {
        goto label_1;
    }
    fcn_00404026 ();
    *(eax) = 0x16;
    fcn_00402c77 ();
    do {
label_0:
        eax = edi;
        fcn_004045d5 ();
        return eax;
label_1:
        if ((*((esi + 0xc)) & 0x40) == 0) {
            goto label_2;
        }
        *((esi + 0xc)) = 0;
    } while (1);
label_2:
    fcn_0040411a (esi);
    *((ebp - 4)) = 0;
    eax = fcn_00401e8e (esi);
    edi = eax;
    *((ebp - 0x1c)) = edi;
    *((ebp - 4)) = 0xfffffffe;
    fcn_00401f69 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404590 */
#include <stdint.h>
 
int32_t fcn_00404590 (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *(0x4183f0);
    *((ebp - 4)) ^= eax;
    eax ^= ebp;
    *((ebp - 0x18)) = esp;
    eax = *((ebp - 4));
    *((ebp - 4)) = 0xfffffffe;
    *((ebp - 8)) = eax;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404026 */
#include <stdint.h>
 
uint32_t fcn_00404026 (void) {
    eax = fcn_00407717 ();
    if (eax == 0) {
        eax = 0x418168;
        return eax;
    }
    eax += 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407717 */
#include <stdint.h>
 
uint32_t fcn_00407717 (void) {
    eax = GetLastError (edi, esi);
    edi = eax;
    eax = fcn_00407dcf (*(0x418540));
    esi = eax;
    if (esi == 0) {
        eax = fcn_00408f5b (1, 0x3bc);
        esi = eax;
        if (esi == 0) {
            goto label_0;
        }
        eax = fcn_00407dee (*(0x418540), esi);
        if (eax != 0) {
            fcn_00407786 (esi, 0);
            eax = GetCurrentThreadId ();
            *((esi + 4)) |= 0xffffffff;
            *(esi) = eax;
        } else {
            fcn_0040295d (esi);
            esi = 0;
        }
    }
label_0:
    SetLastError (edi);
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402c77 */
#include <stdint.h>
 
int32_t fcn_00402c77 (void) {
    eax = 0;
    fcn_00402c4c (eax, eax, eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402c4c */
#include <stdint.h>
 
uint32_t fcn_00402c4c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    eax = DecodePointer (*(0x4191c8));
    if (eax != 0) {
        void (*eax)() ();
    }
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4045d5 */
#include <stdint.h>
 
void fcn_004045d5 (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40411a */
#include <stdint.h>
 
int32_t fcn_0040411a (int32_t arg_8h) {
    esi = *((ebp + 8));
    ecx = 0x418170;
    if (esi >= ecx) {
        if (esi <= 0x4183d0) {
            eax = esi;
            eax -= ecx;
            eax >>= 5;
            eax += 0x10;
            fcn_00409180 (eax);
            *((esi + 0xc)) |= 0x8000;
        }
    } else {
        EnterCriticalSection (esi + 0x20);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401e8e */
#include <stdint.h>
 
int32_t fcn_00401e8e (int32_t arg_8h) {
    esi = *((ebp + 8));
    edi |= 0xffffffff;
    if (esi == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= edi;
    } else {
        if ((*((esi + 0xc)) & 0x83) != 0) {
            eax = fcn_00404af1 (esi);
            edi = eax;
            fcn_00404a7b (esi);
            eax = fcn_004048e2 (esi);
            eax = fcn_00404906 (eax);
            if (eax < 0) {
                edi |= 0xffffffff;
            } else {
                if (*((esi + 0x1c)) == 0) {
                    goto label_0;
                }
                fcn_0040295d (*((esi + 0x1c)));
                *((esi + 0x1c)) = 0;
            }
        }
label_0:
        *((esi + 0xc)) = 0;
        eax = edi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401f69 */
#include <stdint.h>
 
void fcn_00401f69 (void) {
    fcn_00404189 (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404189 */
#include <stdint.h>
 
int32_t fcn_00404189 (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = 0x418170;
    if (eax >= ecx) {
        if (eax > 0x4183d0) {
            goto label_0;
        }
        *((eax + 0xc)) &= 0xffff7fff;
        eax -= ecx;
        eax >>= 5;
        eax += 0x10;
        eax = fcn_004092ea (eax);
        return eax;
    }
label_0:
    eax += 0x20;
    LeaveCriticalSection (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4092ea */
#include <stdint.h>
 
int32_t fcn_004092ea (int32_t arg_8h) {
    eax = *((ebp + 8));
    LeaveCriticalSection (*((eax*8 + 0x418cc8)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402000 */
#include <stdint.h>
 
uint32_t fcn_00402000 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_1ch;
    int32_t var_4h;
    eax = fcn_00404590 (0x417600);
    *((ebp - 0x1c)) = 0;
    eax = 0;
    esi = *((ebp + 8));
    al = (esi != 0) ? 1 : 0;
    while (edi != 2) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
        goto label_0;
        edi = *((ebp + 0x10));
        if (edi == 0) {
            goto label_1;
        }
        if (edi == 1) {
            goto label_1;
        }
    }
label_1:
    fcn_0040411a (esi);
    *((ebp - 4)) = 0;
    eax = fcn_00401f71 (esi, *((ebp + 0xc)), edi);
    edi = eax;
    *((ebp - 0x1c)) = edi;
    *((ebp - 4)) = 0xfffffffe;
    fcn_0040207b ();
    eax = edi;
label_0:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402413 */
#include <stdint.h>
 
uint32_t fcn_00402413 (int32_t arg_8h) {
    int32_t var_1ch;
    int32_t var_4h;
    eax = fcn_00404590 (0x417620);
    *((ebp - 0x1c)) = 0;
    eax = 0;
    esi = *((ebp + 8));
    al = (esi != 0) ? 1 : 0;
    if (eax == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
    } else {
        fcn_0040411a (esi);
        *((ebp - 4)) = 0;
        eax = fcn_00402083 (esi);
        edi = eax;
        *((ebp - 0x1c)) = edi;
        *((ebp - 4)) = 0xfffffffe;
        fcn_00402477 ();
        eax = edi;
    }
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4019e0 */
#include <stdint.h>
 
int32_t fcn_004019e0 (void) {
    eax = 0;
    do {
        dl = al;
        esi = eax + ecx;
        dl += dl;
        eax++;
        dl ^= *(esi);
        dl ^= 0x55;
        *(esi) = dl;
    } while (eax < 0x10);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4025d8 */
#include <stdint.h>
 
uint32_t fcn_004025d8 (char ** arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_1ch;
    int32_t var_4h;
    eax = fcn_00404590 (0x417640);
    *((ebp - 0x1c)) = 0;
    if (*((ebp + 0xc)) != 0) {
        if (*((ebp + 0x10)) == 0) {
            goto label_0;
        }
        eax = 0;
        esi = *((ebp + 0x14));
        al = (esi != 0) ? 1 : 0;
        if (eax != 0) {
            goto label_1;
        }
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
    }
label_0:
    eax = 0;
    do {
        fcn_004045d5 ();
        return eax;
label_1:
        fcn_0040411a (esi);
        *((ebp - 4)) = 0;
        eax = fcn_0040247f (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), esi);
        edi = eax;
        *((ebp - 0x1c)) = edi;
        *((ebp - 4)) = 0xfffffffe;
        fcn_00402652 ();
        eax = edi;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40247f */
#include <stdint.h>
 
int32_t fcn_0040247f (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_8h;
    int32_t var_4h;
    ecx = *((ebp + 0xc));
    if (ecx == 0) {
        goto label_2;
    }
    ebx = *((ebp + 0x10));
    if (ebx == 0) {
        goto label_2;
    }
    esi = *((ebp + 0x14));
    while (*((ebp + 8)) == 0) {
label_0:
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
label_2:
        eax = 0;
label_1:
        return eax;
    }
    eax |= 0xffffffff;
    edx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    if (ebx > eax) {
        goto label_0;
    }
    edi = ecx;
    edi *= ebx;
    ebx = edi;
    if ((*((esi + 0xc)) & 0x10c) != 0) {
        ecx = *((esi + 0x18));
    } else {
        ecx = 0x1000;
    }
    *((ebp - 4)) = ecx;
    if (edi == 0) {
        goto label_3;
    }
    do {
        edx = *((esi + 0xc));
        edx &= 0x108;
        if (edx != 0) {
            eax = *((esi + 4));
            *((ebp - 8)) = eax;
            if (eax != 0) {
                if (eax < 0) {
                    goto label_4;
                }
                if (ebx < eax) {
                    eax = ebx;
                    *((ebp - 8)) = ebx;
                }
                fcn_00405c40 (*(esi), *((ebp + 8)), eax);
                eax = *((ebp - 8));
                *((esi + 4)) -= eax;
                ebx -= eax;
                *(esi) += eax;
                *((ebp + 8)) += eax;
            }
        } else {
            if (ebx < ecx) {
                goto label_5;
            }
            if (edx != 0) {
                eax = fcn_00404af1 (esi);
                if (eax != 0) {
                    goto label_6;
                }
                ecx = *((ebp - 4));
            }
            eax = ebx;
            if (ecx != 0) {
                edx = 0;
                eax = edx:eax / ecx;
                edx = edx:eax % ecx;
                eax = ebx;
                eax -= edx;
                *((ebp - 8)) = eax;
            } else {
                *((ebp - 8)) = ebx;
            }
            eax = fcn_004048e2 (esi);
            eax = fcn_00406284 (eax);
            if (eax == -1) {
                goto label_4;
            }
            ecx = *((ebp - 8));
            edx = *((ebp - 8));
            if (eax <= ecx) {
                edx = eax;
            }
            *((ebp + 8)) += edx;
            ebx -= edx;
            if (eax < ecx) {
                goto label_4;
            }
        }
        ecx = *((ebp - 4));
        goto label_7;
label_5:
        eax = *((ebp + 8));
        eax = *(eax);
        eax = fcn_00405ae4 (eax, esi);
        if (eax == -1) {
            goto label_6;
        }
        *((ebp + 8))++;
        ebx--;
        ecx = *((esi + 0x18));
        *((ebp - 4)) = ecx;
        if (ecx <= 0) {
            ecx = 0;
            ecx++;
            *((ebp - 4)) = ecx;
        }
label_7:
    } while (ebx != 0);
label_3:
    eax = *((ebp + 0x10));
    goto label_1;
label_4:
    *((esi + 0xc)) |= 0x20;
label_6:
    edi -= ebx;
    edx = 0;
    eax = edi;
    eax = *(edx:eax) / ebp + 0xc;
    edx = *(edx:eax) % ebp + 0xc;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402652 */
#include <stdint.h>
 
void fcn_00402652 (void) {
    fcn_00404189 (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40265a */
#include <stdint.h>
 
int32_t fcn_0040265a (int32_t arg_8h) {
    esi = *((ebp + 8));
    if (esi > 0xffffffe0) {
        goto label_0;
    }
    do {
        eax = *(0x41993c);
        if (eax == 0) {
            fcn_00406fbe ();
            fcn_0040701b (0x1e);
            fcn_00406cf1 (0xff);
            eax = *(0x41993c);
        }
        if (esi != 0) {
            ecx = esi;
        } else {
            ecx = 0;
            ecx++;
        }
        eax = HeapAlloc (eax, 0, ecx);
        edi = eax;
        if (edi != 0) {
            goto label_1;
        }
        ebx = 0xc;
        if (*(0x419938) == eax) {
            goto label_2;
        }
        eax = fcn_00406bd8 (esi);
    } while (eax != 0);
    goto label_3;
label_2:
    fcn_00404026 ();
    *(eax) = ebx;
label_3:
    fcn_00404026 ();
    *(eax) = ebx;
label_1:
    eax = edi;
    goto label_4;
label_0:
    fcn_00406bd8 (esi);
    fcn_00404026 ();
    *(eax) = 0xc;
    eax = 0;
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407390 */
#include <stdint.h>
 
uint32_t fcn_00407390 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    ecx = *((esp + 4));
    if (edx == 0) {
        goto label_1;
    }
    eax = *((esp + 8));
    if (((0x419eec >> 1) & 1) >= 0) {
        goto label_2;
    }
    ecx = *((esp + 0xc));
    edi = *((esp + 8));
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    goto label_3;
label_2:
    edx = *((esp + 0xc));
    if (edx >= 0x80) {
        if (((0x418e00 >> 1) & 1) < 0) {
            goto label_4;
        }
    }
    edi = ecx;
    if (edx < 4) {
        goto label_5;
    }
    ecx = -ecx;
    ecx &= 3;
    if (ecx == 0) {
        goto label_6;
    }
    edx -= ecx;
    do {
        *(edi) = al;
        edi++;
        ecx--;
    } while (ecx != 0);
label_6:
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
        goto label_5;
    }
    memset (edi, eax, ecx);
    if (edx == 0) {
        goto label_3;
    }
    do {
label_5:
        *(edi) = al;
        edi++;
        edx--;
    } while (edx != 0);
label_3:
    eax = *((esp + 8));
    return eax;
label_1:
    eax = *((esp + 4));
    return eax;
label_4:
    if (eax == 0) {
        xmm0 = 0;
    } else {
        xmm0 = eax;
        __asm ("punpcklbw xmm0, xmm0");
        __asm ("punpcklwd xmm0, xmm0");
        __asm ("pshufd xmm0, xmm0, 0");
    }
    ebx = ecx;
    ebx &= 0xf;
    if (ebx != 0) {
        goto label_7;
    }
label_0:
    ebx = edx;
    edx &= 0x7f;
    ebx >>= 7;
    if (ebx == 0) {
        goto label_8;
    }
    do {
        __asm ("movdqa xmmword [ecx], xmm0");
        __asm ("movdqa xmmword [ecx + 0x10], xmm0");
        __asm ("movdqa xmmword [ecx + 0x20], xmm0");
        __asm ("movdqa xmmword [ecx + 0x30], xmm0");
        __asm ("movdqa xmmword [ecx + 0x40], xmm0");
        __asm ("movdqa xmmword [ecx + 0x50], xmm0");
        __asm ("movdqa xmmword [ecx + 0x60], xmm0");
        __asm ("movdqa xmmword [ecx + 0x70], xmm0");
        ecx = ecx + 0x80;
        ebx--;
    } while (ebx != 0);
label_8:
    if (edx == 0) {
        goto label_9;
    }
    ebx = edx;
    ebx >>= 4;
    if (ebx == 0) {
        goto label_10;
    }
    while (ebx != 0) {
        __asm ("movdqa xmmword [ecx], xmm0");
        ecx = ecx + 0x10;
        ebx--;
    }
label_10:
    edx &= 0xf;
    if (edx == 0) {
        goto label_9;
    }
    ebx = edx;
    edx >>= 2;
    if (edx == 0) {
        goto label_11;
    }
    do {
        *(ecx) = xmm0;
        ecx = ecx + 4;
        edx--;
    } while (edx != 0);
label_11:
    ebx &= 3;
    if (ebx == 0) {
        goto label_9;
    }
    do {
        *(ecx) = al;
        ecx++;
        ebx--;
    } while (ebx != 0);
label_9:
    eax = ecx;
    ebx = ecx;
    return eax;
label_7:
    ebx = -ebx;
    ebx += 0x10;
    edx -= ebx;
    edx = ebx;
    edx &= 3;
    if (edx == 0) {
        goto label_12;
    }
    do {
        *(ecx) = al;
        ecx++;
        edx--;
    } while (edx != 0);
label_12:
    ebx >>= 2;
    if (ebx == 0) {
        goto label_13;
    }
    do {
        *(ecx) = xmm0;
        ecx = ecx + 4;
        ebx--;
    } while (ebx != 0);
label_13:
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4028b1 */
#include <stdint.h>
 
void fcn_004028b1 (int32_t arg_8h, char ** arg_ch, int32_t arg_10h, int32_t arg_14h) {
    fcn_004028cc (*((ebp + 8)), 0xffffffffffffffff, *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4028cc */
#include <stdint.h>
 
int32_t fcn_004028cc (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h, int32_t arg_18h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417660);
    edi = 0;
    *((ebp - 0x1c)) = edi;
    if (*((ebp + 0x10)) != edi) {
        if (*((ebp + 0x14)) == edi) {
            goto label_0;
        }
        esi = *((ebp + 0x18));
        if (esi != 0) {
            goto label_1;
        }
        if (*((ebp + 0xc)) != -1) {
            fcn_00407390 (*((ebp + 8)), edi, *((ebp + 0xc)));
        }
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
    }
label_0:
    eax = 0;
    do {
        fcn_004045d5 ();
        return eax;
label_1:
        fcn_0040411a (esi);
        *((ebp - 4)) = edi;
        eax = fcn_004026ec (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), esi);
        edi = eax;
        *((ebp - 0x1c)) = edi;
        *((ebp - 4)) = 0xfffffffe;
        fcn_00402955 ();
        eax = edi;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4026ec */
#include <stdint.h>
 
int32_t fcn_004026ec (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_14h, int32_t arg_18h) {
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    ecx = *((ebp + 8));
    eax = *((ebp + 0xc));
    *((ebp - 4)) = ecx;
    *((ebp - 8)) = eax;
    if (*((ebp + 0x10)) == 0) {
        goto label_3;
    }
    ebx = *((ebp + 0x14));
    if (ebx == 0) {
        goto label_3;
    }
    while (esi == 0) {
label_0:
        fcn_00404026 ();
        *(eax) = 0x16;
label_2:
        eax = fcn_00402c77 ();
label_3:
        eax = 0;
label_1:
        return eax;
        esi = *((ebp + 0x18));
        if (esi != 0) {
            eax |= 0xffffffff;
            edx = 0;
            eax = *(edx:eax) / ebp + 0x10;
            edx = *(edx:eax) % ebp + 0x10;
            if (ebx <= eax) {
                goto label_4;
            }
        }
        if (*((ebp + 0xc)) != -1) {
            eax = fcn_00407390 (ecx, 0, *((ebp + 0xc)));
        }
    }
    eax |= 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / ebp + 0x10;
    edx = *(edx:eax) % ebp + 0x10;
    if (ebx > eax) {
        goto label_0;
    }
label_4:
    edi = *((ebp + 0x10));
    edi *= ebx;
    ebx = edi;
    if ((*((esi + 0xc)) & 0x10c) != 0) {
        ecx = *((esi + 0x18));
    } else {
        ecx = 0x1000;
    }
    *((ebp - 0xc)) = ecx;
    if (edi == 0) {
        goto label_5;
    }
    do {
        if ((*((esi + 0xc)) & 0x10c) != 0) {
            eax = *((esi + 4));
            *((ebp - 0x10)) = eax;
            if (eax != 0) {
                if (eax < 0) {
                    goto label_6;
                }
                if (ebx < eax) {
                    eax = ebx;
                    *((ebp - 0x10)) = ebx;
                }
                ecx = *((ebp - 8));
                if (eax > ecx) {
                    goto label_7;
                }
                fcn_0040730e (*((ebp - 4)), ecx, *(esi), eax);
                eax = *((ebp - 0x10));
                *((esi + 4)) -= eax;
                ebx -= eax;
                *(esi) += eax;
            }
        } else {
            if (ebx < ecx) {
                goto label_8;
            }
            if (ecx != 0) {
                edx = 0;
                if (ebx > 0x7fffffff) {
                    eax = 0x7fffffff;
                    eax = edx:eax / ecx;
                    edx = edx:eax % ecx;
                    eax = 0x7fffffff;
                } else {
                    eax = ebx;
                    eax = edx:eax / ecx;
                    edx = edx:eax % ecx;
                    eax = ebx;
                }
                eax -= edx;
            } else {
                eax = 0x7fffffff;
                if (ebx > 0x7fffffff) {
                    goto label_9;
                }
                eax = ebx;
            }
label_9:
            if (eax > *((ebp - 8))) {
                goto label_7;
            }
            eax = fcn_004048e2 (esi);
            eax = fcn_0040509f (eax);
            if (eax == 0) {
                goto label_10;
            }
            if (eax == -1) {
                goto label_6;
            }
            ebx -= eax;
        }
        *((ebp - 4)) += eax;
        *((ebp - 8)) -= eax;
        ecx = *((ebp - 0xc));
        goto label_11;
label_8:
        eax = fcn_004071ed (esi);
        if (eax == -1) {
            goto label_12;
        }
        ecx = *((ebp - 8));
        if (ecx == 0) {
            goto label_7;
        }
        edx = *((ebp - 4));
        *(edx) = al;
        edx++;
        ebx--;
        *((ebp - 4)) = edx;
        ecx--;
        *((ebp - 8)) = ecx;
        ecx = *((esi + 0x18));
        *((ebp - 0xc)) = ecx;
label_11:
    } while (ebx != 0);
label_5:
    eax = *((ebp + 0x14));
    goto label_1;
label_7:
    if (*((ebp + 0xc)) != -1) {
        fcn_00407390 (*((ebp + 8)), 0, *((ebp + 0xc)));
    }
    fcn_00404026 ();
    *(eax) = 0x22;
    goto label_2;
label_6:
    *((esi + 0xc)) |= 0x20;
    do {
label_12:
        edi -= ebx;
        edx = 0;
        eax = edi;
        eax = *(edx:eax) / ebp + 0x10;
        edx = *(edx:eax) % ebp + 0x10;
        goto label_1;
label_10:
        *((esi + 0xc)) |= 0x10;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402955 */
#include <stdint.h>
 
void fcn_00402955 (void) {
    fcn_00404189 (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
uint32_t fcn_00401000 (int32_t arg_8h) {
    /* [00] -r-x section size 65536 named .text */
    esi = ecx;
    if (esi == 0) {
        goto label_0;
    }
    edi = *((ebp + 8));
    if (edi == 0) {
        goto label_0;
    }
    *((edi + 0xf0)) = 0xa;
    ecx = *(esi);
    eax = *((esi + 1));
    ecx <<= 8;
    ecx ^= eax;
    eax = *((esi + 2));
    ecx <<= 8;
    ecx ^= eax;
    eax = *((esi + 3));
    ecx <<= 8;
    ecx ^= eax;
    eax = edi + 4;
    *(edi) = ecx;
    edx = *((esi + 4));
    ecx = *((esi + 5));
    edx <<= 8;
    edx ^= ecx;
    ecx = *((esi + 6));
    edx <<= 8;
    edx ^= ecx;
    ecx = *((esi + 7));
    edx <<= 8;
    edx ^= ecx;
    *(eax) = edx;
    edx = *((esi + 8));
    ecx = *((esi + 9));
    edx <<= 8;
    edx ^= ecx;
    ecx = *((esi + 0xa));
    edx <<= 8;
    edx ^= ecx;
    ecx = *((esi + 0xb));
    edx <<= 8;
    edx ^= ecx;
    *((edi + 8)) = edx;
    ecx = *((esi + 0xd));
    ebx = *((esi + 0xc));
    ebx <<= 8;
    ebx ^= ecx;
    ecx = *((esi + 0xe));
    ebx <<= 8;
    ebx ^= ecx;
    ecx = *((esi + 0xf));
    ebx <<= 8;
    ebx ^= ecx;
    ecx = ebx;
    *((edi + 0xc)) = ebx;
    ecx >>= 0x10;
    ecx &= 0xff;
    edx = *((ecx*4 + str.ccccwwww));
    ecx = ebx;
    ecx >>= 8;
    edx ^= 0x1000000;
    ecx &= 0xff;
    edx &= 0xff000000;
    ecx = *((ecx*4 + str.ccccwwww));
    ecx &= 0xff0000;
    edx ^= ecx;
    ecx = ebx;
    ecx >>= 0x18;
    ecx = *((ecx*4 + str.ccccwwww));
    edx ^= ecx;
    ecx = (int32_t) bl;
    ecx = *((ecx*4 + str.ccccwwww));
    ecx &= 0xff00;
    edx ^= ecx;
    ecx = *(eax);
    edx ^= *(edi);
    ecx ^= edx;
    *((edi + 0x10)) = edx;
    edx = *((edi + 8));
    *((edi + 0x14)) = ecx;
    edx ^= ecx;
    ecx = ebx;
    *((edi + 0x18)) = edx;
    ecx ^= edx;
    *((edi + 0x1c)) = ecx;
    edi = 0x414d04;
    do {
        edx = *((eax + 0x18));
        eax = eax + 0x10;
        ecx = edx;
        ecx >>= 8;
        ecx &= 0xff;
        esi = *((ecx*4 + str.ccccwwww));
        ecx = edx;
        ecx >>= 0x10;
        esi &= 0xff0000;
        ecx &= 0xff;
        ecx = *((ecx*4 + str.ccccwwww));
        ecx &= 0xff000000;
        esi ^= ecx;
        ecx = edx;
        ecx >>= 0x18;
        ecx = *((ecx*4 + str.ccccwwww));
        esi ^= ecx;
        ecx = (int32_t) dl;
        ecx = *((ecx*4 + str.ccccwwww));
        ecx &= 0xff00;
        esi ^= ecx;
        esi ^= *((eax - 4));
        esi ^= *(edi);
        edi += 4;
        *((eax + 0xc)) = esi;
        ecx = *(eax);
        ecx ^= esi;
        *((eax + 0x10)) = ecx;
        edx = *((eax + 4));
        edx ^= ecx;
        *((eax + 0x14)) = edx;
        ecx = *((eax + 8));
        ecx ^= edx;
        *((eax + 0x18)) = ecx;
    } while (edi != 0x414d28);
    edi = ebx;
    eax = 0;
    esi = ebx;
    return eax;
label_0:
    edi = ebx;
    eax |= 0xffffffff;
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401780 */
#include <stdint.h>
 
int32_t fcn_00401780 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_29h;
    int32_t var_28h;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    edi = *((ebp + 8));
    ebx = ecx;
    *((ebp - 4)) = edx;
    edx = *((ebp + 0x10));
    *((ebp - 0xc)) = ecx;
    if (edi < 0x10) {
        goto label_1;
    }
    esi = ebx;
    eax = edi;
    esi -= edx;
    eax >>= 4;
    *((ebp - 8)) = eax;
label_0:
    eax = esi + 0xf;
    eax += edx;
    ecx = ebp - 0x28;
    if (ecx > eax) {
        goto label_2;
    }
    eax = ebp - 0x19;
    if (eax < ebx) {
        goto label_2;
    }
    edi = ecx;
    eax = edx;
    edi -= edx;
    edx = 0x10;
    do {
        cl = *((esi + eax));
        eax = eax + 1;
        cl ^= *((eax - 1));
        *((edi + eax - 1)) = cl;
        edx--;
    } while (edx != 0);
    edi = *((ebp + 8));
    goto label_3;
label_2:
    __asm ("movdqu xmm1, xmmword [ebx]");
    __asm ("movdqu xmm0, xmmword [edx]");
    xmm1 ^= xmm0;
    __asm ("movdqu xmmword [ebp - 0x28], xmm1");
label_3:
    edx = *((ebp - 4));
    ecx = ebp - 0x28;
    fcn_004011c0 (*((ebp + 0xc)));
    eax = *((ebp - 4));
    edi -= 0x10;
    edx = *((ebp + 0x10));
    ebx += 0x10;
    *((ebp + 8)) = edi;
    esi += 0x10;
    __asm ("movdqu xmm0, xmmword [eax]");
    eax += 0x10;
    *((ebp - 8))--;
    *((ebp - 4)) = eax;
    __asm ("movdqu xmmword [edx], xmm0");
    if (*((ebp - 8)) != 0) {
        goto label_0;
    }
    *((ebp - 0xc)) = ebx;
label_1:
    if (edi == 0) {
        goto label_4;
    }
    esi = 0;
    if (edi == 0) {
        goto label_5;
    }
    if (edi < 0x20) {
        goto label_6;
    }
    eax = ebx - 1;
    edx = ebp - 0x28;
    eax += edi;
    ecx = ebp + edi - 0x29;
    edx = *((ebp + 0x10));
    if (edx <= eax) {
        if (ecx >= ebx) {
            goto label_6;
        }
    }
    eax = edi;
    edx = ebp - 0x28;
    edx -= ebx;
    ecx = edi;
    *((ebp - 0x10)) = edx;
    eax &= 0x1f;
    edx = *((ebp + 0x10));
    ecx -= eax;
    edi = edx;
    eax = ebx;
    edi -= ebx;
    *((ebp - 8)) = edi;
    edi = ebp - 0x18;
    edi -= ebx;
    ebx = edx + 0x10;
    edx = *((ebp - 8));
    *((ebp - 0x14)) = edi;
    edi = *((ebp - 0x10));
    *((ebp - 0x18)) = ebx;
    ebx = *((ebp - 0x14));
    do {
        __asm ("movdqu xmm1, xmmword [edx + eax]");
        edx = *((ebp - 0x18));
        eax = eax + 0x20;
        __asm ("movdqu xmm0, xmmword [eax - 0x20]");
        xmm1 ^= xmm0;
        __asm ("movdqu xmm0, xmmword [eax - 0x10]");
        __asm ("movdqu xmmword [edi + eax - 0x20], xmm1");
        __asm ("movdqu xmm1, xmmword [edx + esi]");
        edx = *((ebp - 8));
        esi += 0x20;
        xmm1 ^= xmm0;
        __asm ("movdqu xmmword [ebx + eax - 0x20], xmm1");
    } while (esi < ecx);
    ebx = *((ebp - 0xc));
    edi = *((ebp + 8));
    edx = *((ebp + 0x10));
label_6:
    if (esi >= edi) {
        goto label_5;
    }
    ecx = esi + edx;
    ebx -= edx;
    eax = ebp - 0x28;
    eax -= edx;
    edx = edi;
    edx -= esi;
    *((ebp + 8)) = eax;
    esi = eax;
    do {
        al = *((ecx + ebx));
        ecx = ecx + 1;
        al ^= *((ecx - 1));
        *((ecx + esi - 1)) = al;
        edx--;
    } while (edx != 0);
label_5:
    esi = *((ebp + 0x10));
    if (edi < 0x10) {
        eax = 0x10;
        ecx = edi + esi;
        eax -= edi;
        edx = ebp - 0x28;
        edx += edi;
        fcn_00405c40 (edx, ecx, eax);
    }
    edx = ebp - 0x28;
    ecx = edx;
    fcn_004011c0 (*((ebp + 0xc)));
    __asm ("movdqu xmm0, xmmword [ebp - 0x28]");
    eax = *((ebp - 4));
    __asm ("movdqu xmmword [esi], xmm0");
    __asm ("movdqu xmmword [eax], xmm0");
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40295d */
#include <stdint.h>
 
uint32_t fcn_0040295d (uint32_t arg_8h) {
    if (*((ebp + 8)) != 0) {
        eax = HeapFree (*(0x41993c), 0, *((ebp + 8)));
        if (eax != 0) {
            goto label_0;
        }
        eax = fcn_00404026 ();
        esi = eax;
        eax = GetLastError ();
        eax = fcn_00404039 (eax);
        *(esi) = eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404039 */
#include <stdint.h>
 
int32_t fcn_00404039 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = 0;
    do {
        if (ecx == *((eax*8 + section..data))) {
            goto label_0;
        }
        eax++;
    } while (eax < 0x2d);
    eax = ecx - 0x13;
    if (eax <= 0x11) {
        eax = 0xd;
        return eax;
    }
    eax = ecx - 0xbc;
    ecx = 0xe;
    eax -= eax;
    eax &= ecx;
    eax += 8;
    return eax;
label_0:
    eax = *((eax*8 + 0x418004));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4011c0 */
#include <stdint.h>
 
uint32_t fcn_004011c0 (int32_t arg_8h) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ecx + 1));
    *((ebp - 0x1c)) = edx;
    edx = *(ecx);
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 2));
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 3));
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 5));
    ebx = *((ecx + 8));
    edi = *((ebp + 8));
    ebx <<= 8;
    edx ^= *(edi);
    *((ebp - 4)) = edx;
    edx = *((ecx + 4));
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 6));
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 7));
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 9));
    edx ^= *((edi + 4));
    ebx ^= eax;
    eax = *((ecx + 0xa));
    *((ebp - 0xc)) = edx;
    edx = *((ecx + 0xc));
    ebx <<= 8;
    ebx ^= eax;
    edx <<= 8;
    eax = *((ecx + 0xb));
    ebx <<= 8;
    ebx ^= eax;
    eax = *((ecx + 0xd));
    ebx ^= *((edi + 8));
    edx ^= eax;
    eax = *((ecx + 0xe));
    edx <<= 8;
    edx ^= eax;
    eax = *((ecx + 0xf));
    edx <<= 8;
    ecx = ebx;
    edx ^= eax;
    ecx >>= 8;
    eax = *((ebp - 0xc));
    ecx &= 0xff;
    edx ^= *((edi + 0xc));
    eax >>= 0x10;
    eax &= 0xff;
    ecx = *((ecx*4 + 0x416930));
    ecx ^= *((eax*4 + 0x416d30));
    eax = *((ebp - 4));
    eax >>= 0x18;
    ecx ^= *((eax*4 + 0x417130));
    eax = (int32_t) dl;
    ecx ^= *((eax*4 + 0x416530));
    eax = ebx;
    ecx ^= *((edi + 0x10));
    *((ebp - 8)) = ecx;
    ecx = edx;
    ecx >>= 8;
    eax >>= 0x10;
    ecx &= 0xff;
    eax &= 0xff;
    ecx = *((ecx*4 + 0x416930));
    ecx ^= *((eax*4 + 0x416d30));
    eax = *((ebp - 0xc));
    eax >>= 0x18;
    ecx ^= *((eax*4 + 0x417130));
    eax = *((ebp - 4));
    eax = (int32_t) al;
    ecx ^= *((eax*4 + 0x416530));
    ecx ^= *((edi + 0x14));
    eax = *((ebp - 4));
    *((ebp - 0x10)) = ecx;
    ecx = edx;
    ecx >>= 0x10;
    eax >>= 8;
    ecx &= 0xff;
    eax &= 0xff;
    edx >>= 0x18;
    ecx = *((ecx*4 + 0x416d30));
    ecx ^= *((eax*4 + 0x416930));
    eax = ebx;
    eax >>= 0x18;
    ecx ^= *((eax*4 + 0x417130));
    *((ebp + 8)) = ecx;
    ecx = *((ebp - 0xc));
    esi = *((ebp + 8));
    eax = (int32_t) cl;
    ecx >>= 8;
    ecx &= 0xff;
    esi ^= *((eax*4 + 0x416530));
    eax = esi;
    *((ebp + 8)) = esi;
    eax ^= *((edi + 0x18));
    ecx = *((ecx*4 + 0x416930));
    *((ebp + 8)) = eax;
    eax = *((ebp - 4));
    eax >>= 0x10;
    eax &= 0xff;
    ecx ^= *((eax*4 + 0x416d30));
    ecx ^= *((edx*4 + 0x417130));
    eax = (int32_t) bl;
    ecx ^= *((eax*4 + 0x416530));
    eax = edi + 0x20;
    ecx ^= *((edi + 0x1c));
    *((ebp - 0x14)) = eax;
    eax = *((edi + 0xf0));
    edi = *((ebp - 0x14));
    eax >>= 1;
    eax--;
    *((ebp - 4)) = ecx;
    *((ebp - 0x18)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    do {
        esi = *((ebp + 8));
        ecx = *((ebp + 8));
        eax = *((ebp - 0x10));
        ecx >>= 8;
        edx = *((ebp - 8));
        ecx &= 0xff;
        eax >>= 0x10;
        eax &= 0xff;
        ecx = *((ecx*4 + 0x416930));
        ecx ^= *((eax*4 + 0x416d30));
        eax = edx;
        eax >>= 0x18;
        ecx ^= *((eax*4 + 0x417130));
        eax = *((ebp - 4));
        eax = (int32_t) al;
        ecx ^= *((eax*4 + 0x416530));
        eax = esi;
        ecx ^= *(edi);
        *((ebp - 0xc)) = ecx;
        ecx = *((ebp - 4));
        ecx >>= 8;
        ecx &= 0xff;
        eax >>= 0x10;
        eax &= 0xff;
        ecx = *((ecx*4 + 0x416930));
        ecx ^= *((eax*4 + 0x416d30));
        eax = *((ebp - 0x10));
        eax >>= 0x18;
        ecx ^= *((eax*4 + 0x417130));
        eax = (int32_t) dl;
        ecx ^= *((eax*4 + 0x416530));
        eax = edx;
        ecx ^= *((edi + 4));
        *((ebp - 0x14)) = ecx;
        ecx = *((ebp - 4));
        ecx >>= 0x10;
        eax >>= 8;
        ecx &= 0xff;
        eax &= 0xff;
        edx >>= 0x10;
        edx &= 0xff;
        *((ebp - 8)) = edx;
        ebx = *((ecx*4 + 0x416d30));
        ebx ^= *((eax*4 + 0x416930));
        eax = esi;
        ecx = *((ebp - 0x10));
        eax >>= 0x18;
        ebx ^= *((eax*4 + 0x417130));
        eax = (int32_t) cl;
        ecx >>= 8;
        ecx &= 0xff;
        ebx ^= *((eax*4 + 0x416530));
        eax = *((ebp - 8));
        edx = *((ecx*4 + 0x416930));
        ebx ^= *((edi + 8));
        ecx = ebx;
        edx ^= *((eax*4 + 0x416d30));
        eax = *((ebp - 4));
        eax >>= 0x18;
        ecx >>= 8;
        ecx &= 0xff;
        edx ^= *((eax*4 + 0x417130));
        eax = esi;
        eax = (int32_t) al;
        ecx = *((ecx*4 + 0x416930));
        edx ^= *((eax*4 + 0x416530));
        eax = *((ebp - 0x14));
        edx ^= *((edi + 0xc));
        eax >>= 0x10;
        eax &= 0xff;
        ecx ^= *((eax*4 + 0x416d30));
        eax = *((ebp - 0xc));
        eax >>= 0x18;
        ecx ^= *((eax*4 + 0x417130));
        eax = (int32_t) dl;
        ecx ^= *((eax*4 + 0x416530));
        ecx ^= *((edi + 0x10));
        *((ebp - 8)) = ecx;
        ecx = edx;
        ecx >>= 8;
        ecx &= 0xff;
        ecx = *((ecx*4 + 0x416930));
        eax = ebx;
        eax >>= 0x10;
        eax &= 0xff;
        ecx ^= *((eax*4 + 0x416d30));
        eax = *((ebp - 0x14));
        eax >>= 0x18;
        ecx ^= *((eax*4 + 0x417130));
        eax = *((ebp - 0xc));
        eax = (int32_t) al;
        ecx ^= *((eax*4 + 0x416530));
        ecx ^= *((edi + 0x14));
        eax = *((ebp - 0xc));
        *((ebp - 0x10)) = ecx;
        ecx = edx;
        ecx >>= 0x10;
        ecx &= 0xff;
        eax >>= 8;
        eax &= 0xff;
        edx >>= 0x18;
        ecx = *((ecx*4 + 0x416d30));
        ecx ^= *((eax*4 + 0x416930));
        eax = ebx;
        eax >>= 0x18;
        ecx ^= *((eax*4 + 0x417130));
        *((ebp + 8)) = ecx;
        ecx = *((ebp - 0x14));
        esi = *((ebp + 8));
        eax = (int32_t) cl;
        ecx >>= 8;
        ecx &= 0xff;
        esi ^= *((eax*4 + 0x416530));
        eax = esi;
        *((ebp + 8)) = esi;
        eax ^= *((edi + 0x18));
        ecx = *((ecx*4 + 0x416930));
        *((ebp + 8)) = eax;
        eax = *((ebp - 0xc));
        eax >>= 0x10;
        eax &= 0xff;
        ecx ^= *((eax*4 + 0x416d30));
        ecx ^= *((edx*4 + 0x417130));
        eax = (int32_t) bl;
        ecx ^= *((eax*4 + 0x416530));
        ecx ^= *((edi + 0x1c));
        edi += 0x20;
        *((ebp - 0x18))--;
        *((ebp - 4)) = ecx;
    } while (*((ebp - 0x18)) != 0);
label_0:
    ebx = *((ebp - 0x10));
    eax = *((ebp - 0x10));
    eax >>= 0x10;
    eax &= 0xff;
    edx = *((ebp - 8));
    esi = *((ebp - 0x1c));
    ecx = *((eax*4 + str.ccccwwww));
    eax = *((ebp + 8));
    ecx &= 0xff0000;
    eax >>= 8;
    eax &= 0xff;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff00;
    ecx ^= eax;
    eax = edx;
    eax >>= 0x18;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff000000;
    ecx ^= eax;
    eax = *((ebp - 4));
    eax = (int32_t) al;
    eax = *((eax*4 + str.ccccwwww));
    ecx ^= eax;
    ecx ^= *(edi);
    eax = ecx;
    *((esi + 3)) = cl;
    eax >>= 0x18;
    *(esi) = al;
    eax = ecx;
    eax >>= 0x10;
    *((esi + 1)) = al;
    eax = ecx;
    eax >>= 8;
    *((esi + 2)) = al;
    eax = *((ebp + 8));
    eax >>= 0x10;
    eax &= 0xff;
    ecx = *((eax*4 + str.ccccwwww));
    eax = *((ebp - 4));
    ecx &= 0xff0000;
    eax >>= 8;
    eax &= 0xff;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff00;
    ecx ^= eax;
    eax = ebx;
    eax >>= 0x18;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff000000;
    ecx ^= eax;
    eax = (int32_t) dl;
    eax = *((eax*4 + str.ccccwwww));
    ecx ^= eax;
    ecx ^= *((edi + 4));
    eax = ecx;
    *((esi + 7)) = cl;
    eax >>= 0x18;
    *((esi + 4)) = al;
    eax = ecx;
    eax >>= 0x10;
    *((esi + 5)) = al;
    eax = ecx;
    eax >>= 8;
    *((esi + 6)) = al;
    eax = *((ebp - 4));
    eax >>= 0x10;
    eax &= 0xff;
    ecx = *((eax*4 + str.ccccwwww));
    eax = edx;
    eax >>= 8;
    ecx &= 0xff0000;
    eax &= 0xff;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff00;
    ecx ^= eax;
    eax = *((ebp + 8));
    eax >>= 0x18;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff000000;
    ecx ^= eax;
    eax = (int32_t) bl;
    eax = *((eax*4 + str.ccccwwww));
    ecx ^= eax;
    ebx >>= 8;
    ecx ^= *((edi + 8));
    ebx &= 0xff;
    eax = ecx;
    edx >>= 0x10;
    eax >>= 0x18;
    edx &= 0xff;
    *((esi + 8)) = al;
    eax = ecx;
    eax >>= 0x10;
    *((esi + 9)) = al;
    eax = ecx;
    eax >>= 8;
    *((esi + 0xa)) = al;
    eax = *((ebx*4 + str.ccccwwww));
    eax &= 0xff00;
    *((esi + 0xb)) = cl;
    ecx = *((edx*4 + str.ccccwwww));
    ecx &= 0xff0000;
    ecx ^= eax;
    eax = *((ebp - 4));
    eax >>= 0x18;
    eax = *((eax*4 + str.ccccwwww));
    eax &= 0xff000000;
    ecx ^= eax;
    eax = *((ebp + 8));
    eax = (int32_t) al;
    eax = *((eax*4 + str.ccccwwww));
    ecx ^= eax;
    ecx ^= *((edi + 0xc));
    eax = ecx;
    *((esi + 0xf)) = cl;
    eax >>= 0x18;
    *((esi + 0xc)) = al;
    eax = ecx;
    eax >>= 0x10;
    *((esi + 0xd)) = al;
    eax = ecx;
    eax >>= 8;
    *((esi + 0xe)) = al;
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x405c40 */
#include <stdint.h>
 
void fcn_00405c40 (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_ch_2, int32_t arg_ch_3, int32_t arg_ch_4) {
    esi = *((esp + 0x10));
    ecx = *((esp + 0x14));
    edi = *((esp + 0xc));
    eax = ecx;
    edx = ecx;
    eax += esi;
    if (edi > esi) {
        if (edi < eax) {
            goto label_2;
        }
    }
    if (((0x419eec >> 1) & 1) >= 0) {
        goto label_3;
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    goto label_4;
label_3:
    if (ecx < 0x80) {
        goto label_5;
    }
    eax = edi;
    eax ^= esi;
    if ((eax & 0xf) == 0) {
        if (((0x418e00 >> 1) & 1) < 0) {
            goto label_6;
        }
    }
    if (((0x419eec >> 0) & 1) >= 0) {
        goto label_5;
    }
    if ((edi & 3) != 0) {
        goto label_7;
    }
    if ((esi & 3) != 0) {
        goto label_8;
    }
    if (((edi >> 2) & 1) < 0) {
        eax = *(esi);
        ecx -= 4;
        esi = esi + 4;
        *(edi) = eax;
        edi = edi + 4;
    }
    if (((edi >> 3) & 1) < 0) {
        xmm1 = *(esi);
        ecx -= 8;
        esi = esi + 8;
        *(edi) = xmm1;
        edi = edi + 8;
    }
    if ((esi & 7) == 0) {
        goto label_9;
    }
    if (((esi >> 3) & 1) >= 0) {
        goto label_10;
    }
    __asm ("movdqa xmm1, xmmword [esi - 0xc]");
    esi = esi - 0xc;
    do {
        __asm ("movdqa xmm3, xmmword [esi + 0x10]");
        ecx -= 0x30;
        __asm ("movdqa xmm0, xmmword [esi + 0x20]");
        __asm ("movdqa xmm5, xmmword [esi + 0x30]");
        esi = esi + 0x30;
        __asm ("movdqa xmm2, xmm3");
        __asm ("palignr xmm3, xmm1, 0xc");
        __asm ("movdqa xmmword [edi], xmm3");
        __asm ("movdqa xmm4, xmm0");
        __asm ("palignr xmm0, xmm2, 0xc");
        __asm ("movdqa xmmword [edi + 0x10], xmm0");
        __asm ("movdqa xmm1, xmm5");
        __asm ("palignr xmm5, xmm4, 0xc");
        __asm ("movdqa xmmword [edi + 0x20], xmm5");
        edi = edi + 0x30;
    } while (ecx >= 0x30);
    esi = esi + 0xc;
    goto label_11;
label_9:
    __asm ("movdqa xmm1, xmmword [esi - 8]");
    esi = esi - 8;
    do {
        __asm ("movdqa xmm3, xmmword [esi + 0x10]");
        ecx -= 0x30;
        __asm ("movdqa xmm0, xmmword [esi + 0x20]");
        __asm ("movdqa xmm5, xmmword [esi + 0x30]");
        esi = esi + 0x30;
        __asm ("movdqa xmm2, xmm3");
        __asm ("palignr xmm3, xmm1, 8");
        __asm ("movdqa xmmword [edi], xmm3");
        __asm ("movdqa xmm4, xmm0");
        __asm ("palignr xmm0, xmm2, 8");
        __asm ("movdqa xmmword [edi + 0x10], xmm0");
        __asm ("movdqa xmm1, xmm5");
        __asm ("palignr xmm5, xmm4, 8");
        __asm ("movdqa xmmword [edi + 0x20], xmm5");
        edi = edi + 0x30;
    } while (ecx >= 0x30);
    esi = esi + 8;
    goto label_11;
label_10:
    __asm ("movdqa xmm1, xmmword [esi - 4]");
    esi = esi - 4;
    do {
        __asm ("movdqa xmm3, xmmword [esi + 0x10]");
        ecx -= 0x30;
        __asm ("movdqa xmm0, xmmword [esi + 0x20]");
        __asm ("movdqa xmm5, xmmword [esi + 0x30]");
        esi = esi + 0x30;
        __asm ("movdqa xmm2, xmm3");
        __asm ("palignr xmm3, xmm1, 4");
        __asm ("movdqa xmmword [edi], xmm3");
        __asm ("movdqa xmm4, xmm0");
        __asm ("palignr xmm0, xmm2, 4");
        __asm ("movdqa xmmword [edi + 0x10], xmm0");
        __asm ("movdqa xmm1, xmm5");
        __asm ("palignr xmm5, xmm4, 4");
        __asm ("movdqa xmmword [edi + 0x20], xmm5");
        edi = edi + 0x30;
    } while (ecx >= 0x30);
    esi = esi + 4;
    do {
label_11:
        if (ecx < 0x10) {
            goto label_12;
        }
        __asm ("movdqu xmm1, xmmword [esi]");
        ecx -= 0x10;
        esi = esi + 0x10;
        __asm ("movdqa xmmword [edi], xmm1");
        edi = edi + 0x10;
    } while (1);
label_12:
    if (((ecx >> 2) & 1) < 0) {
        eax = *(esi);
        ecx -= 4;
        esi = esi + 4;
        *(edi) = eax;
        edi = edi + 4;
    }
    if (((ecx >> 3) & 1) < 0) {
        xmm1 = *(esi);
        ecx -= 8;
        esi = esi + 8;
        *(edi) = xmm1;
        edi = edi + 8;
    }
    eax = *((ecx*4 + 0x405f78));
    /* switch table (4 cases) at 0x405f78 */
    void (*eax)() ();
label_5:
    if ((edi & 3) == 0) {
label_8:
        ecx >>= 2;
        edx &= 3;
        if (ecx < 8) {
            goto label_13;
        }
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        /* switch table (4 cases) at 0x405f78 */
    }
label_7:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x405f0c */
label_13:
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
label_4:
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
label_2:
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
            /* switch table (4 cases) at 0x406114 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x4060c4 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x406114 */
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
label_6:
    eax = esi;
    eax &= 0xf;
    if (eax != 0) {
        goto label_14;
    }
label_1:
    edx = ecx;
    ecx &= 0x7f;
    edx >>= 7;
    if (edx == 0) {
        goto label_15;
    }
label_0:
    __asm ("movdqa xmm0, xmmword [esi]");
    do {
        __asm ("movdqa xmm1, xmmword [esi + 0x10]");
    } while (ecx != 0);
    __asm ("movdqa xmm2, xmmword [esi + 0x20]");
    __asm ("movdqa xmm3, xmmword [esi + 0x30]");
    __asm ("movdqa xmmword [edi], xmm0");
    __asm ("movdqa xmmword [edi + 0x10], xmm1");
    __asm ("movdqa xmmword [edi + 0x20], xmm2");
    __asm ("movdqa xmmword [edi + 0x30], xmm3");
    __asm ("movdqa xmm4, xmmword [esi + 0x40]");
    __asm ("movdqa xmm5, xmmword [esi + 0x50]");
    __asm ("movdqa xmm6, xmmword [esi + 0x60]");
    __asm ("movdqa xmm7, xmmword [esi + 0x70]");
    __asm ("movdqa xmmword [edi + 0x40], xmm4");
    __asm ("movdqa xmmword [edi + 0x50], xmm5");
    __asm ("movdqa xmmword [edi + 0x60], xmm6");
    __asm ("movdqa xmmword [edi + 0x70], xmm7");
    esi = esi + 0x80;
    edi = edi + 0x80;
    edx--;
    if (edx != 0) {
        goto label_0;
    }
label_15:
    if (ecx == 0) {
        goto label_16;
    }
    edx = ecx;
    edx >>= 4;
    if (edx == 0) {
        goto label_17;
    }
    do {
        __asm ("movdqa xmm0, xmmword [esi]");
        __asm ("movdqa xmmword [edi], xmm0");
        esi = esi + 0x10;
        edi = edi + 0x10;
        edx--;
    } while (edx != 0);
label_17:
    ecx &= 0xf;
    if (ecx == 0) {
        goto label_16;
    }
    eax = ecx;
    ecx >>= 2;
    if (ecx == 0) {
        goto label_18;
    }
    do {
        edx = *(esi);
        *(edi) = edx;
        esi = esi + 4;
        edi = edi + 4;
        ecx--;
    } while (ecx != 0);
label_18:
    ecx = eax;
    ecx &= 3;
    if (ecx == 0) {
        goto label_16;
    }
    do {
        al = *(esi);
        *(edi) = al;
        esi++;
        edi++;
        ecx--;
    } while (ecx != 0);
label_16:
    return;
label_14:
    edx = 0x10;
    edx -= eax;
    ecx -= edx;
    eax = edx;
    ecx = edx;
    ecx &= 3;
    if (ecx == 0) {
        goto label_19;
    }
    do {
        dl = *(esi);
        *(edi) = dl;
        esi++;
        edi++;
        ecx--;
    } while (ecx != 0);
label_19:
    eax >>= 2;
    if (eax == 0) {
        goto label_20;
    }
    do {
        edx = *(esi);
        *(edi) = edx;
        esi = esi + 4;
        edi = edi + 4;
        eax--;
    } while (eax != 0);
label_20:
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402cc0 */
#include <stdint.h>
 
int32_t fcn_00402cc0 (int32_t arg_4h) {
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
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4041f0 */
#include <stdint.h>
 
int32_t fcn_004041f0 (void) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x4176a0);
    ebx = 0;
    esi = ebx;
    *((ebp - 0x1c)) = esi;
    fcn_00409180 (1);
    *((ebp - 4)) = ebx;
    edi = ebx;
    do {
        *((ebp - 0x20)) = edi;
        if (edi >= *(0x41b004)) {
            goto label_0;
        }
        eax = *(0x41b000);
        eax = *((eax + edi*4));
        if (eax == 0) {
            goto label_1;
        }
        if ((*((eax + 0xc)) & 0x83) == 0) {
            if ((*((eax + 0xc)) & 0x8000) != 0) {
                goto label_2;
            }
            eax = edi - 3;
            if (eax <= 0x10) {
                eax = fcn_00409208 (edi + 0x10);
                if (eax == 0) {
                    goto label_0;
                }
            }
            eax = *(0x41b000);
            fcn_00404159 (edi, *((eax + edi*4)));
            eax = *(0x41b000);
            eax = *((eax + edi*4));
            if ((*((eax + 0xc)) & 0x83) == 0) {
                goto label_3;
            }
            eax = fcn_004041c3 (edi, eax);
        }
label_2:
        edi++;
    } while (1);
label_3:
    esi = eax;
    *((ebp - 0x1c)) = esi;
    goto label_0;
label_1:
    eax = fcn_00408fa3 (0x38);
    ecx = eax;
    eax = *(0x41b000);
    *((eax + edi*4)) = ecx;
    if (ecx != 0) {
        eax = *(0x41b000);
        eax = *((eax + edi*4));
        eax += 0x20;
        fcn_00407e10 (eax, 0xfa0, ebx);
        eax = *(0x41b000);
        eax = *((eax + edi*4));
        eax += 0x20;
        EnterCriticalSection (eax);
        eax = *(0x41b000);
        esi = *((eax + edi*4));
        *((ebp - 0x1c)) = esi;
        *((esi + 0xc)) = ebx;
    }
label_0:
    if (esi != 0) {
        *((esi + 0xc)) &= 0x8000;
        *((esi + 4)) = ebx;
        *((esi + 8)) = ebx;
        *(esi) = ebx;
        *((esi + 0x1c)) = ebx;
        *((esi + 0x10)) |= 0xffffffff;
    }
    *((ebp - 4)) = 0xfffffffe;
    fcn_00404306 ();
    eax = esi;
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404790 */
#include <stdint.h>
 
int32_t fcn_00404790 (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_8h;
    edx = *((esp + 0x10));
    eax = *((esp + 0x14));
    ecx = *((esp + 0x18));
    eax = *(0x4183f0);
    eax ^= esp;
    *((esp + 8)) = eax;
    *(fs:0) = esp;
    do {
label_0:
        eax = *((esp + 0x30));
        ebx = *((eax + 8));
        ecx = *((esp + 0x2c));
        ebx ^= *(ecx);
        esi = *((eax + 0xc));
        if (esi == 0xfffffffe) {
            goto label_1;
        }
        edx = *((esp + 0x34));
        if (edx != 0xfffffffe) {
            if (esi <= edx) {
                goto label_1;
            }
        }
        esi *= 3;
        ebx = ebx + esi*4 + 0x10;
        ecx = *(ebx);
        *((eax + 0xc)) = ecx;
    } while (*((ebx + 4)) != 0);
    eax = *((ebx + 8));
    fcn_004099a5 (0x101);
    ecx = 1;
    eax = *((ebx + 8));
    fcn_004099c4 ();
    goto label_0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40430f */
#include <stdint.h>
 
int32_t fcn_0040430f (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_8h;
    uint32_t var_4h;
    edx = 0;
    *((ebp - 4)) &= edx;
    eax = 0;
    esi = *((ebp + 0xc));
    edi = *(0x419bc0);
    *((ebp - 8)) = eax;
    while (*(esi) == 0x20) {
        esi++;
    }
    al = *(esi);
    if (al == 0x61) {
        goto label_3;
    }
    if (al == 0x72) {
        goto label_4;
    }
    while (eax != 0) {
label_0:
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
label_2:
        eax = 0;
        goto label_5;
        ebx = 0x301;
        goto label_6;
label_4:
        ebx = 0;
        edi |= 1;
        goto label_7;
label_3:
        ebx = 0x109;
label_6:
        edi |= 2;
label_7:
        ecx = 0;
        ecx++;
        esi++;
        al = *(esi);
        if (al == 0) {
            goto label_8;
        }
        *((ebp + 0xc)) = 0x1000;
label_1:
        if (ecx == 0) {
            goto label_9;
        }
        eax = (int32_t) al;
        if (eax > 0x53) {
            goto label_10;
        }
        if (eax == 0x53) {
            goto label_11;
        }
        eax -= 0x20;
        if (eax == 0) {
            goto label_12;
        }
        eax -= 0xb;
        if (eax == 0) {
            goto label_13;
        }
        eax--;
        if (eax == 0) {
            goto label_14;
        }
        eax -= 0x18;
        if (eax == 0) {
            goto label_15;
        }
        eax -= 0xa;
        if (eax == 0) {
            goto label_16;
        }
        eax -= 4;
    }
    if (*((ebp - 4)) != eax) {
        goto label_17;
    }
    *((ebp - 4)) = 1;
    ebx |= 0x10;
    goto label_12;
label_16:
    ebx |= 0x80;
    goto label_12;
label_15:
    if ((bl & 0x40) != 0) {
        goto label_17;
    }
    ebx |= 0x40;
    goto label_12;
label_14:
    *((ebp - 8)) = 1;
    goto label_17;
label_13:
    if ((bl & 2) != 0) {
        goto label_17;
    }
    ebx &= 0xfffffffe;
    edi &= 0xfffffffc;
    ebx |= 2;
    edi |= 0x80;
    goto label_12;
label_11:
    if (*((ebp - 4)) != 0) {
        goto label_17;
    }
    *((ebp - 4)) = 1;
    ebx |= 0x20;
    goto label_12;
label_10:
    eax -= 0x54;
    if (eax == 0) {
        goto label_18;
    }
    eax -= 0xe;
    if (eax == 0) {
        goto label_19;
    }
    eax--;
    if (eax == 0) {
        goto label_20;
    }
    eax -= 0xb;
    if (eax == 0) {
        goto label_21;
    }
    eax -= 6;
    if (eax != 0) {
        goto label_0;
    }
    if ((ebx & 0xc000) == 0) {
        ebx |= 0x4000;
        goto label_12;
label_21:
        if (edx != 0) {
            goto label_17;
        }
        edx++;
        edi &= 0xffffbfff;
        goto label_12;
label_20:
        if (edx != 0) {
            goto label_17;
        }
        edx++;
        edi |= 0x4000;
        goto label_12;
label_19:
        if ((ebx & 0xc000) != 0) {
            goto label_17;
        }
        ebx |= 0x8000;
        goto label_12;
label_18:
        eax = *((ebp + 0xc));
        if ((eax & ebx) == 0) {
            goto label_22;
        }
    }
label_17:
    ecx = 0;
    goto label_12;
label_22:
    ebx |= eax;
label_12:
    esi++;
    al = *(esi);
    if (al != 0) {
        goto label_1;
    }
label_9:
    eax = *((ebp - 8));
    if (eax == 0) {
        goto label_8;
    }
    while (*(esi) == 0x20) {
        esi++;
    }
    eax = fcn_00409434 (0x411150, esi, 3);
    if (eax != 0) {
        goto label_0;
    }
    esi += 3;
    eax = 0x20;
    while (*(esi) == al) {
        esi++;
    }
    if (*(esi) != 0x3d) {
        goto label_0;
    }
    do {
        esi++;
    } while (*(esi) == al);
    eax = fcn_00409563 (esi, "UTF-8", 5);
    if (eax == 0) {
        esi += 5;
        ebx |= 0x40000;
        goto label_8;
    }
    eax = fcn_00409563 (esi, "UTF-16LE", 8);
    if (eax == 0) {
        esi += 8;
        ebx |= 0x20000;
        goto label_8;
    }
    eax = fcn_00409563 (esi, "UNICODE", 7);
    if (eax != 0) {
        goto label_0;
    }
    esi += 7;
    ebx |= 0x10000;
    while (*(esi) == 0x20) {
        esi++;
label_8:
    }
    if (*(esi) != 0) {
        goto label_0;
    }
    eax = ebp + 0xc;
    eax = fcn_00409416 (eax, *((ebp + 8)), ebx, *((ebp + 0x10)), 0x180);
    if (eax != 0) {
        goto label_2;
    }
    eax = *((ebp + 0x14));
    *(0x4191cc)++;
    ecx = 0;
    *((eax + 4)) = ecx;
    *(eax) = ecx;
    *((eax + 8)) = ecx;
    *((eax + 0x1c)) = ecx;
    ecx = *((ebp + 0xc));
    *((eax + 0xc)) = edi;
    *((eax + 0x10)) = ecx;
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401e71 */
#include <stdint.h>
 
void fcn_00401e71 (void) {
    fcn_00404189 (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404af1 */
#include <stdint.h>
 
int32_t fcn_00404af1 (int32_t arg_8h) {
    esi = *((ebp + 8));
    ebx = 0;
    eax = *((esi + 0xc));
    al &= 3;
    if (al == 2) {
        if ((*((esi + 0xc)) & 0x108) == 0) {
            goto label_0;
        }
        edi = *(esi);
        edi -= *((esi + 8));
        if (edi > 0) {
            eax = fcn_004048e2 (esi);
            eax = fcn_00406284 (eax);
            if (eax == edi) {
                eax = *((esi + 0xc));
                if (al >= 0) {
                    goto label_1;
                }
                eax &= 0xfffffffd;
                *((esi + 0xc)) = eax;
            } else {
                *((esi + 0xc)) |= 0x20;
                ebx |= 0xffffffff;
            }
        }
label_1:
    }
label_0:
    ecx = *((esi + 8));
    eax = ebx;
    *((esi + 4)) = 0;
    *(esi) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404a7b */
#include <stdint.h>
 
uint32_t fcn_00404a7b (int32_t arg_8h) {
    esi = *((ebp + 8));
    if ((*((esi + 0xc)) & 0x83) != 0) {
        if ((*((esi + 0xc)) & 8) == 0) {
            goto label_0;
        }
        eax = fcn_0040295d (*((esi + 8)));
        *((esi + 0xc)) &= 0xfffffbf7;
        eax = 0;
        *(esi) = eax;
        *((esi + 8)) = eax;
        *((esi + 4)) = eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4048e2 */
#include <stdint.h>
 
int32_t fcn_004048e2 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
        return eax;
    }
    eax = *((eax + 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404906 */
#include <stdint.h>
 
int32_t fcn_00404906 (int32_t arg_8h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x4176c0);
    ebx = 0;
    *((ebp - 0x1c)) = ebx;
    esi = *((ebp + 8));
    if (esi == 0xfffffffe) {
        fcn_00403ff2 ();
        *(eax) = ebx;
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (esi >= 0) {
            if (esi >= *(0x419ff8)) {
                goto label_0;
            }
            ebx = esi;
            ebx >>= 5;
            edi = esi;
            edi &= 0x1f;
            edi <<= 6;
            eax = *((ebx*4 + 0x4191d0));
            eax = *((eax + edi + 4));
            eax &= 1;
            if (eax == 0) {
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                goto label_1;
            }
            fcn_004099c7 (esi);
            *((ebp - 4)) = 0;
            eax = *((ebx*4 + 0x4191d0));
            if ((*((eax + edi + 4)) & 1) != 0) {
                eax = fcn_004049e1 (esi);
                edi = eax;
            } else {
                fcn_00404026 ();
                *(eax) = 9;
                edi |= 0xffffffff;
            }
            *((ebp - 0x1c)) = edi;
            *((ebp - 4)) = 0xfffffffe;
            fcn_004049b9 ();
            eax = edi;
            goto label_2;
        }
label_0:
        fcn_00403ff2 ();
        *(eax) = ebx;
label_1:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00402c77 ();
    }
    eax |= 0xffffffff;
label_2:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402083 */
#include <stdint.h>
 
int32_t fcn_00402083 (int32_t arg_8h) {
    int32_t var_1028h;
    int32_t var_1024h;
    int32_t var_1020h;
    LPDWORD lpNumberOfBytesRead;
    int32_t var_1018h;
    int32_t var_1014h;
    int32_t var_1010h;
    int32_t var_100ch;
    int32_t var_1005h;
    LPVOID lpBuffer;
    int32_t var_4h;
    eax = 0x1028;
    fcn_00404f60 (ebp);
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    edi = *((ebp + 8));
    *((ebp - 0x1014)) = edi;
    if (edi == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
        goto label_0;
    }
    eax = fcn_004048e2 (edi);
    ebx = 0;
    esi = eax;
    *((ebp - 0x1018)) = esi;
    if (*((edi + 4)) < ebx) {
        *((edi + 4)) = ebx;
    }
    eax = fcn_00404c42 (esi, ebx, 1);
    *((ebp - 0x100c)) = eax;
    if (eax < 0) {
        goto label_1;
    }
    eax = esi;
    ecx = esi;
    eax >>= 5;
    ecx &= 0x1f;
    ecx <<= 6;
    *((ebp - 0x1010)) = eax;
    *((ebp - 0x1020)) = ecx;
    edx = *((eax*4 + 0x4191d0));
    eax = *((edi + 0xc));
    *((ebp - 0x1024)) = eax;
    dl = *((ecx + edx + 0x24));
    dl += dl;
    dl >>= 1;
    eax = *((ebp - 0x100c));
    *((ebp - 0x1005)) = dl;
    if ((eax & 0x108) == 0) {
        eax -= *((edi + 4));
        goto label_2;
    }
    esi = *(edi);
    edi = *((edi + 8));
    *((ebp - 0x101c)) = edi;
    edi = esi;
    edi -= *((ebp - 0x101c));
    *((ebp - 0x1028)) = edi;
    if ((*((ebp - 0x1024)) & 3) == 0) {
        goto label_3;
    }
    if (dl != 1) {
        goto label_4;
    }
    edi = *((ebp - 0x1010));
    eax = *((edi*4 + 0x4191d0));
    edi = *((ebp - 0x1028));
    if (*((ecx + eax + 0x30)) == ebx) {
        goto label_4;
    }
    eax = *((ebp - 0x1014));
    edi >>= 1;
    if (*((eax + 4)) == ebx) {
        eax = *((ebp - 0x100c));
        goto label_2;
    }
    edx = *((ebp - 0x1010));
    eax = *((edx*4 + 0x4191d0));
    eax = fcn_00404dd8 (*((ebp - 0x1018)), *((ecx + eax + 0x28)), *((ecx + eax + 0x2c)), ebx);
    ecx = *((ebp - 0x1020));
    esi = eax;
    eax = *((ebp - 0x1010));
    eax = *((eax*4 + 0x4191d0));
    if (esi != *((ecx + eax + 0x28))) {
        goto label_1;
    }
    if (edx != *((ecx + eax + 0x2c))) {
        goto label_1;
    }
    eax = ReadFile (*((ecx + eax)), ebp - 0x1004, 0x1000, ebp - 0x101c, ebx);
    if (eax == 0) {
        goto label_1;
    }
    ecx = *((ebp - 0x100c));
    eax = fcn_00404c42 (*((ebp - 0x1018)), ecx, ebx);
    if (eax < 0) {
        goto label_1;
    }
    eax = *((ebp - 0x101c));
    if (edi > eax) {
        goto label_1;
    }
    ecx = ebp - 0x1004;
    if (edi == 0) {
        goto label_5;
    }
    edx = ecx;
    edx += eax;
    do {
        edi--;
        if (ecx >= edx) {
            goto label_5;
        }
        al = *(ecx);
        if (al == 0xd) {
            eax = edx - 1;
            if (ecx >= eax) {
                goto label_6;
            }
            eax = ecx + 1;
            if (*(eax) != 0xa) {
                goto label_6;
            }
            ecx = eax;
        } else {
            eax = (int32_t) al;
            eax = *((eax + 0x418400));
            ecx += eax;
        }
label_6:
        ecx++;
    } while (edi != 0);
label_5:
    eax = ebp - 0x1004;
    esi -= eax;
    eax = ecx + esi;
    goto label_2;
label_4:
    edi = *((ebp - 0x1010));
    eax = *((edi*4 + 0x4191d0));
    edi = *((ebp - 0x1028));
    eax = *((ebp - 0x100c));
    if ((*((ecx + eax + 4)) & 0x80) == 0) {
        goto label_7;
    }
    edx = *((ebp - 0x101c));
    while (edx < esi) {
        if (*(edx) == 0xa) {
            edi++;
        }
        edx++;
    }
    dl = *((ebp - 0x1005));
    do {
label_7:
        if (eax != 0) {
            goto label_8;
        }
        eax = edi;
        goto label_2;
label_3:
    } while ((*((ebp - 0x1024)) & 0x80) != 0);
    fcn_00404026 ();
    *(eax) = 0x16;
    goto label_1;
label_8:
    if ((*((ebp - 0x1024)) & 1) == 0) {
        goto label_9;
    }
    eax = *((ebp - 0x1014));
    if (*((eax + 4)) == ebx) {
        eax = *((ebp - 0x100c));
        edi = ebx;
        goto label_9;
    }
    ebx = *((ebp - 0x1010));
    esi -= *((eax + 8));
    esi += *((eax + 4));
    eax = *((ebx*4 + 0x4191d0));
    ebx = 0;
    if ((*((ecx + eax + 4)) & 0x80) == 0) {
        goto label_10;
    }
    eax = fcn_00404c42 (*((ebp - 0x1018)), ebx, 2);
    ecx = *((ebp - 0x100c));
    if (eax != ecx) {
        goto label_11;
    }
    edx = *((ebp - 0x1014));
    eax = *((edx + 8));
    eax += esi;
    ecx = eax;
    ecx -= *((edx + 8));
    eax -= eax;
    eax = ~eax;
    eax &= ecx;
    *((ebp - 0x1020)) = eax;
    if (eax <= 0) {
        goto label_12;
    }
    eax = *((edx + 8));
    ecx = *((ebp - 0x1020));
    do {
        if (*(eax) == 0xa) {
            esi++;
        }
        eax++;
        ebx++;
    } while (ebx < ecx);
label_12:
    goto label_13;
label_11:
    eax = fcn_00404c42 (*((ebp - 0x1018)), ecx, ebx);
    if (eax < 0) {
label_1:
        eax |= 0xffffffff;
    } else {
        eax = *((ebp - 0x1014));
        ecx = 0x200;
        if (esi <= ecx) {
            if ((*((eax + 0xc)) & 8) == 0) {
                goto label_14;
            }
            esi = ecx;
            if ((*((eax + 0xc)) & 0x400) == 0) {
                goto label_15;
            }
        }
label_14:
        esi = *((eax + 0x18));
label_15:
        eax = *((ebp - 0x1010));
        ecx = *((ebp - 0x1020));
        eax = *((eax*4 + 0x4191d0));
        if ((*((ecx + eax + 4)) & 4) != 0) {
label_13:
            esi++;
        }
        dl = *((ebp - 0x1005));
        if (dl == 1) {
            esi >>= 1;
        }
label_10:
        eax = *((ebp - 0x100c));
        eax -= esi;
label_9:
        if (dl == 1) {
            edi >>= 1;
        }
        eax += edi;
    }
label_2:
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404c42 */
#include <stdint.h>
 
int32_t fcn_00404c42 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417708);
    ebx = 0;
    *((ebp - 0x1c)) = ebx;
    esi = *((ebp + 8));
    if (esi == 0xfffffffe) {
        fcn_00403ff2 ();
        *(eax) = ebx;
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (esi >= 0) {
            if (esi >= *(0x419ff8)) {
                goto label_0;
            }
            ebx = esi;
            ebx >>= 5;
            edi = esi;
            edi &= 0x1f;
            edi <<= 6;
            eax = *((ebx*4 + 0x4191d0));
            eax = *((eax + edi + 4));
            eax &= 1;
            if (eax == 0) {
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                goto label_1;
            }
            fcn_004099c7 (esi);
            *((ebp - 4)) = 0;
            eax = *((ebx*4 + 0x4191d0));
            if ((*((eax + edi + 4)) & 1) != 0) {
                eax = fcn_00404d31 (esi, *((ebp + 0xc)), *((ebp + 0x10)));
                edi = eax;
            } else {
                fcn_00404026 ();
                *(eax) = 9;
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                edi |= 0xffffffff;
            }
            *((ebp - 0x1c)) = edi;
            *((ebp - 4)) = 0xfffffffe;
            fcn_00404d09 ();
            eax = edi;
            goto label_2;
        }
label_0:
        fcn_00403ff2 ();
        *(eax) = ebx;
label_1:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00402c77 ();
    }
    eax |= 0xffffffff;
label_2:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x401f71 */
#include <stdint.h>
 
int32_t fcn_00401f71 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 8));
    eax = *((esi + 0xc));
    if ((al & 0x83) == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax |= 0xffffffff;
    } else {
        ebx = *((ebp + 0x10));
        eax &= 0xffffffef;
        *((esi + 0xc)) = eax;
        if (ebx == 1) {
            eax = fcn_00402083 (esi);
            edi = *((ebp + 0xc));
            edi += eax;
            ebx = 0;
        } else {
            edi = *((ebp + 0xc));
        }
        fcn_00404af1 (esi);
        eax = *((esi + 0xc));
        if (al < 0) {
            eax &= 0xfffffffc;
            *((esi + 0xc)) = eax;
        } else {
            if ((al & 1) == 0) {
                goto label_0;
            }
            if ((al & 8) == 0) {
                goto label_0;
            }
            if ((eax & 0x400) != 0) {
                goto label_0;
            }
            *((esi + 0x18)) = 0x200;
        }
label_0:
        eax = fcn_004048e2 (esi);
        eax = fcn_00404c42 (eax);
        ecx = 0;
        cl = (eax != -1) ? 1 : 0;
        eax = ecx - 1;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40207b */
#include <stdint.h>
 
void fcn_0040207b (void) {
    fcn_00404189 (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404f60 */
#include <stdint.h>
 
int32_t fcn_00404f60 (int32_t arg_4h) {
    ecx = esp + 4;
    ecx -= eax;
    eax -= eax;
    eax = ~eax;
    ecx &= eax;
    eax = esp;
    eax &= 0xfffff000;
    do {
        if (ecx >= eax) {
            eax = ecx;
            tmp_0 = eax;
            eax = esp;
            esp = tmp_0;
            eax = *(eax);
            *(esp) = eax;
            return eax;
        }
        eax -= 0x1000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404dd8 */
#include <stdint.h>
 
uint32_t fcn_00404dd8 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417728);
    esi |= 0xffffffff;
    *((ebp - 0x28)) = esi;
    *((ebp - 0x24)) = esi;
    edi = *((ebp + 8));
    if (edi == 0xfffffffe) {
        eax = fcn_00403ff2 ();
        *(eax) = 0;
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (edi >= 0) {
            if (edi >= *(0x419ff8)) {
                goto label_0;
            }
            eax = edi;
            eax >>= 5;
            *((ebp - 0x1c)) = eax;
            ebx = edi;
            ebx &= 0x1f;
            ebx <<= 6;
            eax = *((eax*4 + 0x4191d0));
            eax = *((eax + ebx + 4));
            eax &= 1;
            if (eax == 0) {
                goto label_0;
            }
            fcn_004099c7 (edi);
            *((ebp - 4)) = 0;
            eax = *((ebp - 0x1c));
            eax = *((eax*4 + 0x4191d0));
            if ((*((eax + ebx + 4)) & 1) != 0) {
                eax = fcn_00404ed4 (edi, *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
                esi = eax;
                ebx = edx;
            } else {
                fcn_00404026 ();
                *(eax) = 9;
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                ebx = esi;
            }
            *((ebp - 0x28)) = esi;
            *((ebp - 0x24)) = ebx;
            *((ebp - 4)) = 0xfffffffe;
            fcn_00404eaa ();
            edx = ebx;
            goto label_1;
        }
label_0:
        eax = fcn_00403ff2 ();
        *(eax) = 0;
        fcn_00404026 ();
        *(eax) = 9;
        fcn_00402c77 ();
    }
    edx = esi;
label_1:
    eax = esi;
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404f47 */
#include <stdint.h>
 
void fcn_00404f47 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_324h;
    if (ecx == *(0x4183f0)) {
        return;
    }
    return void (*0x409eb9)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409eb9 */
#include <stdint.h>
 
uint32_t loc_00409eb9 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_324h;
    eax = IsProcessorFeaturePresent (0x17);
    if (eax != 0) {
        ecx = 2;
        eax = syscall_29h (eax, ebx, ecx, edx, esi, edi, edp);
    }
    *(0x419cc8) = eax;
    *(0x419cc4) = ecx;
    *(0x419cc0) = edx;
    *(0x419cbc) = ebx;
    *(0x419cb8) = esi;
    *(0x419cb4) = edi;
    *(0x419ce0) = ss;
    *(0x419cd4) = cs;
    *(0x419cb0) = ds;
    *(0x419cac) = es;
    *(0x419ca8) = fs;
    *(0x419ca4) = gs;
    __asm ("pushfd");
    0x419cd8 = 2;
    eax = *(ebp);
    *(0x419ccc) = eax;
    eax = *((ebp + 4));
    *(0x419cd0) = eax;
    eax = ebp + 8;
    *(0x419cdc) = eax;
    eax = *((ebp - 0x324));
    *(0x419c18) = 0x10001;
    eax = *(0x419cd0);
    *(0x419bd4) = eax;
    *(0x419bc8) = 0xc0000409;
    *(0x419bcc) = 1;
    *(0x419bd8) = 1;
    eax = 4;
    eax *= 0;
    *((eax + 0x419bdc)) = 2;
    eax = 4;
    eax *= 0;
    ecx = *(0x4183f0);
    *((ebp + eax - 8)) = ecx;
    eax = 4;
    eax <<= 0;
    ecx = *(0x4183f4);
    *((ebp + eax - 8)) = ecx;
    fcn_00409e7c (0x41231c);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x410118 */
#include <stdint.h>
 
void IsProcessorFeaturePresent (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409e7c */
#include <stdint.h>
 
uint32_t fcn_00409e7c (int32_t arg_8h) {
    eax = IsDebuggerPresent ();
    *(0x419ee4) = eax;
    fcn_00408152 ();
    fcn_0040813c (*((ebp + 8)));
    if (*(0x419ee4) == 0) {
        fcn_00408152 ();
    }
    fcn_00408127 (0xc0000409);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408152 */
#include <stdint.h>
 
void fcn_00408152 (void) {
    *(0x419f4c) = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40813c */
#include <stdint.h>
 
void fcn_0040813c (struct _EXCEPTION_POINTERS * ExceptionInfo) {
    SetUnhandledExceptionFilter (0);
    UnhandledExceptionFilter (*((ebp + 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408127 */
#include <stdint.h>
 
uint32_t fcn_00408127 (UINT uExitCode) {
    eax = GetCurrentProcess (*((ebp + 8)));
    TerminateProcess (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402477 */
#include <stdint.h>
 
void fcn_00402477 (void) {
    fcn_00404189 (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406284 */
#include <stdint.h>
 
int32_t fcn_00406284 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417788);
    ebx = 0;
    *((ebp - 0x1c)) = ebx;
    esi = *((ebp + 8));
    if (esi == 0xfffffffe) {
        fcn_00403ff2 ();
        *(eax) = ebx;
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (esi >= 0) {
            if (esi >= *(0x419ff8)) {
                goto label_0;
            }
            ebx = esi;
            ebx >>= 5;
            edi = esi;
            edi &= 0x1f;
            edi <<= 6;
            eax = *((ebx*4 + 0x4191d0));
            eax = *((eax + edi + 4));
            eax &= 1;
            if (eax == 0) {
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                goto label_1;
            }
            fcn_004099c7 (esi);
            *((ebp - 4)) = 0;
            eax = *((ebx*4 + 0x4191d0));
            if ((*((eax + edi + 4)) & 1) != 0) {
                eax = fcn_00406373 (esi, *((ebp + 0xc)), *((ebp + 0x10)));
                edi = eax;
            } else {
                fcn_00404026 ();
                *(eax) = 9;
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                edi |= 0xffffffff;
            }
            *((ebp - 0x1c)) = edi;
            *((ebp - 4)) = 0xfffffffe;
            fcn_0040634b ();
            eax = edi;
            goto label_2;
        }
label_0:
        fcn_00403ff2 ();
        *(eax) = ebx;
label_1:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00402c77 ();
    }
    eax |= 0xffffffff;
label_2:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x405ae4 */
#include <stdint.h>
 
uint32_t fcn_00405ae4 (int32_t arg_8h, uint32_t arg_ch) {
    esi = *((ebp + 0xc));
    eax = fcn_004048e2 (esi);
    ecx = *((esi + 0xc));
    edi = eax;
    if ((cl & 0x82) != 0) {
        goto label_0;
    }
    fcn_00404026 ();
    *(eax) = 9;
    do {
        *((esi + 0xc)) |= 0x20;
        eax |= 0xffffffff;
        goto label_1;
label_0:
        if ((cl & 0x40) == 0) {
            goto label_2;
        }
        fcn_00404026 ();
        *(eax) = 0x22;
    } while (1);
label_2:
    ebx = 0;
    if ((cl & 1) != 0) {
        *((esi + 4)) = ebx;
        if ((cl & 0x10) == 0) {
            goto label_3;
        }
        eax = *((esi + 8));
        ecx &= 0xfffffffe;
        *(esi) = eax;
        *((esi + 0xc)) = ecx;
    }
    eax = *((esi + 0xc));
    eax &= 0xffffffef;
    *((esi + 4)) = ebx;
    eax |= 2;
    *((esi + 0xc)) = eax;
    if ((eax & 0x10c) == 0) {
        eax = fcn_00404114 ();
        eax += 0x20;
        if (esi != eax) {
            eax = fcn_00404114 ();
            eax += 0x40;
            if (esi != eax) {
                goto label_4;
            }
        }
        eax = fcn_00409fb4 (edi);
        if (eax != 0) {
            goto label_5;
        }
label_4:
        fcn_0040a008 (esi);
    }
label_5:
    if ((*((esi + 0xc)) & 0x108) != 0) {
        edx = *((esi + 8));
        ecx = *(esi);
        ecx -= edx;
        *((ebp + 0xc)) = ecx;
        eax = edx + 1;
        *(esi) = eax;
        eax = *((esi + 0x18));
        eax--;
        *((esi + 4)) = eax;
        if (ecx > 0) {
            eax = fcn_00406284 (edi, edx, ecx);
            ebx = eax;
            goto label_6;
label_3:
            ecx |= 0x20;
            *((esi + 0xc)) = ecx;
            goto label_7;
        }
        if (edi != -1) {
            if (edi != 0xfffffffe) {
                eax = edi;
                ecx = edi;
                eax >>= 5;
                ecx &= 0x1f;
                ecx <<= 6;
                ecx += *((eax*4 + 0x4191d0));
            }
        } else {
            ecx = 0x418500;
        }
        if ((*((ecx + 4)) & 0x20) != 0) {
            eax = fcn_00404dd8 (edi, ebx, ebx, 2);
            eax &= edx;
            if (eax == -1) {
                goto label_8;
            }
        }
label_6:
        ecx = *((esi + 8));
        al = *((ebp + 8));
        *(ecx) = al;
    } else {
        eax = 0;
        eax++;
        *((ebp + 0xc)) = eax;
        eax = fcn_00406284 (edi, ebp + 8, eax);
        ebx = eax;
    }
    if (ebx != *((ebp + 0xc))) {
label_8:
        *((esi + 0xc)) |= 0x20;
label_7:
        eax |= 0xffffffff;
    } else {
        eax = *((ebp + 8));
        eax = (int32_t) al;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406fbe */
#include <stdint.h>
 
uint32_t fcn_00406fbe (void) {
    eax = fcn_00407be9 (3);
    if (eax != 1) {
        eax = fcn_00407be9 (3);
        if (eax != 0) {
            goto label_0;
        }
        if (*(0x419308) != 1) {
            goto label_0;
        }
    }
    fcn_0040701b (0xfc);
    fcn_0040701b (0xff);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40701b */
#include <stdint.h>
 
int32_t fcn_0040701b (int32_t arg_8h) {
    int32_t var_1fch;
    LPCVOID lpBuffer;
    int32_t var_5h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    esi = *((ebp + 8));
    eax = fcn_00406ff7 (esi);
    edi = eax;
    if (edi == 0) {
        goto label_0;
    }
    eax = fcn_00407be9 (3);
    if (eax != 1) {
        eax = fcn_00407be9 (3);
        if (eax == 0) {
            if (*(0x419308) == 1) {
                goto label_1;
            }
        }
        if (esi == 0xfc) {
            goto label_2;
        }
        eax = fcn_0040a633 (0x419310, 0x314, "Runtime Error!\n\nProgram: ");
        ebx = 0;
        if (eax != 0) {
            goto label_3;
        }
        *(0x41954a) = ax;
        eax = GetModuleFileNameW (ebx, 0x419342, 0x104);
        esi = 0x2fb;
        if (eax == 0) {
            eax = fcn_0040a633 (0x419342, esi, "<program name unknown>");
            if (eax != 0) {
                goto label_3;
            }
        }
        eax = fcn_0040a68f (0x419342);
        eax++;
        if (eax > 0x3c) {
            fcn_0040a68f (0x419342);
            ecx = eax*2 + 0x4192cc;
            eax = ecx;
            eax -= 0x419342;
            eax >>= 1;
            esi -= eax;
            eax = fcn_0040a6a8 (ecx, esi, 0x411b9c, 3);
            if (eax != 0) {
                goto label_3;
            }
        }
        esi = 0x419310;
        eax = fcn_0040a5c7 (esi, 0x314, 0x411ba4);
        if (eax != 0) {
            goto label_3;
        }
        eax = fcn_0040a5c7 (esi, 0x314, edi);
        if (eax != 0) {
            goto label_3;
        }
        fcn_0040a766 (esi, "Microsoft Visual C++ Runtime Library", 0x12010);
        goto label_2;
    }
label_1:
    eax = GetStdHandle (0xfffffffffffffff4);
    esi = eax;
    if (esi == 0) {
        goto label_2;
    }
    if (esi == -1) {
        goto label_2;
    }
    ebx = 0;
    ecx = ebx;
    do {
        al = *((edi + ecx*2));
        *((ebp + ecx - 0x1f8)) = al;
        if (*((edi + ecx*2)) == bx) {
            goto label_4;
        }
        ecx++;
    } while (ecx < 0x1f4);
label_4:
    eax = ebp - 0x1fc;
    *((ebp - 5)) = bl;
    eax = fcn_00402cc0 (ebp - 0x1f8);
    WriteFile (esi, ebp - 0x1f8, eax);
label_2:
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
label_3:
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406cf1 */
#include <stdint.h>
 
void fcn_00406cf1 (UINT uExitCode) {
    fcn_00406cbd (*((ebp + 8)));
    ExitProcess (*((ebp + 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406cbd */
#include <stdint.h>
 
uint32_t fcn_00406cbd (int32_t arg_8h) {
    HMODULE hModule;
    eax = GetModuleHandleExW (0, "mscoree.dll", ebp - 4, ecx);
    if (eax != 0) {
        eax = GetProcAddress (*((ebp - 4)), "CorExitProcess");
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t*) (*((ebp + 8)));
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406bd8 */
#include <stdint.h>
 
uint32_t fcn_00406bd8 (int32_t arg_8h) {
    eax = DecodePointer (*(0x4192d0));
    if (eax != 0) {
        eax = void (*eax)(uint32_t*) (*((ebp + 8)));
        if (eax == 0) {
            goto label_0;
        }
        eax = 0;
        eax++;
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40730e */
#include <stdint.h>
 
int32_t fcn_0040730e (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    esi = *((ebp + 0x14));
    if (esi == 0) {
        eax = 0;
    } else {
        eax = *((ebp + 8));
        if (eax == 0) {
            fcn_00404026 ();
            esi = 0x16;
            *(eax) = esi;
            fcn_00402c77 ();
            eax = esi;
        } else {
            edi = *((ebp + 0x10));
            if (edi != 0) {
                if (*((ebp + 0xc)) >= esi) {
                    eax = fcn_00405c40 (eax, edi, esi);
                    eax = 0;
                }
            } else {
                fcn_00407390 (eax, 0, *((ebp + 0xc)));
                if (edi == 0) {
                    fcn_00404026 ();
                } else {
                    if (*((ebp + 0xc)) >= esi) {
                        goto label_0;
                    }
                    fcn_00404026 ();
                }
                esi = 0x22;
                *(eax) = esi;
                fcn_00402c77 ();
                eax = esi;
                goto label_1;
label_0:
                eax = 0x16;
            }
label_1:
            edi = 0x16;
        }
    }
    esi = 0x16;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40509f */
#include <stdint.h>
 
int32_t fcn_0040509f (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, uint32_t arg_13h) {
    int32_t var_28h;
    int32_t var_24h;
    LPDWORD lpMode;
    LPVOID * lpBuffer;
    uint32_t var_18h;
    LPDWORD * lpNumberOfBytesRead;
    uint32_t var_10h;
    int32_t var_ch;
    LPVOID * var_8h;
    int32_t var_7h;
    LPVOID * var_1h;
    eax = *((ebp + 8));
    esi = *((ebp + 0x10));
    ecx = 0xfffffffffffffffe;
    edi = 0;
    *((ebp - 0x18)) = ecx;
    *((ebp - 0x20)) = edi;
    *((ebp - 0x28)) = esi;
    if (eax == ecx) {
        fcn_00403ff2 ();
        *(eax) = edi;
        fcn_00404026 ();
        *(eax) = 9;
        goto label_10;
    }
    if (eax < 0) {
        goto label_11;
    }
    if (eax >= *(0x419ff8)) {
        goto label_11;
    }
    ecx = eax;
    ebx = eax;
    ecx >>= 5;
    ebx &= 0x1f;
    ebx <<= 6;
    *((ebp - 0xc)) = ecx;
    *((ebp - 0x24)) = ebx;
    edx = *((ecx*4 + 0x4191d0));
    al = *((edx + ebx + 4));
    if ((al & 1) == 0) {
        goto label_11;
    }
    if (esi <= 0x7fffffff) {
        goto label_12;
    }
    fcn_00403ff2 ();
    *(eax) = edi;
    do {
        fcn_00404026 ();
        *(eax) = 0x16;
        goto label_13;
label_12:
        if (esi == 0) {
            goto label_14;
        }
        if ((al & 2) != 0) {
            goto label_14;
        }
        if (*((ebp + 0xc)) != edi) {
            goto label_15;
        }
label_0:
        eax = fcn_00403ff2 ();
        *(eax) &= edi;
    } while (1);
label_15:
    al = *((edx + ebx + 0x24));
    al += al;
    al >>= 1;
    *((ebp + 0x13)) = al;
    eax = (int32_t) al;
    eax--;
    if (eax == 0) {
        goto label_16;
    }
    eax--;
    if (eax != 0) {
        goto label_17;
    }
    eax = esi;
    eax = ~eax;
    if ((al & 1) == 0) {
        goto label_0;
    }
    esi &= 0xfffffffe;
label_17:
    eax = *((ebp + 0xc));
    *((ebp - 0x10)) = eax;
    goto label_18;
label_16:
    eax = esi;
    eax = ~eax;
    if ((al & 1) == 0) {
        goto label_0;
    }
    esi >>= 1;
    if (esi < 4) {
        esi = 4;
    }
    eax = fcn_00408fa3 (esi);
    *((ebp - 0x10)) = eax;
    if (eax == 0) {
        fcn_00404026 ();
        *(eax) = 0xc;
        fcn_00403ff2 ();
        *(eax) = 8;
        goto label_10;
    }
    eax = fcn_00404ed4 (*((ebp + 8)), 0, 0, 1);
    ecx = *((ebp - 0xc));
    ecx = *((ecx*4 + 0x4191d0));
    *((ecx + ebx + 0x28)) = eax;
    eax = *((ebp - 0x10));
    *((ecx + ebx + 0x2c)) = edx;
    ecx = *((ebp - 0xc));
label_18:
    edx = *((ecx*4 + 0x4191d0));
    ecx = *((ebp - 0xc));
    *((ebp - 0x1c)) = eax;
    if ((*((edx + ebx + 4)) & 0x48) != 0) {
        dl = *((edx + ebx + 5));
        if (dl == 0xa) {
            goto label_19;
        }
        if (esi == 0) {
            goto label_19;
        }
        *(eax) = dl;
        edi = 0;
        edx = eax + 1;
        edi++;
        eax = *((ecx*4 + 0x4191d0));
        esi--;
        *((ebp - 0x1c)) = edx;
        *((eax + ebx + 5)) = 0xa;
        if (*((ebp + 0x13)) == 0) {
            goto label_19;
        }
        eax = *((ecx*4 + 0x4191d0));
        al = *((eax + ebx + 0x25));
        if (al == 0xa) {
            goto label_19;
        }
        if (esi == 0) {
            goto label_19;
        }
        *(edx) = al;
        edx++;
        eax = *((ecx*4 + 0x4191d0));
        esi--;
        *((ebp - 0x1c)) = edx;
        edi = 2;
        *((eax + ebx + 0x25)) = 0xa;
        if (*((ebp + 0x13)) != 1) {
            goto label_19;
        }
        eax = *((ecx*4 + 0x4191d0));
        al = *((eax + ebx + 0x26));
        if (al == 0xa) {
            goto label_19;
        }
        if (esi == 0) {
            goto label_19;
        }
        *(edx) = al;
        edx++;
        eax = *((ecx*4 + 0x4191d0));
        esi--;
        edi = 3;
        ecx = 0xa;
        *((ebp - 0x1c)) = edx;
        *((eax + ebx + 0x26)) = cl;
    }
label_19:
    eax = fcn_00409fb4 (*((ebp + 8)));
    eax = *((ebp - 0xc));
    if (eax != 0) {
        ecx = *((eax*4 + 0x4191d0));
        if ((*((ecx + ebx + 4)) & 0x80) == 0) {
            goto label_20;
        }
        eax = GetConsoleMode (*((ecx + ebx)), ebp - 0x20);
        *((ebp - 0x20)) = eax;
        if (eax != 0) {
            if (*((ebp + 0x13)) != 2) {
                goto label_21;
            }
            eax = ebp - 0x14;
            esi >>= 1;
            eax = *((ebp - 0xc));
            eax = *((eax*4 + 0x4191d0));
            eax = ReadConsoleW (*((eax + ebx)), *((ebp - 0x1c)), esi, eax, 0);
            if (eax == 0) {
label_4:
                eax = GetLastError ();
label_8:
                fcn_00404005 (eax);
label_3:
                ebx |= 0xffffffff;
label_9:
                eax = *((ebp - 0x10));
                goto label_22;
            }
            eax = *((ebp - 0x14));
            ecx = eax + eax;
            *((ebp - 0x14)) = ecx;
            goto label_23;
        }
label_21:
        eax = *((ebp - 0xc));
    }
label_20:
    eax = *((eax*4 + 0x4191d0));
    ecx = ebp - 0x14;
    eax = ReadFile (*((eax + ebx)), *((ebp - 0x1c)), esi, ecx, 0);
    if (eax == 0) {
        goto label_24;
    }
    ecx = *((ebp - 0x14));
    if (ecx < 0) {
        goto label_24;
    }
    if (ecx > esi) {
        goto label_24;
    }
label_23:
    edx = *((ebp - 0xc));
    edi += ecx;
    esi = *((edx*4 + 0x4191d0));
    al = *((esi + ebx + 4));
    if (al >= 0) {
        goto label_25;
    }
    if (*((ebp + 0x13)) == 2) {
        goto label_26;
    }
    if (ecx != 0) {
        ecx = *((ebp - 0x10));
        if (*(ecx) == 0xa) {
            al |= 4;
        }
    } else {
        al &= 0xfb;
    }
    *((esi + ebx + 4)) = al;
    eax = *((ebp - 0x10));
    esi = *((ebp - 0x10));
    *((ebp - 0x20)) = eax;
    ecx = eax + edi;
    *((ebp - 0x1c)) = ecx;
    if (eax >= ecx) {
        goto label_27;
    }
    ecx = 0xd;
    edi = eax;
    do {
        al = *(edi);
        if (al == 0x1a) {
            goto label_28;
        }
        if (al != cl) {
            *(esi) = al;
            esi++;
            edi++;
        } else {
            eax = *((ebp - 0x1c));
            eax--;
            if (edi < eax) {
                eax = edi + 1;
                if (*(eax) == 0xa) {
                    eax = 0xa;
                    edi += 2;
                    *(esi) = al;
                    goto label_29;
                }
                *(esi) = cl;
                edi = eax;
                esi++;
            } else {
                eax = ebp - 0x14;
                edi++;
                eax = *((edx*4 + 0x4191d0));
                eax = ReadFile (*((eax + ebx)), ebp - 1, 1, eax, 0);
                if (eax == 0) {
                    eax = GetLastError ();
                    if (eax != 0) {
                        goto label_30;
                    }
                }
                if (*((ebp - 0x14)) == 0) {
                    goto label_30;
                }
                edx = *((ebp - 0xc));
                eax = *((edx*4 + 0x4191d0));
                if ((*((eax + ebx + 4)) & 0x48) != 0) {
                    eax = 0xa;
                    if (*((ebp - 1)) == al) {
                        *(esi) = al;
                        esi++;
                    } else {
                        *(esi) = 0xd;
                    }
                    esi++;
                    ecx = *((edx*4 + 0x4191d0));
                    al = *((ebp - 1));
                    *((ecx + ebx + 5)) = al;
                } else {
                    if (esi != *((ebp - 0x10))) {
                        goto label_31;
                    }
                    eax = 0xa;
                    if (*((ebp - 1)) != al) {
                        goto label_31;
                    }
                    *(esi) = al;
                    esi++;
label_1:
                }
                ecx = 0xd;
            }
        }
label_2:
    } while (edi < *((ebp - 0x1c)));
    goto label_27;
label_31:
    fcn_00404ed4 (*((ebp + 8)), 0xffffffffffffffff, 0xffffffffffffffff, 1);
    edx = *((ebp - 0xc));
    eax = 0xa;
    if (*((ebp - 1)) == al) {
        goto label_1;
    }
    ecx = 0xd;
    *(esi) = cl;
label_29:
    esi++;
    goto label_2;
label_30:
    edx = *((ebp - 0xc));
    ecx = 0xd;
    *(esi) = cl;
    esi++;
    goto label_2;
label_28:
    ecx = *((edx*4 + 0x4191d0));
    al = *((ecx + ebx + 4));
    if ((al & 0x40) == 0) {
        al |= 2;
        *((ecx + ebx + 4)) = al;
    } else {
        al = *(edi);
        *(esi) = al;
        esi++;
    }
label_27:
    eax = *((ebp - 0x10));
    edi = esi;
    edi -= eax;
    if (*((ebp + 0x13)) != 1) {
        goto label_5;
    }
    if (edi == 0) {
        goto label_5;
    }
    esi--;
    al = *(esi);
    if (al >= 0) {
        esi++;
        goto label_32;
    }
    eax = (int32_t) al;
    edx = 0;
    edx++;
    if (*((eax + 0x418400)) != 0) {
        goto label_33;
    }
    ebx = *((ebp - 0x10));
    do {
        if (edx > 4) {
            goto label_34;
        }
        if (esi < ebx) {
            goto label_34;
        }
        esi--;
        edx++;
        eax = *(esi);
    } while (*((eax + 0x418400)) == 0);
label_34:
    ebx = *((ebp - 0x24));
label_33:
    eax = *(esi);
    eax = *((eax + 0x418400));
    if (eax == 0) {
        fcn_00404026 ();
        *(eax) = 0x2a;
        goto label_3;
    }
    eax++;
    if (eax == edx) {
        esi += edx;
    } else {
        eax = *((ebp - 0xc));
        ecx = *((eax*4 + 0x4191d0));
        if ((*((ecx + ebx + 4)) & 0x48) != 0) {
            al = *(esi);
            esi++;
            *((ecx + ebx + 5)) = al;
            eax = *((ebp - 0xc));
            if (edx >= 2) {
                ecx = *((eax*4 + 0x4191d0));
                al = *(esi);
                esi++;
                *((ecx + ebx + 0x25)) = al;
                eax = *((ebp - 0xc));
            }
            if (edx == 3) {
                ecx = *((eax*4 + 0x4191d0));
                al = *(esi);
                esi++;
                *((ecx + ebx + 0x26)) = al;
            }
            esi -= edx;
        } else {
            edx = -edx;
            eax = edx;
            edx:eax = (int64_t) eax;
            fcn_00404ed4 (*((ebp + 8)), eax, edx, 1);
        }
    }
label_32:
    eax = *((ebp - 0x28));
    edi = *((ebp - 0x10));
    esi -= edi;
    eax >>= 1;
    eax = MultiByteToWideChar (0xfde9, 0, edi, esi, *((ebp + 0xc)), eax);
    edi = eax;
    if (edi == 0) {
        goto label_4;
    }
    eax = *((ebp - 0xc));
    ecx = 0;
    cl = (edi != esi) ? 1 : 0;
    edi += edi;
    eax = *((eax*4 + 0x4191d0));
    *((eax + ebx + 0x30)) = ecx;
label_25:
    eax = *((ebp - 0x10));
label_5:
    ebx = *((ebp - 0x18));
label_22:
    if (eax != *((ebp + 0xc))) {
        fcn_0040295d (eax);
    }
    if (ebx != 0xfffffffe) {
        edi = ebx;
    }
    eax = ebx;
    goto label_35;
label_26:
    if (*((ebp - 0x20)) == 0) {
        goto label_36;
    }
    esi = *((ebp - 0x10));
    eax = edi;
    edx:eax = (int64_t) eax;
    edi = esi;
    eax -= edx;
    ecx = esi;
    eax >>= 1;
    edx = edi + eax*2;
    if (edi >= edx) {
        goto label_37;
    }
    *((ebp + 0x10)) = 0x1a;
    edi = 0xd;
    do {
        eax = *(ecx);
        if (ax == *((ebp + 0x10))) {
            goto label_38;
        }
        if (ax != di) {
            *(esi) = ax;
            esi += 2;
            ecx += 2;
        } else {
            eax = edx - 2;
            if (ecx >= eax) {
                goto label_39;
            }
            ecx += 2;
            eax = 0xa;
            if (*(ecx) != ax) {
                eax = 0xd;
                edi = eax;
            }
            *(esi) = ax;
            esi += 2;
        }
label_39:
    } while (ecx < edx);
    goto label_37;
label_38:
    eax = *((ebp - 0xc));
    eax = *((eax*4 + 0x4191d0));
    *((eax + ebx + 4)) |= 2;
label_37:
    eax = *((ebp - 0x10));
    edi = esi;
    edi -= eax;
    edi &= 0xfffffffe;
    goto label_5;
label_36:
    if (ecx != 0) {
        ecx = *((ebp - 0x10));
        edx = 0xa;
        edx = *((ebp - 0xc));
        if (*(ecx) == dx) {
            al |= 4;
        }
    } else {
        al &= 0xfb;
    }
    *((esi + ebx + 4)) = al;
    eax = *((ebp - 0x10));
    esi = *((ebp - 0x10));
    *((ebp - 0x28)) = eax;
    ecx = eax + edi;
    *((ebp - 0x20)) = ecx;
    if (eax >= ecx) {
        goto label_40;
    }
    ecx = 0xd;
    *((ebp + 0x10)) = 0x1a;
    edi = eax;
    do {
        eax = *(edi);
        if (ax == *((ebp + 0x10))) {
            goto label_41;
        }
        if (ax != cx) {
            *(esi) = ax;
        } else {
            eax = *((ebp - 0x20));
            eax += 0xfffffffe;
            if (edi >= eax) {
                goto label_42;
            }
            edx = 0xa;
            edx = *((ebp - 0xc));
            if (*((edi + 2)) == dx) {
                eax = 0xa;
                edi += 4;
                *(esi) = ax;
                goto label_43;
            }
            *(esi) = cx;
        }
        esi += 2;
        edi += 2;
        goto label_7;
label_42:
        eax = ebp - 0x14;
        edi += 2;
        eax = *((edx*4 + 0x4191d0));
        eax = ReadFile (*((eax + ebx)), ebp - 8, 2, eax, 0);
        if (eax == 0) {
            eax = GetLastError ();
            if (eax != 0) {
                goto label_44;
            }
        }
        if (*((ebp - 0x14)) == 0) {
            goto label_44;
        }
        edx = *((ebp - 0xc));
        eax = *((edx*4 + 0x4191d0));
        if ((*((eax + ebx + 4)) & 0x48) == 0) {
            goto label_45;
        }
        eax = 0xa;
        if (*((ebp - 8)) == ax) {
            *(esi) = ax;
            esi += 2;
        } else {
            eax = 0xd;
            *(esi) = ax;
            esi += 2;
            ecx = *((edx*4 + 0x4191d0));
            al = *((ebp - 8));
            *((ecx + ebx + 5)) = al;
            ecx = *((edx*4 + 0x4191d0));
            al = *((ebp - 7));
            *((ecx + ebx + 0x25)) = al;
            eax = *((edx*4 + 0x4191d0));
            ecx = 0xa;
            *((eax + ebx + 0x26)) = cl;
label_6:
        }
        ecx = 0xd;
label_7:
    } while (edi < *((ebp - 0x20)));
    goto label_40;
label_45:
    if (esi == *((ebp - 0x10))) {
        eax = 0xa;
        if (*((ebp - 8)) != ax) {
            goto label_46;
        }
        *(esi) = ax;
        esi += 2;
        goto label_6;
    }
label_46:
    fcn_00404ed4 (*((ebp + 8)), 0xfffffffffffffffe, 0xffffffffffffffff, 1);
    edx = *((ebp - 0xc));
    eax = 0xa;
    if (*((ebp - 8)) == ax) {
        goto label_6;
    }
    ecx = 0xd;
    *(esi) = cx;
label_43:
    esi += 2;
    goto label_7;
label_44:
    edx = *((ebp - 0xc));
    ecx = 0xd;
    *(esi) = cx;
    esi += 2;
    goto label_7;
label_41:
    ecx = *((edx*4 + 0x4191d0));
    al = *((ecx + ebx + 4));
    if ((al & 0x40) == 0) {
        al |= 2;
        *((ecx + ebx + 4)) = al;
    } else {
        ax = *(edi);
        *(esi) = ax;
        esi += 2;
    }
label_40:
    eax = *((ebp - 0x10));
    edi = esi;
    edi -= eax;
    goto label_5;
label_24:
    eax = GetLastError ();
    esi = 5;
    if (eax == esi) {
        fcn_00404026 ();
        *(eax) = 9;
        fcn_00403ff2 ();
        *(eax) = esi;
        goto label_3;
    }
    if (eax != 0x6d) {
        goto label_8;
    }
    ebx = 0;
    goto label_9;
label_14:
    eax = 0;
    goto label_35;
label_11:
    fcn_00403ff2 ();
    *(eax) = edi;
    fcn_00404026 ();
    *(eax) = 9;
label_13:
    eax = fcn_00402c77 ();
label_10:
    eax |= 0xffffffff;
label_35:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4071ed */
#include <stdint.h>
 
int32_t fcn_004071ed (int32_t arg_8h) {
    edi = *((ebp + 8));
    if (edi == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00402c77 ();
    } else {
        eax = *((edi + 0xc));
        if ((al & 0x83) == 0) {
            goto label_0;
        }
        if ((al & 0x40) != 0) {
            goto label_0;
        }
        if ((al & 2) != 0) {
            eax |= 0x20;
            *((edi + 0xc)) = eax;
        } else {
            eax |= 1;
            *((edi + 0xc)) = eax;
            if ((eax & 0x10c) == 0) {
                fcn_0040a008 (edi);
            } else {
                eax = *((edi + 8));
                *(edi) = eax;
            }
            eax = fcn_004048e2 (edi);
            eax = fcn_00404f8b (eax);
            *((edi + 4)) = eax;
            if (eax != 0) {
                if (eax == -1) {
                    goto label_1;
                }
                if ((*((edi + 0xc)) & 0x82) == 0) {
                    eax = fcn_004048e2 (edi);
                    if (eax != -1) {
                        eax = fcn_004048e2 (edi);
                        if (eax != 0xfffffffe) {
                            eax = fcn_004048e2 (edi);
                            esi = eax;
                            esi >>= 5;
                            eax = fcn_004048e2 (edi);
                            eax &= 0x1f;
                            eax <<= 6;
                            eax += *((esi*4 + 0x4191d0));
                        }
                    } else {
                        eax = 0x418500;
                    }
                    al = *((eax + 4));
                    al &= 0x82;
                    if (al != 0x82) {
                        goto label_2;
                    }
                    *((edi + 0xc)) |= 0x2000;
                }
label_2:
                if (*((edi + 0x18)) == 0x200) {
                    if ((*((edi + 0xc)) & 8) == 0) {
                        goto label_3;
                    }
                    if ((*((edi + 0xc)) & 0x400) != 0) {
                        goto label_3;
                    }
                    *((edi + 0x18)) = 0x1000;
                }
label_3:
                ecx = *(edi);
                *((edi + 4))--;
                eax = *(ecx);
                ecx++;
                *(edi) = ecx;
                goto label_4;
            }
label_1:
            eax = -eax;
            eax -= eax;
            eax &= 0x10;
            eax += 0x10;
            *((edi + 0xc)) |= eax;
            *((edi + 4)) = 0;
        }
    }
label_0:
    eax |= 0xffffffff;
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407bdc */
#include <stdint.h>
 
int32_t fcn_00407bdc (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x419308) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4071d8 */
#include <stdint.h>
 
uint32_t fcn_004071d8 (void) {
    eax = GetProcessHeap ();
    ecx = 0;
    *(0x41993c) = eax;
    cl = (eax != 0) ? 1 : 0;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402ae9 */
#include <stdint.h>
 
void fcn_00402ae9 (int32_t arg_8h) {
    if (*(0x419a48) != 2) {
        fcn_00406fbe ();
    }
    fcn_0040701b (*((ebp + 8)));
    fcn_00406cf1 (0xff);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407839 */
#include <stdint.h>
 
uint32_t fcn_00407839 (void) {
    fcn_00406dd9 ();
    eax = fcn_004092b1 ();
    while (eax == -1) {
        eax = fcn_004078af ();
        eax = 0;
        return eax;
        eax = fcn_00407d92 (0x4075ca);
        *(0x418540) = eax;
    }
    eax = fcn_00408f5b (1, 0x3bc);
    esi = eax;
    if (esi != 0) {
        eax = fcn_00407dee (*(0x418540), esi);
        if (eax == 0) {
            goto label_0;
        }
        fcn_00407786 (esi, 0);
        eax = GetCurrentThreadId ();
        *((esi + 4)) |= 0xffffffff;
        *(esi) = eax;
        eax = 0;
        eax++;
        return eax;
    }
label_0:
    eax = fcn_004078af ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407cc5 */
#include <stdint.h>
 
int32_t fcn_00407cc5 (void) {
    esi = 0x4175b0;
    edi = 0x4175b0;
    while (esi < edi) {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi += 4;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x405830 */
#include <stdint.h>
 
uint32_t fcn_00405830 (void) {
    LPSTARTUPINFOW lpStartupInfo;
    uint32_t var_42h;
    int32_t var_40h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    HANDLE var_1ch;
    int32_t var_10h;
    int32_t var_4h;
    fcn_00404590 (0x417768);
    fcn_00409180 (0xb);
    ebx = 0;
    *((ebp - 4)) = ebx;
    edi = 0x20;
    eax = fcn_00408f5b (edi, 0x20);
    ecx = eax;
    *((ebp - 0x24)) = ecx;
    if (ecx == 0) {
        eax = fcn_00404790 (0x4183f0, ebp - 0x10, 0xfffffffffffffffe);
        eax |= 0xffffffff;
        goto label_1;
    }
    *(0x4191d0) = eax;
    *(0x419ff8) = edi;
    do {
        eax += 0x800;
        if (ecx >= eax) {
            goto label_2;
        }
        *((ecx + 4)) = 0xa00;
        *(ecx) |= 0xffffffff;
        *((ecx + 8)) = ebx;
        *((ecx + 0x24)) &= 0x80;
        al = *((ecx + 0x24));
        al &= 0x7f;
        *((ecx + 0x24)) = al;
        *((ecx + 0x25)) = 0xa0a;
        *((ecx + 0x38)) = ebx;
        *((ecx + 0x34)) = bl;
        ecx += 0x40;
        *((ebp - 0x24)) = ecx;
        eax = *(0x4191d0);
    } while (1);
label_2:
    GetStartupInfoW (ebp - 0x74);
    if (*((ebp - 0x42)) == 0) {
        goto label_3;
    }
    eax = *((ebp - 0x40));
    if (eax == 0) {
        goto label_3;
    }
    ecx = *(eax);
    *((ebp - 0x1c)) = ecx;
    eax += 4;
    *((ebp - 0x28)) = eax;
    eax += ecx;
    *((ebp - 0x20)) = eax;
    eax = 0x800;
    if (ecx >= eax) {
        ecx = eax;
        *((ebp - 0x1c)) = ecx;
    }
    esi = 0;
    esi++;
    *((ebp - 0x30)) = esi;
label_0:
    if (*(0x419ff8) < ecx) {
        eax = fcn_00408f5b (edi, 0x40);
        ecx = eax;
        *((ebp - 0x24)) = ecx;
        if (ecx != 0) {
            goto label_4;
        }
        ecx = *(0x419ff8);
        *((ebp - 0x1c)) = ecx;
    }
    edi = ebx;
    *((ebp - 0x2c)) = edi;
    ebx = 0xfffffffffffffffe;
    eax = *((ebp - 0x28));
    edx = *((ebp - 0x20));
    do {
        if (edi >= ecx) {
            goto label_5;
        }
        esi = *(edx);
        if (esi != -1) {
            if (esi == ebx) {
                goto label_6;
            }
            al = *(eax);
            if ((al & 1) == 0) {
                goto label_6;
            }
            if ((al & 8) == 0) {
                eax = GetFileType (esi);
                edx = *((ebp - 0x20));
                if (eax == 0) {
                    goto label_7;
                }
            }
            eax = edi;
            eax >>= 5;
            esi = edi;
            esi &= 0x1f;
            esi <<= 6;
            esi += *((eax*4 + 0x4191d0));
            *((ebp - 0x24)) = esi;
            eax = *(edx);
            *(esi) = eax;
            eax = *((ebp - 0x28));
            al = *(eax);
            *((esi + 4)) = al;
            fcn_00407e10 (esi + 0xc, 0xfa0, 0);
            *((esi + 8))++;
            edx = *((ebp - 0x20));
label_7:
            ecx = *((ebp - 0x1c));
        }
label_6:
        edi++;
        *((ebp - 0x2c)) = edi;
        eax = *((ebp - 0x28));
        eax++;
        *((ebp - 0x28)) = eax;
        edx += 4;
        *((ebp - 0x20)) = edx;
    } while (1);
label_4:
    *((esi*4 + 0x4191d0)) = ecx;
    *(0x419ff8) += edi;
    do {
        eax = *((esi*4 + 0x4191d0));
        eax += 0x800;
        if (ecx >= eax) {
            goto label_8;
        }
        *((ecx + 4)) = 0xa00;
        *(ecx) |= 0xffffffff;
        *((ecx + 8)) = ebx;
        *((ecx + 0x24)) &= 0x80;
        *((ecx + 0x25)) = 0xa0a;
        *((ecx + 0x38)) = ebx;
        *((ecx + 0x34)) = bl;
        ecx += 0x40;
        *((ebp - 0x24)) = ecx;
    } while (1);
label_8:
    esi++;
    *((ebp - 0x30)) = esi;
    ecx = *((ebp - 0x1c));
    goto label_0;
label_3:
    ebx = 0xfffffffffffffffe;
label_5:
    edi = 0;
    do {
        *((ebp - 0x2c)) = edi;
        if (edi >= 3) {
            goto label_9;
        }
        esi = edi;
        esi <<= 6;
        esi += *(0x4191d0);
        *((ebp - 0x24)) = esi;
        if (*(esi) != -1) {
            if (*(esi) != ebx) {
                eax = *((esi + 4));
                al |= 0x80;
                *((esi + 4)) = al;
            }
        } else {
            *((esi + 4)) = 0x81;
            if (edi == 0) {
                eax = 0xfffffffffffffff6;
            } else {
                eax = edi - 1;
                eax = -eax;
                eax -= eax;
                eax += 0xfffffff5;
            }
            eax = GetStdHandle (eax);
            *((ebp - 0x1c)) = eax;
            if (eax != -1) {
                if (eax != 0) {
                    eax = GetFileType (eax);
                    if (eax == 0) {
                        goto label_10;
                    }
                    ecx = *((ebp - 0x1c));
                    *(esi) = ecx;
                    eax &= 0xff;
                    if (eax == 2) {
                        eax = *((esi + 4));
                        al |= 0x40;
                    } else {
                        if (eax != 3) {
                            goto label_11;
                        }
                        eax = *((esi + 4));
                        al |= 8;
                    }
                    *((esi + 4)) = al;
label_11:
                    fcn_00407e10 (esi + 0xc, 0xfa0, 0);
                    *((esi + 8))++;
                }
            } else {
label_10:
                eax = *((esi + 4));
                al |= 0x40;
                *((esi + 4)) = al;
                *(esi) = ebx;
                eax = *(0x41b000);
                if (eax == 0) {
                    goto label_12;
                }
                eax = *((eax + edi*4));
                *((eax + 0x10)) = ebx;
            }
        }
label_12:
        edi++;
    } while (1);
label_9:
    *((ebp - 4)) = ebx;
    eax = fcn_00405adb ();
    eax = 0;
label_1:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407d05 */
#include <stdint.h>
 
uint32_t fcn_00407d05 (void) {
    int32_t var_4h;
    eax = GetEnvironmentStringsW (edi, ecx);
    edi = eax;
    eax = 0;
    if (edi == 0) {
        goto label_1;
    }
    esi = edi;
    if (*(edi) == ax) {
        goto label_2;
    }
    do {
label_0:
        esi += 2;
    } while (*(esi) != ax);
    esi += 2;
    if (*(esi) != ax) {
        goto label_0;
    }
label_2:
    esi -= edi;
    esi >>= 1;
    esi++;
    eax = WideCharToMultiByte (eax, eax, edi, esi, eax, eax, eax, eax, ebx);
    *((ebp - 4)) = eax;
    if (eax != 0) {
        eax = fcn_00408fa3 (eax);
        ebx = eax;
        if (ebx != 0) {
            eax = 0;
            eax = WideCharToMultiByte (eax, eax, edi, esi, ebx, *((ebp - 4)), eax, eax);
            if (eax == 0) {
                fcn_0040295d (ebx);
                ebx = 0;
            }
            FreeEnvironmentStringsW (edi);
            eax = ebx;
        }
    } else {
        eax = FreeEnvironmentStringsW (edi);
        eax = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4078cc */
#include <stdint.h>
 
uint32_t fcn_004078cc (void) {
    int32_t var_8h;
    int32_t var_4h;
    if (*(0x419ff0) == 0) {
        fcn_00408594 ();
    }
    edi = 0x419940;
    ebx = 0;
    *(0x419a44) = bl;
    GetModuleFileNameA (ebx, edi, 0x104, edi, esi, ebx);
    esi = *(0x41b008);
    *(0x4192ec) = edi;
    if (esi != 0) {
        if (*(esi) != bl) {
            goto label_0;
        }
    }
    esi = edi;
label_0:
    fcn_0040797f (esi, ebx, ebx, ebp - 4, ebp - 8);
    ebx = *((ebp - 4));
    if (ebx < 0x3fffffff) {
        ecx = *((ebp - 8));
        if (ecx < -1) {
            edx = ecx + ebx*4;
            if (edx < ecx) {
                goto label_1;
            }
            eax = fcn_00408fa3 (edx);
            edi = eax;
            if (edi == 0) {
                goto label_1;
            }
            fcn_0040797f (esi, edi, edi + ebx*4, ebp - 4, ebp - 8);
            eax = *((ebp - 4));
            eax--;
            *(0x4192dc) = edi;
            *(0x4192d8) = eax;
            eax = 0;
        }
    } else {
label_1:
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406d07 */
#include <stdint.h>
 
void fcn_00406d07 (int32_t arg_8h) {
    fcn_00406fbe ();
    fcn_0040701b (*((ebp + 8)));
    fcn_00406dc5 (0xff);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406dc5 */
#include <stdint.h>
 
void fcn_00406dc5 (int32_t arg_8h) {
    fcn_00406e7b (*((ebp + 8)), 1, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406e7b */
#include <stdint.h>
 
uint32_t fcn_00406e7b (int32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x4177a8);
    fcn_00409180 (8);
    *((ebp - 4)) = 0;
    if (*(0x4192d4) == 1) {
        goto label_2;
    }
    *(0x4192fc) = 1;
    al = *((ebp + 0x10));
    *(0x4192f8) = al;
    if (*((ebp + 0xc)) != 0) {
        goto label_3;
    }
    eax = DecodePointer (*(0x419fec));
    ebx = eax;
    *((ebp - 0x2c)) = ebx;
    if (ebx == 0) {
        goto label_4;
    }
    eax = void (*esi)(uint32_t*) (*(0x419fe8));
    edi = eax;
    *((ebp - 0x1c)) = ebx;
    *((ebp - 0x20)) = edi;
label_1:
    *((ebp - 0x24)) = edi;
    do {
label_0:
        edi -= 4;
        *((ebp - 0x24)) = edi;
        if (edi < ebx) {
            goto label_4;
        }
        eax = EncodePointer (0);
    } while (*(edi) == eax);
    if (edi < ebx) {
        goto label_4;
    }
    eax = void (*esi)(uint32_t*) (*(edi));
    esi = eax;
    eax = EncodePointer (0);
    *(edi) = eax;
    void (*esi)() ();
    eax = DecodePointer (*(0x419fec));
    *((ebp - 0x28)) = eax;
    eax = DecodePointer (*(0x419fe8));
    ecx = *((ebp - 0x28));
    if (*((ebp - 0x1c)) != ecx) {
        goto label_5;
    }
    if (*((ebp - 0x20)) == eax) {
        goto label_0;
    }
label_5:
    *((ebp - 0x1c)) = ecx;
    ebx = ecx;
    *((ebp - 0x2c)) = ebx;
    *((ebp - 0x20)) = eax;
    edi = eax;
    goto label_1;
label_4:
    fcn_00406e11 (0x411128, 0x411138);
label_3:
    fcn_00406e11 (0x41113c, 0x411140);
label_2:
    *((ebp - 4)) = 0xfffffffe;
    void (*0x406f95)() ();
    if (*((ebp + 0x10)) == 0) {
        *(0x4192d4) = 1;
        fcn_004092ea (8);
        fcn_00406cf1 (*((ebp + 8)));
        if (*((ebp + 0x10)) != 0) {
            fcn_004092ea (8);
        }
        return eax;
    }
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407afb */
#include <stdint.h>
 
uint32_t fcn_00407afb (void) {
    if (*(0x419ff0) == 0) {
        eax = fcn_00408594 ();
    }
    esi = *(0x4191c0);
    edi = 0;
    if (esi != 0) {
        goto label_1;
    }
label_0:
    eax |= 0xffffffff;
    goto label_2;
    do {
        if (al != 0x3d) {
            edi++;
        }
        eax = fcn_00402cc0 (esi);
        esi++;
        esi += eax;
label_1:
        al = *(esi);
    } while (al != 0);
    eax = edi + 1;
    eax = fcn_00408f5b (eax, 4);
    edi = eax;
    *(0x4192e4) = edi;
    if (edi == 0) {
        goto label_0;
    }
    esi = *(0x4191c0);
    if (*(esi) == 0) {
        goto label_3;
    }
    do {
        fcn_00402cc0 (esi);
        ebx = eax + 1;
        if (*(esi) != 0x3d) {
            eax = fcn_00408f5b (ebx, 1);
            *(edi) = eax;
            if (eax == 0) {
                goto label_4;
            }
            eax = fcn_0040aa84 (eax, ebx, esi);
            if (eax != 0) {
                goto label_5;
            }
            edi += 4;
        }
        esi += ebx;
    } while (*(esi) != 0);
    esi = *(0x4191c0);
label_3:
    eax = fcn_0040295d (esi);
    *(0x4191c0) = 0;
    *(edi) = 0;
    eax = 0;
    *(0x419ff4) = 1;
    do {
label_2:
        return eax;
label_4:
        eax = fcn_0040295d (*(0x4192e4));
        *(0x4192e4) = 0;
        eax |= 0xffffffff;
    } while (1);
label_5:
    eax = 0;
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406d41 */
#include <stdint.h>
 
uint32_t fcn_00406d41 (int32_t arg_8h) {
    if (*(0x414cc8) != 0) {
        eax = fcn_00409790 ();
        if (eax == 0) {
            goto label_0;
        }
        uint32_t (*0x414cc8)(uint32_t*) (*((ebp + 8)));
    }
label_0:
    fcn_004090c4 ();
    eax = fcn_00406e47 (0x41110c, 0x411124);
    if (eax == 0) {
        fcn_0040a335 (0x407ce5);
        fcn_00406e11 (0x411108);
        if (*(0x419fe4) != 0) {
            eax = fcn_00409790 ();
            if (eax == 0) {
                goto label_1;
            }
            eax = uint32_t (*0x419fe4)(uint32_t, uint32_t, uint32_t) (0, 2, 0);
        }
label_1:
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406faa */
#include <stdint.h>
 
void fcn_00406faa (int32_t arg_8h) {
    fcn_00406e7b (*((ebp + 8)), 0, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406d32 */
#include <stdint.h>
 
void fcn_00406d32 (void) {
    fcn_00406e7b (0, 0, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40746f */
#include <stdint.h>
 
uint32_t fcn_0040746f (int32_t arg_8h, int32_t arg_ch) {
    eax = fcn_00407717 ();
    esi = eax;
    if (esi == 0) {
        goto label_0;
    }
    edx = *((esi + 0x5c));
    ecx = *((esi + 0x5c));
    edi = *((ebp + 8));
    do {
        if (*(ecx) == edi) {
            goto label_1;
        }
        ecx += 0xc;
        eax = edx + 0x90;
    } while (ecx < eax);
label_1:
    eax = edx + 0x90;
    if (ecx < eax) {
        if (*(ecx) == edi) {
            goto label_2;
        }
    }
    ecx = 0;
label_2:
    if (ecx == 0) {
        goto label_3;
    }
    edx = *((ecx + 8));
    if (edx == 0) {
        goto label_3;
    }
    if (edx == 5) {
        *((ecx + 8)) = 0;
        eax = 0;
        eax++;
        goto label_4;
    }
    if (edx == 1) {
        eax |= 0xffffffff;
        goto label_4;
    }
    eax = *((ebp + 0xc));
    ebx = *((esi + 0x60));
    *((esi + 0x60)) = eax;
    if (*((ecx + 4)) != 8) {
        goto label_5;
    }
    edi = 0x24;
    do {
        eax = *((esi + 0x5c));
        *((edi + eax + 8)) = 0;
        edi += 0xc;
    } while (edi < 0x90);
    edi = *((esi + 0x64));
    if (*(ecx) == 0xc000008e) {
        *((esi + 0x64)) = 0x83;
    } else {
        if (*(ecx) == 0xc0000090) {
            *((esi + 0x64)) = 0x81;
        } else {
            if (*(ecx) == 0xc0000091) {
                *((esi + 0x64)) = 0x84;
            } else {
                if (*(ecx) == 0xc0000093) {
                    *((esi + 0x64)) = 0x85;
                } else {
                    if (*(ecx) == 0xc000008d) {
                        *((esi + 0x64)) = 0x82;
                    } else {
                        if (*(ecx) == 0xc000008f) {
                            *((esi + 0x64)) = 0x86;
                        } else {
                            if (*(ecx) == 0xc0000092) {
                                *((esi + 0x64)) = 0x8a;
                            } else {
                                if (*(ecx) == 0xc00002b5) {
                                    *((esi + 0x64)) = 0x8d;
                                } else {
                                    if (*(ecx) != 0xc00002b4) {
                                        goto label_6;
                                    }
                                    *((esi + 0x64)) = 0x8e;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
label_6:
    void (*edx)(uint32_t, uint32_t*) (8, *((esi + 0x64)));
    *((esi + 0x64)) = edi;
    goto label_7;
label_5:
    *((ecx + 8)) = 0;
    eax = void (*edx)(uint32_t*) (*((ecx + 4)));
label_7:
    *((esi + 0x60)) = ebx;
    eax |= 0xffffffff;
    goto label_4;
label_3:
    eax = 0;
label_4:
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406d23 */
#include <stdint.h>
 
void fcn_00406d23 (void) {
    fcn_00406e7b (0, 1, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407c29 */
#include <stdint.h>
 
int32_t fcn_00407c29 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_10h;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 0xc)) = 0;
    *((ebp - 8)) = 0;
    eax = *(0x4183f0);
    edi = 0xbb40e64e;
    esi = 0xffff0000;
    if (eax != edi) {
        if ((esi & eax) != 0) {
            eax = ~eax;
            *(0x4183f4) = eax;
        }
    } else {
        GetSystemTimeAsFileTime (ebp - 0xc);
        eax = *((ebp - 8));
        eax ^= *((ebp - 0xc));
        *((ebp - 4)) = eax;
        eax = GetCurrentThreadId ();
        *((ebp - 4)) ^= eax;
        eax = GetCurrentProcessId ();
        *((ebp - 4)) ^= eax;
        QueryPerformanceCounter (ebp - 0x14);
        ecx = *((ebp - 0x10));
        eax = ebp - 4;
        ecx ^= *((ebp - 0x14));
        ecx ^= *((ebp - 4));
        ecx ^= eax;
        if (ecx == edi) {
            ecx = 0xbb40e64f;
        } else {
            if ((esi & ecx) != 0) {
                goto label_0;
            }
            eax = ecx;
            eax |= 0x4711;
            eax <<= 0x10;
            ecx |= eax;
        }
label_0:
        *(0x4183f0) = ecx;
        ecx = ~ecx;
        *(0x4183f4) = ecx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402c87 */
#include <stdint.h>
 
uint32_t fcn_00402c87 (void) {
    eax = IsProcessorFeaturePresent (0x17);
    if (eax != 0) {
        ecx = 5;
        eax = syscall_29h (eax, ebx, ecx, edx, esi, edi, edp);
    }
    esi = 0xc0000417;
    fcn_00402b1a (2, esi, 1, esi);
    fcn_00408127 (esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402b1a */
#include <stdint.h>
 
int32_t fcn_00402b1a (int32_t arg_4h, uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    int32_t var_31ch;
    int32_t var_314h;
    int32_t var_2d0h;
    int32_t var_244h;
    int32_t var_240h;
    int32_t var_23ch;
    int32_t var_238h;
    int32_t var_234h;
    int32_t var_230h;
    int32_t var_22ch;
    int32_t var_228h;
    int32_t var_224h;
    int32_t var_220h;
    int32_t var_21ch;
    int32_t var_218h;
    int32_t var_214h;
    int32_t var_210h;
    int32_t var_20ch;
    int32_t var_208h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    if (*((ebp + 8)) != -1) {
        fcn_00408152 ();
    }
    *((ebp - 0x320)) = 0;
    eax = ebp - 0x31c;
    fcn_00407390 (eax, 0, 0x4c);
    eax = ebp - 0x320;
    *((ebp - 0x328)) = eax;
    eax = ebp - 0x2d0;
    *((ebp - 0x324)) = eax;
    *((ebp - 0x220)) = eax;
    *((ebp - 0x224)) = ecx;
    *((ebp - 0x228)) = edx;
    *((ebp - 0x22c)) = ebx;
    *((ebp - 0x230)) = esi;
    *((ebp - 0x234)) = edi;
    *((ebp - 0x208)) = ss;
    *((ebp - 0x214)) = cs;
    *((ebp - 0x238)) = ds;
    *((ebp - 0x23c)) = es;
    *((ebp - 0x240)) = fs;
    *((ebp - 0x244)) = gs;
    __asm ("pushfd");
    eax = *((ebp + 4));
    *((ebp - 0x218)) = eax;
    eax = ebp + 4;
    *((ebp - 0x20c)) = eax;
    *((ebp - 0x2d0)) = 0x10001;
    eax = *((eax - 4));
    *((ebp - 0x21c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x320)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x31c)) = eax;
    eax = *((ebp + 4));
    *((ebp - 0x314)) = eax;
    eax = IsDebuggerPresent ();
    edi = eax;
    eax = fcn_0040813c (ebp - 0x328);
    if (eax == 0) {
        if (edi != 0) {
            goto label_0;
        }
        if (*((ebp + 8)) == -1) {
            goto label_0;
        }
        fcn_00408152 ();
    }
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4076ff */
#include <stdint.h>
 
uint32_t fcn_004076ff (void) {
    eax = fcn_00407717 ();
    esi = eax;
    if (esi == 0) {
        fcn_00406d07 (0x10);
    }
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4084c9 */
#include <stdint.h>
 
uint32_t fcn_004084c9 (void) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417818);
    *((ebp - 0x1c)) = 0;
    eax = fcn_004076ff ();
    esi = eax;
    ecx = *(0x418c98);
    if ((*((esi + 0x70)) & ecx) == 0) {
        goto label_0;
    }
    if (*((esi + 0x6c)) == 0) {
        goto label_0;
    }
    fcn_004076ff ();
    esi = *((eax + 0x6c));
    do {
        if (esi == 0) {
            fcn_00406d07 (0x20);
        }
        eax = esi;
        fcn_004045d5 ();
        return eax;
label_0:
        fcn_00409180 (0xc);
        *((ebp - 4)) = 0;
        eax = fcn_00408549 (esi + 0x6c, *(0x418bdc));
        esi = eax;
        *((ebp - 0x1c)) = esi;
        *((ebp - 4)) = 0xfffffffe;
        fcn_00408540 ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40884b */
#include <stdint.h>
 
uint32_t fcn_0040884b (void) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417838);
    esi = 0;
    *((ebp - 0x1c)) = esi;
    eax = fcn_004076ff ();
    edi = eax;
    ecx = *(0x418c98);
    if ((*((edi + 0x70)) & ecx) == 0) {
        goto label_0;
    }
    if (*((edi + 0x6c)) == esi) {
        goto label_0;
    }
    esi = *((edi + 0x68));
    do {
        if (esi == 0) {
            fcn_00406d07 (0x20);
        }
        eax = esi;
        fcn_004045d5 ();
        return eax;
label_0:
        eax = fcn_00409180 (0xd);
        *((ebp - 4)) = esi;
        esi = *((edi + 0x68));
        *((ebp - 0x1c)) = esi;
        if (esi != *(0x418974)) {
            if (esi != 0) {
                eax |= 0xffffffff;
                __asm ("lock xadd dword [esi], eax");
                if (eax != 0) {
                    goto label_1;
                }
                if (esi == 0x418750) {
                    goto label_1;
                }
                fcn_0040295d (esi);
            }
label_1:
            eax = *(0x418974);
            *((edi + 0x68)) = eax;
            esi = *(0x418974);
            *((ebp - 0x1c)) = esi;
            eax = 0;
            eax++;
            __asm ("lock xadd dword [esi], eax");
        }
        *((ebp - 4)) = 0xfffffffe;
        fcn_004088e8 ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408f5b */
#include <stdint.h>
 
uint32_t fcn_00408f5b (int32_t arg_8h, int32_t arg_ch) {
    esi = 0;
    do {
        eax = fcn_0040b573 (*((ebp + 8)), *((ebp + 0xc)), 0);
        edi = eax;
        if (edi != 0) {
            goto label_0;
        }
        if (*(0x419a68) <= eax) {
            goto label_0;
        }
        fcn_00408119 (esi);
        esi += 0x3e8;
        if (esi > *(0x419a68)) {
            esi |= 0xffffffff;
        }
    } while (esi != -1);
label_0:
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409034 */
#include <stdint.h>
 
uint32_t fcn_00409034 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h) {
    esi = 0;
    do {
        eax = fcn_0040b50a (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)));
        edi = eax;
        if (edi != 0) {
            goto label_0;
        }
        if (*((ebp + 0x10)) == eax) {
            goto label_0;
        }
        if (*(0x419a68) <= eax) {
            goto label_0;
        }
        fcn_00408119 (esi);
        esi += 0x3e8;
        if (esi > *(0x419a68)) {
            esi |= 0xffffffff;
        }
    } while (esi != -1);
label_0:
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408d80 */
#include <stdint.h>
 
int32_t fcn_00408d80 (int32_t arg_8h) {
    if (*(0x419f34) == 0) {
        ecx = *((ebp + 8));
        eax = "         (((((                  H";
        eax = *((eax + ecx*2));
        eax &= 4;
        return eax;
    }
    fcn_00408c84 (*((ebp + 8)), 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408c84 */
#include <stdint.h>
 
uint32_t fcn_00408c84 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0xc)));
    ecx = *((ebp - 0x10));
    if (*((ecx + 0x74)) > 1) {
        eax = fcn_0040b35c (*((ebp + 8)), 4, ebp - 0x10);
        ecx = eax;
    } else {
        ecx = *((ecx + 0x90));
        eax = *((ebp + 8));
        ecx = *((ecx + eax*2));
        ecx &= 4;
    }
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 8));
        *((eax + 0x70)) &= 0xfffffffd;
    }
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402d4b */
#include <stdint.h>
 
uint32_t fcn_00402d4b (int32_t arg_8h) {
    esi = ecx;
    ecx = *((ebp + 8));
    *((esi + 0xc)) = 0;
    if (ecx == 0) {
        eax = fcn_004076ff ();
        edi = eax;
        *((esi + 8)) = edi;
        edx = *((edi + 0x6c));
        *(esi) = edx;
        ecx = *((edi + 0x68));
        *((esi + 4)) = ecx;
        if (edx != *(0x418bdc)) {
            eax = *(0x418c98);
            if ((*((edi + 0x70)) & eax) != 0) {
                goto label_0;
            }
            eax = fcn_004084c9 ();
            *(esi) = eax;
        }
label_0:
        eax = *((esi + 4));
        if (eax != *(0x418974)) {
            ecx = *((esi + 8));
            eax = *(0x418c98);
            if ((*((ecx + 0x70)) & eax) != 0) {
                goto label_1;
            }
            eax = fcn_0040884b ();
            *((esi + 4)) = eax;
        }
label_1:
        ecx = *((esi + 8));
        eax = *((ecx + 0x70));
        if ((al & 2) != 0) {
            goto label_2;
        }
        eax |= 2;
        *((ecx + 0x70)) = eax;
        *((esi + 0xc)) = 1;
    } else {
        eax = *(ecx);
        *(esi) = eax;
        eax = *((ecx + 4));
        *((esi + 4)) = eax;
    }
label_2:
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408dab */
#include <stdint.h>
 
int32_t fcn_00408dab (int32_t arg_8h) {
    if (*(0x419f34) == 0) {
        ecx = *((ebp + 8));
        eax = "         (((((                  H";
        eax = *((eax + ecx*2));
        eax &= 8;
        return eax;
    }
    fcn_00408cd6 (*((ebp + 8)), 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408cd6 */
#include <stdint.h>
 
uint32_t fcn_00408cd6 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0xc)));
    ecx = *((ebp - 0x10));
    if (*((ecx + 0x74)) > 1) {
        eax = fcn_0040b35c (*((ebp + 8)), 8, ebp - 0x10);
        ecx = eax;
    } else {
        ecx = *((ecx + 0x90));
        eax = *((ebp + 8));
        ecx = *((ecx + eax*2));
        ecx &= 8;
    }
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 8));
        *((eax + 0x70)) &= 0xfffffffd;
    }
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x403fc4 */
#include <stdint.h>
 
uint32_t fcn_00403fc4 (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 8));
    do {
        *(esi)++;
        eax = fcn_00402e53 (*((ebp + 0xc)));
        ebx = eax;
        if (ebx == -1) {
            goto label_0;
        }
        ecx = (int32_t) bl;
        eax = fcn_00408dab (ecx);
    } while (eax != 0);
label_0:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40815a */
#include <stdint.h>
 
uint32_t fcn_0040815a (int32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 0xc));
    edi |= 0xffffffff;
    if ((*((esi + 0xc)) & 0x40) != 0) {
        goto label_2;
    }
    eax = fcn_004048e2 (esi);
    ecx = eax;
    ebx = 0x418500;
    if (ecx != edi) {
        if (ecx != 0xfffffffe) {
            edx = ecx;
            eax >>= 5;
            edx &= 0x1f;
            edx <<= 6;
            edx += *((eax*4 + 0x4191d0));
        }
    } else {
        edx = ebx;
    }
    if ((*((edx + 0x24)) & 0x7f) == 0) {
        if (ecx != edi) {
            if (ecx != 0xfffffffe) {
                eax = ecx;
                ecx &= 0x1f;
                eax >>= 5;
                ecx <<= 6;
                ecx += *((eax*4 + 0x4191d0));
            }
        } else {
            ecx = ebx;
        }
        if ((*((ecx + 0x24)) & 0x80) == 0) {
            goto label_2;
        }
    }
    fcn_00404026 ();
    *(eax) = 0x16;
    fcn_00402c77 ();
    do {
label_0:
        eax = edi;
label_1:
        return eax;
label_2:
        ebx = *((ebp + 8));
    } while (ebx == edi);
    if ((*((esi + 0xc)) & 1) != 0) {
        goto label_3;
    }
    if ((*((esi + 0xc)) & 0x80) == 0) {
        goto label_0;
    }
    if ((*((esi + 0xc)) & 2) != 0) {
        goto label_0;
    }
label_3:
    if (*((esi + 8)) == 0) {
        fcn_0040a008 (esi);
    }
    eax = *(esi);
    if (eax != *((esi + 8))) {
        goto label_4;
    }
    if (*((esi + 4)) != 0) {
        goto label_0;
    }
    eax++;
    *(esi) = eax;
label_4:
    *(esi)--;
    eax = *(esi);
    if ((*((esi + 0xc)) & 0x40) != 0) {
        if (*(eax) == bl) {
            goto label_5;
        }
        eax++;
        *(esi) = eax;
        goto label_0;
    }
    *(eax) = bl;
label_5:
    eax = *((esi + 0xc));
    *((esi + 4))++;
    eax &= 0xffffffef;
    eax |= 1;
    *((esi + 0xc)) = eax;
    eax = (int32_t) bl;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402e53 */
#include <stdint.h>
 
int32_t fcn_00402e53 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    *((ecx + 4))--;
    if (*((ecx + 4)) >= 0) {
        eax = *(ecx);
        edx = *(eax);
        eax++;
        *(ecx) = eax;
    } else {
        eax = fcn_004071ed (ecx);
        edx = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402dd3 */
#include <stdint.h>
 
int32_t fcn_00402dd3 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h) {
    esi = *((ebp + 0xc));
    eax = *(esi);
    if (*((ebp + 8)) != eax) {
        goto label_0;
    }
    edi = *((ebp + 0x10));
    ecx = *(edi);
    if (ecx != *((ebp + 0x14))) {
        goto label_1;
    }
    eax = fcn_00408f5b ();
    *(edi) = eax;
    while (eax == 0) {
        eax = 0;
        goto label_2;
        eax = *((ebp + 0x18));
        *(eax) = 1;
        fcn_00405c40 (*(edi), *((ebp + 0x14)), *(esi));
        goto label_3;
label_1:
        eax = fcn_00409034 (ecx);
    }
    *(edi) = eax;
label_3:
    *(esi) <<= 1;
label_0:
    eax = 0;
    eax++;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408e3d */
#include <stdint.h>
 
void fcn_00408e3d (int32_t arg_8h) {
    fcn_00408e03 (*((ebp + 8)), 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408e03 */
#include <stdint.h>
 
int32_t fcn_00408e03 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0xc)));
    eax = *((ebp + 8));
    ecx = (int32_t) al;
    eax = *((ebp - 0x10));
    eax = *((eax + 0x90));
    eax = *((eax + ecx*2));
    eax &= 0x8000;
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408e4e */
#include <stdint.h>
 
int32_t fcn_00408e4e (LPWSTR lpWideCharStr, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    esi = *((ebp + 0xc));
    if (esi != 0) {
        ebx = *((ebp + 0x10));
        if (ebx == 0) {
            goto label_0;
        }
        if (*(esi) != 0) {
            goto label_1;
        }
        eax = *((ebp + 8));
        if (eax == 0) {
            goto label_0;
        }
        ecx = 0;
        *(eax) = cx;
    }
label_0:
    eax = 0;
    do {
        ebx = esi;
        return eax;
label_1:
        ecx = ebp - 0x10;
        fcn_00402d4b (*((ebp + 0x14)));
        eax = *((ebp - 0x10));
        if (*((eax + 0xa8)) == 0) {
            ecx = *((ebp + 8));
            if (ecx != 0) {
                eax = *(esi);
                *(ecx) = ax;
            }
            edi = 0;
            edi++;
        } else {
            eax = *(esi);
            eax = fcn_00408e03 (eax, ebp - 0x10);
            if (eax != 0) {
                edi = *((ebp - 0x10));
                if (*((edi + 0x74)) > 1) {
                    if (ebx < *((edi + 0x74))) {
                        goto label_2;
                    }
                    eax = 0;
                    al = (*((ebp + 8)) != eax) ? 1 : 0;
                    eax = MultiByteToWideChar (*((edi + 4)), 9, esi, *((edi + 0x74)), *((ebp + 8)), eax);
                    edi = *((ebp - 0x10));
                    if (eax != 0) {
                        goto label_3;
                    }
                }
                if (ebx >= *((edi + 0x74))) {
label_2:
                    if (*((esi + 1)) == 0) {
                        goto label_4;
                    }
label_3:
                    edi = *((edi + 0x74));
                } else {
                    eax = 0;
                    al = (*((ebp + 8)) != eax) ? 1 : 0;
                    edi = 0;
                    eax = *((ebp - 0x10));
                    edi++;
                    eax = MultiByteToWideChar (*((eax + 4)), 9, esi, edi, *((ebp + 8)), eax);
                    if (eax != 0) {
                        goto label_5;
                    }
                }
label_4:
                fcn_00404026 ();
                edi |= 0xffffffff;
                *(eax) = 0x2a;
            }
        }
label_5:
        if (*((ebp - 4)) != 0) {
            ecx = *((ebp - 8));
            *((ecx + 0x70)) &= 0xfffffffd;
        }
        eax = edi;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409090 */
#include <stdint.h>
 
int32_t fcn_00409090 (int32_t arg_8h_2, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
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
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408dd6 */
#include <stdint.h>
 
int32_t fcn_00408dd6 (int32_t arg_8h) {
    if (*(0x419f34) == 0) {
        ecx = *((ebp + 8));
        eax = "         (((((                  H";
        eax = *((eax + ecx*2));
        eax &= 0x80;
        return eax;
    }
    fcn_00408d28 (*((ebp + 8)), 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408d28 */
#include <stdint.h>
 
uint32_t fcn_00408d28 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0xc)));
    ecx = *((ebp - 0x10));
    if (*((ecx + 0x74)) > 1) {
        eax = fcn_0040b35c (*((ebp + 8)), 0x80, ebp - 0x10);
        ecx = eax;
    } else {
        ecx = *((ecx + 0x90));
        eax = *((ebp + 8));
        ecx = *((ecx + eax*2));
        ecx &= 0x80;
    }
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 8));
        *((eax + 0x70)) &= 0xfffffffd;
    }
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402e32 */
#include <stdint.h>
 
uint32_t fcn_00402e32 (int32_t arg_8h) {
    bl = *((ebp + 8));
    eax = (int32_t) bl;
    eax = fcn_00408d80 (eax);
    eax = (int32_t) bl;
    if (eax == 0) {
        eax &= 0xffffffdf;
        eax -= 7;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x403ff2 */
#include <stdint.h>
 
uint32_t fcn_00403ff2 (void) {
    eax = fcn_00407717 ();
    if (eax == 0) {
        eax = 0x41816c;
        return eax;
    }
    eax += 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404b55 */
#include <stdint.h>
 
void fcn_00404b55 (void) {
    fcn_00404b5e (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404b5e */
#include <stdint.h>
 
int32_t fcn_00404b5e (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x4176e0);
    edi = 0;
    *((ebp - 0x1c)) = edi;
    *((ebp - 0x24)) &= edi;
    fcn_00409180 (1);
    *((ebp - 4)) &= edi;
    esi = 0;
    ebx = *((ebp + 8));
    do {
        *((ebp - 0x20)) = esi;
        if (esi >= *(0x41b004)) {
            goto label_0;
        }
        eax = *(0x41b000);
        eax = *((eax + esi*4));
        if (eax != 0) {
            if ((*((eax + 0xc)) & 0x83) == 0) {
                goto label_1;
            }
            fcn_00404159 (esi, eax);
            *((ebp - 4)) = 1;
            eax = *(0x41b000);
            eax = *((eax + esi*4));
            if ((*((eax + 0xc)) & 0x83) != 0) {
                if (ebx == 1) {
                    eax = fcn_00404aab (eax);
                    if (eax == -1) {
                        goto label_2;
                    }
                    edi++;
                    *((ebp - 0x1c)) = edi;
                } else {
                    if (ebx != 0) {
                        goto label_2;
                    }
                    if ((*((eax + 0xc)) & 2) == 0) {
                        goto label_2;
                    }
                    eax = fcn_00404aab (eax);
                    if (eax != -1) {
                        goto label_2;
                    }
                    *((ebp - 0x24)) |= eax;
                }
            }
label_2:
            *((ebp - 4)) = 0;
            fcn_00404c06 ();
        }
label_1:
        esi++;
    } while (1);
label_0:
    *((ebp - 4)) = 0xfffffffe;
    fcn_00404c39 ();
    eax = edi;
    if (ebx != 1) {
        eax = *((ebp - 0x24));
    }
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4090e3 */
#include <stdint.h>
 
int32_t fcn_004090e3 (void) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417878);
    edi = 0;
    *((ebp - 0x1c)) = edi;
    fcn_00409180 (1);
    *((ebp - 4)) &= edi;
    esi = 3;
    do {
        *((ebp - 0x20)) = esi;
        if (esi >= *(0x41b004)) {
            goto label_0;
        }
        eax = *(0x41b000);
        eax = *((eax + esi*4));
        if (eax != 0) {
            if ((*((eax + 0xc)) & 0x83) != 0) {
                eax = fcn_00401efa (eax);
                if (eax == -1) {
                    goto label_1;
                }
                edi++;
                *((ebp - 0x1c)) = edi;
            }
label_1:
            if (esi < 0x14) {
                goto label_2;
            }
            eax = *(0x41b000);
            eax = *((eax + esi*4));
            eax += 0x20;
            DeleteCriticalSection (eax);
            eax = *(0x41b000);
            fcn_0040295d (*((eax + esi*4)));
            eax = *(0x41b000);
            *((eax + esi*4)) = 0;
        }
label_2:
        esi++;
    } while (1);
label_0:
    *((ebp - 4)) = 0xfffffffe;
    fcn_00409177 ();
    eax = edi;
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409180 */
#include <stdint.h>
 
uint32_t fcn_00409180 (int32_t arg_8h) {
    esi = *((ebp + 8));
    if (*((esi*8 + 0x418cc8)) == 0) {
        eax = fcn_00409208 (esi);
        if (eax != 0) {
            goto label_0;
        }
        fcn_00406d07 (0x11);
    }
label_0:
    EnterCriticalSection (*((esi*8 + 0x418cc8)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409208 */
#include <stdint.h>
 
uint32_t fcn_00409208 (int32_t arg_8h) {
    int32_t var_4h;
    fcn_00404590 (0x417898);
    if (*(0x41993c) == 0) {
        fcn_00406fbe ();
        fcn_0040701b (0x1e);
        fcn_00406cf1 (0xff);
    }
    edi = *((ebp + 8));
    ebx = 0;
    if (*((edi*8 + 0x418cc8)) == ebx) {
        eax = fcn_00408fa3 (0x18);
        esi = eax;
        if (esi == 0) {
            fcn_00404026 ();
            *(eax) = 0xc;
            eax = 0;
            goto label_0;
        }
        fcn_00409180 (0xa);
        *((ebp - 4)) = ebx;
        if (*((edi*8 + 0x418cc8)) == ebx) {
            fcn_00407e10 (esi, 0xfa0, ebx);
            *((edi*8 + 0x418cc8)) = esi;
        } else {
            fcn_0040295d (esi);
        }
        *((ebp - 4)) = 0xfffffffe;
        eax = fcn_004092a8 ();
    }
    eax = 0;
    eax++;
label_0:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404159 */
#include <stdint.h>
 
int32_t fcn_00404159 (int32_t arg_8h, LPCRITICAL_SECTION lpCriticalSection) {
    eax = *((ebp + 8));
    if (eax < 0x14) {
        eax += 0x10;
        fcn_00409180 (eax);
        eax = *((ebp + 0xc));
        *((eax + 0xc)) |= 0x8000;
        return eax;
    }
    eax = *((ebp + 0xc));
    eax += 0x20;
    EnterCriticalSection (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4041c3 */
#include <stdint.h>
 
int32_t fcn_004041c3 (int32_t arg_8h, int32_t arg_ch) {
    ecx = *((ebp + 8));
    eax = *((ebp + 0xc));
    if (ecx < 0x14) {
        *((eax + 0xc)) &= 0xffff7fff;
        eax = fcn_004092ea (ecx + 0x10);
        return eax;
    }
    eax += 0x20;
    LeaveCriticalSection (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408fa3 */
#include <stdint.h>
 
uint32_t fcn_00408fa3 (int32_t arg_8h) {
    edi = *(0x419a68);
    esi = 0;
    do {
        eax = fcn_0040265a (*((ebp + 8)));
        ebx = eax;
        if (ebx != 0) {
            goto label_0;
        }
        if (edi == 0) {
            goto label_0;
        }
        fcn_00408119 (esi);
        edi = *(0x419a68);
        esi += 0x3e8;
        if (esi > edi) {
            esi |= 0xffffffff;
        }
    } while (esi != -1);
label_0:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407e10 */
#include <stdint.h>
 
int32_t fcn_00407e10 (LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int32_t arg_10h) {
    eax = *(0x419f70);
    eax ^= *(0x4183f0);
    if (? != ?) {
        void (*eax)(uint32_t*, uint32_t*, uint32_t*) (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)));
        return eax;
    }
    eax = InitializeCriticalSectionAndSpinCount (*((ebp + 8)), *((ebp + 0xc)));
    eax = 0;
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404306 */
#include <stdint.h>
 
void fcn_00404306 (void) {
    fcn_004092ea (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409434 */
#include <stdint.h>
 
void fcn_00409434 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    fcn_0040944c (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40944c */
#include <stdint.h>
 
int32_t fcn_0040944c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    esi = *((ebp + 0x10));
    if (esi == 0) {
        eax = 0;
        goto label_1;
    }
    ecx = ebp - 0x14;
    fcn_00402d4b (*((ebp + 0x14)));
    eax = *((ebp - 0x10));
    edx = 0;
    if (*((eax + 8)) == edx) {
        eax = fcn_0040bde0 (*((ebp + 8)), *((ebp + 0xc)), esi);
        edx = eax;
        goto label_2;
    }
    ebx = *((ebp + 8));
    if (ebx != 0) {
        edi = *((ebp + 0xc));
        if (edi != 0) {
            goto label_0;
        }
    }
    fcn_00404026 ();
    *(eax) = 0x16;
    fcn_00402c77 ();
    edx = 0x7fffffff;
    goto label_2;
label_0:
    ecx = *(ebx);
    esi--;
    edx = *((ebp - 0x10));
    eax = ecx;
    ebx++;
    *((ebp - 4)) = ebx;
    edx = 0;
    if ((*((eax + edx + 0x19)) & 4) != 0) {
        if (esi == 0) {
            eax = *(edi);
            ecx = edx;
            ebx = *((ebp - 0x10));
            if ((*((eax + ebx + 0x19)) & 4) != 0) {
                goto label_2;
            }
            al = *(edi);
            ebx = (int32_t) al;
            goto label_3;
        }
        al = *(ebx);
        if (al == 0) {
            ecx = edx;
        } else {
            ecx <<= 8;
            eax = (int32_t) al;
            cx |= ax;
            ebx++;
            ecx = (int32_t) cx;
            *((ebp - 4)) = ebx;
        }
    }
    ebx = *(edi);
    edi++;
    edx = *((ebp - 0x10));
    eax = ebx;
    edx = 0;
    if ((*((eax + edx + 0x19)) & 4) == 0) {
        goto label_3;
    }
    while (al == 0) {
        ebx = edx;
        goto label_3;
        al = *(edi);
        esi--;
    }
    ebx <<= 8;
    eax = (int32_t) al;
    bx |= ax;
    edi++;
    ebx = (int32_t) bx;
label_3:
    if (bx != cx) {
        goto label_4;
    }
    if (cx == 0) {
        goto label_2;
    }
    ebx = *((ebp - 4));
    if (esi != 0) {
        goto label_0;
    }
    goto label_2;
label_4:
    edx -= edx;
    edx &= 2;
    edx--;
label_2:
    edi = 0;
    ebx = 0;
    if (*((ebp - 8)) != 0) {
        ecx = *((ebp - 0xc));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = edx;
label_1:
    esi = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409563 */
#include <stdint.h>
 
void fcn_00409563 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    fcn_0040957b (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40957b */
#include <stdint.h>
 
uint32_t fcn_0040957b (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ecx = ebp - 0x18;
    fcn_00402d4b (*((ebp + 0x14)));
    edi = *((ebp + 0x10));
    edx = 0;
    if (edi == 0) {
        goto label_1;
    }
    ecx = *((ebp - 0x14));
    if (*((ecx + 8)) == edx) {
        eax = fcn_0040be58 (*((ebp + 8)), *((ebp + 0xc)), edi);
        edx = eax;
        goto label_1;
    }
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    if (eax != 0) {
        ebx = *((ebp + 0xc));
        if (ebx != 0) {
            goto label_2;
        }
    }
    fcn_00404026 ();
    *(eax) = 0x16;
    eax = fcn_00402c77 ();
    edx = 0x7fffffff;
    goto label_1;
label_2:
label_0:
    esi = *(eax);
    edi--;
    *((ebp - 8))++;
    *((ebp - 4)) = esi;
    eax = *((ebp - 4));
    if ((*((eax + ecx + 0x19)) & 4) != 0) {
        if (edi == 0) {
            eax = *(ebx);
            *((ebp - 4)) = edx;
            if ((*((eax + ecx + 0x19)) & 4) != 0) {
                goto label_3;
            }
            al = *(ebx);
            si = dx;
            eax = (int32_t) al;
            goto label_4;
        }
        eax = *((ebp - 8));
        al = *(eax);
        if (al == 0) {
            *((ebp - 4)) = edx;
        } else {
            esi <<= 8;
            eax = (int32_t) al;
            si |= ax;
            *((ebp - 8))++;
            eax = (int32_t) si;
            si = ax;
            *((ebp - 4)) = eax;
            if (si >= *((ecx + 0xc))) {
                if (si > *((ecx + 0xe))) {
                    goto label_5;
                }
                si += *((ecx + 0x10));
                goto label_6;
            }
label_5:
            if (si < *((ecx + 0x12))) {
                goto label_6;
            }
            if (si > *((ecx + 0x14))) {
                goto label_6;
            }
            si += *((ecx + 0x16));
        } else {
            si = *((ebp - 4));
            eax = (int32_t) si;
            if ((*((eax + ecx + 0x19)) & 0x10) == 0) {
                goto label_6;
            }
            eax = *((eax + ecx + 0x119));
            *((ebp - 4)) = eax;
        }
        si = *((ebp - 4));
    }
label_6:
    eax = *(ebx);
    ebx++;
    *((ebp - 4)) = eax;
    *((ebp + 0x10)) = eax;
    eax = (int32_t) al;
    if ((*((eax + ecx + 0x19)) & 4) == 0) {
        goto label_7;
    }
    while (al == 0) {
        *((ebp + 0x10)) = edx;
        goto label_8;
        al = *(ebx);
        edi--;
    }
    *((ebp - 4)) <<= 8;
    eax = (int32_t) al;
    *((ebp - 4)) |= ax;
    ebx++;
    eax = *((ebp - 4));
    eax = (int32_t) ax;
    *((ebp + 0x10)) = eax;
    if (ax >= *((ecx + 0xc))) {
        if (ax <= *((ecx + 0xe))) {
            ax += *((ecx + 0x10));
        }
    } else {
        if (ax < *((ecx + 0x12))) {
            goto label_9;
        }
        if (ax > *((ecx + 0x14))) {
            goto label_9;
        }
        ax += *((ecx + 0x16));
        goto label_9;
label_7:
        ax = *((ebp + 0x10));
        edx = (int32_t) ax;
        *((ebp + 0x10)) = edx;
        edx = 0;
        if ((*((edx + ecx + 0x19)) & 0x10) == 0) {
            goto label_9;
        }
        eax = *((ebp + 0x10));
        eax = *((eax + ecx + 0x119));
label_4:
        *((ebp + 0x10)) = eax;
label_8:
        ax = *((ebp + 0x10));
    }
label_9:
    if (ax != si) {
        goto label_10;
    }
    if (si == 0) {
        goto label_3;
    }
    eax = *((ebp - 8));
    if (edi != 0) {
        goto label_0;
    }
    goto label_3;
label_10:
    edx -= edx;
    edx &= 2;
    edx--;
label_3:
    esi = 0;
label_1:
    edi = 0;
    ebx = 0;
    if (*((ebp - 0xc)) != 0) {
        ecx = *((ebp - 0x10));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409416 */
#include <stdint.h>
 
void fcn_00409416 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    fcn_004092ff (*((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 8)), 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4092ff */
#include <stdint.h>
 
uint32_t fcn_004092ff (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, uint32_t arg_1ch) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    eax = fcn_00404590 (0x4178b8);
    ecx = 0;
    *((ebp - 0x1c)) = ecx;
    *((ebp - 0x20)) = ecx;
    eax = 0;
    esi = *((ebp + 0x18));
    al = (esi != 0) ? 1 : 0;
    while (eax == 0) {
label_0:
        fcn_00404026 ();
        esi = 0x16;
        *(eax) = esi;
        fcn_00402c77 ();
        eax = esi;
        goto label_1;
        *(esi) |= 0xffffffff;
        eax = 0;
        al = (*((ebp + 8)) != eax) ? 1 : 0;
    }
    if (*((ebp + 0x1c)) == ecx) {
        goto label_2;
    }
    eax = *((ebp + 0x14));
    eax &= 0xfffffe7f;
    eax = -eax;
    eax -= eax;
    eax++;
    if (eax == 0) {
        goto label_0;
    }
label_2:
    *((ebp - 4)) = ecx;
    eax = fcn_004093c8 (ebp - 0x20, esi, *((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x1c)));
    edi = eax;
    *((ebp - 0x1c)) = edi;
    *((ebp - 4)) = 0xfffffffe;
    fcn_0040939c ();
    if (edi != 0) {
        *(esi) |= 0xffffffff;
    }
    eax = edi;
label_1:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404882 */
#include <stdint.h>
 
int32_t fcn_00404882 (void) {
    eax = 0;
    ebx = 0;
    edx = 0;
    esi = 0;
    edi = 0;
    void (*ecx)(uint32_t, uint32_t, uint32_t) (ebx, edi, esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409790 */
#include <stdint.h>
 
int32_t fcn_00409790 (void) {
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_4h;
    int32_t var_8h_2;
    int32_t var_10h;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(0x4183f0);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    eax = fcn_00409850 (0x400000);
    if (eax == 0) {
        void (*0x40982f)() ();
    }
    eax = *((ebp + 8));
    eax -= 0x400000;
    eax = fcn_00409740 (0x400000, eax);
    if (eax == 0) {
        void (*0x40982f)() ();
    }
    eax = *((eax + 0x24));
    eax >>= 0x1f;
    eax = ~eax;
    eax &= 1;
    *((ebp - 4)) = 0xfffffffe;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409850 */
#include <stdint.h>
 
int32_t fcn_00409850 (int32_t arg_8h) {
    eax = *((ebp + 8));
    ecx = 0x5a4d;
    if (*(eax) != cx) {
        eax = 0;
        return eax;
    }
    ecx = *((eax + 0x3c));
    ecx += eax;
    eax = 0;
    if (*(ecx) == 0x4550) {
        edx = 0x10b;
        al = (*((ecx + 0x18)) == dx) ? 1 : 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409740 */
#include <stdint.h>
 
int32_t fcn_00409740 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    edx = 0;
    ecx = *((eax + 0x3c));
    ecx += eax;
    eax = *((ecx + 0x14));
    ebx = *((ecx + 6));
    eax += 0x18;
    eax += ecx;
    if (ebx == 0) {
        goto label_0;
    }
    edi = *((ebp + 0xc));
    do {
        esi = *((eax + 0xc));
        if (edi >= esi) {
            ecx = *((eax + 8));
            ecx += esi;
            if (edi < ecx) {
                goto label_1;
            }
        }
        edx++;
        eax += 0x28;
    } while (edx < ebx);
label_0:
    eax = 0;
label_1:
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4048b2 */
#include <stdint.h>
 
void fcn_004048b2 (void) {
    RtlUnwind (ecx, 0x4048c6, edx, 0, edi, esi, ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x41011e */
#include <stdint.h>
 
void RtlUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4048cb */
#include <stdint.h>
 
void fcn_004048cb (int32_t arg_8h) {
    ebp = *((esp + 8));
    fcn_00404790 (*((esp + 0x14)), ecx, edx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404899 */
#include <stdint.h>
 
int32_t fcn_00404899 (void) {
    esi = ecx;
    eax = ecx;
    eax = fcn_004099a5 (1);
    eax = 0;
    ebx = 0;
    ecx = 0;
    edx = 0;
    edi = 0;
    return void (*esi)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4099a5 */
#include <stdint.h>
 
void fcn_004099a5 (int32_t arg_ch) {
    ebx = 0x418df0;
    ecx = *((esp + 0xc));
    *((ebx + 8)) = ecx;
    *((ebx + 4)) = eax;
    *((ebx + 0xc)) = ebp;
    ecx = eax;
    ecx = eax;
    ebx = eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4099c4 */
#include <stdint.h>
 
void fcn_004099c4 (void) {
    void (*eax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4099c7 */
#include <stdint.h>
 
int32_t fcn_004099c7 (int32_t arg_8h) {
    int32_t var_4h;
    fcn_00404590 (0x417920);
    edi = *((ebp + 8));
    eax = *((ebp + 8));
    eax >>= 5;
    esi = edi;
    esi &= 0x1f;
    esi <<= 6;
    esi += *((eax*4 + 0x4191d0));
    ebx = 0;
    if (*((esi + 8)) == ebx) {
        fcn_00409180 (0xa);
        *((ebp - 4)) = ebx;
        if (*((esi + 8)) == ebx) {
            fcn_00407e10 (esi + 0xc, 0xfa0, ebx);
            *((esi + 8))++;
        }
        *((ebp - 4)) = 0xfffffffe;
        fcn_00409a4c ();
    }
    eax = edi;
    eax >>= 5;
    edi &= 0x1f;
    edi <<= 6;
    eax = *((eax*4 + 0x4191d0));
    eax += 0xc;
    eax += edi;
    eax = EnterCriticalSection (eax);
    eax = 0;
    eax++;
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409a4c */
#include <stdint.h>
 
void fcn_00409a4c (void) {
    fcn_004092ea (0xa);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4049e1 */
#include <stdint.h>
 
uint32_t fcn_004049e1 (int32_t arg_8h) {
    edi = *((ebp + 8));
    eax = fcn_00409c84 (edi);
    if (eax != -1) {
        eax = *(0x4191d0);
        if (edi == 1) {
            if ((*((eax + 0x84)) & 1) != 0) {
                goto label_0;
            }
        }
        if (edi == 2) {
            if ((*((eax + 0x44)) & 1) == 0) {
                goto label_1;
            }
label_0:
            eax = fcn_00409c84 (2);
            esi = eax;
            eax = fcn_00409c84 (1);
            if (eax == esi) {
                goto label_2;
            }
        }
label_1:
        eax = fcn_00409c84 (edi);
        eax = CloseHandle (eax);
        if (eax == 0) {
            eax = GetLastError ();
            esi = eax;
        }
    } else {
label_2:
        esi = 0;
    }
    fcn_00409bfe (edi);
    ecx = edi;
    edi &= 0x1f;
    ecx >>= 5;
    edi <<= 6;
    ecx = *((ecx*4 + 0x4191d0));
    *((ecx + edi + 4)) = 0;
    if (esi != 0) {
        eax = fcn_00404005 (esi);
        eax |= 0xffffffff;
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4049b9 */
#include <stdint.h>
 
void fcn_004049b9 (void) {
    fcn_00409d6d (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409d6d */
#include <stdint.h>
 
int32_t fcn_00409d6d (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = *((ebp + 8));
    eax >>= 5;
    ecx &= 0x1f;
    ecx <<= 6;
    ecx += 0xc;
    eax = *((eax*4 + 0x4191d0));
    eax += ecx;
    LeaveCriticalSection (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409c84 */
#include <stdint.h>
 
uint32_t fcn_00409c84 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    if (ecx == 0xfffffffe) {
        eax = fcn_00403ff2 ();
        *(eax) = 0;
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (ecx >= 0) {
            if (ecx >= *(0x419ff8)) {
                goto label_0;
            }
            eax = ecx;
            ecx &= 0x1f;
            eax >>= 5;
            ecx <<= 6;
            eax = *((eax*4 + 0x4191d0));
            if ((*((eax + ecx + 4)) & 1) == 0) {
                goto label_0;
            }
            eax = *((eax + ecx));
            return eax;
        }
label_0:
        eax = fcn_00403ff2 ();
        *(eax) = 0;
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00402c77 ();
    }
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409bfe */
#include <stdint.h>
 
int32_t fcn_00409bfe (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax >= 0) {
        if (eax < *(0x419ff8)) {
            edi = eax;
            esi = eax;
            edi >>= 5;
            esi &= 0x1f;
            esi <<= 6;
            ecx = *((edi*4 + 0x4191d0));
            if ((*((esi + ecx + 4)) & 1) == 0) {
                goto label_0;
            }
            if (*((esi + ecx)) == -1) {
                goto label_0;
            }
            if (*(0x419308) == 1) {
                ecx = 0;
                eax -= ecx;
                if (eax != 0) {
                    eax--;
                    if (eax != 0) {
                        eax--;
                        if (eax != 0) {
                            goto label_1;
                        }
                        SetStdHandle (0xfffffffffffffff4);
                        SetStdHandle (0xfffffffffffffff5);
                    } else {
                    } else {
                    }
                }
                SetStdHandle (0xfffffffffffffff6, ecx);
            }
label_1:
            eax = *((edi*4 + 0x4191d0));
            *((esi + eax)) |= 0xffffffff;
            eax = 0;
        }
    } else {
label_0:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00403ff2 ();
        *(eax) = 0;
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404005 */
#include <stdint.h>
 
int32_t fcn_00404005 (int32_t arg_8h) {
    fcn_00403ff2 ();
    ecx = *((ebp + 8));
    *(eax) = ecx;
    eax = fcn_00404039 (ecx);
    esi = eax;
    fcn_00404026 ();
    *(eax) = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409d93 */
#include <stdint.h>
 
int32_t fcn_00409d93 (int32_t arg_8h) {
    int32_t var_20h;
    DWORD var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417940);
    esi = 0;
    *((ebp - 0x1c)) = esi;
    edi = *((ebp + 8));
    if (edi == 0xfffffffe) {
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (edi >= 0) {
            if (edi >= *(0x419ff8)) {
                goto label_0;
            }
            eax = edi;
            eax >>= 5;
            *((ebp - 0x20)) = eax;
            ebx = edi;
            ebx &= 0x1f;
            ebx <<= 6;
            eax = *((eax*4 + 0x4191d0));
            eax = *((ebx + eax + 4));
            eax &= 1;
            if (eax == 0) {
                goto label_0;
            }
            fcn_004099c7 (edi);
            *((ebp - 4)) = esi;
            eax = *((ebp - 0x20));
            eax = *((eax*4 + 0x4191d0));
            if ((*((ebx + eax + 4)) & 1) != 0) {
                eax = fcn_00409c84 (edi);
                eax = FlushFileBuffers (eax);
                if (eax == 0) {
                    eax = GetLastError ();
                    esi = eax;
                }
                *((ebp - 0x1c)) = esi;
                if (esi == 0) {
                    goto label_1;
                }
                fcn_00403ff2 ();
                *(eax) = esi;
            }
            fcn_00404026 ();
            *(eax) = 9;
            esi |= 0xffffffff;
            *((ebp - 0x1c)) = esi;
label_1:
            *((ebp - 4)) = 0xfffffffe;
            fcn_00409e5b ();
            eax = esi;
            goto label_2;
        }
label_0:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00402c77 ();
    }
    eax |= 0xffffffff;
label_2:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404aab */
#include <stdint.h>
 
uint32_t fcn_00404aab (int32_t arg_8h) {
    esi = *((ebp + 8));
    if (esi == 0) {
        fcn_00404b5e (esi);
    } else {
        eax = fcn_00404af1 (esi);
        if (eax != 0) {
            eax |= 0xffffffff;
        } else {
            if ((*((esi + 0xc)) & 0x4000) != 0) {
                eax = fcn_004048e2 (esi);
                eax = fcn_00409d93 (eax);
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
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404c06 */
#include <stdint.h>
 
int32_t fcn_00404c06 (void) {
    eax = *(0x41b000);
    fcn_004041c3 (esi, *((eax + esi*4)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404c39 */
#include <stdint.h>
 
void fcn_00404c39 (void) {
    fcn_004092ea (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404d31 */
#include <stdint.h>
 
uint32_t fcn_00404d31 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    esi = *((ebp + 8));
    eax = fcn_00409c84 (esi);
    edi = eax;
    if (edi == -1) {
        fcn_00404026 ();
        *(eax) = 9;
        eax |= edi;
    } else {
        eax = ebp - 8;
        eax = SetFilePointerEx (edi, 0, 0, eax, 1, ebx);
        if (eax != 0) {
            eax = *((ebp + 0xc));
            edx:eax = (int64_t) eax;
            eax = void (*ebx)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*) (edi, eax, edx, ebp - 0x10, *((ebp + 0x10)));
            if (eax != 0) {
                goto label_0;
            }
        }
        eax = GetLastError ();
        fcn_00404005 (eax);
        goto label_1;
label_0:
        if (*((ebp - 0xc)) != 0) {
            void (*ebx)(uint32_t, uint32_t*, uint32_t*, uint32_t, uint32_t) (edi, *((ebp - 8)), *((ebp - 4)), 0, 0);
            fcn_00404026 ();
            *(eax) = 0x16;
label_1:
            eax |= 0xffffffff;
        } else {
            eax = esi;
            esi &= 0x1f;
            eax >>= 5;
            esi <<= 6;
            eax = *((eax*4 + 0x4191d0));
            *((eax + esi + 4)) &= 0xfd;
            eax = *((ebp - 0x10));
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404d09 */
#include <stdint.h>
 
void fcn_00404d09 (void) {
    fcn_00409d6d (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404ed4 */
#include <stdint.h>
 
uint32_t fcn_00404ed4 (int32_t arg_8h, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, int32_t arg_14h) {
    DWORD dwMoveMethod;
    DWORD var_4h;
    esi = *((ebp + 8));
    eax = fcn_00409c84 (esi);
    edi |= 0xffffffff;
    if (eax != edi) {
        goto label_0;
    }
    fcn_00404026 ();
    *(eax) = 9;
    do {
        eax = edi;
        edx = edi;
        goto label_1;
label_0:
        eax = SetFilePointerEx (eax, *((ebp + 0xc)), *((ebp + 0x10)), ebp - 8, *((ebp + 0x14)));
        if (eax != 0) {
            goto label_2;
        }
        eax = GetLastError ();
        fcn_00404005 (eax);
    } while (1);
label_2:
    eax = esi;
    esi &= 0x1f;
    eax >>= 5;
    esi <<= 6;
    eax = *((eax*4 + 0x4191d0));
    *((eax + esi + 4)) &= 0xfd;
    eax = *((ebp - 8));
    edx = *((ebp - 4));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404eaa */
#include <stdint.h>
 
void fcn_00404eaa (void) {
    fcn_00409d6d (edi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x405077 */
#include <stdint.h>
 
void fcn_00405077 (void) {
    fcn_00409d6d (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409fb4 */
#include <stdint.h>
 
int32_t fcn_00409fb4 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    if (ecx == 0xfffffffe) {
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (ecx >= 0) {
            if (ecx >= *(0x419ff8)) {
                goto label_0;
            }
            eax = ecx;
            ecx &= 0x1f;
            eax >>= 5;
            ecx <<= 6;
            eax = *((eax*4 + 0x4191d0));
            eax = *((eax + ecx + 4));
            eax &= 0x40;
            return eax;
        }
label_0:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00402c77 ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x405adb */
#include <stdint.h>
 
void fcn_00405adb (void) {
    fcn_004092ea (0xb);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404114 */
#include <stdint.h>
 
int32_t fcn_00404114 (void) {
    eax = 0x418170;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a008 */
#include <stdint.h>
 
uint32_t fcn_0040a008 (int32_t arg_8h) {
    *(0x4191cc)++;
    esi = 0x1000;
    eax = fcn_00408fa3 (esi);
    ecx = *((ebp + 8));
    *((ecx + 8)) = eax;
    if (eax != 0) {
        *((ecx + 0xc)) |= 8;
        *((ecx + 0x18)) = esi;
    } else {
        *((ecx + 0xc)) |= 4;
        eax = ecx + 0x14;
        *((ecx + 8)) = eax;
        *((ecx + 0x18)) = 2;
    }
    eax = *((ecx + 8));
    *((ecx + 4)) = 0;
    *(ecx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406373 */
#include <stdint.h>
 
int32_t fcn_00406373 (int32_t arg_8h, LPVOID arg_ch, DWORD nNumberOfBytesToWrite) {
    UINT CodePage;
    uint32_t var_1aech;
    LPDWORD * lpMode;
    int32_t var_1ae1h;
    LPDWORD * var_1ae0h;
    LPCVOID var_1adch;
    LPCVOID var_1ad8h;
    int32_t var_1ad4h;
    LPCVOID var_1ad0h;
    LPCWCH lpWideCharStr;
    LPDWORD * lpNumberOfBytesWritten;
    uint32_t var_1ac4h;
    DWORD * var_1ac0h;
    LPCWCH var_1abch;
    LPCWCH var_1ab8h;
    LPCVOID * var_140ch;
    LPCVOID * var_d64h;
    LPCVOID * lpBuffer;
    int32_t var_bh;
    int32_t var_4h;
    eax = 0x1af0;
    fcn_00404f60 (ebp);
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    *((ebp - 0x1abc)) = 0;
    eax = *((ebp + 8));
    ecx = *((ebp + 0xc));
    esi = 0;
    *((ebp - 0x1ac8)) = eax;
    edi = 0;
    *((ebp - 0x1ad0)) = ecx;
    *((ebp - 0x1ac0)) = esi;
    if (*((ebp + 0x10)) == esi) {
        eax = 0;
        goto label_5;
    }
    if (ecx == 0) {
        eax = fcn_00403ff2 ();
        *(eax) &= esi;
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
        goto label_5;
    }
    edx = eax;
    ecx = eax;
    edx >>= 5;
    ecx &= 0x1f;
    ecx <<= 6;
    *((ebp - 0x1ad8)) = edx;
    edx = *((edx*4 + 0x4191d0));
    *((ebp - 0x1adc)) = ecx;
    bl = *((ecx + edx + 0x24));
    bl += bl;
    bl >>= 1;
    if (bl != 2) {
        if (bl != 1) {
            goto label_6;
        }
    }
    eax = *((ebp + 0x10));
    eax = ~eax;
    if ((al & 1) == 0) {
        eax = fcn_00403ff2 ();
        *(eax) &= esi;
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00402c77 ();
        goto label_7;
    }
    eax = *((ebp - 0x1ac8));
label_6:
    if ((*((ecx + edx + 4)) & 0x20) != 0) {
        fcn_00404ed4 (eax, 0, 0, 2);
    }
    eax = fcn_00409fb4 (*((ebp - 0x1ac8)));
    if (eax == 0) {
        goto label_8;
    }
    eax = *((ebp - 0x1ad8));
    ecx = *((ebp - 0x1adc));
    eax = *((eax*4 + 0x4191d0));
    if ((*((ecx + eax + 4)) & 0x80) == 0) {
        goto label_8;
    }
    fcn_004076ff ();
    ecx = 0;
    eax = *((eax + 0x6c));
    eax = *((ebp - 0x1ad8));
    cl = (*((eax + 0xa8)) == ecx) ? 1 : 0;
    *((ebp - 0x1ac4)) = ecx;
    ecx = *((ebp - 0x1adc));
    eax = *((eax*4 + 0x4191d0));
    eax = GetConsoleMode (*((ecx + eax)), ebp - 0x1ae8);
    if (eax == 0) {
        goto label_8;
    }
    if (*((ebp - 0x1ac4)) != esi) {
        if (bl == 0) {
            goto label_8;
        }
    }
    eax = GetConsoleCP ();
    edx = *((ebp - 0x1ad0));
    ecx = 0;
    *((ebp - 0x1ac8)) &= ecx;
    *((ebp - 0x1af0)) = eax;
    *((ebp - 0x1acc)) = ecx;
    *((ebp - 0x1ad4)) = edx;
    if (*((ebp + 0x10)) <= ecx) {
        goto label_9;
    }
    eax = *((ebp - 0x1ad4));
    edx = 0;
    *((ebp - 0x1ac0)) = edx;
    *((ebp - 0x1aec)) = 0xa;
    do {
        *((ebp - 0x1ac4)) &= edi;
        if (bl == 0) {
            dl = *(eax);
            eax = 0;
            ecx = *((ebp - 0x1adc));
            al = (dl == 0xa) ? 1 : 0;
            *((ebp - 0x1ae8)) = eax;
            eax = *((ebp - 0x1ad8));
            eax = *((eax*4 + 0x4191d0));
            *((ebp - 0x1ac4)) = eax;
            if (*((ecx + eax + 0x38)) != edi) {
                al = *((ecx + eax + 0x34));
                *((ebp - 0xc)) = al;
                eax = *((ebp - 0x1ac4));
                *((ebp - 0xb)) = dl;
                *((ecx + eax + 0x38)) &= edi;
                eax = ebp - 0xc;
            } else {
                eax = (int32_t) dl;
                eax = fcn_00408e3d (eax);
                if (eax != 0) {
                    eax = *((ebp - 0x1ad0));
                    edx = *((ebp - 0x1ad4));
                    eax -= edx;
                    eax += *((ebp + 0x10));
                    if (eax <= 1) {
                        goto label_10;
                    }
                    eax = fcn_00408f43 (ebp - 0x1acc, edx, 2);
                    if (eax == -1) {
                        goto label_2;
                    }
                    eax = *((ebp - 0x1ad4));
                    eax++;
                    *((ebp - 0x1ac0))++;
                    goto label_11;
                }
            }
            eax = fcn_00408f43 (ebp - 0x1acc, *((ebp - 0x1ad4)), 1);
            if (eax == -1) {
                goto label_2;
            }
            eax = *((ebp - 0x1ad4));
label_11:
            ecx = 0;
            eax++;
            *((ebp - 0x1ac0))++;
            *((ebp - 0x1ad4)) = eax;
            eax = WideCharToMultiByte (*((ebp - 0x1af0)), ecx, ebp - 0x1acc, 1, ebp - 0xc, 5, ecx, ecx);
            *((ebp - 0x1ac4)) = eax;
            if (eax == 0) {
                goto label_2;
            }
            ecx = *((ebp - 0x1adc));
            eax = *((ebp - 0x1ad8));
            eax = *((eax*4 + 0x4191d0));
            eax = WriteFile (*((ecx + eax)), ebp - 0xc, eax, ebp - 0x1ac8, 0);
            if (eax == 0) {
                goto label_0;
            }
            esi = *((ebp - 0x1ac0));
            ecx = *((ebp - 0x1abc));
            esi += ecx;
            eax = *((ebp - 0x1ac4));
            if (*((ebp - 0x1ac8)) < eax) {
                goto label_12;
            }
            if (*((ebp - 0x1ae8)) != edi) {
                ecx = *((ebp - 0x1adc));
                eax = ebp - 0x1ac8;
                eax = ebp - 0xc;
                *((ebp - 0xc)) = 0xd;
                eax = *((ebp - 0x1ad8));
                eax = *((eax*4 + 0x4191d0));
                eax = WriteFile (*((ecx + eax)), eax, 1, eax, 0);
                if (eax == 0) {
                    goto label_0;
                }
                if (*((ebp - 0x1ac8)) < 1) {
                    goto label_2;
                }
                *((ebp - 0x1abc))++;
                esi++;
            }
            ecx = *((ebp - 0x1acc));
        } else {
            if (bl != 1) {
                if (bl != 2) {
                    goto label_13;
                }
            }
            ecx = *(eax);
            edx = 0;
            *((ebp - 0x1acc)) = ecx;
            dl = (cx == *((ebp - 0x1aec))) ? 1 : 0;
            eax += 2;
            *((ebp - 0x1ac4)) = edx;
            edx = *((ebp - 0x1ac0));
            edx += 2;
            *((ebp - 0x1ad4)) = eax;
            *((ebp - 0x1ac0)) = edx;
label_13:
            if (bl != 1) {
                if (bl != 2) {
                    goto label_14;
                }
            }
            ax = fcn_0040a1c7 (ecx);
            ecx = *((ebp - 0x1acc));
            if (ax != cx) {
                goto label_0;
            }
            esi += 2;
            if (*((ebp - 0x1ac4)) == edi) {
                goto label_15;
            }
            eax = 0xd;
            *((ebp - 0x1acc)) = eax;
            ax = fcn_0040a1c7 (eax);
            ecx = *((ebp - 0x1acc));
            if (ax != cx) {
                goto label_0;
            }
            esi++;
            *((ebp - 0x1abc))++;
        }
label_15:
        edx = *((ebp - 0x1ac0));
        eax = *((ebp - 0x1ad4));
label_14:
    } while (edx < *((ebp + 0x10)));
    goto label_2;
label_10:
    ebx = *((ebp - 0x1ad8));
    esi++;
    al = *(edx);
    edx = *((ebp - 0x1adc));
    ecx = *((ebx*4 + 0x4191d0));
    *((edx + ecx + 0x34)) = al;
    eax = *((ebx*4 + 0x4191d0));
    *((edx + eax + 0x38)) = 1;
    goto label_2;
label_0:
    eax = GetLastError ();
    edi = eax;
    goto label_2;
label_8:
    eax = *((ebp - 0x1ad8));
    ecx = *((eax*4 + 0x4191d0));
    eax = *((ebp - 0x1adc));
    if ((*((eax + ecx + 4)) & 0x80) == 0) {
        goto label_16;
    }
    edx = *((ebp - 0x1ad0));
    edi = 0;
    *((ebp - 0x1acc)) = edi;
    if (bl != 0) {
        goto label_17;
    }
    ebx = *((ebp + 0x10));
    *((ebp - 0x1ac8)) = edx;
    if (ebx == 0) {
        goto label_9;
    }
label_1:
    ecx = 0;
    edi = ebp - 0x140c;
    eax = edx;
    *((ebp - 0x1ac4)) = ecx;
    eax -= *((ebp - 0x1ad0));
    do {
        if (eax >= ebx) {
            goto label_18;
        }
        cl = *(edx);
        edx++;
        eax++;
        *((ebp - 0x1ae1)) = cl;
        *((ebp - 0x1ac8)) = edx;
        ecx = *((ebp - 0x1ac4));
        if (cl == 0xa) {
            *((ebp - 0x1abc))++;
            *(edi) = 0xd;
            edi++;
            ecx++;
        }
        dl = *((ebp - 0x1ae1));
        *(edi) = dl;
        edi++;
        edx = *((ebp - 0x1ac8));
        ecx++;
        *((ebp - 0x1ac4)) = ecx;
    } while (ecx < 0x13ff);
label_18:
    ecx = *((ebp - 0x1adc));
    eax = ebp - 0x140c;
    edi -= eax;
    eax = ebp - 0x1ae0;
    eax = *((ebp - 0x1ad8));
    eax = *((eax*4 + 0x4191d0));
    eax = WriteFile (*((ecx + eax)), ebp - 0x140c, edi, eax, 0);
    if (eax == 0) {
        goto label_0;
    }
    esi += *((ebp - 0x1ae0));
    if (*((ebp - 0x1ae0)) < edi) {
        goto label_19;
    }
    edx = *((ebp - 0x1ac8));
    eax = *((ebp - 0x1ac8));
    eax -= *((ebp - 0x1ad0));
    if (eax < ebx) {
        goto label_1;
    }
label_19:
    edi = *((ebp - 0x1acc));
label_2:
    ecx = *((ebp - 0x1abc));
label_12:
    if (esi != 0) {
        goto label_20;
    }
    if (edi == 0) {
        goto label_21;
    }
    ebx = 5;
    if (edi != ebx) {
        goto label_22;
    }
    fcn_00404026 ();
    *(eax) = 9;
    fcn_00403ff2 ();
    *(eax) = ebx;
    goto label_7;
label_17:
    ecx = edx;
    if (bl != 2) {
        goto label_23;
    }
    if (*((ebp + 0x10)) <= esi) {
        goto label_9;
    }
    *((ebp - 0x1aec)) = 0xa;
label_3:
    *((ebp - 0x1ae8)) = 0;
    ebx = ebp - 0x140c;
    eax = ecx;
    eax -= edx;
    edx = *((ebp - 0x1ae8));
    esi = 0xd;
    do {
        if (eax >= *((ebp + 0x10))) {
            goto label_24;
        }
        edi = *(ecx);
        eax += 2;
        ecx += 2;
        if (di == *((ebp - 0x1aec))) {
            *((ebp - 0x1abc)) += 2;
            *(ebx) = si;
            ebx += 2;
            edx += 2;
        }
        *(ebx) = di;
        edx += 2;
        ebx += 2;
    } while (edx < 0x13fe);
label_24:
    eax = ebp - 0x140c;
    *((ebp - 0x1ac4)) = ecx;
    ecx = *((ebp - 0x1adc));
    ebx -= eax;
    eax = *((ebp - 0x1ad8));
    eax = *((eax*4 + 0x4191d0));
    eax = WriteFile (*((ecx + eax)), ebp - 0x140c, ebx, ebp - 0x1ae0, 0);
    esi = *((ebp - 0x1ac0));
    edi = *((ebp - 0x1acc));
    if (eax == 0) {
        goto label_0;
    }
    esi += *((ebp - 0x1ae0));
    *((ebp - 0x1ac0)) = esi;
    if (*((ebp - 0x1ae0)) < ebx) {
        goto label_2;
    }
    ecx = *((ebp - 0x1ac4));
    eax = *((ebp - 0x1ac4));
    edx = *((ebp - 0x1ad0));
    eax -= edx;
    if (eax < *((ebp + 0x10))) {
        goto label_3;
    }
    goto label_2;
label_23:
    ebx = *((ebp + 0x10));
    *((ebp - 0x1ac8)) = ecx;
    if (ebx == 0) {
        goto label_9;
    }
    *((ebp - 0x1aec)) = 0xa;
label_4:
    *((ebp - 0x1ae8)) = 0;
    eax = ebp - 0x1ab8;
    edi = *((ebp - 0x1ac8));
    ecx -= edx;
    edx = *((ebp - 0x1ae8));
    do {
        if (ecx >= ebx) {
            goto label_25;
        }
        esi = *(edi);
        ecx += 2;
        edi += 2;
        *((ebp - 0x1ac8)) = edi;
        if (si == *((ebp - 0x1aec))) {
            edi = 0xd;
            *(eax) = di;
            eax += 2;
            edi = *((ebp - 0x1ac8));
            edx += 2;
        }
        *(eax) = si;
        edx += 2;
        eax += 2;
    } while (edx < 0x6a8);
label_25:
    esi = 0;
    ecx = ebp - 0xd64;
    ecx = ebp - 0x1ab8;
    eax -= ecx;
    edx:eax = (int64_t) eax;
    eax -= edx;
    eax >>= 1;
    eax = ecx;
    eax = WideCharToMultiByte (0xfde9, esi, eax, eax, ecx, 0xd55, esi, esi);
    esi = *((ebp - 0x1ac0));
    edi = *((ebp - 0x1acc));
    *((ebp - 0x1ac4)) = eax;
    if (eax == 0) {
        goto label_0;
    }
    ecx = 0;
    *((ebp - 0x1ac0)) = ecx;
    do {
        eax -= ecx;
        eax = ebp - 0xd64;
        eax += ecx;
        ecx = *((ebp - 0x1adc));
        eax = *((ebp - 0x1ad8));
        eax = *((eax*4 + 0x4191d0));
        eax = WriteFile (*((ecx + eax)), eax, eax, ebp - 0x1ae0, 0);
        if (eax == 0) {
            goto label_26;
        }
        ecx = *((ebp - 0x1ac0));
        ecx += *((ebp - 0x1ae0));
        eax = *((ebp - 0x1ac4));
        *((ebp - 0x1ac0)) = ecx;
    } while (eax > ecx);
    goto label_27;
label_26:
    eax = GetLastError ();
    ecx = *((ebp - 0x1ac0));
    edi = eax;
    eax = *((ebp - 0x1ac4));
    *((ebp - 0x1acc)) = edi;
label_27:
    if (eax > ecx) {
        goto label_2;
    }
    ecx = *((ebp - 0x1ac8));
    esi = *((ebp - 0x1ac8));
    edx = *((ebp - 0x1ad0));
    esi -= edx;
    *((ebp - 0x1ac0)) = esi;
    if (esi < ebx) {
        goto label_4;
    }
    goto label_2;
label_16:
    eax = WriteFile (*((eax + ecx)), *((ebp - 0x1ad0)), *((ebp + 0x10)), ebp - 0x1ae0, 0);
    if (eax == 0) {
        goto label_0;
    }
    esi = *((ebp - 0x1ae0));
    edi = 0;
    goto label_2;
label_22:
    fcn_00404005 (edi);
    goto label_7;
label_21:
    edx = *((ebp - 0x1ad0));
label_9:
    eax = *((ebp - 0x1ad8));
    ecx = *((ebp - 0x1adc));
    eax = *((eax*4 + 0x4191d0));
    if ((*((ecx + eax + 4)) & 0x40) != 0) {
        if (*(edx) == 0x1a) {
            eax = 0;
        }
    } else {
        fcn_00404026 ();
        *(eax) = 0x1c;
        eax = fcn_00403ff2 ();
        *(eax) = 0;
label_7:
        eax |= 0xffffffff;
        goto label_28;
label_20:
        esi -= ecx;
        eax = esi;
    }
label_28:
label_5:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40634b */
#include <stdint.h>
 
void fcn_0040634b (void) {
    fcn_00409d6d (esi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408f43 */
#include <stdint.h>
 
void fcn_00408f43 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    fcn_00408e4e (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a1c7 */
#include <stdint.h>
 
int32_t fcn_0040a1c7 (VOID * lpBuffer) {
    LPDWORD lpNumberOfCharsWritten;
    eax = *(0x418e70);
    if (eax == 0xfffffffe) {
        fcn_0040bf8b ();
        eax = *(0x418e70);
    }
    while (eax == 0) {
        eax = 0xffff;
        goto label_0;
        eax = WriteConsoleW (eax, ebp + 8, 1, ebp - 4, 0);
    }
    ax = *((ebp + 8));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407e3e */
#include <stdint.h>
 
int32_t fcn_00407e3e (void) {
    int32_t var_4h;
    esi = *(0x418544);
    if (esi < 0) {
        eax = *(0x419fd4);
        esi = 0;
        eax ^= *(0x4183f0);
        *((ebp - 4)) = esi;
        if (esi != 0) {
            eax = void (*eax)(uint32_t, uint32_t) (ebp - 4, esi);
            if (eax != 0x7a) {
                goto label_0;
            }
            esi++;
        }
label_0:
        *(0x418544) = esi;
    }
    eax = 0;
    al = (esi > 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4090c4 */
#include <stdint.h>
 
uint32_t fcn_004090c4 (void) {
    esi = 0;
    do {
        eax = EncodePointer (*((esi + 0x418c9c)), esi);
        *((esi + 0x418c9c)) = eax;
        esi += 4;
    } while (esi < 0x28);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406e47 */
#include <stdint.h>
 
int32_t fcn_00406e47 (int32_t arg_8h, uint32_t arg_ch) {
    esi = *((ebp + 8));
    eax = 0;
    while (esi < *((ebp + 0xc))) {
        if (eax != 0) {
            goto label_0;
        }
        ecx = *(esi);
        if (ecx != 0) {
            void (*ecx)() ();
        }
        esi += 4;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a335 */
#include <stdint.h>
 
uint32_t fcn_0040a335 (int32_t arg_8h) {
    eax = fcn_0040a239 (*((ebp + 8)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a239 */
#include <stdint.h>
 
uint32_t fcn_0040a239 (int32_t arg_8h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417960);
    *((ebp - 0x1c)) = 0;
    fcn_00406e69 ();
    *((ebp - 4)) = 0;
    eax = fcn_0040a27d (*((ebp + 8)));
    esi = eax;
    *((ebp - 0x1c)) = esi;
    *((ebp - 4)) = 0xfffffffe;
    fcn_0040a277 ();
    eax = esi;
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406e69 */
#include <stdint.h>
 
void fcn_00406e69 (void) {
    fcn_00409180 (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a27d */
#include <stdint.h>
 
uint32_t fcn_0040a27d (PVOID Ptr) {
    int32_t var_4h;
    eax = DecodePointer (*(0x419fec), edi, esi, ebx, ecx);
    *((ebp - 4)) = eax;
    eax = DecodePointer (*(0x419fe8));
    ebx = eax;
    eax = *((ebp - 4));
    if (ebx >= eax) {
        edi = ebx;
        edi -= eax;
        ecx = edi + 4;
        if (ecx >= 4) {
            eax = fcn_0040bfaa (eax);
            esi = eax;
            eax = edi + 4;
            if (esi < eax) {
                eax = 0x800;
                if (esi < eax) {
                    eax = esi;
                }
                ebx = *((ebp - 4));
                eax += esi;
                if (eax >= esi) {
                    eax = fcn_00408fea (ebx, eax);
                    if (eax != 0) {
                        goto label_0;
                    }
                }
                eax = esi + 0x10;
                if (eax < esi) {
                    goto label_1;
                }
                eax = fcn_00408fea (ebx, eax);
                if (eax == 0) {
                    goto label_1;
                }
label_0:
                edi >>= 2;
                ebx = eax + edi*4;
                eax = EncodePointer (eax);
                *(0x419fec) = eax;
            }
            eax = EncodePointer (*((ebp + 8)));
            ecx = ebx + 4;
            *(ebx) = eax;
            eax = EncodePointer (ecx);
            *(0x419fe8) = eax;
            eax = *((ebp + 8));
        }
    } else {
label_1:
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a277 */
#include <stdint.h>
 
void fcn_0040a277 (void) {
    fcn_00406e72 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406e72 */
#include <stdint.h>
 
void fcn_00406e72 (void) {
    fcn_004092ea (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406e11 */
#include <stdint.h>
 
int32_t fcn_00406e11 (int32_t arg_8h, uint32_t arg_ch) {
    eax = *((ebp + 0xc));
    esi = *((ebp + 8));
    ebx = 0;
    eax -= esi;
    eax += 3;
    eax >>= 2;
    edi -= edi;
    edi = ~edi;
    edi &= eax;
    if (edi <= 0) {
        goto label_0;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi += 4;
        ebx++;
    } while (ebx < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406bfe */
#include <stdint.h>
 
int32_t fcn_00406bfe (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x4192d0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x402c3f */
#include <stdint.h>
 
int32_t fcn_00402c3f (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x4191c8) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a38f */
#include <stdint.h>
 
int32_t fcn_0040a38f (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x419ef4) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a3a9 */
#include <stdint.h>
 
int32_t fcn_0040a3a9 (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x419ef8) = eax;
    *(0x419efc) = eax;
    *(0x419f00) = eax;
    *(0x419f04) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a37e */
#include <stdint.h>
 
uint32_t fcn_0040a37e (void) {
    eax = EncodePointer (fcn.0040a34a);
    *(0x419ef0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a5ba */
#include <stdint.h>
 
int32_t fcn_0040a5ba (int32_t arg_8h) {
    eax = *((ebp + 8));
    *(0x419f0c) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407be9 */
#include <stdint.h>
 
int32_t fcn_00407be9 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax >= 0) {
        if (eax > 2) {
            if (eax != 3) {
                goto label_0;
            }
            ecx = *(0x419a48);
        } else {
            ecx = *(0x419a48);
            *(0x419a48) = eax;
        }
        eax = ecx;
        return eax;
    }
label_0:
    fcn_00404026 ();
    *(eax) = 0x16;
    eax = fcn_00402c77 ();
    eax |= 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406ff7 */
#include <stdint.h>
 
int32_t fcn_00406ff7 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = 0;
    do {
        if (ecx == *((eax*8 + 0x411198))) {
            goto label_0;
        }
        eax++;
    } while (eax < 0x17);
    eax = 0;
    return eax;
label_0:
    eax = *((eax*8 + 0x41119c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a633 */
#include <stdint.h>
 
int32_t fcn_0040a633 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 8));
    if (esi != 0) {
        edx = *((ebp + 0xc));
        if (edx == 0) {
            goto label_2;
        }
        ecx = *((ebp + 0x10));
        if (ecx != 0) {
            goto label_3;
        }
        eax = 0;
        *(esi) = ax;
    }
label_2:
    fcn_00404026 ();
label_1:
    esi = 0x16;
    *(eax) = esi;
    fcn_00402c77 ();
    eax = esi;
label_0:
    return eax;
label_3:
    edi = esi;
    edi -= ecx;
    do {
        eax = *(ecx);
        *((edi + ecx)) = ax;
        ecx = ecx + 2;
        if (ax == 0) {
            goto label_4;
        }
        edx--;
    } while (edx != 0);
label_4:
    eax = 0;
    if (edx != 0) {
        goto label_0;
    }
    *(esi) = ax;
    fcn_00404026 ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a68f */
#include <stdint.h>
 
int32_t fcn_0040a68f (int32_t arg_8h) {
    eax = *((ebp + 8));
    do {
        cx = *(eax);
        eax += 2;
    } while (cx != 0);
    eax -= *((ebp + 8));
    eax >>= 1;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a6a8 */
#include <stdint.h>
 
int32_t fcn_0040a6a8 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    edx = *((ebp + 0x14));
    ecx = *((ebp + 8));
    if (edx != 0) {
        goto label_3;
    }
    if (ecx != 0) {
        goto label_4;
    }
    if (*((ebp + 0xc)) != ecx) {
        goto label_5;
    }
    do {
label_0:
        eax = 0;
        goto label_1;
label_3:
        if (ecx == 0) {
            goto label_5;
        }
label_4:
        eax = *((ebp + 0xc));
        if (eax == 0) {
            goto label_5;
        }
        if (edx != 0) {
            goto label_6;
        }
        eax = 0;
        *(ecx) = ax;
    } while (1);
label_6:
    esi = *((ebp + 0x10));
    if (esi == 0) {
        eax = 0;
        *(ecx) = ax;
label_5:
        fcn_00404026 ();
label_2:
        esi = 0x16;
        *(eax) = esi;
        fcn_00402c77 ();
        eax = esi;
label_1:
        return eax;
    }
    ebx = ecx;
    edi = eax;
    if (edx != -1) {
        goto label_7;
    }
    ebx -= esi;
    do {
        eax = *(esi);
        *((ebx + esi)) = ax;
        esi = esi + 2;
        if (ax == 0) {
            goto label_8;
        }
        edi--;
    } while (edi != 0);
    goto label_8;
label_7:
    esi -= ecx;
    do {
        eax = *((esi + ebx));
        *(ebx) = ax;
        ebx = ebx + 2;
        if (ax == 0) {
            goto label_9;
        }
        edi--;
        if (edi == 0) {
            goto label_9;
        }
        edx--;
    } while (edx != 0);
label_9:
    if (edx == 0) {
        eax = 0;
        *(ebx) = ax;
    }
label_8:
    ebx = edi;
    if (edi != 0) {
        goto label_0;
    }
    if (edx == -1) {
        eax = *((ebp + 0xc));
        edx = 0;
        *((ecx + eax*2 - 2)) = dx;
        eax = 0x50;
        goto label_1;
    }
    eax = 0;
    *(ecx) = ax;
    fcn_00404026 ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a5c7 */
#include <stdint.h>
 
int32_t fcn_0040a5c7 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    edi = *((ebp + 8));
    if (edi != 0) {
        ecx = *((ebp + 0xc));
        if (ecx == 0) {
            goto label_3;
        }
        edx = *((ebp + 0x10));
        if (edx != 0) {
            goto label_4;
        }
label_0:
        eax = 0;
        *(edi) = ax;
    }
label_3:
    fcn_00404026 ();
label_2:
    esi = 0x16;
    *(eax) = esi;
    fcn_00402c77 ();
    eax = esi;
label_1:
    return eax;
label_4:
    esi = edi;
    do {
        if (*(esi) == 0) {
            goto label_5;
        }
        esi += 2;
        ecx--;
    } while (ecx != 0);
label_5:
    if (ecx == 0) {
        goto label_0;
    }
    esi -= edx;
    do {
        eax = *(edx);
        *((esi + edx)) = ax;
        edx = edx + 2;
        if (ax == 0) {
            goto label_6;
        }
        ecx--;
    } while (ecx != 0);
label_6:
    eax = 0;
    if (ecx != 0) {
        goto label_1;
    }
    *(edi) = ax;
    fcn_00404026 ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a766 */
#include <stdint.h>
 
int32_t fcn_0040a766 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x1c)) = eax;
    esi = 0;
    eax = *((ebp + 0xc));
    *((ebp - 0x20)) = eax;
    eax = EncodePointer (esi, edi, esi, ebx);
    edi = eax;
    *((ebp - 0x18)) = edi;
    eax = fcn_00407e3e ();
    *((ebp - 0x14)) = eax;
    if (*(0x419f18) == esi) {
        eax = LoadLibraryExW (0x412324, esi, 0x800);
        edi = eax;
        if (edi == 0) {
            eax = GetLastError ();
            if (eax != 0x57) {
                goto label_0;
            }
            eax = LoadLibraryExW (0x412324, esi, esi);
            edi = eax;
            if (edi == 0) {
                goto label_0;
            }
        }
        eax = GetProcAddress (edi, "MessageBoxW");
        if (eax == 0) {
            goto label_0;
        }
        eax = void (*ebx)(uint32_t) (eax);
        *(0x419f18) = eax;
        eax = GetProcAddress (edi, "GetActiveWindow");
        eax = void (*ebx)(uint32_t) (eax);
        *(0x419f1c) = eax;
        eax = GetProcAddress (edi, "GetLastActivePopup");
        eax = void (*ebx)(uint32_t) (eax);
        *(0x419f20) = eax;
        eax = GetProcAddress (edi, "GetUserObjectInformationW");
        eax = void (*ebx)(uint32_t) (eax);
        *(0x419f28) = eax;
        if (eax != 0) {
            eax = GetProcAddress (edi, "GetProcessWindowStation");
            eax = void (*ebx)(uint32_t) (eax);
            *(0x419f24) = eax;
        }
        edi = *((ebp - 0x18));
    }
    eax = IsDebuggerPresent ();
    if (eax == 0) {
        goto label_1;
    }
    eax = *((ebp - 0x1c));
    if (eax != 0) {
        OutputDebugStringW (eax);
    }
    if (*((ebp - 0x14)) == esi) {
        goto label_2;
    }
    do {
        eax = 4;
        goto label_3;
label_1:
        if (*((ebp - 0x14)) == esi) {
            goto label_2;
        }
        DecodePointer (*(0x419f18));
    } while (1);
label_2:
    eax = *(0x419f24);
    ebx = *(sym.imp.KERNEL32.dll_DecodePointer);
    if (eax != edi) {
        if (*(0x419f28) != edi) {
            eax = void (*ebx)(uint32_t) (eax);
            *((ebp - 0x14)) = eax;
            eax = void (*ebx)(uint32_t*) (*(0x419f28));
            ecx = *((ebp - 0x14));
            *((ebp - 0x18)) = eax;
            if (ecx == 0) {
                goto label_4;
            }
            if (eax == 0) {
                goto label_4;
            }
            eax = void (*ecx)() ();
            if (eax != 0) {
                eax = uint32_t (*ebp - 0x18)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (eax, 1, ebp - 0x10, 0xc, ebp - 0x24);
                if (eax == 0) {
                    goto label_5;
                }
                if ((*((ebp - 8)) & 1) != 0) {
                    goto label_4;
                }
            }
label_5:
            edi = *((ebp + 0x10));
            edi |= 0x200000;
        }
    } else {
label_4:
        eax = *(0x419f1c);
        if (eax != edi) {
            eax = void (*ebx)(uint32_t) (eax);
            if (eax == 0) {
                goto label_6;
            }
            eax = void (*eax)() ();
            esi = eax;
            if (esi == 0) {
                goto label_6;
            }
            eax = *(0x419f20);
            if (eax == edi) {
                goto label_6;
            }
            eax = void (*ebx)(uint32_t) (eax);
            if (eax == 0) {
                goto label_6;
            }
            eax = void (*eax)(uint32_t) (esi);
            esi = eax;
        }
label_6:
        edi = *((ebp + 0x10));
    }
    eax = void (*ebx)(uint32_t*) (*(0x419f18));
    if (eax != 0) {
        eax = void (*eax)(uint32_t, uint32_t*, uint32_t*, uint32_t) (esi, *((ebp - 0x1c)), *((ebp - 0x20)), edi);
    } else {
label_0:
        eax = 0;
    }
label_3:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x404f8b */
#include <stdint.h>
 
int32_t fcn_00404f8b (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417748);
    ebx = 0;
    *((ebp - 0x1c)) = ebx;
    esi = *((ebp + 8));
    if (esi == 0xfffffffe) {
        fcn_00403ff2 ();
        *(eax) = ebx;
        fcn_00404026 ();
        *(eax) = 9;
    } else {
        if (esi >= 0) {
            if (esi >= *(0x419ff8)) {
                goto label_0;
            }
            ebx = esi;
            ebx >>= 5;
            edi = esi;
            edi &= 0x1f;
            edi <<= 6;
            eax = *((ebx*4 + 0x4191d0));
            eax = *((eax + edi + 4));
            eax &= 1;
            if (eax == 0) {
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                goto label_1;
            }
            eax = 0x7fffffff;
            eax -= eax;
            eax++;
            if (eax == 0) {
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                fcn_00404026 ();
                *(eax) = 0x16;
                goto label_2;
            }
            fcn_004099c7 (esi);
            *((ebp - 4)) = 0;
            eax = *((ebx*4 + 0x4191d0));
            if ((*((eax + edi + 4)) & 1) != 0) {
                eax = fcn_0040509f (esi, *((ebp + 0xc)), *((ebp + 0x10)));
                edi = eax;
            } else {
                fcn_00404026 ();
                *(eax) = 9;
                eax = fcn_00403ff2 ();
                *(eax) = 0;
                edi |= 0xffffffff;
            }
            *((ebp - 0x1c)) = edi;
            *((ebp - 4)) = 0xfffffffe;
            fcn_00405077 ();
            eax = edi;
            goto label_3;
        }
label_0:
        fcn_00403ff2 ();
        *(eax) = ebx;
label_1:
        fcn_00404026 ();
        *(eax) = 9;
label_2:
        eax = fcn_00402c77 ();
    }
    eax |= 0xffffffff;
label_3:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a34a */
#include <stdint.h>
 
int32_t fcn_0040a34a (void) {
    int32_t var_4h;
    fcn_00404590 (0x417980);
    fcn_004076ff ();
    eax = *((eax + 0x78));
    if (eax != 0) {
        *((ebp - 4)) = 0;
        void (*eax)() ();
        *((ebp - 4)) = 0xfffffffe;
    }
    fcn_0040bfdb ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40bfdb */
#include <stdint.h>
 
uint32_t fcn_0040bfdb (void) {
    eax = fcn_0040a39c ();
    if (eax != 0) {
        fcn_0040a3c5 (0x16);
    }
    if ((*(0x418e74) & 2) != 0) {
        eax = IsProcessorFeaturePresent (0x17);
        if (eax != 0) {
            ecx = 7;
            eax = syscall_29h (eax, ebx, ecx, edx, esi, edi, edp);
        }
        fcn_00402b1a (3, 0x40000015, 1, 7);
    }
    fcn_00406dc5 (3);
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40810b */
#include <stdint.h>
 
void fcn_0040810b (LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter) {
    SetUnhandledExceptionFilter (*((ebp + 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4076ea */
#include <stdint.h>
 
void fcn_004076ea (void) {
    fcn_004092ea (0xd);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408429 */
#include <stdint.h>
 
int32_t fcn_00408429 (int32_t arg_8h) {
    edx = *((ebp + 8));
    if (edx == 0) {
        goto label_0;
    }
    esi |= 0xffffffff;
    eax = esi;
    __asm ("lock xadd dword [edx], eax");
    ecx = *((edx + 0x78));
    if (ecx != 0) {
        eax = esi;
        __asm ("lock xadd dword [ecx], eax");
    }
    ecx = *((edx + 0x80));
    if (ecx != 0) {
        eax = esi;
        __asm ("lock xadd dword [ecx], eax");
    }
    ecx = *((edx + 0x7c));
    if (ecx != 0) {
        eax = esi;
        __asm ("lock xadd dword [ecx], eax");
    }
    ecx = *((edx + 0x88));
    if (ecx != 0) {
        eax = esi;
        __asm ("lock xadd dword [ecx], eax");
    }
    ecx = edx + 0x1c;
    ebx = 6;
    do {
        if (*((ecx - 8)) != 0x418a74) {
            edi = *(ecx);
            if (edi == 0) {
                goto label_1;
            }
            eax = esi;
            __asm ("lock xadd dword [edi], eax");
        }
label_1:
        if (*((ecx - 0xc)) != 0) {
            edi = *((ecx - 4));
            if (edi == 0) {
                goto label_2;
            }
            eax = esi;
            __asm ("lock xadd dword [edi], eax");
        }
label_2:
        ecx += 0x10;
        ebx--;
    } while (ebx != 0);
    ecx = *((edx + 0x9c));
    ecx += 0xb0;
    __asm ("lock xadd dword [ecx], esi");
    esi--;
    edi = 6;
    esi = 6;
    ebx = 6;
label_0:
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4082cf */
#include <stdint.h>
 
int32_t fcn_004082cf (int32_t arg_8h) {
    esi = *((ebp + 8));
    ebx = 0;
    eax = *((esi + 0x84));
    if (eax != 0) {
        if (eax == 0x418e10) {
            goto label_0;
        }
        eax = *((esi + 0x78));
        if (eax == 0) {
            goto label_0;
        }
        if (*(eax) != ebx) {
            goto label_0;
        }
        eax = *((esi + 0x80));
        if (eax != 0) {
            if (*(eax) != ebx) {
                goto label_1;
            }
            fcn_0040295d (eax);
            fcn_0040aad9 (*((esi + 0x84)));
        }
label_1:
        eax = *((esi + 0x7c));
        if (eax != 0) {
            if (*(eax) != ebx) {
                goto label_2;
            }
            fcn_0040295d (eax);
            fcn_0040abd5 (*((esi + 0x84)));
        }
label_2:
        fcn_0040295d (*((esi + 0x78)));
        fcn_0040295d (*((esi + 0x84)));
    }
label_0:
    eax = *((esi + 0x88));
    if (eax != 0) {
        if (*(eax) != ebx) {
            goto label_3;
        }
        eax = *((esi + 0x8c));
        eax -= 0xfe;
        fcn_0040295d (eax);
        eax = *((esi + 0x94));
        edi = 0x80;
        eax -= edi;
        fcn_0040295d (eax);
        eax = *((esi + 0x98));
        eax -= edi;
        fcn_0040295d (eax);
        fcn_0040295d (*((esi + 0x88)));
    }
label_3:
    eax = *((esi + 0x9c));
    if (eax != 0x418a78) {
        if (*((eax + 0xb0)) != ebx) {
            goto label_4;
        }
        fcn_0040ac3c (eax);
        fcn_0040295d (*((esi + 0x9c)));
    }
label_4:
    eax = 6;
    ebx = esi + 0xa0;
    *((ebp + 8)) = eax;
    edi = esi + 0x1c;
    do {
        if (*((edi - 8)) != 0x418a74) {
            eax = *(edi);
            if (eax != 0) {
                if (*(eax) != 0) {
                    goto label_5;
                }
                fcn_0040295d (eax);
                fcn_0040295d (*(ebx));
            }
label_5:
            eax = *((ebp + 8));
        }
        if (*((edi - 0xc)) != 0) {
            eax = *((edi - 4));
            if (eax != 0) {
                if (*(eax) != 0) {
                    goto label_6;
                }
                fcn_0040295d (eax);
            }
label_6:
            eax = *((ebp + 8));
        }
        ebx += 4;
        edi += 0x10;
        eax--;
        *((ebp + 8)) = eax;
    } while (eax != 0);
    fcn_0040295d (esi);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4076f6 */
#include <stdint.h>
 
void fcn_004076f6 (void) {
    fcn_004092ea (0xc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407dcf */
#include <stdint.h>
 
int32_t fcn_00407dcf (int32_t arg_8h) {
    eax = *(0x419f68);
    eax ^= *(0x4183f0);
    if (? != ?) {
        void (*eax)() ();
        return eax;
    }
    TlsGetValue ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407dee */
#include <stdint.h>
 
int32_t fcn_00407dee (int32_t arg_8h, int32_t arg_ch) {
    eax = *(0x419f6c);
    eax ^= *(0x4183f0);
    if (? != ?) {
        void (*eax)() ();
        return eax;
    }
    TlsSetValue ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407786 */
#include <stdint.h>
 
int32_t fcn_00407786 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    fcn_00404590 (0x4177f0);
    esi = *((ebp + 8));
    *((esi + 0x5c)) = 0x411c00;
    *((esi + 8)) = 0;
    edi = 0;
    edi++;
    *((esi + 0x14)) = edi;
    *((esi + 0x70)) = edi;
    eax = 0x43;
    *((esi + 0xb8)) = ax;
    *((esi + 0x1be)) = ax;
    *((esi + 0x68)) = 0x418750;
    *((esi + 0x3b8)) = 0;
    fcn_00409180 (0xd);
    *((ebp - 4)) = 0;
    eax = *((esi + 0x68));
    ecx = edi;
    __asm ("lock xadd dword [eax], ecx");
    *((ebp - 4)) = 0xfffffffe;
    fcn_00407827 ();
    fcn_00409180 (0xc);
    *((ebp - 4)) = edi;
    eax = *((ebp + 0xc));
    *((esi + 0x6c)) = eax;
    if (eax == 0) {
        eax = *(0x418bdc);
        *((esi + 0x6c)) = eax;
    }
    fcn_0040823a (*((esi + 0x6c)));
    *((ebp - 4)) = 0xfffffffe;
    fcn_00407830 ();
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407827 */
#include <stdint.h>
 
void fcn_00407827 (void) {
    fcn_004092ea (0xd);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40823a */
#include <stdint.h>
 
int32_t fcn_0040823a (int32_t arg_8h) {
    edx = *((ebp + 8));
    ecx = 0;
    ecx++;
    eax = ecx;
    __asm ("lock xadd dword [edx], eax");
    esi = *((edx + 0x78));
    if (esi != 0) {
        eax = ecx;
        __asm ("lock xadd dword [esi], eax");
    }
    esi = *((edx + 0x80));
    if (esi != 0) {
        eax = ecx;
        __asm ("lock xadd dword [esi], eax");
    }
    esi = *((edx + 0x7c));
    if (esi != 0) {
        eax = ecx;
        __asm ("lock xadd dword [esi], eax");
    }
    esi = *((edx + 0x88));
    if (esi != 0) {
        eax = ecx;
        __asm ("lock xadd dword [esi], eax");
    }
    esi = edx + 0x1c;
    ebx = 6;
    do {
        if (*((esi - 8)) != 0x418a74) {
            edi = *(esi);
            if (edi == 0) {
                goto label_0;
            }
            eax = ecx;
            __asm ("lock xadd dword [edi], eax");
        }
label_0:
        if (*((esi - 0xc)) != 0) {
            edi = *((esi - 4));
            if (edi == 0) {
                goto label_1;
            }
            eax = ecx;
            __asm ("lock xadd dword [edi], eax");
        }
label_1:
        esi += 0x10;
        ebx--;
    } while (ebx != 0);
    eax = *((edx + 0x9c));
    eax += 0xb0;
    __asm ("lock xadd dword [eax], ecx");
    ecx++;
    edi = 6;
    esi = 6;
    ebx = 6;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407830 */
#include <stdint.h>
 
void fcn_00407830 (void) {
    fcn_004092ea (0xc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406dd9 */
#include <stdint.h>
 
uint32_t fcn_00406dd9 (void) {
    eax = EncodePointer (0, esi);
    esi = eax;
    fcn_00406bfe (esi);
    fcn_00402c3f (esi);
    fcn_0040a38f (esi);
    fcn_0040a3a9 (esi);
    fcn_0040a37e ();
    fcn_0040a5ba (esi);
    return void (*0x407e80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407e80 */
#include <stdint.h>
 
uint32_t loc_00407e80 (void) {
    eax = GetModuleHandleW (0x411ca0, edi, esi);
    edi = eax;
    eax = GetProcAddress (edi, "FlsAlloc");
    eax ^= *(0x4183f0);
    *(0x419f60) = eax;
    eax = GetProcAddress (edi, "FlsFree");
    eax ^= *(0x4183f0);
    *(0x419f64) = eax;
    eax = GetProcAddress (edi, "FlsGetValue");
    eax ^= *(0x4183f0);
    *(0x419f68) = eax;
    eax = GetProcAddress (edi, "FlsSetValue");
    eax ^= *(0x4183f0);
    *(0x419f6c) = eax;
    eax = GetProcAddress (edi, "InitializeCriticalSectionEx");
    eax ^= *(0x4183f0);
    *(0x419f70) = eax;
    eax = GetProcAddress (edi, "CreateEventExW");
    eax ^= *(0x4183f0);
    *(0x419f74) = eax;
    eax = GetProcAddress (edi, "CreateSemaphoreExW");
    eax ^= *(0x4183f0);
    *(0x419f78) = eax;
    eax = GetProcAddress (edi, "SetThreadStackGuarantee");
    eax ^= *(0x4183f0);
    *(0x419f7c) = eax;
    eax = GetProcAddress (edi, "CreateThreadpoolTimer");
    eax ^= *(0x4183f0);
    *(0x419f80) = eax;
    eax = GetProcAddress (edi, "SetThreadpoolTimer");
    eax ^= *(0x4183f0);
    *(0x419f84) = eax;
    eax = GetProcAddress (edi, "WaitForThreadpoolTimerCallbacks");
    eax ^= *(0x4183f0);
    *(0x419f88) = eax;
    eax = GetProcAddress (edi, "CloseThreadpoolTimer");
    eax ^= *(0x4183f0);
    *(0x419f8c) = eax;
    eax = GetProcAddress (edi, "CreateThreadpoolWait");
    eax ^= *(0x4183f0);
    *(0x419f90) = eax;
    eax = GetProcAddress (edi, "SetThreadpoolWait");
    eax ^= *(0x4183f0);
    *(0x419f94) = eax;
    eax = GetProcAddress (edi, "CloseThreadpoolWait");
    eax ^= *(0x4183f0);
    *(0x419f98) = eax;
    eax = GetProcAddress (edi, "FlushProcessWriteBuffers");
    eax ^= *(0x4183f0);
    *(0x419f9c) = eax;
    eax = GetProcAddress (edi, "FreeLibraryWhenCallbackReturns");
    eax ^= *(0x4183f0);
    *(0x419fa0) = eax;
    eax = GetProcAddress (edi, "GetCurrentProcessorNumber");
    eax ^= *(0x4183f0);
    *(0x419fa4) = eax;
    eax = GetProcAddress (edi, "GetLogicalProcessorInformation");
    eax ^= *(0x4183f0);
    *(0x419fa8) = eax;
    eax = GetProcAddress (edi, "CreateSymbolicLinkW");
    eax ^= *(0x4183f0);
    *(0x419fac) = eax;
    eax = GetProcAddress (edi, "SetDefaultDllDirectories");
    eax ^= *(0x4183f0);
    *(0x419fb0) = eax;
    eax = GetProcAddress (edi, "EnumSystemLocalesEx");
    eax ^= *(0x4183f0);
    *(0x419fb8) = eax;
    eax = GetProcAddress (edi, "CompareStringEx");
    eax ^= *(0x4183f0);
    *(0x419fb4) = eax;
    eax = GetProcAddress (edi, "GetDateFormatEx");
    eax ^= *(0x4183f0);
    *(0x419fbc) = eax;
    eax = GetProcAddress (edi, "GetLocaleInfoEx");
    eax ^= *(0x4183f0);
    *(0x419fc0) = eax;
    eax = GetProcAddress (edi, "GetTimeFormatEx");
    eax ^= *(0x4183f0);
    *(0x419fc4) = eax;
    eax = GetProcAddress (edi, "GetUserDefaultLocaleName");
    eax ^= *(0x4183f0);
    *(0x419fc8) = eax;
    eax = GetProcAddress (edi, "IsValidLocaleName");
    eax ^= *(0x4183f0);
    *(0x419fcc) = eax;
    eax = GetProcAddress (edi, "LCMapStringEx");
    eax ^= *(0x4183f0);
    *(0x419fd0) = eax;
    eax = GetProcAddress (edi, "GetCurrentPackageId");
    eax ^= *(0x4183f0);
    *(0x419fd4) = eax;
    eax = GetProcAddress (edi, "GetTickCount64");
    eax ^= *(0x4183f0);
    *(0x419fd8) = eax;
    eax = GetProcAddress (edi, "GetFileInformationByHandleExW");
    eax ^= *(0x4183f0);
    *(0x419fdc) = eax;
    eax = GetProcAddress (edi, "SetFileInformationByHandleW");
    eax ^= *(0x4183f0);
    *(0x419fe0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4092b1 */
#include <stdint.h>
 
uint32_t fcn_004092b1 (void) {
    esi = 0x418cc8;
    edi = 0x419a70;
    do {
        if (*((esi + 4)) == 1) {
            *(esi) = edi;
            edi += 0x18;
            eax = fcn_00407e10 (*(esi), 0xfa0, 0);
        }
        esi += 8;
    } while (esi < 0x418de8);
    eax = 0;
    eax++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4078af */
#include <stdint.h>
 
int32_t fcn_004078af (void) {
    eax = *(0x418540);
    if (eax != -1) {
        fcn_00407db0 (eax);
        *(0x418540) |= 0xffffffff;
    }
    esi = 0x418cc8;
    edi = 0x418cc8;
    do {
        ebx = *(edi);
        if (ebx != 0) {
            if (*((edi + 4)) == 1) {
                goto label_0;
            }
            DeleteCriticalSection (ebx);
            fcn_0040295d (ebx);
            *(edi) = 0;
        }
label_0:
        edi += 8;
    } while (edi < 0x418de8);
    do {
        if (*(esi) != 0) {
            if (*((esi + 4)) != 1) {
                goto label_1;
            }
            DeleteCriticalSection (*(esi));
        }
label_1:
        esi += 8;
    } while (esi < 0x418de8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407d92 */
#include <stdint.h>
 
int32_t fcn_00407d92 (int32_t arg_8h) {
    eax = *(0x419f60);
    eax ^= *(0x4183f0);
    if (? != ?) {
        void (*eax)(uint32_t*) (*((ebp + 8)));
        return eax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x407db0 */
#include <stdint.h>
 
int32_t fcn_00407db0 (int32_t arg_8h) {
    eax = *(0x419f64);
    eax ^= *(0x4183f0);
    if (? != ?) {
        void (*eax)() ();
        return eax;
    }
    TlsFree ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408594 */
#include <stdint.h>
 
uint32_t fcn_00408594 (void) {
    if (*(0x419ff0) == 0) {
        eax = fcn_004088f1 (0xfffffffffffffffd);
        *(0x419ff0) = 1;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4088f1 */
#include <stdint.h>
 
uint32_t fcn_004088f1 (int32_t arg_8h) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x417858);
    edi |= 0xffffffff;
    eax = fcn_004076ff ();
    ebx = eax;
    *((ebp - 0x20)) = ebx;
    fcn_0040884b ();
    esi = *((ebx + 0x68));
    eax = fcn_004085ec (*((ebp + 8)));
    *((ebp + 8)) = eax;
    if (eax == *((esi + 4))) {
        goto label_0;
    }
    eax = fcn_00408fa3 (0x220);
    ebx = eax;
    if (ebx == 0) {
        goto label_1;
    }
    ecx = 0x88;
    eax = *((ebp - 0x20));
    esi = *((eax + 0x68));
    edi = ebx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    esi = 0;
    *(ebx) = esi;
    eax = fcn_00408a99 (*((ebp + 8)), ebx);
    edi = eax;
    *((ebp + 8)) = edi;
    if (edi != 0) {
        goto label_2;
    }
    eax = *((ebp - 0x20));
    ecx = *((eax + 0x68));
    edx |= 0xffffffff;
    __asm ("lock xadd dword [ecx], edx");
    if (edx == 0) {
        ecx = *((eax + 0x68));
        if (ecx == 0x418750) {
            goto label_3;
        }
        fcn_0040295d (ecx);
        eax = *((ebp - 0x20));
    }
label_3:
    *((eax + 0x68)) = ebx;
    eax = 0;
    eax++;
    __asm ("lock xadd dword [ebx], eax");
    eax = *((ebp - 0x20));
    if ((*((eax + 0x70)) & 2) != 0) {
        goto label_1;
    }
    if ((*(0x418c98) & 1) != 0) {
        goto label_1;
    }
    fcn_00409180 (0xd);
    *((ebp - 4)) = esi;
    eax = *((ebx + 4));
    *(0x419a4c) = eax;
    eax = *((ebx + 8));
    *(0x419a50) = eax;
    eax = *((ebx + 0x21c));
    *(0x419a60) = eax;
    ecx = esi;
    do {
        *((ebp - 0x1c)) = ecx;
        if (ecx >= 5) {
            goto label_4;
        }
        ax = *((ebx + ecx*2 + 0xc));
        *((ecx*2 + 0x419a54)) = ax;
        ecx++;
    } while (1);
label_4:
    ecx = esi;
    do {
        *((ebp - 0x1c)) = ecx;
        if (ecx >= 0x101) {
            goto label_5;
        }
        al = *((ecx + ebx + 0x18));
        *((ecx + 0x418548)) = al;
        ecx++;
    } while (1);
    do {
label_5:
        *((ebp - 0x1c)) = esi;
        if (esi >= 0x100) {
            goto label_6;
        }
        al = *((esi + ebx + 0x119));
        *((esi + 0x418650)) = al;
        esi++;
    } while (1);
label_6:
    eax = *(0x418974);
    ecx |= 0xffffffff;
    __asm ("lock xadd dword [eax], ecx");
    if (ecx == 0) {
        eax = *(0x418974);
        if (eax == 0x418750) {
            goto label_7;
        }
        eax = fcn_0040295d (eax);
    }
label_7:
    *(0x418974) = ebx;
    eax = 0;
    eax++;
    __asm ("lock xadd dword [ebx], eax");
    *((ebp - 4)) = 0xfffffffe;
    fcn_00408a63 ();
    goto label_1;
label_2:
    if (edi == -1) {
        if (ebx != 0x418750) {
            fcn_0040295d (ebx);
        }
        fcn_00404026 ();
        *(eax) = 0x16;
        goto label_1;
label_0:
        edi = 0;
    }
label_1:
    eax = edi;
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40797f */
#include <stdint.h>
 
int32_t fcn_0040797f (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h, int32_t arg_1bh) {
    eax = *((ebp + 0x14));
    ebx = *((ebp + 0x18));
    esi = *((ebp + 8));
    *(ebx) = 0;
    edi = *((ebp + 0x10));
    *(eax) = 1;
    eax = *((ebp + 0xc));
    if (eax != 0) {
        *(eax) = edi;
        eax += 4;
        *((ebp + 0xc)) = eax;
    }
    ecx = 0;
    *((ebp + 8)) = ecx;
    do {
label_0:
        if (*(esi) == 0x22) {
            eax = 0;
            al = (ecx == 0) ? 1 : 0;
            esi++;
            ecx = eax;
            al = 0x22;
            *((ebp + 8)) = ecx;
        } else {
            *(ebx)++;
            if (edi != 0) {
                al = *(esi);
                *(edi) = al;
                edi++;
            }
            al = *(esi);
            esi++;
            *((ebp + 0x1b)) = al;
            eax = (int32_t) al;
            eax = fcn_0040aa6e (eax);
            if (eax != 0) {
                *(ebx)++;
                if (edi != 0) {
                    al = *(esi);
                    *(edi) = al;
                    edi++;
                }
                esi++;
            }
            al = *((ebp + 0x1b));
            if (al == 0) {
                goto label_3;
            }
            ecx = *((ebp + 8));
        }
    } while (ecx != 0);
    if (al == 0x20) {
        goto label_4;
    }
    if (al != 9) {
        goto label_0;
    }
label_4:
    if (edi != 0) {
        *((edi - 1)) = 0;
        goto label_5;
label_3:
        esi--;
    }
label_5:
    *((ebp + 0x18)) = 0;
label_2:
    if (*(esi) == 0) {
        goto label_6;
    }
    do {
        al = *(esi);
        if (al != 0x20) {
            if (al != 9) {
                goto label_7;
            }
        }
        esi++;
    } while (1);
label_7:
    if (*(esi) == 0) {
        goto label_6;
    }
    edx = *((ebp + 0xc));
    if (edx != 0) {
        *(edx) = edi;
        edx += 4;
        *((ebp + 0xc)) = edx;
    }
    eax = *((ebp + 0x14));
    *(eax)++;
label_1:
    edx = 0;
    edx++;
    ecx = 0;
    while (*(esi) == 0x5c) {
        esi++;
        ecx++;
    }
    if (*(esi) != 0x22) {
        goto label_8;
    }
    if ((cl & 1) == 0) {
        if (*((ebp + 0x18)) != 0) {
            eax = esi + 1;
            if (*(eax) == 0x22) {
                esi = eax;
            }
        } else {
            eax = 0;
            edx = 0;
            al = (*((ebp + 0x18)) == eax) ? 1 : 0;
            *((ebp + 0x18)) = eax;
        }
    }
    ecx >>= 1;
    while (ecx != 0) {
        ecx--;
        if (edi != 0) {
            *(edi) = 0x5c;
            edi++;
        }
        *(ebx)++;
label_8:
    }
    al = *(esi);
    if (al != 0) {
        if (*((ebp + 0x18)) == ecx) {
            if (al == 0x20) {
                goto label_9;
            }
            if (al == 9) {
                goto label_9;
            }
        }
        if (edx != 0) {
            eax = (int32_t) al;
            eax = fcn_0040aa6e (eax);
            if (edi != 0) {
                if (eax != 0) {
                    al = *(esi);
                    *(edi) = al;
                    edi++;
                    esi++;
                    *(ebx)++;
                }
                al = *(esi);
                *(edi) = al;
                edi++;
            } else {
                if (eax == 0) {
                    goto label_10;
                }
                esi++;
                *(ebx)++;
            }
label_10:
            *(ebx)++;
        }
        esi++;
        goto label_1;
    }
label_9:
    if (edi != 0) {
        *(edi) = 0;
        edi++;
    }
    *(ebx)++;
    goto label_2;
label_6:
    edx = *((ebp + 0xc));
    if (edx != 0) {
        *(edx) = 0;
    }
    eax = *((ebp + 0x14));
    *(eax)++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40aa6e */
#include <stdint.h>
 
void fcn_0040aa6e (int32_t arg_8h) {
    fcn_0040aa14 (0, *((ebp + 8)), 0, 4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40aa14 */
#include <stdint.h>
 
int32_t fcn_0040aa14 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 8)));
    eax = *((ebp + 0xc));
    cl = *((ebp + 0x14));
    esi = (int32_t) al;
    eax = *((ebp - 0xc));
    if ((*((eax + esi + 0x19)) & cl) == 0) {
        edx = 0;
        if (*((ebp + 0x10)) != edx) {
            eax = *((ebp - 0x10));
            eax = *((eax + 0x90));
            eax = *((eax + esi*2));
            eax &= *((ebp + 0x10));
        } else {
            eax = edx;
        }
        if (eax == 0) {
            goto label_0;
        }
    }
    edx = 0;
    edx++;
label_0:
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40aa84 */
#include <stdint.h>
 
int32_t fcn_0040aa84 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 8));
    if (esi != 0) {
        edx = *((ebp + 0xc));
        if (edx == 0) {
            goto label_2;
        }
        ecx = *((ebp + 0x10));
        if (ecx != 0) {
            goto label_3;
        }
        *(esi) = cl;
    }
label_2:
    fcn_00404026 ();
label_0:
    esi = 0x16;
    *(eax) = esi;
    fcn_00402c77 ();
    eax = esi;
label_1:
    return eax;
label_3:
    edi = esi;
    edi -= ecx;
    do {
        al = *(ecx);
        *((edi + ecx)) = al;
        ecx++;
        if (al == 0) {
            goto label_4;
        }
        edx--;
    } while (edx != 0);
label_4:
    if (edx == 0) {
        *(esi) = dl;
        eax = fcn_00404026 ();
        goto label_0;
    }
    eax = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40aad9 */
#include <stdint.h>
 
int32_t fcn_0040aad9 (int32_t arg_8h) {
    esi = *((ebp + 8));
    if (esi != 0) {
        eax = *((esi + 0xc));
        if (eax != *(0x418e1c)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x10));
        if (eax != *(0x418e20)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x14));
        if (eax != *(0x418e24)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x18));
        if (eax != *(0x418e28)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x1c));
        if (eax != *(0x418e2c)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x20));
        if (eax != *(0x418e30)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x24));
        if (eax != *(0x418e34)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x38));
        if (eax != *(0x418e48)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x3c));
        if (eax != *(0x418e4c)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x40));
        if (eax != *(0x418e50)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x44));
        if (eax != *(0x418e54)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x48));
        if (eax != *(0x418e58)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x4c));
        if (eax == *(0x418e5c)) {
            goto label_0;
        }
        fcn_0040295d (eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40abd5 */
#include <stdint.h>
 
int32_t fcn_0040abd5 (int32_t arg_8h) {
    esi = *((ebp + 8));
    if (esi != 0) {
        eax = *(esi);
        if (eax != *(0x418e10)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 4));
        if (eax != *(0x418e14)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 8));
        if (eax != *(0x418e18)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x30));
        if (eax != *(0x418e40)) {
            fcn_0040295d (eax);
        }
        eax = *((esi + 0x34));
        if (eax == *(0x418e44)) {
            goto label_0;
        }
        fcn_0040295d (eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40ac3c */
#include <stdint.h>
 
void fcn_0040ac3c (int32_t arg_8h) {
    esi = *((ebp + 8));
    if (esi != 0) {
        fcn_0040295d (*((esi + 4)));
        fcn_0040295d (*((esi + 8)));
        fcn_0040295d (*((esi + 0xc)));
        fcn_0040295d (*((esi + 0x10)));
        fcn_0040295d (*((esi + 0x14)));
        fcn_0040295d (*((esi + 0x18)));
        fcn_0040295d (*(esi));
        fcn_0040295d (*((esi + 0x20)));
        fcn_0040295d (*((esi + 0x24)));
        fcn_0040295d (*((esi + 0x28)));
        fcn_0040295d (*((esi + 0x2c)));
        fcn_0040295d (*((esi + 0x30)));
        fcn_0040295d (*((esi + 0x34)));
        fcn_0040295d (*((esi + 0x1c)));
        fcn_0040295d (*((esi + 0x38)));
        fcn_0040295d (*((esi + 0x3c)));
        fcn_0040295d (*((esi + 0x40)));
        fcn_0040295d (*((esi + 0x44)));
        fcn_0040295d (*((esi + 0x48)));
        fcn_0040295d (*((esi + 0x4c)));
        fcn_0040295d (*((esi + 0x50)));
        fcn_0040295d (*((esi + 0x54)));
        fcn_0040295d (*((esi + 0x58)));
        fcn_0040295d (*((esi + 0x5c)));
        fcn_0040295d (*((esi + 0x60)));
        fcn_0040295d (*((esi + 0x64)));
        fcn_0040295d (*((esi + 0x68)));
        fcn_0040295d (*((esi + 0x6c)));
        fcn_0040295d (*((esi + 0x70)));
        fcn_0040295d (*((esi + 0x74)));
        fcn_0040295d (*((esi + 0x78)));
        fcn_0040295d (*((esi + 0x7c)));
        fcn_0040295d (*((esi + 0x80)));
        fcn_0040295d (*((esi + 0x84)));
        fcn_0040295d (*((esi + 0x88)));
        fcn_0040295d (*((esi + 0x8c)));
        fcn_0040295d (*((esi + 0x90)));
        fcn_0040295d (*((esi + 0x94)));
        fcn_0040295d (*((esi + 0x98)));
        fcn_0040295d (*((esi + 0x9c)));
        fcn_0040295d (*((esi + 0xa0)));
        fcn_0040295d (*((esi + 0xa4)));
        fcn_0040295d (*((esi + 0xa8)));
        fcn_0040295d (*((esi + 0xb8)));
        fcn_0040295d (*((esi + 0xbc)));
        fcn_0040295d (*((esi + 0xc0)));
        fcn_0040295d (*((esi + 0xc4)));
        fcn_0040295d (*((esi + 0xc8)));
        fcn_0040295d (*((esi + 0xcc)));
        fcn_0040295d (*((esi + 0xb4)));
        fcn_0040295d (*((esi + 0xd4)));
        fcn_0040295d (*((esi + 0xd8)));
        fcn_0040295d (*((esi + 0xdc)));
        fcn_0040295d (*((esi + 0xe0)));
        fcn_0040295d (*((esi + 0xe4)));
        fcn_0040295d (*((esi + 0xe8)));
        fcn_0040295d (*((esi + 0xd0)));
        fcn_0040295d (*((esi + 0xec)));
        fcn_0040295d (*((esi + 0xf0)));
        fcn_0040295d (*((esi + 0xf4)));
        fcn_0040295d (*((esi + 0xf8)));
        fcn_0040295d (*((esi + 0xfc)));
        fcn_0040295d (*((esi + 0x100)));
        fcn_0040295d (*((esi + 0x104)));
        fcn_0040295d (*((esi + 0x108)));
        fcn_0040295d (*((esi + 0x10c)));
        fcn_0040295d (*((esi + 0x110)));
        fcn_0040295d (*((esi + 0x114)));
        fcn_0040295d (*((esi + 0x118)));
        fcn_0040295d (*((esi + 0x11c)));
        fcn_0040295d (*((esi + 0x120)));
        fcn_0040295d (*((esi + 0x124)));
        fcn_0040295d (*((esi + 0x128)));
        fcn_0040295d (*((esi + 0x12c)));
        fcn_0040295d (*((esi + 0x130)));
        fcn_0040295d (*((esi + 0x134)));
        fcn_0040295d (*((esi + 0x138)));
        fcn_0040295d (*((esi + 0x13c)));
        fcn_0040295d (*((esi + 0x140)));
        fcn_0040295d (*((esi + 0x144)));
        fcn_0040295d (*((esi + 0x148)));
        fcn_0040295d (*((esi + 0x14c)));
        fcn_0040295d (*((esi + 0x150)));
        fcn_0040295d (*((esi + 0x154)));
        fcn_0040295d (*((esi + 0x158)));
        fcn_0040295d (*((esi + 0x15c)));
        fcn_0040295d (*((esi + 0x160)));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408549 */
#include <stdint.h>
 
int32_t fcn_00408549 (int32_t arg_8h, int32_t arg_ch) {
    edi = *((ebp + 0xc));
    if (edi != 0) {
        eax = *((ebp + 8));
        if (eax != 0) {
            esi = *(eax);
            if (esi != edi) {
                *(eax) = edi;
                fcn_0040823a (edi);
                if (esi == 0) {
                    goto label_0;
                }
                fcn_00408429 (esi);
                if (*(esi) != 0) {
                    goto label_0;
                }
                if (esi == 0x418be0) {
                    goto label_0;
                }
                fcn_004082cf (esi);
            }
label_0:
            eax = edi;
        }
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408540 */
#include <stdint.h>
 
void fcn_00408540 (void) {
    fcn_004092ea (0xc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b31c */
#include <stdint.h>
 
uint32_t fcn_0040b31c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 8)));
    eax = ebp - 0x10;
    fcn_0040b224 (eax, *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)), *((ebp + 0x20)));
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b224 */
#include <stdint.h>
 
int32_t fcn_0040b224 (int32_t arg_8h, DWORD dwInfoType, LPCCH lpMultiByteStr, int32_t cbMultiByte, LPWORD lpCharType, UINT CodePage, uint32_t arg_20h) {
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    ecx = *((ebp + 0x1c));
    edi = 0;
    if (ecx == 0) {
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((eax + 4));
        ecx = *((eax + 4));
        *((ebp + 0x1c)) = eax;
    }
    eax = 0;
    al = (*((ebp + 0x20)) != eax) ? 1 : 0;
    eax = MultiByteToWideChar (ecx, eax*8 + 1, *((ebp + 0x10)), *((ebp + 0x14)), edi, edi);
    ebx = eax;
    while (esi == 0) {
label_0:
        eax = 0;
        goto label_1;
        if (ebx <= 0) {
            goto label_2;
        }
        if (ebx > 0x7ffffff0) {
            goto label_2;
        }
        ecx = ebx + ebx;
        eax = ecx + 8;
        if (eax <= ecx) {
            goto label_2;
        }
        eax = ebx*2 + 8;
        if (eax > 0x400) {
            goto label_3;
        }
        eax = fcn_0040c150 ();
        esi = esp;
    }
    *(esi) = 0xcccc;
    goto label_4;
label_3:
    eax = fcn_0040265a (eax);
    esi = eax;
    if (esi == 0) {
        goto label_0;
    }
    *(esi) = 0xdddd;
label_4:
    esi += 8;
    goto label_5;
label_2:
    esi = edi;
label_5:
    if (esi == 0) {
        goto label_0;
    }
    fcn_00407390 (esi, edi, ebx + ebx);
    eax = MultiByteToWideChar (*((ebp + 0x1c)), 1, *((ebp + 0x10)), *((ebp + 0x14)), esi, ebx);
    if (eax != 0) {
        eax = GetStringTypeW (*((ebp + 0xc)), esi, eax, *((ebp + 0x18)));
        edi = eax;
    }
    fcn_0040b206 (esi);
    eax = edi;
label_1:
    esp = ebp - 0x10;
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b1c0 */
#include <stdint.h>
 
uint32_t fcn_0040b1c0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_28h) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 8)));
    eax = ebp - 0x10;
    fcn_0040afbc (eax, *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)), *((ebp + 0x20)), *((ebp + 0x24)), *((ebp + 0x28)));
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40afbc */
#include <stdint.h>
 
int32_t fcn_0040afbc (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, LPCCH lpMultiByteStr, int32_t arg_18h, int32_t arg_1ch, uint32_t arg_20h, UINT CodePage, uint32_t arg_28h) {
    int32_t var_14h;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    esi = *((ebp + 0x18));
    if (esi <= 0) {
        goto label_0;
    }
    eax = *((ebp + 0x14));
    ecx = esi;
    do {
        ecx--;
        if (*(eax) == 0) {
            goto label_1;
        }
        eax++;
    } while (ecx != 0);
    ecx |= 0xffffffff;
label_1:
    eax = esi;
    eax -= ecx;
    eax--;
    esi = eax + 1;
    if (eax >= esi) {
        esi = eax;
    }
label_0:
    ecx = *((ebp + 0x24));
    edi = 0;
    if (ecx == 0) {
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((eax + 4));
        ecx = *((eax + 4));
        *((ebp + 0x24)) = eax;
    }
    eax = 0;
    al = (*((ebp + 0x28)) != eax) ? 1 : 0;
    eax = MultiByteToWideChar (ecx, eax*8 + 1, *((ebp + 0x14)), esi, 0, 0);
    ecx = eax;
    *((ebp - 8)) = ecx;
    while (ebx == 0) {
        eax = 0;
        goto label_2;
        if (ecx > 0) {
            edx = 0;
            eax = 0xffffffffffffffe0;
            eax = edx:eax / ecx;
            edx = edx:eax % ecx;
            if (eax < 2) {
                goto label_3;
            }
            ecx += ecx;
            eax = ecx + 8;
            if (eax > ecx) {
                eax = *((ebp - 8));
                eax = eax*2 + 8;
                if (eax <= 0x400) {
                    eax = fcn_0040c150 ();
                    ebx = esp;
                    if (ebx == 0) {
                        goto label_4;
                    }
                    *(ebx) = 0xcccc;
                } else {
                    eax = fcn_0040265a (eax);
                    ebx = eax;
                    if (ebx == 0) {
                        goto label_4;
                    }
                    *(ebx) = 0xdddd;
                }
                ebx += 8;
label_4:
                ecx = *((ebp - 8));
                goto label_5;
            }
            ecx = *((ebp - 8));
        }
label_3:
        ebx = 0;
label_5:
    }
    eax = MultiByteToWideChar (*((ebp + 0x24)), 1, *((ebp + 0x14)), esi, ebx, ecx);
    if (eax != 0) {
        esi = *((ebp - 8));
        eax = fcn_0040c096 (*((ebp + 0xc)), *((ebp + 0x10)), ebx, esi, 0, 0);
        edi = eax;
        if (edi == 0) {
            goto label_6;
        }
        if ((*((ebp + 0x10)) & 0x400) != 0) {
            ecx = *((ebp + 0x20));
            if (ecx == 0) {
                goto label_6;
            }
            if (edi > ecx) {
                goto label_6;
            }
            fcn_0040c096 (*((ebp + 0xc)), *((ebp + 0x10)), ebx, esi, *((ebp + 0x1c)), ecx);
        } else {
            if (edi > 0) {
                edx = 0;
                eax = 0xffffffffffffffe0;
                eax = edx:eax / edi;
                edx = edx:eax % edi;
                if (eax >= 2) {
                    ecx = edi + edi;
                    eax = ecx + 8;
                    if (eax <= ecx) {
                        goto label_7;
                    }
                    eax = edi*2 + 8;
                    if (eax <= 0x400) {
                        eax = fcn_0040c150 ();
                        esi = esp;
                        if (esi == 0) {
                            goto label_6;
                        }
                        *(esi) = 0xcccc;
                    } else {
                        eax = fcn_0040265a (eax);
                        esi = eax;
                        if (esi == 0) {
                            goto label_6;
                        }
                        *(esi) = 0xdddd;
                    }
                    esi += 8;
                }
            } else {
label_7:
                esi = 0;
            }
            if (esi == 0) {
                goto label_6;
            }
            eax = *((ebp - 8));
            eax = fcn_0040c096 (*((ebp + 0xc)), *((ebp + 0x10)), ebx, eax, esi, edi);
            if (eax != 0) {
                eax = 0;
                if (*((ebp + 0x20)) == eax) {
                } else {
                }
                eax = WideCharToMultiByte (*((ebp + 0x24)), eax, esi, edi, *((ebp + 0x1c)), *((ebp + 0x20)));
                edi = eax;
            }
            fcn_0040b206 (esi);
        }
    }
label_6:
    fcn_0040b206 (ebx);
    eax = edi;
label_2:
    esp = ebp - 0x14;
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4088e8 */
#include <stdint.h>
 
void fcn_004088e8 (void) {
    fcn_004092ea (0xd);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4085ec */
#include <stdint.h>
 
int32_t fcn_004085ec (int32_t arg_8h) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (0);
    *(0x419a64) = 0;
    eax = *((ebp + 8));
    if (eax == 0xfffffffe) {
        *(0x419a64) = 1;
        eax = GetOEMCP ();
    } else {
        if (eax == 0xfffffffd) {
            *(0x419a64) = 1;
            eax = GetACP ();
        } else {
            if (eax != 0xfffffffc) {
                goto label_0;
            }
            eax = *((ebp - 0x10));
            *(0x419a64) = 1;
            eax = *((eax + 4));
        }
    }
label_0:
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408a99 */
#include <stdint.h>
 
int32_t fcn_00408a99 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_20h;
    int32_t var_1ch;
    LPCPINFO lpCPInfo;
    uint32_t var_12h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    esi = *((ebp + 0xc));
    eax = fcn_004085ec (*((ebp + 8)));
    ebx = eax;
    if (ebx == 0) {
        eax = fcn_0040865a (esi);
        eax = 0;
        goto label_3;
    }
    edi = 0;
    ecx = edi;
    eax = edi;
    *((ebp - 0x1c)) = ecx;
    do {
        if (*((eax + 0x418978)) == ebx) {
            goto label_4;
        }
        ecx++;
        eax += 0x30;
        *((ebp - 0x1c)) = ecx;
    } while (eax < 0xf0);
    if (ebx == 0xfde8) {
        goto label_5;
    }
    if (ebx == 0xfde9) {
        goto label_5;
    }
    eax = (int32_t) bx;
    eax = IsValidCodePage (eax);
    if (eax == 0) {
        goto label_5;
    }
    eax = GetCPInfo (ebx, ebp - 0x18);
    if (eax == 0) {
        goto label_6;
    }
    eax = esi + 0x18;
    fcn_00407390 (eax, edi, 0x101);
    *((esi + 4)) = ebx;
    ebx = 0;
    *((esi + 0x21c)) = edi;
    ebx++;
    if (*((ebp - 0x18)) <= ebx) {
        goto label_7;
    }
    eax = ebp - 0x12;
    if (*((ebp - 0x12)) == 0) {
        goto label_8;
    }
label_0:
    cl = *((eax + 1));
    if (cl == 0) {
        goto label_8;
    }
    edx = (int32_t) cl;
    ecx = *(eax);
    while (ecx <= edx) {
        *((esi + ecx + 0x19)) |= 4;
        ecx++;
    }
    eax += 2;
    if (*(eax) != 0) {
        goto label_0;
    }
label_8:
    eax = esi + 0x1a;
    ecx = 0xfe;
    do {
        *(eax) |= 8;
        eax++;
        ecx--;
    } while (ecx != 0);
    eax = fcn_004085b2 (*((esi + 4)));
    *((esi + 0x21c)) = eax;
    *((esi + 8)) = ebx;
    goto label_9;
label_7:
    *((esi + 8)) = edi;
label_9:
    eax = 0;
    edi = esi + 0xc;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    goto label_10;
label_6:
    if (*(0x419a64) != edi) {
        eax = fcn_0040865a (esi);
        goto label_11;
    }
label_5:
    eax |= 0xffffffff;
    goto label_12;
label_4:
    eax = esi + 0x18;
    eax = fcn_00407390 (eax, edi, 0x101);
    eax = *((ebp - 0x1c)) * 0x30;
    *((ebp - 0x20)) = eax;
    eax = eax + 0x418988;
    *((ebp - 0x1c)) = eax;
label_2:
    ecx = eax;
    if (*(eax) == 0) {
        goto label_13;
    }
label_1:
    al = *((ecx + 1));
    if (al == 0) {
        goto label_14;
    }
    edx = *(ecx);
    eax = (int32_t) al;
    while (edx <= eax) {
        if (edx >= 0x100) {
            goto label_15;
        }
        al = *((edi + 0x418970));
        *((esi + edx + 0x19)) |= al;
        edx++;
        eax = *((ecx + 1));
    }
label_15:
    ecx += 2;
    if (*(ecx) != 0) {
        goto label_1;
    }
label_14:
    eax = *((ebp - 0x1c));
label_13:
    edi++;
    eax += 8;
    *((ebp - 0x1c)) = eax;
    if (edi < 4) {
        goto label_2;
    }
    *((esi + 4)) = ebx;
    *((esi + 8)) = 1;
    eax = fcn_004085b2 (ebx);
    *((esi + 0x21c)) = eax;
    eax = *((ebp - 0x20));
    ecx = esi + 0xc;
    edx = eax + 0x41897c;
    edi = 6;
    do {
        ax = *(edx);
        edx = edx + 2;
        *(ecx) = ax;
        ecx = ecx + 2;
        edi--;
    } while (edi != 0);
label_10:
    eax = fcn_004086b9 (esi);
label_11:
    eax = 0;
label_12:
label_3:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408a63 */
#include <stdint.h>
 
void fcn_00408a63 (void) {
    fcn_004092ea (0xd);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40865a */
#include <stdint.h>
 
uint32_t fcn_0040865a (int32_t arg_8h) {
    ebx = *((ebp + 8));
    edi = 0;
    esi = ebx + 0x18;
    eax = fcn_00407390 (esi, edi, 0x101);
    *((ebx + 4)) = edi;
    eax = 0;
    *((ebx + 8)) = edi;
    *((ebx + 0x21c)) = edi;
    ecx = 0x101;
    edi = ebx + 0xc;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    edi = 0x418750;
    edi -= ebx;
    do {
        al = *((edi + esi));
        *(esi) = al;
        esi++;
        ecx--;
    } while (ecx != 0);
    ecx = ebx + 0x119;
    edx = 0x100;
    do {
        al = *((ecx + edi));
        *(ecx) = al;
        ecx++;
        edx--;
    } while (edx != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4085b2 */
#include <stdint.h>
 
int32_t fcn_004085b2 (int32_t arg_8h) {
    eax = *((ebp + 8));
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
                eax = *(str.zh_TW);
                return eax;
            }
            eax = *(str.ko_KR);
            return eax;
        }
        eax = *(str.zh_CN);
        return eax;
    }
    eax = *(0x411f80);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4086b9 */
#include <stdint.h>
 
int32_t fcn_004086b9 (int32_t arg_8h, int32_t arg_20h) {
    int32_t var_520h;
    uint32_t var_51ch;
    LPCPINFO lpCPInfo;
    int32_t var_512h;
    int32_t var_504h;
    int32_t var_304h;
    int32_t var_204h;
    int32_t var_104h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    esi = *((ebp + 8));
    eax = ebp - 0x518;
    eax = GetCPInfo (*((esi + 4)), eax, edi, esi, ebx);
    ebx = 0;
    edi = 0x100;
    if (eax == 0) {
        goto label_1;
    }
    eax = ebx;
    do {
        *((ebp + eax - 0x104)) = al;
        eax++;
    } while (eax < edi);
    al = *((ebp - 0x512));
    ecx = ebp - 0x512;
    *((ebp - 0x104)) = 0x20;
    goto label_2;
label_0:
    edx = *((ecx + 1));
    eax = (int32_t) al;
    while (eax <= edx) {
        if (eax >= edi) {
            goto label_3;
        }
        *((ebp + eax - 0x104)) = 0x20;
        eax++;
    }
label_3:
    ecx += 2;
    al = *(ecx);
label_2:
    if (al != 0) {
        goto label_0;
    }
    fcn_0040b31c (ebx, 1, ebp - 0x104, edi, ebp - 0x504, *((esi + 4)), ebx);
    eax = ebp - 0x204;
    fcn_0040b1c0 (ebx, *((esi + 0x21c)), edi, ebp - 0x104, edi, eax, edi, *((esi + 4)), ebx);
    eax = ebp - 0x304;
    fcn_0040b1c0 (ebx, *((esi + 0x21c)), 0x200, ebp - 0x104, edi, eax, edi, *((esi + 4)), ebx);
    ecx = ebx;
    do {
        eax = *((ebp + ecx*2 - 0x504));
        if ((al & 1) != 0) {
            *((esi + ecx + 0x19)) |= 0x10;
            al = *((ebp + ecx - 0x204));
        } else {
            if ((al & 2) == 0) {
                goto label_4;
            }
            *((esi + ecx + 0x19)) |= 0x20;
            al = *((ebp + ecx - 0x304));
        }
        *((esi + ecx + 0x119)) = al;
        goto label_5;
label_4:
        *((esi + ecx + 0x119)) = bl;
label_5:
        ecx++;
    } while (ecx < edi);
    goto label_6;
label_1:
    edx = esi + 0x119;
    ecx = ebx;
    eax = 0xffffffffffffff9f;
    eax -= edx;
    *((ebp - 0x520)) = eax;
    do {
        edx += ecx;
        eax += edx;
        *((ebp - 0x51c)) = eax;
        eax += 0x20;
        if (eax <= 0x19) {
            *((esi + ecx + 0x19)) |= 0x10;
            eax = ecx + 0x20;
        } else {
            if (*((ebp - 0x51c)) > 0x19) {
                goto label_7;
            }
            eax = esi + ecx;
            *((eax + 0x19)) |= 0x20;
            eax = ecx - 0x20;
        }
        *(edx) = al;
        goto label_8;
label_7:
        *(edx) = bl;
label_8:
        eax = *((ebp - 0x520));
        edx = esi + 0x119;
        ecx++;
    } while (ecx < edi);
label_6:
    ecx = *((ebp - 4));
    edi = 0xffffffffffffff9f;
    esi = 0xffffffffffffff9f;
    ecx ^= ebp;
    ebx = 0xffffffffffffff9f;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b35c */
#include <stdint.h>
 
uint32_t fcn_0040b35c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_7h;
    int32_t var_6h;
    int32_t var_4h;
    ecx = ebp - 0x18;
    fcn_00402d4b (*((ebp + 0x10)));
    ebx = *((ebp + 8));
    eax = ebx + 1;
    if (eax <= 0x100) {
        eax = *((ebp - 0x18));
        eax = *((eax + 0x90));
        eax = *((eax + ebx*2));
    } else {
        eax = ebx;
        ecx = ebp - 0x18;
        eax >>= 8;
        *((ebp + 8)) = eax;
        eax = (int32_t) al;
        eax = fcn_00408e03 (eax, ecx);
        if (eax != 0) {
            eax = *((ebp + 8));
            *((ebp - 8)) = al;
            *((ebp - 7)) = bl;
            *((ebp - 6)) = 0;
            ecx = 2;
        } else {
            ecx = 0;
            *((ebp - 8)) = bl;
            *((ebp - 7)) = 0;
            ecx++;
        }
        eax = *((ebp - 0x18));
        eax = ebp - 0x18;
        eax = fcn_0040b31c (eax, 1, ebp - 8, ecx, ebp - 4, *((eax + 4)), 1);
        if (eax == 0) {
            if (*((ebp - 0xc)) != al) {
                eax = *((ebp - 0x10));
                *((eax + 0x70)) &= 0xfffffffd;
            }
            eax = 0;
            goto label_0;
        }
        eax = *((ebp - 4));
    }
    eax &= *((ebp + 0xc));
    if (*((ebp - 0xc)) != 0) {
        ecx = *((ebp - 0x10));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b573 */
#include <stdint.h>
 
uint32_t fcn_0040b573 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 8));
    if (esi != 0) {
        edx = 0;
        eax = 0xffffffffffffffe0;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        if (eax >= *((ebp + 0xc))) {
            goto label_2;
        }
        fcn_00404026 ();
label_1:
        *(eax) = 0xc;
label_0:
        eax = 0;
        goto label_3;
    }
label_2:
    esi *= *((ebp + 0xc));
    if (esi != 0) {
        goto label_4;
    }
    esi++;
    do {
label_4:
        ecx = 0;
        if (esi <= 0xffffffe0) {
            eax = HeapAlloc (*(0x41993c), 8, esi);
            ecx = eax;
            if (ecx != 0) {
                goto label_5;
            }
        }
        if (*(0x419938) == 0) {
            goto label_6;
        }
        eax = fcn_00406bd8 (esi);
    } while (eax != 0);
    eax = *((ebp + 0x10));
    if (eax == 0) {
        goto label_0;
    }
    goto label_1;
label_6:
    eax = *((ebp + 0x10));
    if (eax != 0) {
        *(eax) = 0xc;
    }
label_5:
    eax = ecx;
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408119 */
#include <stdint.h>
 
void fcn_00408119 (DWORD dwMilliseconds) {
    Sleep (*((ebp + 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b45f */
#include <stdint.h>
 
uint32_t fcn_0040b45f (uint32_t arg_8h, int32_t arg_ch) {
    if (*((ebp + 8)) == 0) {
        fcn_0040265a (*((ebp + 0xc)));
        return;
    }
    esi = *((ebp + 0xc));
    if (esi == 0) {
        eax = fcn_0040295d (*((ebp + 8)));
        eax = 0;
        goto label_1;
    }
    while (esi <= 0xffffffe0) {
        if (esi == 0) {
            esi++;
        }
        eax = HeapReAlloc (*(0x41993c), 0, *((ebp + 8)), esi);
        ebx = eax;
        if (ebx != 0) {
            goto label_2;
        }
        if (*(0x419938) == eax) {
            goto label_3;
        }
        eax = fcn_00406bd8 (esi);
        if (eax == 0) {
            goto label_4;
        }
    }
    fcn_00406bd8 (esi);
    fcn_00404026 ();
    *(eax) = 0xc;
    do {
        eax = 0;
label_0:
label_1:
        return eax;
label_4:
        eax = fcn_00404026 ();
        esi = eax;
        eax = GetLastError ();
        eax = fcn_00404039 (eax);
        *(esi) = eax;
    } while (1);
label_3:
    eax = fcn_00404026 ();
    esi = eax;
    eax = GetLastError ();
    eax = fcn_00404039 (eax);
    *(esi) = eax;
label_2:
    eax = ebx;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b50a */
#include <stdint.h>
 
uint32_t fcn_0040b50a (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    esi = *((ebp + 0xc));
    edi = 0;
    if (esi != 0) {
        edx = 0;
        eax = 0xffffffffffffffe0;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        if (eax < *((ebp + 0x10))) {
            fcn_00404026 ();
            *(eax) = 0xc;
            eax = 0;
        }
    } else {
        esi *= *((ebp + 0x10));
        ebx = *((ebp + 8));
        if (ebx != 0) {
            eax = fcn_0040bfaa (ebx);
            edi = eax;
        }
        eax = fcn_0040b45f (ebx, esi);
        ebx = eax;
        if (ebx != 0) {
            if (edi >= esi) {
                goto label_0;
            }
            esi -= edi;
            eax = edi + ebx;
            fcn_00407390 (eax, 0, esi);
        }
label_0:
        eax = ebx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409177 */
#include <stdint.h>
 
void fcn_00409177 (void) {
    fcn_004092ea (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4092a8 */
#include <stdint.h>
 
void fcn_004092a8 (void) {
    fcn_004092ea (0xa);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4093c8 */
#include <stdint.h>
 
uint32_t fcn_004093c8 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, uint32_t arg_20h) {
    int32_t var_4h;
    *((ebp - 4)) = 0;
    eax = fcn_00406c0b (*((ebp + 0x10)), ebp - 4);
    if (eax == 0) {
        eax |= 0xffffffff;
    } else {
        eax = fcn_0040b67e (*((ebp + 8)), *((ebp + 0xc)), *((ebp - 4)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)));
        esi = eax;
        fcn_0040295d (*((ebp - 4)));
        eax = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40939c */
#include <stdint.h>
 
int32_t fcn_0040939c (void) {
    uint32_t var_20h;
    if (*((ebp - 0x20)) != 0) {
        if (edi != 0) {
            ecx = *(esi);
            eax = *(esi);
            eax >>= 5;
            ecx &= 0x1f;
            ecx <<= 6;
            eax = *((eax*4 + 0x4191d0));
            *((eax + ecx + 4)) &= 0xfe;
        }
        fcn_00409d6d (*(esi));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x406c0b */
#include <stdint.h>
 
int32_t fcn_00406c0b (LPCCH lpMultiByteStr, int32_t arg_ch) {
    int32_t var_4h;
    ebx = 0;
    while (esi == 0) {
        fcn_00404026 ();
        esi = 0x16;
        *(eax) = esi;
        fcn_00402c77 ();
        eax = esi;
        goto label_1;
        esi = *((ebp + 0xc));
    }
    eax = fcn_00407e3e ();
    if (eax == 0) {
        eax = AreFileApisANSI ();
        if (eax != 0) {
            goto label_2;
        }
        ebx = 0;
        ebx++;
    }
label_2:
    eax = 0;
    *(esi) = eax;
    eax = MultiByteToWideChar (ebx, eax, *((ebp + 8)), 0xffffffffffffffff, eax, eax);
    *((ebp - 4)) = eax;
    if (eax != 0) {
        goto label_3;
    }
    eax = GetLastError ();
    eax = fcn_00404005 (eax);
label_0:
    do {
        eax = 0;
        goto label_1;
label_3:
        eax += eax;
        eax = fcn_00408fa3 (eax);
        *(esi) = eax;
    } while (eax == 0);
    eax = MultiByteToWideChar (ebx, 0, *((ebp + 8)), 0xffffffffffffffff, eax, *((ebp - 4)));
    if (eax == 0) {
        eax = GetLastError ();
        fcn_00404005 (eax);
        eax = fcn_0040295d (*(esi));
        *(esi) = 0;
        goto label_0;
    }
    eax = 0;
    eax++;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b67e */
#include <stdint.h>
 
uint32_t fcn_0040b67e (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    HANDLE hObject;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_3h;
    int32_t var_2h;
    int32_t var_1h;
    ebx = 0;
    *((ebp - 0x38)) = 0xc;
    *((ebp - 0x20)) = ebx;
    *((ebp - 2)) = bl;
    *((ebp - 0x34)) = ebx;
    if ((*((ebp + 0x14)) & 0x80) != 0) {
        *((ebp - 0x30)) = ebx;
        *((ebp - 1)) = 0x10;
    } else {
        *((ebp - 0x30)) = 1;
        *((ebp - 1)) = bl;
    }
    eax = fcn_0040c332 (ebp - 0x20);
    if (eax != 0) {
        goto label_6;
    }
    ecx = *((ebp + 0x14));
    eax = 0x8000;
    if ((eax & ecx) == 0) {
        if ((ecx & 0x74000) == 0) {
            if (*((ebp - 0x20)) == eax) {
                goto label_7;
            }
        }
        *((ebp - 1)) |= 0x80;
    }
label_7:
    eax = ecx;
    edx = 0xc0000000;
    eax &= 3;
    eax -= ebx;
    if (eax != 0) {
        eax--;
        if (eax != 0) {
            eax--;
            if (eax != 0) {
                fcn_00403ff2 ();
                *(eax) = ebx;
                eax = *((ebp + 0xc));
                *(eax) |= 0xffffffff;
                fcn_00404026 ();
                ebx = 0x16;
                *(eax) = ebx;
                fcn_00402c77 ();
                eax = ebx;
                goto label_8;
            }
            edi = edx;
        } else {
        } else {
        }
    }
    if ((cl & 8) != 0) {
        if ((ecx & 0x70000) == 0) {
            goto label_9;
        }
        edi = edx;
        *((ebp - 8)) = edx;
        goto label_10;
    }
label_9:
    edi = 0x40000000;
    edi = 0x80000000;
    *((ebp - 8)) = edi;
label_10:
    eax = *((ebp + 0x18));
    esi = 0x10;
    edx = 2;
    *((ebp - 0x28)) = edx;
    eax -= esi;
    if (eax != 0) {
        eax -= esi;
        if (eax != 0) {
            eax -= esi;
            if (eax != 0) {
                eax -= esi;
                if (eax != 0) {
                    eax -= 0x40;
                    if (eax != 0) {
                        goto label_11;
                    }
                    al = (edi == 0x80000000) ? 1 : 0;
                    *((ebp - 0xc)) = eax;
                    *((ebp - 0xc)) = 3;
                    *((ebp - 0xc)) = edx;
                    *((ebp - 0xc)) = 1;
                } else {
                } else {
                } else {
                } else {
                    *((ebp - 0xc)) = ebx;
                }
            }
        }
    }
    eax = ecx;
    esi = 0x400;
    eax &= 0x700;
    if (eax > esi) {
        goto label_12;
    }
    if (eax != esi) {
        if (eax != 0) {
            if (eax != 0x100) {
                if (eax == 0x200) {
                    goto label_13;
                }
                if (eax != 0x300) {
                    goto label_11;
                }
                esi = edx;
                goto label_14;
            }
        }
    } else {
    }
    do {
        esi = 3;
        goto label_14;
label_12:
        if (eax == 0x500) {
            goto label_15;
        }
        if (eax != 0x600) {
            if (eax == 0x700) {
                goto label_15;
            }
label_11:
            fcn_00403ff2 ();
            *(eax) = ebx;
            eax = *((ebp + 0xc));
            *(eax) |= 0xffffffff;
            fcn_00404026 ();
            ebx = 0x16;
            *(eax) = ebx;
            fcn_00402c77 ();
            goto label_16;
        }
label_13:
    } while (1);
label_15:
    esi = 0;
    esi++;
label_14:
    edx = 0x80;
    eax = ebx;
    *((ebp - 0x18)) = edx;
    *((ebp - 0x10)) = eax;
    if ((ecx & 0x100) != 0) {
        eax = *(0x4192f4);
        eax = ~eax;
        eax &= *((ebp + 0x1c));
        eax = ebx;
        if (al < 0) {
            goto label_17;
        }
        edx = 0;
        edx++;
        *((ebp - 0x18)) = edx;
    }
label_17:
    if ((cl & 0x40) != 0) {
        edi |= 0x10000;
        eax = 0x4000000;
        *((ebp - 0xc)) |= 4;
        *((ebp - 0x10)) = eax;
        *((ebp - 8)) = edi;
    }
    if ((ecx & 0x1000) != 0) {
        edx |= 0x100;
        *((ebp - 0x18)) = edx;
    }
    if ((ecx & 0x2000) != 0) {
        eax |= 0x2000000;
        *((ebp - 0x10)) = eax;
    }
    if ((cl & 0x20) != 0) {
        eax |= 0x8000000;
    } else {
        if ((cl & 0x10) == 0) {
            goto label_18;
        }
        eax |= 0x10000000;
    }
    *((ebp - 0x10)) = eax;
label_18:
    eax = fcn_00409a55 ();
    edi = *((ebp + 0xc));
    *(edi) = eax;
    if (eax == -1) {
        fcn_00403ff2 ();
        *(eax) = ebx;
        *(edi) |= 0xffffffff;
        fcn_00404026 ();
        *(eax) = 0x18;
        eax = fcn_00404026 ();
        eax = *(eax);
label_5:
label_8:
        return eax;
    }
    eax = *((ebp + 8));
    *(eax) = 1;
    eax = fcn_0040b5f6 (*((ebp + 0x10)), *((ebp - 8)), *((ebp - 0xc)), ebp - 0x38, esi, *((ebp - 0x18)), *((ebp - 0x10)));
    *((ebp - 0x1c)) = eax;
    if (eax != -1) {
        goto label_19;
    }
    ecx = *((ebp - 8));
    edx = 0xc0000000;
    eax = ecx;
    eax &= edx;
    if (eax == edx) {
        if ((*((ebp + 0x14)) & 1) == 0) {
            goto label_20;
        }
        eax = ebp - 0x38;
        ecx &= 0x7fffffff;
        *((ebp - 8)) = ecx;
        eax = fcn_0040b5f6 (*((ebp + 0x10)), ecx, *((ebp - 0xc)), eax, esi, *((ebp - 0x18)), *((ebp - 0x10)));
        *((ebp - 0x1c)) = eax;
        if (eax != -1) {
            goto label_19;
        }
    }
label_20:
    ecx = *(edi);
    eax = *(edi);
    eax >>= 5;
    ecx &= 0x1f;
    ecx <<= 6;
    eax = *((eax*4 + 0x4191d0));
    *((eax + ecx + 4)) &= 0xfe;
    eax = GetLastError ();
    fcn_00404005 (eax);
label_1:
    do {
label_0:
        eax = fcn_00404026 ();
        ebx = *(eax);
        goto label_16;
label_19:
        eax = GetFileType (eax);
        if (eax != 0) {
            goto label_21;
        }
        ecx = *(edi);
        eax = *(edi);
        eax >>= 5;
        ecx &= 0x1f;
        ecx <<= 6;
        eax = *((eax*4 + 0x4191d0));
        *((eax + ecx + 4)) &= 0xfe;
        eax = GetLastError ();
        esi = eax;
        fcn_00404005 (esi);
        CloseHandle (*((ebp - 0x1c)));
    } while (esi != 0);
    fcn_00404026 ();
    *(eax) = 0xd;
    goto label_0;
label_21:
    if (eax == 2) {
        *((ebp - 1)) |= 0x40;
    } else {
        if (eax != 3) {
            goto label_22;
        }
        *((ebp - 1)) |= 8;
    }
label_22:
    fcn_00409ceb (*(edi), *((ebp - 0x1c)));
    dl = *((ebp - 1));
    ecx = *(edi);
    dl |= 1;
    eax = ecx;
    *((ebp - 1)) = dl;
    eax >>= 5;
    ecx &= 0x1f;
    ecx <<= 6;
    eax = *((eax*4 + 0x4191d0));
    *((eax + ecx + 4)) = dl;
    ecx = *(edi);
    eax = *(edi);
    eax >>= 5;
    ecx &= 0x1f;
    ecx <<= 6;
    eax = *((eax*4 + 0x4191d0));
    *((eax + ecx + 0x24)) &= 0x80;
    al = dl;
    ecx = *((ebp + 0x14));
    al &= 0x48;
    *((ebp - 3)) = al;
    if (al != 0) {
        goto label_23;
    }
    if (dl >= 0) {
        goto label_24;
    }
    if ((cl & 2) == 0) {
        goto label_23;
    }
    eax = fcn_00404ed4 (*(edi), 0xffffffffffffffff, 0xffffffffffffffff, 2);
    ecx = eax;
    *((ebp - 0x2c)) = eax;
    ecx &= edx;
    *((ebp - 0x14)) = edx;
    if (ecx != -1) {
        goto label_25;
    }
    eax = fcn_00403ff2 ();
    if (*(eax) == 0x83) {
        goto label_26;
    }
    do {
label_2:
        fcn_004049e1 (*(edi));
        goto label_1;
label_25:
        eax = ebp - 0x24;
        *((ebp - 0x24)) = ebx;
        eax = fcn_0040509f (*(edi), eax, 1);
        if (eax != 0) {
            goto label_27;
        }
        if (*((ebp - 0x24)) != 0x1a) {
            goto label_27;
        }
        eax = fcn_0040c17c (*(edi), *((ebp - 0x2c)), *((ebp - 0x14)));
    } while (eax == -1);
label_27:
    eax = fcn_00404ed4 (*(edi), ebx, ebx, ebx);
    eax &= edx;
    if (eax == -1) {
        goto label_2;
    }
label_26:
    dl = *((ebp - 1));
    ecx = *((ebp + 0x14));
label_23:
    if (dl >= 0) {
        goto label_24;
    }
    if ((ecx & 0x74000) == 0) {
        eax = *((ebp - 0x20));
        eax &= 0x74000;
        if (eax == 0) {
            ecx |= 0x4000;
        } else {
            ecx |= eax;
        }
        *((ebp + 0x14)) = ecx;
    }
    eax = ecx;
    eax &= 0x74000;
    if (eax != 0x4000) {
        if (eax != 0x10000) {
            if (eax != 0x14000) {
                if (eax == 0x20000) {
                    goto label_28;
                }
                if (eax == 0x24000) {
                    goto label_28;
                }
                if (eax != 0x40000) {
                    if (eax != 0x44000) {
                        goto label_29;
                    }
                }
                *((ebp - 2)) = 1;
            }
            eax = ecx;
            eax &= 0x301;
        } else {
        } else {
        }
    }
    if (eax != 0x301) {
        goto label_29;
    }
label_28:
    *((ebp - 2)) = 2;
    *((ebp - 2)) = bl;
label_29:
    if ((ecx & 0x70000) == 0) {
        goto label_24;
    }
    *((ebp - 0x14)) = ebx;
    if ((dl & 0x40) != 0) {
        goto label_24;
    }
    eax = *((ebp - 8));
    ecx = 0xc0000000;
    eax &= ecx;
    if (eax == 0x40000000) {
        goto label_30;
    }
    if (eax == 0x80000000) {
        goto label_31;
    }
    if (eax != ecx) {
        goto label_24;
    }
    if (esi == 0) {
        goto label_24;
    }
    ecx = 2;
    if (esi <= ecx) {
        goto label_32;
    }
    if (esi > 4) {
label_3:
        if (esi == 5) {
            goto label_32;
        }
        goto label_24;
    }
    eax = fcn_00404ed4 (*(edi), ebx, ebx, ecx);
    eax |= edx;
    if (eax == 0) {
        goto label_33;
    }
    eax = fcn_00404ed4 (*(edi), ebx, ebx, ebx);
    eax &= edx;
    if (eax == -1) {
        goto label_2;
    }
label_31:
    eax = fcn_0040509f (*(edi), ebp - 0x14, 3);
    if (eax == -1) {
        goto label_2;
    }
    ecx = *((ebp - 0x14));
    edx = 2;
    if (eax != edx) {
        if (eax != 3) {
            goto label_34;
        }
        if (ecx != 0xbfbbef) {
            goto label_35;
        }
        *((ebp - 2)) = 1;
        goto label_24;
    }
label_35:
    ecx &= 0xffff;
    if (ecx == 0xfffe) {
        fcn_004049e1 (*(edi));
        fcn_00404026 ();
        ebx = 0x16;
        *(eax) = ebx;
        goto label_16;
    }
    if (ecx != 0xfeff) {
        goto label_34;
    }
    eax = fcn_00404ed4 (*(edi), edx, ebx, ebx);
    eax &= edx;
    if (eax == -1) {
        goto label_2;
    }
    *((ebp - 2)) = 2;
    goto label_24;
label_30:
    if (esi == 0) {
        goto label_24;
    }
    ecx = 2;
    if (esi <= ecx) {
        goto label_32;
    }
    if (esi > 4) {
        goto label_3;
    }
    eax = fcn_00404ed4 (*(edi), ebx, ebx, ecx);
    eax |= edx;
    if (eax != 0) {
label_34:
        eax = fcn_00404ed4 (*(edi), ebx, ebx, ebx);
        eax &= edx;
        if (eax != -1) {
            goto label_24;
        }
        goto label_2;
    }
label_33:
    ecx = 2;
label_32:
    eax = *((ebp - 2));
    esi = ebx;
    eax--;
    if (eax != 0) {
        eax--;
        if (eax != 0) {
            goto label_24;
        }
        *((ebp - 0x14)) = 0xfeff;
    } else {
        ecx = 3;
        *((ebp - 0x14)) = 0xbfbbef;
        *((ebp - 0x28)) = ecx;
    }
label_4:
    eax = ecx;
    eax -= esi;
    eax = ebp - 0x14;
    eax += esi;
    eax = fcn_00406284 (*(edi), eax, eax);
    if (eax == -1) {
        goto label_2;
    }
    ecx = *((ebp - 0x28));
    esi += eax;
    if (ecx > esi) {
        goto label_4;
    }
label_24:
    edx = *(edi);
    eax = *(edi);
    eax >>= 5;
    edx &= 0x1f;
    edx <<= 6;
    ecx = *((eax*4 + 0x4191d0));
    al = *((ecx + edx + 0x24));
    al ^= *((ebp - 2));
    al &= 0x7f;
    *((ecx + edx + 0x24)) ^= al;
    esi = *(edi);
    eax = *(edi);
    ecx = *((ebp + 0x14));
    esi &= 0x1f;
    eax >>= 5;
    esi <<= 6;
    ecx >>= 0x10;
    cl <<= 7;
    edx = *((eax*4 + 0x4191d0));
    al = *((edx + esi + 0x24));
    al &= 0x7f;
    cl |= al;
    *((edx + esi + 0x24)) = cl;
    ecx = *((ebp + 0x14));
    if (*((ebp - 3)) == bl) {
        if ((cl & 8) == 0) {
            goto label_36;
        }
        ecx = *(edi);
        eax = *(edi);
        eax >>= 5;
        ecx &= 0x1f;
        ecx <<= 6;
        eax = *((eax*4 + 0x4191d0));
        *((eax + ecx + 4)) |= 0x20;
        ecx = *((ebp + 0x14));
    }
label_36:
    esi = *((ebp - 8));
    edx = 0xc0000000;
    eax = esi;
    eax &= edx;
    if (eax == edx) {
        if ((cl & 1) == 0) {
            goto label_16;
        }
        CloseHandle (*((ebp - 0x1c)));
        eax = ebp - 0x38;
        esi &= 0x7fffffff;
        eax = fcn_0040b5f6 (*((ebp + 0x10)), esi, *((ebp - 0xc)), eax, 3, *((ebp - 0x18)), *((ebp - 0x10)));
        if (eax == -1) {
            eax = GetLastError ();
            fcn_00404005 (eax);
            ecx = *(edi);
            eax = *(edi);
            eax >>= 5;
            ecx &= 0x1f;
            ecx <<= 6;
            eax = *((eax*4 + 0x4191d0));
            *((eax + ecx + 4)) &= 0xfe;
            eax = fcn_00409bfe (*(edi));
            goto label_1;
        }
        edx = *(edi);
        ecx = *(edi);
        ecx >>= 5;
        edx &= 0x1f;
        edx <<= 6;
        ecx = *((ecx*4 + 0x4191d0));
        *((edx + ecx)) = eax;
    }
label_16:
    eax = ebx;
    goto label_5;
label_6:
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40bde0 */
#include <stdint.h>
 
uint32_t fcn_0040bde0 (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    ecx = *((esp + 0xc));
    edx = *((esp + 0x10));
    ebx = *((esp + 0x14));
    if ((ebx & -1) == 0) {
        goto label_2;
    }
    ecx -= edx;
    if ((edx & 3) == 0) {
        goto label_1;
    }
    do {
label_0:
        eax = *((edx + ecx));
        if (al != *(edx)) {
            goto label_3;
        }
        if (eax == 0) {
            ebx = eax;
        }
        edx++;
        ebx--;
        if (ebx <= 0) {
            goto label_2;
        }
    } while ((dl & 3) != 0);
label_1:
    eax = edx + ecx;
    eax &= 0xfff;
    if (eax > 0xffc) {
        goto label_0;
    }
    eax = *((edx + ecx));
    if (eax != *(edx)) {
        goto label_0;
    }
    ebx -= 4;
    if (ebx <= 0) {
        goto label_2;
    }
    esi = eax - 0x1010101;
    edx += 4;
    eax = ~eax;
    eax &= esi;
    if ((eax & 0x80808080) == 0) {
        goto label_1;
    }
label_2:
    eax = 0;
    ebx = esi;
    return eax;
label_3:
    eax -= eax;
    eax |= 1;
    ebx = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40be58 */
#include <stdint.h>
 
int32_t fcn_0040be58 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h) {
    if (*(0x419f34) != 0) {
        goto label_0;
    }
    while (*((ebp + 0xc)) == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00402c77 ();
        eax = 0x7fffffff;
        goto label_1;
    }
    esi = 0x7fffffff;
    if (*((ebp + 0x10)) > esi) {
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00402c77 ();
        eax = esi;
    } else {
        void (*0x40c430)() ();
label_0:
        fcn_0040bec3 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), 0);
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4098f5 */
#include <stdint.h>
 
int32_t fcn_004098f5 (int32_t arg_10h, uint32_t arg_2ch) {
    int32_t var_4h;
    int32_t var_ch;
    eax = *((esp + 0x10));
    eax = *(0x4183f0);
    eax ^= esp;
    eax = esp + 4;
    *(fs:0) = eax;
    do {
        eax = *((esp + 0x28));
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        if (esi == -1) {
            goto label_0;
        }
        if (*((esp + 0x2c)) != -1) {
            if (esi <= *((esp + 0x2c))) {
                goto label_0;
            }
        }
        esi *= 3;
        ecx = *((ebx + esi*4));
        *((esp + 0xc)) = ecx;
        *((eax + 0xc)) = ecx;
        if (*((ebx + esi*4 + 4)) == 0) {
            eax = *((ebx + esi*4 + 8));
            fcn_004099a5 (0x101);
            eax = *((ebx + esi*4 + 8));
            fcn_004099c4 ();
        }
    } while (1);
label_0:
    ecx = *((esp + 4));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409b2d */
#include <stdint.h>
 
void fcn_00409b2d (void) {
    fcn_004092ea (0xa);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409bf5 */
#include <stdint.h>
 
void fcn_00409bf5 (void) {
    fcn_004092ea (0xb);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409e5b */
#include <stdint.h>
 
void fcn_00409e5b (void) {
    fcn_00409d6d (edi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40bf8b */
#include <stdint.h>
 
int32_t fcn_0040bf8b (void) {
    eax = 0;
    eax = CreateFileW ("CONOUT$", 0x40000000, 3, eax, 3, eax, eax);
    *(0x418e70) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40bfaa */
#include <stdint.h>
 
int32_t fcn_0040bfaa (uint32_t arg_8h) {
    if (*((ebp + 8)) == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax |= 0xffffffff;
        return eax;
    }
    HeapSize (*(0x41993c), 0, *((ebp + 8)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x408fea */
#include <stdint.h>
 
uint32_t fcn_00408fea (int32_t arg_8h, uint32_t arg_ch) {
    esi = 0;
    do {
        eax = fcn_0040b45f (*((ebp + 8)), *((ebp + 0xc)));
        edi = eax;
        if (edi != 0) {
            goto label_0;
        }
        if (*((ebp + 0xc)) == eax) {
            goto label_0;
        }
        if (*(0x419a68) <= eax) {
            goto label_0;
        }
        fcn_00408119 (esi);
        esi += 0x3e8;
        if (esi > *(0x419a68)) {
            esi |= 0xffffffff;
        }
    } while (esi != -1);
label_0:
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a580 */
#include <stdint.h>
 
int32_t fcn_0040a580 (int32_t arg_8h, int32_t arg_ch) {
    edx = *((ebp + 0xc));
    ecx = *(0x411c90);
    esi = *((ebp + 8));
    do {
        if (*((edx + 4)) == esi) {
            goto label_0;
        }
        eax = ecx * 0xc;
        edx += 0xc;
        eax += *((ebp + 0xc));
    } while (edx < eax);
label_0:
    ecx *= 0xc;
    ecx += *((ebp + 0xc));
    if (edx < ecx) {
        if (*((edx + 4)) == esi) {
            eax = edx;
        }
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a546 */
#include <stdint.h>
 
void fcn_0040a546 (void) {
    if (ebx != 0) {
        fcn_004092ea (0);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c150 */
#include <stdint.h>
 
int32_t fcn_0040c150 (int32_t arg_8h) {
    ecx = esp + 8;
    ecx -= eax;
    ecx &= 0xf;
    eax += ecx;
    ecx -= ecx;
    eax |= ecx;
    return void (*0x404f60)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c096 */
#include <stdint.h>
 
int32_t fcn_0040c096 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    eax = *(0x419fd0);
    eax ^= *(0x4183f0);
    if (? != ?) {
        ecx = 0;
        void (*eax)(uint32_t*, uint32_t*, uint32_t*, uint32_t*, uint32_t*, uint32_t*, uint32_t, uint32_t, uint32_t) (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), *((ebp + 0x1c)), ecx, ecx, ecx);
        return eax;
    }
    eax = fcn_0040c06c (*((ebp + 8)));
    LCMapStringW (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c06c */
#include <stdint.h>
 
uint32_t fcn_0040c06c (uint32_t arg_8h) {
    if (*((ebp + 8)) != 0) {
        eax = fcn_0040c01e (*((ebp + 8)));
        if (eax < 0) {
            goto label_0;
        }
        if (eax >= 0xe4) {
            goto label_0;
        }
        eax = *((eax*8 + 0x412c48));
        return eax;
    }
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c01e */
#include <stdint.h>
 
uint32_t fcn_0040c01e (uint32_t arg_8h) {
    edi = 0;
    ebx = 0xe3;
    do {
        eax = ebx + edi;
        edx:eax = (int64_t) eax;
        eax -= edx;
        esi = eax;
        esi >>= 1;
        eax = fcn_0040c0e2 (*((ebp + 8)), *((esi*8 + 0x413368)), 0x55);
        if (eax == 0) {
            goto label_0;
        }
        if (eax < 0) {
            ebx = esi - 1;
        } else {
            edi = esi + 1;
        }
    } while (edi <= ebx);
    eax |= 0xffffffff;
    goto label_1;
label_0:
    eax = *((esi*8 + 0x41336c));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b206 */
#include <stdint.h>
 
int32_t fcn_0040b206 (int32_t arg_8h) {
    eax = *((ebp + 8));
    if (eax != 0) {
        eax -= 8;
        if (*(eax) != 0xdddd) {
            goto label_0;
        }
        fcn_0040295d (eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b456 */
#include <stdint.h>
 
void fcn_0040b456 (void) {
    fcn_004092ea (0xc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c332 */
#include <stdint.h>
 
int32_t fcn_0040c332 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    if (ecx == 0) {
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00402c77 ();
        eax = 0x16;
        return eax;
    }
    eax = *(0x419f3c);
    *(ecx) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409a55 */
#include <stdint.h>
 
uint32_t fcn_00409a55 (void) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x4178f8);
    esi |= 0xffffffff;
    *((ebp - 0x1c)) = esi;
    *((ebp - 0x24)) = 0;
    eax = fcn_00409208 (0xb);
    if (eax == 0) {
        eax |= esi;
        goto label_2;
    }
    fcn_00409180 (0xb);
    *((ebp - 4)) = 0;
    ebx = 0;
label_1:
    *((ebp - 0x28)) = ebx;
    if (ebx >= 0x40) {
        goto label_3;
    }
    edi = *((ebx*4 + 0x4191d0));
    if (edi == 0) {
        goto label_4;
    }
    do {
        *((ebp - 0x20)) = edi;
        eax = *((ebx*4 + 0x4191d0));
        eax += 0x800;
        if (edi >= eax) {
            goto label_5;
        }
        if ((*((edi + 4)) & 1) == 0) {
            if (*((edi + 8)) == 0) {
                fcn_00409180 (0xa);
                *((ebp - 4)) = 1;
                if (*((edi + 8)) == 0) {
                    fcn_00407e10 (edi + 0xc, 0xfa0, 0);
                    *((edi + 8))++;
                }
                *((ebp - 4)) = 0;
                fcn_00409b2d ();
            }
            eax = *((ebp - 0x24));
            if (eax != 0) {
                goto label_0;
            }
            EnterCriticalSection (edi + 0xc);
            if ((*((edi + 4)) & 1) == 0) {
                goto label_6;
            }
            LeaveCriticalSection (edi + 0xc);
        }
label_0:
        edi += 0x40;
    } while (1);
label_6:
    eax = *((ebp - 0x24));
    if (eax != 0) {
        goto label_0;
    }
    *((edi + 4)) = 1;
    *(edi) |= 0xffffffff;
    esi = edi;
    esi -= *((ebx*4 + 0x4191d0));
    esi >>= 6;
    eax = ebx;
    eax <<= 5;
    esi += eax;
    *((ebp - 0x1c)) = esi;
label_5:
    if (esi != -1) {
        goto label_3;
    }
    ebx++;
    goto label_1;
label_4:
    eax = fcn_00408f5b (0x20, 0x40);
    ecx = eax;
    *((ebp - 0x20)) = ecx;
    if (ecx == 0) {
        goto label_3;
    }
    *((ebx*4 + 0x4191d0)) = ecx;
    *(0x419ff8) += 0x20;
    do {
        eax = *((ebx*4 + 0x4191d0));
        eax += 0x800;
        if (ecx >= eax) {
            goto label_7;
        }
        *((ecx + 4)) = 0xa00;
        *(ecx) |= 0xffffffff;
        *((ecx + 8)) = 0;
        ecx += 0x40;
        *((ebp - 0x20)) = ecx;
    } while (1);
label_7:
    esi = ebx;
    esi <<= 5;
    *((ebp - 0x1c)) = esi;
    eax = esi;
    eax >>= 5;
    ecx = esi;
    ecx &= 0x1f;
    ecx <<= 6;
    eax = *((eax*4 + 0x4191d0));
    *((eax + ecx + 4)) = 1;
    eax = fcn_004099c7 (esi);
    if (eax == 0) {
        esi |= 0xffffffff;
        *((ebp - 0x1c)) = esi;
    }
label_3:
    *((ebp - 4)) = 0xfffffffe;
    fcn_00409bf5 ();
    eax = esi;
label_2:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40b5f6 */
#include <stdint.h>
 
uint32_t fcn_0040b5f6 (LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = fcn_00407e3e ();
    if (eax != 0) {
        eax = GetModuleHandleW (0x411ca0, "CreateFile2");
        eax = GetProcAddress (eax);
        ecx = eax;
        if (ecx == 0) {
            eax |= 0xffffffff;
        } else {
            eax = *((ebp + 0x1c));
        }
        *((ebp - 0xc)) = 0;
        *((ebp - 4)) = 0;
        *((ebp - 0x14)) = eax;
        eax = *((ebp + 0x20));
        *((ebp - 0x10)) = eax;
        eax = *((ebp + 0x14));
        *((ebp - 8)) = eax;
        *((ebp - 0x18)) = 0x18;
        void (*ecx)(uint32_t*, uint32_t*, uint32_t*, uint32_t*, uint32_t) (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x18)), ebp - 0x18);
    } else {
        eax = *((ebp + 0x1c));
        eax |= *((ebp + 0x20));
        CreateFileW (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), eax, 0);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x409ceb */
#include <stdint.h>
 
int32_t fcn_00409ceb (int32_t arg_8h, HANDLE arg_ch) {
    ecx = *((ebp + 8));
    if (ecx >= 0) {
        if (ecx < *(0x419ff8)) {
            ebx = ecx;
            edi = ecx;
            ebx >>= 5;
            edi &= 0x1f;
            edi <<= 6;
            eax = *((ebx*4 + 0x4191d0));
            if (*((edi + eax)) != -1) {
                goto label_0;
            }
            esi = *((ebp + 0xc));
            if (*(0x419308) == 1) {
                if (ecx != 0) {
                    ecx--;
                    if (ecx != 0) {
                        ecx--;
                        if (ecx != 0) {
                            goto label_1;
                        }
                        SetStdHandle (0xfffffffffffffff4, esi);
                        SetStdHandle (0xfffffffffffffff5, esi);
                    } else {
                    } else {
                    }
                }
                SetStdHandle (0xfffffffffffffff6, esi);
            }
label_1:
            eax = *((ebx*4 + 0x4191d0));
            *((edi + eax)) = esi;
            eax = 0;
        }
    } else {
label_0:
        fcn_00404026 ();
        *(eax) = 9;
        eax = fcn_00403ff2 ();
        *(eax) = 0;
        eax |= 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c17c */
#include <stdint.h>
 
uint32_t fcn_0040c17c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    LPVOID var_ch;
    int32_t var_8h;
    int32_t var_4h;
    edi = *((ebp + 8));
    esi = 0;
    ebx = esi;
    *((ebp - 8)) = esi;
    eax = fcn_00404ed4 (edi, esi, esi, 1);
    ecx = edx;
    *((ebp - 0x18)) = eax;
    eax &= ecx;
    *((ebp - 0x14)) = ecx;
    if (eax != -1) {
        eax = fcn_00404ed4 (edi, esi, esi, 2);
        ecx = eax;
        eax &= edx;
        if (eax == -1) {
            goto label_1;
        }
        esi = *((ebp + 0xc));
        eax = *((ebp + 0x10));
        esi -= ecx;
        eax -= edx;
        *((ebp - 4)) = eax;
        if (eax < 0) {
            goto label_3;
        }
        if (eax <= 0) {
            if (esi == 0) {
                goto label_3;
            }
        }
        eax = GetProcessHeap (8, 0x1000);
        eax = HeapAlloc (eax);
        *((ebp - 0xc)) = eax;
        if (eax != 0) {
            goto label_4;
        }
        fcn_00404026 ();
        *(eax) = 0xc;
    }
label_1:
    eax = fcn_00404026 ();
    eax = *(eax);
label_2:
    return eax;
label_4:
    eax = fcn_0040c35c (edi, 0x8000);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 4));
    do {
label_0:
        if (eax >= 0) {
            if (eax <= 0) {
                if (esi < 0x1000) {
                    goto label_5;
                }
            }
            eax = 0x1000;
        } else {
label_5:
            eax = esi;
        }
        eax = fcn_00406373 (edi, *((ebp - 0xc)), eax);
        if (eax == -1) {
            goto label_6;
        }
        edx:eax = (int64_t) eax;
        esi -= eax;
        eax = *((ebp - 4));
        eax -= edx;
        *((ebp - 4)) = eax;
        if (eax < 0) {
            goto label_7;
        }
    } while (eax > 0);
    if (esi != 0) {
        goto label_0;
label_6:
        eax = fcn_00403ff2 ();
        if (*(eax) == 5) {
            fcn_00404026 ();
            *(eax) = 0xd;
        }
        ebx |= 0xffffffff;
        *((ebp - 8)) |= ebx;
    }
label_7:
    fcn_0040c35c (edi, *((ebp - 0x10)));
    eax = GetProcessHeap (0, *((ebp - 0xc)));
    eax = HeapFree (eax);
    goto label_8;
label_3:
    if (eax > 0) {
        goto label_9;
    }
    if (eax >= 0) {
        if (esi >= 0) {
            goto label_9;
        }
    }
    eax = fcn_00404ed4 (edi, *((ebp + 0xc)), *((ebp + 0x10)), 0);
    eax &= edx;
    if (eax == -1) {
        goto label_1;
    }
    eax = fcn_00409c84 (edi);
    eax = SetEndOfFile (eax);
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    edx:eax = (int64_t) eax;
    ebx = eax;
    eax = edx;
    ecx = ebx;
    *((ebp - 8)) = eax;
    ecx &= eax;
    if (ecx != -1) {
        goto label_9;
    }
    fcn_00404026 ();
    *(eax) = 0xd;
    eax = fcn_00403ff2 ();
    esi = eax;
    eax = GetLastError ();
    *(esi) = eax;
label_8:
    ebx &= *((ebp - 8));
    if (ebx == -1) {
        goto label_1;
    }
label_9:
    eax = fcn_00404ed4 (edi, *((ebp - 0x18)), *((ebp - 0x14)), 0);
    eax &= edx;
    if (eax == -1) {
        goto label_1;
    }
    eax = 0;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40bec3 */
#include <stdint.h>
 
int32_t fcn_0040bec3 (uint32_t arg_8h, uint32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    if (*((ebp + 0x10)) == 0) {
        goto label_0;
    }
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0x14)));
    edi = *((ebp + 8));
    esi = 0x7fffffff;
    if (edi != 0) {
        ebx = *((ebp + 0xc));
        if (ebx == 0) {
            goto label_1;
        }
        ecx = *((ebp + 0x10));
        if (ecx <= esi) {
            goto label_2;
        }
    }
label_1:
    fcn_00404026 ();
    *(eax) = 0x16;
    fcn_00402c77 ();
    goto label_3;
label_2:
    eax = *((ebp - 0x10));
    if (*((eax + 0xa8)) == 0) {
        eax = fcn_0040c430 (edi, ebx, ecx);
        esi = eax;
        goto label_3;
    }
    edi -= ebx;
    do {
        eax = *((edi + ebx));
        eax = fcn_0040c491 (eax, ebp - 0x10);
        ecx = ebp - 0x10;
        esi = eax;
        eax = *(ebx);
        eax = fcn_0040c491 (eax, ecx);
        ebx++;
        *((ebp + 0x10))--;
        if (*((ebp + 0x10)) == 0) {
            goto label_4;
        }
        if (esi == 0) {
            goto label_4;
        }
    } while (esi == eax);
label_4:
    esi -= eax;
label_3:
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = esi;
    goto label_5;
label_0:
    eax = 0;
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c430 */
#include <stdint.h>
 
int32_t fcn_0040c430 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    ecx = *((ebp + 0x10));
    ecx |= ecx;
    if (ecx == 0) {
        goto label_0;
    }
    esi = *((ebp + 8));
    edi = *((ebp + 0xc));
    bh = 0x41;
    bl = 0x5a;
    dh = 0x20;
    do {
        ah = *(esi);
        ah |= ah;
        al = *(edi);
        if (ah == 0) {
            goto label_1;
        }
        al |= al;
        if (al == 0) {
            goto label_1;
        }
        esi++;
        edi++;
        if (ah >= bh) {
            if (ah > bl) {
                goto label_2;
            }
            ah += dh;
        }
label_2:
        if (al >= bh) {
            if (al > bl) {
                goto label_3;
            }
            al += dh;
        }
label_3:
        if (ah != al) {
            goto label_4;
        }
        ecx--;
    } while (ecx != 0);
label_1:
    ecx = 0;
    if (ah != al) {
label_4:
        ecx = 0xffffffff;
        if (ah < al) {
            goto label_0;
        }
        ecx = -ecx;
    }
label_0:
    eax = ecx;
    esi = ebx;
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c491 */
#include <stdint.h>
 
uint32_t fcn_0040c491 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_7h;
    int32_t var_4h;
    int32_t var_3h;
    int32_t var_2h;
    ecx = ebp - 0x18;
    fcn_00402d4b (*((ebp + 0xc)));
    ebx = *((ebp + 8));
    edi = 0x100;
    if (ebx >= edi) {
        goto label_1;
    }
    ecx = *((ebp - 0x18));
    if (*((ecx + 0x74)) > 1) {
        fcn_0040b35c (ebx, 1, ebp - 0x18);
        ecx = *((ebp - 0x18));
    } else {
        eax = *((ecx + 0x90));
        eax = *((eax + ebx*2));
        eax &= 1;
    }
    if (eax != 0) {
        eax = *((ecx + 0x94));
        ecx = *((eax + ebx));
        if (*((ebp - 0xc)) != 0) {
            eax = *((ebp - 0x10));
            *((eax + 0x70)) &= 0xfffffffd;
        }
        eax = ecx;
        goto label_2;
    }
    if (*((ebp - 0xc)) == 0) {
        goto label_0;
    }
    ecx = *((ebp - 0x10));
    *((ecx + 0x70)) &= 0xfffffffd;
    do {
label_0:
        eax = ebx;
        goto label_2;
label_1:
        eax = *((ebp - 0x18));
        if (*((eax + 0x74)) > 1) {
            eax = ebx;
            ecx = ebp - 0x18;
            eax >>= 8;
            *((ebp + 8)) = eax;
            eax = (int32_t) al;
            eax = fcn_00408e03 (eax, ecx);
            if (eax != 0) {
                eax = *((ebp + 8));
                *((ebp - 4)) = al;
                *((ebp - 3)) = bl;
                *((ebp - 2)) = 0;
                ecx = 2;
            }
        } else {
            fcn_00404026 ();
            ecx = 0;
            ecx++;
            *(eax) = 0x2a;
            *((ebp - 4)) = bl;
            *((ebp - 3)) = 0;
        }
        eax = *((ebp - 0x18));
        edx = ebp - 8;
        eax = fcn_0040b1c0 (ebp - 0x18, *((eax + 0xa8)), edi, ebp - 4, ecx, edx, 3, *((eax + 4)), 1);
        if (eax != 0) {
            goto label_3;
        }
    } while (*((ebp - 0xc)) == al);
    eax = *((ebp - 0x10));
    *((eax + 0x70)) &= 0xfffffffd;
    goto label_0;
label_3:
    if (eax == 1) {
        eax = *((ebp - 8));
        if (*((ebp - 0xc)) == 0) {
            goto label_2;
        }
        ecx = *((ebp - 0x10));
        *((ecx + 0x70)) &= 0xfffffffd;
    } else {
        edx = *((ebp - 8));
        eax = *((ebp - 7));
        edx <<= 8;
        edx |= eax;
        if (*((ebp - 0xc)) != 0) {
            ecx = *((ebp - 0x10));
            *((ecx + 0x70)) &= 0xfffffffd;
        }
        eax = edx;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a39c */
#include <stdint.h>
 
void fcn_0040a39c (void) {
    DecodePointer (*(0x419f00));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40a3c5 */
#include <stdint.h>
 
int32_t fcn_0040a3c5 (int32_t arg_8h) {
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    PVOID var_24h;
    int32_t var_20h;
    PVOID * var_1ch;
    int32_t var_4h;
    fcn_00404590 (0x4179a0);
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x30)) = 0;
    ebx = 0;
    *((ebp - 0x20)) = ebx;
    edi = 0;
    *((ebp - 0x28)) = edi;
    esi = *((ebp + 8));
    if (esi > 0xb) {
        goto label_0;
    }
    if (esi != 0xb) {
        eax = esi;
        ecx = 2;
        eax -= ecx;
        if (eax == 0) {
            goto label_1;
        }
        eax -= ecx;
        if (eax == 0) {
            goto label_2;
        }
        eax -= ecx;
        if (eax == 0) {
            goto label_3;
        }
        eax -= ecx;
        if (eax != 0) {
            goto label_4;
        }
    }
label_2:
    eax = fcn_00407717 ();
    edi = eax;
    *((ebp - 0x28)) = edi;
    while (1) {
        eax |= 0xffffffff;
        goto label_5;
label_1:
        *((ebp - 0x1c)) = 0x419ef8;
        eax = *(0x419ef8);
        goto label_6;
        eax = fcn_0040a580 (esi, *((edi + 0x5c)));
        eax += 8;
        *((ebp - 0x1c)) = eax;
        eax = *(eax);
        goto label_7;
label_0:
        eax = esi;
        eax -= 0xf;
        if (eax == 0) {
            goto label_8;
        }
        eax -= 6;
        if (eax == 0) {
            goto label_9;
        }
        eax--;
        if (eax == 0) {
            goto label_3;
        }
label_4:
        fcn_00404026 ();
        *(eax) = 0x16;
        fcn_00402c77 ();
    }
label_3:
    *((ebp - 0x1c)) = 0x419f00;
    eax = *(0x419f00);
    goto label_6;
label_9:
    *((ebp - 0x1c)) = 0x419efc;
    eax = *(0x419efc);
    goto label_6;
label_8:
    *((ebp - 0x1c)) = 0x419f04;
    eax = *(0x419f04);
label_6:
    ebx = 0;
    ebx++;
    *((ebp - 0x20)) = ebx;
    eax = DecodePointer (eax);
label_7:
    *((ebp - 0x24)) = eax;
    if (eax == 1) {
        goto label_10;
    }
    if (eax == 0) {
        fcn_00406dc5 (3);
    }
    if (ebx != 0) {
        fcn_00409180 (0);
    }
    *((ebp - 4)) = 0;
    if (esi != 8) {
        if (esi == 0xb) {
            goto label_11;
        }
        if (esi != 4) {
            goto label_12;
        }
    }
label_11:
    eax = *((edi + 0x60));
    *((ebp - 0x2c)) = eax;
    *((edi + 0x60)) = 0;
    if (esi != 8) {
        goto label_13;
    }
    eax = *((edi + 0x64));
    *((ebp - 0x30)) = eax;
    *((edi + 0x64)) = 0x8c;
label_12:
    if (esi != 8) {
        goto label_13;
    }
    ecx = *(0x411c98);
    edx = *(0x411c98);
    *((ebp - 0x34)) = edx;
    do {
        eax = *(0x411c9c);
        eax += ecx;
        if (edx >= eax) {
            goto label_14;
        }
        ecx = edx * 0xc;
        eax = *((edi + 0x5c));
        *((eax + ecx + 8)) = 0;
        edx++;
        *((ebp - 0x34)) = edx;
        ecx = *(0x411c98);
    } while (1);
label_13:
    eax = EncodePointer (0);
    ecx = *((ebp - 0x1c));
    *(ecx) = eax;
label_14:
    *((ebp - 4)) = 0xfffffffe;
    fcn_0040a546 ();
    if (esi == 8) {
        uint32_t (*ebp - 0x24)(uint32_t, uint32_t*) (esi, *((edi + 0x64)));
    } else {
        uint32_t (*ebp - 0x24)(uint32_t) (esi);
    }
    if (esi != 8) {
        if (esi == 0xb) {
            goto label_15;
        }
        if (esi != 4) {
            goto label_10;
        }
    }
label_15:
    eax = *((ebp - 0x2c));
    *((edi + 0x60)) = eax;
    if (esi == 8) {
        eax = *((ebp - 0x30));
        *((edi + 0x64)) = eax;
    }
label_10:
    eax = 0;
label_5:
    fcn_004045d5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c0e2 */
#include <stdint.h>
 
int32_t fcn_0040c0e2 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h) {
    esi = *((ebp + 0x10));
    eax = 0;
    if (esi == 0) {
        goto label_0;
    }
    ecx = *((ebp + 0xc));
    edi = *((ebp + 8));
    ebx = 0x41;
    edx = 0x5a;
    edi -= ecx;
    *((ebp + 0x10)) = edx;
    while (dx == ax) {
        edx = 0x5a;
        eax = *((edi + ecx));
        if (ax >= bx) {
            if (ax <= dx) {
                eax += 0x20;
                edx = (int32_t) ax;
            }
        } else {
            edx = eax;
        }
        eax = *(ecx);
        if (ax >= bx) {
            if (ax > *((ebp + 0x10))) {
                goto label_1;
            }
            eax += 0x20;
            eax = (int32_t) ax;
        }
label_1:
        ecx += 2;
        esi--;
        if (esi == 0) {
            goto label_2;
        }
        if (dx == 0) {
            goto label_2;
        }
    }
label_2:
    ecx = (int32_t) ax;
    eax = (int32_t) dx;
    edi = 0x5a;
    eax -= ecx;
    ebx = 0x5a;
label_0:
    esi = 0x5a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c35c */
#include <stdint.h>
 
uint32_t fcn_0040c35c (uint32_t arg_8h, int32_t arg_ch) {
    esi = *((ebp + 8));
    ebx = *((ebp + 8));
    ebx >>= 5;
    esi &= 0x1f;
    esi <<= 6;
    edi = *((ebx*4 + 0x4191d0));
    cl = *((edi + esi + 4));
    eax = (int32_t) cl;
    eax &= 0x80;
    *((ebp + 8)) = eax;
    al = *((edi + esi + 0x24));
    al += al;
    edx = (int32_t) al;
    eax = *((ebp + 0xc));
    edx >>= 1;
    if (eax == 0x4000) {
        goto label_0;
    }
    if (eax == 0x8000) {
        goto label_1;
    }
    if (eax == 0x10000) {
        goto label_2;
    }
    if (eax == 0x20000) {
        goto label_2;
    }
    if (eax != 0x40000) {
        goto label_3;
    }
    cl |= 0x80;
    *((edi + esi + 4)) = cl;
    ecx = *((ebx*4 + 0x4191d0));
    al = *((ecx + esi + 0x24));
    al &= 0x81;
    al |= 1;
    do {
        *((ecx + esi + 0x24)) = al;
        goto label_3;
label_2:
        cl |= 0x80;
        *((edi + esi + 4)) = cl;
        ecx = *((ebx*4 + 0x4191d0));
        al = *((ecx + esi + 0x24));
        al &= 0x82;
        al |= 2;
    } while (1);
label_1:
    cl &= 0x7f;
    *((edi + esi + 4)) = cl;
    goto label_3;
label_0:
    cl |= 0x80;
    *((edi + esi + 4)) = cl;
    eax = *((ebx*4 + 0x4191d0));
    *((eax + esi + 0x24)) &= 0x80;
label_3:
    esi = edi;
    ebx = edi;
    if (*((ebp + 8)) == 0) {
        eax = 0x8000;
        return eax;
    }
    edx = -edx;
    edx -= edx;
    edx &= 0xc000;
    eax = edx + 0x4000;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40d344 */
#include <stdint.h>
 
int32_t fcn_0040d344 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, uint32_t arg_20h, uint32_t arg_24h) {
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    int32_t var_55h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_46h;
    uint32_t var_3ch;
    uint32_t var_3ah;
    uint32_t var_38h;
    uint32_t var_36h;
    int32_t var_34h;
    int32_t var_32h;
    int32_t var_2ch;
    int32_t var_2ah;
    int32_t var_28h;
    int32_t var_26h;
    int32_t var_24h;
    int32_t var_22h;
    int32_t var_20h;
    int32_t var_9h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x80)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x68)) = eax;
    eax = 0;
    ebx = 0;
    eax++;
    *((ebp - 0x6c)) = eax;
    esi = ebx;
    eax = ebx;
    *((ebp - 0x70)) = ebx;
    edi = ebp - 0x20;
    *((ebp - 0x4c)) = ebx;
    *((ebp - 0x60)) = ebx;
    *((ebp - 0x5c)) = ebx;
    *((ebp - 0x64)) = ebx;
    *((ebp - 0x54)) = ebx;
    if (*((ebp + 0x24)) == eax) {
        fcn_00404026 ();
        *(eax) = 0x16;
        eax = fcn_00402c77 ();
        eax = 0;
        goto label_16;
    }
    edx = *((ebp + 0x10));
    ecx = *((ebp + 0x10));
    *((ebp - 0x50)) = ecx;
    do {
        cl = *(edx);
        if (cl != 0x20) {
            if (cl == 9) {
                goto label_17;
            }
            if (cl == 0xa) {
                goto label_17;
            }
            if (cl != 0xd) {
                goto label_0;
            }
        }
label_17:
        edx++;
    } while (1);
    do {
label_0:
        cl = *(edx);
        edx++;
        *((ebp - 0x55)) = cl;
        if (eax > 0xb) {
            goto label_18;
        }
        /* switch table (12 cases) at 0x40dabc */
        eax = ecx - 0x31;
        if (al > 8) {
            goto label_19;
        }
label_1:
label_10:
        eax = 3;
        edx--;
    } while (1);
label_19:
    eax = *((ebp + 0x24));
    eax = *(eax);
    eax = *((eax + 0x84));
    eax = *(eax);
    if (cl == *(eax)) {
label_4:
label_2:
        eax = 5;
        goto label_0;
    }
    eax = (int32_t) cl;
    eax -= 0x2b;
    if (eax != 0) {
        eax--;
        eax--;
        if (eax != 0) {
            eax -= 3;
            if (eax != 0) {
                goto label_20;
            }
label_3:
            eax = 0;
            eax++;
            goto label_0;
        }
        ecx = 0x8000;
        eax = 2;
        *((ebp - 0x70)) = ecx;
        goto label_0;
    }
    eax = 2;
    *((ebp - 0x70)) = ebx;
    goto label_0;
    eax = 0;
    eax++;
    *((ebp - 0x60)) = eax;
    eax = ecx - 0x31;
    if (al <= 8) {
        goto label_1;
    }
    eax = *((ebp + 0x24));
    eax = *(eax);
    eax = *((eax + 0x84));
    eax = *(eax);
    if (cl == *(eax)) {
label_5:
        goto label_2;
    }
    if (cl == 0x2b) {
        goto label_6;
    }
    if (cl == 0x2d) {
        goto label_6;
    }
    if (cl == 0x30) {
        goto label_3;
    }
label_7:
    if (cl <= 0x43) {
        goto label_20;
    }
    if (cl > 0x45) {
        cl -= 0x64;
        if (cl > 1) {
            goto label_20;
        }
    }
label_8:
    goto label_2;
label_6:
    edx--;
    goto label_2;
    eax = ecx - 0x31;
    if (al <= 8) {
        goto label_1;
    }
    eax = *((ebp + 0x24));
    eax = *(eax);
    eax = *((eax + 0x84));
    eax = *(eax);
    if (cl == *(eax)) {
        goto label_4;
    }
    if (cl == 0x30) {
        goto label_3;
    }
label_9:
    edx = *((ebp - 0x50));
    goto label_21;
    eax = 0;
    eax++;
    *((ebp - 0x60)) = eax;
    if (cl < 0x30) {
        goto label_22;
    }
    eax = *((ebp - 0x4c));
    esi = *((ebp - 0x54));
    do {
        if (cl > 0x39) {
            goto label_23;
        }
        if (eax < 0x19) {
            cl -= 0x30;
            eax++;
            *(edi) = cl;
            edi++;
        } else {
            esi++;
        }
        cl = *(edx);
        edx++;
    } while (cl >= 0x30);
label_23:
    *((ebp - 0x54)) = esi;
    esi = ebx;
    *((ebp - 0x4c)) = eax;
label_22:
    eax = *((ebp + 0x24));
    eax = *(eax);
    eax = *((eax + 0x84));
    eax = *(eax);
    if (cl == *(eax)) {
        goto label_5;
    }
    if (cl == 0x2b) {
        goto label_6;
    }
    if (cl == 0x2d) {
        goto label_6;
    }
    goto label_7;
    eax = 0;
    eax++;
    *((ebp - 0x60)) = eax;
    *((ebp - 0x5c)) = eax;
    eax = *((ebp - 0x4c));
    if (eax != 0) {
        goto label_24;
    }
    if (cl != 0x30) {
        goto label_25;
    }
    eax = *((ebp - 0x54));
    do {
        cl = *(edx);
        eax--;
        edx++;
    } while (cl == 0x30);
    *((ebp - 0x54)) = eax;
    eax = *((ebp - 0x4c));
label_24:
    if (cl < 0x30) {
label_25:
        goto label_26;
    }
    esi = *((ebp - 0x54));
    do {
        if (cl > 0x39) {
            goto label_27;
        }
        if (eax < 0x19) {
            cl -= 0x30;
            eax++;
            *(edi) = cl;
            edi++;
            esi--;
        }
        cl = *(edx);
        edx++;
    } while (cl >= 0x30);
label_27:
    *((ebp - 0x54)) = esi;
    esi = ebx;
    *((ebp - 0x4c)) = eax;
label_26:
    if (cl == 0x2b) {
        goto label_6;
    }
    if (cl == 0x2d) {
        goto label_6;
    }
    if (cl <= 0x43) {
        goto label_28;
    }
    if (cl <= 0x45) {
        goto label_8;
    }
    cl -= 0x64;
    if (cl <= 1) {
        goto label_8;
    }
label_28:
    edx--;
    goto label_29;
    eax = 0;
    cl -= 0x30;
    eax++;
    *((ebp - 0x5c)) = eax;
    if (cl > 9) {
        goto label_9;
    }
    goto label_10;
    eax = edx - 2;
    *((ebp - 0x50)) = eax;
    eax = ecx - 0x31;
    if (al <= 8) {
label_11:
        goto label_10;
    }
    eax = (int32_t) cl;
    eax -= 0x2b;
    if (eax == 0) {
        goto label_13;
    }
    eax--;
    eax--;
    if (eax == 0) {
        goto label_30;
    }
    eax -= 3;
    if (eax != 0) {
label_12:
        goto label_9;
    }
    goto label_2;
label_30:
    ecx |= 0xffffffff;
    eax = 7;
    *((ebp - 0x6c)) = ecx;
    goto label_0;
label_13:
    goto label_2;
    eax = 0;
    eax++;
    *((ebp - 0x64)) = eax;
    while (cl == 0x30) {
        cl = *(edx);
        edx++;
    }
    cl -= 0x31;
    if (cl > 8) {
        goto label_20;
    }
    goto label_11;
    eax = ecx - 0x31;
    if (al <= 8) {
        goto label_11;
    }
    goto label_12;
    if (*((ebp + 0x20)) == ebx) {
        goto label_31;
    }
    eax = edx - 1;
    *((ebp - 0x50)) = eax;
    eax = (int32_t) cl;
    eax -= 0x2b;
    if (eax == 0) {
        goto label_13;
    }
    eax--;
    eax--;
    if (eax != 0) {
        goto label_9;
    }
    *((ebp - 0x6c)) |= 0xffffffff;
    eax = 7;
    goto label_0;
label_31:
    eax = 0xa;
    edx--;
label_18:
    if (eax != 0xa) {
        goto label_0;
    }
    goto label_21;
    eax = 0;
    esi = ebx;
    eax++;
    *((ebp - 0x64)) = eax;
    while (cl >= 0x30) {
        if (cl > 0x39) {
            goto label_32;
        }
        ecx = esi * 0xa;
        esi = *((ebp - 0x55));
        esi += 0xffffffd0;
        esi += ecx;
        if (esi > 0x1450) {
            goto label_33;
        }
        cl = *(edx);
        edx++;
        *((ebp - 0x55)) = cl;
    }
    goto label_32;
label_33:
    cl = *((ebp - 0x55));
    esi = 0x1451;
    while (cl >= 0x30) {
        if (cl > 0x39) {
            goto label_20;
        }
        cl = *(edx);
        edx++;
label_32:
    }
label_20:
    edx--;
label_21:
    eax = *((ebp - 0x4c));
label_29:
    ecx = *((ebp - 0x68));
    *(ecx) = edx;
    ecx = *((ebp - 0x60));
    if (ecx == 0) {
        goto label_34;
    }
    if (eax > 0x18) {
        al = *((ebp - 9));
        if (al >= 5) {
            al++;
            *((ebp - 9)) = al;
        }
        ecx = *((ebp - 0x54));
        edi--;
        ecx++;
        eax = 0x18;
        *((ebp - 0x54)) = ecx;
    } else {
        ecx = *((ebp - 0x54));
    }
    if (eax == 0) {
        goto label_35;
    }
    edi--;
    if (*(edi) != bl) {
        goto label_36;
    }
    do {
        eax--;
        ecx++;
        edi--;
    } while (*(edi) == bl);
    *((ebp - 0x54)) = ecx;
label_36:
    fcn_0040e5b1 (ebp - 0x20, eax, ebp - 0x3c);
    ecx = *((ebp - 0x6c));
    if (ecx < 0) {
        esi = -esi;
    }
    esi += *((ebp - 0x54));
    eax = *((ebp - 0x64));
    if (eax == 0) {
        esi += *((ebp + 0x18));
    }
    eax = *((ebp - 0x5c));
    if (eax == 0) {
        esi -= *((ebp + 0x1c));
    }
    if (esi > 0x1450) {
        goto label_37;
    }
    if (esi < 0xffffebb0) {
        goto label_38;
    }
    edx = 0x418ec8;
    edx -= 0x60;
    if (esi == 0) {
        goto label_39;
    }
    if (esi < 0) {
        edx = 0x419028;
        esi = -esi;
        edx -= 0x60;
    }
    if (*((ebp + 0x14)) != ebx) {
        goto label_40;
    }
    eax = 0;
    *((ebp - 0x3c)) = ax;
    goto label_40;
label_15:
    eax = esi;
    edx += 0x54;
    esi >>= 3;
    *((ebp - 0x54)) = edx;
    *((ebp - 0x4c)) = esi;
    eax &= 7;
    if (eax == 0) {
        goto label_40;
    }
    ecx = eax * 0xc;
    eax = 0x8000;
    ecx += edx;
    *((ebp - 0x50)) = ecx;
    if (*(ecx) >= ax) {
        esi = ecx;
        edi = ebp - 0x48;
        ecx = ebp - 0x48;
        *((ebp - 0x50)) = ecx;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *((ebp - 0x46))--;
    }
    edi = *((ecx + 0xa));
    edx = *((ebp - 0x32));
    eax = edi;
    eax ^= edx;
    *((ebp - 0x7c)) = ebx;
    eax &= 0x8000;
    *((ebp - 0x2c)) = ebx;
    *((ebp - 0x60)) = eax;
    eax = 0x7fff;
    edx &= eax;
    *((ebp - 0x28)) = ebx;
    edi &= eax;
    *((ebp - 0x24)) = ebx;
    eax = edi + edx;
    esi = (int32_t) ax;
    eax = 0x7fff;
    *((ebp - 0x6c)) = esi;
    if (dx >= ax) {
        goto label_41;
    }
    if (di >= ax) {
        goto label_41;
    }
    eax = 0xbffd;
    if (si > ax) {
        goto label_41;
    }
    eax = 0x3fbf;
    while (*(ecx) == ebx) {
        *((ebp - 0x34)) = ebx;
        goto label_42;
        if (dx == 0) {
            esi++;
            *((ebp - 0x6c)) = esi;
            if ((*((ebp - 0x34)) & 0x7fffffff) != 0) {
                goto label_43;
            }
            if (*((ebp - 0x38)) != 0) {
                goto label_43;
            }
            if (*((ebp - 0x3c)) != 0) {
                goto label_43;
            }
            eax = 0;
            *((ebp - 0x32)) = ax;
            goto label_44;
        }
label_43:
        if (di != 0) {
            goto label_45;
        }
        esi++;
        *((ebp - 0x6c)) = esi;
        if ((*((ecx + 8)) & 0x7fffffff) != 0) {
            goto label_45;
        }
        if (*((ecx + 4)) != ebx) {
            goto label_45;
        }
    }
label_45:
    eax = ebx;
    edx = ebp - 0x28;
    edi = 5;
    *((ebp - 0x74)) = eax;
    *((ebp - 0x68)) = edi;
label_14:
    *((ebp - 0x5c)) = edi;
    if (edi <= 0) {
        goto label_46;
    }
    esi = ebp - 0x3c;
    esi = esi + eax*2;
    eax = ecx + 8;
    *((ebp - 0x64)) = eax;
    do {
        eax = *(esi);
        *((ebp - 0x5c)) = eax;
        eax = *((ebp - 0x64));
        ecx = *((ebp - 0x5c));
        *((ebp - 0x78)) = ebx;
        eax = *(eax);
        ecx *= eax;
        *((ebp - 0x5c)) = ecx;
        ecx += *((edx - 4));
        if (ecx >= *((edx - 4))) {
            if (ecx >= *((ebp - 0x5c))) {
                goto label_47;
            }
        }
        eax = 0;
        eax++;
        goto label_48;
label_47:
        eax = *((ebp - 0x78));
label_48:
        *((edx - 4)) = ecx;
        if (eax != 0) {
            *(edx)++;
        }
        *((ebp - 0x64)) -= 2;
        esi += 2;
        edi--;
    } while (edi > 0);
    ecx = *((ebp - 0x50));
    edi = *((ebp - 0x68));
    eax = *((ebp - 0x74));
label_46:
    edx += 2;
    eax++;
    edi--;
    *((ebp - 0x74)) = eax;
    *((ebp - 0x68)) = edi;
    if (edi > 0) {
        goto label_14;
    }
    esi = *((ebp - 0x6c));
    edx = *((ebp - 0x24));
    esi += 0xc002;
    edi = *((ebp - 0x2c));
    *((ebp - 0x50)) = edx;
    if (si <= 0) {
        goto label_49;
    }
    do {
        if (edx < 0) {
            goto label_50;
        }
        eax = *((ebp - 0x28));
        edx = edi;
        edx >>= 0x1f;
        ecx = eax;
        eax += eax;
        ecx >>= 0x1f;
        eax |= edx;
        edi += edi;
        edx = *((ebp - 0x50));
        *((ebp - 0x28)) = eax;
        edx += edx;
        eax = 0xffff;
        *((ebp - 0x2c)) = edi;
        edx |= ecx;
        esi += eax;
        *((ebp - 0x50)) = edx;
        *((ebp - 0x24)) = edx;
    } while (si > 0);
label_50:
    if (si > 0) {
        goto label_51;
    }
label_49:
    eax = 0xffff;
    esi += eax;
    if (si >= 0) {
        goto label_51;
    }
    ebx = *((ebp - 0x7c));
    eax = esi;
    eax = -eax;
    eax = (int32_t) ax;
    *((ebp - 0x68)) = eax;
    esi += eax;
    do {
        if ((*((ebp - 0x2c)) & 1) != 0) {
            ebx++;
        }
        ecx = *((ebp - 0x28));
        eax = edx;
        eax <<= 0x1f;
        *((ebp - 0x50)) = ecx;
        *((ebp - 0x50)) >>= 1;
        *((ebp - 0x50)) |= eax;
        eax = *((ebp - 0x50));
        ecx <<= 0x1f;
        edi >>= 1;
        edx >>= 1;
        edi |= ecx;
        *((ebp - 0x68))--;
        *((ebp - 0x24)) = edx;
        *((ebp - 0x28)) = eax;
        *((ebp - 0x2c)) = edi;
    } while (*((ebp - 0x68)) != 0);
    *((ebp - 0x50)) = edx;
    ebx = 0;
    if (ebx != 0) {
        ax = di;
        edi = 0;
        edi++;
        ax |= di;
        *((ebp - 0x2c)) = ax;
        edi = *((ebp - 0x2c));
    } else {
label_51:
        ax = *((ebp - 0x2c));
    }
    edx = 0x8000;
    if (ax <= dx) {
        edi &= 0x1ffff;
        if (edi != 0x18000) {
            goto label_52;
        }
    }
    eax = *((ebp - 0x2a));
    if (eax == -1) {
        eax = *((ebp - 0x26));
        *((ebp - 0x2a)) = ebx;
        if (eax == -1) {
            ax = *((ebp - 0x22));
            ecx = 0xffff;
            *((ebp - 0x26)) = ebx;
            if (ax == cx) {
                *((ebp - 0x22)) = dx;
                esi++;
            } else {
                ax++;
            }
            *((ebp - 0x22)) = ax;
        } else {
            eax++;
            *((ebp - 0x26)) = eax;
        }
        ecx = *((ebp - 0x24));
    } else {
        eax++;
        *((ebp - 0x2a)) = eax;
label_52:
        ecx = *((ebp - 0x50));
    }
    edx = *((ebp - 0x54));
    eax = 0x7fff;
    if (si >= ax) {
        eax = 0;
        *((ebp - 0x38)) = ebx;
        *((ebp - 0x3c)) = ebx;
        al = (*((ebp - 0x60)) == ax) ? 1 : 0;
        eax--;
        eax &= 0x80000000;
        eax += 0x7fff8000;
        *((ebp - 0x34)) = eax;
    } else {
        ax = *((ebp - 0x2a));
        esi |= *((ebp - 0x60));
        *((ebp - 0x3c)) = ax;
        eax = *((ebp - 0x28));
        *((ebp - 0x3a)) = eax;
        *((ebp - 0x36)) = ecx;
        *((ebp - 0x32)) = si;
        goto label_53;
label_41:
        eax = 0;
        al = (*((ebp - 0x60)) == ax) ? 1 : 0;
        eax--;
        eax &= 0x80000000;
        eax += 0x7fff8000;
        *((ebp - 0x34)) = eax;
label_42:
        *((ebp - 0x38)) = ebx;
        *((ebp - 0x3c)) = ebx;
label_44:
        edx = *((ebp - 0x54));
    }
label_53:
    esi = *((ebp - 0x4c));
label_40:
    if (esi != 0) {
        goto label_15;
    }
label_39:
    eax = *((ebp - 0x34));
    ecx = *((ebp - 0x3c));
    edx = *((ebp - 0x3a));
    esi = *((ebp - 0x36));
    eax >>= 0x10;
    goto label_54;
label_38:
    edi = 0;
    ecx = ebx;
    eax = ebx;
    esi = ebx;
    edx = ebx;
    ebx = edi + 1;
    goto label_54;
label_37:
    eax = 0x7fff;
    esi = 0x80000000;
    goto label_55;
label_35:
    ecx = ebx;
    eax = ebx;
    esi = ebx;
    edx = ebx;
    goto label_54;
label_34:
    eax = ebx;
    esi = ebx;
label_55:
    ecx = ebx;
    edx = ebx;
    ebx = 4;
label_54:
    edi = *((ebp - 0x80));
    eax |= *((ebp - 0x70));
    *((edi + 0xa)) = ax;
    eax = ebx;
    *(edi) = cx;
    *((edi + 2)) = edx;
    *((edi + 6)) = esi;
label_16:
    ecx = *((ebp - 4));
    edi = 4;
    esi = 4;
    ecx ^= ebp;
    ebx = 4;
    fcn_00404f47 (4);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40cdd2 */
#include <stdint.h>
 
int32_t fcn_0040cdd2 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    ecx = *((ebp + 8));
    eax = *((ecx + 0xa));
    ebx = 0;
    edi = *((ebp + 0xc));
    edx = eax;
    eax &= 0x8000;
    *((ebp - 0x40)) = edi;
    *((ebp - 0x44)) = eax;
    edx &= 0x7fff;
    eax = *((ecx + 6));
    edx -= 0x3fff;
    *((ebp - 0x10)) = eax;
    eax = *((ecx + 2));
    *((ebp - 0xc)) = eax;
    eax = *(ecx);
    eax <<= 0x10;
    *((ebp - 0x20)) = edx;
    *((ebp - 8)) = eax;
    if (edx != 0xffffc001) {
        goto label_2;
    }
    esi = ebx;
    eax = ebx;
    do {
        if (*((ebp + eax*4 - 0x10)) != ebx) {
            goto label_3;
        }
        eax++;
    } while (eax < 3);
    goto label_4;
label_3:
    eax = 0;
    edi = ebp - 0x10;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
label_0:
    ebx = 2;
    goto label_5;
label_2:
    eax = *(0x418eb8);
    esi = ebp - 0x10;
    edi = ebp - 0x1c;
    *((ebp - 0x24)) = edx;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    eax--;
    *((ebp - 0x34)) = eax;
    *((ebp - 0x2c)) = ebx;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    ecx = eax + 1;
    eax = ecx;
    edx:eax = (int64_t) eax;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    esi = 0x1f;
    edx &= esi;
    edx += eax;
    edx >>= 5;
    *((ebp - 0x3c)) = edx;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    esi -= ecx;
    eax = 0;
    eax++;
    *((ebp - 0x30)) = esi;
    ecx = esi;
    edi |= 0xffffffff;
    eax <<= cl;
    esi = 3;
    if ((*((ebp + edx*4 - 0x10)) & eax) == 0) {
        goto label_6;
    }
    eax = edi;
    eax <<= cl;
    eax = ~eax;
    while (edx < esi) {
        if (*((ebp + edx*4 - 0x10)) != ebx) {
            goto label_7;
        }
        edx++;
    }
    goto label_8;
label_7:
    eax = *((ebp - 0x34));
    edx:eax = (int64_t) eax;
    ecx = 0x1f;
    edx &= ecx;
    edx += eax;
    eax = *((ebp - 0x34));
    edx >>= 5;
    eax &= 0x8000001f;
    if (eax < 0) {
        eax--;
        eax |= 0xffffffe0;
        eax++;
    }
    ecx -= eax;
    *((ebp - 0x2c)) = ebx;
    eax = 0;
    eax++;
    eax <<= cl;
    *((ebp - 0x38)) = eax;
    eax = *((ebp + edx*4 - 0x10));
    ecx = *((ebp - 0x38));
    ecx += eax;
    *((ebp - 0x28)) = ecx;
    eax = *((ebp - 0x28));
    ecx = ebx;
    edi = 0xffffffffffffffff;
    if (ecx >= eax) {
        if (eax >= *((ebp - 0x38))) {
            goto label_9;
        }
    }
    ecx = 0;
    ecx++;
    *((ebp - 0x2c)) = ecx;
label_9:
    *((ebp + edx*4 - 0x10)) = eax;
    edx--;
    if (edx < 0) {
        goto label_10;
    }
    do {
        if (ecx == 0) {
            goto label_11;
        }
        eax = *((ebp + edx*4 - 0x10));
        ecx = ebx;
        *((ebp - 0x2c)) = ebx;
        edi = eax + 1;
        *((ebp - 0x28)) = edi;
        eax = edi;
        if (edi >= eax) {
            if (eax >= 1) {
                goto label_12;
            }
        }
        ecx = 0;
        ecx++;
        *((ebp - 0x2c)) = ecx;
label_12:
        *((ebp + edx*4 - 0x10)) = eax;
        edx--;
    } while (edx >= 0);
label_11:
    edi |= 0xffffffff;
label_10:
    ecx = *((ebp - 0x30));
label_8:
    edx = *((ebp - 0x3c));
label_6:
    eax = edi;
    eax <<= cl;
    *((ebp + edx*4 - 0x10)) &= eax;
    eax = edx + 1;
    if (eax < esi) {
        edi = ebp - 0x10;
        ecx = esi;
        edi = edi + eax*4;
        ecx -= eax;
        eax = 0;
        memset (edi, eax, ecx);
        edi |= 0xffffffff;
    }
    ecx = *((ebp - 0x20));
    if (*((ebp - 0x2c)) != ebx) {
        ecx++;
    }
    edx = *(0x418eb4);
    eax = *(0x418eb4);
    eax -= *(0x418eb8);
    if (ecx < eax) {
        eax = 0;
        edi = ebp - 0x10;
        memset (edi, eax, ecx);
        memset (edi, eax, ecx);
        memset (edi, eax, ecx);
label_1:
        esi = ebx;
        goto label_0;
    }
    if (ecx > edx) {
        goto label_13;
    }
    edx -= *((ebp - 0x24));
    esi = ebp - 0x1c;
    *((ebp - 0x30)) = edx;
    edi = ebp - 0x10;
    eax = edx;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    eax += edx;
    eax >>= 5;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x30));
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    eax &= 0x8000001f;
    if (eax < 0) {
        eax--;
        eax |= 0xffffffe0;
        eax++;
    }
    *((ebp - 0x30)) = eax;
    edi |= 0xffffffff;
    eax = edi;
    *((ebp - 0x20)) = ebx;
    edi = *((ebp - 0x30));
    ecx = *((ebp - 0x30));
    eax <<= cl;
    eax = ~eax;
    *((ebp - 0x28)) = eax;
    eax = 0x20;
    eax -= edi;
    *((ebp - 0x38)) = eax;
    esi = 3;
    do {
        edx = *((ebp + ebx*4 - 0x10));
        ecx = edi;
        eax = edx;
        edx >>= cl;
        edx |= *((ebp - 0x20));
        eax &= *((ebp - 0x28));
        ecx = *((ebp - 0x38));
        eax <<= cl;
        *((ebp + ebx*4 - 0x10)) = edx;
        ebx++;
        *((ebp - 0x20)) = eax;
    } while (ebx < esi);
    eax = *((ebp - 0x3c));
    edx = ebp - 8;
    eax <<= 2;
    ebx = 0;
    edx -= eax;
    edi |= 0xffffffff;
    eax = *((ebp - 0x3c));
    ecx = 2;
    do {
        if (ecx >= eax) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
            eax = *((ebp - 0x3c));
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
    ecx = *((ebp - 0x34));
    ecx++;
    eax = ecx;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    edx += eax;
    edx >>= 5;
    *((ebp - 0x2c)) = edx;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    eax = 0x1f;
    eax -= ecx;
    *((ebp - 0x30)) = eax;
    eax = 0;
    ecx = *((ebp - 0x30));
    eax++;
    eax <<= cl;
    if ((*((ebp + edx*4 - 0x10)) & eax) == 0) {
        goto label_14;
    }
    eax = edi;
    eax <<= cl;
    eax = ~eax;
    while (edx < esi) {
        if (*((ebp + edx*4 - 0x10)) != ebx) {
            goto label_15;
        }
        edx++;
    }
    goto label_16;
label_15:
    edi = *((ebp - 0x34));
    eax = *((ebp - 0x34));
    edx:eax = (int64_t) eax;
    ecx = 0x1f;
    edx &= ecx;
    edx += eax;
    edx >>= 5;
    edi &= 0x8000001f;
    if (edi < 0) {
        edi--;
        edi |= 0xffffffe0;
        edi++;
    }
    eax = *((ebp + edx*4 - 0x10));
    ecx -= edi;
    edi = 0;
    edi++;
    edi <<= cl;
    ecx = ebx;
    *((ebp - 0x24)) = edi;
    edi += eax;
    *((ebp - 0x20)) = edi;
    eax = *((ebp - 0x20));
    edi = 0xffffffffffffffff;
    if (edi >= eax) {
        if (eax >= *((ebp - 0x24))) {
            goto label_17;
        }
    }
    ecx = 0;
    ecx++;
label_17:
    *((ebp + edx*4 - 0x10)) = eax;
    edx--;
    if (edx < 0) {
        goto label_18;
    }
    do {
        if (ecx == 0) {
            goto label_19;
        }
        eax = *((ebp + edx*4 - 0x10));
        ecx = ebx;
        edi = eax + 1;
        *((ebp - 0x20)) = edi;
        eax = edi;
        if (edi >= eax) {
            if (eax >= 1) {
                goto label_20;
            }
        }
        ecx = 0;
        ecx++;
label_20:
        *((ebp + edx*4 - 0x10)) = eax;
        edx--;
    } while (edx >= 0);
label_19:
    edi |= 0xffffffff;
label_18:
    ecx = *((ebp - 0x30));
label_16:
    edx = *((ebp - 0x2c));
label_14:
    eax = edi;
    eax <<= cl;
    *((ebp + edx*4 - 0x10)) &= eax;
    edx++;
    if (edx < esi) {
        edi = ebp - 0x10;
        ecx = esi;
        edi = edi + edx*4;
        ecx -= edx;
        eax = 0;
        memset (edi, eax, ecx);
        edi |= 0xffffffff;
    }
    ecx = *(0x418ebc);
    ecx++;
    eax = ecx;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    eax += edx;
    eax >>= 5;
    *((ebp - 0x28)) = eax;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    *((ebp - 0x24)) = ecx;
    eax = ebx;
    edi <<= cl;
    *((ebp - 0x20)) = ebx;
    edi = ~edi;
    ebx = *((ebp - 0x24));
    ecx = 0x20;
    ecx -= ebx;
    *((ebp - 0x34)) = eax;
    *((ebp - 0x24)) = ecx;
    do {
        edx = *((ebp + eax*4 - 0x10));
        ecx = ebx;
        eax = edx;
        edx >>= cl;
        ecx = *((ebp - 0x34));
        eax &= edi;
        edx |= *((ebp - 0x20));
        *((ebp + ecx*4 - 0x10)) = edx;
        ecx = *((ebp - 0x24));
        eax <<= cl;
        *((ebp - 0x20)) = eax;
        eax = *((ebp - 0x34));
        eax++;
        *((ebp - 0x34)) = eax;
    } while (eax < esi);
    esi = *((ebp - 0x28));
    edx = ebp - 8;
    eax = esi;
    eax <<= 2;
    edx -= eax;
    ebx = 0;
    ecx = 2;
    do {
        if (ecx >= esi) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
    goto label_1;
label_13:
    if (ecx < *(0x418eb0)) {
        goto label_21;
    }
    ecx = *(0x418ebc);
    edi = ebp - 0x10;
    eax = 0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    eax = ecx;
    *((ebp - 0x10)) |= 0x80000000;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    eax += edx;
    eax >>= 5;
    *((ebp - 0x34)) = eax;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    edi |= 0xffffffff;
    *((ebp - 0x38)) = ecx;
    edi <<= cl;
    eax = 0x20;
    eax -= ecx;
    *((ebp - 0x20)) = ebx;
    edi = ~edi;
    *((ebp - 0x28)) = eax;
    do {
        edx = *((ebp + ebx*4 - 0x10));
        eax = *((ebp + ebx*4 - 0x10));
        edx >>= cl;
        eax &= edi;
        edx |= *((ebp - 0x20));
        ecx = *((ebp - 0x28));
        eax <<= cl;
        ecx = *((ebp - 0x38));
        *((ebp + ebx*4 - 0x10)) = edx;
        ebx++;
        *((ebp - 0x20)) = eax;
    } while (ebx < esi);
    esi = *((ebp - 0x34));
    edx = ebp - 8;
    eax = esi;
    eax <<= 2;
    edx -= eax;
    ebx = 0;
    ecx = 2;
    do {
        if (ecx >= esi) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
    esi = *(0x418ec4);
    ebx = 0;
    esi += *(0x418eb0);
    ebx++;
    goto label_5;
label_21:
    esi = *(0x418ec4);
    *((ebp - 0x10)) &= 0x7fffffff;
    esi += ecx;
    ecx = *(0x418ebc);
    eax = *(0x418ebc);
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    *((ebp - 0x38)) = esi;
    eax += edx;
    eax >>= 5;
    *((ebp - 0x28)) = eax;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    *((ebp - 0x20)) = ebx;
    esi = ebx;
    edi <<= cl;
    ebx = ecx;
    eax = 0x20;
    eax -= ebx;
    *((ebp - 0x24)) = ecx;
    edi = ~edi;
    *((ebp - 0x24)) = eax;
    do {
        edx = *((ebp + esi*4 - 0x10));
        ecx = ebx;
        eax = edx;
        edx >>= cl;
        edx |= *((ebp - 0x20));
        eax &= edi;
        ecx = *((ebp - 0x24));
        eax <<= cl;
        *((ebp + esi*4 - 0x10)) = edx;
        esi++;
        *((ebp - 0x20)) = eax;
    } while (esi < 3);
    edi = *((ebp - 0x28));
    edx = ebp - 8;
    esi = *((ebp - 0x38));
    eax = edi;
    eax <<= 2;
    edx -= eax;
    ebx = 0;
    ecx = 2;
    do {
        if (ecx >= edi) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
label_5:
    edi = *((ebp - 0x40));
label_4:
    eax = 0x1f;
    eax -= *(0x418ebc);
    ecx = eax;
    eax = *((ebp - 0x44));
    esi <<= cl;
    eax = -eax;
    eax -= eax;
    eax &= 0x80000000;
    esi |= eax;
    eax = *(0x418ec0);
    esi |= *((ebp - 0x10));
    if (eax == 0x40) {
        eax = *((ebp - 0xc));
        *((edi + 4)) = esi;
        *(edi) = eax;
    } else {
        if (eax != 0x20) {
            goto label_22;
        }
        *(edi) = esi;
    }
label_22:
    ecx = *((ebp - 4));
    eax = ebx;
    edi = 0x1f;
    esi = 0x1f;
    ecx ^= ebp;
    ebx = 0x1f;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c860 */
#include <stdint.h>
 
int32_t fcn_0040c860 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    ecx = *((ebp + 8));
    eax = *((ecx + 0xa));
    ebx = 0;
    edi = *((ebp + 0xc));
    edx = eax;
    eax &= 0x8000;
    *((ebp - 0x40)) = edi;
    *((ebp - 0x44)) = eax;
    edx &= 0x7fff;
    eax = *((ecx + 6));
    edx -= 0x3fff;
    *((ebp - 0x10)) = eax;
    eax = *((ecx + 2));
    *((ebp - 0xc)) = eax;
    eax = *(ecx);
    eax <<= 0x10;
    *((ebp - 0x20)) = edx;
    *((ebp - 8)) = eax;
    if (edx != 0xffffc001) {
        goto label_2;
    }
    esi = ebx;
    eax = ebx;
    do {
        if (*((ebp + eax*4 - 0x10)) != ebx) {
            goto label_3;
        }
        eax++;
    } while (eax < 3);
    goto label_4;
label_3:
    eax = 0;
    edi = ebp - 0x10;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
label_0:
    ebx = 2;
    goto label_5;
label_2:
    eax = "5\v@\xcf\xbf";
    esi = ebp - 0x10;
    edi = ebp - 0x1c;
    *((ebp - 0x24)) = edx;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    eax--;
    *((ebp - 0x34)) = eax;
    *((ebp - 0x2c)) = ebx;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    ecx = eax + 1;
    eax = ecx;
    edx:eax = (int64_t) eax;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    esi = 0x1f;
    edx &= esi;
    edx += eax;
    edx >>= 5;
    *((ebp - 0x3c)) = edx;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    esi -= ecx;
    eax = 0;
    eax++;
    *((ebp - 0x30)) = esi;
    ecx = esi;
    edi |= 0xffffffff;
    eax <<= cl;
    esi = 3;
    if ((*((ebp + edx*4 - 0x10)) & eax) == 0) {
        goto label_6;
    }
    eax = edi;
    eax <<= cl;
    eax = ~eax;
    while (edx < esi) {
        if (*((ebp + edx*4 - 0x10)) != ebx) {
            goto label_7;
        }
        edx++;
    }
    goto label_8;
label_7:
    eax = *((ebp - 0x34));
    edx:eax = (int64_t) eax;
    ecx = 0x1f;
    edx &= ecx;
    edx += eax;
    eax = *((ebp - 0x34));
    edx >>= 5;
    eax &= 0x8000001f;
    if (eax < 0) {
        eax--;
        eax |= 0xffffffe0;
        eax++;
    }
    ecx -= eax;
    *((ebp - 0x2c)) = ebx;
    eax = 0;
    eax++;
    eax <<= cl;
    *((ebp - 0x38)) = eax;
    eax = *((ebp + edx*4 - 0x10));
    ecx = *((ebp - 0x38));
    ecx += eax;
    *((ebp - 0x28)) = ecx;
    eax = *((ebp - 0x28));
    ecx = ebx;
    edi = 0xffffffffffffffff;
    if (ecx >= eax) {
        if (eax >= *((ebp - 0x38))) {
            goto label_9;
        }
    }
    ecx = 0;
    ecx++;
    *((ebp - 0x2c)) = ecx;
label_9:
    *((ebp + edx*4 - 0x10)) = eax;
    edx--;
    if (edx < 0) {
        goto label_10;
    }
    do {
        if (ecx == 0) {
            goto label_11;
        }
        eax = *((ebp + edx*4 - 0x10));
        ecx = ebx;
        *((ebp - 0x2c)) = ebx;
        edi = eax + 1;
        *((ebp - 0x28)) = edi;
        eax = edi;
        if (edi >= eax) {
            if (eax >= 1) {
                goto label_12;
            }
        }
        ecx = 0;
        ecx++;
        *((ebp - 0x2c)) = ecx;
label_12:
        *((ebp + edx*4 - 0x10)) = eax;
        edx--;
    } while (edx >= 0);
label_11:
    edi |= 0xffffffff;
label_10:
    ecx = *((ebp - 0x30));
label_8:
    edx = *((ebp - 0x3c));
label_6:
    eax = edi;
    eax <<= cl;
    *((ebp + edx*4 - 0x10)) &= eax;
    eax = edx + 1;
    if (eax < esi) {
        edi = ebp - 0x10;
        ecx = esi;
        edi = edi + eax*4;
        ecx -= eax;
        eax = 0;
        memset (edi, eax, ecx);
        edi |= 0xffffffff;
    }
    ecx = *((ebp - 0x20));
    if (*((ebp - 0x2c)) != ebx) {
        ecx++;
    }
    edx = *(0x418e9c);
    eax = *(0x418e9c);
    eax -= *(str.5_v_);
    if (ecx < eax) {
        eax = 0;
        edi = ebp - 0x10;
        memset (edi, eax, ecx);
        memset (edi, eax, ecx);
        memset (edi, eax, ecx);
label_1:
        esi = ebx;
        goto label_0;
    }
    if (ecx > edx) {
        goto label_13;
    }
    edx -= *((ebp - 0x24));
    esi = ebp - 0x1c;
    *((ebp - 0x30)) = edx;
    edi = ebp - 0x10;
    eax = edx;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    eax += edx;
    eax >>= 5;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x30));
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    eax &= 0x8000001f;
    if (eax < 0) {
        eax--;
        eax |= 0xffffffe0;
        eax++;
    }
    *((ebp - 0x30)) = eax;
    edi |= 0xffffffff;
    eax = edi;
    *((ebp - 0x20)) = ebx;
    edi = *((ebp - 0x30));
    ecx = *((ebp - 0x30));
    eax <<= cl;
    eax = ~eax;
    *((ebp - 0x28)) = eax;
    eax = 0x20;
    eax -= edi;
    *((ebp - 0x38)) = eax;
    esi = 3;
    do {
        edx = *((ebp + ebx*4 - 0x10));
        ecx = edi;
        eax = edx;
        edx >>= cl;
        edx |= *((ebp - 0x20));
        eax &= *((ebp - 0x28));
        ecx = *((ebp - 0x38));
        eax <<= cl;
        *((ebp + ebx*4 - 0x10)) = edx;
        ebx++;
        *((ebp - 0x20)) = eax;
    } while (ebx < esi);
    eax = *((ebp - 0x3c));
    edx = ebp - 8;
    eax <<= 2;
    ebx = 0;
    edx -= eax;
    edi |= 0xffffffff;
    eax = *((ebp - 0x3c));
    ecx = 2;
    do {
        if (ecx >= eax) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
            eax = *((ebp - 0x3c));
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
    ecx = *((ebp - 0x34));
    ecx++;
    eax = ecx;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    edx += eax;
    edx >>= 5;
    *((ebp - 0x2c)) = edx;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    eax = 0x1f;
    eax -= ecx;
    *((ebp - 0x30)) = eax;
    eax = 0;
    ecx = *((ebp - 0x30));
    eax++;
    eax <<= cl;
    if ((*((ebp + edx*4 - 0x10)) & eax) == 0) {
        goto label_14;
    }
    eax = edi;
    eax <<= cl;
    eax = ~eax;
    while (edx < esi) {
        if (*((ebp + edx*4 - 0x10)) != ebx) {
            goto label_15;
        }
        edx++;
    }
    goto label_16;
label_15:
    edi = *((ebp - 0x34));
    eax = *((ebp - 0x34));
    edx:eax = (int64_t) eax;
    ecx = 0x1f;
    edx &= ecx;
    edx += eax;
    edx >>= 5;
    edi &= 0x8000001f;
    if (edi < 0) {
        edi--;
        edi |= 0xffffffe0;
        edi++;
    }
    eax = *((ebp + edx*4 - 0x10));
    ecx -= edi;
    edi = 0;
    edi++;
    edi <<= cl;
    ecx = ebx;
    *((ebp - 0x24)) = edi;
    edi += eax;
    *((ebp - 0x20)) = edi;
    eax = *((ebp - 0x20));
    edi = 0xffffffffffffffff;
    if (edi >= eax) {
        if (eax >= *((ebp - 0x24))) {
            goto label_17;
        }
    }
    ecx = 0;
    ecx++;
label_17:
    *((ebp + edx*4 - 0x10)) = eax;
    edx--;
    if (edx < 0) {
        goto label_18;
    }
    do {
        if (ecx == 0) {
            goto label_19;
        }
        eax = *((ebp + edx*4 - 0x10));
        ecx = ebx;
        edi = eax + 1;
        *((ebp - 0x20)) = edi;
        eax = edi;
        if (edi >= eax) {
            if (eax >= 1) {
                goto label_20;
            }
        }
        ecx = 0;
        ecx++;
label_20:
        *((ebp + edx*4 - 0x10)) = eax;
        edx--;
    } while (edx >= 0);
label_19:
    edi |= 0xffffffff;
label_18:
    ecx = *((ebp - 0x30));
label_16:
    edx = *((ebp - 0x2c));
label_14:
    eax = edi;
    eax <<= cl;
    *((ebp + edx*4 - 0x10)) &= eax;
    edx++;
    if (edx < esi) {
        edi = ebp - 0x10;
        ecx = esi;
        edi = edi + edx*4;
        ecx -= edx;
        eax = 0;
        memset (edi, eax, ecx);
        edi |= 0xffffffff;
    }
    ecx = *(0x418ea4);
    ecx++;
    eax = ecx;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    eax += edx;
    eax >>= 5;
    *((ebp - 0x28)) = eax;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    *((ebp - 0x24)) = ecx;
    eax = ebx;
    edi <<= cl;
    *((ebp - 0x20)) = ebx;
    edi = ~edi;
    ebx = *((ebp - 0x24));
    ecx = 0x20;
    ecx -= ebx;
    *((ebp - 0x34)) = eax;
    *((ebp - 0x24)) = ecx;
    do {
        edx = *((ebp + eax*4 - 0x10));
        ecx = ebx;
        eax = edx;
        edx >>= cl;
        ecx = *((ebp - 0x34));
        eax &= edi;
        edx |= *((ebp - 0x20));
        *((ebp + ecx*4 - 0x10)) = edx;
        ecx = *((ebp - 0x24));
        eax <<= cl;
        *((ebp - 0x20)) = eax;
        eax = *((ebp - 0x34));
        eax++;
        *((ebp - 0x34)) = eax;
    } while (eax < esi);
    esi = *((ebp - 0x28));
    edx = ebp - 8;
    eax = esi;
    eax <<= 2;
    edx -= eax;
    ebx = 0;
    ecx = 2;
    do {
        if (ecx >= esi) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
    goto label_1;
label_13:
    if (ecx < *(0x418e98)) {
        goto label_21;
    }
    ecx = *(0x418ea4);
    edi = ebp - 0x10;
    eax = 0;
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    memset (edi, eax, ecx);
    eax = ecx;
    *((ebp - 0x10)) |= 0x80000000;
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    eax += edx;
    eax >>= 5;
    *((ebp - 0x34)) = eax;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    edi |= 0xffffffff;
    *((ebp - 0x38)) = ecx;
    edi <<= cl;
    eax = 0x20;
    eax -= ecx;
    *((ebp - 0x20)) = ebx;
    edi = ~edi;
    *((ebp - 0x28)) = eax;
    do {
        edx = *((ebp + ebx*4 - 0x10));
        eax = *((ebp + ebx*4 - 0x10));
        edx >>= cl;
        eax &= edi;
        edx |= *((ebp - 0x20));
        ecx = *((ebp - 0x28));
        eax <<= cl;
        ecx = *((ebp - 0x38));
        *((ebp + ebx*4 - 0x10)) = edx;
        ebx++;
        *((ebp - 0x20)) = eax;
    } while (ebx < esi);
    esi = *((ebp - 0x34));
    edx = ebp - 8;
    eax = esi;
    eax <<= 2;
    edx -= eax;
    ebx = 0;
    ecx = 2;
    do {
        if (ecx >= esi) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
    esi = *(0x418eac);
    ebx = 0;
    esi += *(0x418e98);
    ebx++;
    goto label_5;
label_21:
    esi = *(0x418eac);
    *((ebp - 0x10)) &= 0x7fffffff;
    esi += ecx;
    ecx = *(0x418ea4);
    eax = *(0x418ea4);
    edx:eax = (int64_t) eax;
    edx &= 0x1f;
    *((ebp - 0x38)) = esi;
    eax += edx;
    eax >>= 5;
    *((ebp - 0x28)) = eax;
    ecx &= 0x8000001f;
    if (ecx < 0) {
        ecx--;
        ecx |= 0xffffffe0;
        ecx++;
    }
    *((ebp - 0x20)) = ebx;
    esi = ebx;
    edi <<= cl;
    ebx = ecx;
    eax = 0x20;
    eax -= ebx;
    *((ebp - 0x24)) = ecx;
    edi = ~edi;
    *((ebp - 0x24)) = eax;
    do {
        edx = *((ebp + esi*4 - 0x10));
        ecx = ebx;
        eax = edx;
        edx >>= cl;
        edx |= *((ebp - 0x20));
        eax &= edi;
        ecx = *((ebp - 0x24));
        eax <<= cl;
        *((ebp + esi*4 - 0x10)) = edx;
        esi++;
        *((ebp - 0x20)) = eax;
    } while (esi < 3);
    edi = *((ebp - 0x28));
    edx = ebp - 8;
    esi = *((ebp - 0x38));
    eax = edi;
    eax <<= 2;
    edx -= eax;
    ebx = 0;
    ecx = 2;
    do {
        if (ecx >= edi) {
            eax = *(edx);
            *((ebp + ecx*4 - 0x10)) = eax;
        } else {
            *((ebp + ecx*4 - 0x10)) = ebx;
        }
        edx -= 4;
        ecx--;
    } while (ecx >= 0);
label_5:
    edi = *((ebp - 0x40));
label_4:
    eax = 0x1f;
    eax -= *(0x418ea4);
    ecx = eax;
    eax = *((ebp - 0x44));
    esi <<= cl;
    eax = -eax;
    eax -= eax;
    eax &= 0x80000000;
    esi |= eax;
    eax = *(0x418ea8);
    esi |= *((ebp - 0x10));
    if (eax == 0x40) {
        eax = *((ebp - 0xc));
        *((edi + 4)) = esi;
        *(edi) = eax;
    } else {
        if (eax != 0x20) {
            goto label_22;
        }
        *(edi) = esi;
    }
label_22:
    ecx = *((ebp - 4));
    eax = ebx;
    edi = 0x1f;
    esi = 0x1f;
    ecx ^= ebp;
    ebx = 0x1f;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c695 */
#include <stdint.h>
 
int32_t fcn_0040c695 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    ecx = ebp - 0x2c;
    esi = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x1c)) = eax;
    fcn_00402d4b (*((ebp + 0x10)));
    eax = ebp - 0x2c;
    edi = 0;
    eax = fcn_0040d344 (ebp - 0x10, ebp - 0x18, esi, edi, edi, edi, edi, eax);
    ebx = eax;
    eax = *((ebp - 0x1c));
    if (eax != 0) {
        ecx = *((ebp - 0x18));
        *(eax) = ecx;
    }
    eax = fcn_0040cdd2 (ebp - 0x10, *((ebp - 0x14)));
    if ((bl & 3) != 0) {
        goto label_0;
    }
    if (eax == 1) {
        goto label_1;
    }
    if (eax != 2) {
        goto label_2;
    }
    do {
        goto label_3;
label_0:
    } while ((bl & 1) != 0);
    if ((bl & 2) != 0) {
label_1:
label_3:
        edi = 3;
    }
label_2:
    if (*((ebp - 0x20)) != 0) {
        ecx = *((ebp - 0x24));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    ecx = *((ebp - 4));
    eax = edi;
    edi = 3;
    esi = 3;
    ecx ^= ebp;
    ebx = 3;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c7f6 */
#include <stdint.h>
 
int32_t fcn_0040c7f6 (void) {
    eax = 0x40daec;
    *(0x418ca0) = 0x40e3d8;
    *(0x418c9c) = eax;
    *(0x418ca4) = 0x40e469;
    *(0x418ca8) = 0x40e4c3;
    *(0x418cac) = 0x40e548;
    *(0x418cb0) = eax;
    *(0x418cb4) = 0x40db0d;
    *(0x418cb8) = 0x40e481;
    *(0x418cbc) = 0x40e3e9;
    *(0x418cc0) = 0x40e4d4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e58a */
#include <stdint.h>
 
uint32_t fcn_0040e58a (void) {
    esi = 0;
    eax = fcn_0040f22f (esi, 0x10000, 0x30000);
    if (eax == 0) {
        return eax;
    }
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40f22f */
#include <stdint.h>
 
int32_t fcn_0040f22f (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    ecx = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    ecx &= 0xfff7ffff;
    eax &= ecx;
    esi = *((ebp + 8));
    if ((eax & 0xfcf0fce0) != 0) {
        if (esi != 0) {
            eax = fcn_0040fd09 (0, 0);
            *(esi) = eax;
        }
        fcn_00404026 ();
        esi = 0x16;
        *(eax) = esi;
        fcn_00402c77 ();
        eax = esi;
    } else {
        if (esi != 0) {
            eax = fcn_0040fd09 ();
            *(esi) = eax;
        } else {
            eax = fcn_0040fd09 ();
        }
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e5b1 */
#include <stdint.h>
 
int32_t fcn_0040e5b1 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h) {
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    ebx = *((ebp + 0x10));
    edx = 0;
    eax = 0x404e;
    *((ebp - 4)) = eax;
    *(ebx) = edx;
    *((ebx + 4)) = edx;
    *((ebx + 8)) = edx;
    if (*((ebp + 0xc)) <= edx) {
        goto label_0;
    }
    ecx = edx;
    *((ebp + 0x10)) = edx;
    *((ebp - 0xc)) = ecx;
    *((ebp - 8)) = edx;
    do {
        edx = *((ebp - 0xc));
        edi = ebp - 0x1c;
        esi = ebx;
        eax = ecx;
        eax >>= 0x1f;
        edx += edx;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        esi = *((ebp + 0x10));
        ecx = *((ebp + 0x10));
        edi = *((ebp - 8));
        esi += esi;
        esi |= eax;
        ecx >>= 0x1f;
        edi += edi;
        eax = edx;
        edi |= ecx;
        eax >>= 0x1f;
        ecx = esi;
        edx += edx;
        esi += esi;
        ecx >>= 0x1f;
        esi |= eax;
        *(ebx) = edx;
        eax = *((ebp - 0x1c));
        edi += edi;
        edi |= ecx;
        *((ebx + 4)) = esi;
        eax += edx;
        *((ebx + 8)) = edi;
        ecx = 0;
        *((ebp + 0x10)) = eax;
        if (eax >= edx) {
            if (eax >= *((ebp - 0x1c))) {
                goto label_1;
            }
        }
        ecx = 0;
        ecx++;
label_1:
        *(ebx) = eax;
        if (ecx != 0) {
            eax = esi;
            ecx = 0;
            esi = eax + 1;
            if (esi >= eax) {
                if (esi >= 1) {
                    goto label_2;
                }
            }
            ecx = 0;
            ecx++;
label_2:
            *((ebx + 4)) = esi;
            if (ecx == 0) {
                goto label_3;
            }
            edi++;
            *((ebx + 8)) = edi;
        }
label_3:
        edx = *((ebp - 0x18));
        eax = 0;
        ecx = esi + edx;
        *((ebp - 0xc)) = ecx;
        if (ecx >= esi) {
            if (ecx >= edx) {
                goto label_4;
            }
        }
        eax = 0;
        eax++;
label_4:
        *((ebx + 4)) = ecx;
        if (eax != 0) {
            edi++;
            *((ebx + 8)) = edi;
        }
        edx = *((ebp + 0x10));
        eax = *((ebp + 0x10));
        esi = *((ebp - 0xc));
        edx += edx;
        edi += *((ebp - 0x14));
        esi += esi;
        *((ebp - 0x10)) = 0;
        edi += edi;
        eax >>= 0x1f;
        esi |= eax;
        ecx >>= 0x1f;
        eax = *((ebp + 8));
        edi |= ecx;
        *(ebx) = edx;
        *((ebx + 4)) = esi;
        *((ebx + 8)) = edi;
        eax = *(eax);
        *((ebp + 0x10)) = esi;
        *((ebp - 8)) = edi;
        *((ebp - 0x1c)) = eax;
        ecx = edx + eax;
        *((ebp - 0xc)) = ecx;
        if (ecx >= edx) {
            if (ecx >= eax) {
                goto label_5;
            }
        }
        eax = 0;
        eax++;
        goto label_6;
label_5:
        eax = *((ebp - 0x10));
label_6:
        *(ebx) = ecx;
        if (eax != 0) {
            eax = esi;
            edx = 0;
            esi = eax + 1;
            *((ebp + 0x10)) = esi;
            if (esi >= eax) {
                if (esi >= 1) {
                    goto label_7;
                }
            }
            edx = 0;
            edx++;
label_7:
            *((ebx + 4)) = esi;
            if (edx == 0) {
                goto label_8;
            }
            edi++;
            *((ebp - 8)) = edi;
            *((ebx + 8)) = edi;
        }
label_8:
        eax = *((ebp + 0xc));
        eax--;
        *((ebx + 4)) = esi;
        *((ebp + 8))++;
        *((ebx + 8)) = edi;
        *((ebp + 0xc)) = eax;
    } while (eax != 0);
    eax = 0x404e;
    edx = 0;
label_0:
    if (*((ebx + 8)) != edx) {
        goto label_9;
    }
    edx = *((ebx + 4));
    do {
        ecx = *(ebx);
        esi = edx;
        eax = ecx;
        edx <<= 0x10;
        eax >>= 0x10;
        edx |= eax;
        esi >>= 0x10;
        eax = *((ebp - 4));
        ecx <<= 0x10;
        eax += 0xfff0;
        *(ebx) = ecx;
        *((ebp - 4)) = eax;
    } while (esi == 0);
    *((ebx + 4)) = edx;
    *((ebx + 8)) = esi;
label_9:
    edx = *((ebx + 8));
    if ((edx & 0x8000) != 0) {
        goto label_10;
    }
    edi = *(ebx);
    esi = *((ebx + 4));
    do {
        eax = edi;
        ecx = esi;
        eax >>= 0x1f;
        esi += esi;
        esi |= eax;
        ecx >>= 0x1f;
        eax = *((ebp - 4));
        edx += edx;
        edx |= ecx;
        eax += 0xffff;
        edi += edi;
        *((ebp - 4)) = eax;
    } while ((edx & 0x8000) == 0);
    *(ebx) = edi;
    *((ebx + 4)) = esi;
    *((ebx + 8)) = edx;
label_10:
    esi = edi;
    *((ebx + 0xa)) = ax;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40db0d */
#include <stdint.h>
 
int32_t fcn_0040db0d (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    eax = *((ebp + 0x14));
    if (eax != 0x65) {
        if (eax != 0x45) {
            if (eax == 0x66) {
                eax = fcn_0040e218 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x18)), *((ebp + 0x20)));
                return eax;
            }
            if (eax != 0x61) {
                if (eax == 0x41) {
                    goto label_0;
                }
                fcn_0040e2d9 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x18)), *((ebp + 0x1c)), *((ebp + 0x20)));
                goto label_1;
            }
label_0:
            fcn_0040db93 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x18)), *((ebp + 0x1c)), *((ebp + 0x20)));
        }
    } else {
        fcn_0040e05e (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x18)), *((ebp + 0x1c)), *((ebp + 0x20)));
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e218 */
#include <stdint.h>
 
int32_t fcn_0040e218 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_1ch;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    ecx = ebp - 0x1c;
    edi = *((ebp + 0xc));
    ebx = 0x16;
    fcn_0040f09f (*(eax), *((eax + 4)), ebp - 0x2c, ecx);
    if (edi == 0) {
        fcn_00404026 ();
        *(eax) = ebx;
        fcn_00402c77 ();
        eax = ebx;
    } else {
        esi = *((ebp + 0x10));
        if (esi == 0) {
            fcn_00404026 ();
            *(eax) = ebx;
            fcn_00402c77 ();
            eax = ebx;
        } else {
            ecx |= 0xffffffff;
            if (esi != ecx) {
                eax = 0;
                ecx = esi;
                al = (*((ebp - 0x2c)) == 0x2d) ? 1 : 0;
                ecx -= eax;
            }
            ebx = *((ebp + 0x14));
            eax = *((ebp - 0x28));
            eax += ebx;
            eax = 0;
            al = (*((ebp - 0x2c)) == 0x2d) ? 1 : 0;
            eax += edi;
            eax = fcn_0040ef27 (eax, ecx, eax, ebp - 0x2c);
            if (eax != 0) {
                *(edi) = 0;
            } else {
                eax = ebp - 0x2c;
                fcn_0040e12c (edi, esi, ebx, eax, 0, *((ebp + 0x18)));
            }
        }
    }
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e2d9 */
#include <stdint.h>
 
int32_t fcn_0040e2d9 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    uint32_t var_30h;
    int32_t var_2ch;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    ecx = ebp - 0x1c;
    edi = *((ebp + 0xc));
    ebx = 0x16;
    fcn_0040f09f (*(eax), *((eax + 4)), ebp - 0x30, ecx);
    if (edi == 0) {
        fcn_00404026 ();
        *(eax) = ebx;
        fcn_00402c77 ();
        eax = ebx;
        goto label_0;
    }
    esi = *((ebp + 0x10));
    if (esi == 0) {
        fcn_00404026 ();
        *(eax) = ebx;
        fcn_00402c77 ();
        eax = ebx;
        goto label_1;
    }
    eax = *((ebp - 0x2c));
    ecx = 0;
    eax--;
    *((ebp - 0x20)) = eax;
    cl = (*((ebp - 0x30)) == 0x2d) ? 1 : 0;
    eax |= 0xffffffff;
    ebx = ecx + edi;
    if (esi != eax) {
        eax = esi;
        eax -= ecx;
    }
    eax = fcn_0040ef27 (ebx, eax, *((ebp + 0x14)), ebp - 0x30);
    if (eax != 0) {
        *(edi) = 0;
        goto label_1;
    }
    eax = *((ebp - 0x2c));
    eax--;
    cl = (*((ebp - 0x20)) < eax) ? 1 : 0;
    if (eax < 0xfffffffc) {
        goto label_2;
    }
    if (eax >= *((ebp + 0x14))) {
        goto label_2;
    }
    if (cl == 0) {
        goto label_3;
    }
    do {
        al = *(ebx);
        ebx++;
    } while (al != 0);
    *((ebx - 2)) = al;
label_3:
    eax = ebp - 0x30;
    fcn_0040e12c (edi, esi, *((ebp + 0x14)), eax, 1, *((ebp + 0x1c)));
    goto label_1;
label_2:
    eax = ebp - 0x30;
    fcn_0040df0d (edi, esi, *((ebp + 0x14)), *((ebp + 0x18)), eax, 1, *((ebp + 0x1c)));
label_1:
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40db93 */
#include <stdint.h>
 
uint32_t fcn_0040db93 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, uint32_t arg_18h, int32_t arg_1ch) {
    int32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = 0x30;
    ecx = eax;
    *((ebp - 8)) = 0x3ff;
    *((ebp - 4)) = ecx;
    ebx = 0;
    ecx = ebp - 0x2c;
    fcn_00402d4b (*((ebp + 0x1c)));
    edi = *((ebp + 0x14));
    if (edi < 0) {
        edi = ebx;
    }
    esi = *((ebp + 0xc));
    if (esi != 0) {
        ecx = *((ebp + 0x10));
        if (ecx != 0) {
            goto label_0;
        }
    }
    fcn_00404026 ();
    goto label_1;
label_0:
    eax = edi + 0xb;
    *(esi) = bl;
    if (ecx <= eax) {
        fcn_00404026 ();
label_1:
        edi = 0x22;
        *(eax) = edi;
        fcn_00402c77 ();
        goto label_2;
    }
    edx = *((ebp + 8));
    eax = *(edx);
    ebx = *((edx + 4));
    *((ebp - 0x14)) = eax;
    eax = ebx;
    eax >>= 0x14;
    eax &= 0x7ff;
    if (eax == 0x7ff) {
        eax = 0;
        if (eax != eax) {
            goto label_3;
        }
        eax |= 0xffffffff;
        if (ecx != eax) {
            eax = ecx - 2;
        }
        eax = fcn_0040deef (edx, esi + 2, eax, edi, 0);
        edi = eax;
        if (edi != 0) {
            *(esi) = 0;
            goto label_2;
        }
        if (*(ebx) == 0x2d) {
            *(esi) = 0x2d;
            esi++;
        }
        edi = *((ebp + 0x18));
        eax = 0x30;
        *(esi) = al;
        al = (edi == 0) ? 1 : 0;
        al--;
        al &= 0xe0;
        al += 0x78;
        *((esi + 1)) = al;
        eax = esi + 2;
        eax = fcn_0040edf0 (eax, 0x65);
        if (eax != 0) {
            cl = (edi == 0) ? 1 : 0;
            cl--;
            cl &= 0xe0;
            cl += 0x70;
            *(eax) = cl;
            *((eax + 3)) = 0;
        }
        edi = 0;
        goto label_2;
    }
    eax = 0;
label_3:
    ebx &= 0x80000000;
    eax |= ebx;
    if (eax != 0) {
        *(esi) = 0x2d;
        esi++;
    }
    ebx = *((ebp + 0x18));
    eax = 0x30;
    *(esi) = al;
    al = (*((ebp + 0x18)) == 0) ? 1 : 0;
    al--;
    al &= 0xe0;
    al += 0x78;
    ebx = -ebx;
    *((esi + 1)) = al;
    ecx = *((edx + 4));
    ebx -= ebx;
    ebx &= 0xffffffe0;
    ecx &= 0x7ff00000;
    ebx += 0x27;
    eax = 0;
    eax |= ecx;
    *((ebp - 0x10)) = ebx;
    if (eax == 0) {
        eax = 0x30;
        *((esi + 2)) = al;
        esi += 3;
        eax = *((edx + 4));
        ecx = *(edx);
        eax &= 0xfffff;
        ecx |= eax;
        if (ecx == 0) {
            eax = 0;
            *((ebp - 8)) = eax;
        } else {
            *((ebp - 8)) = 0x3fe;
        }
    } else {
        *((esi + 2)) = 0x31;
        esi += 3;
    }
    ecx = esi;
    esi++;
    *((ebp - 0xc)) = ecx;
    if (edi == 0) {
        *(ecx) = 0;
    } else {
        eax = *((ebp - 0x2c));
        eax = *((eax + 0x84));
        eax = *(eax);
        al = *(eax);
        *(ecx) = al;
    }
    eax = *((edx + 4));
    eax &= 0xfffff;
    *((ebp - 0x18)) = eax;
    if (eax <= 0) {
        if (*(edx) <= 0) {
            goto label_4;
        }
    }
    *((ebp + 0x14)) = 0;
    ecx = 0xf0000;
    eax = *((ebp - 4));
    *((ebp + 0xc)) = ecx;
    do {
        if (edi <= 0) {
            goto label_5;
        }
        eax = *(edx);
        edx = *((edx + 4));
        eax &= *((ebp + 0x14));
        edx &= ecx;
        ecx = *((ebp - 4));
        edx &= 0xfffff;
        ecx = (int32_t) cx;
        ax = fcn_0040f210 ();
        ecx = 0x30;
        ax += cx;
        eax = (int32_t) ax;
        if (eax > 0x39) {
            eax += ebx;
        }
        ecx = *((ebp + 0xc));
        edx = *((ebp + 8));
        *(esi) = al;
        esi++;
        eax = *((ebp + 0x14));
        __asm ("shrd eax, ecx, 4");
        *((ebp + 0x14)) = eax;
        eax = *((ebp - 4));
        ecx >>= 4;
        eax -= 4;
        edi--;
        *((ebp + 0xc)) = ecx;
        *((ebp - 4)) = eax;
    } while (ax >= 0);
label_5:
    if (ax < 0) {
        goto label_4;
    }
    eax = *(edx);
    edx = *((edx + 4));
    eax &= *((ebp + 0x14));
    edx &= ecx;
    ecx = *((ebp - 4));
    edx &= 0xfffff;
    ecx = (int32_t) cx;
    ax = fcn_0040f210 ();
    if (ax <= 8) {
        goto label_4;
    }
    eax = esi - 1;
    ebx = 0x30;
    do {
        cl = *(eax);
        if (cl != 0x66) {
            if (cl != 0x46) {
                goto label_6;
            }
        }
        *(eax) = bl;
        eax--;
    } while (1);
label_6:
    ebx = *((ebp - 0x10));
    if (eax != *((ebp - 0xc))) {
        cl = *(eax);
        if (cl == 0x39) {
            bl += 0x3a;
            *(eax) = bl;
        } else {
            cl++;
        }
        *(eax) = cl;
    } else {
        *((eax - 1))++;
    }
label_4:
    if (edi > 0) {
        eax = 0x30;
        fcn_00407390 (esi, eax, 0x30);
        esi += edi;
    }
    eax = *((ebp - 0xc));
    if (*(eax) == 0) {
        esi = eax;
    }
    cl = 0x34;
    edx = *((ebp + 8));
    al = (*((ebp + 0x18)) == 0) ? 1 : 0;
    al--;
    al &= 0xe0;
    al += 0x70;
    *(esi) = al;
    eax = *(edx);
    edx = *((edx + 4));
    eax = fcn_0040f210 ();
    ecx = eax;
    ebx = edx;
    eax = 0;
    ecx &= 0x7ff;
    ebx &= eax;
    ecx -= *((ebp - 8));
    ebx -= eax;
    if (ebx >= 0) {
        if (ebx <= 0) {
            if (ecx < eax) {
                goto label_7;
            }
        }
        *((esi + 1)) = 0x2b;
        esi += 2;
    } else {
label_7:
        *((esi + 1)) = 0x2d;
        esi += 2;
        ecx = -ecx;
        ebx += eax;
        ebx = -ebx;
    }
    *(esi) = 0x30;
    edi = esi;
    if (ebx >= eax) {
        edx = 0x3e8;
        if (ebx <= eax) {
            if (ecx < edx) {
                goto label_8;
            }
        }
        al = fcn_0040f130 (ecx, ebx, edx, eax);
        al += 0x30;
        *((ebp - 0x18)) = edx;
        *(esi) = al;
        esi++;
        eax = 0;
        if (esi == edi) {
label_8:
            if (ebx < eax) {
                goto label_9;
            }
            if (ebx > eax) {
                goto label_10;
            }
            if (ecx < 0x64) {
                goto label_9;
            }
        }
label_10:
        al = fcn_0040f130 (ecx, ebx, 0x64, eax);
        al += 0x30;
        *((ebp - 0x18)) = edx;
        *(esi) = al;
        esi++;
        eax = 0;
    }
label_9:
    if (esi == edi) {
        if (ebx < eax) {
            goto label_11;
        }
        if (ebx > eax) {
            goto label_12;
        }
        if (ecx < 0xa) {
            goto label_11;
        }
    }
label_12:
    al = fcn_0040f130 (ecx, ebx, 0xa, eax);
    al += 0x30;
    *((ebp - 0x18)) = edx;
    *(esi) = al;
    esi++;
    *((ebp - 0x18)) = ebx;
    eax = 0;
label_11:
    cl += 0x30;
    edi = eax;
    *(esi) = cl;
    *((esi + 1)) = al;
label_2:
    if (*((ebp - 0x20)) != 0) {
        ecx = *((ebp - 0x24));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e05e */
#include <stdint.h>
 
int32_t fcn_0040e05e (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    uint32_t var_2ch;
    int32_t var_1ch;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    ecx = ebp - 0x1c;
    ebx = *((ebp + 0x14));
    edi = *((ebp + 0xc));
    esi = 0x16;
    fcn_0040f09f (*(eax), *((eax + 4)), ebp - 0x2c, ecx);
    if (edi != 0) {
        goto label_0;
    }
    fcn_00404026 ();
    do {
        *(eax) = esi;
        fcn_00402c77 ();
        eax = esi;
        goto label_1;
label_0:
        esi = *((ebp + 0x10));
        if (esi != 0) {
            goto label_2;
        }
        eax = fcn_00404026 ();
        esi = 0x16;
    } while (1);
label_2:
    ecx |= 0xffffffff;
    if (esi != ecx) {
        eax = 0;
        ecx = esi;
        al = (*((ebp - 0x2c)) == 0x2d) ? 1 : 0;
        ecx -= eax;
        eax = 0;
        al = (ebx > 0) ? 1 : 0;
        ecx -= eax;
    }
    ecx = 0;
    cl = (*((ebp - 0x2c)) == 0x2d) ? 1 : 0;
    eax = 0;
    al = (ebx > 0) ? 1 : 0;
    ecx += edi;
    eax += ecx;
    eax = fcn_0040ef27 (eax, ecx, ebx + 1, ebp - 0x2c);
    if (eax != 0) {
        *(edi) = 0;
    } else {
        eax = ebp - 0x2c;
        fcn_0040df0d (edi, esi, ebx, *((ebp + 0x18)), eax, 0, *((ebp + 0x1c)));
    }
label_1:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40deef */
#include <stdint.h>
 
void fcn_0040deef (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    fcn_0040e05e (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)), *((ebp + 0x18)), 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40edf0 */
#include <stdint.h>
 
int32_t fcn_0040edf0 (int32_t arg_8h, int32_t arg_ch) {
    if (*(0x419ee8) < 1) {
        goto label_1;
    }
    edi = *((ebp + 8));
    if (*(0x419ee8) > 1) {
        goto label_2;
    }
    edx = *((ebp + 0xc));
    eax = edx;
    edx <<= 8;
    edx |= eax;
    xmm3 = edx;
    __asm ("pshuflw xmm3, xmm3, 0");
    __asm ("movlhps xmm3, xmm3");
    ecx = 0xf;
    ecx &= edi;
    eax |= 0xffffffff;
    eax <<= cl;
    edi -= ecx;
    edx = 0;
    do {
        __asm ("movdqu xmm1, xmmword [edi]");
        xmm2 = 0;
        __asm ("pcmpeqb xmm2, xmm1");
        __asm ("pcmpeqb xmm1, xmm3");
        __asm ("pmovmskb ecx, xmm2");
        ecx &= eax;
        if (ecx != 0) {
            goto label_3;
        }
        __asm ("pmovmskb ecx, xmm1");
        ecx &= eax;
        __asm ("bsr eax, ecx");
        eax += edi;
        if (ecx != 0) {
            edx = eax;
        }
        eax |= 0xffffffff;
        edi += 0x10;
    } while (1);
label_3:
    __asm ("pmovmskb ebx, xmm1");
    ebx &= eax;
    ecx <<= 1;
    eax = 0;
    eax -= ecx;
    ecx &= eax;
    ecx--;
    ecx &= ebx;
    __asm ("bsr eax, ecx");
    eax += edi;
    if (ecx == 0) {
        eax = edx;
    }
    edi = ebx;
    return eax;
label_2:
    edx = *((ebp + 0xc));
    if (edx == 0) {
        goto label_4;
    }
    eax = 0;
    if ((edi & 0xf) == 0) {
        goto label_5;
    }
    do {
        ecx = *(edi);
        if (ecx == edx) {
            eax = edi;
        }
        if (ecx == 0) {
            goto label_0;
        }
        edi++;
    } while ((edi & 0xf) != 0);
label_5:
    xmm0 = edx;
    do {
        edi += 0x10;
        __asm ("pcmpistri xmm0, xmmword [edi - 0x10], 0x40");
        ecx = edi + ecx - 0x10;
        if (edi < 0) {
            eax = ecx;
        }
    } while (edi != 0);
label_0:
    edi = ebx;
    return eax;
label_4:
    eax = 0xfffffff0;
    eax &= edi;
    xmm0 = 0;
    __asm ("pcmpeqb xmm0, xmmword [eax]");
    ecx = 0xf;
    ecx &= edi;
    edx = 0xffffffff;
    edx <<= cl;
    __asm ("pmovmskb edi, xmm0");
    edi &= edx;
    if (edi != 0) {
        goto label_6;
    }
    do {
        xmm0 = 0;
        __asm ("pcmpeqb xmm0, xmmword [eax + 0x10]");
        eax += 0x10;
        __asm ("pmovmskb edi, xmm0");
    } while (edi == 0);
label_6:
    __asm ("bsf edx, edi");
    eax += edx;
    goto label_0;
label_1:
    edi = *((ebp + 8));
    eax = 0;
    ecx |= 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx++;
    ecx = -ecx;
    edi--;
    al = *((ebp + 0xc));
    __asm ("std");
    __asm ("repne scasb al, byte es:[edi]");
    edi++;
    if (*(edi) != al) {
        eax = 0;
    } else {
        eax = edi;
    }
    edi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40f210 */
#include <stdint.h>
 
int32_t fcn_0040f210 (void) {
    if (cl < 0x40) {
        if (cl < 0x20) {
            __asm ("shrd eax, edx, cl");
            edx >>= cl;
            return;
        }
        eax = edx;
        edx = 0;
        cl &= 0x1f;
        eax >>= cl;
        return eax;
    }
    eax = 0;
    edx = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40f130 */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_0040f130 (uint32_t arg_10h, uint32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    edi = 0;
    ebp = 0;
    eax = *((esp + 0x14));
    eax |= eax;
    if (eax < 0) {
        edi++;
        ebp++;
        edx = *((esp + 0x10));
        eax = -eax;
        edx = -edx;
        *((esp + 0x14)) = eax;
        *((esp + 0x10)) = edx;
    }
    eax = *((esp + 0x1c));
    eax |= eax;
    if (eax < 0) {
        edi++;
        edx = *((esp + 0x18));
        eax = -eax;
        edx = -edx;
        *((esp + 0x1c)) = eax;
        *((esp + 0x18)) = edx;
    }
    eax |= eax;
    if (eax == 0) {
        ecx = *((esp + 0x18));
        eax = *((esp + 0x14));
        edx = 0;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        ebx = eax;
        eax = *((esp + 0x10));
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        esi = eax;
        eax = ebx;
        edx:eax = eax * *((esp + 0x18));
        ecx = eax;
        eax = esi;
        edx:eax = eax * *((esp + 0x18));
        edx += ecx;
        goto label_0;
    }
    ebx = eax;
    ecx = *((esp + 0x18));
    edx = *((esp + 0x14));
    eax = *((esp + 0x10));
    do {
        ebx >>= 1;
        ecx = rotate_right32 (ecx, 1);
        edx >>= 1;
        eax = rotate_right32 (eax, 1);
        ebx |= ebx;
    } while (ebx != 0);
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    esi = eax;
    edx:eax = eax * *((esp + 0x1c));
    ecx = eax;
    eax = *((esp + 0x18));
    edx:eax = eax * esi;
    edx += ecx;
    if (edx >= 0) {
        if (edx > *((esp + 0x14))) {
            goto label_1;
        }
        if (edx < *((esp + 0x14))) {
            goto label_2;
        }
        if (eax <= *((esp + 0x10))) {
            goto label_2;
        }
    }
label_1:
    esi--;
    eax -= *((esp + 0x18));
    edx -= *((esp + 0x1c));
label_2:
    ebx = 0;
label_0:
    eax -= *((esp + 0x10));
    edx -= *((esp + 0x14));
    ebp--;
    if (ebp < 0) {
        edx = -edx;
        eax = -eax;
    }
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    edi--;
    if (edi == 0) {
        edx = -edx;
        eax = -eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e562 */
#include <stdint.h>
 
uint32_t fcn_0040e562 (int32_t arg_8h, int32_t arg_ch) {
    edi = *((ebp + 0xc));
    if (edi != 0) {
        esi = *((ebp + 8));
        eax = fcn_00402cc0 (esi);
        eax++;
        eax = esi + edi;
        fcn_0040e7a0 (eax, esi, eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e7a0 */
#include <stdint.h>
 
void fcn_0040e7a0 (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_ch_2, int32_t arg_ch_3, int32_t arg_ch_4) {
    esi = *((esp + 0x10));
    ecx = *((esp + 0x14));
    edi = *((esp + 0xc));
    eax = ecx;
    edx = ecx;
    eax += esi;
    if (edi > esi) {
        if (edi < eax) {
            goto label_2;
        }
    }
    if (((0x419eec >> 1) & 1) >= 0) {
        goto label_3;
    }
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    goto label_4;
label_3:
    if (ecx < 0x80) {
        goto label_5;
    }
    eax = edi;
    eax ^= esi;
    if ((eax & 0xf) == 0) {
        if (((0x418e00 >> 1) & 1) < 0) {
            goto label_6;
        }
    }
    if (((0x419eec >> 0) & 1) >= 0) {
        goto label_5;
    }
    if ((edi & 3) != 0) {
        goto label_7;
    }
    if ((esi & 3) != 0) {
        goto label_8;
    }
    if (((edi >> 2) & 1) < 0) {
        eax = *(esi);
        ecx -= 4;
        esi = esi + 4;
        *(edi) = eax;
        edi = edi + 4;
    }
    if (((edi >> 3) & 1) < 0) {
        xmm1 = *(esi);
        ecx -= 8;
        esi = esi + 8;
        *(edi) = xmm1;
        edi = edi + 8;
    }
    if ((esi & 7) == 0) {
        goto label_9;
    }
    if (((esi >> 3) & 1) >= 0) {
        goto label_10;
    }
    __asm ("movdqa xmm1, xmmword [esi - 0xc]");
    esi = esi - 0xc;
    do {
        __asm ("movdqa xmm3, xmmword [esi + 0x10]");
        ecx -= 0x30;
        __asm ("movdqa xmm0, xmmword [esi + 0x20]");
        __asm ("movdqa xmm5, xmmword [esi + 0x30]");
        esi = esi + 0x30;
        __asm ("movdqa xmm2, xmm3");
        __asm ("palignr xmm3, xmm1, 0xc");
        __asm ("movdqa xmmword [edi], xmm3");
        __asm ("movdqa xmm4, xmm0");
        __asm ("palignr xmm0, xmm2, 0xc");
        __asm ("movdqa xmmword [edi + 0x10], xmm0");
        __asm ("movdqa xmm1, xmm5");
        __asm ("palignr xmm5, xmm4, 0xc");
        __asm ("movdqa xmmword [edi + 0x20], xmm5");
        edi = edi + 0x30;
    } while (ecx >= 0x30);
    esi = esi + 0xc;
    goto label_11;
label_9:
    __asm ("movdqa xmm1, xmmword [esi - 8]");
    esi = esi - 8;
    do {
        __asm ("movdqa xmm3, xmmword [esi + 0x10]");
        ecx -= 0x30;
        __asm ("movdqa xmm0, xmmword [esi + 0x20]");
        __asm ("movdqa xmm5, xmmword [esi + 0x30]");
        esi = esi + 0x30;
        __asm ("movdqa xmm2, xmm3");
        __asm ("palignr xmm3, xmm1, 8");
        __asm ("movdqa xmmword [edi], xmm3");
        __asm ("movdqa xmm4, xmm0");
        __asm ("palignr xmm0, xmm2, 8");
        __asm ("movdqa xmmword [edi + 0x10], xmm0");
        __asm ("movdqa xmm1, xmm5");
        __asm ("palignr xmm5, xmm4, 8");
        __asm ("movdqa xmmword [edi + 0x20], xmm5");
        edi = edi + 0x30;
    } while (ecx >= 0x30);
    esi = esi + 8;
    goto label_11;
label_10:
    __asm ("movdqa xmm1, xmmword [esi - 4]");
    esi = esi - 4;
    do {
        __asm ("movdqa xmm3, xmmword [esi + 0x10]");
        ecx -= 0x30;
        __asm ("movdqa xmm0, xmmword [esi + 0x20]");
        __asm ("movdqa xmm5, xmmword [esi + 0x30]");
        esi = esi + 0x30;
        __asm ("movdqa xmm2, xmm3");
        __asm ("palignr xmm3, xmm1, 4");
        __asm ("movdqa xmmword [edi], xmm3");
        __asm ("movdqa xmm4, xmm0");
        __asm ("palignr xmm0, xmm2, 4");
        __asm ("movdqa xmmword [edi + 0x10], xmm0");
        __asm ("movdqa xmm1, xmm5");
        __asm ("palignr xmm5, xmm4, 4");
        __asm ("movdqa xmmword [edi + 0x20], xmm5");
        edi = edi + 0x30;
    } while (ecx >= 0x30);
    esi = esi + 4;
    do {
label_11:
        if (ecx < 0x10) {
            goto label_12;
        }
        __asm ("movdqu xmm1, xmmword [esi]");
        ecx -= 0x10;
        esi = esi + 0x10;
        __asm ("movdqa xmmword [edi], xmm1");
        edi = edi + 0x10;
    } while (1);
label_12:
    if (((ecx >> 2) & 1) < 0) {
        eax = *(esi);
        ecx -= 4;
        esi = esi + 4;
        *(edi) = eax;
        edi = edi + 4;
    }
    if (((ecx >> 3) & 1) < 0) {
        xmm1 = *(esi);
        ecx -= 8;
        esi = esi + 8;
        *(edi) = xmm1;
        edi = edi + 8;
    }
    eax = *((ecx*4 + 0x40ead8));
    /* switch table (4 cases) at 0x40ead8 */
    void (*eax)() ();
label_5:
    if ((edi & 3) == 0) {
label_8:
        ecx >>= 2;
        edx &= 3;
        if (ecx < 8) {
            goto label_13;
        }
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        /* switch table (4 cases) at 0x40ead8 */
    }
label_7:
    eax = edi;
    edx = 3;
    ecx -= 4;
    if (ecx >= 0) {
        eax &= 3;
        ecx += eax;
    }
    /* switch table (8 cases) at 0x40ea6c */
label_13:
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
label_4:
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *(esi);
    *(edi) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
label_2:
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
            /* switch table (4 cases) at 0x40ec74 */
        }
        ecx = -ecx;
        /* switch table (1 cases) at 0x40ec24 */
    }
    eax = edi;
    edx = 3;
    if (ecx >= 4) {
        eax &= 3;
        ecx -= eax;
    }
    /* switch table (4 cases) at 0x40ec74 */
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
    al = *((esi + 3));
    *((edi + 3)) = al;
    al = *((esi + 2));
    *((edi + 2)) = al;
    al = *((esi + 1));
    *((edi + 1)) = al;
    eax = *((esp + 0xc));
    edi = esi;
    return eax;
label_6:
    eax = esi;
    eax &= 0xf;
    if (eax != 0) {
        goto label_14;
    }
label_1:
    edx = ecx;
    ecx &= 0x7f;
    edx >>= 7;
    if (edx == 0) {
        goto label_15;
    }
label_0:
    __asm ("movdqa xmm0, xmmword [esi]");
    do {
        __asm ("movdqa xmm1, xmmword [esi + 0x10]");
    } while (ecx != 0);
    __asm ("movdqa xmm2, xmmword [esi + 0x20]");
    __asm ("movdqa xmm3, xmmword [esi + 0x30]");
    __asm ("movdqa xmmword [edi], xmm0");
    __asm ("movdqa xmmword [edi + 0x10], xmm1");
    __asm ("movdqa xmmword [edi + 0x20], xmm2");
    __asm ("movdqa xmmword [edi + 0x30], xmm3");
    __asm ("movdqa xmm4, xmmword [esi + 0x40]");
    __asm ("movdqa xmm5, xmmword [esi + 0x50]");
    __asm ("movdqa xmm6, xmmword [esi + 0x60]");
    __asm ("movdqa xmm7, xmmword [esi + 0x70]");
    __asm ("movdqa xmmword [edi + 0x40], xmm4");
    __asm ("movdqa xmmword [edi + 0x50], xmm5");
    __asm ("movdqa xmmword [edi + 0x60], xmm6");
    __asm ("movdqa xmmword [edi + 0x70], xmm7");
    esi = esi + 0x80;
    edi = edi + 0x80;
    edx--;
    if (edx != 0) {
        goto label_0;
    }
label_15:
    if (ecx == 0) {
        goto label_16;
    }
    edx = ecx;
    edx >>= 4;
    if (edx == 0) {
        goto label_17;
    }
    do {
        __asm ("movdqa xmm0, xmmword [esi]");
        __asm ("movdqa xmmword [edi], xmm0");
        esi = esi + 0x10;
        edi = edi + 0x10;
        edx--;
    } while (edx != 0);
label_17:
    ecx &= 0xf;
    if (ecx == 0) {
        goto label_16;
    }
    eax = ecx;
    ecx >>= 2;
    if (ecx == 0) {
        goto label_18;
    }
    do {
        edx = *(esi);
        *(edi) = edx;
        esi = esi + 4;
        edi = edi + 4;
        ecx--;
    } while (ecx != 0);
label_18:
    ecx = eax;
    ecx &= 3;
    if (ecx == 0) {
        goto label_16;
    }
    do {
        al = *(esi);
        *(edi) = al;
        esi++;
        edi++;
        ecx--;
    } while (ecx != 0);
label_16:
    return;
label_14:
    edx = 0x10;
    edx -= eax;
    ecx -= edx;
    eax = edx;
    ecx = edx;
    ecx &= 3;
    if (ecx == 0) {
        goto label_19;
    }
    do {
        dl = *(esi);
        *(edi) = dl;
        esi++;
        edi++;
        ecx--;
    } while (ecx != 0);
label_19:
    eax >>= 2;
    if (eax == 0) {
        goto label_20;
    }
    do {
        edx = *(esi);
        *(edi) = edx;
        esi = esi + 4;
        edi = edi + 4;
        eax--;
    } while (eax != 0);
label_20:
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40f09f */
#include <stdint.h>
 
int32_t fcn_0040f09f (int32_t arg_8h, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_30h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1eh;
    int32_t var_1ch;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x14));
    ebx = *((ebp + 0x10));
    *((ebp - 0x24)) = eax;
    eax = ebp + 8;
    fcn_0040efd7 (ebp - 0x30, eax);
    esi = ebp - 0x30;
    edi = esp;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 4;
    es:edi += 4;
    *(es:edi) = *(esi);
    esi += 2;
    es:edi += 2;
    eax = fcn_0040f28c (0x11, 0, ebp - 0x20);
    esi = *((ebp - 0x24));
    *((ebx + 8)) = eax;
    eax = *((ebp - 0x1e));
    *(ebx) = eax;
    eax = *((ebp - 0x20));
    *((ebx + 4)) = eax;
    eax = fcn_0040aa84 (esi, *((ebp + 0x18)), ebp - 0x1c);
    if (eax == 0) {
        ecx = *((ebp - 4));
        eax = ebx;
        *((ebx + 0xc)) = esi;
        ecx ^= ebp;
        eax = fcn_00404f47 ();
        return eax;
    }
    eax = 0;
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40efd7 */
#include <stdint.h>
 
int32_t fcn_0040efd7 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0xc));
    edi = *((eax + 6));
    ebx = 0x80000000;
    edx = *((eax + 4));
    ecx = edi;
    eax = *(eax);
    edi &= 0x8000;
    ecx >>= 4;
    edx &= 0xfffff;
    ecx &= 0x7ff;
    *((ebp - 8)) = edi;
    esi = ecx;
    *((ebp - 4)) = eax;
    if (esi != 0) {
        if (esi != 0x7ff) {
            eax = ecx + 0x3c00;
        } else {
            eax = 0x7fff;
        } else {
            if (edx == 0) {
                if (eax != 0) {
                    goto label_0;
                }
                eax = *((ebp + 8));
                *((eax + 4)) &= edx;
                *(eax) &= edx;
                *((eax + 8)) = di;
                goto label_1;
            }
label_0:
            eax = ecx + 0x3c01;
            ebx = 0;
        }
        eax = (int32_t) ax;
    }
    ecx = *((ebp - 4));
    esi = *((ebp - 4));
    esi >>= 0x15;
    edx <<= 0xb;
    esi |= edx;
    ecx <<= 0xb;
    esi |= ebx;
    *((ebp + 0xc)) = eax;
    ebx = *((ebp + 8));
    *((ebx + 4)) = esi;
    *(ebx) = ecx;
    if (esi < 0) {
        goto label_2;
    }
    edi = eax;
    do {
        edx = *(ebx);
        esi += esi;
        ecx = edx;
        edi += 0xffff;
        ecx >>= 0x1f;
        esi |= ecx;
        eax = edx + edx;
        *(ebx) = eax;
    } while (esi >= 0);
    *((ebp + 0xc)) = edi;
    edi = *((ebp - 8));
    eax = *((ebp + 0xc));
    *((ebx + 4)) = esi;
label_2:
    edi |= eax;
    *((ebx + 8)) = di;
label_1:
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40f28c */
#include <stdint.h>
 
int32_t fcn_0040f28c (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_88h;
    int32_t var_84h;
    uint32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    uint32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    int32_t var_58h;
    uint32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    int32_t var_3ch;
    int32_t var_3ah;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    int32_t var_26h;
    int32_t var_20h;
    uint32_t var_1eh;
    int32_t var_1ch;
    int32_t var_1ah;
    int32_t var_18h;
    int32_t var_16h;
    int32_t var_15h;
    int32_t var_10h;
    int32_t var_eh;
    int32_t var_ch;
    int32_t var_ah;
    int32_t var_8h;
    int32_t var_6h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    edx = *((ebp + 0x10));
    ecx = 0;
    ebx = *((ebp + 0x1c));
    eax = 0x7fff;
    esi = 0x8000;
    *((ebp - 0x74)) = ebx;
    edx &= esi;
    *((ebp - 0x30)) = 0xcccccccc;
    esi = *((ebp + 0x10));
    ecx++;
    esi &= eax;
    *((ebp - 0x2c)) = 0xcccccccc;
    *((ebp - 0x28)) = 0x3ffbcccc;
    *((ebp - 0x80)) = edx;
    *((ebp - 0x64)) = eax;
    if (dx != 0) {
        *((ebx + 2)) = 0x2d;
    } else {
        *((ebx + 2)) = 0x20;
    }
    edi = *((ebp + 0xc));
    if (si == 0) {
        if (edi != 0) {
            goto label_7;
        }
        if (*((ebp + 8)) != edi) {
            goto label_7;
        }
        eax = 0;
        *((ebx + 3)) = cl;
        *(ebx) = ax;
        eax = 0x8000;
        al = (dx != ax) ? 1 : 0;
        al--;
        al &= 0xd;
        al += 0x20;
        *((ebx + 2)) = al;
        eax = ecx;
        *((ebx + 4)) = 0x30;
        goto label_8;
    }
    if (si == ax) {
        eax = *((ebp + 0xc));
        edx = 0x80000000;
        *(ebx) = cx;
        ecx = *((ebp + 8));
        if (eax == edx) {
            if (ecx == 0) {
                goto label_9;
            }
        }
        if ((eax & 0x40000000) == 0) {
        } else {
label_9:
            if (*((ebp - 0x80)) != 0) {
                if (eax == 0xc0000000) {
                    if (ecx != 0) {
                        goto label_10;
                    }
                }
            } else {
                if (eax != edx) {
                    goto label_10;
                }
                if (ecx != 0) {
                    goto label_10;
                }
            }
            eax = ebx + 4;
            eax = fcn_0040aa84 (eax, 0x16, "1#INF");
            if (eax != 0) {
                goto label_11;
            }
            *((ebx + 3)) = 5;
            goto label_12;
label_10:
        }
        eax = ebx + 4;
        eax = fcn_0040aa84 (eax, 0x16, "1#QNAN");
        if (eax != 0) {
            goto label_11;
        }
        *((ebx + 3)) = 6;
label_12:
        eax = 0;
        goto label_8;
    }
label_7:
    edx = (int32_t) si;
    ecx = edi;
    ecx >>= 0x18;
    eax = edx;
    eax >>= 8;
    ebx = 0;
    *((ebp - 0x1a)) = edi;
    edi = 0x418ec8;
    edi -= 0x60;
    *((ebp - 0x16)) = si;
    *((ebp - 0x58)) = 5;
    eax = eax + ecx*2;
    *((ebp - 0x70)) = 0xbffd;
    ecx = eax * 0x4d;
    eax = edx * 0x4d10;
    *((ebp - 0x54)) = 0x3fbf;
    eax += 0xecbced0c;
    eax += ecx;
    eax >>= 0x10;
    ecx = (int32_t) ax;
    eax = *((ebp + 8));
    *((ebp - 0x1e)) = eax;
    eax = 0;
    *((ebp - 0x20)) = ax;
    eax = (int32_t) cx;
    eax = -eax;
    *((ebp - 0x48)) = ecx;
    *((ebp - 0x44)) = eax;
    if (eax == 0) {
        goto label_13;
    }
    if (eax < 0) {
        eax = -eax;
        edi = 0x419028;
        edi -= 0x60;
        *((ebp - 0x44)) = eax;
    }
    if (eax == 0) {
        goto label_13;
    }
    esi = *((ebp - 0x20));
    edx = *((ebp - 0x1c));
    *((ebp - 0x40)) = esi;
label_1:
    *((ebp - 0x44)) >>= 3;
    edi += 0x54;
    *((ebp - 0x6c)) = edi;
    eax &= 7;
    if (eax == 0) {
        goto label_14;
    }
    ecx = eax * 0xc;
    eax = 0x8000;
    ecx += edi;
    *((ebp - 0x68)) = ecx;
    if (*(ecx) >= ax) {
        esi = ecx;
        edi = ebp - 0x3c;
        ecx = ebp - 0x3c;
        *((ebp - 0x68)) = ecx;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *((ebp - 0x3a))--;
    }
    edi = *((ecx + 0xa));
    esi = 0x8000;
    eax = *((ebp - 0x16));
    *((ebp - 0x5c)) = edi;
    edi &= 0x7fff;
    *((ebp - 0x5c)) ^= eax;
    eax &= 0x7fff;
    *((ebp - 0x5c)) &= esi;
    *((ebp - 0x50)) = eax;
    eax += edi;
    *((ebp - 0x60)) = edi;
    esi--;
    edi = (int32_t) ax;
    eax = *((ebp - 0x50));
    esi = *((ebp - 0x40));
    *((ebp - 0x7c)) = ebx;
    *((ebp - 0x10)) = ebx;
    *((ebp - 0xc)) = ebx;
    *((ebp - 8)) = ebx;
    *((ebp - 0x4c)) = edi;
    if (ax >= si) {
        goto label_15;
    }
    ecx = 0x7fff;
    ecx = *((ebp - 0x68));
    if (*((ebp - 0x60)) >= cx) {
        goto label_15;
    }
    if (di > *((ebp - 0x70))) {
        goto label_15;
    }
    while (*(ecx) == ebx) {
        *((ebp - 0x18)) = ebx;
        goto label_16;
        if (ax == 0) {
            edi++;
            *((ebp - 0x4c)) = edi;
            if ((*((ebp - 0x18)) & 0x7fffffff) != 0) {
                goto label_17;
            }
            if (edx != 0) {
                goto label_17;
            }
            if (esi != 0) {
                goto label_17;
            }
            eax = 0;
            *((ebp - 0x16)) = ax;
            goto label_18;
        }
label_17:
        if (*((ebp - 0x60)) != 0) {
            goto label_19;
        }
        edi++;
        *((ebp - 0x4c)) = edi;
        if ((*((ecx + 8)) & 0x7fffffff) != 0) {
            goto label_19;
        }
        if (*((ecx + 4)) != ebx) {
            goto label_19;
        }
    }
label_19:
    eax = ebx;
    edx = ebp - 0xc;
    esi = 5;
    *((ebp - 0x84)) = eax;
    *((ebp - 0x50)) = esi;
label_0:
    *((ebp - 0x60)) = esi;
    if (esi <= 0) {
        goto label_20;
    }
    esi = ebp - 0x20;
    eax = esi + eax*2;
    esi = ecx + 8;
    *((ebp - 0x88)) = eax;
    *((ebp - 0x40)) = esi;
    esi = *((ebp - 0x60));
    ecx = *((ebp - 0x40));
    do {
        edi = *(eax);
        eax = *(ecx);
        edi *= eax;
        eax = *((edx - 4));
        *((ebp - 0x78)) = ebx;
        ecx = eax + edi;
        *((ebp - 0x60)) = ecx;
        eax = ecx;
        if (ecx >= eax) {
            if (eax >= edi) {
                goto label_21;
            }
        }
        ecx = 0;
        ecx++;
        goto label_22;
label_21:
        ecx = *((ebp - 0x78));
label_22:
        *((edx - 4)) = eax;
        if (ecx != 0) {
            *(edx)++;
        }
        eax = *((ebp - 0x88));
        ecx = *((ebp - 0x40));
        eax += 2;
        ecx -= 2;
        *((ebp - 0x88)) = eax;
        esi--;
        *((ebp - 0x40)) = ecx;
    } while (esi > 0);
    ecx = *((ebp - 0x68));
    esi = *((ebp - 0x50));
    eax = *((ebp - 0x84));
label_20:
    edx += 2;
    eax++;
    esi--;
    *((ebp - 0x84)) = eax;
    *((ebp - 0x50)) = esi;
    if (esi > 0) {
        goto label_0;
    }
    edi = *((ebp - 0x4c));
    eax = *((ebp - 8));
    edi += 0xc002;
    esi = *((ebp - 0x10));
    *((ebp - 0x40)) = eax;
    if (di <= 0) {
        goto label_23;
    }
    do {
        if (eax < 0) {
            goto label_24;
        }
        eax = *((ebp - 0xc));
        edx = esi;
        ecx = eax;
        edx >>= 0x1f;
        eax += eax;
        ecx >>= 0x1f;
        eax |= edx;
        esi += esi;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0x40));
        eax += eax;
        *((ebp - 0x10)) = esi;
        eax |= ecx;
        ecx = 0xffff;
        edi += ecx;
        *((ebp - 0x40)) = eax;
        *((ebp - 8)) = eax;
    } while (di > 0);
label_24:
    if (di > 0) {
        goto label_25;
    }
label_23:
    eax = 0xffff;
    edi += eax;
    if (di >= 0) {
        goto label_25;
    }
    ebx = *((ebp - 0x40));
    eax = edi;
    eax = -eax;
    edx = 0;
    eax = (int32_t) ax;
    edi += eax;
    *((ebp - 0x50)) = eax;
    *((ebp - 0x4c)) = edi;
    edx++;
    edi = *((ebp - 0x7c));
    do {
        if ((*((ebp - 0x10)) & dl) != 0) {
            edi++;
        }
        ecx = *((ebp - 0xc));
        eax = ebx;
        eax <<= 0x1f;
        *((ebp - 0x40)) = ecx;
        *((ebp - 0x40)) >>= 1;
        *((ebp - 0x40)) |= eax;
        eax = *((ebp - 0x40));
        ecx <<= 0x1f;
        esi >>= 1;
        ebx >>= 1;
        esi |= ecx;
        *((ebp - 0x50))--;
        *((ebp - 8)) = ebx;
        *((ebp - 0xc)) = eax;
        *((ebp - 0x10)) = esi;
    } while (*((ebp - 0x50)) != 0);
    *((ebp - 0x40)) = ebx;
    edi = *((ebp - 0x4c));
    ebx = 0;
    if (edi != 0) {
        ax = si;
        ax |= dx;
        *((ebp - 0x10)) = ax;
        esi = *((ebp - 0x10));
    } else {
label_25:
        ax = *((ebp - 0x10));
    }
    ecx = 0x8000;
    if (ax <= cx) {
        esi &= 0x1ffff;
        if (esi != 0x18000) {
            goto label_26;
        }
    }
    eax = *((ebp - 0xe));
    if (eax == -1) {
        eax = *((ebp - 0xa));
        *((ebp - 0xe)) = ebx;
        if (eax == -1) {
            ax = *((ebp - 6));
            edx = 0xffff;
            *((ebp - 0xa)) = ebx;
            if (ax == dx) {
                *((ebp - 6)) = cx;
                edi++;
            } else {
                ax++;
            }
            *((ebp - 6)) = ax;
        } else {
            eax++;
            *((ebp - 0xa)) = eax;
        }
        ecx = *((ebp - 8));
    } else {
        eax++;
        *((ebp - 0xe)) = eax;
label_26:
        ecx = *((ebp - 0x40));
    }
    eax = 0x7fff;
    if (di < ax) {
        ax = *((ebp - 0xe));
        edi |= *((ebp - 0x5c));
        *((ebp - 0x20)) = ax;
        eax = *((ebp - 0xc));
        *((ebp - 0x1e)) = eax;
        esi = *((ebp - 0x20));
        *((ebp - 0x1a)) = ecx;
        edx = *((ebp - 0x1c));
        *((ebp - 0x16)) = di;
    } else {
label_15:
        eax = 0;
        al = (*((ebp - 0x5c)) == ax) ? 1 : 0;
        eax--;
        eax &= 0x80000000;
        eax += 0x7fff8000;
        *((ebp - 0x18)) = eax;
label_16:
        esi = ebx;
        edx = ebx;
        *((ebp - 0x20)) = esi;
        *((ebp - 0x1c)) = edx;
    }
    *((ebp - 0x40)) = esi;
label_18:
    edi = *((ebp - 0x6c));
label_14:
    eax = *((ebp - 0x44));
    if (eax != 0) {
        goto label_1;
    }
    ecx = *((ebp - 0x48));
    goto label_27;
label_13:
    edx = *((ebp - 0x1c));
    esi = *((ebp - 0x20));
label_27:
    eax = *((ebp - 0x18));
    edi = 0x3fff;
    eax >>= 0x10;
    if (ax < di) {
        goto label_28;
    }
    ecx++;
    *((ebp - 0x78)) = ebx;
    *((ebp - 0x48)) = ecx;
    ecx = eax;
    eax = *((ebp - 0x26));
    edi = *((ebp - 0x26));
    edi ^= ecx;
    *((ebp - 0x10)) = ebx;
    edi &= 0x8000;
    *((ebp - 0xc)) = ebx;
    *((ebp - 0x44)) = edi;
    edi = 0x7fff;
    eax &= edi;
    *((ebp - 8)) = ebx;
    ecx &= edi;
    *((ebp - 0x7c)) = eax;
    eax += ecx;
    edi = (int32_t) ax;
    eax = 0x7fff;
    *((ebp - 0x4c)) = edi;
    if (cx >= ax) {
        goto label_29;
    }
    eax = *((ebp - 0x7c));
    if (ax >= *((ebp - 0x64))) {
        goto label_29;
    }
    if (di > *((ebp - 0x70))) {
        goto label_29;
    }
    while (*((ebp - 0x30)) == 0) {
        *((ebp - 0x18)) = ebx;
        goto label_30;
        if (cx == 0) {
            edi++;
            *((ebp - 0x4c)) = edi;
            if ((*((ebp - 0x18)) & 0x7fffffff) != 0) {
                goto label_31;
            }
            if (edx != 0) {
                goto label_31;
            }
            if (esi != 0) {
                goto label_31;
            }
            eax = 0;
            *((ebp - 0x16)) = ax;
            goto label_28;
        }
label_31:
        if (ax != 0) {
            goto label_32;
        }
        edi++;
        *((ebp - 0x4c)) = edi;
        if ((*((ebp - 0x28)) & 0x7fffffff) != 0) {
            goto label_32;
        }
        if (*((ebp - 0x2c)) != 0) {
            goto label_32;
        }
    }
label_32:
    edx = ebx;
    ecx = ebp - 0xc;
    *((ebp - 0x50)) = edx;
    eax = 5;
label_2:
    esi = eax;
    if (eax <= 0) {
        goto label_33;
    }
    edi = ebp - 0x20;
    eax = ebp - 0x28;
    edi = edi + edx*2;
    *((ebp - 0x70)) = eax;
    *((ebp - 0x54)) = edi;
    do {
        edx = *(eax);
        eax = *(edi);
        edx *= eax;
        eax = *((ecx - 4));
        *((ebp - 0x64)) = ebx;
        edi = eax + edx;
        if (edi >= eax) {
            if (edi >= edx) {
                goto label_34;
            }
        }
        eax = 0;
        eax++;
        goto label_35;
label_34:
        eax = *((ebp - 0x64));
label_35:
        *((ecx - 4)) = edi;
        if (eax != 0) {
            *(ecx)++;
        }
        edi = *((ebp - 0x54));
        eax = *((ebp - 0x70));
        edi += 2;
        eax -= 2;
        *((ebp - 0x54)) = edi;
        esi--;
        *((ebp - 0x70)) = eax;
    } while (esi > 0);
    edx = *((ebp - 0x50));
    eax = *((ebp - 0x58));
label_33:
    ecx += 2;
    edx++;
    eax--;
    *((ebp - 0x50)) = edx;
    *((ebp - 0x58)) = eax;
    if (eax > 0) {
        goto label_2;
    }
    edi = *((ebp - 0x4c));
    esi = *((ebp - 8));
    edi += 0xc002;
    if (di <= 0) {
        goto label_36;
    }
    ebx = *((ebp - 0x10));
    *((ebp - 0x68)) = ebx;
    do {
        if (esi < 0) {
            goto label_37;
        }
        eax = *((ebp - 0xc));
        edx = ebx;
        ecx = eax;
        edx >>= 0x1f;
        eax += eax;
        ecx >>= 0x1f;
        eax |= edx;
        esi += esi;
        *((ebp - 0xc)) = eax;
        ebx += ebx;
        eax = 0xffff;
        *((ebp - 0x10)) = ebx;
        esi |= ecx;
        edi += eax;
        *((ebp - 8)) = esi;
    } while (di > 0);
label_37:
    *((ebp - 0x68)) = ebx;
    edx = *((ebp - 0x68));
    ebx = 0;
    while (di >= 0) {
label_3:
        cx = *((ebp - 0x10));
label_4:
        eax = 0x8000;
        if (cx <= ax) {
            edx &= 0x1ffff;
            if (edx != 0x18000) {
                goto label_38;
            }
        }
        eax = *((ebp - 0xe));
        if (eax != -1) {
            goto label_39;
        }
        eax = *((ebp - 0xa));
        *((ebp - 0xe)) = ebx;
        if (eax != -1) {
            goto label_40;
        }
        ax = *((ebp - 6));
        ecx = 0xffff;
        *((ebp - 0xa)) = ebx;
        if (ax != cx) {
            goto label_41;
        }
        eax = 0x8000;
        edi++;
        *((ebp - 6)) = ax;
        goto label_42;
label_36:
        edx = *((ebp - 0x10));
        eax = 0xffff;
        edi += eax;
    }
    eax = edi;
    eax = -eax;
    eax = (int32_t) ax;
    edi += eax;
    *((ebp - 0x58)) = eax;
    *((ebp - 0x4c)) = edi;
    edi = *((ebp - 0x78));
    do {
        if ((*((ebp - 0x10)) & 1) != 0) {
            edi++;
        }
        ebx = *((ebp - 0xc));
        eax = esi;
        ecx = ebx;
        eax <<= 0x1f;
        ecx <<= 0x1f;
        ebx >>= 1;
        edx >>= 1;
        ebx |= eax;
        edx |= ecx;
        esi >>= 1;
        *((ebp - 0x58))--;
        *((ebp - 0xc)) = ebx;
        *((ebp - 0x10)) = edx;
    } while (*((ebp - 0x58)) != 0);
    *((ebp - 8)) = esi;
    edi = *((ebp - 0x4c));
    ebx = 0;
    if (edi == 0) {
        goto label_3;
    }
    eax = 0;
    cx = dx;
    eax++;
    cx |= ax;
    *((ebp - 0x10)) = cx;
    edx = *((ebp - 0x10));
    goto label_4;
label_41:
    ax++;
    *((ebp - 6)) = ax;
    goto label_42;
label_40:
    eax++;
    *((ebp - 0xa)) = eax;
label_42:
    esi = *((ebp - 8));
    goto label_38;
label_39:
    eax++;
    *((ebp - 0xe)) = eax;
label_38:
    eax = 0x7fff;
    if (di < ax) {
        ax = *((ebp - 0xe));
        edi |= *((ebp - 0x44));
        *((ebp - 0x20)) = ax;
        eax = *((ebp - 0xc));
        *((ebp - 0x1e)) = eax;
        *((ebp - 0x1a)) = esi;
        edx = *((ebp - 0x1c));
        esi = *((ebp - 0x20));
        *((ebp - 0x16)) = di;
    } else {
label_29:
        eax = 0;
        al = (*((ebp - 0x44)) == ax) ? 1 : 0;
        eax--;
        eax &= 0x80000000;
        eax += 0x7fff8000;
        *((ebp - 0x18)) = eax;
label_30:
        esi = ebx;
        edx = ebx;
    }
label_28:
    ecx = *((ebp - 0x74));
    eax = *((ebp - 0x48));
    edi = *((ebp + 0x14));
    *(ecx) = ax;
    if ((*((ebp + 0x18)) & 1) != 0) {
        eax = (int32_t) ax;
        edi += eax;
        *((ebp - 0x48)) = edi;
        if (edi > 0) {
            goto label_43;
        }
        eax = 0;
        *(ecx) = ax;
        eax = 0x8000;
        al = (*((ebp - 0x80)) != ax) ? 1 : 0;
        al--;
        al &= 0xd;
        al += 0x20;
        *((ecx + 2)) = al;
        eax = 0;
        eax++;
        *((ecx + 3)) = al;
        *((ecx + 4)) = 0x30;
label_6:
        *((ecx + 5)) = bl;
        goto label_8;
    }
    *((ebp - 0x48)) = edi;
label_43:
    eax = 0x15;
    if (edi > eax) {
        *((ebp - 0x48)) = eax;
    }
    edi = *((ebp - 0x18));
    edi >>= 0x10;
    edi -= 0x3ffe;
    eax = 0;
    *((ebp - 0x64)) = edi;
    *((ebp - 0x16)) = ax;
    ebx = *((ebp - 0x18));
    edi = 8;
    do {
        ecx = edx;
        eax = esi;
        eax >>= 0x1f;
        edx += edx;
        ecx >>= 0x1f;
        ebx += ebx;
        esi += esi;
        ebx |= ecx;
        edx |= eax;
        *((ebp - 0x20)) = esi;
        *((ebp - 0x18)) = ebx;
        edi--;
    } while (edi != 0);
    edi = *((ebp - 0x64));
    *((ebp - 0x44)) = ebx;
    *((ebp - 0x1c)) = edx;
    *((ebp - 0x40)) = esi;
    ebx = 0;
    if (edi >= 0) {
        goto label_44;
    }
    edi = -edi;
    edi &= 0xff;
    if (edi <= 0) {
        goto label_44;
    }
    ebx = *((ebp - 0x44));
    do {
        ecx = edx;
        esi >>= 1;
        eax = ebx;
        ecx <<= 0x1f;
        eax <<= 0x1f;
        esi |= ecx;
        edx >>= 1;
        ebx >>= 1;
        edx |= eax;
        edi--;
        *((ebp - 0x18)) = ebx;
        *((ebp - 0x20)) = esi;
    } while (edi > 0);
    *((ebp - 0x44)) = ebx;
    ebx = 0;
    *((ebp - 0x1c)) = edx;
    *((ebp - 0x40)) = esi;
label_44:
    esi = *((ebp - 0x74));
    eax = *((ebp - 0x48));
    eax++;
    *((ebp - 0x54)) = eax;
    edi = esi + 4;
    *((ebp - 0x64)) = edi;
    ecx = edi;
    *((ebp - 0x58)) = ecx;
    if (eax <= 0) {
        goto label_45;
    }
    do {
        esi = ebp - 0x20;
        ecx = edx;
        edi = ebp - 0x3c;
        ecx >>= 0x1f;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        edx += edx;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        *(es:edi) = *(esi);
        esi += 4;
        es:edi += 4;
        edi = *((ebp - 0x40));
        eax = *((ebp - 0x40));
        eax >>= 0x1f;
        edi += edi;
        edx |= eax;
        eax = *((ebp - 0x44));
        esi = eax + eax;
        eax = edi;
        esi |= ecx;
        eax >>= 0x1f;
        ecx = edx;
        edi += edi;
        edx += edx;
        ecx >>= 0x1f;
        edx |= eax;
        esi += esi;
        eax = *((ebp - 0x3c));
        esi |= ecx;
        ecx = eax + edi;
        *((ebp - 0x48)) = ecx;
        if (ecx >= edi) {
            if (ecx >= eax) {
                goto label_46;
            }
        }
        eax = edx + 1;
        ecx = ebx;
        if (eax >= edx) {
            if (eax >= 1) {
                goto label_47;
            }
        }
        ecx = 0;
        ecx++;
label_47:
        edx = eax;
        ecx = *((ebp - 0x48));
        if (ecx != 0) {
            esi++;
        }
label_46:
        eax = *((ebp - 0x38));
        edi = eax + edx;
        if (edi >= edx) {
            if (edi >= eax) {
                goto label_48;
            }
        }
        esi++;
label_48:
        esi += *((ebp - 0x34));
        eax = ecx;
        edx = *((ebp - 0x48));
        ecx = edi;
        edx += edx;
        eax >>= 0x1f;
        *((ebp - 0x40)) = edx;
        *((ebp - 0x20)) = edx;
        edx = edi + edi;
        edx |= eax;
        ecx >>= 0x1f;
        eax = esi + esi;
        *((ebp - 0x1c)) = edx;
        eax |= ecx;
        ecx = *((ebp - 0x58));
        *((ebp - 0x18)) = eax;
        eax >>= 0x18;
        al += 0x30;
        *((ebp - 0x15)) = bl;
        *(ecx) = al;
        ecx++;
        eax = *((ebp - 0x54));
        eax--;
        *((ebp - 0x58)) = ecx;
        *((ebp - 0x54)) = eax;
        if (eax <= 0) {
            goto label_49;
        }
        eax = *((ebp - 0x18));
        *((ebp - 0x44)) = eax;
    } while (1);
label_49:
    esi = *((ebp - 0x74));
    edi = *((ebp - 0x64));
label_45:
    al = *((ecx - 1));
    ecx -= 2;
    if (al < 0x35) {
        goto label_50;
    }
    while (ecx >= edi) {
        if (*(ecx) != 0x39) {
            goto label_51;
        }
        *(ecx) = 0x30;
        ecx--;
    }
label_51:
    if (ecx < edi) {
        ecx++;
        *(esi)++;
    }
    *(ecx)++;
label_5:
    eax = *((ebp - 0x74));
    cl -= al;
    cl -= 3;
    *((eax + 3)) = cl;
    ecx = (int32_t) cl;
    *((ecx + eax + 4)) = bl;
    eax = 0;
    eax++;
label_8:
    ecx = *((ebp - 4));
    edi = 0;
    esi = 0;
    ecx ^= ebp;
    ebx = 0;
    eax = fcn_00404f47 ();
    return eax;
    do {
        if (*(ecx) != 0x30) {
            goto label_52;
        }
        ecx--;
label_50:
    } while (ecx >= edi);
label_52:
    if (ecx >= edi) {
        goto label_5;
    }
    ecx = *((ebp - 0x74));
    eax = 0;
    *(ecx) = ax;
    eax = 0x8000;
    al = (*((ebp - 0x80)) != ax) ? 1 : 0;
    al--;
    al &= 0xd;
    al += 0x20;
    *((ecx + 2)) = al;
    eax = 0;
    eax++;
    *((ecx + 3)) = al;
    *(edi) = 0x30;
    goto label_6;
label_11:
    ebx = 0;
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40ef27 */
#include <stdint.h>
 
int32_t fcn_0040ef27 (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, uint32_t arg_14h) {
    edx = *((ebp + 0x14));
    esi = *((ebp + 8));
    edi = *((edx + 0xc));
    while (*((ebp + 0xc)) <= 0) {
        fcn_00404026 ();
label_0:
        esi = 0x16;
        *(eax) = esi;
        fcn_00402c77 ();
        eax = esi;
        goto label_1;
    }
    ecx = *((ebp + 0x10));
    *(esi) = 0;
    if (ecx > 0) {
        eax = ecx;
    } else {
        eax = 0;
    }
    eax++;
    if (*((ebp + 0xc)) <= eax) {
        fcn_00404026 ();
        goto label_0;
    }
    *(esi) = 0x30;
    ebx = esi + 1;
    eax = ebx;
    if (ecx <= 0) {
        goto label_2;
    }
    do {
        dl = *(edi);
        if (dl != 0) {
            edx = (int32_t) dl;
            edi++;
        } else {
            edx = 0x30;
        }
        *(eax) = dl;
        eax++;
        ecx--;
    } while (ecx > 0);
    edx = *((ebp + 0x14));
label_2:
    *(eax) = 0;
    if (ecx < 0) {
        goto label_3;
    }
    if (*(edi) < 0x35) {
        goto label_3;
    }
    while (*(eax) == 0x39) {
        *(eax) = 0x30;
        eax--;
    }
    *(eax)++;
label_3:
    if (*(esi) == 0x31) {
        *((edx + 4))++;
    } else {
        eax = fcn_00402cc0 (ebx);
        eax++;
        eax = fcn_0040e7a0 (esi, ebx, eax);
    }
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40df0d */
#include <stdint.h>
 
int32_t fcn_0040df0d (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, uint32_t arg_18h, uint32_t arg_1ch, int32_t arg_20h) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0x20)));
    ebx = *((ebp + 8));
    if (ebx != 0) {
        if (*((ebp + 0xc)) > 0) {
            goto label_0;
        }
    }
    fcn_00404026 ();
    goto label_1;
label_0:
    edx = *((ebp + 0x10));
    edi = 0;
    eax = edx;
    if (edx <= 0) {
        eax = edi;
    }
    eax += 9;
    if (*((ebp + 0xc)) <= eax) {
        fcn_00404026 ();
label_1:
        edi = 0x22;
        *(eax) = edi;
        eax = fcn_00402c77 ();
    } else {
        if (*((ebp + 0x1c)) != 0) {
            ecx = *((ebp + 0x18));
            eax = 0;
            al = (edx > 0) ? 1 : 0;
            eax = 0;
            al = (*(ecx) == 0x2d) ? 1 : 0;
            eax += ebx;
            fcn_0040e562 (eax, eax);
            edx = *((ebp + 0x10));
        }
        eax = *((ebp + 0x18));
        esi = ebx;
        if (*(eax) == 0x2d) {
            *(ebx) = 0x2d;
            esi = ebx + 1;
        }
        if (edx > 0) {
            al = *((esi + 1));
            *(esi) = al;
            esi++;
            eax = *((ebp - 0x10));
            eax = *((eax + 0x84));
            eax = *(eax);
            al = *(eax);
            *(esi) = al;
        }
        eax = 0;
        al = (*((ebp + 0x1c)) == al) ? 1 : 0;
        eax += edx;
        esi += eax;
        eax |= 0xffffffff;
        if (*((ebp + 0xc)) != eax) {
            eax = ebx;
            eax -= esi;
            eax += *((ebp + 0xc));
        }
        eax = fcn_0040aa84 (esi, eax, "e+000");
        if (eax != 0) {
            goto label_2;
        }
        ecx = esi + 2;
        if (*((ebp + 0x14)) != edi) {
            *(esi) = 0x45;
        }
        edx = *((ebp + 0x18));
        eax = *((edx + 0xc));
        if (*(eax) != 0x30) {
            edx = *((edx + 4));
            edx--;
            if (edx < 0) {
                edx = -edx;
                *((esi + 1)) = 0x2d;
            }
            ebx = 0x64;
            if (edx >= ebx) {
                eax = edx;
                edx:eax = (int64_t) eax;
                eax = edx:eax / ebx;
                edx = edx:eax % ebx;
                *((esi + 2)) += al;
            }
            ebx = 0xa;
            if (edx >= ebx) {
                eax = edx;
                edx:eax = (int64_t) eax;
                eax = edx:eax / ebx;
                edx = edx:eax % ebx;
                *((esi + 3)) += al;
            }
            *((esi + 4)) += dl;
        }
        esi = 0xa;
        if ((*(0x419f44) & 1) == 0) {
            goto label_3;
        }
        if (*(ecx) != 0x30) {
            goto label_3;
        }
        fcn_0040e7a0 (ecx, ecx + 1, 3);
    }
label_3:
    if (*((ebp - 4)) != 0) {
        ecx = *((ebp - 8));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = edi;
    return eax;
label_2:
    fcn_00402c87 ();
    __asm ("int3");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e12c */
#include <stdint.h>
 
int32_t fcn_0040e12c (int32_t arg_8h, uint32_t arg_ch, int32_t arg_10h, uint32_t arg_14h, uint32_t arg_18h, int32_t arg_1ch) {
    int32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0x14));
    ecx = ebp - 0x14;
    eax = *((eax + 4));
    eax--;
    *((ebp - 4)) = eax;
    fcn_00402d4b (*((ebp + 0x1c)));
    esi = *((ebp + 8));
    if (esi != 0) {
        if (*((ebp + 0xc)) > 0) {
            goto label_0;
        }
    }
    fcn_00404026 ();
    ebx = 0x16;
    *(eax) = ebx;
    eax = fcn_00402c77 ();
    goto label_1;
label_0:
    ebx = 0;
    edi = *((ebp + 0x10));
    if (*((ebp + 0x18)) != bl) {
        ecx = *((ebp - 4));
        if (ecx != edi) {
            goto label_2;
        }
        edx = *((ebp + 0x14));
        eax = 0;
        al = (*(edx) == 0x2d) ? 1 : 0;
        eax += ecx;
        *((eax + esi)) = 0x30;
    }
label_2:
    eax = *((ebp + 0x14));
    if (*(eax) == 0x2d) {
        *(esi) = 0x2d;
        esi++;
    }
    eax = *((eax + 4));
    if (eax <= 0) {
        eax = fcn_0040e562 (esi, 1);
        *(esi) = 0x30;
        esi++;
    } else {
        esi += eax;
    }
    if (edi > 0) {
        fcn_0040e562 (esi, 1);
        eax = *((ebp - 0x14));
        eax = *((eax + 0x84));
        eax = *(eax);
        al = *(eax);
        *(esi) = al;
        esi++;
        eax = *((ebp + 0x14));
        eax = *((eax + 4));
        if (eax >= 0) {
            goto label_3;
        }
        if (*((ebp + 0x18)) != bl) {
            edi = eax;
            edi = -edi;
        } else {
            eax = -eax;
            if (edi < eax) {
                goto label_4;
            }
            edi = eax;
        }
label_4:
        fcn_0040e562 (esi, edi);
        fcn_00407390 (esi, 0x30, edi);
    }
label_3:
label_1:
    if (*((ebp - 8)) != 0) {
        ecx = *((ebp - 0xc));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e3e9 */
#include <stdint.h>
 
int32_t fcn_0040e3e9 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0xc)));
    edx = *((ebp + 8));
    edi = *((ebp - 0x10));
    cl = *(edx);
    if (cl == 0) {
        goto label_0;
    }
    eax = *((edi + 0x84));
    eax = *(eax);
    al = *(eax);
    do {
        if (cl == al) {
            goto label_0;
        }
        edx++;
        cl = *(edx);
    } while (cl != 0);
label_0:
    al = *(edx);
    edx++;
    if (al == 0) {
        goto label_1;
    }
    while (al != 0) {
        if (al == 0x65) {
            goto label_2;
        }
        if (al == 0x45) {
            goto label_2;
        }
        edx++;
        al = *(edx);
    }
label_2:
    esi = edx;
    do {
        edx--;
    } while (*(edx) == 0x30);
    eax = *((edi + 0x84));
    ecx = *(eax);
    al = *(edx);
    if (al != *(ecx)) {
        goto label_3;
    }
    edx--;
    do {
label_3:
        al = *(esi);
        edx++;
        esi++;
        *(edx) = al;
    } while (al != 0);
label_1:
    edi = esi;
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 8));
        *((eax + 0x70)) &= 0xfffffffd;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e481 */
#include <stdint.h>
 
uint32_t fcn_0040e481 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_8h;
    int32_t var_4h;
    if (*((ebp + 8)) != 0) {
        fcn_0040c739 (ebp - 8);
        ecx = *((ebp + 0xc));
        eax = *((ebp - 8));
        *(ecx) = eax;
        eax = *((ebp - 4));
        *((ecx + 4)) = eax;
    } else {
        fcn_0040c7c7 (ebp + 8);
        ecx = *((ebp + 0xc));
        eax = *((ebp + 8));
        *(ecx) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c739 */
#include <stdint.h>
 
int32_t fcn_0040c739 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_28h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    eax = *(0x4183f0);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    esi = *((ebp + 0xc));
    ecx = ebp - 0x28;
    edi = *((ebp + 8));
    fcn_00402d4b (*((ebp + 0x10)));
    eax = ebp - 0x28;
    ebx = 0;
    eax = fcn_0040d344 (ebp - 0x10, ebp - 0x18, esi, ebx, ebx, ebx, ebx, eax);
    *((ebp - 0x14)) = eax;
    eax = ebp - 0x10;
    eax = fcn_0040c860 (eax, edi);
    ecx = eax;
    eax = *((ebp - 0x14));
    if ((al & 3) != 0) {
        goto label_0;
    }
    if (ecx == 1) {
        goto label_1;
    }
    if (ecx != 2) {
        goto label_2;
    }
    do {
        goto label_3;
label_0:
    } while ((al & 1) != 0);
    if ((al & 2) != 0) {
label_1:
label_3:
        ebx = 3;
    }
label_2:
    if (*((ebp - 0x1c)) != 0) {
        ecx = *((ebp - 0x20));
        *((ecx + 0x70)) &= 0xfffffffd;
    }
    ecx = *((ebp - 4));
    eax = ebx;
    edi = 3;
    esi = 3;
    ecx ^= ebp;
    ebx = 3;
    fcn_00404f47 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c7c7 */
#include <stdint.h>
 
void fcn_0040c7c7 (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    fcn_0040c695 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40e4d4 */
#include <stdint.h>
 
int32_t fcn_0040e4d4 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_8h;
    uint32_t var_4h;
    ecx = ebp - 0x10;
    fcn_00402d4b (*((ebp + 0xc)));
    esi = *((ebp + 8));
    eax = *(esi);
    eax = fcn_0040c5d4 (eax);
    while (eax != 0) {
        esi++;
        eax = *(esi);
        eax = fcn_00408d80 (eax);
    }
    eax = *(esi);
    eax = fcn_0040c5d4 (eax);
    if (eax == 0x78) {
        esi += 2;
    }
    eax = *((ebp - 0x10));
    cl = *(esi);
    eax = *((eax + 0x84));
    eax = *(eax);
    al = *(eax);
    *(esi) = al;
    esi++;
    do {
        al = *(esi);
        *(esi) = cl;
        cl = al;
        al = *(esi);
        esi++;
    } while (al != 0);
    if (*((ebp - 4)) != al) {
        eax = *((ebp - 8));
        *((eax + 0x70)) &= 0xfffffffd;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40c5d4 */
#include <stdint.h>
 
uint32_t fcn_0040c5d4 (int32_t arg_8h) {
    if (*(0x419f34) == 0) {
        ecx = *((ebp + 8));
        eax = ecx - 0x41;
        if (eax <= 0x19) {
            ecx += 0x20;
        }
        eax = ecx;
        return eax;
    }
    fcn_0040c491 (*((ebp + 8)), 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40fd09 */
#include <stdint.h>
 
uint32_t fcn_0040fd09 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    __asm ("wait");
    ax = *((ebp - 4));
    ecx = 0;
    if ((al & 1) != 0) {
        ecx = 0x10;
    }
    if ((al & 4) != 0) {
        ecx |= 8;
    }
    if ((al & 8) != 0) {
        ecx |= 4;
    }
    if ((al & 0x10) != 0) {
        ecx |= 2;
    }
    if ((al & 0x20) != 0) {
        ecx |= 1;
    }
    if ((al & 2) != 0) {
        ecx |= 0x80000;
    }
    esi = (int32_t) ax;
    ebx = 0xc00;
    edx = esi;
    edi = 0x200;
    edx &= ebx;
    if (edx != 0) {
        if (edx != 0x400) {
            if (edx != 0x800) {
                if (edx != ebx) {
                    goto label_0;
                }
                ecx |= 0x300;
                ecx |= edi;
            } else {
            } else {
                ecx |= 0x100;
            }
        }
    }
label_0:
    esi &= 0x300;
    if (esi != 0) {
        if (esi != edi) {
            goto label_1;
        }
        ecx |= 0x10000;
    } else {
        ecx |= 0x20000;
    }
label_1:
    eax = (int32_t) ax;
    edx = 0x1000;
    if ((edx & eax) != 0) {
        ecx |= 0x40000;
    }
    edi = *((ebp + 0xc));
    esi = *((ebp + 0xc));
    eax = *((ebp + 8));
    esi = ~esi;
    esi &= ecx;
    eax &= edi;
    esi |= eax;
    if (esi != ecx) {
        ax = fcn_0041000b (esi);
        eax = (int32_t) ax;
        *((ebp - 8)) = eax;
        __asm ("wait");
        eax = *((ebp - 8));
        esi = 0;
        if ((al & 1) != 0) {
            esi = 0x10;
        }
        if ((al & 4) != 0) {
            esi |= 8;
        }
        if ((al & 8) != 0) {
            esi |= 4;
        }
        if ((al & 0x10) != 0) {
            esi |= 2;
        }
        if ((al & 0x20) != 0) {
            esi |= 1;
        }
        if ((al & 2) != 0) {
            esi |= 0x80000;
        }
        edx = (int32_t) ax;
        ecx = edx;
        ecx &= ebx;
        if (ecx != 0) {
            if (ecx != 0x400) {
                if (ecx != 0x800) {
                    if (ecx != ebx) {
                        goto label_2;
                    }
                    esi |= 0x300;
                    esi |= 0x200;
                } else {
                } else {
                    esi |= 0x100;
                }
            }
        }
label_2:
        edx &= 0x300;
        if (edx != 0) {
            if (edx != 0x200) {
                goto label_3;
            }
            esi |= 0x10000;
        } else {
            esi |= 0x20000;
        }
label_3:
        edx = 0x1000;
        if ((edx & eax) == 0) {
            goto label_4;
        }
        esi |= 0x40000;
    }
label_4:
    if (*(0x419ee8) >= 1) {
        edi &= 0x308031f;
        __asm ("stmxcsr dword [ebp - 0xc]");
        eax = *((ebp - 0xc));
        ecx = 0;
        if (al < 0) {
            ecx = 0x10;
        }
        if ((eax & 0x200) != 0) {
            ecx |= 8;
        }
        if ((eax & 0x400) != 0) {
            ecx |= 4;
        }
        if ((eax & 0x800) != 0) {
            ecx |= 2;
        }
        if ((edx & eax) != 0) {
            ecx |= 1;
        }
        if ((eax & 0x100) != 0) {
            ecx |= 0x80000;
        }
        edx = eax;
        ebx = 0x6000;
        edx &= ebx;
        if (edx != 0) {
            if (edx != 0x2000) {
                if (edx != 0x4000) {
                    if (edx != ebx) {
                        goto label_5;
                    }
                    ecx |= 0x300;
                    ecx |= 0x200;
                } else {
                } else {
                    ecx |= 0x100;
                }
            }
        }
label_5:
        eax &= 0x8040;
        ebx = 0x40;
        eax -= ebx;
        if (eax != 0) {
            eax -= 0x7fc0;
            if (eax != 0) {
                eax -= ebx;
                if (eax != 0) {
                    goto label_6;
                }
                ecx |= 0x1000000;
                ecx |= 0x3000000;
            } else {
            } else {
                ecx |= 0x2000000;
            }
        }
label_6:
        eax = edi;
        edi &= *((ebp + 8));
        eax = ~eax;
        eax &= ecx;
        eax |= edi;
        if (eax != ecx) {
            eax = fcn_0040fc60 (eax);
            *((ebp + 0xc)) = eax;
            fcn_004100a2 (eax);
            __asm ("stmxcsr dword [ebp + 0xc]");
            eax = *((ebp + 0xc));
            ecx = 0;
            if (al < 0) {
                ecx = 0x10;
            }
            if ((eax & 0x200) != 0) {
                ecx |= 8;
            }
            if ((eax & 0x400) != 0) {
                ecx |= 4;
            }
            if ((eax & 0x800) != 0) {
                ecx |= 2;
            }
            if ((eax & 0x1000) != 0) {
                ecx |= 1;
            }
            if ((eax & 0x100) != 0) {
                ecx |= 0x80000;
            }
            edx = eax;
            edi = 0x6000;
            edx &= edi;
            if (edx != 0) {
                if (edx != 0x2000) {
                    if (edx != 0x4000) {
                        if (edx != edi) {
                            goto label_7;
                        }
                        ecx |= 0x300;
                        ecx |= 0x200;
                    } else {
                    } else {
                        ecx |= 0x100;
                    }
                }
            }
label_7:
            eax &= 0x8040;
            eax -= ebx;
            if (eax != 0) {
                eax -= 0x7fc0;
                if (eax != 0) {
                    eax -= ebx;
                    if (eax != 0) {
                        goto label_8;
                    }
                    ecx |= 0x1000000;
                    ecx |= 0x3000000;
                } else {
                } else {
                    ecx |= 0x2000000;
                }
            }
        }
label_8:
        eax = ecx;
        ecx |= esi;
        eax ^= esi;
        if ((eax & 0x8031f) != 0) {
            ecx |= 0x80000000;
        }
        eax = ecx;
    } else {
        eax = esi;
    }
    edi = 0x10;
    esi = 0x10;
    ebx = 0x10;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x41000b */
#include <stdint.h>
 
int32_t fcn_0041000b (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = 0;
    if ((cl & 0x10) != 0) {
        eax++;
    }
    if ((cl & 8) != 0) {
        eax |= 4;
    }
    if ((cl & 4) != 0) {
        eax |= 8;
    }
    if ((cl & 2) != 0) {
        eax |= 0x10;
    }
    if ((cl & 1) != 0) {
        eax |= 0x20;
    }
    if ((ecx & 0x80000) != 0) {
        eax |= 2;
    }
    edx = ecx;
    esi = 0x300;
    edi = 0x200;
    edx &= esi;
    if (edx != 0) {
        if (edx != 0x100) {
            if (edx != edi) {
                if (edx != esi) {
                    goto label_0;
                }
                eax |= 0xc00;
                eax |= 0x800;
            } else {
            } else {
                eax |= 0x400;
            }
        }
    }
label_0:
    edx = ecx;
    edx &= 0x30000;
    if (edx != 0) {
        if (edx != 0x10000) {
            goto label_1;
        }
        eax |= edi;
    } else {
        eax |= esi;
    }
label_1:
    esi = edi;
    if ((ecx & 0x40000) != 0) {
        eax |= 0x1000;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x40fc60 */
#include <stdint.h>
 
int32_t fcn_0040fc60 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = 0;
    if ((cl & 0x10) != 0) {
        eax = 0x80;
    }
    edi = 0x200;
    if ((cl & 8) != 0) {
        eax |= edi;
    }
    if ((cl & 4) != 0) {
        eax |= 0x400;
    }
    if ((cl & 2) != 0) {
        eax |= 0x800;
    }
    if ((cl & 1) != 0) {
        eax |= 0x1000;
    }
    esi = 0x100;
    if ((ecx & 0x80000) != 0) {
        eax |= esi;
    }
    edx = ecx;
    ebx = 0x300;
    edx &= ebx;
    if (edx != 0) {
        if (edx != esi) {
            if (edx != edi) {
                if (edx != ebx) {
                    goto label_0;
                }
                eax |= 0x6000;
                eax |= 0x4000;
            } else {
            } else {
                eax |= 0x2000;
            }
        }
    }
label_0:
    edx = 0x3000000;
    ecx &= edx;
    esi = edi;
    ebx = edi;
    if (ecx != 0x1000000) {
        if (ecx != 0x2000000) {
            if (ecx != edx) {
                goto label_1;
            }
            eax |= 0x8000;
            return eax;
        }
        eax |= 0x40;
        return eax;
    }
    eax |= 0x8040;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/bnd_challenge/ia32_pe/subject.exe @ 0x4100a2 */
#include <stdint.h>
 
int32_t fcn_004100a2 (int32_t arg_8h) {
    int32_t var_4h;
    fcn_00404590 (0x4179e0);
    if (*(0x419ee8) >= 1) {
        eax = *((ebp + 8));
        if ((al & 0x40) != 0) {
            if (*(0x4191a8) != 0) {
                *((ebp - 4)) = 0;
                __asm ("ldmxcsr dword [ebp + 8]");
                *((ebp - 4)) = 0xfffffffe;
            }
        } else {
            eax &= 0xffffffbf;
            *((ebp + 8)) = eax;
            __asm ("ldmxcsr dword [ebp + 8]");
        }
    }
    fcn_004045d5 ();
    return eax;
}
