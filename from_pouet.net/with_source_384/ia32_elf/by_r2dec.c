/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048960 */
#include <stdint.h>
 
void entry0 (void) {
    /* [11] -r-x section size 2780 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, 0x80493b0, 0x80493a0, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048824 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x804943c */
#include <stdint.h>
 
void fini (void) {
    /* [12] -r-x section size 28 named .fini */
    void (*0x8049448)(uint32_t) (ebx);
    ebx += 0xcc0;
    fcn_08048990 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048990 */
#include <stdint.h>
 
int32_t fcn_08048990 (void) {
    if (*(loc.__bss_start) == 0) {
        goto label_0;
    }
    goto label_1;
    do {
        eax += 4;
        *(0x804a184) = eax;
        void (*edx)() ();
label_0:
        eax = *(0x804a184);
        edx = *(eax);
    } while (edx != 0);
    *(loc.__bss_start) = 1;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048774 */
#include <stdint.h>
 
void init (void) {
    /* [09] -r-x section size 48 named .init */
    void (*0x8048780)(uint32_t) (ebx);
    ebx += 0x1988;
    edx = *((ebx - 4));
    if (edx != 0) {
        loc_imp_gmon_start_ ();
    }
    fcn_080489c0 ();
    fcn_08049410 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80487e4 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80489c0 */
#include <stdint.h>
 
int32_t fcn_080489c0 (void) {
    eax = *(section..jcr);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (section..jcr);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8049410 */
#include <stdint.h>
 
int32_t fcn_08049410 (void) {
    eax = *(segment.LOAD1);
    if (eax == -1) {
        goto label_0;
    }
    ebx = 0;
    do {
        void (*eax)() ();
        eax = *((ebx + 0x8049ffc));
        ebx -= 4;
    } while (eax != -1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80487b4 */
#include <stdint.h>
 
void glEnable (void) {
    glEnable ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80487c4 */
#include <stdint.h>
 
void glEnableClientState (void) {
    glEnableClientState ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80487d4 */
#include <stdint.h>
 
void glMatrixMode (void) {
    glMatrixMode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80487f4 */
#include <stdint.h>
 
void glClear (void) {
    glClear ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048804 */
#include <stdint.h>
 
void SDL_ShowCursor (void) {
    SDL_ShowCursor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048814 */
#include <stdint.h>
 
void SDL_PollEvent (void) {
    SDL_PollEvent ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048834 */
#include <stdint.h>
 
void SDL_GL_SwapBuffers (void) {
    SDL_GL_SwapBuffers ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048844 */
#include <stdint.h>
 
void glLoadIdentity (void) {
    glLoadIdentity ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048854 */
#include <stdint.h>
 
void glClearColor (void) {
    glClearColor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048864 */
#include <stdint.h>
 
void SDL_SetVideoMode (void) {
    SDL_SetVideoMode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048874 */
#include <stdint.h>
 
void glNormalPointer (void) {
    glNormalPointer ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048884 */
#include <stdint.h>
 
void SDL_Init (void) {
    SDL_Init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048894 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80488a4 */
#include <stdint.h>
 
void cosf (void) {
    cosf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80488b4 */
#include <stdint.h>
 
void glOrtho (void) {
    glOrtho ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80488c4 */
#include <stdint.h>
 
void glDrawElements (void) {
    glDrawElements ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80488d4 */
#include <stdint.h>
 
void glColor4f (void) {
    glColor4f ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80488e4 */
#include <stdint.h>
 
void glRotatef (void) {
    glRotatef ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80488f4 */
#include <stdint.h>
 
void glLightfv (void) {
    glLightfv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048904 */
#include <stdint.h>
 
void glPushMatrix (void) {
    glPushMatrix ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048914 */
#include <stdint.h>
 
void sinf (void) {
    sinf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048924 */
#include <stdint.h>
 
void SDL_Quit (void) {
    SDL_Quit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048934 */
#include <stdint.h>
 
void glVertexPointer (void) {
    glVertexPointer ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x8048944 */
#include <stdint.h>
 
void glPopMatrix (void) {
    glPopMatrix ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x804922c */
#include <stdint.h>
 
int32_t main (char ** argv) {
    uint32_t var_2ch;
    uint32_t var_24h;
    void * s1;
    int32_t var_ch;
    ecx = esp + 4;
    ebx = ebp - 0x18;
    memcpy (ebx, 0x8049460, 0xc);
    *(esp) = 0x20;
    SDL_Init ();
    SDL_SetVideoMode ();
    eax = SDL_ShowCursor ();
    eax = 0;
    glClearColor ();
    glMatrixMode ();
    glLoadIdentity ();
    *(esp) = 0xb71;
    glEnable ();
    *(esp) = 0xb50;
    glEnable ();
    *(esp) = 0x4000;
    glEnable ();
    *(esp) = 0xba1;
    glEnable ();
    *(esp) = 0x8074;
    glEnableClientState ();
    *(esp) = 0x8075;
    glEnableClientState ();
    *(fp_stack--) = *(0x8049484);
    *((esp + 0x18)) = fp_stack[0];
    *(fp_stack--) = *(0x80494a0);
    *((esp + 0x10)) = fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    glOrtho ();
    glLightfv ();
    ebx = 0;
    esi = ebp - 0x2c;
    while (eax != 0) {
        if (*((ebp - 0x2c)) == 2) {
            if (*((ebp - 0x24)) != 0x1b) {
                goto label_0;
            }
            ebx = 1;
        }
label_0:
        eax = SDL_PollEvent ();
    }
    glClear ();
    eax = 0x3f800000;
    glColor4f ();
    fcn_0804908a ();
    SDL_GL_SwapBuffers ();
    if (ebx == 0) {
        goto label_0;
    }
    SDL_ShowCursor ();
    eax = SDL_Quit ();
    eax = 0;
    esp = ebp - 0xc;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x80489e4 */
#include <stdint.h>
 
void fcn_080489e4 (int32_t arg_14h, int32_t arg_18h, int32_t arg_20h, uint32_t arg_24h, uint32_t arg_28h) {
    int32_t var_144h;
    int32_t var_140h;
    int32_t var_13ch;
    int32_t var_12ch;
    float var_108h;
    float var_fch;
    float var_c8h;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_54h;
    int32_t var_50h;
    float var_4ch;
    float var_48h;
    float var_44h;
    float x;
    float var_20h;
    int32_t var_ch;
label_0:
    if (*((ebp + 0x20)) < 0) {
        goto label_1;
    }
    *(fp_stack--) = *(0x8049470);
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= *((ebp + 0x14));
    *(fp_stack--) = *(0x8049480);
    fp_stack[1] /= fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] *= *((ebp + 0x18));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0x24)) = fp_stack[0];
    fp_stack--;
    sinf (*((ebp - 0x24)));
    *(fp_stack--) = *((ebp + 0x1c));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((ebp - 0x10c)) = fp_stack[0];
    fp_stack--;
    cosf (*((ebp - 0x20)));
    *(fp_stack--) = *((ebp - 0x10c));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x7c)) = fp_stack[0];
    fp_stack--;
    sinf (*((ebp - 0x20)));
    *(fp_stack--) = *((ebp - 0x10c));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((ebp + 0xc));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x78)) = fp_stack[0];
    fp_stack--;
    cosf (*((ebp - 0x24)));
    *(fp_stack--) = *((ebp + 0x1c));
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((ebp + 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x74)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp + 0x1c));
    fp_stack[0] *= *(0x8049484);
    fp_stack[0] *= *(0x8049488);
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack[0] *= *(0x804948c);
    *((ebp - 0x70)) = fp_stack[0];
    fp_stack--;
    if (*((ebp + 0x28)) != 1) {
        goto label_2;
    }
    eax = imp._Jv_RegisterClasses;
    *((ebp - 0x50)) = eax;
    eax = imp._Jv_RegisterClasses;
    esi = eax*4 + 0x8084b18;
    edx = *((ebp - 0x50));
    ebx = edx*4 + 0x80d2d18;
    *(fp_stack--) = *(0x8049490);
    *((ebp - 0x6c)) = fp_stack[0];
    fp_stack--;
    edi = 0;
    while (edi != 0x12) {
        *(fp_stack--) = *((ebp - 0x24));
        *((ebp - 0x40)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8049478);
        fp_stack[0] += *((ebp - 0x40));
        *((ebp - 0x108)) = fp_stack[0];
        fp_stack--;
        sinf (*((ebp - 0x108)));
        *((ebp - 0x104)) = fp_stack[0];
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x100)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] += *((ebp - 0x6c));
        *((ebp - 0xfc)) = fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        cosf ();
        *((ebp - 0xf8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x100));
        fp_stack[0] *= *((ebp - 0xf8));
        fp_stack[0] += *((ebp + 8));
        *((esi - 0x18)) = fp_stack[0];
        fp_stack--;
        sinf (*((ebp - 0xfc)));
        *((ebp - 0xf4)) = fp_stack[0];
        *(fp_stack--) = *((ebp - 0x100));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp + 0xc));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esi - 0x14)) = fp_stack[0];
        fp_stack--;
        cosf (*((ebp - 0x108)));
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((ebp + 0x10));
        *((esi - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp + 8));
        *((ebp - 0xf0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        fp_stack[0] += *((ebp - 0x28));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *((ebp - 0x104));
        *(fp_stack--) = *((ebp - 0xf8));
        *((ebp - 0xe8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xe8));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((ebp - 0xf0));
        *((ebx - 0x18)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp + 0xc));
        *((ebp - 0xe0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xf4));
        *((ebp - 0xd8)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((ebp - 0xd8));
        fp_stack[0] += *((ebp - 0xe0));
        *((ebx - 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp + 0x10));
        *((ebp - 0xd0)) = fp_stack[0];
        fp_stack--;
        fp_stack[1] *= fp_stack[0];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] += *((ebp - 0xd0));
        *((ebx - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8049478);
        *((ebp - 0x40)) -= fp_stack[0];
        *((ebp - 0xc8)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x128)) = fp_stack[0];
        fp_stack--;
        sinf (*((ebp - 0xc8)));
        *((ebp - 0xc4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack[0] *= *((ebp - 0xc4));
        *(fp_stack--) = *((ebp - 0xf8));
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esi - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((ebp - 0xf4));
        fp_stack[0] += *((ebp + 0xc));
        *((esi - 8)) = fp_stack[0];
        fp_stack--;
        cosf (*((ebp - 0xc8)));
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((ebp + 0x10));
        *((esi - 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x128));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *((ebp - 0xc4));
        *(fp_stack--) = *((ebp - 0xe8));
        fp_stack[0] *= fp_stack[1];
        *((ebp - 0xe8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xf0));
        fp_stack[0] += *((ebp - 0xe8));
        *((ebx - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((ebp - 0xd8));
        fp_stack[0] += *((ebp - 0xe0));
        *((ebx - 8)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] += *((ebp - 0xd0));
        *((ebp - 0xd0)) = fp_stack[0];
        *((ebx - 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xc0));
        fp_stack[0] += *(0x8049470);
        *((ebp - 0x6c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x64));
        ecx = *((ebp - 0x50));
        edx = edi + ecx;
        *(fp_stack--) = *((ebp - 0x6c));
        *((ebp - 0xc0)) = fp_stack[0];
        fp_stack--;
        edi += 6;
        ecx = eax + 6;
        *((ebp - 0x64)) = ecx;
        esi += 0x18;
        ebx += 0x18;
    }
    *(0x804a194) = edx;
    *(0x804a18c) = eax;
label_2:
    eax = imp._Jv_RegisterClasses;
    *((ebp - 0x68)) = eax;
    ecx = imp._Jv_RegisterClasses;
    esi = ecx*4 + 0x8084b18;
    ebx = eax*4 + 0x80d2d18;
    *(fp_stack--) = *(0x8049490);
    *((ebp - 0x5c)) = fp_stack[0];
    fp_stack--;
    edi = 0;
    while (edi != 0x12) {
        *(fp_stack--) = *((ebp - 0x24));
        *((ebp - 0x38)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8049478);
        fp_stack[0] += *((ebp - 0x38));
        *((ebp - 0x44)) = fp_stack[0];
        fp_stack--;
        sinf (*((ebp - 0x44)));
        *((ebp - 0xb8)) = fp_stack[0];
        *(fp_stack--) = *((ebp - 0x70));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0xb4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] += *((ebp - 0x5c));
        *((ebp - 0x48)) = fp_stack[0];
        *(esp) = fp_stack[0];
        fp_stack--;
        cosf ();
        *((ebp - 0xb0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xb4));
        fp_stack[0] *= *((ebp - 0xb0));
        fp_stack[0] += *((ebp - 0x7c));
        *((esi - 0x18)) = fp_stack[0];
        fp_stack--;
        sinf (*((ebp - 0x48)));
        *((ebp - 0xac)) = fp_stack[0];
        *(fp_stack--) = *((ebp - 0xb4));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x78));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esi - 0x14)) = fp_stack[0];
        fp_stack--;
        cosf (*((ebp - 0x44)));
        *(fp_stack--) = *((ebp - 0x70));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((ebp - 0x74));
        *((esi - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x7c));
        *((ebp - 0xa8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        fp_stack[0] += *((ebp - 0x70));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *((ebp - 0xb8));
        *(fp_stack--) = *((ebp - 0xb0));
        *((ebp - 0xa0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xa0));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((ebp - 0xa8));
        *((ebx - 0x18)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x78));
        *((ebp - 0x98)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0x90)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((ebp - 0x90));
        fp_stack[0] += *((ebp - 0x98));
        *((ebx - 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x74));
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        fp_stack[1] *= fp_stack[0];
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        fp_stack[0] += *((ebp - 0x88));
        *((ebx - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8049478);
        *((ebp - 0x38)) -= fp_stack[0];
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x128)) = fp_stack[0];
        fp_stack--;
        sinf (*((ebp - 0x4c)));
        *((ebp - 0x80)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x70));
        fp_stack[0] *= *((ebp - 0x80));
        *(fp_stack--) = *((ebp - 0xb0));
        fp_stack[0] *= fp_stack[1];
        *(fp_stack--) = *((ebp - 0x7c));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((esi - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((ebp - 0xac));
        fp_stack[0] += *((ebp - 0x78));
        *((esi - 8)) = fp_stack[0];
        fp_stack--;
        cosf (*((ebp - 0x4c)));
        *(fp_stack--) = *((ebp - 0x70));
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += *((ebp - 0x74));
        *((esi - 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x128));
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] *= *((ebp - 0x80));
        *(fp_stack--) = *((ebp - 0xa0));
        fp_stack[0] *= fp_stack[1];
        *((ebp - 0xa0)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xa8));
        fp_stack[0] += *((ebp - 0xa0));
        *((ebx - 0xc)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= *((ebp - 0x90));
        fp_stack[0] += *((ebp - 0x98));
        *((ebx - 8)) = fp_stack[0];
        fp_stack--;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[0] += *((ebp - 0x88));
        *((ebp - 0x88)) = fp_stack[0];
        *((ebx - 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x30));
        fp_stack[0] += *(0x8049470);
        *((ebp - 0x5c)) = fp_stack[0];
        fp_stack--;
        ecx = *((ebp - 0x54));
        edx = *((ebp - 0x68));
        eax = edi + edx;
        *(fp_stack--) = *((ebp - 0x5c));
        *((ebp - 0x30)) = fp_stack[0];
        fp_stack--;
        edi += 6;
        edx = ecx + 6;
        *((ebp - 0x54)) = edx;
        esi += 0x18;
        ebx += 0x18;
    }
    *(0x804a194) = eax;
    *(0x804a18c) = ecx;
    ebx = 3;
    eax = ecx;
    edx = 0;
    eax = edx:eax / ebx;
    edx = edx:eax % ebx;
    *((ebp - 0x12c)) = eax;
    eax -= 8;
    *((ebp - 0x144)) = eax;
    ecx = imp._Jv_RegisterClasses;
    *((ecx*4 + 0x804a198)) = eax;
    edi = *((ebp - 0x12c));
    edi -= 7;
    *((ecx*4 + 0x804a19c)) = edi;
    esi = *((ebp - 0x12c));
    esi -= 3;
    *((ecx*4 + 0x804a1a0)) = esi;
    eax = *((ebp - 0x12c));
    eax -= 4;
    *((ebp - 0x140)) = eax;
    *((ecx*4 + 0x804a1a4)) = eax;
    edx = *((ebp - 0x12c));
    edx -= 6;
    *((ebp - 0x13c)) = edx;
    *((ecx*4 + 0x804a1a8)) = edx;
    ebx = *((ebp - 0x12c));
    ebx -= 5;
    *((ecx*4 + 0x804a1ac)) = ebx;
    ecx = *((ebp - 0x12c));
    ecx--;
    eax = imp._Jv_RegisterClasses;
    *((eax*4 + 0x804a1b0)) = ecx;
    eax = *((ebp - 0x12c));
    eax -= 2;
    edx = imp._Jv_RegisterClasses;
    *((edx*4 + 0x804a1b4)) = eax;
    *((edx*4 + 0x804a1b8)) = edi;
    *((edx*4 + 0x804a1bc)) = esi;
    *((edx*4 + 0x804a1c0)) = ecx;
    *((edx*4 + 0x804a1c4)) = ebx;
    ecx = *((ebp - 0x144));
    *((edx*4 + 0x804a1c8)) = ecx;
    ecx = *((ebp - 0x140));
    *((edx*4 + 0x804a1cc)) = ecx;
    *((edx*4 + 0x804a1d0)) = eax;
    eax = *((ebp - 0x13c));
    *((edx*4 + 0x804a1d4)) = eax;
    edx += 0x10;
    *(0x804a190) = edx;
    *(fp_stack--) = *((ebp - 0x70));
    fp_stack[0] += fp_stack[0];
    fp_stack[0] /= *(0x8049488);
    *((ebp - 0x60)) = fp_stack[0];
    ebx = *((ebp + 0x20));
    ebx--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp + 0x18));
    fp_stack[0] += *(0x8049494);
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_080489e4 (*((ebp - 0x7c)), *((ebp - 0x78)), *((ebp - 0x74)), *((ebp + 0x14)), ebx);
    goto label_0;
    if (*((ebp + 0x24)) == 0) {
        goto label_1;
    }
    *(fp_stack--) = *(0x8049498);
    *((ebp - 0x58)) = fp_stack[0];
    fp_stack--;
    esi = 0;
    do {
        *(fp_stack--) = *((ebp + 0x14));
        fp_stack[0] += *((ebp - 0x58));
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_080489e4 (*((ebp - 0x7c)), *((ebp - 0x78)), *((ebp - 0x74)), *((ebp + 0x18)), *((ebp - 0x60)));
        goto label_0;
        *(fp_stack--) = *((ebp + 0x18));
        fp_stack[0] += *((ebp - 0x58));
        *(esp) = fp_stack[0];
        fp_stack--;
        fcn_080489e4 (*((ebp - 0x7c)), *((ebp - 0x78)), *((ebp - 0x74)), *((ebp + 0x14)), *((ebp - 0x60)));
        goto label_0;
        *(fp_stack--) = *((ebp - 0x58));
        fp_stack[0] += *(0x8049480);
        *((ebp - 0x58)) = fp_stack[0];
        fp_stack--;
        esi++;
    } while (esi != 2);
label_1:
    esp = ebp - 0xc;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x804908a */
#include <stdint.h>
 
int32_t fcn_0804908a (void) {
    int32_t var_1ch;
    int32_t var_ch;
    *(0x804a190) = 0;
    *(0x804a18c) = 0;
    *(0x804a194) = 0;
    *(fp_stack--) = 0.0;
    *((ebp - 0x1c)) = fp_stack[0];
    fp_stack--;
    ebx = 0;
    while (ebx != 4) {
        fp_stack++;
        edi = 0x3dcccccd;
        esi = 0;
        fcn_080489e4 (esi, esi, esi, esi, *((ebp - 0x1c)));
        *(fp_stack--) = *(0x804949c);
        *(fp_stack--) = *((ebp - 0x1c));
        fp_stack[0] += fp_stack[1];
        *((ebp - 0x1c)) = fp_stack[0];
        fp_stack--;
        ebx++;
    }
    *((esp + 4)) = fp_stack[0];
    *(esp) = fp_stack[0];
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    fcn_080489e4 (esi, esi, esi, edi, 0xe);
    *(fp_stack--) = *((ebp - 0x28));
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_080489e4 (esi, esi, esi, 0x43870000, edi);
    glNormalPointer ();
    ebx = 0x3f800000;
    glColor4f ();
    glVertexPointer ();
    glPushMatrix ();
    glRotatef ();
    glDrawElements ();
    glPopMatrix ();
    eax = 0xbf000000;
    *(0x8084b18) = eax;
    *(0x8084b1c) = eax;
    *(0x8084b20) = eax;
    *(0x804a198) = 0;
    edx = 0x3f000000;
    *(0x8084b24) = edx;
    *(0x8084b28) = eax;
    *(0x8084b2c) = eax;
    *(0x804a19c) = 1;
    *(0x8084b30) = edx;
    *(0x8084b34) = edx;
    *(0x8084b38) = eax;
    *(0x804a1a0) = 2;
    *(0x8084b3c) = eax;
    *(0x8084b40) = edx;
    *(0x8084b44) = eax;
    *(0x804a1a4) = 3;
    glDrawElements ();
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_384/ia32_elf/subject.exe @ 0x804940a */
#include <stdint.h>
 
void fcn_0804940a (void) {
    ebx = *(esp);
}
