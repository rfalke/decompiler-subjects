/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8350 */
#include <stdint.h>
 
void entry0 (int32_t argc) {
    r1 = argc;
    /* [12] -r-x section size 520 named .text */
    lr = 0;
    r1 = *(sp!);
    r2 = sp;
    __asm ("stmdb sp!, {r2}");
    __asm ("stmdb sp!, {r0}");
    ip = sym.__libc_csu_fini;
    __asm ("stmdb sp!, {ip}");
    r0 = $d;
    r3 = main;
    libc_start_main (r0, r1, r2, r3, r4, r5, r6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8338 */
#include <stdint.h>
 
void libc_start_main () {
    pc = *((ip += 0x34c));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x838c */
#include <stdint.h>
 
void call_weak_fn () {
    r3 = *(0x83a4);
    r2 = *(0x83a8);
    r3 = pc + r3;
    r2 = *(0x83a4);
    if (r2 != 0) {
        return;
    }
    return void (*0x8344)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x83b0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    r3 = *(0x83d8);
    r0 = 0x106a0;
    r3 -= r0;
    if (r3 > 6) {
        return;
    }
    if (r3 != 0) {
        return;
    }
    return uint32_t (*r3)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x83e0 */
#include <stdint.h>
 
void register_tm_clones (int32_t arg2) {
    r1 = arg2;
    r3 = 0x106a0;
    r0 = 0x106a0;
    r1 = r3 - r0;
    r1 >>= 2;
    r1 += (r1 >> 31);
    r1 >>= 1;
    if (? != ?) {
        return;
    }
    if (r3 != 0) {
        return;
    }
    return uint32_t (*r3)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8418 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r4 = 0x106a0;
    r3 = *(r4);
    deregister_tm_clones ();
    r3 = 1;
    *(r4) = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8440 */
#include <stdint.h>
 
void entry_init0 (int32_t arg2) {
    r1 = arg2;
    r0 = 0x10578;
    r3 = .comment;
    while (r3 == 0) {
label_0:
        void (*0x83e0)() ();
    }
    uint32_t (*r3)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8554 */
#include <stdint.h>
 
void libc_csu_fini () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8558 */
#include <stdint.h>
 
void fini () {
    /* [13] -r-x section size 8 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8494 */
#include <stdint.h>
 
void g_bool_ (int32_t arg1) {
    int32_t var_5h;
    int8_t var_sp_5h;
    int32_t var_0h;
    r0 = arg1;
    /* g(bool) */
    *((sp -= 4)) = fp;
    r3 = r0;
    *((fp - 5)) = r3;
    r3 = 0x18894;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8478 */
#include <stdint.h>
 
void f_ () {
    /* f() */
    *((sp -= 4)) = fp;
    r3 = 0xa;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x84f4 */
#include <stdint.h>
 
void libc_csu_init (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r6 = r0;
    r5 = *(0x8548);
    r7 = r1;
    r8 = r2;
    sb = $d;
    r5 = pc + r5;
    init ();
    sb = pc + sb;
    r5 -= sb;
    r5 >>= 2;
    r4 = 0;
    do {
        offset_0 = r4 << 2;
        r3 = *((sb + offset_0));
        r0 = r6;
        r4++;
        r1 = r7;
        r2 = r8;
        uint32_t (*r3)(uint32_t, uint32_t, uint32_t, uint32_t) (r0, r1, r2, r3);
    } while (r4 != r5);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x830c */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 12 named .init */
    call_weak_fn ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x84c0 */
#include <stdint.h>
 
int32_t main () {
    int32_t var_4h;
    r0 = sym ();
    r3 = r0;
    if (r3 == 0) {
        r3 = 1;
    }
    if (r3 != 0) {
        r3 = 0;
    }
    r3 = (int8_t) r3;
    r0 = r3;
    sym ();
    r3 = 0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x832c */
#include <stdint.h>
 
void abort () {
    pc = *((ip += 0x354));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-017_int2bool/arm_elf/subject.exe @ 0x8318 */
#include <stdint.h>
 
void _plt () {
    /* [11] -r-x section size 56 named .plt */
    lr = *(0x8324);
    lr = pc + lr;
    pc = *(0x832c);
}
