/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8049b18 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    int32_t var_20h;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    uint32_t var_2ch;
    int32_t var_11ch;
    SDL_SetVideoMode ();
    *(esp) = 0;
    SDL_ShowCursor ();
    *(esp) = 0x1d01;
    glShadeModel ();
    glClearColor ();
    glClearDepth ();
    *(esp) = 0xb71;
    glEnable ();
    *(esp) = 0x203;
    glDepthFunc ();
    glHint ();
    glViewport ();
    glMatrixMode ();
    glLoadIdentity ();
    glFrustum ();
    glMatrixMode ();
    glLoadIdentity ();
    *(esp) = 0x4100;
    glClear ();
    glLoadIdentity ();
    ebx = 0;
    glTranslated ();
    glRotatef ();
    glRotatef ();
    eax = fcn_08049394 ();
    srand (0x5f5e100);
    *((esp + 0x2c)) = 0;
    eax = esp + 0x11c;
    *((esp + 0xc)) = eax;
label_0:
    ecx = 5;
    esi = *((esp + 0x2c));
    edi = esp;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    eax = fcn_08049330 ();
    eax--;
    if (eax == 0) {
        goto label_2;
    }
    rand ();
    edi = 3;
    edx:eax = (int64_t) eax;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    esi = edx + 1;
    rand ();
    if (*((esp + 0x1c)) == esi) {
        ebx--;
    } else {
        edx:eax = (int64_t) eax;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        eax = fcn_08049363 (esi, edx);
        *((esp + ebx*4 + 0x3c)) = eax;
        fcn_080492d1 (ebp, eax, 0x5a);
        *((esp + 0x2c)) = esi;
    }
    ebx++;
    if (ebx <= 0x3b) {
        goto label_0;
    }
    ebx = 0;
    fcn_0804993d (ebp);
    SDL_GL_SwapBuffers ();
    eax = esp + 0x11c;
    *((esp + 8)) = eax;
    do {
        ecx = 5;
        esi = *((esp + 0x28));
        edi = esp;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        eax = fcn_08049330 ();
        eax--;
        if (eax == 0) {
            goto label_2;
        }
        ebx++;
        glRotatef ();
        *(esp) = 0x4100;
        glClear ();
        glFlush ();
        fcn_0804993d (ebp);
        SDL_GL_SwapBuffers ();
        *(esp) = 0x14;
        SDL_Delay ();
    } while (ebx != 0xc8);
    eax = esp + 0x11c;
    bl = 0x3b;
    *((esp + 4)) = eax;
    goto label_3;
    do {
label_1:
        ecx = 5;
        esi = *((esp + 0x24));
        edi = esp;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        eax = fcn_08049330 ();
        eax--;
        if (eax == 0) {
            goto label_2;
        }
        glRotatef ();
        fcn_080492d1 (ebp, *((esp + ebx*4 + 0x34)), 0xfffffffffffffffb);
        *(esp) = 0x4100;
        glClear ();
        glFlush ();
        fcn_0804993d (ebp);
        SDL_GL_SwapBuffers ();
        *(esp) = 0x14;
        SDL_Delay ();
    } while (*((esp + 0x1c)) != 0x12);
    ebx--;
    if (ebx != -1) {
label_3:
        *((esp + 0x1c)) = 0;
        goto label_1;
    }
    eax = esp + 0x11c;
    ebx = 0;
    *(esp) = eax;
    do {
        ecx = 5;
        esi = *((esp + 0x20));
        edi = esp;
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
        eax = fcn_08049330 ();
        eax--;
        if (eax == 0) {
label_2:
            void (*0x804889c)() ();
        }
        ebx++;
        glRotatef ();
        *(esp) = 0x4100;
        glClear ();
        glFlush ();
        fcn_0804993d (ebp);
        SDL_GL_SwapBuffers ();
        *(esp) = 0x14;
        SDL_Delay ();
    } while (ebx != 0x15e);
    SDL_Quit ();
    ebx = 0;
    eax = sys_exit (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80486fc */
#include <stdint.h>
 
void glTranslated (void) {
    glTranslated ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804870c */
#include <stdint.h>
 
void glEnd (void) {
    glEnd ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804871c */
#include <stdint.h>
 
void srand (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804872c */
#include <stdint.h>
 
void glEnable (void) {
    glEnable ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804873c */
#include <stdint.h>
 
void glHint (void) {
    glHint ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804874c */
#include <stdint.h>
 
void glColor3fv (void) {
    glColor3fv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804875c */
#include <stdint.h>
 
void glMatrixMode (void) {
    glMatrixMode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804876c */
#include <stdint.h>
 
void glClear (void) {
    glClear ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804877c */
#include <stdint.h>
 
void SDL_ShowCursor (void) {
    SDL_ShowCursor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804878c */
#include <stdint.h>
 
void SDL_PollEvent (void) {
    SDL_PollEvent ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804879c */
#include <stdint.h>
 
void SDL_GL_SwapBuffers (void) {
    SDL_GL_SwapBuffers ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80487ac */
#include <stdint.h>
 
void glLoadIdentity (void) {
    glLoadIdentity ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80487bc */
#include <stdint.h>
 
void glClearColor (void) {
    glClearColor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80487cc */
#include <stdint.h>
 
void SDL_SetVideoMode (void) {
    SDL_SetVideoMode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80487dc */
#include <stdint.h>
 
void glShadeModel (void) {
    glShadeModel ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80487ec */
#include <stdint.h>
 
void glFrustum (void) {
    glFrustum ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80487fc */
#include <stdint.h>
 
void glTranslatef (void) {
    glTranslatef ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804880c */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804881c */
#include <stdint.h>
 
void glRotatef (void) {
    glRotatef ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804882c */
#include <stdint.h>
 
void glDepthFunc (void) {
    glDepthFunc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804883c */
#include <stdint.h>
 
void glClearDepth (void) {
    glClearDepth ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804884c */
#include <stdint.h>
 
void glBegin (void) {
    glBegin ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804885c */
#include <stdint.h>
 
void glVertex3f (void) {
    glVertex3f ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804886c */
#include <stdint.h>
 
void glPushMatrix (void) {
    glPushMatrix ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804887c */
#include <stdint.h>
 
void glFlush (void) {
    glFlush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804888c */
#include <stdint.h>
 
void SDL_Delay (void) {
    SDL_Delay ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804889c */
#include <stdint.h>
 
void SDL_Quit (void) {
    SDL_Quit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80488ac */
#include <stdint.h>
 
void rand (void) {
    rand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80488bc */
#include <stdint.h>
 
void glPopMatrix (void) {
    uint32_t (*0x804a134)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80488cc */
#include <stdint.h>
 
void glViewport (void) {
    uint32_t (*0x804a138)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048903 */
#include <stdint.h>
 
int32_t fcn_08048903 (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    ecx = *((esp + 0xc));
    eax = *((esp + 4));
    edx = *((esp + 8));
    ecx--;
    if (ecx <= 5) {
        /* switch table (6 cases) at 0x8049eb8 */
        ecx = edx * 0xc;
        ecx = eax + ecx;
        *((ecx + 8)) = 0x3f800000;
        goto label_0;
        ecx = edx * 0xc;
        edx *= 3;
        ecx = eax + ecx;
        *((ecx + 8)) = 0;
        *((eax + edx*4 + 0xc)) = 0;
        *((ecx + 0x10)) = 0x3f800000;
        return eax;
        ecx = edx * 0xc;
        edx *= 3;
        ecx = eax + ecx;
        *((ecx + 8)) = 0x3f800000;
        *((eax + edx*4 + 0xc)) = 0;
        goto label_1;
        ecx = edx * 0xc;
        edx *= 3;
        ecx = eax + ecx;
        *((ecx + 8)) = 0x3f800000;
        *((eax + edx*4 + 0xc)) = 0x3f000000;
        goto label_1;
        ecx = edx * 0xc;
        ecx = eax + ecx;
        *((ecx + 8)) = 0;
label_0:
        edx *= 3;
        *((eax + edx*4 + 0xc)) = 0x3f800000;
label_1:
        *((ecx + 0x10)) = 0;
        return eax;
        ecx = edx * 0xc;
        edx *= 3;
        ecx = eax + ecx;
        *((ecx + 8)) = 0x3f800000;
        *((eax + edx*4 + 0xc)) = 0x3f800000;
        *((ecx + 0x10)) = 0x3f800000;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80489c3 */
#include <stdint.h>
 
int32_t fcn_080489c3 (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    al = *((esp + 0x10));
    ebx = *((esp + 0xc));
    edx = *((esp + 0x14));
    ecx = *((esp + 0x18));
    eax -= 0x42;
    if (al <= 0x12) {
        eax = (int32_t) al;
        /* switch table (19 cases) at 0x8049ed0 */
        esi = 1;
        eax = 2;
    } else {
        esi = 0;
        edx = 0;
        eax = 0;
        goto label_0;
        eax = edx - 2;
        edx = 2;
        esi = eax;
        esi >>= 0x1f;
        eax ^= esi;
        eax -= esi;
        esi = 2;
        goto label_1;
        ecx -= 2;
        esi = ecx;
        esi >>= 0x1f;
        eax = edx - 2;
        ecx ^= esi;
        ecx -= esi;
        esi = eax;
        esi >>= 0x1f;
        edx = 0;
        eax ^= esi;
        eax -= esi;
        esi = 3;
        goto label_1;
        edx -= 2;
        eax = 0;
        esi = edx;
        esi >>= 0x1f;
        edx ^= esi;
        edx -= esi;
        esi = 4;
        goto label_1;
        eax = edx - 2;
        edx = ecx;
        esi = eax;
        esi >>= 0x1f;
        eax ^= esi;
        eax -= esi;
        esi = 5;
label_0:
        ecx = 0;
        goto label_1;
        eax = edx - 2;
        esi = eax;
        esi >>= 0x1f;
        edx = ecx - 2;
        eax ^= esi;
        eax -= esi;
        esi = edx;
        esi >>= 0x1f;
        ecx = 2;
        edx ^= esi;
        edx -= esi;
        esi = 0;
    }
label_1:
    ecx *= 9;
    eax *= 3;
    eax = ecx + eax;
    esi = edx + eax + 0xc;
    eax = fcn_08048903 (*((ebx + esi*4 + 4)), esi, *((esp + 0x1c)));
    *((ebx + esi*4 + 4)) = eax;
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048b68 */
#include <stdint.h>
 
int32_t fcn_08048b68 (int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_28h) {
    eax = *((esp + 0x18));
    ecx = *((esp + 0x1c)) * 0xc;
    ebx = eax + 8;
    ecx = ebx + ecx;
    edx = *((ecx + 8));
    ebp = *(ecx);
    edi = *((ecx + 4));
    *(esp) = edx;
    edx = *((esp + 0x20)) * 0xc;
    edx = ebx + edx;
    esi = *(edx);
    *(ecx) = esi;
    esi = *((edx + 4));
    *((ecx + 4)) = esi;
    esi = *((edx + 8));
    *((ecx + 8)) = esi;
    ecx = *((esp + 0x24)) * 0xc;
    ecx = ebx + ecx;
    esi = *(ecx);
    *(edx) = esi;
    esi = *((ecx + 4));
    *((edx + 4)) = esi;
    esi = *((ecx + 8));
    *((edx + 8)) = esi;
    edx = *((esp + 0x28)) * 0xc;
    ebx += edx;
    edx = *(ebx);
    *(ecx) = edx;
    edx = *((ebx + 4));
    *((ecx + 4)) = edx;
    edx = *((ebx + 8));
    *((ecx + 8)) = edx;
    *(ebx) = ebp;
    *((ebx + 4)) = edi;
    edx = *(esp);
    *((ebx + 8)) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048be1 */
#include <stdint.h>
 
int32_t fcn_08048be1 (int32_t arg_4h, int32_t arg_8h) {
    edx = *((esp + 8));
    eax = *((esp + 4));
    if (edx != 2) {
        if (edx == 3) {
            goto label_0;
        }
        edx--;
        if (edx != 0) {
            goto label_1;
        }
    } else {
    }
    eax = fcn_08048b68 (eax, 3, 5, 2, 0);
    return eax;
label_0:
    fcn_08048b68 (eax, 1, 5, 4, 0);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048c24 */
#include <stdint.h>
 
int32_t fcn_08048c24 (int32_t arg_4h, int32_t arg_8h) {
    edx = *((esp + 8));
    eax = *((esp + 4));
    if (edx != 2) {
        if (edx == 3) {
            goto label_0;
        }
        edx--;
        if (edx != 0) {
            goto label_1;
        }
    } else {
    }
    eax = fcn_08048b68 (eax, 0, 2, 5, 3);
    return eax;
label_0:
    fcn_08048b68 (eax, 0, 4, 5, 1);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80490d5 */
#include <stdint.h>
 
int32_t fcn_080490d5 (int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    eax = *((esp + 0x1c));
    ecx = *((esp + 0x18));
    ebx = *((esp + 0x14));
    *(esp) = eax;
    edx = ecx + 4;
    *(fp_stack--) = *(esp);
    fp_stack[0] += *((ebx + edx*4));
    *((ebx + edx*4)) = fp_stack[0];
    if (eax >= 0) {
        goto label_0;
    }
    *(fp_stack--) = *(0x8049f30);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (eax != 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_1;
    }
    ecx *= 0x24;
    edi = 0;
    *((ebx + edx*4)) = 0;
    eax = ebx + ecx;
    esi = *((eax + 0x4c));
    edx = *((eax + 0x34));
    *((eax + 0x34)) = esi;
    esi = *((eax + 0x54));
    *((eax + 0x4c)) = esi;
    esi = *((eax + 0x3c));
    *((eax + 0x3c)) = edx;
    edx = *((eax + 0x40));
    *((eax + 0x54)) = esi;
    esi = *((eax + 0x50));
    *((eax + 0x40)) = esi;
    esi = *((eax + 0x48));
    *((eax + 0x50)) = esi;
    esi = *((eax + 0x38));
    *((eax + 0x38)) = edx;
    *((eax + 0x48)) = esi;
    esi = ebx + ecx + 0x34;
    do {
        edi++;
        eax = fcn_08048be1 (*(esi), 1);
        *(esi) = eax;
        eax = fcn_08048be1 (*((esi + 4)), 1);
        *((esi + 4)) = eax;
        eax = fcn_08048be1 (*((esi + 8)), 1);
        *((esi + 8)) = eax;
        esi += 0xc;
    } while (edi != 3);
    goto label_1;
    if (edi == 3) {
label_0:
        goto label_2;
    }
    *(fp_stack--) = *(0x8049f34);
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (edi != 3) {
        goto label_1;
    }
    if (edi == 3) {
        goto label_1;
    }
    ecx *= 0x24;
    edi = 0;
    *((ebx + edx*4)) = 0;
    eax = ebx + ecx;
    esi = *((eax + 0x54));
    edx = *((eax + 0x3c));
    *((eax + 0x3c)) = esi;
    esi = *((eax + 0x4c));
    *((eax + 0x54)) = esi;
    esi = *((eax + 0x34));
    *((eax + 0x34)) = edx;
    edx = *((eax + 0x38));
    *((eax + 0x4c)) = esi;
    esi = *((eax + 0x48));
    *((eax + 0x38)) = esi;
    esi = *((eax + 0x50));
    *((eax + 0x48)) = esi;
    esi = *((eax + 0x40));
    *((eax + 0x40)) = edx;
    *((eax + 0x50)) = esi;
    esi = ebx + ecx + 0x34;
    do {
        edi++;
        eax = fcn_08048c24 (*(esi), 1);
        *(esi) = eax;
        eax = fcn_08048c24 (*((esi + 4)), 1);
        *((esi + 4)) = eax;
        eax = fcn_08048c24 (*((esi + 8)), 1);
        *((esi + 8)) = eax;
        esi += 0xc;
    } while (edi != 3);
    goto label_1;
label_2:
    fp_stack++;
label_1:
    *(fp_stack--) = *((ebx + 0x10));
    *(fp_stack--) = *((ebx + 0x14));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    __asm ("fucom st(1)");
    ax = fp_status;
    __asm ("sahf");
    if (edi != 3) {
        if (edi == 3) {
            goto label_3;
        }
    }
    *(fp_stack--) = *(0x8049f34);
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[1];
    fp_tmp_3 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    __asm ("fucom st(2)");
    ax = fp_status;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    __asm ("sahf");
    if (edi != 3) {
        if (edi == 3) {
            goto label_4;
        }
    }
    fp_stack[0] += fp_stack[2];
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    __asm ("sahf");
    if (edi == 3) {
        if (edi == 3) {
            goto label_5;
label_4:
            fp_stack++;
        }
label_3:
        *(fp_stack--) = *((ebx + 0x18));
        fp_tmp_5 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        __asm ("fucom st(2)");
        ax = fp_status;
        __asm ("sahf");
        if (edi != 3) {
            if (edi == 3) {
                goto label_6;
            }
        }
        *(fp_stack--) = *(0x8049f34);
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] -= fp_stack[1];
        fp_tmp_6 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        __asm ("fucom st(2)");
        ax = fp_status;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (edi != 3) {
            if (edi == 3) {
                goto label_7;
            }
        }
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_status = fp_compare(fp_stack[0], fp_stack[2]);
        fp_stack++;
        ax = fp_status;
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (edi == 3) {
            if (edi == 3) {
                goto label_8;
label_6:
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                goto label_9;
label_7:
                fp_stack++;
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
            }
label_9:
            fp_stack[0] += *((ebx + 4));
            *((ebx + 0x18)) = 0;
            *((ebx + 0x14)) = 0;
            *((ebx + 0x10)) = 0;
            *((ebx + 4)) = fp_stack[0];
            fp_stack--;
            fp_stack++;
            fp_stack++;
            goto label_10;
label_5:
            fp_stack++;
            fp_stack++;
        } else {
        } else {
            fp_stack++;
            goto label_10;
label_8:
            fp_stack++;
        }
    }
label_10:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048eb5 */
#include <stdint.h>
 
int32_t fcn_08048eb5 (int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    eax = *((esp + 0x1c));
    ecx = *((esp + 0x18));
    ebx = *((esp + 0x14));
    *(esp) = eax;
    edx = ecx + 4;
    *(fp_stack--) = *(esp);
    fp_stack[0] += *((ebx + edx*4 + 0xc));
    *((ebx + edx*4 + 0xc)) = fp_stack[0];
    if (eax >= 0) {
        goto label_0;
    }
    *(fp_stack--) = *(0x8049f30);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (eax != 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_1;
    }
    ecx *= 0xc;
    edi = 0;
    *((ebx + edx*4 + 0xc)) = 0;
    eax = ebx + ecx;
    esi = *((eax + 0x84));
    edx = *((eax + 0x3c));
    *((eax + 0x3c)) = esi;
    esi = *((eax + 0x7c));
    *((eax + 0x84)) = esi;
    esi = *((eax + 0x34));
    *((eax + 0x34)) = edx;
    edx = *((eax + 0x38));
    *((eax + 0x7c)) = esi;
    esi = *((eax + 0x60));
    *((eax + 0x38)) = esi;
    esi = *((eax + 0x80));
    *((eax + 0x60)) = esi;
    esi = *((eax + 0x58));
    *((eax + 0x58)) = edx;
    *((eax + 0x80)) = esi;
    esi = ebx + ecx + 0x34;
    do {
        edi++;
        eax = fcn_08048be1 (*(esi), 2);
        *(esi) = eax;
        eax = fcn_08048be1 (*((esi + 4)), 2);
        *((esi + 4)) = eax;
        eax = fcn_08048be1 (*((esi + 8)), 2);
        *((esi + 8)) = eax;
        esi += 0x24;
    } while (edi != 3);
    goto label_1;
    if (edi == 3) {
label_0:
        goto label_2;
    }
    *(fp_stack--) = *(0x8049f34);
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (edi != 3) {
        goto label_1;
    }
    if (edi == 3) {
        goto label_1;
    }
    ecx *= 0xc;
    edi = 0;
    *((ebx + edx*4 + 0xc)) = 0;
    eax = ebx + ecx;
    esi = *((eax + 0x7c));
    edx = *((eax + 0x34));
    *((eax + 0x34)) = esi;
    esi = *((eax + 0x84));
    *((eax + 0x7c)) = esi;
    esi = *((eax + 0x3c));
    *((eax + 0x3c)) = edx;
    edx = *((eax + 0x58));
    *((eax + 0x84)) = esi;
    esi = *((eax + 0x80));
    *((eax + 0x58)) = esi;
    esi = *((eax + 0x60));
    *((eax + 0x80)) = esi;
    esi = *((eax + 0x38));
    *((eax + 0x38)) = edx;
    *((eax + 0x60)) = esi;
    esi = ebx + ecx + 0x34;
    do {
        edi++;
        eax = fcn_08048c24 (*(esi), 2);
        *(esi) = eax;
        eax = fcn_08048c24 (*((esi + 4)), 2);
        *((esi + 4)) = eax;
        eax = fcn_08048c24 (*((esi + 8)), 2);
        *((esi + 8)) = eax;
        esi += 0x24;
    } while (edi != 3);
    goto label_1;
label_2:
    fp_stack++;
label_1:
    *(fp_stack--) = *((ebx + 0x1c));
    *(fp_stack--) = *((ebx + 0x20));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    __asm ("fucom st(1)");
    ax = fp_status;
    __asm ("sahf");
    if (edi != 3) {
        if (edi == 3) {
            goto label_3;
        }
    }
    *(fp_stack--) = *(0x8049f34);
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[1];
    fp_tmp_3 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    __asm ("fucom st(2)");
    ax = fp_status;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    __asm ("sahf");
    if (edi != 3) {
        if (edi == 3) {
            goto label_4;
        }
    }
    fp_stack[0] += fp_stack[2];
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    __asm ("sahf");
    if (edi == 3) {
        if (edi == 3) {
            goto label_5;
label_4:
            fp_stack++;
        }
label_3:
        *(fp_stack--) = *((ebx + 0x24));
        fp_tmp_5 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        __asm ("fucom st(2)");
        ax = fp_status;
        __asm ("sahf");
        if (edi != 3) {
            if (edi == 3) {
                goto label_6;
            }
        }
        *(fp_stack--) = *(0x8049f34);
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] -= fp_stack[1];
        fp_tmp_6 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        __asm ("fucom st(2)");
        ax = fp_status;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (edi != 3) {
            if (edi == 3) {
                goto label_7;
            }
        }
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_status = fp_compare(fp_stack[0], fp_stack[2]);
        fp_stack++;
        ax = fp_status;
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (edi == 3) {
            if (edi == 3) {
                goto label_8;
label_6:
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                goto label_9;
label_7:
                fp_stack++;
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
            }
label_9:
            fp_stack[0] += *((ebx + 8));
            *((ebx + 0x24)) = 0;
            *((ebx + 0x20)) = 0;
            *((ebx + 0x1c)) = 0;
            *((ebx + 8)) = fp_stack[0];
            fp_stack--;
            fp_stack++;
            fp_stack++;
            goto label_10;
label_5:
            fp_stack++;
            fp_stack++;
        } else {
        } else {
            fp_stack++;
            goto label_10;
label_8:
            fp_stack++;
        }
    }
label_10:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048c67 */
#include <stdint.h>
 
int32_t fcn_08048c67 (int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    eax = *((esp + 0x20));
    edx = *((esp + 0x1c));
    ebx = *((esp + 0x18));
    *(esp) = eax;
    ecx = edx + 8;
    *(fp_stack--) = *(esp);
    fp_stack[0] += *((ebx + ecx*4 + 8));
    *((ebx + ecx*4 + 8)) = fp_stack[0];
    if (eax >= 0) {
        goto label_0;
    }
    *(fp_stack--) = *(0x8049f30);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (eax != 0) {
        goto label_1;
    }
    if (eax == 0) {
        goto label_1;
    }
    *((ebx + ecx*4 + 8)) = 0;
    ecx = edx + 0x1e;
    esi = *((ebx + ecx*4 + 4));
    eax = edx + 0xc;
    edi = *((ebx + eax*4 + 4));
    *((ebx + eax*4 + 4)) = esi;
    esi = edx + 0x24;
    ebp = *((ebx + esi*4 + 4));
    *((ebx + ecx*4 + 4)) = ebp;
    ecx = edx + 0x12;
    ebp = *((ebx + ecx*4 + 4));
    *((ebx + esi*4 + 4)) = ebp;
    esi = edx + 0x21;
    *((ebx + ecx*4 + 4)) = edi;
    ebp = *((ebx + esi*4 + 4));
    ecx = edx + 0x15;
    edi = *((ebx + ecx*4 + 4));
    *((ebx + ecx*4 + 4)) = ebp;
    ecx = edx + 0x1b;
    edx += 0xf;
    ebp = *((ebx + ecx*4 + 4));
    *((ebx + esi*4 + 4)) = ebp;
    esi = *((ebx + edx*4 + 4));
    *((ebx + ecx*4 + 4)) = esi;
    esi = ebx + eax*4 + 4;
    *((ebx + edx*4 + 4)) = edi;
    edi = 0;
    do {
        edi++;
        eax = fcn_08048be1 (*(esi), 3);
        *(esi) = eax;
        eax = fcn_08048be1 (*((esi + 0xc)), 3);
        *((esi + 0xc)) = eax;
        eax = fcn_08048be1 (*((esi + 0x18)), 3);
        *((esi + 0x18)) = eax;
        esi += 0x24;
    } while (edi != 3);
    goto label_1;
    if (edi == 3) {
label_0:
        goto label_2;
    }
    *(fp_stack--) = *(0x8049f34);
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (edi != 3) {
        goto label_1;
    }
    if (edi == 3) {
        goto label_1;
    }
    eax = edx + 0x24;
    edi = *((ebx + eax*4 + 4));
    *((ebx + ecx*4 + 8)) = 0;
    ecx = edx + 0x12;
    esi = *((ebx + ecx*4 + 4));
    *((ebx + ecx*4 + 4)) = edi;
    ecx = edx + 0x1e;
    edi = *((ebx + ecx*4 + 4));
    *((ebx + eax*4 + 4)) = edi;
    eax = edx + 0xc;
    edi = *((ebx + eax*4 + 4));
    *((ebx + ecx*4 + 4)) = edi;
    ecx = edx + 0xf;
    *((ebx + eax*4 + 4)) = esi;
    esi = edx + 0x1b;
    edi = *((ebx + ecx*4 + 4));
    ebp = *((ebx + esi*4 + 4));
    *((ebx + ecx*4 + 4)) = ebp;
    ecx = edx + 0x21;
    edx += 0x15;
    ebp = *((ebx + ecx*4 + 4));
    *((ebx + esi*4 + 4)) = ebp;
    esi = *((ebx + edx*4 + 4));
    *((ebx + ecx*4 + 4)) = esi;
    esi = ebx + eax*4 + 4;
    *((ebx + edx*4 + 4)) = edi;
    edi = 0;
    do {
        edi++;
        eax = fcn_08048c24 (*(esi), 3);
        *(esi) = eax;
        eax = fcn_08048c24 (*((esi + 0xc)), 3);
        *((esi + 0xc)) = eax;
        eax = fcn_08048c24 (*((esi + 0x18)), 3);
        *((esi + 0x18)) = eax;
        esi += 0x24;
    } while (edi != 3);
    goto label_1;
label_2:
    fp_stack++;
label_1:
    *(fp_stack--) = *((ebx + 0x28));
    *(fp_stack--) = *((ebx + 0x2c));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    __asm ("fucom st(1)");
    ax = fp_status;
    __asm ("sahf");
    if (edi != 3) {
        if (edi == 3) {
            goto label_3;
        }
    }
    *(fp_stack--) = *(0x8049f34);
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[1];
    fp_tmp_3 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    __asm ("fucom st(2)");
    ax = fp_status;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    __asm ("sahf");
    if (edi != 3) {
        if (edi == 3) {
            goto label_4;
        }
    }
    fp_stack[0] += fp_stack[2];
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    __asm ("sahf");
    if (edi == 3) {
        if (edi == 3) {
            goto label_5;
label_4:
            fp_stack++;
        }
label_3:
        *(fp_stack--) = *((ebx + 0x30));
        fp_tmp_5 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        __asm ("fucom st(2)");
        ax = fp_status;
        __asm ("sahf");
        if (edi != 3) {
            if (edi == 3) {
                goto label_6;
            }
        }
        *(fp_stack--) = *(0x8049f34);
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] -= fp_stack[1];
        fp_tmp_6 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_6;
        __asm ("fucom st(2)");
        ax = fp_status;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (edi != 3) {
            if (edi == 3) {
                goto label_7;
            }
        }
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_status = fp_compare(fp_stack[0], fp_stack[2]);
        fp_stack++;
        ax = fp_status;
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (edi == 3) {
            if (edi == 3) {
                goto label_8;
label_6:
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                goto label_9;
label_7:
                fp_stack++;
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
            }
label_9:
            fp_stack[0] += *((ebx + 0xc));
            *((ebx + 0x30)) = 0;
            *((ebx + 0x2c)) = 0;
            *((ebx + 0x28)) = 0;
            *((ebx + 0xc)) = fp_stack[0];
            fp_stack--;
            fp_stack++;
            fp_stack++;
            goto label_10;
label_5:
            fp_stack++;
            fp_stack++;
        } else {
        } else {
            fp_stack++;
            goto label_10;
label_8:
            fp_stack++;
        }
    }
label_10:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804937f */
#include <stdint.h>
 
void fcn_0804937f (void) {
    malloc (0x50);
    *((eax + 4)) = 0x3f4ccccd;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8048aa8 */
#include <stdint.h>
 
int32_t fcn_08048aa8 (int32_t arg_18h) {
    ecx = 0;
    eax = *((esp + 0x18));
    goto label_3;
label_0:
    ebp = *(edi);
    edx = 0;
    do {
        *((ebp + edx + 0x10)) = 0x3e800000;
        *((ebp + edx + 0xc)) = 0x3e800000;
        *((ebp + edx + 8)) = 0x3e800000;
        edx += 0xc;
    } while (edx != 0x48);
    esi++;
    edi += 4;
    if (esi != 3) {
        goto label_0;
    }
    ebx++;
    while (1) {
        esi = *(esp);
        edx = ebx * 0xc;
        edx = edx + esi + 0x30;
        esi = 0;
        edi = eax + edx + 4;
        goto label_0;
        ecx++;
        if (ecx == 3) {
            ebx = 1;
            dl = 0x54;
            goto label_4;
        }
label_3:
        edx = ecx * 0x24;
        ebx = 0;
        *(esp) = edx;
    }
label_2:
    ecx = ebx - 2;
    dl = 0x54;
    if (ecx <= 4) {
        /* switch table (5 cases) at 0x8049f1c */
        dl = 0x46;
        goto label_4;
        dl = 0x52;
        goto label_4;
        dl = 0x4c;
        goto label_4;
        dl = 0x42;
        goto label_4;
        dl = 0x44;
    }
label_4:
    esi = 0;
    ebp = (int32_t) dl;
    goto label_5;
    do {
label_1:
        edi++;
        fcn_080489c3 (eax, ebp, esi, edi);
    } while (edi != 3);
    esi++;
    if (esi != 3) {
label_5:
        edi = 0;
        goto label_1;
    }
    ebx++;
    if (ebx != 7) {
        goto label_2;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8049444 */
#include <stdint.h>
 
uint32_t fcn_08049444 (int32_t arg_20h) {
    ebx = *((esp + 0x20));
    glPushMatrix ();
    glBegin ();
    eax = ebx + 8;
    *(esp) = eax;
    glColor3fv ();
    *(fp_stack--) = *(0x8049f38);
    *((ebx + 4)) /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    eax = ebx + 0x14;
    *(esp) = eax;
    glColor3fv ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_tmp_4 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *(0x8049f38);
    *((ebx + 4)) /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    eax = ebx + 0x20;
    *(esp) = eax;
    glColor3fv ();
    *(fp_stack--) = *(0x8049f38);
    *((ebx + 4)) /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_tmp_7 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    eax = ebx + 0x2c;
    *(esp) = eax;
    glColor3fv ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_tmp_9 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_10 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_tmp_11 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_12 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    eax = ebx + 0x38;
    *(esp) = eax;
    glColor3fv ();
    *(fp_stack--) = *((ebx + 4));
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_13 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_tmp_14 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_14;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_tmp_15 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_15;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_16 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_16;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    eax = ebx + 0x44;
    *(esp) = eax;
    glColor3fv ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_17 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_17;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_tmp_18 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_18;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    *(fp_stack--) = *((ebx + 4));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = *(0x8049f38);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_19 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_19;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    fp_tmp_20 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_20;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x1c));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glVertex3f ();
    glEnd ();
    return glPopMatrix ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8049394 */
#include <stdint.h>
 
uint32_t fcn_08049394 (void) {
    edi = 0;
    eax = malloc (0xa0);
    ebx = eax;
    *((eax + 4)) = 0;
    *((eax + 8)) = 0;
    *((eax + 0xc)) = 0;
    *((eax + 0x10)) = 0;
    *((eax + 0x1c)) = 0;
    *((eax + 0x28)) = 0;
    *((eax + 0x14)) = 0;
    *((eax + 0x20)) = 0;
    *((eax + 0x2c)) = 0;
    *((eax + 0x18)) = 0;
    *((eax + 0x24)) = 0;
    *((eax + 0x30)) = 0;
    goto label_1;
    do {
label_0:
        eax = fcn_0804937f ();
        ebp++;
        *(esi) = eax;
        eax = fcn_0804937f ();
        *((esi + 4)) = eax;
        eax = fcn_0804937f ();
        *((esi + 8)) = eax;
        esi += 0xc;
    } while (ebp != 3);
    edi++;
    if (edi != 3) {
label_1:
        eax = edi * 0x24;
        ebp = 0;
        esi = ebx + eax + 0x34;
        goto label_0;
    }
    fcn_08048aa8 (ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8049330 */
#include <stdint.h>
 
int32_t fcn_08049330 (uint32_t arg_10h, uint32_t arg_18h) {
    ebx = esp + 0x10;
    while (eax != 0) {
        if (*((esp + 0x10)) == 2) {
            if (*((esp + 0x18)) == 0x1b) {
                eax = 1;
            }
        } else {
            eax = SDL_PollEvent ();
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x8049363 */
#include <stdint.h>
 
void fcn_08049363 (int32_t arg_20h, int32_t arg_24h) {
    malloc (0xc);
    edx = *((esp + 0x20));
    *((eax + 4)) = edx;
    edx = *((esp + 0x24));
    *((eax + 8)) = edx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x80492d1 */
#include <stdint.h>
 
int32_t fcn_080492d1 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    eax = *((esp + 0xc));
    ebx = *((esp + 8));
    edx = *((esp + 0x10));
    ecx = *((eax + 4));
    if (ecx != 2) {
        if (ecx != 3) {
            ecx--;
            if (ecx != 0) {
                goto label_0;
            }
            fcn_080490d5 (ebx, *((eax + 8)), edx);
            fcn_08048eb5 (ebx, *((eax + 8)), edx);
        } else {
        } else {
            fcn_08048c67 (ebx, *((eax + 8)), edx);
        }
    }
label_0:
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_383/ia32_elf/subject.exe @ 0x804993d */
#include <stdint.h>
 
void fcn_0804993d (int32_t arg_60h) {
    int32_t var_44h;
    int32_t var_48h;
    int32_t var_4ch;
    edi = 0;
    ebx = *((esp + 0x60));
    glRotatef ();
    glRotatef ();
    glRotatef ();
    *((esp + 0x44)) = ebx;
label_1:
    ebp = 0;
    glRotatef ();
    eax = *((esp + 0x44));
    *((esp + 0x48)) = eax;
label_0:
    esi = 0;
    glRotatef ();
    do {
        glRotatef ();
        *((esp + 0x4c)) = esi;
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x4c)) = ebp;
        *(fp_stack--) = *((esp + 0x4c));
        *((esp + 0x4c)) = edi;
        *(fp_stack--) = *((esp + 0x4c));
        *(fp_stack--) = 1.0;
        fp_stack[3] -= fp_stack[0];
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        fp_stack[2] -= fp_stack[0];
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        fp_stack[1] -= fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        *((esp + 0x30)) = fp_stack[0];
        fp_stack--;
        *((esp + 0x20)) = fp_stack[0];
        fp_stack--;
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        glTranslatef ();
        eax = *((esp + 0x44));
        fcn_08049444 (*((eax + esi*4 + 0x34)));
        *(fp_stack--) = *((esp + 0x10));
        *(fp_stack--) = 1.0;
        fp_stack[0] -= fp_stack[1];
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x20));
        fp_stack[1] -= fp_stack[0];
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((esp + 0x30));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        glTranslatef ();
        *(fp_stack--) = *((ebx + esi*4 + 0x28));
        esi++;
        fp_stack[0] = -fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        glRotatef ();
    } while (esi != 3);
    *(fp_stack--) = *((ebx + ebp*4 + 0x1c));
    ebp++;
    fp_stack[0] = -fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glRotatef ();
    if (ebp != 3) {
        goto label_0;
    }
    *(fp_stack--) = *((ebx + edi*4 + 0x10));
    edi++;
    fp_stack[0] = -fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glRotatef ();
    if (edi != 3) {
        goto label_1;
    }
    *(fp_stack--) = *((ebx + 0xc));
    fp_stack[0] = -fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glRotatef ();
    *(fp_stack--) = *((ebx + 8));
    fp_stack[0] = -fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glRotatef ();
    *(fp_stack--) = *((ebx + 4));
    fp_stack[0] = -fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    glRotatef ();
}
