/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chmod/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
uint32_t entry0 (void) {
    if (ebx < 3) {
        goto label_0;
    }
    eax = void (*0x8048073)() ();
    if (eax == -1) {
        goto label_0;
    }
    do {
        ebx |= ebx;
        if (ebx == 0) {
            goto label_0;
        }
        eax = 0xf;
        eax = sys_chmod (ebx, 0xea);
    } while (1);
label_0:
    eax = 1;
    eax = sys_exit (0xea);
    edx = esi;
    ecx = 0;
    eax = 0;
    ebx = 8;
    do {
        cl = *(esi);
        cl |= cl;
        if (cl == 0) {
            goto label_1;
        }
        cl -= 0x30;
        if (cl < 0) {
            goto label_2;
        }
        if (cl > 7) {
            goto label_2;
        }
        dx:ax = ax * bx;
        eax += ecx;
        esi++;
    } while (1);
label_1:
    if (edx == esi) {
label_2:
        eax = 0;
        eax--;
    }
    ebx = 8;
    ecx = 8;
    edx = 8;
    esi = 8;
    edi = 8;
    return eax;
}
