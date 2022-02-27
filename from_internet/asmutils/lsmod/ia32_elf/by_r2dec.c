/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/lsmod/ia32_elf/subject.exe @ 0x8048072 */
#include <stdint.h>
 
int32_t entry0 (void) {
    do {
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    if (*((esi - 6)) == 0x736c) {
        goto label_3;
    }
    ebp--;
    if (ebp == 0) {
        goto label_4;
    }
    do {
        eax = 0;
        al = 0x81;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        if (eax < 0) {
            goto label_4;
        }
        ebp--;
    } while (ebp != 0);
    do {
label_4:
        eax = 1;
        eax = sys_exit (0xea);
label_3:
        edx = 0x26;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804804c, 0x26);
        ecx = 0;
        eax = 5;
        eax = sys_open (0x804810e, ecx, edx);
        if (eax < 0) {
            goto label_5;
        }
        edx = 0;
        dh = 0x20;
        eax = 3;
        eax = sys_read (0xea, 0x8048120, edx);
label_2:
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, 0xea);
label_0:
    } while (1);
label_5:
    edi = 0x804811c;
    esi = 0x2000;
    edx = 0x8048120;
    ecx = 1;
    ebx = 0;
    eax = 0;
    al = 0xa7;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    if (eax < 0) {
        goto label_0;
    }
    ecx = *(0x804811c);
    esi = edx;
    do {
label_1:
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    *((esi - 1)) = 0xa;
    __asm ("loop 0x80480fb");
    goto label_1;
    esi -= edx;
    ecx = edx;
    edx = esi;
    goto label_2;
}
