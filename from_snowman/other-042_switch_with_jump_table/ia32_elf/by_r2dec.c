/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-042_switch_with_jump_table/ia32_elf/subject.exe @ 0x80480d8 */
#include <stdint.h>
 
void entry0 (void) {
    /* [02] -r-x section size 10060 named .text */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-042_switch_with_jump_table/ia32_elf/subject.exe @ 0x80480dd */
#include <stdint.h>
 
int32_t do_switch_int_ (uint32_t arg_8h) {
    /* do_switch(int) */
    if (*((ebp + 8)) <= 0x3e7) {
        eax = *((ebp + 8));
        eax <<= 2;
        eax += 0x804b6ec;
        eax = *(eax);
        void (*eax)() ();
    }
    eax = "many";
    return eax;
}
