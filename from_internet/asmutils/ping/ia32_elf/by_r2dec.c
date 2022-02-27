/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/ping/ia32_elf/subject.exe @ 0x804805f */
#include <stdint.h>
 
int32_t entry0 (void) {
    ebx--;
    if (ebx == 0) {
        goto label_1;
    }
    edi = 0x804814a;
    void (*0x804811e)() ();
    *(edi) = 2;
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    ebx = 0xb;
    eax = 0x66;
    eax = sys_socketcall (0xb, 0xe);
    if (eax < 0) {
        goto label_1;
    }
    *(0x8048140) = 5;
    do {
        __asm ("bts dword [0x8048148], ebp");
        ebp++;
        edi = 0x8048140;
        esi = 0;
        edx = 0;
        ecx = 0x8048148;
        ebx = ebp;
        eax = 0;
        al = 0x8e;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax |= eax;
        if (eax == 0) {
            goto label_1;
        }
        ebp--;
        edi = 0x804815a;
        ebx = 0xc;
        eax = 0x66;
        eax = sys_socketcall (0xc, 0xe);
    } while (*((edi + 0x14)) != 0);
    edx = 2;
    ecx = esp;
    ebx = 1;
    eax = 0;
    al = 0x92;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
label_1:
    eax = 1;
    eax = sys_exit (0xea);
    eax = 0;
    edx = 0;
    ecx = 0;
label_0:
    ebx = 0;
    do {
        al = *((esi + edx));
        edx++;
        al -= 0x30;
        if (al < 0) {
            goto label_2;
        }
        ebx *= 0xa;
        ebx += eax;
    } while (1);
label_2:
    *((edi + ecx + 4)) = bl;
    ecx++;
    if (ecx != 4) {
        goto label_0;
    }
    return eax;
}
