/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/proxy/ia32_elf/subject.exe @ 0x804805c */
#include <stdint.h>
 
uint32_t rotate_right32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t entry0 (void) {
    if (ebp == 4) {
        fcn_080480e5 ();
        edi = ebx;
        void (*0x80480d1)() ();
        *(0x8048211) = edx;
        fcn_080480e5 ();
        tmp_0 = bl;
        bl = bh;
        bh = tmp_0;
        ebx <<= 0x10;
        bl = 2;
        *(0x804820d) = ebx;
        ebx = edi;
        tmp_1 = bl;
        bl = bh;
        bh = tmp_1;
        ebx <<= 0x10;
        bl = 2;
        *(0x80481fd) = ebx;
        ebx = 1;
        eax = 0x66;
        eax = sys_socketcall (0x1, 0xe);
        ebx = 0xe;
        eax = 0x66;
        eax = sys_socketcall (0xe, 0xe);
        goto label_4;
    }
label_0:
    ebx = 1;
label_1:
    eax = 1;
    eax = sys_exit (0x1);
    edx = 0;
    ecx = 4;
    do {
        fcn_080480e5 ();
        dl = bl;
        edx = rotate_right32 (edx, 8);
        __asm ("loop 0x80480d8");
    } while (1);
    return;
label_4:
    ebx = 2;
    eax = 0x66;
    eax = sys_socketcall (0x2, 0xe);
    eax |= eax;
    if (eax != 0) {
        goto label_0;
    }
    ebx = 4;
    eax = 0x66;
    eax = sys_socketcall (0x4, 0xe);
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
        *(0x804a21d) = 0x10;
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
    } while (eax < 0);
    edi = eax;
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
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    esi = eax;
    ebx = 3;
    eax = 0x66;
    eax = sys_socketcall (0x3, 0xe);
    eax |= eax;
    if (eax != 0) {
        eax = 1;
        eax = sys_exit (ebx);
    }
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax == 0) {
        goto label_5;
    }
    tmp_2 = esi;
    esi = edi;
    edi = tmp_2;
    do {
label_5:
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0xe, 0x804821d, edx);
        if (eax <= 0) {
            goto label_6;
        }
        eax = 4;
        eax = sys_write (0xed, 0x804821d, 0xea);
    } while (1);
label_6:
    ebx = 0xd;
    eax = 0x66;
    eax = sys_socketcall (0xd, 0xe);
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/proxy/ia32_elf/subject.exe @ 0x80480e5 */
#include <stdint.h>
 
int32_t fcn_080480e5 (void) {
    eax = 0;
    ebx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_0;
        }
        if (al > 9) {
            goto label_0;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_0:
    return eax;
}
