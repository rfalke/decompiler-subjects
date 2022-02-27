/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (void) {
    ecx = 0x80481bb;
    fcn_08048176 ();
    ebx = 0x80481d5;
    ecx = 0;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_1;
    }
    do {
        edx = 0;
        dh = 0x10;
        ecx = 0x80486ec;
        ebx = ebp;
        eax = 0;
        al = 0x8d;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if (eax < 0) {
            goto label_1;
        }
        if (eax == 0) {
            goto label_1;
        }
        ebx = ecx;
        ecx = eax;
label_0:
        __asm ("pushal");
        esi = ebx + 0xa;
        eax = fcn_0804815a ();
        if (eax == 0) {
            esi = 0x80481d5;
            edi = 0x80481ec;
            fcn_08048196 ();
            fcn_080481a3 ();
            esi = 0x80481dc;
            fcn_080481a3 ();
            ecx = 0;
            eax = 5;
            eax = sys_open (0xed, ecx, edx);
            if (eax < 0) {
                goto label_2;
            }
            edx = 0;
            dh = 4;
            eax = 3;
            eax = sys_read (0xea, 0x80482ec, edx);
            if (eax < 0) {
                goto label_2;
            }
            eax = 6;
            eax = sys_close (ebx);
            edi = ecx;
            fcn_08048132 ();
            ecx = 0x80481e2;
            eax = fcn_08048176 ();
        }
label_2:
        __asm ("popal");
        eax = 0;
        ax = *((ebx + 8));
        ebx += eax;
        ecx -= eax;
    } while (ecx == 0);
    goto label_0;
label_1:
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x8048176 */
#include <stdint.h>
 
void fcn_08048176 (void) {
    __asm ("pushal");
    esi = ecx;
    fcn_08048188 ();
    ebx = 1;
    eax = 4;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x8048188 */
#include <stdint.h>
 
void fcn_08048188 (void) {
    edx = 0;
    edx--;
    do {
        edx++;
        al = *(esi);
        esi++;
    } while (al != 0);
    eax = esi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x804815a */
#include <stdint.h>
 
int32_t fcn_0804815a (void) {
    eax = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_0;
        }
        if (al < 0x30) {
            ah++;
            goto label_0;
        }
    } while (al <= 0x39);
    ah++;
label_0:
    tmp_0 = al;
    al = ah;
    ah = tmp_0;
    ah = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x8048196 */
#include <stdint.h>
 
void fcn_08048196 (void) {
    __asm ("pushal");
    fcn_08048188 ();
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
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x80481a3 */
#include <stdint.h>
 
void fcn_080481a3 (void) {
    __asm ("pushal");
    tmp_0 = edi;
    edi = esi;
    esi = tmp_0;
    fcn_08048188 ();
    tmp_1 = edi;
    edi = esi;
    esi = tmp_1;
    edi += edx;
    fcn_08048188 ();
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
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x8048132 */
#include <stdint.h>
 
void fcn_08048132 (void) {
    __asm ("pushal");
    esi = edi;
    do {
label_0:
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_1;
        }
    } while (al != 0x20);
    *((esi - 1)) = 0;
    goto label_0;
label_1:
    esi = 0x80481e6;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_2;
        }
        ecx = (int32_t) al;
        fcn_08048111 ();
    } while (1);
label_2:
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ps/ia32_elf/subject.exe @ 0x8048111 */
#include <stdint.h>
 
int32_t fcn_08048111 (void) {
    __asm ("pushal");
    do {
        eax = 0;
        ecx = 0;
        ecx--;
        esi = edi;
        __asm ("repne scasb al, byte es:[edi]");
        __asm ("loop 0x8048112");
    } while (1);
    ecx = esi;
    fcn_08048176 ();
    ecx = 0x80481e4;
    fcn_08048176 ();
    __asm ("popal");
    return eax;
}
