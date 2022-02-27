/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x8048067 */
#include <stdint.h>
 
void entry0 (void) {
    if (ecx >= 3) {
        goto label_1;
    }
    edx = 0x1b;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804804c, 0x1b);
    do {
        eax = 1;
        eax = sys_exit (0xea);
label_1:
        eax = 1;
        ecx--;
        ebx = 1;
        if (*(ebx) == 0x722d) {
            *(0x80482ea)++;
            ecx--;
        } else {
        }
        ecx--;
        eax = 0;
        tmp_0 = esp + ecx*4;
        esp + ecx*4 = eax;
        eax = tmp_0;
        *(0x80482e6) = eax;
label_0:
    } while (edi == 0);
    fcn_0804828e ();
    if (edi != 0) {
        goto label_2;
    }
    if (*(0x80482ea) != 1) {
        goto label_0;
    }
    fcn_0804816b (edi, *(0x80482e6));
    goto label_0;
label_2:
    edi = *(0x80482e6);
    esi = edi;
    fcn_080480d7 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x804828e */
#include <stdint.h>
 
uint32_t fcn_0804828e (void) {
    __asm ("pushal");
    ecx = 0x80492eb;
    ebx = edi;
    eax = 0x6a;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax >= 0) {
        eax = *(0x80492f3);
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
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x804816b */
#include <stdint.h>
 
void fcn_0804816b (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_110eh;
    int32_t var_90eh;
    int32_t var_10eh;
    int32_t var_4h;
    do {
        edi = *((ebp + 8));
        fcn_0804828e ();
        if (? != ?) {
            goto label_2;
        }
        edi = *((ebp + 0xc));
        fcn_0804828e ();
        if (? != ?) {
            eax = 0x27;
            eax = sys_mkdir (0xed, 0x1ed);
            if (eax < 0) {
                goto label_2;
            }
        }
        ecx = 0;
        eax = 5;
        eax = sys_open (0xeb, ecx, edx);
        if (eax < 0) {
            goto label_2;
        }
        *((ebp - 4)) = eax;
label_1:
        ecx = ebp - 0x10e;
        edx = 0x10a;
        ebx = *((ebp - 4));
        eax = 0;
        al = 0x8d;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if (eax < 0) {
            goto label_2;
        }
        if (eax == 0) {
            goto label_3;
        }
        edi = ecx;
        ecx = eax;
label_0:
        edx = edi + 0xa;
        ax = 0x2e;
        if (*(edx) == al) {
            if (*((edx + 1)) == ah) {
                goto label_4;
            }
            if (*((edx + 1)) == ax) {
                goto label_4;
            }
        }
        edi = ebp - 0x110e;
        esi = *((ebp + 0xc));
        fcn_0804825f ();
        edi = ebp - 0x90e;
        esi = *((ebp + 8));
        fcn_0804825f ();
        fcn_0804828e ();
        if (*((edx + 1)) != ax) {
            goto label_5;
        }
        __asm ("pushal");
        fcn_0804816b (ebp - 0x90e, ebp - 0x110e);
    } while (1);
    __asm ("popal");
    goto label_6;
label_5:
    eax = fcn_080480d7 ();
label_6:
label_4:
    eax = 0;
    ax = *((edi + 8));
    edi += eax;
    ecx -= eax;
    if (ecx != 0) {
        goto label_0;
    }
    goto label_1;
label_3:
    eax = 6;
    eax = sys_close (ebp - 4);
label_2:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x80480d7 */
#include <stdint.h>
 
void fcn_080480d7 (void) {
    __asm ("pushal");
    ecx = 0x80492eb;
    ebx = esi;
    eax = 0x6a;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    edx = *(0x80492f3);
    if (eax < 0) {
        edx = 0x180;
    }
    fcn_0804828e ();
    if (eax == 0) {
        esi = edi;
        edi = 0x80482eb;
        fcn_0804825f ();
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (0xe, ecx, 0xe);
    if (eax < 0) {
        goto label_0;
    }
    esi = eax;
    eax = 5;
    eax = sys_open (0xed, 0x241, edx);
    if (eax < 0) {
        goto label_0;
    }
    edi = eax;
    do {
        edx = 0;
        dh = 0x10;
        eax = 3;
        eax = sys_read (0xe, 0x80482eb, edx);
        if (eax < 0) {
            goto label_0;
        }
        if (eax == 0) {
            goto label_1;
        }
        eax = 4;
        eax = sys_write (0xed, ecx, 0xea);
    } while (edx == 0x1000);
label_1:
    eax = 6;
    eax = sys_close (0xe);
    eax = 6;
    eax = sys_close (0xed);
    __asm ("clc");
    goto label_2;
label_0:
    __asm ("stc");
label_2:
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x804825f */
#include <stdint.h>
 
void fcn_0804825f (void) {
    __asm ("pushal");
    fcn_080482c1 ();
    fcn_08048273 ();
    esi = edx;
    fcn_080482ce ();
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x80482c1 */
#include <stdint.h>
 
void fcn_080482c1 (void) {
    __asm ("pushal");
    fcn_080482b5 ();
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
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x80482b5 */
#include <stdint.h>
 
void fcn_080482b5 (void) {
    edx = esi;
    edx--;
    do {
        edx++;
    } while (*(edx) != 0);
    edx -= esi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x8048273 */
#include <stdint.h>
 
int16_t fcn_08048273 (void) {
    esi = edi;
    fcn_080482b5 ();
    edx--;
    ax = 0x2f;
    if (*((edi + edx)) != al) {
        edx++;
        *((edi + edx)) = ax;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cp/ia32_elf/subject.exe @ 0x80482ce */
#include <stdint.h>
 
void fcn_080482ce (void) {
    __asm ("pushal");
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    fcn_080482b5 ();
    tmp_1 = edi;
    edi = esi;
    esi = tmp_1;
    edi += edx;
    fcn_080482b5 ();
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
