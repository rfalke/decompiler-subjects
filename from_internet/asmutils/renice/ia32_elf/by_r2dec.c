/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/renice/ia32_elf/subject.exe @ 0x8048067 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    ebx--;
    if (ebx == 0) {
        goto label_0;
    }
    if (esi == 0) {
        goto label_1;
    }
    eax = fcn_080480be ();
    *(0x80480e6) = eax;
    if (esi == 0) {
        goto label_1;
    }
    do {
        eax = fcn_080480be ();
        *(0x80480e2) = eax;
        ebx = 0;
        eax = 0x61;
        eax = sys_setpriority (ebx, 0x80480e2, 0x80480e6);
        esi = 0x61;
    } while (esi != 0);
    ebx = 0;
    do {
        eax = 1;
        eax = sys_exit (ebx);
label_0:
        edx = 0x1b;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804c, 0x1b);
label_1:
        ebx = 1;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/renice/ia32_elf/subject.exe @ 0x80480be */
#include <stdint.h>
 
int32_t fcn_080480be (void) {
    eax = 0;
    ebx = 0;
    if (*(esi) != 0x2d) {
        goto label_0;
    }
    al = *(esi);
    esi++;
    do {
label_0:
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_1;
        }
        al -= 0x30;
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_1:
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    if (*(esi) != 0x2d) {
        return eax;
    }
    eax = -eax;
    return eax;
}
