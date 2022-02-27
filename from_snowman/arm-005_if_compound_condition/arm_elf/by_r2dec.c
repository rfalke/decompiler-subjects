/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x829c */
#include <stdint.h>
 
void entry0 (int32_t argc) {
    r1 = argc;
    /* [12] -r-x section size 544 named .text */
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
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x8278 */
#include <stdint.h>
 
void libc_start_main () {
    pc = *((ip += 0x354));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x82d8 */
#include <stdint.h>
 
void call_weak_fn () {
    r3 = *(0x82f0);
    r2 = *(0x82f4);
    r3 = pc + r3;
    r2 = *(0x82f0);
    if (r2 != 0) {
        return;
    }
    return void (*0x8284)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x82fc */
#include <stdint.h>
 
void deregister_tm_clones () {
    r3 = *(0x8324);
    r0 = 0x105ec;
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
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x832c */
#include <stdint.h>
 
void register_tm_clones (int32_t arg2) {
    r1 = arg2;
    r3 = 0x105ec;
    r0 = 0x105ec;
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
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x8364 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r4 = 0x105ec;
    r3 = *(r4);
    deregister_tm_clones ();
    r3 = 1;
    *(r4) = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x838c */
#include <stdint.h>
 
void entry_init0 (int32_t arg2) {
    r1 = arg2;
    r0 = 0x104dc;
    r3 = .comment;
    while (r3 == 0) {
label_0:
        void (*0x832c)() ();
    }
    uint32_t (*r3)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x84b8 */
#include <stdint.h>
 
void libc_csu_fini () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x83d8 */
#include <stdint.h>
 
void h () {
    *((sp -= 4)) = fp;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x84bc */
#include <stdint.h>
 
void fini () {
    /* [13] -r-x section size 8 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x83ec */
#include <stdint.h>
 
void f (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r3 = *((fp - 8));
    if (r3 != 0) {
        r3 = *((fp - 0xc));
        if (r3 != 0) {
            r3 = *((fp - 0x10));
            if (r3 == 0) {
                goto label_0;
            }
            g ();
        }
    } else {
label_0:
        h ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x8458 */
#include <stdint.h>
 
void libc_csu_init (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r6 = r0;
    r5 = *(0x84ac);
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
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x8258 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 12 named .init */
    call_weak_fn ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x83c4 */
#include <stdint.h>
 
void g () {
    *((sp -= 4)) = fp;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x843c */
#include <stdint.h>
 
int32_t main () {
    *((sp -= 4)) = fp;
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x8290 */
#include <stdint.h>
 
void abort () {
    pc = *((ip += 0x344));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-005_if_compound_condition/arm_elf/subject.exe @ 0x8264 */
#include <stdint.h>
 
void _plt () {
    /* [11] -r-x section size 56 named .plt */
    lr = *(0x8270);
    lr = pc + lr;
    pc = *(0x8278);
}
