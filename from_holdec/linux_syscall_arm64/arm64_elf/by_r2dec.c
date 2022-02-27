/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/linux_syscall_arm64/arm64_elf/subject.exe @ 0x1ec */
#include <stdint.h>
 
void entry0 () {
    /* [05] -r-x section size 36 named .text */
    x0 = 0x1;
    x1 = "Hello, world!\n";
    x2 = 0xe;
    x8 = 0x40;
    __asm ("svc 0");
    x0 = 0x0;
    x8 = 0x5d;
    __asm ("svc 0");
    /* [06] -r-- section size 15 named .rodata */
    __asm ("ldnp d8, d25, [x10, -0x140]");
}
