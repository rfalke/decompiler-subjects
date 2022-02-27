/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/linux_syscall_int80/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t entry0 (void) {
    /* [01] -r-x section size 34 named .text */
    eax = sys_write (0x1, "Hello, world!\n", 0xe);
    eax = sys_exit (0x0);
}
