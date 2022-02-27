/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uuencode/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
void entry0 (void) {
    edi = 0x804d9c4;
    *(edi) = 0x69676562;
    *((edi + 4)) = 0x6e;
    edi += 5;
    if (eax < 2) {
        goto label_2;
    }
    eax--;
    if (*(ebx) == 0x6d2d) {
        *(0x804854c) = 0x804847b;
        *(edi) = 0x7361622d;
        *((edi + 4)) = 0x20343665;
        edi += 8;
        *(edi) = 0;
        eax--;
    } else {
        *(0x804854c) = 0x804843b;
        *(edi) = 0x20;
        edi++;
    }
    if (eax > 2) {
        goto label_2;
    }
    if (eax >= 2) {
        eax = 0x6a;
        eax = sys_newstat (ebx, 0x804d184);
        if (eax != 0) {
            goto label_3;
        }
        eax = *(0x804d18c);
        eax &= 0x1ff;
        fcn_08048340 ();
        edi += 3;
        *(edi) = 0x20;
        edi--;
        fcn_08048374 ();
        edx = 0;
        ecx = 0;
        eax = 5;
        eax = sys_open (ebx, ecx, edx);
        if (eax < 0) {
            goto label_4;
        }
        *(0x804855c) = eax;
        eax = 5;
    } else {
        if (eax != 1) {
            goto label_2;
        }
        *(edi) = 0x20343436;
        edi += 4;
        *(edi) = 0;
        edi--;
        esi = ebx;
        fcn_08048374 ();
        *(0x804855c) = 0;
    }
    esi = 0x804d9c4;
    fcn_08048368 ();
    *((esi + edx)) = 0xa;
    edx++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804d9c4, edx);
label_0:
    *(0x8048550) = 0x1ffe;
    do {
        ebx = 0x1ffe;
        edx = *(0x8048550);
        if (edx == 0) {
            goto label_5;
        }
        ebx -= edx;
        ecx += ebx;
        eax = 3;
        eax = sys_read (0x804855c, 0x8048560, edx);
        *(0x8048554) = eax;
        if (eax < 0) {
            goto label_6;
        }
        ebx = *(0x8048550);
        ebx -= eax;
        *(0x8048550) = ebx;
        if (ebx == 0) {
            goto label_5;
        }
    } while (eax != 0);
label_5:
    esi = 0x8048560;
    edi = 0x804a560;
    edx = 0x1ffe;
    edx -= ebx;
    if (edx == 0) {
        goto label_7;
    }
    *(0x8048558) = 0;
    ebx = *(0x804854c);
    if (ebx == 0x804847b) {
        goto label_8;
    }
    eax = edx;
    if (eax >= 0x2d) {
        al = 0x2d;
    }
    al += 0x20;
    *(es:edi) = al;
    es:edi++;
    do {
label_8:
        if (edx <= 2) {
            goto label_9;
        }
        if (*(0x8048558) >= 0x2d) {
            eax = void (*0x804831c)() ();
        }
        eax = *(esi);
        esi += 4;
        eax = SWAP32 (eax);
        eax >>= 8;
        esi--;
        ecx = eax;
        eax &= 0xfc0000;
        eax >>= 0x12;
        __asm ("xlatb");
        *(es:edi) = al;
        es:edi++;
        eax = ecx;
        eax &= 0x3f000;
        eax >>= 0xc;
        __asm ("xlatb");
        *(es:edi) = al;
        es:edi++;
        eax = ecx;
        ax &= 0xfc0;
        ax >>= 6;
        __asm ("xlatb");
        *(es:edi) = al;
        es:edi++;
        eax = ecx;
        al &= 0x3f;
        __asm ("xlatb");
        *(es:edi) = al;
        es:edi++;
        edx -= 3;
        *(0x8048558) += 3;
    } while (1);
