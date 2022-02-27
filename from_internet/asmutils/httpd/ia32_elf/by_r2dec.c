/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/httpd/ia32_elf/subject.exe @ 0x804805a */
#include <stdint.h>
 
int32_t entry0 (void) {
    if (ebp < 3) {
        goto label_0;
    }
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_4;
        }
        if (al > 9) {
            goto label_4;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_4:
    tmp_0 = bl;
    bl = bh;
    bh = tmp_0;
    ebx <<= 0x10;
    bl = 2;
    *(0x8048414) = ebx;
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax < 0) {
        goto label_0;
    }
    tmp_1 = eax;
    eax = ebp;
    ebp = tmp_1;
    ebx = 0xe;
    eax = 0x66;
    eax = sys_socketcall (0xe, 0xe);
    eax |= eax;
    while (eax != 0) {
label_0:
        ebx = 1;
label_1:
        eax = 1;
        eax = sys_exit (0x1);
        ebx = 2;
        eax = 0x66;
        eax = sys_socketcall (0x2, 0xe);
        eax |= eax;
    }
    ebx = 4;
    eax = 0x66;
    eax = sys_socketcall (0x4, 0xe);
    eax |= eax;
    if (eax != 0) {
        goto label_0;
    }
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax == 0) {
        goto label_2;
    }
label_3:
    ebx = 0;
    goto label_1;
    do {
label_2:
        *(0x8048311) = 0x10;
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
    } while (eax < 0);
    tmp_2 = eax;
    eax = edi;
    edi = tmp_2;
    esi = 0;
    edx = 1;
    ecx = 0;
    eax = 0x72;
    eax = sys_wait4 (0xffffffff, ecx, 0x1, esi);
    eax = 0x72;
    eax = sys_wait4 (ebx, ecx, edx, esi);
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax != 0) {
        eax = 6;
        eax = sys_close (0xed);
        goto label_2;
    }
    eax = 3;
    eax = sys_read (0xed, 0x8049434, 0xfff);
    if (eax < 7) {
        goto label_5;
    }
    ebx = 0x8048424;
    ecx = *(0x8048410);
    edx = *(0x8048410);
    do {
        al = *(ecx);
        *(ebx) = al;
        ebx++;
        ecx++;
    } while (*(ecx) != 0);
    ecx -= edx;
    ecx += eax;
    if (ecx > 0xfff) {
        goto label_5;
    }
    ecx = 0x8049438;
    do {
        if (*((ebx - 2)) == 0x2e2e) {
            goto label_5;
        }
        dl = *(ecx);
        if (dl == 0x20) {
            goto label_6;
        }
        *(ebx) = dl;
        dl |= dl;
        if (dl == 0) {
            goto label_6;
        }
        if (dl < 0x20) {
            goto label_5;
        }
        if (dl == 0x20) {
            goto label_6;
        }
        if (dl == 0x3f) {
            goto label_6;
        }
        if (dl == 0xd) {
            goto label_6;
        }
        if (dl == 0xa) {
            goto label_6;
        }
        ebx++;
        ecx++;
    } while (1);
label_6:
    *(ebx) = 0;
    if (*((ebx - 1)) == 0x2f) {
        eax = 0x804804c;
        *(fp_stack--) = fp_stack[?];
        ? = fp_stack[0];
        fp_stack--;
    }
    ecx = 0;
    eax = 5;
    eax = sys_open (0x8048424, ecx, edx);
    if (eax >= 0) {
        ebx = eax;
        esi = eax;
        ecx = 0x8049434;
        esi = 0xffffffff;
        edx = esp;
        ecx = eax;
        ebx = edi;
        eax = 0;
        al = 0xbb;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax = 6;
        eax = sys_close (0xec);
    }
label_5:
    goto label_3;
}
