/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, 0x80483f0, 0x8048460, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x80483d4 */
#include <stdint.h>
 
int32_t main (void) {
    puts (0x80484c0);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x80482b9 */
#include <stdint.h>
 
int32_t fcn_080482b9 (void) {
    ebx += 0x1d3b;
    eax = *((ebx - 4));
    if (eax != 0) {
        gmon_start_ ();
    }
    fcn_080483b0 ();
    fcn_08048470 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
int32_t fcn_080483b0 (void) {
    eax = *(0x8049f24);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (0x8049f24);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
int32_t fcn_08048470 (void) {
    eax = *(segment.LOAD1);
    if (eax == -1) {
        goto label_0;
    }
    ebx = segment.LOAD1;
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x8048462 */
#include <stdint.h>
 
void fcn_08048462 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x80482b0 */
#include <stdint.h>
 
void fcn_080482b0 (void) {
    return fcn_080482b9 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x80484a5 */
#include <stdint.h>
 
void fcn_080484a5 (void) {
    ebx += 0x1b4f;
    fcn_08048350 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-5/ia32_elf/subject.exe @ 0x8048350 */
#include <stdint.h>
 
int32_t fcn_08048350 (void) {
    if (*(0x804a014) != 0) {
        goto label_0;
    }
    eax = *(0x804a018);
    ebx = 0x8049f20;
    ebx -= 0x8049f1c;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(0x804a018) = eax;
        uint32_t (*eax*4 + 0x8049f1c)() ();
        eax = *(0x804a018);
    } while (eax < ebx);
label_1:
    *(0x804a014) = 1;
label_0:
    return eax;
}
