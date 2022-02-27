/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/sync/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void entry0 (void) {
    eax = 0x24;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    ebx = eax;
    eax = 1;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
}
