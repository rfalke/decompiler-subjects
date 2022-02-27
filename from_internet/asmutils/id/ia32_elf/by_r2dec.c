/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/id/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int16_t entry0 (void) {
    eax = 0x18;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    ebx = 0x3d646975;
    fcn_080480d4 ();
    eax = 0x2f;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    bl = 0x67;
    fcn_080480d4 ();
    void (*0x8048083)() ();
    cl = 0xa;
    edx = 1;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0xe, 0x1);
    ebx = 0;
    eax = 1;
    eax = sys_exit (ebx);
    ebx = 0x40;
    eax = 0x50;
    eax = sys_getgroups16 (0x40, 0x8048127);
    dl = 7;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, 0x8048120, edx);
    esi = 0x8048127;
    ebp |= ebp;
    if (ebp == 0) {
        goto label_0;
    }
    do {
        edi = 0x80481a7;
        ax = *(esi);
        esi++;
        esi++;
        fcn_08048108 ();
        ebp--;
        ebp |= ebp;
        if (ebp != 0) {
            al = 0x2c;
            *(es:edi) = al;
            es:edi++;
        }
        edx -= ecx;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, ecx, 0xed);
        ebp |= ebp;
    } while (ebp != 0);
label_0:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/id/ia32_elf/subject.exe @ 0x80480d4 */
#include <stdint.h>
 
int8_t fcn_080480d4 (void) {
    __asm ("pushal");
    if (eax >= 0) {
        edi = 0x80481a7;
        fcn_08048108 ();
        al = 9;
        *(es:edi) = al;
        es:edi++;
        dl = 4;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xe, edx);
        ebx = 4;
        esi = 4;
        edx -= ecx;
        ebx = 1;
        eax = 4;
        eax = sys_write (0x1, 0xe, 0xed);
    }
    __asm ("popal");
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/id/ia32_elf/subject.exe @ 0x8048108 */
#include <stdint.h>
 
uint32_t fcn_08048108 (void) {
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
        __asm ("loop 0x804811b");
    } while (1);
    return eax;
}
