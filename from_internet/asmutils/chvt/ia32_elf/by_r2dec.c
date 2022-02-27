/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chvt/ia32_elf/subject.exe @ 0x804808e */
#include <stdint.h>
 
uint32_t entry0 (void) {
    do {
label_0:
        ebx = 1;
        eax = 1;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        ebx = 0x8048105;
        fcn_08048068 ();
        if (? == ?) {
            goto label_2;
        }
        ebx = 0x804810f;
        al = fcn_08048068 ();
    } while (? != ?);
label_2:
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 5)) != 0x74766863) {
        goto label_3;
    }
    if (edi != 2) {
        goto label_0;
    }
    esi |= esi;
    if (esi == 0) {
        goto label_4;
    }
    eax = fcn_0804804c ();
    eax = 0x36;
    eax = sys_ioctl (0xeb, 0x5606, 0xea);
    eax = 0x36;
    eax = sys_ioctl (ebx, 0x5607, edx);
    do {
label_4:
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
label_3:
        eax = 0;
        edi--;
        if (edi == 0) {
            goto label_5;
        }
label_1:
        esi = 1;
        esi |= esi;
    } while (esi == 0);
    eax = fcn_0804804c ();
label_5:
    eax = 0x36;
    eax = sys_ioctl (0xeb, 0x5608, 0xea);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chvt/ia32_elf/subject.exe @ 0x8048068 */
#include <stdint.h>
 
int32_t fcn_08048068 (void) {
    ecx = 0;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        void (*0x8048086)() ();
    }
    edx = esp - 0x10;
    eax = 0x36;
    eax = sys_ioctl (0xea, 0x4b33, edx);
    eax |= eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chvt/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t fcn_0804804c (void) {
    eax = 0;
    ebx = 0xa;
    ecx = 0;
    do {
        cl = *(esi);
        cl -= 0x30;
        if (cl < 0) {
            goto label_0;
        }
        if (cl > 9) {
            goto label_0;
        }
        dx:ax = ax * bx;
        eax += ecx;
        esi++;
    } while (1);
label_0:
    return eax;
}
