/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x82cc */
#include <stdint.h>
 
void entry0 (int32_t argc) {
    r1 = argc;
    /* [12] -r-x section size 1104 named .text */
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
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x82a8 */
#include <stdint.h>
 
void libc_start_main () {
    pc = *((ip += 0x588));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8308 */
#include <stdint.h>
 
void call_weak_fn () {
    r3 = *(0x8320);
    r2 = *(0x8324);
    r3 = pc + r3;
    r2 = *(0x8320);
    if (r2 != 0) {
        return;
    }
    return void (*0x82b4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x832c */
#include <stdint.h>
 
void deregister_tm_clones () {
    r3 = *(0x8354);
    r0 = 0x10850;
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
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x835c */
#include <stdint.h>
 
void register_tm_clones (int32_t arg2) {
    r1 = arg2;
    r3 = 0x10850;
    r0 = 0x10850;
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
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8394 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r4 = 0x10850;
    r3 = *(r4);
    deregister_tm_clones ();
    r3 = 1;
    *(r4) = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x83bc */
#include <stdint.h>
 
void entry_init0 (int32_t arg2) {
    r1 = arg2;
    r0 = 0x1073c;
    r3 = .comment;
    while (r3 == 0) {
label_0:
        void (*0x835c)() ();
    }
    uint32_t (*r3)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8718 */
#include <stdint.h>
 
void libc_csu_fini () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x871c */
#include <stdint.h>
 
void fini () {
    /* [13] -r-x section size 8 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8688 */
#include <stdint.h>
 
void aeabi_idivmod (uint32_t arg1, uint32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    do {
        if (r0 <= 0) {
            r0 = ~0x80000000;
        }
        if (r0 >= 0) {
            r0 = 0x80000000;
        }
        void (*0x86a8)() ();
    } while (r1 == 0);
    loc_divsi3_skip_div0_test (r0, r1);
    r3 = r2 * r0;
    r1 -= r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8470 */
#include <stdint.h>
 
uint32_t loc_divsi3_skip_div0_test (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    __asm ("rsbmi r1, r1, 0");
    r2 = r1 - 1;
    if (r2 != r1) {
        r3 = r0;
        __asm ("rsbmi r3, r0, 0");
        if (r3 < r1) {
            goto label_0;
        }
        if ((r1 & r2) == 0) {
            goto label_1;
        }
        r2 &= r3;
        r0 &= r1;
        r2 = r0 - r2;
        r2 = 0x1f - r2;
        if ((r1 & r2) == 0) {
            r2 += (r2 << 1);
        }
        r0 = 0;
        if ((r1 & r2) == 0) {
            pc += (r2 << 2);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 31);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 30);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 29);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 28);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 27);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 26);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 25);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 24);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 23);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 22);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 21);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 20);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 19);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 18);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 17);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 16);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 15);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 14);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 13);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 12);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 11);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 10);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 9);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 8);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 7);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 6);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 5);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 4);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 3);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 2);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= (r1 << 1);
        }
        __asm ("adc r0, r0, r0");
        if (r3 < r1) {
            r3 -= r1;
        }
        __asm ("rsbmi r0, r0, 0");
        return r0;
    }
    __asm ("teq ip, r0");
    __asm ("rsbmi r0, r0, 0");
    return r0;
    if (ip >= 0) {
label_0:
        r0 = 0;
    }
    __asm ("asreq r0, ip, 0x1f");
    if (ip != 0) {
        r0 |= 1;
    }
    return r0;
label_1:
    r2 &= r1;
    r2 = 0x1f - r2;
    r0 = r3 >> r2;
    __asm ("rsbmi r0, r0, 0");
    return r0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x829c */
#include <stdint.h>
 
void raise () {
    pc = *((ip += 0x590));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x86a8 */
#include <stdint.h>
 
void aeabi_ldiv0 () {
    r0 = 8;
    raise (r0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8468 */
#include <stdint.h>
 
void divsi3 (int32_t arg1, uint32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x8678)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x86b8 */
#include <stdint.h>
 
void libc_csu_init (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r6 = r0;
    r5 = *(0x870c);
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
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x827c */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 12 named .init */
    call_weak_fn ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x844c */
#include <stdint.h>
 
int32_t main () {
    *((sp -= 4)) = fp;
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x83f4 */
#include <stdint.h>
 
void gcd (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 0xc));
    if (r3 == 0) {
        r3 = *((fp - 8));
    } else {
        r3 = *((fp - 8));
        r0 = r3;
        r1 = *((fp - 0xc));
        aeabi_idivmod ();
        r3 = r1;
        r0 = *((fp - 0xc));
        r1 = r3;
        r0 = gcd ();
        r3 = r0;
    }
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x82c0 */
#include <stdint.h>
 
void abort () {
    pc = *((ip += 0x578));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-002_gcd/arm_elf/subject.exe @ 0x8288 */
#include <stdint.h>
 
void _plt () {
    /* [11] -r-x section size 68 named .plt */
    lr = *(0x8294);
    lr = pc + lr;
    pc = *(0x829c);
}
