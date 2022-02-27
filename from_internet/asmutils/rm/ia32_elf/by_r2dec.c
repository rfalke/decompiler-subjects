/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    if (ecx < 2) {
        goto label_3;
    }
    ecx--;
    ebp = 0;
    if (*(ebx) == 0x722d) {
        ebp++;
    } else {
    }
    do {
label_0:
        edi = ebx;
        if (edi == 0) {
            goto label_3;
        }
        fcn_08048177 ();
        if (edi != 0) {
            goto label_4;
        }
    } while (ebp == 0);
    void (*0x8048094)() ();
    eax = 0x28;
    eax = sys_rmdir (0xed);
    goto label_0;
label_4:
    eax = 0xa;
    eax = sys_unlink (0xed);
    goto label_0;
label_3:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    do {
        edi = *((ebp + 8));
        fcn_08048177 ();
        if (ebp != 0) {
            goto label_5;
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (0xeb, ecx, edx);
        if (eax < 0) {
            goto label_5;
        }
        *((ebp - 4)) = eax;
label_2:
        ecx = ebp - 0x10e;
        edx = 0x10a;
        ebx = *((ebp - 4));
        eax = 0;
        al = 0x8d;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if (eax < 0) {
            goto label_5;
        }
        if (eax == 0) {
            goto label_6;
        }
        edi = ecx;
        ecx = eax;
label_1:
        edx = edi + 0xa;
        ax = 0x2e;
        if (*(edx) == al) {
            if (*((edx + 1)) == ah) {
                goto label_7;
            }
            if (*((edx + 1)) == ax) {
                goto label_7;
            }
        }
        edi = ebp - 0x110e;
        esi = *((ebp + 8));
        fcn_08048148 ();
        fcn_08048177 ();
        if (*((edx + 1)) != ax) {
            goto label_8;
        }
        __asm ("pushal");
        void (*0x8048094)() ();
    } while (1);
    eax = 0x28;
    eax = sys_rmdir (0xed);
    __asm ("popal");
    goto label_9;
label_8:
    eax = 0xa;
    eax = sys_unlink (0xed);
label_9:
    edi = 0xa;
label_7:
    eax = 0;
    ax = *((edi + 8));
    edi += eax;
    ecx -= eax;
    if (ecx != 0) {
        goto label_1;
    }
    goto label_2;
label_6:
    eax = 6;
    eax = sys_close (ebp - 4);
label_5:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x8048177 */
#include <stdint.h>
 
uint32_t fcn_08048177 (void) {
    __asm ("pushal");
    ecx = 0x80481d3;
    ebx = edi;
    eax = 0x6b;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0) {
        eax = *(0x80481db);
        ebx = 0x4000;
        eax &= ebx;
        __asm ("clc");
    } else {
        __asm ("stc");
    }
    __asm ("popal");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x8048148 */
#include <stdint.h>
 
void fcn_08048148 (void) {
    __asm ("pushal");
    fcn_080481ae ();
    fcn_0804815c ();
    esi = edx;
    fcn_080481bb ();
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x80481ae */
#include <stdint.h>
 
void fcn_080481ae (void) {
    __asm ("pushal");
    fcn_0804819e ();
    edx++;
    ecx = edx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x804819e */
#include <stdint.h>
 
int32_t fcn_0804819e (void) {
    eax = 0;
    edx = eax;
    edx--;
    do {
        edx++;
        al = *(esi);
        esi++;
    } while (al != 0);
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x804815c */
#include <stdint.h>
 
int16_t fcn_0804815c (void) {
    esi = edi;
    fcn_0804819e ();
    edx--;
    ax = 0x2f;
    if (*((edi + edx)) != al) {
        edx++;
        *((edi + edx)) = ax;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/rm/ia32_elf/subject.exe @ 0x80481bb */
#include <stdint.h>
 
void fcn_080481bb (void) {
    __asm ("pushal");
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    fcn_0804819e ();
    tmp_1 = edi;
    edi = esi;
    esi = tmp_1;
    edi += edx;
    fcn_0804819e ();
    edx++;
    ecx = edx;
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi++;
        es:edi++;
    } while (ecx != 0);
    __asm ("popal");
}
