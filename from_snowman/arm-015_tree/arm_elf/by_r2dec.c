/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8330 */
#include <stdint.h>
 
void entry0 (int32_t argc) {
    r1 = argc;
    /* [12] -r-x section size 836 named .text */
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
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8300 */
#include <stdint.h>
 
void libc_start_main () {
    pc = *((ip += 0x490));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x836c */
#include <stdint.h>
 
void call_weak_fn () {
    r3 = *(0x8384);
    r2 = *(0x8388);
    r3 = pc + r3;
    r2 = *(0x8384);
    if (r2 != 0) {
        return;
    }
    return void (*0x830c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8390 */
#include <stdint.h>
 
void deregister_tm_clones () {
    r3 = *(0x83b8);
    r0 = 0x107b4;
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
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x83c0 */
#include <stdint.h>
 
void register_tm_clones (int32_t arg2) {
    r1 = arg2;
    r3 = 0x107b4;
    r0 = 0x107b4;
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
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x83f8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r4 = 0x107b4;
    r3 = *(r4);
    deregister_tm_clones ();
    r3 = 1;
    *(r4) = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8420 */
#include <stdint.h>
 
void entry_init0 (int32_t arg2) {
    r1 = arg2;
    r0 = 0x10698;
    r3 = .comment;
    while (r3 == 0) {
label_0:
        void (*0x83c0)() ();
    }
    uint32_t (*r3)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8670 */
#include <stdint.h>
 
void libc_csu_fini () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8500 */
#include <stdint.h>
 
void printout (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *((r3 + 8));
    if (r3 != 0) {
        r3 = *((fp - 8));
        r3 = *((r3 + 8));
        r0 = r3;
        printout ();
    }
    r3 = *((fp - 8));
    r3 = *(r3);
    r1 = r3;
    printf (r0, r1, r2, r3);
    r3 = *((fp - 8));
    r3 = *((r3 + 4));
    if (r3 != 0) {
        r3 = *((fp - 8));
        r3 = *((r3 + 4));
        r0 = r3;
        printout ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8674 */
#include <stdint.h>
 
void fini () {
    /* [13] -r-x section size 8 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8610 */
#include <stdint.h>
 
void libc_csu_init (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r6 = r0;
    r5 = *(0x8664);
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
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x82c8 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 12 named .init */
    call_weak_fn ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8570 */
#include <stdint.h>
 
int32_t main () {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r3 = 0;
    *((fp - 0x10)) = r3;
    r3 = 1;
    *((fp - 8)) = r3;
    while (r3 <= 0xa) {
        r0 = 0xc;
        r0 = malloc (r0);
        r3 = r0;
        *((fp - 0xc)) = r3;
        r3 = *((fp - 0xc));
        r2 = 0;
        *((r3 + 4)) = r2;
        r3 = *((fp - 0xc));
        r2 = *((r3 + 4));
        r3 = *((fp - 0xc));
        *((r3 + 8)) = r2;
        r0 = rand ();
        r2 = r0;
        r3 = *((fp - 0xc));
        *(r3) = r2;
        r3 = fp - 0x10;
        r0 = r3;
        r1 = *((fp - 0xc));
        insert ();
        r3 = *((fp - 8));
        r3++;
        *((fp - 8)) = r3;
        r3 = *((fp - 8));
    }
    r3 = *((fp - 0x10));
    r0 = r3;
    printout ();
    r3 = 0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8458 */
#include <stdint.h>
 
void insert (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 8));
    r3 = *(r3);
    if (r3 == 0) {
        r3 = *((fp - 8));
        r2 = *((fp - 0xc));
        *(r3) = r2;
    } else {
        r3 = *((fp - 0xc));
        r2 = *(r3);
        r3 = *((fp - 8));
        r3 = *(r3);
        r3 = *(r3);
        if (r2 < r3) {
            r3 = *((fp - 8));
            r3 = *(r3);
            r3 += 8;
            r0 = r3;
            r1 = *((fp - 0xc));
            insert ();
        } else {
            r3 = *((fp - 0xc));
            r2 = *(r3);
            r3 = *((fp - 8));
            r3 = *(r3);
            r3 = *(r3);
            if (r2 <= r3) {
                goto label_0;
            }
            r3 = *((fp - 8));
            r3 = *(r3);
            r3 += 4;
            r0 = r3;
            r1 = *((fp - 0xc));
            insert ();
        }
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x82e8 */
#include <stdint.h>
 
void printf () {
    pc = *((ip += 0x4a0));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x82f4 */
#include <stdint.h>
 
void malloc () {
    pc = *((ip += 0x498));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8318 */
#include <stdint.h>
 
void rand () {
    pc = *((ip += 0x480));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x8324 */
#include <stdint.h>
 
void abort () {
    pc = *((ip += 0x478));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-015_tree/arm_elf/subject.exe @ 0x82d4 */
#include <stdint.h>
 
void _plt () {
    /* [11] -r-x section size 92 named .plt */
    lr = *(0x82e0);
    lr = pc + lr;
    pc = *(0x82e8);
}
