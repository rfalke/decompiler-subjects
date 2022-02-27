/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80494a7 */
#include <stdint.h>
 
void entry0 (int32_t arg_10h, int32_t arg_14h, int32_t arg_28h, int32_t arg_2ch, int32_t arg_20h, uint32_t arg_400ach) {
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_8h;
    ebp = 0;
    eax = SDL_SetVideoMode ();
    *((esp + 0x10)) = eax;
    eax = *((eax + 0x14));
    *(esp) = 0;
    *((esp + 0x14)) = eax;
    SDL_ShowCursor ();
    *((esp + 0x28)) = 0x964cd20;
    *((esp + 0x2c)) = 0xffffff40;
    *(0x824a514) = 0xc2f00000;
    goto label_3;
    do {
label_1:
        eax = edi;
        *(fp_stack--) = *(esp);
        esi++;
        *(ebx) = fp_stack[0];
        fp_stack--;
        edi += 0xc;
        *(fp_stack--) = *((esp + 0x1c));
        *((ebx + 4)) = fp_stack[0];
        fp_stack--;
        *((ebx + 8)) = 0x44000000;
        ebx += 0xc;
        fcn_080484a2 ();
    } while (esi != 0x100);
    ebp += 0x200;
    if (ebp == 0x30000) {
        goto label_4;
    }
    goto label_3;
    do {
label_2:
        eax = *((esp + 0x10));
        if (*(eax) == 1) {
            esi = *((esp + 8)) * 0x40080;
            edx = 1;
            ebx = esp + 0x20;
            eax = ebx;
            *(fp_stack--) = *(esp);
            *(esp) = fp_stack[0];
            fp_stack--;
            fcn_08048775 (edi, *((esp + 0x14)), 0xc1c80000, 0x40000000);
            memcpy (esi + 0x824a520, ebx, 0x40080);
            *((esi + 0x824a59d)) = 0;
        }
        edi += 4;
    } while (edi != 0x2f);
    ebp += 4;
    if (ebp != 0xe) {
        goto label_5;
    }
    esi = esp + 0x20;
    ebx = 0;
    edx = 0;
    eax = esi;
    fcn_080486ba (ebx, ebx, 0xc1200000, ebx, ebx, 0xbf800000, ebp, ebp);
    memcpy (0x938c7a0, esi, 0x40080);
    edx = 0;
    eax = esi;
    fcn_08048775 (ebx, 0x41f00000, 0xc20c0000, 0x41700000);
    memcpy (0x93cc820, esi, 0x40080);
    ecx = 0;
    edx = 1;
    eax = 0xf;
    fcn_0804881d (ebx, 0xc2c80000, 0xc1f00000, 0);
    edx = 0;
    eax = esi;
    fcn_080486ba (ebx, 0x41f00000, ebx, ebx, 0xbf800000, ebx);
    memcpy (0x804a100, esi, 0x40080);
    edx = 0;
    eax = esi;
    edi = 0x3f800000;
    fcn_080486ba (ebx, ebp, ebx, ebx, edi, ebx);
    memcpy (0x808a180, esi, 0x40080);
    eax = esi;
    edx = 0;
    fcn_080486ba (0xc2480000, ebx, ebx, edi, ebx, ebx);
    memcpy (0x80ca200, esi, 0x40080);
    edx = 0;
    eax = esi;
    edi = 0x41200000;
    fcn_080486ba (0x42480000, ebx, ebx, 0xbf800000, ebx, ebx);
    memcpy (0x810a280, esi, 0x40080);
    eax = esi;
    edx = 0;
    fcn_080486ba (ebx, ebx, 0x42200000, ebx, ebx, 0xbf800000);
    memcpy (0x814a300, esi, 0x40080);
    edx = 4;
    eax = esi;
    fcn_08048775 (ebx, 0x41800000, ebp, 0x41700000);
    memcpy (0x818a380, esi, 0x40080);
    edx = 3;
    eax = esi;
    fcn_08048613 (0xc1f00000, 0x41f00000, ebp, edi, ebx, 0xbf800000, ebx);
    memcpy (0x81ca400, esi, 0x40080);
    edx = 3;
    eax = esi;
    ebx = 0;
    fcn_08048613 (0x41f00000, 0x41f00000, ebp, edi, ebx, 0xbf800000, ebx);
    esi = 0;
    memcpy (0x820a480, esi, 0x40080);
    *(0x824a508) = 0xc2f00000;
    eax = SDL_GetTicks ();
    edi = eax;
    goto label_6;
label_0:
    *(fp_stack--) = *(esp);
    fp_stack[0] *= *(0x8049a34);
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    *(fp_stack--) = *(0x8049a30);
    fp_stack[1] *= fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(0x824a500) = fp_stack[0];
    fp_stack--;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(0x824a504) = fp_stack[0];
    fp_stack--;
    if (esi > 0x31) {
        goto label_7;
    }
    eax = 0;
    *(fp_stack--) = *(0x8049a2c);
    do {
        *(fp_stack--) = *((eax + 0x940c8a4));
        fp_stack[0] += fp_stack[1];
        *((eax + 0x940c8a4)) = fp_stack[0];
        fp_stack--;
        eax += 0x40080;
    } while (eax != 0x1c0380);
    fp_stack++;
label_7:
    ecx = *((esp + 4));
    edx = 9;
    eax = 0x940c8a0;
    esi++;
    ebx += 4;
    fcn_0804938f ();
    SDL_Flip ();
    eax = esp + 0x400b8;
    SDL_PollEvent ();
label_6:
    eax = SDL_GetTicks ();
    eax -= edi;
    if (eax > 0x36af) {
        goto label_8;
    }
    if (*((esp + 0x400ac)) != 2) {
        goto label_0;
    }
label_8:
    eax = SDL_GetTicks ();
    ebx = esi + esi;
    edi = eax;
    while (*((esp + 0x400ac)) != 2) {
        edx = 8;
        *(fp_stack--) = *(esp);
        eax = 0x804a100;
        fp_stack[0] *= *(0x8049a34);
        esi++;
        ecx = *((esp + 4));
        ebx += 2;
        *(0x824a504) = 0xc1200000;
        fp_stack[0] = sin(fp_stack[0]);
        *(fp_stack--) = cos(fp_stack[0]);
        *(fp_stack--) = *(0x8049a38);
        fp_stack[1] *= fp_stack[0];
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *(0x824a500) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(0x824a508) = fp_stack[0];
        fp_stack--;
        fcn_0804938f ();
        SDL_Flip ();
        eax = esp + 0x400b8;
        SDL_PollEvent ();
        eax = SDL_GetTicks ();
        eax -= edi;
        if (eax > 0x36af) {
            goto label_9;
        }
    }
label_9:
    eax = SDL_GetTicks ();
    ebx = esi*4;
    *(0x824a508) = 0xc2f00000;
    edi = eax;
    while (*((esp + 0x400ac)) != 2) {
        edx = 0x47;
        *(fp_stack--) = *(esp);
        eax = 0x824a520;
        fp_stack[0] *= *(0x8049a34);
        ebx += 4;
        ecx = *((esp + 4));
        fp_stack[0] = sin(fp_stack[0]);
        *(fp_stack--) = cos(fp_stack[0]);
        *(fp_stack--) = *(0x8049a30);
        fp_stack[1] *= fp_stack[0];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        *(0x824a500) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(0x824a504) = fp_stack[0];
        fp_stack--;
        fcn_0804938f ();
        SDL_Flip ();
        eax = esp + 0x400b8;
        SDL_PollEvent ();
        eax = SDL_GetTicks ();
        eax -= edi;
        if (eax > 0x36af) {
            goto label_10;
        }
    }
label_10:
    SDL_Quit ();
    ebx = 0;
    eax = sys_exit (ebx);
    return;
label_3:
    eax = ebp * 0xc;
    edi = *((esp + 0x18));
    esi = 0xffffff00;
    ebx = eax + 0x964cd20;
    goto label_1;
label_4:
    *((esp + 8)) = 0;
    *((esp + 0x14)) = 0;
label_5:
    edi = 0xffffffd3;
    *(fp_stack--) = *(esp);
    eax = *((esp + 0x14));
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    eax += 0x8049a40;
    *((esp + 0x10)) = eax;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048398 */
#include <stdint.h>
 
void srand (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80483a8 */
#include <stdint.h>
 
void SDL_ShowCursor (void) {
    SDL_ShowCursor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80483b8 */
#include <stdint.h>
 
void SDL_GetTicks (void) {
    SDL_GetTicks ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80483c8 */
#include <stdint.h>
 
void SDL_PollEvent (void) {
    SDL_PollEvent ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80483d8 */
#include <stdint.h>
 
void SDL_SetVideoMode (void) {
    SDL_SetVideoMode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80483e8 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80483f8 */
#include <stdint.h>
 
void SDL_Flip (void) {
    SDL_Flip ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048408 */
#include <stdint.h>
 
void SDL_Quit (void) {
    SDL_Quit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048418 */
#include <stdint.h>
 
void rand (void) {
    uint32_t (*0x804a0dc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048428 */
#include <stdint.h>
 
void powf (void) {
    uint32_t (*0x804a0e0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048438 */
#include <stdint.h>
 
void fcn_08048438 (void) {
    *(fp_stack--) = *(eax);
    fp_stack[0] *= *(edx);
    *(fp_stack--) = *((eax + 4));
    fp_stack[0] *= *((edx + 4));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((eax + 8));
    fp_stack[0] *= *((edx + 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x804844d */
#include <stdint.h>
 
void fcn_0804844d (void) {
    *(fp_stack--) = *((eax + 4));
    fp_stack[0] *= *((edx + 8));
    *(fp_stack--) = *((eax + 8));
    *(fp_stack--) = *((edx + 4));
    fp_stack[0] *= fp_stack[1];
    fp_stack[0] -= fp_stack[2];
    fp_stack++;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(ecx) = fp_stack[0];
    fp_stack--;
    fp_stack[0] *= *(edx);
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *((edx + 8));
    fp_stack[0] *= fp_stack[1];
    fp_stack[0] -= fp_stack[2];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((ecx + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] *= *((edx + 4));
    *(fp_stack--) = *((eax + 4));
    fp_stack[0] *= *(edx);
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *((ecx + 8)) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80484ca */
#include <stdint.h>
 
int32_t fcn_080484ca (void) {
    uint32_t var_ch;
    int32_t var_10h;
    uint32_t var_14h;
    int32_t var_24h;
    edi = 0;
    *((esp + 0x24)) = eax;
    srand (0x539);
    goto label_3;
    do {
label_0:
        edx = *((esp + 0x18));
        eax = edi;
        ecx = ebp;
        eax <<= 8;
        eax += ebx;
        esi = edx + eax*4;
        *(esi) = 0xffffff;
        if (cl == 0) {
            eax = ebx + 0x64;
            eax ^= edi;
        } else {
            eax = ebp;
            al--;
            if (al == 0) {
                edx = 0x14;
                eax = ebx;
                ecx = edx;
                edx:eax = (int64_t) eax;
                eax = edx:eax / ecx;
                edx = edx:eax % ecx;
                if (edx <= 9) {
                    eax = 0xff0000;
                    if (*((esp + 0x14)) <= 9) {
                        goto label_4;
                    }
                }
                eax = 0xff00ff;
                goto label_4;
            }
            eax = ebp - 2;
            if (al > 1) {
                goto label_5;
            }
            rand ();
            edx = 0x40;
            ecx = 0x40;
            edx:eax = (int64_t) eax;
            eax = edx:eax / ecx;
            edx = edx:eax % ecx;
            eax = edx + 0xc0;
            edx = ebp;
            if (dl != 2) {
                goto label_6;
            }
            eax <<= 8;
            goto label_4;
        }
label_6:
        eax *= 0x10101;
label_4:
        *(esi) = eax;
label_5:
        ebx++;
    } while (ebx != 0x100);
    edi++;
    if (edi != 0x100) {
        goto label_3;
    }
    ecx = ebp;
    if (cl != 4) {
        goto label_7;
    }
    goto label_8;
    do {
label_1:
        ecx = *((esp + 0x18));
        eax = ebx;
        eax <<= 8;
        eax += edx;
        *((ecx + eax*4)) = 0xff0000;
        eax = ebx;
        eax <<= 8;
        eax = eax + edx + 0x1000;
        edx++;
        *((esp + 0x10)) = eax;
        *((ecx + eax*4 + 0x40)) = 0xff0000;
    } while (*((esp + 0xc)) != 0x10);
    esi++;
    ebx++;
    if (esi != 0x10) {
        goto label_9;
    }
    edi += 0x20;
    if (edi != 0x100) {
        goto label_2;
    }
    ebp += 0x20;
    if (ebp == 0x100) {
        goto label_7;
    }
    goto label_10;
label_3:
    eax = edi;
    ecx = 0x14;
    edx:eax = (int64_t) eax;
    ebx = 0;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    *((esp + 0x14)) = edx;
    goto label_0;
    do {
label_9:
        edx = edi;
        *((esp + 0xc)) = 0;
        goto label_1;
label_2:
        ebx = ebp;
        esi = 0;
    } while (1);
label_8:
    ebp = 0;
label_10:
    edi = 0;
    goto label_2;
label_7:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048775 */
#include <stdint.h>
 
int32_t fcn_08048775 (int32_t arg_8h, int32_t arg_ch, int32_t arg_40h, int32_t arg_44h, int32_t arg_48h, int32_t arg_4ch, int32_t arg_50h, int32_t arg_54h, int32_t arg_64h, int32_t arg_74h, int32_t arg_78h, int32_t arg_7ch, int32_t arg_80h, int32_t arg_81h, int32_t arg_84h, int32_t arg_40090h, int32_t arg_40094h, int32_t arg_40098h, int32_t arg_4009ch) {
    int32_t var_4h;
    esi = eax;
    ecx = 0x3f800000;
    edx = (int32_t) dl;
    eax = *((esp + 0x4009c));
    ebx = esp + 4;
    *((esp + 0x40)) = ecx;
    *((esp + 0x50)) = ecx;
    *((esp + 0x80)) = 0;
    *((esp + 0x64)) = eax;
    eax = 0;
    *((esp + 0x44)) = eax;
    *((esp + 0x48)) = eax;
    *((esp + 0x4c)) = eax;
    *((esp + 0x54)) = eax;
    eax = *((esp + 0x40090));
    *((esp + 0x81)) = 1;
    *((esp + 0x74)) = 0x3f2d70a4;
    *((esp + 0x78)) = 0x3f45a1cb;
    *((esp + 4)) = eax;
    eax = *((esp + 0x40094));
    *((esp + 0x7c)) = 0x52;
    *((esp + 8)) = eax;
    eax = *((esp + 0x40098));
    *((esp + 0xc)) = eax;
    eax = esp + 0x84;
    fcn_080484ca ();
    memcpy (esi, ebx, 0x40080);
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x804881d */
#include <stdint.h>
 
int32_t fcn_0804881d (int32_t arg_20h, uint32_t arg_44h, int32_t arg_48h, int32_t arg_50h, int32_t arg_400fch_4, int32_t arg_400fch_3, int32_t arg_400fch_2, int32_t arg_400fch) {
    int32_t var_ch;
    do {
label_0:
        edi = *((esp + 0x400fc));
        esi = esp + 0x50;
        edx = 4;
        eax = esi;
        *(fp_stack--) = *(esp);
        *(esp) = fp_stack[0];
        fp_stack--;
        ebx = edi * 0x40080;
        fcn_08048775 (edx, *((esp + 0x400fc)), *((esp + 0x400fc)), eax, ebx, esi, edi, ebp);
        ebx += 0x940c8a0;
        memcpy (ebx, esi, 0x40080);
        if (*((esp + 0x48)) <= 0) {
            goto label_3;
        }
        eax = *((esp + 0x48));
        ecx = edi + 1;
        eax = eax - 1;
        *((esp + 0x20)) = eax;
        if (*((esp + 0x44)) == 1) {
            goto label_4;
        }
        eax = ebp;
        esi = 2;
        edx:eax = (int64_t) eax;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        ebx = eax;
        eax = ebp + ebp*2;
        edx:eax = (int64_t) eax;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        eax = ebx;
        *(fp_stack--) = *(esp);
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        ecx = 2;
        *(fp_stack--) = *((esp + 0x400fc));
        fp_stack[0] += *((esp + 0x58));
        edx = *((esp + 0x30));
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_0804881d (*((esp + 0x400fc)), *((esp + 0x400fc)), ecx, eax);
    } while (1);
    eax = edi + 2;
    if (*((esp + 0x44)) == 2) {
        goto label_5;
    }
    ecx = 1;
    eax = ebx;
    *(fp_stack--) = *((esp + 0x400fc));
    fp_stack[0] -= *((esp + 0x58));
    edx = *((esp + 0x30));
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_0804881d (*((esp + 0x400fc)), *((esp + 0x400fc)), eax);
    goto label_0;
    eax = edi + 3;
    if (*((esp + 0x44)) == 3) {
        goto label_6;
    }
    esi = eax;
    ecx = 4;
    eax = ebx;
    *(fp_stack--) = *((esp + 0x400fc));
    fp_stack[0] += *((esp + 0x54));
    *(esp) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x30));
    fcn_0804881d (*((esp + 0x400fc)), *((esp + 0x400fc)), eax);
    goto label_0;
    if (*((esp + 0x44)) == 4) {
        goto label_7;
    }
    do {
        eax = ebp;
        ebx = 2;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        ecx = ebp + ebp*2;
        edi = esi + 1;
        esi = *((esp + 0x48));
        esi--;
        eax = ecx;
        ecx = 3;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edx = esi;
        *(fp_stack--) = *(esp);
        *((esp + 0x40100)) -= fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x1c));
        fcn_0804881d (eax, eax, *((esp + 0x400fc)), edi);
        goto label_0;
        if (*((esp + 0x44)) != 5) {
label_1:
            eax = ebp;
            ebx = 2;
            esi = *((esp + 0x48));
            edx:eax = (int64_t) eax;
            edi++;
            eax = edx:eax / ebx;
            edx = edx:eax % ebx;
            esi--;
            ecx = ebp + ebp*2;
            eax = ecx;
            ecx = 6;
            edx:eax = (int64_t) eax;
            eax = edx:eax / ebx;
            edx = edx:eax % ebx;
            edx = esi;
            *(fp_stack--) = *(esp);
            fp_stack[0] += *((esp + 0x40100));
            *(esp) = fp_stack[0];
            fp_stack--;
            eax = *((esp + 0x1c));
            fcn_0804881d (eax, *((esp + 0x400fc)), eax, edi);
            goto label_0;
            if (*((esp + 0x44)) == 6) {
                goto label_3;
            }
        }
label_2:
        eax = ebp;
        ebx = 2;
        esi = *((esp + 0x48));
        edx:eax = (int64_t) eax;
        edi++;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        esi--;
        ecx = ebp + ebp*2;
        eax = ecx;
        ecx = 5;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        edx = esi;
        *(fp_stack--) = *(esp);
        *((esp + 0x40100)) -= fp_stack[0];
        *((esp + 0x40100)) = fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x1c));
        eax = fcn_0804881d (eax, *((esp + 0x400fc)), eax, edi);
        goto label_0;
label_3:
        esi = esp + 0x50;
        eax = 0;
        ebx = edi * 0x40080;
        edx = 2;
        ebx += 0x944c920;
        eax = esi;
        fcn_080486ba (eax, 0x42200000, eax, eax, 0xbf800000, eax, edi, edi);
        memcpy (ebx, esi, 0x40080);
        return eax;
label_4:
        eax = ebp;
        esi = 2;
        edx:eax = (int64_t) eax;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        ecx = 1;
        ebx = eax;
        eax = ebp + ebp*2;
        edx:eax = (int64_t) eax;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        esi = edi + 2;
        edx = *((esp + 0x30));
        eax = ebx;
        *(fp_stack--) = *(esp);
        *(fp_stack--) = *((esp + 0x40100));
        fp_stack[0] -= fp_stack[1];
        *(esp) = fp_stack[0];
        fp_stack--;
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        fcn_0804881d (eax, *((esp + 0x400fc)), *((esp + 0x400fc)), ecx);
        goto label_0;
        ecx = 4;
        eax = ebx;
        *(fp_stack--) = *((esp + 0x28));
        fp_stack[0] += *((esp + 0x4010c));
        *(esp) = fp_stack[0];
        fp_stack--;
        edx = *((esp + 0x40));
        eax = fcn_0804881d (*((esp + 0x4010c)), *((esp + 0x4010c)), esi);
        goto label_0;
    } while (1);
label_5:
    ecx = 4;
    eax = ebx;
    edi += 3;
    *(fp_stack--) = *((esp + 0x400fc));
    fp_stack[0] += *((esp + 0x54));
    *(esp) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x30));
    fcn_0804881d (*((esp + 0x400fc)), *((esp + 0x400fc)), eax);
    goto label_0;
    ecx = 3;
    eax = ebx;
    *(fp_stack--) = *((esp + 0x4010c));
    fp_stack[0] -= *((esp + 0x64));
    *(esp) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x40));
    eax = fcn_0804881d (*((esp + 0x4010c)), *((esp + 0x4010c)), edi);
    goto label_0;
    goto label_1;
label_6:
    ecx = 3;
    eax = ebx;
    edi += 4;
    *(fp_stack--) = *((esp + 0x400fc));
    fp_stack[0] -= *((esp + 0x54));
    *(esp) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x30));
    fcn_0804881d (*((esp + 0x400fc)), *((esp + 0x400fc)), eax);
    goto label_0;
    ecx = 6;
    eax = ebx;
    *(fp_stack--) = *((esp + 0x4010c));
    fp_stack[0] += *((esp + 0x60));
    *((esp + 0x60)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x40));
    fcn_0804881d (*((esp + 0x4010c)), *((esp + 0x4010c)), edi);
    goto label_0;
    goto label_2;
label_7:
    edi += 4;
    ecx = 6;
    eax = ebx;
    *(fp_stack--) = *((esp + 0x400fc));
    fp_stack[0] += *((esp + 0x50));
    *((esp + 0x50)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    edx = *((esp + 0x30));
    fcn_0804881d (*((esp + 0x400fc)), *((esp + 0x400fc)), edi);
    goto label_0;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80486ba */
#include <stdint.h>
 
int32_t fcn_080486ba (int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_3ch, int32_t arg_48h, int32_t arg_4ch, int32_t arg_70h, int32_t arg_74h, int32_t arg_78h, int32_t arg_7ch, int32_t arg_7dh, int32_t arg_80h, int32_t arg_40090h, int32_t arg_40094h, int32_t arg_40098h, int32_t arg_400a0h, int32_t arg_400a4h) {
    int32_t var_4h;
    int32_t var_8h;
    edi = eax;
    ebx = edx;
    ebx = (int32_t) bl;
    eax = *((esp + 0x40090));
    edx = esp + 0x18;
    ecx = *((esp + 0x400a0));
    esi = *((esp + 0x400a4));
    *(fp_stack--) = *((esp + 0x4009c));
    *(esp) = eax;
    eax = *((esp + 0x40094));
    *((esp + 0x18)) = fp_stack[0];
    *((esp + 0x1c)) = ecx;
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x48)) = ecx;
    ecx = esp + 0x3c;
    *((esp + 0x50)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = eax;
    eax = *((esp + 0x40098));
    *((esp + 0x20)) = esi;
    *((esp + 0x4c)) = esi;
    esi = esp;
    *((esp + 0x7c)) = 1;
    *((esp + 8)) = eax;
    eax = esp + 0x48;
    *((esp + 0x7d)) = 0;
    *((esp + 0x70)) = 0x3f470a3d;
    *((esp + 0x74)) = 0x3e8b4396;
    *((esp + 0x78)) = 0xc;
    fcn_0804844d ();
    eax = esp + 0x80;
    edx = ebx;
    fcn_080484ca ();
    memcpy (edi, esi, 0x40080);
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x804847f */
#include <stdint.h>
 
void fcn_0804847f (void) {
    *(fp_stack--) = *(eax);
    fp_stack[0] -= *(edx);
    *(ecx) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((eax + 4));
    fp_stack[0] -= *((edx + 4));
    *((ecx + 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((eax + 8));
    fp_stack[0] -= *((edx + 8));
    *((ecx + 8)) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x80484a2 */
#include <stdint.h>
 
void fcn_080484a2 (void) {
    edx = eax;
    ebx = eax;
    fcn_08048438 ();
    fp_stack[0] = sqrt(fp_stack[0]);
    *(0x8049a00) /= fp_stack[0];
    *(fp_stack--) = *(ebx);
    fp_stack[0] *= fp_stack[1];
    *(ebx) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebx + 4));
    fp_stack[0] *= fp_stack[1];
    *((ebx + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] *= *((ebx + 8));
    *((ebx + 8)) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048c66 */
#include <stdint.h>
 
uint32_t fcn_08048c66 (int32_t arg_70h, int32_t arg_74h) {
    int32_t var_17h;
    int32_t var_1bh;
    int32_t var_20h;
    int32_t var_2ch;
    int32_t var_38h;
    int32_t var_44h;
    edx *= 0x40080;
    esi = ecx;
    edi = eax + edx;
    al = *((edi + 0x7c));
    ecx = *((esp + 0x74));
    if (al == 0) {
        if (ecx == 0) {
            edx = *((esp + 0x70));
            eax = edi + 0x30;
            *(fp_stack--) = *((edi + 0x64));
            *((esp + 0x10)) = fp_stack[0];
            fp_stack--;
            ax = fcn_08048438 ();
            *(fp_stack--) = fp_stack[0];
            ax = fp_status;
            fp_stack++;
            __asm ("sahf");
            if (fp_stack[0] < 0.0) {
            } else {
                ebx = esp + 0x44;
                edx = esi;
                ecx = ebx;
                eax = edi;
                fcn_0804847f ();
                edx = *((esp + 0x70));
                eax = ebx;
                ax = fcn_08048438 ();
                *(fp_stack--) = fp_stack[0];
                ax = fp_status;
                fp_stack++;
                __asm ("sahf");
                if (fp_stack[0] < 0.0) {
                    goto label_0;
                }
                *(fp_stack--) = *((edi + 0x60));
                eax = esp + 0x44;
                fp_stack[0] *= fp_stack[0];
                edx = eax;
                *((esp + 0x10)) = fp_stack[0];
                fp_stack--;
                *(esp) = fp_stack[0];
                fp_stack--;
                ax = fcn_08048438 ();
                *((esp + 0x10)) -= fp_stack[0];
                *((esp + 0x10)) = fp_stack[0];
                fp_stack--;
                *(fp_stack--) = *(esp);
            }
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] *= fp_stack[1];
            fp_stack[0] += *((esp + 0x10));
            ax = fp_status;
            __asm ("sahf");
            if (fp_stack[0] > 0.0) {
                fp_stack[0] = sqrt(fp_stack[0]);
                fp_stack[0] -= fp_stack[1];
                fp_stack++;
            } else {
                if (al == 1) {
                    ebx = edi + 0x18;
                    if (ecx == 0) {
                        edx = *((esp + 0x70));
                        eax = ebx;
                        fcn_08048438 ();
                        *((edi + 0x6c)) /= fp_stack[0];
                    } else {
                        edx = esi;
                    }
                    eax = ebx;
                    fcn_08048438 ();
                    edx = *((esp + 0x70));
                    eax = ebx;
                    *((edi + 0x68)) -= fp_stack[0];
                    *((esp + 0xc)) = fp_stack[0];
                    fp_stack--;
                    al = fcn_08048438 ();
                    *((esp + 0xc)) /= fp_stack[0];
                } else {
                    if (al != 2) {
                        goto label_1;
                    }
                    ebx = esp + 0x38;
                    edx = edi;
                    ecx = ebx;
                    eax = esi;
                    fcn_0804847f ();
                    eax = *((esp + 0x70));
                    ebp = edi + 0x54;
                    ecx = esp + 0x2c;
                    edx = ebp;
                    ax = fcn_0804844d ();
                    *(fp_stack--) = *((esp + 0x2c));
                    *((esp + 0x1c)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x30));
                    *(fp_stack--) = *((esp + 0x34));
                    *(fp_stack--) = *((esp + 0x1c));
                    fp_stack[0] *= fp_stack[0];
                    fp_tmp_0 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_0;
                    fp_stack[0] *= fp_stack[0];
                    fp_stack[0] += fp_stack[2];
                    fp_stack++;
                    fp_stack[0] *= fp_stack[0];
                    fp_stack[0] += fp_stack[1];
                    fp_stack++;
                    fp_stack[0] = sqrt(fp_stack[0]);
                    *((esp + 0x1c)) = fp_stack[0];
                    ax = fp_status;
                    __asm ("sahf");
                    if (fp_stack[0] > 0.0) {
                        fp_status = fp_compare(fp_stack[0], *(0x8049a08));
                        fp_stack++;
                        ax = fp_status;
                        __asm ("sahf");
                        if (fp_stack[0] >= 0.0) {
                            goto label_2;
                        }
                        eax = ebx;
                        edx = ebp;
                        ax = fcn_08048438 ();
                        *(fp_stack--) = *((edi + 0x54));
                        fp_stack[0] *= fp_stack[1];
                        *((esp + 0x38)) -= fp_stack[0];
                        *(fp_stack--) = *((edi + 0x58));
                        fp_stack[0] *= fp_stack[2];
                        *((esp + 0x3c)) -= fp_stack[0];
                        fp_tmp_1 = fp_stack[2];
                        fp_stack[2] = fp_stack[0];
                        fp_stack[0] = fp_tmp_1;
                        fp_stack[0] *= *((edi + 0x5c));
                        *((esp + 0x40)) -= fp_stack[0];
                        fp_tmp_2 = fp_stack[1];
                        fp_stack[1] = fp_stack[0];
                        fp_stack[0] = fp_tmp_2;
                        fp_stack[0] *= fp_stack[0];
                        fp_tmp_3 = fp_stack[2];
                        fp_stack[2] = fp_stack[0];
                        fp_stack[0] = fp_tmp_3;
                        fp_stack[0] *= fp_stack[0];
                        fp_stack[0] += fp_stack[2];
                        fp_stack++;
                        fp_stack[0] *= fp_stack[0];
                        fp_stack[0] += fp_stack[1];
                        fp_stack++;
                        fp_stack[0] = sqrt(fp_stack[0]);
                        *(fp_stack--) = fp_stack[0];
                        fp_status = fp_compare(fp_stack[0], *((edi + 0x60)));
                        fp_stack++;
                        ax = fp_status;
                        __asm ("sahf");
                        if (fp_stack[0] <= 0.0) {
                            goto label_3;
                        }
                        goto label_0;
                    }
                    fp_stack++;
label_2:
                    ebx = esp + 0x2c;
                    eax = ebx;
                    fcn_080484a2 ();
                    eax = esp + 0x38;
                    edx = ebx;
                    ax = fcn_08048438 ();
                    *((esp + 0x14)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x14));
                    fp_status = fp_compare(fp_stack[0], *((edi + 0x60)));
                    fp_stack++;
                    ax = fp_status;
                    __asm ("sahf");
                    if (fp_stack[0] > 0.0) {
                        goto label_1;
                    }
                    ebx = esp + 0x20;
                    edx = ebp;
                    ecx = ebx;
                    eax = esp + 0x38;
                    fcn_0804844d ();
                    esi = esp + 0x2c;
                    eax = ebx;
                    edx = esi;
                    fcn_08048438 ();
                    ecx = ebx;
                    edx = ebp;
                    eax = esi;
                    *((esp + 0x18)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((esp + 0x18));
                    fp_stack[0] /= *((esp + 0x1c));
                    *((esp + 0x18)) = fp_stack[0];
                    fp_stack--;
                    fcn_0804844d ();
                    eax = ebx;
                    fcn_080484a2 ();
                    eax = *((esp + 0x70));
                    edx = ebx;
                    *(fp_stack--) = *((edi + 0x60));
                    fp_stack[0] *= fp_stack[0];
                    *(fp_stack--) = *((esp + 0x14));
                    fp_stack[0] *= fp_stack[0];
                    fp_stack[0] -= fp_stack[1];
                    fp_stack++;
                    fp_stack[0] = sqrt(fp_stack[0]);
                    *(esp) = fp_stack[0];
                    fp_stack--;
                    ax = fcn_08048438 ();
                    *(fp_stack--) = *(esp);
                    fp_stack[1] /= fp_stack[0];
                    fp_stack++;
                    fp_stack[0] = abs(fp_stack[0]);
                    *(fp_stack--) = *((esp + 0x18));
                    fp_stack[1] -= fp_stack[0];
                    fp_stack++;
                }
                fp_status = fp_compare(fp_stack[0], *(0x8049a08));
                ax = fp_status;
                __asm ("sahf");
                if (fp_stack[0] > 0.0) {
                    goto label_3;
                }
            } else {
                fp_stack++;
            }
        }
label_0:
        fp_stack++;
label_1:
        *(fp_stack--) = *(0x8049a04);
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048498 */
#include <stdint.h>
 
void fcn_08048498 (void) {
    edx = eax;
    fcn_08048438 ();
    fp_stack[0] = sqrt(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048ebe */
#include <stdint.h>
 
int32_t fcn_08048ebe (int32_t arg_a0h, int32_t arg_a4h, uint32_t arg_a8h, int32_t arg_ach) {
    int32_t var_20h;
    int32_t var_24h;
    int32_t var_28h;
    int32_t var_44h;
    int32_t var_38h;
    int32_t var_48h;
    int32_t var_4ch;
    int32_t var_4eh;
    int32_t var_50h;
    int32_t var_5ch;
    int32_t var_68h;
    int32_t var_74h;
label_0:
    esi |= 0xffffffff;
    ebx = 0;
    ebp = *((esp + 0xa0));
    edi = *((esp + 0xac));
    *(fp_stack--) = *(0x8049a0c);
    *((esp + 0x28)) = eax;
    *((esp + 0x24)) = edx;
    *((esp + 0x20)) = ecx;
    while (ebx < *((esp + 0x20))) {
        ecx = ebp;
        edx = ebx;
        eax = *((esp + 0x34));
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        ax = fcn_08048c66 (*((esp + 0xb0)), edi);
        *(fp_stack--) = *((esp + 0x10));
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        ax = fp_status;
        __asm ("sahf");
        if (fp_stack[0] > 0.0) {
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (fp_stack[0] < 0.0) {
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                esi = ebx;
            }
        } else {
            fp_stack++;
        }
        ebx++;
    }
    if (esi == -1) {
        fp_stack++;
        edx = *((esp + 0x28));
        eax = 0;
        *(edx) = eax;
        *((edx + 4)) = eax;
        *((edx + 8)) = eax;
        goto label_2;
    }
    eax = esi * 0x40080;
    edi = *((esp + 0x24));
    *(fp_stack--) = fp_stack[0];
    edi += eax;
    eax = *((esp + 0xa4));
    fp_stack[0] *= *(eax);
    fp_stack[0] += *(ebp);
    *((edi + 0xc)) = fp_stack[0];
    *(fp_stack--) = *((eax + 4));
    fp_stack[0] *= fp_stack[2];
    fp_stack[0] += *((ebp + 4));
    *((edi + 0x10)) = fp_stack[0];
    fp_tmp_1 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] *= *((eax + 8));
    fp_stack[0] += *((ebp + 8));
    *((edi + 0x14)) = fp_stack[0];
    if (*((edi + 0x7c)) == 0) {
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] -= *(edi);
        fp_stack[0] /= *((edi + 0x60));
        *((edi + 0x18)) = fp_stack[0];
        fp_stack--;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        fp_stack[0] -= *((edi + 4));
        fp_stack[0] /= *((edi + 0x60));
        *((edi + 0x1c)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] -= *((edi + 8));
        fp_stack[0] /= *((edi + 0x60));
        *((edi + 0x20)) = fp_stack[0];
        fp_stack--;
    } else {
        fp_stack++;
        fp_stack++;
        fp_stack++;
    }
    if (*((edi + 0x7c)) == 2) {
        ebx = edi + 0x18;
        edx = edi;
        eax = edi + 0xc;
        ecx = ebx;
        fcn_0804847f ();
        eax = ebx;
        fcn_080484a2 ();
    }
    ebx = esp + 0x5c;
    eax = 0x824a500;
    edx = edi + 0xc;
    ecx = ebx;
    *((esp + 0x38)) = edx;
    ebp = edi + 0x18;
    fcn_0804847f ();
    eax = ebx;
    fcn_08048498 ();
    eax = ebx;
    *((esp + 0x2c)) = fp_stack[0];
    fp_stack--;
    fcn_080484a2 ();
    edx = ebx;
    eax = ebp;
    ebx = 0;
    ax = fcn_08048438 ();
    *((esp + 0x30)) = fp_stack[0];
    ax = fp_status;
    fp_stack++;
    __asm ("sahf");
    if (fp_stack[0] >= 0.0) {
        goto label_3;
    }
    goto label_4;
    do {
        edx = ebx;
        eax = *((esp + 0x34));
        ecx = *((esp + 0x48));
        ax = fcn_08048c66 (esp + 0x68, 1);
        fp_status = fp_compare(fp_stack[0], *(0x8049a10));
        ax = fp_status;
        __asm ("sahf");
        if (fp_stack[0] > 0.0) {
            fp_status = fp_compare(fp_stack[0], *((esp + 0x2c)));
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if (fp_stack[0] < 0.0) {
                goto label_4;
            }
        } else {
            fp_stack++;
        }
        ebx++;
label_3:
    } while (ebx < *((esp + 0x20)));
    goto label_5;
label_4:
    *(fp_stack--) = 0.0;
label_1:
    *((esp + 0x34)) = fp_stack[0];
    fp_stack--;
    edx = edi + 0x3c;
    if (*((edi + 0x7c)) == 0) {
        eax = ebp;
        fcn_08048438 ();
        edx = ebp;
        fp_stack[0] = -fp_stack[0];
        *(fp_stack--) = 1.0;
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[2];
        ax = *((esp + 0x4e));
        fp_stack[1] -= fp_stack[0];
        fp_stack[0] = sqrt(fp_stack[0]);
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        fp_tmp_5 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        ah |= 0xc;
        *((esp + 0x4c)) = ax;
        eax = edi + 0x48;
        fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
        fp_stack--;
        *(fp_stack--) = *(0x8049a14);
        fp_stack[0] *= fp_stack[1];
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        fp_tmp_6 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        ebx = *((esp + 0x48));
        ? = fp_stack[0];
        fp_stack--;
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_08048438 ();
        edx = ebp;
        *(fp_stack--) = *(esp);
        fp_stack[0] = sin(fp_stack[0]);
        ax = *((esp + 0x4e));
        ah |= 0xc;
        *((esp + 0x4c)) = ax;
        eax = edi;
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = fp_stack[?];
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
        fp_tmp_7 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_7;
        fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
        fp_stack--;
        fp_stack[0] *= *(0x8049a18);
        *((esp + 0x48)) = fp_stack[0];
        fp_stack--;
        esi = *((esp + 0x48));
        ax = fcn_08048438 ();
        ax = fp_status;
        fp_stack++;
        __asm ("sahf");
        if (fp_stack[0] <= 0.0) {
            goto label_6;
        }
        eax = 0x100;
        eax -= esi;
        esi = eax;
        goto label_6;
    }
    eax = *((esp + 0x38));
    ax = fcn_08048438 ();
    *(fp_stack--) = *(0x8049a1c);
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
        __asm ("sahf");
    } while (eax == 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    ax = *((esp + 0x4e));
    ah |= 0xc;
    *((esp + 0x4c)) = ax;
    *((esp + 0x48)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x48));
    edx:eax = (int64_t) eax;
    esi = edx;
    esi ^= eax;
    eax = *((esp + 0x38));
    esi -= edx;
    edx = edi + 0x48;
    ax = fcn_08048438 ();
    *(fp_stack--) = *(0x8049a1c);
    fp_tmp_9 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
        __asm ("sahf");
    } while (esi == 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    ax = *((esp + 0x4e));
    ah |= 0xc;
    *((esp + 0x4c)) = ax;
    *((esp + 0x48)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x48));
    edx:eax = (int64_t) eax;
    ebx = edx;
    ebx ^= eax;
    ebx -= edx;
label_6:
    ebx <<= 8;
    edx = ebx + esi;
    eax = *((edi + edx*4 + 0x82));
    eax = *((edi + edx*4 + 0x81));
    *(fp_stack--) = *(esp);
    *(esp) = eax;
    eax = *((edi + edx*4 + 0x80));
    *(fp_stack--) = *(esp);
    *(esp) = eax;
    *(fp_stack--) = *(esp);
    *((edi + 0x2c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x34));
    fp_stack[0] += *(0x8049a20);
    fp_stack[2] *= fp_stack[0];
    fp_tmp_10 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    *((edi + 0x24)) = fp_stack[0];
    fp_tmp_11 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    fp_stack[0] *= fp_stack[2];
    *((edi + 0x28)) = fp_stack[0];
    fp_tmp_12 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    fp_stack[0] *= *((edi + 0x2c));
    *((esp + 0x40)) = fp_stack[0];
    *((edi + 0x2c)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x3c)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x44)) = fp_stack[0];
    fp_stack--;
    if (*((esp + 0xa8)) > 0) {
        if (*((edi + 0x7d)) != 1) {
            goto label_7;
        }
        edx = *((esp + 0xa4));
        eax = ebp;
        ebx = esp + 0x68;
        fcn_08048438 ();
        edx = *((esp + 0xa4));
        eax = ebx;
        fp_stack[0] += fp_stack[0];
        *(fp_stack--) = *((edi + 0x1c));
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((edi + 0x20));
        fp_stack[0] *= fp_stack[2];
        fp_tmp_13 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_13;
        fp_stack[0] *= *((edi + 0x18));
        *(edx) -= fp_stack[0];
        *((esp + 0x68)) = fp_stack[0];
        fp_stack--;
        *((edx + 4)) -= fp_stack[0];
        *((esp + 0x6c)) = fp_stack[0];
        fp_stack--;
        *((edx + 8)) -= fp_stack[0];
        *((esp + 0x70)) = fp_stack[0];
        fp_stack--;
        fcn_080484a2 ();
        eax = esp + 0x74;
        edx = *((esp + 0xac));
        edx--;
        ecx = *((esp + 0x30));
        edx = *((esp + 0x34));
        ax = fcn_08048ebe (*((esp + 0x44)), ebx, edx, 1);
        goto label_0;
        *(fp_stack--) = *(0x8049a24);
        *(fp_stack--) = *((esp + 0x84));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((esp + 0x4c));
        *((esp + 0x4c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x88));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((esp + 0x54));
        *((esp + 0x54)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((esp + 0x8c));
        fp_stack[0] += *((esp + 0x50));
        *((esp + 0x50)) = fp_stack[0];
        fp_stack--;
    }
label_7:
    *(fp_stack--) = *((esp + 0x3c));
    fp_status = fp_compare(fp_stack[0], *(0x8049a28));
    ax = fp_status;
    __asm ("sahf");
    if (edx > 0) {
        fp_stack++;
        *(fp_stack--) = *(0x8049a28);
    }
    edx = *((esp + 0x28));
    *(edx) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x44));
    fp_status = fp_compare(fp_stack[0], *(0x8049a28));
    ax = fp_status;
    __asm ("sahf");
    if (edx > 0) {
        fp_stack++;
        *(fp_stack--) = *(0x8049a28);
    }
    edx = *((esp + 0x28));
    *((edx + 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x40));
    fp_status = fp_compare(fp_stack[0], *(0x8049a28));
    ax = fp_status;
    __asm ("sahf");
    if (edx > 0) {
        fp_stack++;
        *(fp_stack--) = *(0x8049a28);
    }
    edx = *((esp + 0x28));
    *((edx + 8)) = fp_stack[0];
    fp_stack--;
    goto label_2;
label_5:
    eax = *((esp + 0xa4));
    ebx = esp + 0x50;
    esi = esp + 0x5c;
    ecx = ebx;
    edx = esi;
    fcn_0804847f ();
    eax = ebx;
    fcn_08048498 ();
    edx = esi;
    eax = ebp;
    *(fp_stack--) = *((esp + 0x5c));
    fp_stack[0] /= fp_stack[1];
    *((esp + 0x5c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x60));
    fp_stack[0] /= fp_stack[1];
    *((esp + 0x60)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x64)) /= fp_stack[0];
    *((esp + 0x64)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x30));
    fp_stack[0] *= *((edi + 0x70));
    *((esp + 0x34)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((edi + 0x78));
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_08048438 ();
    *(esp) = fp_stack[0];
    fp_stack--;
    powf ();
    fp_stack[0] *= *((edi + 0x74));
    fp_stack[0] += *((esp + 0x34));
    goto label_1;
label_2:
    eax = *((esp + 0x28));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x8048613 */
#include <stdint.h>
 
int32_t fcn_08048613 (int32_t arg_3ch, int32_t arg_48h, int32_t arg_4ch, int32_t arg_54h, int32_t arg_58h, int32_t arg_5ch, int32_t arg_60h, int32_t arg_7ch, int32_t arg_80h, int32_t arg_40094h, int32_t arg_40098h, int32_t arg_4009ch, int32_t arg_400a0h, int32_t arg_400a4h, int32_t arg_400a8h) {
    int32_t var_4h;
    int32_t var_8h;
    edi = eax;
    ebx = edx;
    ebx = (int32_t) bl;
    eax = *((esp + 0x400a0));
    edx = esp;
    ecx = *((esp + 0x40094));
    esi = *((esp + 0x40098));
    *(fp_stack--) = *((esp + 0x40090));
    *((esp + 0x54)) = eax;
    eax = *((esp + 0x400a4));
    *(esp) = fp_stack[0];
    *((esp + 4)) = ecx;
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x48)) = ecx;
    ecx = esp + 0x3c;
    *((esp + 0x50)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x58)) = eax;
    eax = *((esp + 0x400a8));
    *((esp + 8)) = esi;
    *((esp + 0x4c)) = esi;
    esi = esp;
    *((esp + 0x7c)) = 2;
    *((esp + 0x5c)) = eax;
    eax = *((esp + 0x4009c));
    *((esp + 0x60)) = eax;
    eax = esp + 0x48;
    fcn_0804844d ();
    eax = esp + 0x80;
    edx = ebx;
    eax = fcn_080484ca ();
    memcpy (edi, esi, 0x40080);
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_382/ia32_elf/subject.exe @ 0x804938f */
#include <stdint.h>
 
int32_t fcn_0804938f (void) {
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_28h;
    int32_t var_2ch;
    int32_t var_2eh;
    int32_t var_24h;
    ebp = 0;
    esi = eax;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = edx;
    *((esp + 0xc)) = ecx;
    while (ebp < *((esp + 0x10))) {
        edi = esi + 0x30;
        edx = 0x824a50c;
        ecx = edi;
        eax = esi;
        fcn_0804847f ();
        if (*((esi + 0x7c)) == 0) {
            *(fp_stack--) = *((esi + 0x60));
            edx = edi;
            eax = edi;
            fp_stack[0] *= fp_stack[0];
            *(esp) = fp_stack[0];
            fp_stack--;
            fcn_08048438 ();
            *(fp_stack--) = *(esp);
            fp_stack[1] -= fp_stack[0];
            fp_stack++;
            *((esi + 0x64)) = fp_stack[0];
            fp_stack--;
        }
        if (*((esi + 0x7c)) == 1) {
            ebx = esi + 0x18;
            eax = edi;
            edx = ebx;
            fcn_08048438 ();
            edx = esi;
            eax = ebx;
            *((esi + 0x6c)) = fp_stack[0];
            fp_stack--;
            fcn_08048438 ();
            *((esi + 0x68)) = fp_stack[0];
            fp_stack--;
        }
        ebp++;
        esi += 0x40080;
    }
    ebx = 0;
    esi = 0x964cd20;
    do {
        eax = esp + 0x24;
        esi += 0x18;
        ecx = *((esp + 0x20));
        edx = *((esp + 0x24));
        fcn_08048ebe (0x824a50c, esi, 2, 0);
        *(fp_stack--) = *((esp + 0x38));
        ax = *((esp + 0x2e));
        ah |= 0xc;
        *((esp + 0x2c)) = ax;
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        ecx = *((esp + 0x28));
        *(fp_stack--) = *((esp + 0x34));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        eax = *((esp + 0x28));
        ecx <<= 8;
        *(fp_stack--) = *((esp + 0x3c));
        *((esp + 0x28)) = fp_stack[0];
        fp_stack--;
        edx = *((esp + 0x28));
        eax <<= 0x10;
        eax += edx;
        ecx += eax;
        eax = *((esp + 0x1c));
        *((eax + ebx*4 + 4)) = ecx;
        *((eax + ebx*4)) = ecx;
        ebx += 2;
    } while (ebx != 0x30000);
    return eax;
}
