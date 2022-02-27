/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048930 */
#include <stdint.h>
 
void entry0 (void) {
    eax = fcn_08048714 ();
    eax = 0;
    al = 0x31;
    eax = SDL_Init ();
    eax = 0;
    eax = 0x804a734;
    SDL_OpenAudio ();
    eax = 0x80000003;
    eax = 0;
    al = 0x20;
    ax = 0x1e0;
    ax = 0x280;
    SDL_SetVideoMode ();
    eax = fcn_080491c0 ();
    eax = 0;
    SDL_ShowCursor ();
    SDL_PauseAudio ();
    eax = SDL_GetTicks ();
    *(0x87cabe8) = eax;
    do {
        eax = SDL_GetTicks ();
        eax -= *(0x87cabe8);
        fcn_08048e99 (eax);
        SDL_GL_SwapBuffers ();
        if (*(0x804a74c) != 0) {
            goto label_0;
        }
        eax = 0x87cabec;
        SDL_PollEvent ();
    } while (*(0x87cabec) != 2);
label_0:
    eax = SDL_Quit ();
    eax = 0;
    al++;
    ebx = 0;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048450 */
#include <stdint.h>
 
void SDL_Quit (void) {
    SDL_Quit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048460 */
#include <stdint.h>
 
void dlsym (void) {
    dlsym ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
void SDL_PauseAudio (void) {
    SDL_PauseAudio ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
void SDL_GetTicks (void) {
    SDL_GetTicks ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048490 */
#include <stdint.h>
 
void SDL_OpenAudio (void) {
    SDL_OpenAudio ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
void SDL_GL_SwapBuffers (void) {
    SDL_GL_SwapBuffers ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80484b0 */
#include <stdint.h>
 
void SDL_Init (void) {
    SDL_Init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80484c0 */
#include <stdint.h>
 
void SDL_PollEvent (void) {
    SDL_PollEvent ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
void SDL_ShowCursor (void) {
    SDL_ShowCursor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
void SDL_SetVideoMode (void) {
    SDL_SetVideoMode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
void dlopen (void) {
    dlopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80486e2 */
#include <stdint.h>
 
int32_t fcn_080486e2 (void) {
    eax = *((ecx + 0x804a6e6));
    ebx = *((ecx + 0x804a48e));
    ebx += eax;
    eax = 0;
    al = *(ebx);
    eax <<= 2;
    ebx = *((eax + 0x804a5e2));
    ebx += *((ecx + 0x87cab98));
    al = *(ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048706 */
#include <stdint.h>
 
int32_t fcn_08048706 (void) {
    ebx = 0x3e04;
    edx:eax = (int64_t) eax;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    edx <<= 2;
    edx += esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80489c8 */
#include <stdint.h>
 
int32_t fcn_080489c8 (void) {
    esi = 0;
    ebx = 0;
    do {
        cx = *((edi + ebx*2));
        *(fp_stack--) = *(esp);
        fp_stack[0] *= *(0x804a8c8);
        *((ebx*4 + 0x87d55e0)) = fp_stack[0];
        fp_stack--;
        edx = (int32_t) cx;
        if (edx < 0) {
            edx = -edx;
        }
        if (edx >= esi) {
            esi = edx;
        }
        ebx++;
    } while (ebx <= 0x3ff);
    *(fp_stack--) = *(esp);
    fp_stack[0] *= *(0x804a8cc);
    *(fp_stack--) = *(0x804a8d0);
    fp_stack[0] *= *(0x87d55c0);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(0x87d55c0) = fp_stack[0];
    fp_stack--;
    if (*(0x87d55c4) > 0x2f) {
        eax = 0;
        *(0x87d55c0) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x804890c */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_0804890c (void) {
    eax = *(0x804a626);
    eax += 0xf31782ce;
    eax ^= 0xf31782ce;
    eax = rotate_right32 (eax, 1);
    *(0x804a626) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80487cb */
#include <stdint.h>
 
int32_t fcn_080487cb (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    eax = 0;
    *(section..bss) = eax;
    *(0x804ab44) = eax;
    *(0x804ab48) = eax;
    *(0x804ab4c) = eax;
    *(0x804ab50) = eax;
    *(0x804ab60) = eax;
    al++;
    eax <<= 0x10;
    *(0x804ab64) = eax;
    eax = *((ebp + 0x1c));
    eax <<= 0x10;
    edx:eax = (int64_t) eax;
    ebx = 0x29040;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    *(0x804ab68) = eax;
    eax = 0;
    eax += *((ebp + 0x18));
    if (eax != 0) {
        ebx = 0x67;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        *(section..bss) = eax;
        eax = edx;
        edx = 0x27c4597;
        edx:eax = eax * edx;
        *(0x804ab44) = eax;
    } else {
        *(0x804ab48) = 0x2a;
    }
    eax = *(ebp);
    eax <<= 0x12;
    edi = eax + 0x82cab70;
    eax = *((ebp + 4));
    eax <<= 0x12;
    esi = eax + 0x804ab70;
    eax = 0x200000;
    ecx = *((ebp + 8));
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    fcn_0804888c ();
    0x804ab54 = -0x804ab54;
    ecx = *((ebp + 0xc));
    eax = fcn_08048891 ();
    eax = 0;
    ecx = *((ebp + 0x10));
    fcn_0804888c ();
    ecx = *((ebp + 0x14));
    eax = *(0x804ab50);
    edx:eax = (int64_t) eax;
    eax = edx:eax / ecx;
    edx = edx:eax % ecx;
    eax = -eax;
    fcn_0804888c ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x804888c */
#include <stdint.h>
 
void fcn_0804888c (void) {
    *(0x804ab54) = eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048891 */
#include <stdint.h>
 
int32_t fcn_08048891 (void) {
    do {
        ecx |= ecx;
        if (ecx == 0) {
            return;
        }
        eax = *(0x804ab64);
        *(0x804ab60) += eax;
        eax = *(0x804ab68);
        *(0x804ab64) += eax;
        eax = *(0x804ab60);
        eax >>= 0x10;
        eax <<= 2;
        eax = *((esi + eax));
        ebx = *(0x804ab50);
        ebx >>= 0xa;
        edx:eax = eax * ebx;
        eax >>= 0xb;
        ebx = eax;
        edx = *(0x804ab48);
        edx &= 0xffff;
        edx <<= 2;
        eax = *((edx + 0x808ab70));
        eax >>= 4;
        edx:eax = eax * ebx;
        eax >>= 0xc;
        memset (edi, eax, ecx);
        eax = *(0x804ab54);
        *(0x804ab50) += eax;
        eax = *(0x804ab44);
        *(0x804ab4c) += eax;
        eax = *(section..bss);
        *(0x804ab48) += eax;
        __asm ("loop fcn.08048891");
    } while (1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048714 */
#include <stdint.h>
 
int32_t fcn_08048714 (void) {
    __asm ("pushal");
    __asm ("std");
    esi = 0x804a6b8;
    edi = 0x804a6a0;
    ecx = 0x3c;
    do {
        ax = *(esi);
        esi += 2;
        ax >>= 1;
        *(es:edi) = ax;
        es:edi += 2;
        __asm ("loop 0x8048725");
    } while (1);
    edi = 0x804ab70;
    ebx = 0;
    ecx = 0x10000;
    do {
        eax = ebx;
        eax += ebx;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
        al &= 1;
        eax = 0x7fff;
        if (al != 0) {
            eax = -eax;
        }
        memset (edi, eax, ecx);
        eax = ebx;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
        edx <<= 0x10;
        eax = edx;
        edx:eax = (int64_t) eax;
        eax = edx:eax / ebp;
        edx = edx:eax % ebp;
        eax -= 0x8000;
        *((edi + 0x7fffc)) = eax;
        eax = fcn_0804890c ();
        eax &= 0xffff;
        eax -= 0x8000;
        *((edi + 0xbfffc)) = eax;
        *(fp_stack--) = *(0x804a71e);
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] = sin(fp_stack[0]);
        fp_stack[0] *= *(0x804a726);
        *(0x804a712) = fp_stack[0];
        fp_stack--;
        fp_stack[0] += *(0x804a716);
        *(0x804a71e) = fp_stack[0];
        fp_stack--;
        eax = *(0x804a712);
        *((edi + 0x3fffc)) = eax;
        ebx++;
        __asm ("loop 0x8048740");
    } while (1);
    ecx = 9;
    do {
        fcn_080487cb (ecx);
        ebp += 0x20;
        __asm ("loop 0x80487ba");
    } while (1);
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x80491c0 */
#include <stdint.h>
 
void fcn_080491c0 (void) {
    __asm ("pushal");
    eax = 0;
    eax = 0x804a93c;
    eax = dlopen ();
    edi = 0x87d5564;
    esi = 0x804a945;
    do {
        eax = *(esi);
        esi += 4;
        if (eax == 0) {
            goto label_0;
        }
        eax = dlsym ();
        memset (edi, eax, ecx);
    } while (1);
label_0:
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048e99 */
#include <stdint.h>
 
int32_t fcn_08048e99 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_eh;
    int32_t var_ch;
    edi = *((ebp + 8));
    *(fp_stack--) = *(esp);
    *(0x87d55c8) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x804a914);
    fp_stack[0] *= *(0x804a72e);
    fp_stack[0] -= *(0x804a918);
    fp_stack[0] *= *(0x804a91c);
    ax = *((ebp - 0xe));
    ah = 0xc;
    *((ebp - 0x10)) = ax;
    *(0x87d55c4) = fp_stack[0];
    fp_stack--;
    if (*(0x87d55c4) > 0x3a) {
        *(0x804a74c) = 1;
    }
    *(fp_stack--) = *(0x804a920);
    fp_stack[0] *= *(esp);
    *((ebp - 0x14)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x14));
    if (eax == *(0x804a8b4)) {
        goto label_2;
    }
    *(0x804a8b4) = eax;
    ebx = 0;
label_0:
    eax = *((ebx + ebx*8 + str._b2f3));
    if (*(0x87d55c4) >= eax) {
        goto label_3;
    }
    ecx = 1;
    do {
        edx = 0x87d4840;
        *(fp_stack--) = *(0x804a924);
        *(fp_stack--) = *((edx + ecx*4));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        eax = ebx * 9;
        ax = *((ecx + eax + 0x804a760));
        *(fp_stack--) = *(esp);
        fp_stack[0] *= *(0x804a928);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((edx + ecx*4)) = fp_stack[0];
        fp_stack--;
        ecx++;
    } while (ecx <= 9);
    goto label_4;
label_3:
    ebx++;
    if (ebx <= 0xf) {
        goto label_0;
    }
label_4:
    *(fp_stack--) = *(0x87d4860);
    esi = 0x3f800000;
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    uint32_t (*0x87d5578)(uint32_t) (esi);
    uint32_t (*0x87d557c)(uint32_t) (0x4100);
    uint32_t (*0x87d5570)(uint32_t) (0x1701);
    uint32_t (*0x87d5574)() ();
    eax = 0x47ae147b;
    edx = 0x3f847ae1;
    uint32_t (*0x87d55a0)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (0x47ae147b, 0xbf847ae1, eax, edx, 0xeb851eb8, 0xbf7eb851, 0xeb851eb8, 0x3f7eb851, eax, edx, 0, 0x4091bc00);
    uint32_t (*0x87d5570)(uint32_t) (0x1700);
    uint32_t (*0x87d5574)() ();
    ebx = 0;
    uint32_t (*0x87d5588)(uint32_t, uint32_t, uint32_t*) (ebx, ebx, *(0x87d4854));
    *(fp_stack--) = *(0x87d4858);
    fp_stack[0] = -fp_stack[0];
    fp_stack[0] *= *(0x804a92c);
    *(esp) = fp_stack[0];
    fp_stack--;
    uint32_t (*0x87d5584)(uint32_t, uint32_t, uint32_t) (esi, ebx, ebx);
    *(fp_stack--) = *(0x804a930);
    fp_stack[0] *= *(0x87d485c);
    fp_stack[0] += *(0x87d5560);
    *(0x87d5560) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    uint32_t (*0x87d5584)(uint32_t, uint32_t, uint32_t) (ebx, ebx, esi);
    if (*(0x87d55c4) > 0x2f) {
        goto label_5;
    }
    uint32_t (*0x87d5590)(uint32_t) (0xb50);
    uint32_t (*0x87d559c)(uint32_t) (0x40400000);
    esi = 0;
label_1:
    uint32_t (*0x87d5564)(uint32_t) (3);
    ebx = 0;
    do {
        *(fp_stack--) = *(esp);
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack[0] *= *(0x804a934);
        fp_stack[0] = sin(fp_stack[0]);
        *(0x804a8e4) -= fp_stack[0];
        *((esp + 8)) = fp_stack[0];
        *((esp + 4)) = fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d5580)(uint32_t) (ebx);
        *(fp_stack--) = *((ebp - 0x18));
        fp_stack[0] *= *(0x804a938);
        fp_stack[0] -= *(0x804a8dc);
        fp_stack[0] += fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t) (*((ebx*4 + 0x87d55e0)), 0xbe99999a);
        ebx++;
    } while (ebx <= 0x3ff);
    uint32_t (*0x87d5568)() ();
    eax = 0;
    eax = uint32_t (*0x87d5584)(uint32_t, uint32_t, uint32_t, uint32_t) (0x42b40000, eax, eax, 0x3f800000);
    esi++;
    if (esi <= 1) {
        goto label_1;
    }
label_5:
    uint32_t (*0x87d5594)(uint32_t, uint32_t, uint32_t, uint32_t) (0x4000, 0x1200, 0x804a8b8, eax);
    uint32_t (*0x87d558c)(uint32_t) (0x4000);
    uint32_t (*0x87d558c)(uint32_t) (0xb57);
    eax = 0;
    uint32_t (*0x87d5584)(uint32_t, uint32_t, uint32_t, uint32_t) (0x41700000, eax, eax, 0x3f800000);
    ebx = 0;
    do {
        eax = 0;
        uint32_t (*0x87d5584)(uint32_t, uint32_t, uint32_t, uint32_t) (0x41f00000, eax, eax, 0x3f800000);
        *(fp_stack--) = *(0x804a900);
        *(esp) = edi;
        fp_stack[0] *= *(esp);
        fp_stack[0] = sin(fp_stack[0]);
        fp_stack[0] *= *(0x804a8dc);
        fp_stack[0] += *(0x804a8dc);
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_08048b1e ();
        ebx++;
    } while (ebx <= 0xb);
label_2:
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048a31 */
#include <stdint.h>
 
int32_t fcn_08048a31 (int32_t arg_ch, int32_t arg_10h) {
    edx = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    eax = 0;
    do {
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] += fp_stack[0];
        fp_stack[0] *= *((ebp + 8));
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] *= fp_stack[0];
        *((ebp - 4)) = fp_stack[0];
        fp_stack[0] *= *(0x804a8d4);
        fp_stack[1] -= fp_stack[0];
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[2];
        fp_stack++;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= *((edx + eax*4 + 0xc));
        *(fp_stack--) = *((ebp - 4));
        fp_stack[0] *= *((ebp + 8));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *(0x804a8d8);
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_tmp_1 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[0] *= *((edx + eax*4 + 0x18));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[2] -= fp_stack[0];
        fp_stack++;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        fp_stack[0] += *((ebp + 8));
        *(fp_stack--) = 1.0;
        fp_stack[0] -= *(0x87d4844);
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        fp_stack[0] += *(0x87d484c);
        *(fp_stack--) = 1.0;
        fp_stack[0] -= *(0x87d4848);
        *((ebp - 0xc)) = fp_stack[0];
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((edx + eax*4 + 0xc));
        fp_stack[0] -= *((edx + eax*4));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 1.0;
        fp_stack[0] -= *(0x87d484c);
        *(fp_stack--) = 1.0;
        fp_stack[0] += *(0x87d4848);
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((edx + eax*4 + 0x18));
        fp_stack[0] -= *((edx + eax*4 + 0xc));
        fp_stack[1] *= fp_stack[0];
        fp_tmp_4 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 8));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[5];
        fp_stack++;
        *(fp_stack--) = *(0x804a8dc);
        fp_stack[5] *= fp_stack[0];
        fp_tmp_5 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        fp_stack[0] += fp_stack[5];
        fp_stack++;
        *(fp_stack--) = 1.0;
        *((ebp + 8)) -= fp_stack[0];
        *(fp_stack--) = *((ebp - 4));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_tmp_6 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[0] *= *((ebp - 0xc));
        *(fp_stack--) = *((edx + eax*4 + 0x24));
        fp_stack[0] -= *((edx + eax*4 + 0x18));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 8));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ecx + eax*4)) = fp_stack[0];
        fp_stack--;
        eax++;
    } while (eax <= 1);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_378/ia32_elf/subject.exe @ 0x8048b1e */
#include <stdint.h>
 
void fcn_08048b1e (void) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    esi = 0;
    *((ebp - 0x10)) = 0;
label_1:
    edi = 0;
label_0:
    eax = *((ebp - 0x10));
    ebx = eax * 3;
    ebx <<= 2;
    *(fp_stack--) = *(0x804a8e0);
    fp_stack[0] *= *(esp);
    *((ebp - 0x14)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_08048a31 (edi, ebx + 0x804a800);
    ebx += 0x804a860;
    fcn_08048a31 (*((ebp - 0x14)), ebx);
    edx = 0;
    do {
        eax = esi * 3;
        eax += edx;
        *(fp_stack--) = *((ebp + 8));
        *(0x804a8e4) -= fp_stack[0];
        fp_stack[0] *= *((edx*4 + 0x87d4864));
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] *= *((edx*4 + 0x87d4870));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((eax*4 + 0x87d48a0)) = fp_stack[0];
        fp_stack--;
        edx++;
    } while (edx <= 2);
    eax = esi * 3;
    *(fp_stack--) = *(0x804a8e8);
    fp_stack[0] *= *(esp);
    fp_stack[0] = sin(fp_stack[0]);
    fp_stack[0] *= *(0x804a8ec);
    *((eax*4 + 0x87d48a8)) = fp_stack[0];
    fp_stack--;
    esi++;
    edi++;
    if (edi <= 0xf) {
        goto label_0;
    }
    *((ebp - 0x10))++;
    if (*((ebp - 0x10)) <= 3) {
        goto label_1;
    }
    *((ebp - 0x10)) = 0;
    eax = esi - 1;
    if (*((ebp - 0x10)) >= eax) {
        goto label_2;
    }
    do {
        eax = *((ebp - 0x10));
        ebx = eax * 3;
        ebx <<= 2;
        *(fp_stack--) = *((ebx + 0x87d48b4));
        fp_stack[0] -= *((ebx + 0x87d48a8));
        *(0x87d487c) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebx + 0x87d48a0));
        fp_stack[0] -= *((ebx + 0x87d48ac));
        *(0x87d4880) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebx + 0x87d48b0));
        fp_stack[0] -= *((ebx + 0x87d48a4));
        *(0x87d4884) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *(0x804a8dc);
        *(fp_stack--) = *(0x87d55c8);
        *(fp_stack--) = *(0x804a8f0);
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_tmp_0 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] = sin(fp_stack[0]);
        fp_stack[0] *= *(0x87d55c0);
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= *(0x804a8f4);
        *(fp_stack--) = 1.0;
        fp_stack[1] += fp_stack[0];
        fp_tmp_1 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[3];
        fp_stack++;
        fp_tmp_2 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] += *((ebx + 0x87d48a4));
        *((ebx + 0x87d48a4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[2];
        fp_stack[0] *= *(0x804a8f8);
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        fp_stack[0] *= *(0x804a8fc);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] = sin(fp_stack[0]);
        fp_stack[0] *= *(0x87d55c0);
        fp_tmp_4 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= *(0x804a900);
        fp_stack[0] += *((ebx + 0x87d48a8));
        *((ebx + 0x87d48a8)) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d558c)(uint32_t) (0xb50);
        uint32_t (*0x87d558c)(uint32_t) (0xba1);
        uint32_t (*0x87d558c)(uint32_t) (0xb71);
        *(fp_stack--) = *(0x87d4850);
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *(0x804a904);
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *(0x804a908);
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *(0x804a90c);
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d5580)() ();
        uint32_t (*0x87d5598)(uint32_t) (0x87d487c);
        uint32_t (*0x87d5564)(uint32_t) (9);
        *(fp_stack--) = *((ebx + 0x87d48a4));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = *((ebx + 0x87d48a8));
        eax ^= 0x80000000;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t) (*((ebx + 0x87d48a0)), eax);
        *(fp_stack--) = *((ebx + 0x87d48b0));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = *((ebx + 0x87d48b4));
        eax ^= 0x80000000;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t) (*((ebx + 0x87d48ac)), eax);
        *(fp_stack--) = *((ebx + 0x87d48b0));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t*) (*((ebx + 0x87d48ac)), *((ebx + 0x87d48b4)));
        *(fp_stack--) = *((ebx + 0x87d48a4));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t*) (*((ebx + 0x87d48a0)), *((ebx + 0x87d48a8)));
        uint32_t (*0x87d5568)() ();
        eax = 0;
        uint32_t (*0x87d5580)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        uint32_t (*0x87d5590)(uint32_t) (0xb50);
        uint32_t (*0x87d5564)(uint32_t) (1);
        *(fp_stack--) = *((ebx + 0x87d48a4));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = *((ebx + 0x87d48a8));
        eax ^= 0x80000000;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t) (*((ebx + 0x87d48a0)), eax);
        *(fp_stack--) = *((ebx + 0x87d48b0));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = *((ebx + 0x87d48b4));
        eax ^= 0x80000000;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t) (*((ebx + 0x87d48ac)), eax);
        *(fp_stack--) = *((ebx + 0x87d48b0));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t*) (*((ebx + 0x87d48ac)), *((ebx + 0x87d48b4)));
        *(fp_stack--) = *((ebx + 0x87d48a4));
        fp_stack[0] *= *(0x804a910);
        *(esp) = fp_stack[0];
        fp_stack--;
        uint32_t (*0x87d556c)(uint32_t*, uint32_t*) (*((ebx + 0x87d48a0)), *((ebx + 0x87d48a8)));
        uint32_t (*0x87d5568)() ();
        *((ebp - 0x10))++;
        eax = esi - 1;
    } while (*((ebp - 0x10)) < eax);
label_2:
    esp = ebp - 0xc;
}
