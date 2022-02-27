/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/chroot/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
int32_t entry0 (int32_t arg_4h) {
    ebp--;
    if (ebp != 0) {
        eax = 0x3d;
        eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
        eax |= eax;
        if (eax < 0) {
            goto label_0;
        }
        ebx = *(esp);
        ebx |= ebx;
        if (ebx == 0) {
        }
        edx = esp + ebp*4 + 4;
        eax = 0xb;
        eax = sys_execve (0x8048079, 0xe, edx, esi);
    }
label_0:
    eax = 1;
    eax = sys_exit (0xea);
    __asm ("das");
    __asm ("bound ebp, qword [ecx + 0x6e]");
    __asm ("das");
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x80480e8)() ();
}
