/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000298 */
#include <stdint.h>
 
void entry0 () {
    /* [11] -r-x section size 1320 named .text */
    r9 = r1;
    r1 &= 0xfffffff0;
    r0 = 0;
    *((r1 - 0x4)) = r1;
    lr = r0;
    *(r1) = r0;
    r8 = 0x10000000;
    r13 = *((r8 + 0x1f8));
    return _libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100002bc */
#include <stdint.h>
 
void call_gmon_start () {
    *((r1 - 0x8)) = r1;
    r0 = lr;
    *((r1 + 0x6)) = r30;
    *((r1 + 0x9)) = r0;
    sym_got ();
    r30 = lr;
    r0 = *((r30 + 0x3));
    if (r0 != 0) {
        void (*r0)() ();
    }
    r0 = *((r1 + 0x9));
    lr = r0;
    r30 = *((r1 + 0x6));
    r1 += 0x20;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100002fc */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r0 = lr;
    *((r1 - 0x8)) = r1;
    *((r1 + 0x6)) = r30;
    r30 = 0x10010000;
    *((r1 + 0x7)) = r31;
    *((r1 + 0x9)) = r0;
    r0 = *((r30 + 0x954));
    if (r0 != 0) {
        void (*0x1000035c)() ();
    }
    r31 = 0x10010000;
    r11 = *((r31 + 0x23a));
    r9 = *(r11);
    if (r9 == 0) {
        void (*0x10000354)() ();
    }
    r0 = r11 + 4;
    *((r31 + 0x23a)) = r0;
    void (*r9)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000374 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    r0 = lr;
    *((r1 - 0x4)) = r1;
    *((r1 + 0x5)) = r0;
    r0 = *((r1 + 0x5));
    r1 += 0x10;
    lr = r0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000390 */
#include <stdint.h>
 
void frame_dummy () {
    r0 = lr;
    r11 = 0x10010000;
    *((r1 - 0x4)) = r1;
    r9 = .comment;
    r3 = r11 + 0x808;
    *((r1 + 0x5)) = r0;
    r0 = *((r11 + 0x202));
    if (r0 != 0) {
        if (r9 == 0) {
            goto label_0;
        }
        segment_LOAD0 ();
    }
label_0:
    r0 = *((r1 + 0x5));
    r1 += 0x10;
    lr = r0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000007c */
#include <stdint.h>
 
void fcn_1000007c () {
    __asm ("vaddubm v0, v0, v0");
    __asm ("vaddubm v0, v0, v0");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100003d4 */
#include <stdint.h>
 
void call_frame_dummy () {
    r0 = lr;
    *((r1 - 0x4)) = r1;
    *((r1 + 0x5)) = r0;
    r0 = *((r1 + 0x5));
    r1 += 0x10;
    lr = r0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000754 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    r0 = lr;
    *((r1 - 0x8)) = r1;
    r9 = 0x10010000;
    *((r1 + 0x7)) = r31;
    r9 += 0x7fc;
    *((r1 + 0x9)) = r0;
    r31 = r9 + 0xfffc;
    r0 = *((r9 - 0x1));
    if (r0 != 0xffff) {
        void (*r0)() ();
    }
    r0 = *((r1 + 0x9));
    r31 = *((r1 + 0x7));
    r1 += 0x20;
    lr = r0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007a4 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    r0 = lr;
    *((r1 - 0x4)) = r1;
    *((r1 + 0x5)) = r0;
    r0 = *((r1 + 0x5));
    r1 += 0x10;
    lr = r0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000668 */
#include <stdint.h>
 
void restgpr_18 () {
    r18 = *((r11 - 0xe));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000740 */
#include <stdint.h>
 
void restgpr_31_x () {
    r0 = *((r11 + 0x1));
    r31 = *((r11 - 0x1));
    lr = r0;
    r1 = r11;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000688 */
#include <stdint.h>
 
void restgpr_26 () {
    r26 = *((r11 - 0x6));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005f4 */
#include <stdint.h>
 
void savegpr_27 () {
    *((r11 - 0x5)) = r27;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000680 */
#include <stdint.h>
 
void restgpr_24 () {
    r24 = *((r11 - 0x8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000720 */
#include <stdint.h>
 
void restgpr_23_x () {
    r23 = *((r11 - 0x9));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000618 */
#include <stdint.h>
 
void restfpr_17 () {
    __asm ("lfd f17, -0x78(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000065c */
#include <stdint.h>
 
void restgpr_15 () {
    r15 = *((r11 - 0x11));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006d0 */
#include <stdint.h>
 
void restfpr_25_x () {
    __asm ("lfd f25, -0x38(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000700 */
#include <stdint.h>
 
void restgpr_15_x () {
    r15 = *((r11 - 0x11));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000630 */
#include <stdint.h>
 
void restfpr_23 () {
    __asm ("lfd f23, -0x48(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000684 */
#include <stdint.h>
 
void restgpr_25 () {
    r25 = *((r11 - 0x7));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005c0 */
#include <stdint.h>
 
void savegpr_14 () {
    *((r11 - 0x12)) = r14;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006b4 */
#include <stdint.h>
 
void restfpr_18_x () {
    __asm ("lfd f18, -0x70(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000057c */
#include <stdint.h>
 
void savefpr_16 () {
    __asm ("stfd f16, -0x80(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000069c */
#include <stdint.h>
 
void restgpr_31 () {
    r31 = *((r11 - 0x1));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006ac */
#include <stdint.h>
 
void restfpr_16_x () {
    __asm ("lfd f16, -0x80(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000710 */
#include <stdint.h>
 
void restgpr_19_x () {
    r19 = *((r11 - 0xd));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000590 */
#include <stdint.h>
 
void savefpr_21 () {
    __asm ("stfd f21, -0x58(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005c4 */
#include <stdint.h>
 
void savegpr_15 () {
    *((r11 - 0x11)) = r15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000073c */
#include <stdint.h>
 
void restgpr_30_x () {
    r30 = *((r11 - 0x2));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000708 */
#include <stdint.h>
 
void restgpr_17_x () {
    r17 = *((r11 - 0xf));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005ac */
#include <stdint.h>
 
void savefpr_28 () {
    __asm ("stfd f28, -0x20(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000738 */
#include <stdint.h>
 
void restgpr_29_x () {
    r29 = *((r11 - 0x3));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000640 */
#include <stdint.h>
 
void restfpr_27 () {
    __asm ("lfd f27, -0x28(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006d8 */
#include <stdint.h>
 
void restfpr_27_x () {
    __asm ("lfd f27, -0x28(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006e8 */
#include <stdint.h>
 
void restfpr_31_x () {
    r0 = *((r11 + 0x1));
    __asm ("lfd f31, -8(r11)");
    lr = r0;
    r1 = r11;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000620 */
#include <stdint.h>
 
void restfpr_19 () {
    __asm ("lfd f19, -0x68(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006cc */
#include <stdint.h>
 
void restfpr_24_x () {
    __asm ("lfd f24, -0x40(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005f8 */
#include <stdint.h>
 
void savegpr_28 () {
    *((r11 - 0x4)) = r28;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000458 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void libc_csu_fini () {
    *((r1 - 0x8)) = r1;
    r6 = lr;
    __asm ("bdnzl 0x10000464");
    *((r1 + 0x6)) = r30;
    r30 = lr;
    *((r1 + 0x7)) = r31;
    *((r1 + 0x5)) = r29;
    r5 = *((r30 - 0x4));
    *((r1 + 0x9)) = r6;
    r30 = r5 + r30;
    r11 = *((r30 - 0x1fff));
    r4 = *((r30 - 0x2000));
    r0 = r4 - r11;
    r3 = rotate_left32 (r0, 2);
    r31 = r3 + 0xffff;
    if (r3 != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        r11 = *((r30 - 0x1fff));
label_0:
        r8 = r31 << 2;
        r29 = r31;
        r31 += 0xffff;
        /* with lock */
        r7 = *(((r8 + r11)));
        ctr = r7;
        void (*ctr)() ();
    } while (r29 != 0);
label_1:
    sym_fini ();
    r9 = *((r1 + 0x9));
    r29 = *((r1 + 0x5));
    r30 = *((r1 + 0x6));
    r31 = *((r1 + 0x7));
    lr = r9;
    r1 += 0x20;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005f0 */
#include <stdint.h>
 
void savegpr_26 () {
    *((r11 - 0x6)) = r26;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000658 */
#include <stdint.h>
 
void restgpr_14 () {
    r14 = *((r11 - 0x12));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000578 */
#include <stdint.h>
 
void savefpr_15 () {
    __asm ("stfd f15, -0x88(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005a8 */
#include <stdint.h>
 
void savefpr_27 () {
    __asm ("stfd f27, -0x28(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006a8 */
#include <stdint.h>
 
void restfpr_15_x () {
    __asm ("lfd f15, -0x88(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000610 */
#include <stdint.h>
 
void restfpr_15 () {
    __asm ("lfd f15, -0x88(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006c8 */
#include <stdint.h>
 
void restfpr_23_x () {
    __asm ("lfd f23, -0x48(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000594 */
#include <stdint.h>
 
void savefpr_22 () {
    __asm ("stfd f22, -0x50(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000270 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 40 named .init */
    *((r1 - 0x8)) = r1;
    r0 = lr;
    *((r1 + 0x9)) = r0;
    sym_call_gmon_start ();
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    r0 = *((r1 + 0x9));
    lr = r0;
    r1 += 0x20;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000628 */
#include <stdint.h>
 
void restfpr_21 () {
    __asm ("lfd f21, -0x58(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006a4 */
#include <stdint.h>
 
void restfpr_14_x () {
    __asm ("lfd f14, -0x90(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000674 */
#include <stdint.h>
 
void restgpr_21 () {
    r21 = *((r11 - 0xb));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000580 */
#include <stdint.h>
 
void savefpr_17 () {
    __asm ("stfd f17, -0x78(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000638 */
#include <stdint.h>
 
void restfpr_25 () {
    __asm ("lfd f25, -0x38(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000062c */
#include <stdint.h>
 
void restfpr_22 () {
    __asm ("lfd f22, -0x50(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000071c */
#include <stdint.h>
 
void restgpr_22_x () {
    r22 = *((r11 - 0xa));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000574 */
#include <stdint.h>
 
void savefpr_14 () {
    __asm ("stfd f14, -0x90(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000072c */
#include <stdint.h>
 
void restgpr_26_x () {
    r26 = *((r11 - 0x6));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000734 */
#include <stdint.h>
 
void restgpr_28_x () {
    r28 = *((r11 - 0x4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005ec */
#include <stdint.h>
 
void savegpr_25 () {
    *((r11 - 0x7)) = r25;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006e4 */
#include <stdint.h>
 
void restfpr_30_x () {
    __asm ("lfd f30, -0x10(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000728 */
#include <stdint.h>
 
void restgpr_25_x () {
    r25 = *((r11 - 0x7));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000724 */
#include <stdint.h>
 
void restgpr_24_x () {
    r24 = *((r11 - 0x8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005dc */
#include <stdint.h>
 
void savegpr_21 () {
    *((r11 - 0xb)) = r21;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000058c */
#include <stdint.h>
 
void savefpr_20 () {
    __asm ("stfd f20, -0x60(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000690 */
#include <stdint.h>
 
void restgpr_28 () {
    r28 = *((r11 - 0x4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000060c */
#include <stdint.h>
 
void restfpr_14 () {
    __asm ("lfd f14, -0x90(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005b0 */
#include <stdint.h>
 
void savefpr_29 () {
    __asm ("stfd f29, -0x18(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000066c */
#include <stdint.h>
 
void restgpr_19 () {
    r19 = *((r11 - 0xd));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000670 */
#include <stdint.h>
 
void restgpr_20 () {
    r20 = *((r11 - 0xc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000070c */
#include <stdint.h>
 
void restgpr_18_x () {
    r18 = *((r11 - 0xe));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006c0 */
#include <stdint.h>
 
void restfpr_21_x () {
    __asm ("lfd f21, -0x58(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005b8 */
#include <stdint.h>
 
void savefpr_31 () {
    __asm ("stfd f31, -8(r11)");
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005d8 */
#include <stdint.h>
 
void savegpr_20 () {
    *((r11 - 0xc)) = r20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100004e8 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void libc_csu_init () {
    *((r1 - 0x8)) = r1;
    r6 = lr;
    __asm ("bdnzl 0x100004f4");
    *((r1 + 0x6)) = r30;
    r30 = lr;
    *((r1 + 0x4)) = r28;
    *((r1 + 0x7)) = r31;
    r5 = *((r30 - 0x4));
    *((r1 + 0x5)) = r29;
    *((r1 + 0x9)) = r6;
    r30 = r5 + r30;
    sym_init (r3, r4, r5, r6);
    r28 = *((r30 - 0x1ffd));
    r31 = 0;
    r4 = *((r30 - 0x1ffe));
    r3 = r4 - r28;
    r0 = rotate_left32 (r3, 2);
    if (r31 >= r0) {
        goto label_0;
    }
    r29 = r0;
    do {
        r7 = r31 << 2;
        r31++;
        /* with lock */
        r0 = *(((r7 + r28)));
        ctr = r0;
        void (*ctr)() ();
    } while (r31 < r29);
label_0:
    r8 = *((r1 + 0x9));
    r28 = *((r1 + 0x4));
    r29 = *((r1 + 0x5));
    r30 = *((r1 + 0x6));
    lr = r8;
    r31 = *((r1 + 0x7));
    r1 += 0x20;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000694 */
#include <stdint.h>
 
void restgpr_29 () {
    r29 = *((r11 - 0x3));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005d0 */
#include <stdint.h>
 
void savegpr_18 () {
    *((r11 - 0xe)) = r18;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100003f0 */
#include <stdint.h>
 
int32_t main () {
    if (r3 == 5) {
        goto label_2;
    }
    if (r3 > 5) {
        goto label_0;
    }
    if (r3 == 2) {
        goto label_3;
    }
    do {
label_0:
        r3 = 0xd;
        return r3;
label_1:
    } while (null == );
    if (r3 <= 2) {
        goto label_0;
    }
label_2:
    r3 += 0xffff;
    if (r3 <= 1) {
        goto label_1;
    }
    r3 += 0xffff;
    if (r3 > 2) {
        goto label_0;
    }
    if (r3 > 0) {
        goto label_2;
    }
    r3 = 0xd;
    return r3;
label_3:
    if (r3 > 0) {
        void (*0x9)() ();
    }
    r3 = 0xd;
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000588 */
#include <stdint.h>
 
void savefpr_19 () {
    __asm ("stfd f19, -0x68(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000644 */
#include <stdint.h>
 
void restfpr_28 () {
    __asm ("lfd f28, -0x20(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000063c */
#include <stdint.h>
 
void restfpr_26 () {
    __asm ("lfd f26, -0x30(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005cc */
#include <stdint.h>
 
void savegpr_17 () {
    *((r11 - 0xf)) = r17;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006dc */
#include <stdint.h>
 
void restfpr_28_x () {
    __asm ("lfd f28, -0x20(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000624 */
#include <stdint.h>
 
void restfpr_20 () {
    __asm ("lfd f20, -0x60(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006b0 */
#include <stdint.h>
 
void restfpr_17_x () {
    __asm ("lfd f17, -0x78(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005b4 */
#include <stdint.h>
 
void savefpr_30 () {
    __asm ("stfd f30, -0x10(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005a0 */
#include <stdint.h>
 
void savefpr_25 () {
    __asm ("stfd f25, -0x38(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000604 */
#include <stdint.h>
 
void savegpr_31 () {
    *((r11 - 0x1)) = r31;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005e4 */
#include <stdint.h>
 
void savegpr_23 () {
    *((r11 - 0x9)) = r23;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000059c */
#include <stdint.h>
 
void savefpr_24 () {
    __asm ("stfd f24, -0x40(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007c0 */
#include <stdint.h>
 
void fini () {
    /* [12] -r-x section size 32 named .fini */
    *((r1 - 0x8)) = r1;
    r0 = lr;
    *((r1 + 0x9)) = r0;
    sym_do_global_dtors_aux ();
    r0 = *((r1 + 0x9));
    lr = r0;
    r1 += 0x20;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006e0 */
#include <stdint.h>
 
void restfpr_29_x () {
    __asm ("lfd f29, -0x18(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000584 */
#include <stdint.h>
 
void savefpr_18 () {
    __asm ("stfd f18, -0x70(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005fc */
#include <stdint.h>
 
void savegpr_29 () {
    *((r11 - 0x3)) = r29;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006b8 */
#include <stdint.h>
 
void restfpr_19_x () {
    __asm ("lfd f19, -0x68(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000068c */
#include <stdint.h>
 
void restgpr_27 () {
    r27 = *((r11 - 0x5));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000678 */
#include <stdint.h>
 
void restgpr_22 () {
    r22 = *((r11 - 0xa));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005e8 */
#include <stdint.h>
 
void savegpr_24 () {
    *((r11 - 0x8)) = r24;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006d4 */
#include <stdint.h>
 
void restfpr_26_x () {
    __asm ("lfd f26, -0x30(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000061c */
#include <stdint.h>
 
void restfpr_18 () {
    __asm ("lfd f18, -0x70(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005d4 */
#include <stdint.h>
 
void savegpr_19 () {
    *((r11 - 0xd)) = r19;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000614 */
#include <stdint.h>
 
void restfpr_16 () {
    __asm ("lfd f16, -0x80(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006fc */
#include <stdint.h>
 
void restgpr_14_x () {
    r14 = *((r11 - 0x12));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000598 */
#include <stdint.h>
 
void savefpr_23 () {
    __asm ("stfd f23, -0x48(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000064c */
#include <stdint.h>
 
void restfpr_30 () {
    __asm ("lfd f30, -0x10(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005c8 */
#include <stdint.h>
 
void savegpr_16 () {
    *((r11 - 0x10)) = r16;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006bc */
#include <stdint.h>
 
void restfpr_20_x () {
    __asm ("lfd f20, -0x60(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000648 */
#include <stdint.h>
 
void restfpr_29 () {
    __asm ("lfd f29, -0x18(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000634 */
#include <stdint.h>
 
void restfpr_24 () {
    __asm ("lfd f24, -0x40(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000600 */
#include <stdint.h>
 
void savegpr_30 () {
    *((r11 - 0x2)) = r30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000718 */
#include <stdint.h>
 
void restgpr_21_x () {
    r21 = *((r11 - 0xb));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000698 */
#include <stdint.h>
 
void restgpr_30 () {
    r30 = *((r11 - 0x2));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100006c4 */
#include <stdint.h>
 
void restfpr_22_x () {
    __asm ("lfd f22, -0x50(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000704 */
#include <stdint.h>
 
void restgpr_16_x () {
    r16 = *((r11 - 0x10));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000730 */
#include <stdint.h>
 
void restgpr_27_x () {
    r27 = *((r11 - 0x5));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005e0 */
#include <stdint.h>
 
void savegpr_22 () {
    *((r11 - 0xa)) = r22;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000660 */
#include <stdint.h>
 
void restgpr_16 () {
    r16 = *((r11 - 0x10));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000067c */
#include <stdint.h>
 
void restgpr_23 () {
    r23 = *((r11 - 0x9));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000664 */
#include <stdint.h>
 
void restgpr_17 () {
    r17 = *((r11 - 0xf));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005a4 */
#include <stdint.h>
 
void savefpr_26 () {
    __asm ("stfd f26, -0x30(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000714 */
#include <stdint.h>
 
void restgpr_20_x () {
    r20 = *((r11 - 0xc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000650 */
#include <stdint.h>
 
void restfpr_31 () {
    __asm ("lfd f31, -8(r11)");
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/frontier/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000078 */
#include <stdint.h>
 
void fcn_10000078 () {
}
