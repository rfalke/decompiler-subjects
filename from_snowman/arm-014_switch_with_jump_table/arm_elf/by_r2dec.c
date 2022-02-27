/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x82d0 */
#include <stdint.h>
 
void entry0 (int32_t argc) {
    r1 = argc;
    /* [12] -r-x section size 16480 named .text */
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
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x82ac */
#include <stdint.h>
 
void libc_start_main () {
    pc = *((ip += 0xcc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x830c */
#include <stdint.h>
 
void call_weak_fn () {
    r3 = *(0x8324);
    r2 = "_63";
    r3 = pc + r3;
    r2 = *(0x8324);
    if (r2 != 0) {
        return;
    }
    return void (*0x82b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x8330 */
#include <stdint.h>
 
void deregister_tm_clones () {
    r3 = *(0x8358);
    r0 = 0x15398;
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
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x8360 */
#include <stdint.h>
 
void register_tm_clones (int32_t arg2) {
    r1 = arg2;
    r3 = 0x15398;
    r0 = 0x15398;
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
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x8398 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r4 = 0x15398;
    r3 = *(r4);
    deregister_tm_clones ();
    r3 = 1;
    *(r4) = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x83c0 */
#include <stdint.h>
 
void entry_init0 (int32_t arg2) {
    r1 = arg2;
    r0 = 0x15284;
    r3 = .comment;
    while (r3 == 0) {
label_0:
        void (*0x8360)() ();
    }
    uint32_t (*r3)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0xc32c */
#include <stdint.h>
 
void libc_csu_fini () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0xc330 */
#include <stdint.h>
 
void fini () {
    /* [13] -r-x section size 8 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x83f8 */
#include <stdint.h>
 
void do_switch (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r2 = 0x3e7;
    if (r3 > r2) {
        offset_0 = r3 << 2;
        pc = *((pc + offset_0));
    }
    goto label_0;
    __asm ("strheq sb, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >> 7);
    }
    __asm ("ldrdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >>> 7);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 7);
    }
    __asm ("strdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 << 8);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << r4);
    }
    if (r3 != r2) {
        sb = r0 & (ip << r4);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 8);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> r4);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 8);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 8);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> r4);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> 8);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> r4);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> r4);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << 9);
    }
    if (r3 != r2) {
        r0 = r4 * r4;
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 9);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 9);
    }
    __asm ("strheq sb, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >> 9);
    }
    __asm ("ldrdeq sb, sl, [r0], -r0");
    __asm ("ldrdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >>> 9);
    }
    __asm ("strdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 << 10);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 10);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << r5);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 10);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> r5);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> r5);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 10);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> r5);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> 10);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 10);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> r5);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << 11);
    }
    if (r3 != r2) {
        r0 *= r5;
    }
    if (r3 != r2) {
        r0 = ip * r5;
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 11);
    }
    __asm ("strheq sb, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >> 11);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 11);
    }
    __asm ("ldrdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >>> 11);
    }
    __asm ("strdeq sb, sl, [r0], -r0");
    __asm ("strdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 << 12);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << r6);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 12);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 12);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> r6);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 12);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> r6);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> r6);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> 12);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> r6);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << 13);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 13);
    }
    if (r3 != r2) {
        r0 = r8 * r6;
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 13);
    }
    __asm ("strheq sb, [r0], -r0");
    __asm ("strheq sb, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >> 13);
    }
    __asm ("ldrdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >>> 13);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 13);
    }
    __asm ("strdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 << 14);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << r7);
    }
    if (r3 != r2) {
        sb = r0 & (ip << r7);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 14);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> r7);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 14);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 14);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> r7);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> 14);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> r7);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> r7);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << 15);
    }
    if (r3 != r2) {
        r0 = r4 * r7;
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 15);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 15);
    }
    __asm ("strheq sb, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >> 15);
    }
    __asm ("ldrdeq sb, sl, [r0], -r0");
    __asm ("ldrdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >>> 15);
    }
    __asm ("strdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 << 16);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 16);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << r8);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 16);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> r8);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> r8);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 16);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> r8);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> 16);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 16);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> r8);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << 17);
    }
    if (r3 != r2) {
        r0 *= r8;
    }
    if (r3 != r2) {
        r0 = ip * r8;
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 17);
    }
    __asm ("strheq sb, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >> 17);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 17);
    }
    __asm ("ldrdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >>> 17);
    }
    __asm ("strdeq sb, sl, [r0], -r0");
    __asm ("strdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 << 18);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << sb);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 18);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 18);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> sb);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 18);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> sb);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> sb);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> 18);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> sb);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << 19);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 19);
    }
    if (r3 != r2) {
        r0 = r8 * sb;
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 19);
    }
    __asm ("strheq sb, [r0], -r0");
    __asm ("strheq sb, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >> 19);
    }
    __asm ("ldrdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >>> 19);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 19);
    }
    __asm ("strdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 << 20);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << sl);
    }
    if (r3 != r2) {
        sb = r0 & (ip << sl);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 20);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> sl);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 20);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 20);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> sl);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> 20);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> sl);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> sl);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << 21);
    }
    if (r3 != r2) {
        r0 = r4 * sl;
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 21);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 21);
    }
    __asm ("strheq sb, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >> 21);
    }
    __asm ("ldrdeq sb, sl, [r0], -r0");
    __asm ("ldrdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >>> 21);
    }
    __asm ("strdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 << 22);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 22);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << fp);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 22);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> fp);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> fp);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 22);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> fp);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> 22);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 22);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> fp);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << 23);
    }
    if (r3 != r2) {
        r0 *= fp;
    }
    if (r3 != r2) {
        r0 = ip * fp;
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 23);
    }
    __asm ("strheq sb, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >> 23);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 23);
    }
    __asm ("ldrdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >>> 23);
    }
    __asm ("strdeq sb, sl, [r0], -r0");
    __asm ("strdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 << 24);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << ip);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 24);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 24);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> ip);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 24);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> ip);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> ip);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> 24);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> ip);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << 25);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 25);
    }
    if (r3 != r2) {
        r0 = r8 * ip;
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 25);
    }
    __asm ("strheq sb, [r0], -r0");
    __asm ("strheq sb, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >> 25);
    }
    __asm ("ldrdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >>> 25);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 25);
    }
    __asm ("strdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 << 26);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << sp);
    }
    if (r3 != r2) {
        sb = r0 & (ip << sp);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 26);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> sp);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 26);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 26);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> sp);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> 26);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> sp);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> sp);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << 27);
    }
    if (r3 != r2) {
        r0 = r4 * sp;
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 27);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 27);
    }
    __asm ("strheq sb, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >> 27);
    }
    __asm ("ldrdeq sb, sl, [r0], -r0");
    __asm ("ldrdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >>> 27);
    }
    __asm ("strdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 << 28);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 28);
    }
    if (r3 != r2) {
        sb = r0 & (r8 << lr);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 28);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> lr);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> lr);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 28);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> lr);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >>> 28);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 28);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> lr);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << 29);
    }
    if (r3 != r2) {
        r0 *= lr;
    }
    if (r3 != r2) {
        r0 = ip * lr;
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> 29);
    }
    __asm ("strheq sb, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >> 29);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 29);
    }
    __asm ("ldrdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sb = r0 & (r4 >>> 29);
    }
    __asm ("strdeq sb, sl, [r0], -r0");
    __asm ("strdeq sb, sl, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 << 30);
    }
    if (r3 != r2) {
        sb = r0 & (r4 << pc);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> 30);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> 30);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >> pc);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 30);
    }
    if (r3 != r2) {
        sb = r0 & (r0 >> pc);
    }
    if (r3 != r2) {
        sb = r0 & (ip >> pc);
    }
    if (r3 != r2) {
        sb = r0 & (r8 >>> 30);
    }
    if (r3 != r2) {
        sb = r0 & (r4 >>> pc);
    }
    if (r3 != r2) {
        sb = r0 & (r0 << 31);
    }
    if (r3 != r2) {
        sb = r0 & (ip << 31);
    }
    if (r3 != r2) {
        r0 = r8 * pc;
    }
    if (r3 != r2) {
        sb = r0 & (r4 >> 31);
    }
    __asm ("strheq sb, [r0], -r0");
    __asm ("strheq sb, [r0], -ip");
    if (r3 != r2) {
        sb = r0 & (r8 >> 31);
    }
    __asm ("ldrdeq sb, sl, [r0], -r4");
    if (r3 != r2) {
        sb = r0 & (r0 >>> 31);
    }
    if (r3 != r2) {
        sb = r0 & (ip >>> 31);
    }
    __asm ("strdeq sb, sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & r4;
    }
    if (r3 != r2) {
        sl = r0 & (r0 << r0);
    }
    if (r3 != r2) {
        sl = r0 & (ip << r0);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 32);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> r0);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 32);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 32);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> r0);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> r0);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> r0);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> r0);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << 1);
    }
    if (r3 != r2) {
        r0 = r4 * r0;
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 1);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 1);
    }
    __asm ("strheq sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >> 1);
    }
    __asm ("ldrdeq sl, fp, [r0], -r0");
    __asm ("ldrdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >>> 1);
    }
    __asm ("strdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 << 2);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 2);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << r1);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 2);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> r1);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> r1);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 2);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> r1);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> 2);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 2);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> r1);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << 3);
    }
    if (r3 != r2) {
        r0 *= r1;
    }
    if (r3 != r2) {
        r0 = ip * r1;
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 3);
    }
    __asm ("strheq sl, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >> 3);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 3);
    }
    __asm ("ldrdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >>> 3);
    }
    __asm ("strdeq sl, fp, [r0], -r0");
    __asm ("strdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 << 4);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << r2);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 4);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 4);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> r2);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 4);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> r2);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> r2);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> 4);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> r2);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << 5);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 5);
    }
    if (r3 != r2) {
        r0 = r8 * r2;
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 5);
    }
    __asm ("strheq sl, [r0], -r0");
    __asm ("strheq sl, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >> 5);
    }
    __asm ("ldrdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >>> 5);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 5);
    }
    __asm ("strdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 << 6);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << r3);
    }
    if (r3 != r2) {
        sl = r0 & (ip << r3);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 6);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> r3);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 6);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 6);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> r3);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> 6);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> r3);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> r3);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << 7);
    }
    if (r3 != r2) {
        r0 = r4 * r3;
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 7);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 7);
    }
    __asm ("strheq sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >> 7);
    }
    __asm ("ldrdeq sl, fp, [r0], -r0");
    __asm ("ldrdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >>> 7);
    }
    __asm ("strdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 << 8);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 8);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << r4);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 8);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> r4);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> r4);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 8);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> r4);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> 8);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 8);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> r4);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << 9);
    }
    if (r3 != r2) {
        r0 *= r4;
    }
    if (r3 != r2) {
        r0 = ip * r4;
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 9);
    }
    __asm ("strheq sl, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >> 9);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 9);
    }
    __asm ("ldrdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >>> 9);
    }
    __asm ("strdeq sl, fp, [r0], -r0");
    __asm ("strdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 << 10);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << r5);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 10);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 10);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> r5);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 10);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> r5);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> r5);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> 10);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> r5);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << 11);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 11);
    }
    if (r3 != r2) {
        r0 = r8 * r5;
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 11);
    }
    __asm ("strheq sl, [r0], -r0");
    __asm ("strheq sl, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >> 11);
    }
    __asm ("ldrdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >>> 11);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 11);
    }
    __asm ("strdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 << 12);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << r6);
    }
    if (r3 != r2) {
        sl = r0 & (ip << r6);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 12);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> r6);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 12);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 12);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> r6);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> 12);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> r6);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> r6);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << 13);
    }
    if (r3 != r2) {
        r0 = r4 * r6;
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 13);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 13);
    }
    __asm ("strheq sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >> 13);
    }
    __asm ("ldrdeq sl, fp, [r0], -r0");
    __asm ("ldrdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >>> 13);
    }
    __asm ("strdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 << 14);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 14);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << r7);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 14);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> r7);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> r7);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 14);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> r7);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> 14);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 14);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> r7);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << 15);
    }
    if (r3 != r2) {
        r0 *= r7;
    }
    if (r3 != r2) {
        r0 = ip * r7;
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 15);
    }
    __asm ("strheq sl, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >> 15);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 15);
    }
    __asm ("ldrdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >>> 15);
    }
    __asm ("strdeq sl, fp, [r0], -r0");
    __asm ("strdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 << 16);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << r8);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 16);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 16);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> r8);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 16);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> r8);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> r8);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> 16);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> r8);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << 17);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 17);
    }
    if (r3 != r2) {
        r0 = r8 * r8;
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 17);
    }
    __asm ("strheq sl, [r0], -r0");
    __asm ("strheq sl, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >> 17);
    }
    __asm ("ldrdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >>> 17);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 17);
    }
    __asm ("strdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 << 18);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << sb);
    }
    if (r3 != r2) {
        sl = r0 & (ip << sb);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 18);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> sb);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 18);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 18);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> sb);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> 18);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> sb);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> sb);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << 19);
    }
    if (r3 != r2) {
        r0 = r4 * sb;
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 19);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 19);
    }
    __asm ("strheq sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >> 19);
    }
    __asm ("ldrdeq sl, fp, [r0], -r0");
    __asm ("ldrdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >>> 19);
    }
    __asm ("strdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 << 20);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 20);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << sl);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 20);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> sl);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> sl);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 20);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> sl);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> 20);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 20);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> sl);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << 21);
    }
    if (r3 != r2) {
        r0 *= sl;
    }
    if (r3 != r2) {
        r0 = ip * sl;
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 21);
    }
    __asm ("strheq sl, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >> 21);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 21);
    }
    __asm ("ldrdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >>> 21);
    }
    __asm ("strdeq sl, fp, [r0], -r0");
    __asm ("strdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 << 22);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << fp);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 22);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 22);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> fp);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 22);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> fp);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> fp);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> 22);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> fp);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << 23);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 23);
    }
    if (r3 != r2) {
        r0 = r8 * fp;
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 23);
    }
    __asm ("strheq sl, [r0], -r0");
    __asm ("strheq sl, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >> 23);
    }
    __asm ("ldrdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >>> 23);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 23);
    }
    __asm ("strdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 << 24);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << ip);
    }
    if (r3 != r2) {
        sl = r0 & (ip << ip);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 24);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> ip);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 24);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 24);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> ip);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> 24);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> ip);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> ip);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << 25);
    }
    if (r3 != r2) {
        r0 = r4 * ip;
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 25);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 25);
    }
    __asm ("strheq sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >> 25);
    }
    __asm ("ldrdeq sl, fp, [r0], -r0");
    __asm ("ldrdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >>> 25);
    }
    __asm ("strdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 << 26);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 26);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << sp);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 26);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> sp);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> sp);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 26);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> sp);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> 26);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 26);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> sp);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << 27);
    }
    if (r3 != r2) {
        r0 *= sp;
    }
    if (r3 != r2) {
        r0 = ip * sp;
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 27);
    }
    __asm ("strheq sl, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >> 27);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 27);
    }
    __asm ("ldrdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >>> 27);
    }
    __asm ("strdeq sl, fp, [r0], -r0");
    __asm ("strdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 << 28);
    }
    if (r3 != r2) {
        sl = r0 & (r4 << lr);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 28);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 28);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> lr);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 28);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> lr);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> lr);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >>> 28);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> lr);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << 29);
    }
    if (r3 != r2) {
        sl = r0 & (ip << 29);
    }
    if (r3 != r2) {
        r0 = r8 * lr;
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> 29);
    }
    __asm ("strheq sl, [r0], -r0");
    __asm ("strheq sl, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >> 29);
    }
    __asm ("ldrdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
        sl = r0 & (r0 >>> 29);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> 29);
    }
    __asm ("strdeq sl, fp, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 << 30);
    }
    if (r3 != r2) {
        sl = r0 & (r0 << pc);
    }
    if (r3 != r2) {
        sl = r0 & (ip << pc);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> 30);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >> pc);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 30);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 30);
    }
    if (r3 != r2) {
        sl = r0 & (r8 >> pc);
    }
    if (r3 != r2) {
        sl = r0 & (r4 >>> 30);
    }
    if (r3 != r2) {
        sl = r0 & (r0 >>> pc);
    }
    if (r3 != r2) {
        sl = r0 & (ip >>> pc);
    }
    if (r3 != r2) {
        sl = r0 & (r8 << 31);
    }
    if (r3 != r2) {
        r0 = r4 * pc;
    }
    if (r3 != r2) {
        sl = r0 & (r0 >> 31);
    }
    if (r3 != r2) {
        sl = r0 & (ip >> 31);
    }
    __asm ("strheq sl, [r0], -r8");
    if (r3 != r2) {
        sl = r0 & (r4 >> 31);
    }
    __asm ("ldrdeq sl, fp, [r0], -r0");
    __asm ("ldrdeq sl, fp, [r0], -ip");
    if (r3 != r2) {
        sl = r0 & (r8 >>> 31);
    }
    __asm ("strdeq sl, fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= r0;
    }
    if (r3 != r2) {
        r0 = ip * r0;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r0");
    __asm ("strdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r8 * r1;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r0");
    __asm ("strheq fp, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r4 * r2;
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r0");
    __asm ("ldrdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= r3;
    }
    if (r3 != r2) {
        r0 = ip * r3;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r0");
    __asm ("strdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r8 * r4;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r0");
    __asm ("strheq fp, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r4 * r5;
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r0");
    __asm ("ldrdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= r6;
    }
    if (r3 != r2) {
        r0 = ip * r6;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r0");
    __asm ("strdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r8 * r7;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r0");
    __asm ("strheq fp, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r4 * r8;
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r0");
    __asm ("ldrdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= sb;
    }
    if (r3 != r2) {
        r0 = ip * sb;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r0");
    __asm ("strdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r8 * sl;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r0");
    __asm ("strheq fp, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r4 * fp;
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r0");
    __asm ("ldrdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= ip;
    }
    if (r3 != r2) {
        r0 = ip * ip;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r0");
    __asm ("strdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r8 * sp;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r0");
    __asm ("strheq fp, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r4 * lr;
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r0");
    __asm ("ldrdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= pc;
    }
    if (r3 != r2) {
        r0 = ip * pc;
    }
    if (r3 != r2) {
    }
    __asm ("strheq fp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("ldrdeq fp, ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("strdeq fp, ip, [r0], -r0");
    __asm ("strdeq fp, ip, [r0], -ip");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r8 * r0;
    }
    if (r3 != r2) {
    }
    __asm ("strheq ip, [r0], -r0");
    __asm ("strheq ip, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("ldrdeq ip, sp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strdeq ip, sp, [r0], -r8");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 = r4 * r1;
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    __asm ("strheq ip, [r0], -r8");
    if (r3 != r2) {
    }
    __asm ("ldrdeq ip, sp, [r0], -r0");
    __asm ("ldrdeq ip, sp, [r0], -ip");
    if (r3 != r2) {
    }
    __asm ("strdeq ip, sp, [r0], -r4");
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
    }
    if (r3 != r2) {
        r0 *= r2;
    }
    printf (r0);
    goto label_1;
label_0:
label_1:
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x82a0 */
#include <stdint.h>
 
void printf () {
    pc = *((ip += 0xd4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0xc2cc */
#include <stdint.h>
 
void libc_csu_init (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r6 = r0;
    r5 = *(0xc320);
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
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x8280 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 12 named .init */
    call_weak_fn ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0xc2b0 */
#include <stdint.h>
 
int32_t main () {
    *((sp -= 4)) = fp;
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x82c4 */
#include <stdint.h>
 
void abort () {
    pc = *((ip += 0xbc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-014_switch_with_jump_table/arm_elf/subject.exe @ 0x828c */
#include <stdint.h>
 
void _plt () {
    /* [11] -r-x section size 68 named .plt */
    lr = "_96";
    lr = pc + lr;
    pc = *((lr += 8));
}
