/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/m_inetd/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    if (eax < 4) {
        goto label_0;
    }
    if (eax > 5) {
        goto label_0;
    }
    if (eax >= 5) {
        *(0x80492a1) = al;
        *(0x8049299) = 0x8049271;
    }
    eax = fcn_08048236 ();
    *(0x8049291) = eax;
    eax = fcn_08048236 ();
    ebx = 1;
    eax = 0x66;
    eax = sys_socketcall (0x1, 0xe);
    tmp_0 = eax;
    eax = ebp;
    ebp = tmp_0;
    if (ebp < 0) {
        goto label_0;
    }
    ebx = 0xe;
    eax = 0x66;
    eax = sys_socketcall (0xe, 0xe);
    eax |= eax;
    while (eax != 0) {
label_0:
        bl = 1;
label_1:
        eax = 1;
        eax = sys_exit (ebx);
        eax = 1;
        *(0x8049261) = 2;
        *(0x8049263) = ah;
        *(0x8049264) = al;
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
    edi = 0x8048261;
    *(0x8049295) = esi;
    fcn_08048253 ();
    eax = 0x17;
    eax = sys_setuid16 (0x8049291);
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax == 0) {
        goto label_3;
    }
    if (eax < 0) {
        goto label_0;
    }
    edi = 0x8049271;
    fcn_0804821e ();
    *(edi) = 0xa;
    edx -= ecx;
    edx++;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, 0xed);
    bl = 0;
    goto label_1;
label_2:
    eax = 6;
    eax = sys_close (0x8049291);
    esi = 0;
    edx = 1;
    ecx = 0;
    eax = 0x72;
    eax = sys_wait4 (0xffffffff, ecx, 0x1, esi);
    eax = 0x72;
    eax = sys_wait4 (ebx, ecx, edx, esi);
    do {
label_3:
        eax = 0x10;
        *(0x8049291) = eax;
        ebx = 5;
        eax = 0x66;
        eax = sys_socketcall (0x5, 0xe);
    } while (eax < 0);
    *(0x8049291) = eax;
    eax = 2;
    eax = sys_fork (ebx);
    eax |= eax;
    if (eax != 0) {
        goto label_2;
    }
    eax = 6;
    eax = sys_close (0xeb);
    eax = 0;
    if (*(0x80492a1) == 0) {
        goto label_4;
    }
    edi = 0x8049271;
    ebx = 0x8049285;
    do {
        al = *(ebx);
        ebx++;
        fcn_0804821e ();
        *(edi) = 0x2e;
        edi++;
        ebp--;
    } while (ebp != 0);
    edi--;
    *(edi) = 0;
label_4:
    ecx = 0;
    eax = 0x3f;
    eax = sys_dup2 (0x8049291, ecx);
    ecx = 1;
    eax = 0x3f;
    eax = sys_dup2 (0xea, 0x1);
    eax = 0xb;
    eax = sys_execve (0x8048261, 0x8049295, 0x804825d, esi);
    edx = 0xc;
    ebx = 2;
    eax = 4;
    eax = sys_write (0x2, 0x8048212, 0xc);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/m_inetd/ia32_elf/subject.exe @ 0x8048236 */
#include <stdint.h>
 
int32_t fcn_08048236 (void) {
    eax = 0;
    ebx = 0;
    ecx = 0xa;
    do {
        bl = *(ebp);
        ebp++;
        bl -= 0x30;
        if (bl < 0) {
            goto label_0;
        }
        if (bl > 9) {
            goto label_0;
        }
        edx:eax = eax * ecx;
        eax += ebx;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/m_inetd/ia32_elf/subject.exe @ 0x8048253 */
#include <stdint.h>
 
int8_t fcn_08048253 (void) {
    do {
        *(es:edi) = al;
        es:edi++;
        al = *(esi);
        esi++;
        al |= al;
    } while (al != 0);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/m_inetd/ia32_elf/subject.exe @ 0x804821e */
#include <stdint.h>
 
uint32_t fcn_0804821e (void) {
    ecx = 0;
    ebx = ecx;
    bl = 0xa;
    do {
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl += 0x30;
        ecx++;
    } while (eax != 0);
    do {
        eax = edx;
        *(es:edi) = al;
        es:edi++;
        __asm ("loop 0x8048231");
    } while (1);
    return eax;
}
