/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100002e4 */
#include <stdint.h>
 
void entry0 () {
    /* [11] -r-x section size 1656 named .text */
    r9 = r1;
    r1 &= 0xfffffff0;
    r0 = 0;
    *((r1 - 0x4)) = r1;
    lr = r0;
    *(r1) = r0;
    r8 = 0x10000000;
    r13 = *((r8 + 0x25f));
    return _libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000308 */
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000348 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r0 = lr;
    *((r1 - 0x8)) = r1;
    *((r1 + 0x6)) = r30;
    r30 = 0x10010000;
    *((r1 + 0x7)) = r31;
    *((r1 + 0x9)) = r0;
    r0 = *((r30 + 0xba0));
    if (r0 != 0) {
        void (*0x100003a8)() ();
    }
    r31 = 0x10010000;
    r11 = *((r31 + 0x2c7));
    r9 = *(r11);
    if (r9 == 0) {
        void (*0x100003a0)() ();
    }
    r0 = r11 + 4;
    *((r31 + 0x2c7)) = r0;
    void (*r9)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100003c0 */
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100003dc */
#include <stdint.h>
 
void frame_dummy () {
    r0 = lr;
    r11 = 0x10010000;
    *((r1 - 0x4)) = r1;
    r9 = .comment;
    r3 = r11 + 0xa3c;
    *((r1 + 0x5)) = r0;
    r0 = *((r11 + 0x28f));
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000018 */
#include <stdint.h>
 
void fcn_10000018 () {
    __asm ("vmsumubm v0, v0, v0, v11");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000420 */
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008f0 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    r0 = lr;
    *((r1 - 0x8)) = r1;
    r9 = 0x10010000;
    *((r1 + 0x7)) = r31;
    r9 += 0xa30;
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000940 */
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000804 */
#include <stdint.h>
 
void restgpr_18 () {
    r18 = *((r11 - 0xe));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008dc */
#include <stdint.h>
 
void restgpr_31_x () {
    r0 = *((r11 + 0x1));
    r31 = *((r11 - 0x1));
    lr = r0;
    r1 = r11;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000824 */
#include <stdint.h>
 
void restgpr_26 () {
    r26 = *((r11 - 0x6));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000790 */
#include <stdint.h>
 
void savegpr_27 () {
    *((r11 - 0x5)) = r27;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000081c */
#include <stdint.h>
 
void restgpr_24 () {
    r24 = *((r11 - 0x8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008bc */
#include <stdint.h>
 
void restgpr_23_x () {
    r23 = *((r11 - 0x9));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007b4 */
#include <stdint.h>
 
void restfpr_17 () {
    __asm ("lfd f17, -0x78(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007f8 */
#include <stdint.h>
 
void restgpr_15 () {
    r15 = *((r11 - 0x11));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000086c */
#include <stdint.h>
 
void restfpr_25_x () {
    __asm ("lfd f25, -0x38(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000089c */
#include <stdint.h>
 
void restgpr_15_x () {
    r15 = *((r11 - 0x11));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007cc */
#include <stdint.h>
 
void restfpr_23 () {
    __asm ("lfd f23, -0x48(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000820 */
#include <stdint.h>
 
void restgpr_25 () {
    r25 = *((r11 - 0x7));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000075c */
#include <stdint.h>
 
void savegpr_14 () {
    *((r11 - 0x12)) = r14;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000850 */
#include <stdint.h>
 
void restfpr_18_x () {
    __asm ("lfd f18, -0x70(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000718 */
#include <stdint.h>
 
void savefpr_16 () {
    __asm ("stfd f16, -0x80(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000838 */
#include <stdint.h>
 
void restgpr_31 () {
    r31 = *((r11 - 0x1));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000848 */
#include <stdint.h>
 
void restfpr_16_x () {
    __asm ("lfd f16, -0x80(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008ac */
#include <stdint.h>
 
void restgpr_19_x () {
    r19 = *((r11 - 0xd));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000072c */
#include <stdint.h>
 
void savefpr_21 () {
    __asm ("stfd f21, -0x58(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000760 */
#include <stdint.h>
 
void savegpr_15 () {
    *((r11 - 0x11)) = r15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008d8 */
#include <stdint.h>
 
void restgpr_30_x () {
    r30 = *((r11 - 0x2));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008a4 */
#include <stdint.h>
 
void restgpr_17_x () {
    r17 = *((r11 - 0xf));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000748 */
#include <stdint.h>
 
void savefpr_28 () {
    __asm ("stfd f28, -0x20(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008d4 */
#include <stdint.h>
 
void restgpr_29_x () {
    r29 = *((r11 - 0x3));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007dc */
#include <stdint.h>
 
void restfpr_27 () {
    __asm ("lfd f27, -0x28(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000874 */
#include <stdint.h>
 
void restfpr_27_x () {
    __asm ("lfd f27, -0x28(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000884 */
#include <stdint.h>
 
void restfpr_31_x () {
    r0 = *((r11 + 0x1));
    __asm ("lfd f31, -8(r11)");
    lr = r0;
    r1 = r11;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007bc */
#include <stdint.h>
 
void restfpr_19 () {
    __asm ("lfd f19, -0x68(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000868 */
#include <stdint.h>
 
void restfpr_24_x () {
    __asm ("lfd f24, -0x40(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000794 */
#include <stdint.h>
 
void savegpr_28 () {
    *((r11 - 0x4)) = r28;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100005f4 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void libc_csu_fini () {
    *((r1 - 0x8)) = r1;
    r6 = lr;
    __asm ("bdnzl 0x10000600");
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000078c */
#include <stdint.h>
 
void savegpr_26 () {
    *((r11 - 0x6)) = r26;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007f4 */
#include <stdint.h>
 
void restgpr_14 () {
    r14 = *((r11 - 0x12));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000714 */
#include <stdint.h>
 
void savefpr_15 () {
    __asm ("stfd f15, -0x88(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000744 */
#include <stdint.h>
 
void savefpr_27 () {
    __asm ("stfd f27, -0x28(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000844 */
#include <stdint.h>
 
void restfpr_15_x () {
    __asm ("lfd f15, -0x88(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007ac */
#include <stdint.h>
 
void restfpr_15 () {
    __asm ("lfd f15, -0x88(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000864 */
#include <stdint.h>
 
void restfpr_23_x () {
    __asm ("lfd f23, -0x48(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000730 */
#include <stdint.h>
 
void savefpr_22 () {
    __asm ("stfd f22, -0x50(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100002bc */
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007c4 */
#include <stdint.h>
 
void restfpr_21 () {
    __asm ("lfd f21, -0x58(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000840 */
#include <stdint.h>
 
void restfpr_14_x () {
    __asm ("lfd f14, -0x90(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000810 */
#include <stdint.h>
 
void restgpr_21 () {
    r21 = *((r11 - 0xb));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000071c */
#include <stdint.h>
 
void savefpr_17 () {
    __asm ("stfd f17, -0x78(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007d4 */
#include <stdint.h>
 
void restfpr_25 () {
    __asm ("lfd f25, -0x38(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007c8 */
#include <stdint.h>
 
void restfpr_22 () {
    __asm ("lfd f22, -0x50(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008b8 */
#include <stdint.h>
 
void restgpr_22_x () {
    r22 = *((r11 - 0xa));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000710 */
#include <stdint.h>
 
void savefpr_14 () {
    __asm ("stfd f14, -0x90(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008c8 */
#include <stdint.h>
 
void restgpr_26_x () {
    r26 = *((r11 - 0x6));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008d0 */
#include <stdint.h>
 
void restgpr_28_x () {
    r28 = *((r11 - 0x4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000788 */
#include <stdint.h>
 
void savegpr_25 () {
    *((r11 - 0x7)) = r25;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000880 */
#include <stdint.h>
 
void restfpr_30_x () {
    __asm ("lfd f30, -0x10(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008c4 */
#include <stdint.h>
 
void restgpr_25_x () {
    r25 = *((r11 - 0x7));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008c0 */
#include <stdint.h>
 
void restgpr_24_x () {
    r24 = *((r11 - 0x8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000778 */
#include <stdint.h>
 
void savegpr_21 () {
    *((r11 - 0xb)) = r21;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000728 */
#include <stdint.h>
 
void savefpr_20 () {
    __asm ("stfd f20, -0x60(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000082c */
#include <stdint.h>
 
void restgpr_28 () {
    r28 = *((r11 - 0x4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007a8 */
#include <stdint.h>
 
void restfpr_14 () {
    __asm ("lfd f14, -0x90(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000074c */
#include <stdint.h>
 
void savefpr_29 () {
    __asm ("stfd f29, -0x18(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000808 */
#include <stdint.h>
 
void restgpr_19 () {
    r19 = *((r11 - 0xd));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000080c */
#include <stdint.h>
 
void restgpr_20 () {
    r20 = *((r11 - 0xc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008a8 */
#include <stdint.h>
 
void restgpr_18_x () {
    r18 = *((r11 - 0xe));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000085c */
#include <stdint.h>
 
void restfpr_21_x () {
    __asm ("lfd f21, -0x58(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000754 */
#include <stdint.h>
 
void savefpr_31 () {
    __asm ("stfd f31, -8(r11)");
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000774 */
#include <stdint.h>
 
void savegpr_20 () {
    *((r11 - 0xc)) = r20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000684 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void libc_csu_init () {
    *((r1 - 0x8)) = r1;
    r6 = lr;
    __asm ("bdnzl 0x10000690");
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000830 */
#include <stdint.h>
 
void restgpr_29 () {
    r29 = *((r11 - 0x3));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000076c */
#include <stdint.h>
 
void savegpr_18 () {
    *((r11 - 0xe)) = r18;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000043c */
#include <stdint.h>
 
int32_t main () {
    r4 = lr;
    *((r1 - 0x8)) = r1;
    *((r1 + 0x5)) = r29;
    r29 = 0x10000000;
    r3 = 0x10000990;
    *((r1 + 0x9)) = r4;
    r4 = r1 + 8;
    __asm ("crclr 6");
    scanf (r3, r4);
    r3 = r29 + 0x990;
    r4 = r1 + 0xc;
    r29 = 5;
    __asm ("crclr 6");
    scanf (r3, r4);
    r3 = *((r1 + 0x2));
    if (r29 == r3) {
        goto label_5;
    }
    r6 = 0x10000000;
    r3 = "Not Equal";
    puts (r3);
    r5 = *((r1 + 0x2));
    if (r29 > r5) {
        goto label_6;
    }
label_4:
    r5 = 0x10000000;
    r3 = "Less or Equal";
    puts (r3);
    r0 = *((r1 + 0x2));
label_3:
    if (r29 >= r0) {
        r6 = 0x10000000;
        r3 = "Greater or Equal";
        puts (r3);
        r0 = *((r1 + 0x2));
    }
    if (r29 < r0) {
        r7 = 0x10000000;
        r3 = "Less";
        puts (r3);
    }
    r0 = *((r1 + 0x3));
    if (r29 > r0) {
        goto label_7;
    }
label_2:
    if (r29 <= r0) {
        goto label_8;
    }
label_1:
    if (r29 >= r0) {
        goto label_9;
    }
label_0:
    while (1) {
        r9 = *((r1 + 0x2));
        r10 = r9 - 5;
        if (r10 >= 0) {
            r9 = 0x10000000;
            r3 = "Minus";
            puts (r3);
            r9 = *((r1 + 0x2));
        }
        r11 = r9 - 5;
        if (r11 < 0) {
            goto label_10;
        }
        r11 = *((r1 + 0x9));
        r29 = *((r1 + 0x5));
        r1 += 0x20;
        lr = r11;
        return r3;
        r29 = 0x10000000;
        r3 = "Carry Set";
        puts (r3);
    }
label_9:
    r9 = 0x10000000;
    r3 = "Carry Clear";
    puts (r3);
    r0 = *((r1 + 0x3));
    goto label_0;
label_8:
    r10 = 0x10000000;
    r3 = "Less or Equal Unsigned";
    puts (r3);
    r0 = *((r1 + 0x3));
    goto label_1;
label_7:
    r8 = 0x10000000;
    r3 = "Greater Unsigned";
    puts (r3);
    r0 = *((r1 + 0x3));
    goto label_2;
label_5:
    r7 = 0x10000000;
    r3 = 0x100009a8;
    puts (r3);
    r0 = *((r1 + 0x2));
    if (r29 != r0) {
        r8 = 0x10000000;
        r3 = "Not Equal";
        puts (r3);
        r0 = *((r1 + 0x2));
    }
    if (r29 > r0) {
label_6:
        r4 = 0x10000000;
        r3 = "Greater";
        puts (r3);
        r0 = *((r1 + 0x2));
    }
    if (r29 > r0) {
        goto label_3;
    }
    goto label_4;
label_10:
    r12 = 0x10000000;
    r3 = "Plus";
    puts (r3);
    r11 = *((r1 + 0x9));
    r29 = *((r1 + 0x5));
    r1 += 0x20;
    lr = r11;
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000724 */
#include <stdint.h>
 
void savefpr_19 () {
    __asm ("stfd f19, -0x68(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007e0 */
#include <stdint.h>
 
void restfpr_28 () {
    __asm ("lfd f28, -0x20(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007d8 */
#include <stdint.h>
 
void restfpr_26 () {
    __asm ("lfd f26, -0x30(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000768 */
#include <stdint.h>
 
void savegpr_17 () {
    *((r11 - 0xf)) = r17;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000878 */
#include <stdint.h>
 
void restfpr_28_x () {
    __asm ("lfd f28, -0x20(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007c0 */
#include <stdint.h>
 
void restfpr_20 () {
    __asm ("lfd f20, -0x60(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000084c */
#include <stdint.h>
 
void restfpr_17_x () {
    __asm ("lfd f17, -0x78(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000750 */
#include <stdint.h>
 
void savefpr_30 () {
    __asm ("stfd f30, -0x10(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000073c */
#include <stdint.h>
 
void savefpr_25 () {
    __asm ("stfd f25, -0x38(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007a0 */
#include <stdint.h>
 
void savegpr_31 () {
    *((r11 - 0x1)) = r31;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000780 */
#include <stdint.h>
 
void savegpr_23 () {
    *((r11 - 0x9)) = r23;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000738 */
#include <stdint.h>
 
void savefpr_24 () {
    __asm ("stfd f24, -0x40(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000095c */
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
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000087c */
#include <stdint.h>
 
void restfpr_29_x () {
    __asm ("lfd f29, -0x18(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000720 */
#include <stdint.h>
 
void savefpr_18 () {
    __asm ("stfd f18, -0x70(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000798 */
#include <stdint.h>
 
void savegpr_29 () {
    *((r11 - 0x3)) = r29;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000854 */
#include <stdint.h>
 
void restfpr_19_x () {
    __asm ("lfd f19, -0x68(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000828 */
#include <stdint.h>
 
void restgpr_27 () {
    r27 = *((r11 - 0x5));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000814 */
#include <stdint.h>
 
void restgpr_22 () {
    r22 = *((r11 - 0xa));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000784 */
#include <stdint.h>
 
void savegpr_24 () {
    *((r11 - 0x8)) = r24;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000870 */
#include <stdint.h>
 
void restfpr_26_x () {
    __asm ("lfd f26, -0x30(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007b8 */
#include <stdint.h>
 
void restfpr_18 () {
    __asm ("lfd f18, -0x70(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000770 */
#include <stdint.h>
 
void savegpr_19 () {
    *((r11 - 0xd)) = r19;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007b0 */
#include <stdint.h>
 
void restfpr_16 () {
    __asm ("lfd f16, -0x80(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000898 */
#include <stdint.h>
 
void restgpr_14_x () {
    r14 = *((r11 - 0x12));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000734 */
#include <stdint.h>
 
void savefpr_23 () {
    __asm ("stfd f23, -0x48(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007e8 */
#include <stdint.h>
 
void restfpr_30 () {
    __asm ("lfd f30, -0x10(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000764 */
#include <stdint.h>
 
void savegpr_16 () {
    *((r11 - 0x10)) = r16;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000858 */
#include <stdint.h>
 
void restfpr_20_x () {
    __asm ("lfd f20, -0x60(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007e4 */
#include <stdint.h>
 
void restfpr_29 () {
    __asm ("lfd f29, -0x18(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007d0 */
#include <stdint.h>
 
void restfpr_24 () {
    __asm ("lfd f24, -0x40(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000079c */
#include <stdint.h>
 
void savegpr_30 () {
    *((r11 - 0x2)) = r30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008b4 */
#include <stdint.h>
 
void restgpr_21_x () {
    r21 = *((r11 - 0xb));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000834 */
#include <stdint.h>
 
void restgpr_30 () {
    r30 = *((r11 - 0x2));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000860 */
#include <stdint.h>
 
void restfpr_22_x () {
    __asm ("lfd f22, -0x50(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008a0 */
#include <stdint.h>
 
void restgpr_16_x () {
    r16 = *((r11 - 0x10));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008cc */
#include <stdint.h>
 
void restgpr_27_x () {
    r27 = *((r11 - 0x5));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x1000077c */
#include <stdint.h>
 
void savegpr_22 () {
    *((r11 - 0xa)) = r22;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007fc */
#include <stdint.h>
 
void restgpr_16 () {
    r16 = *((r11 - 0x10));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000818 */
#include <stdint.h>
 
void restgpr_23 () {
    r23 = *((r11 - 0x9));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000800 */
#include <stdint.h>
 
void restgpr_17 () {
    r17 = *((r11 - 0xf));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000740 */
#include <stdint.h>
 
void savefpr_26 () {
    __asm ("stfd f26, -0x30(r11)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100008b0 */
#include <stdint.h>
 
void restgpr_20_x () {
    r20 = *((r11 - 0xc));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x100007ec */
#include <stdint.h>
 
void restfpr_31 () {
    __asm ("lfd f31, -8(r11)");
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/ppc_elf_by_boomerang_o4/subject.exe @ 0x10000014 */
#include <stdint.h>
 
void fcn_10000014 () {
}
