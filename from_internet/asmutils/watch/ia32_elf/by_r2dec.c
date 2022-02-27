/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/watch/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    eax |= eax;
    if (eax == 0) {
        goto label_1;
    }
    tmp_0 = eax;
    eax = ebp;
    ebp = tmp_0;
    edx = 4;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x804813e, 0x4);
    tmp_1 = ebx;
    ebx = ebp;
    ebp = tmp_1;
    if (*(ebx) == 0x6e2d) {
        goto label_2;
    }
    if (*(ebx) == 0x6e692d2d) {
        goto label_3;
    }
label_0:
    ecx = esp;
    esi = esp;
    do {
        eax = *(esi);
        esi += 4;
        eax |= eax;
    } while (eax != 0);
    do {
        edx = esi;
        ecx = esi;
        ebx = esi;
        eax = 2;
        eax = sys_fork (ebx);
        if (eax == 0) {
            eax = 0xb;
            eax = sys_execve (ebx, ecx, edx, esi);
            goto label_4;
        }
        esi = 0;
        edx = 0;
        ecx = 0;
        eax = 0x72;
        eax = sys_wait4 (0xffffffff, ecx, edx, esi);
        edi = esp;
        esi = esp;
        ecx = esp;
        ebx = esi;
        eax = 0;
        al = 0xa2;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        edx = 4;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0x804813e, 0x4);
    } while (1);
label_2:
    esi = 4;
    al = void (*0x804812b)() ();
    goto label_0;
label_3:
    tmp_2 = esi;
    esi = ebx;
    ebx = tmp_2;
    do {
        al = *(esi);
        esi++;
        al |= al;
        if (al == 0) {
            goto label_4;
        }
    } while (al != 0x3d);
    void (*0x804812b)() ();
    goto label_0;
label_1:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048142, 0xbc);
    goto label_5;
label_4:
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x80481fe, 0x12);
label_5:
    ebx = 0;
    bl = 0xff;
    eax = 1;
    eax = sys_exit (ebx);
    eax = 0;
    ebp = 0;
    do {
        al = *(esi);
        esi++;
        if (al == 0) {
            goto label_6;
        }
        al -= 0x30;
        ebp *= 0xa;
        ebp += eax;
    } while (1);
label_6:
}