label_9:
    if (edx != 0) {
        if (*(0x8048558) >= 0x2d) {
            eax = void (*0x804831c)() ();
        }
        eax = 0;
        if (edx != 1) {
            ax = *(esi);
            esi += 2;
            tmp_0 = al;
            al = ah;
            ah = tmp_0;
            eax <<= 2;
            ecx = eax;
            eax &= 0x3f000;
            eax >>= 0xc;
            __asm ("xlatb");
            *(es:edi) = al;
            es:edi++;
            eax = ecx;
            eax &= 0xfc0;
            eax >>= 6;
            __asm ("xlatb");
            *(es:edi) = al;
            es:edi++;
            eax = ecx;
            eax &= 0x3f;
            __asm ("xlatb");
            *(es:edi) = al;
            es:edi++;
            if (ebx == 0x804847b) {
                al = 0x3d;
            } else {
                al = 0;
                __asm ("xlatb");
            }
            *(es:edi) = al;
            es:edi++;
        } else {
            al = *(esi);
            esi++;
            ax <<= 4;
            cx = ax;
            ax &= 0xfc0;
            ax >>= 6;
            __asm ("xlatb");
            *(es:edi) = al;
            es:edi++;
            al = cl;
            al &= 0x3f;
            __asm ("xlatb");
            *(es:edi) = al;
            es:edi++;
            if (ebx == 0x804847b) {
                al = 0x3d;
            } else {
                al = 0;
                __asm ("xlatb");
            }
            ah = al;
            *(es:edi) = ax;
            es:edi += 2;
        }
    }
label_7:
    if (edi == 0x804a560) {
        goto label_10;
    }
    *(edi) = 0xa;
    edi++;
    esi = 0x804a560;
    edi -= esi;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0xed);
    eax = *(0x8048554);
    if (eax != 0) {
        goto label_0;
    }
label_10:
    edi = 0x804a560;
    if (*(0x804854c) == 0x804843b) {
        *(edi) = 0xa60;
        *((edi + 2)) = 0xa646e65;
        edx = 6;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804a560, 0x6);
    } else {
        *(edi) = 0x3d3d3d3d;
        *((edi + 4)) = 0xa;
        edx = 5;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xed, 0x5);
    }
    do {
label_1:
        eax = 6;
        eax = sys_close (0x804855c);
        eax = 1;
        eax = sys_exit (0x8048548);
        al = 0xa;
        *(es:edi) = al;
        es:edi++;
        if (ebx != 0x804847b) {
            if (edx >= 0x2d) {
                al = 0x2d;
            } else {
                al = dl;
            }
            al += 0x20;
            *(es:edi) = al;
            es:edi++;
        }
        *(0x8048558) = 0;
        return;
label_2:
        ebx = 2;
        eax = 4;
        eax = sys_write (0x2, 0x80484bb, 0x25);
    } while (1);
label_3:
    eax = -eax;
    *(0x8048548) = eax;
    esi = ebx;
    edi = 0x804d1c4;
    fcn_08048388 ();
    esi = 0x80484fa;
    fcn_08048374 ();
    esi = edi;
    fcn_08048368 ();
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x804d1c4, edx);
    goto label_1;
label_4:
    eax = -eax;
    *(0x8048548) = eax;
    esi = 0x80484e0;
    edi = 0x804d1c4;
    fcn_08048388 ();
    esi = ebx;
    fcn_08048374 ();
    esi = edi;
    fcn_08048368 ();
    *((edi + edx)) = 0xa;
    edx++;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x804d1c4, edx);
    goto label_1;
label_6:
    eax = -eax;
    *(0x8048548) = eax;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x8048517, 0x2f);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uuencode/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
void fcn_08048340 (void) {
    ebx = eax;
    ebx &= 0x1c0;
    ebx <<= 0xa;
    bh = al;
    bh &= 0x38;
    bh >>= 3;
    bl = al;
    bl &= 7;
    ebx <<= 8;
    ebx |= 0x30303000;
    ebx = SWAP32 (ebx);
    *(edi) = ebx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uuencode/ia32_elf/subject.exe @ 0x8048374 */
#include <stdint.h>
 
uint8_t fcn_08048374 (void) {
    __asm ("pushal");
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    al = fcn_08048368 ();
    tmp_1 = edi;
    edi = esi;
    esi = tmp_1;
    edi += edx;
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0);
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uuencode/ia32_elf/subject.exe @ 0x8048368 */
#include <stdint.h>
 
void fcn_08048368 (void) {
    edx = esi;
    edx--;
    do {
        edx++;
    } while (*(edx) != 0);
    edx -= esi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/uuencode/ia32_elf/subject.exe @ 0x8048388 */
#include <stdint.h>
 
void fcn_08048388 (void) {
    do {
        al = *(esi);
        esi++;
        *(es:edi) = al;
        es:edi++;
    } while (al != 0);
    esi = edi;
}
