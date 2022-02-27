/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/linux_syscall_syscall/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t entry0 (void) {
    /* [01] -r-x section size 39 named .text */
    edx = 0xe;
    rsi = "Hello, world!\n";
    edi = 1;
    eax = 1;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    eax = 0x3c;
    edi = 0;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
}
