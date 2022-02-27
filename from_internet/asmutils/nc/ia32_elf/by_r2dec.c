/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nc/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    ebp = 0;
    edi = 1;
    ebx = 1;
    ebx = 1;
    esi = 1;
    if (esi == 0) {
        goto label_0;
    }
    ebx = 0x804816c;
    *(ebx) = 2;
    if (*(esi) == 0x6c2d) {
        void (*0x804813d)() ();
        eax = fcn_08048157 ();
        *((ebx + 2)) = dh;
        *((ebx + 3)) = dl;
        esi = eax;
        ebx = 2;
        eax = 0x66;
        eax = sys_socketcall (0x2, 0xe);
        if (eax < 0) {
            goto label_1;
        }
        ebx = 4;
        eax = 0x66;
        eax = sys_socketcall (0x4, 0xe);
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
        if (esi == 0) {
            goto label_0;
        }
    }
    eax = void (*0x804813d)() ();
    edi = eax;
    ebx = 0x8048170;
    ecx = 4;
    do {
        fcn_08048157 ();
        *(ebx) = dl;
        ebx++;
        __asm ("loop 0x80480e4");
    } while (1);
    fcn_08048157 ();
    *((ebx - 6)) = dh;
    *((ebx - 5)) = dl;
    ebx = 3;
    eax = 0x66;
    eax = sys_socketcall (0x3, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    do {
label_0:
        esi = 0x804817c;
        edx = 0;
        dh = 4;
        eax = 3;
        eax = sys_read (0xeb, 0xe, edx);
        if (eax < 0) {
            goto label_1;
        }
        if (eax == 0) {
            goto label_1;
        }
        eax = 4;
        eax = sys_write (0xed, 0xe, 0xea);
    } while (1);
    do {
label_1:
        eax = 1;
        eax = sys_exit (ebx);
        ebx = 1;
        eax = 0x66;
        eax = sys_socketcall (0x1, 0xe);
    } while (eax < 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/nc/ia32_elf/subject.exe @ 0x8048157 */
#include <stdint.h>
 
int32_t fcn_08048157 (void) {
    eax = 0;
    edx = 0;
    do {
        al = *(esi);
        esi++;
        al -= 0x30;
        if (al < 0) {
            goto label_0;
        }
        edx += edx;
        edx *= 5;
        edx += eax;
    } while (1);
label_0:
    return eax;
}
