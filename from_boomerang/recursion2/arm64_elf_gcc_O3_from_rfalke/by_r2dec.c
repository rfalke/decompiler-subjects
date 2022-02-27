/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x730 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = __libc_csu_init;
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1500 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 = .init_array;
    x20 = 0x11db0;
    x20 -= x21;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x22 = x2;
    w24 = w0;
    x23 = x1;
    init ();
    x20 >>= 3;
    if (x20 == 0) {
        goto label_0;
    }
    x19 = 0x0;
    do {
        offset_0 = x19 << 3;
        x3 = *((x21 + offset_0));
        x2 = x22;
        x1 = x23;
        w0 = w24;
        x19++;
        uint64_t (*x3)(uint32_t, uint64_t, uint64_t, uint64_t) (w0, x1, x2, x3);
    } while (x20 != x19);
label_0:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(int argc); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    b ();
    w2 = 0x0;
    x0 = "ecx is %d, edx is %d\n";
    w1 = 0x0;
    printf (x0, w1, w2);
    x1 = 0x12000;
    x0 = "res is %d\n";
    w1 = *(0x12074);
    printf (x0, x1);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xc90 */
#include <stdint.h>
 
uint32_t b () {
    int64_t var_10h;
    int64_t var_10h_2;
    x5 = 0x12000;
    x0 = x5 + 0x38;
    w1 = *((x0 + 0x34));
    w1--;
    *((x0 + 0x34)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_8;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x6 = 0x12000;
    x29 = sp;
    w1 = *((x0 + 8));
    w1--;
    *((x0 + 8)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0xc));
        w1--;
        *((x0 + 0xc)) = w1;
        if ((w1 & 0x1f) != 0) {
            goto label_9;
        }
        w1 = *((x0 + 0x10));
        w1--;
        *((x0 + 0x10)) = w1;
        if ((w1 & 0x1f) == 0) {
            c ();
        }
        x6 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
label_3:
        w0 += 5;
        *((x6 + 0x74)) = w0;
    }
    x1 = x5 + 0x38;
    w0 = *((x1 + 0x14));
    w0--;
    *((x1 + 0x14)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x5 + 0x38));
        w2 = w0 - 1;
        *((x5 + 0x38)) = w2;
        if ((w2 & 0x1f) != 0) {
            goto label_10;
        }
        w2 = *((x1 + 4));
        w3 = w2 - 1;
        *((x1 + 4)) = w3;
        if ((w3 & 0x1f) != 0) {
            goto label_11;
        }
        w3 = w0 - 2;
        *((x5 + 0x38)) = w3;
        if (w3 == 1) {
            goto label_12;
        }
        w3 = w2 - 2;
        *((x1 + 4)) = w3;
        if (w3 == 1) {
            goto label_13;
        }
        w0 -= 3;
        *((x5 + 0x38)) = w0;
        if (w0 == 1) {
            goto label_14;
        }
        w2 -= 3;
        *((x1 + 4)) = w2;
        if (w2 != 1) {
            f ();
        }
        w0 = *((x6 + 0x74));
        w0 += 0xd;
        w0 += 0xb;
label_6:
        w0 += 0xd;
label_7:
        w0 += 0xb;
label_0:
        w0 += 0xd;
label_5:
        w0 += 0xb;
        *((x6 + 0x74)) = w0;
    }
    x1 = x5 + 0x38;
    w0 = *((x1 + 0x18));
    w0--;
    *((x1 + 0x18)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x1 + 0x1c));
        w0--;
        *((x1 + 0x1c)) = w0;
        if ((w0 & 0x1f) != 0) {
            goto label_15;
        }
        w0 = *((x6 + 0x74));
        w0 += 0x13;
label_2:
        w0 += 0x11;
        *((x6 + 0x74)) = w0;
    }
    x0 = x5 + 0x38;
    w1 = *((x0 + 0x20));
    w1--;
    *((x0 + 0x20)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_16;
    }
    w1 = *((x0 + 0x24));
    w1--;
    *((x0 + 0x24)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_17;
    }
    w1 = *((x0 + 0x28));
    w1--;
    *((x0 + 0x28)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_18;
    }
    w1 = *((x0 + 0x10));
    w1--;
    *((x0 + 0x10)) = w1;
    if ((w1 & 0x1f) == 0) {
        c ();
    }
    w0 = *((x6 + 0x74));
    w0 += 7;
    do {
        w0 += 0x1b;
label_4:
        w0 += 0x17;
        *((x6 + 0x74)) = w0;
label_16:
        x5 += 0x38;
        w0 = *((x5 + 0x2c));
        w0--;
        *((x5 + 0x2c)) = w0;
        if ((w0 & 0x1f) == 0) {
            w0 = *((x5 + 0x30));
            w0--;
            *((x5 + 0x30)) = w0;
            if ((w0 & 0x1f) != 0) {
                goto label_19;
            }
            w0 = *((x5 + 0x34));
            w0--;
            *((x5 + 0x34)) = w0;
            if ((w0 & 0x1f) == 0) {
                c ();
            }
            w0 = *((x6 + 0x74));
            w0 += 2;
            w0 += 0x1d;
label_1:
            w0 += 3;
            w0 += 2;
            *((x6 + 0x74)) = w0;
            x29 = *(sp);
            x30 = *((sp + 8));
            return;
        }
        w0 = *((x6 + 0x74));
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 += 3;
        w0 += 2;
        *((x6 + 0x74)) = w0;
        return w0;
label_8:
        x6 = 0x12000;
        w0 = *(0x12074);
        w0 += 2;
        *((x6 + 0x74)) = w0;
        return w0;
label_18:
        w0 = *((x6 + 0x74));
    } while (1);
label_11:
    w0 = *((x6 + 0x74));
    goto label_0;
label_19:
    w0 = *((x6 + 0x74));
    w0 += 0x1d;
    goto label_1;
label_15:
    w0 = *((x6 + 0x74));
    goto label_2;
label_9:
    w0 = *((x6 + 0x74));
    goto label_3;
label_17:
    w0 = *((x6 + 0x74));
    goto label_4;
label_10:
    w0 = *((x6 + 0x74));
    goto label_5;
label_14:
    w0 = *((x6 + 0x74));
    w0 += 0xb;
    goto label_6;
label_12:
    w0 = *((x6 + 0x74));
    w0 += 0xb;
    goto label_0;
label_13:
    w0 = *((x6 + 0x74));
    w0 += 0xd;
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1578).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x768 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x6c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x780 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = .bss;
    x0 = .bss;
    x1 += 7;
    x1 -= x0;
    if (x1 >= 0xe) {
        x1 = .comment;
        if (x1 == 0) {
            goto label_0;
        }
        uint64_t (*x1)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7b8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = .bss;
    x1 -= x0;
    x1 >>= 3;
    x1 = .bss;
    x1 >>= 1;
    if (x1 != 0) {
        x2 = .comment;
        if (x2 == 0) {
            goto label_0;
        }
        uint64_t (*x2)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7f8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x12000;
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12030);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x70)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x7b8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x7b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xc10 */
#include <stdint.h>
 
uint32_t d () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x12038;
    w1 = *(0x12044);
    w1--;
    *((x0 + 0xc)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0x10));
        w1--;
        *((x0 + 0x10)) = w1;
        if ((w1 & 0x1f) == 0) {
            *((sp + -0x10)) = x29;
            *((sp + -0x10 + 8)) = x30;
            x29 = sp;
            c ();
            x1 = 0x12000;
            x29 = *(sp);
            x30 = *((sp + 8));
            w0 = *(0x12074);
            w0 += 7;
            w0 += 5;
            *((x1 + 0x74)) = w0;
            return w0;
        }
        x1 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
        w0 += 5;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x12000;
    w0 = *(0x12074);
    w0 += 5;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x9a0 */
#include <stdint.h>
 
void c () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x12000;
    x1 = x19 + 0x38;
    x20 = 0x12000;
    w0 = *((x1 + 8));
    w0--;
    *((x1 + 8)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x1 + 0xc));
        w0--;
        *((x1 + 0xc)) = w0;
        if ((w0 & 0x1f) != 0) {
            goto label_9;
        }
        w0 = *((x1 + 0x10));
        w0--;
        *((x1 + 0x10)) = w0;
        if ((w0 & 0x1f) == 0) {
            c ();
        }
        x20 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
label_0:
        w0 += 5;
        *((x20 + 0x74)) = w0;
    }
    x1 = x19 + 0x38;
    w0 = *((x1 + 0x14));
    w0--;
    *((x1 + 0x14)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x19 + 0x38));
        w2 = w0 - 1;
        *((x19 + 0x38)) = w2;
        if ((w2 & 0x1f) != 0) {
            goto label_10;
        }
        w2 = *((x1 + 4));
        w3 = w2 - 1;
        *((x1 + 4)) = w3;
        if ((w3 & 0x1f) != 0) {
            goto label_11;
        }
        w3 = w0 - 2;
        *((x19 + 0x38)) = w3;
        if (w3 == 1) {
            goto label_12;
        }
        w3 = w2 - 2;
        *((x1 + 4)) = w3;
        if (w3 == 1) {
            goto label_13;
        }
        w0 -= 3;
        *((x19 + 0x38)) = w0;
        if (w0 == 1) {
            goto label_14;
        }
        w2 -= 3;
        *((x1 + 4)) = w2;
        if (w2 != 1) {
            f ();
        }
        w0 = *((x20 + 0x74));
        w0 += 0xd;
        w0 += 0xb;
label_8:
        w0 += 0xd;
label_7:
        w0 += 0xb;
label_3:
        w0 += 0xd;
label_5:
        w0 += 0xb;
        *((x20 + 0x74)) = w0;
    }
label_1:
    x1 = x19 + 0x38;
    w0 = *((x1 + 0x18));
    w0--;
    *((x1 + 0x18)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x1 + 0x1c));
        w0--;
        *((x1 + 0x1c)) = w0;
        if ((w0 & 0x1f) != 0) {
            goto label_15;
        }
        w0 = *((x20 + 0x74));
        w0 += 0x13;
label_4:
        w0 += 0x11;
        *((x20 + 0x74)) = w0;
    }
    x0 = x19 + 0x38;
    w1 = *((x0 + 0x20));
    w1--;
    *((x0 + 0x20)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0x24));
        w1--;
        *((x0 + 0x24)) = w1;
        if ((w1 & 0x1f) != 0) {
            goto label_16;
        }
        w1 = *((x0 + 0x28));
        w1--;
        *((x0 + 0x28)) = w1;
        if ((w1 & 0x1f) != 0) {
            goto label_17;
        }
        w1 = *((x0 + 0x10));
        w1--;
        *((x0 + 0x10)) = w1;
        if ((w1 & 0x1f) == 0) {
            c ();
        }
        w0 = *((x20 + 0x74));
        w0 += 7;
label_6:
        w0 += 0x1b;
label_2:
        w0 += 0x17;
        *((x20 + 0x74)) = w0;
    }
    x19 += 0x38;
    w0 = *((x19 + 0x2c));
    w0--;
    *((x19 + 0x2c)) = w0;
    if ((w0 & 0x1f) != 0) {
        goto label_18;
    }
    w0 = *((x19 + 0x30));
    w0--;
    *((x19 + 0x30)) = w0;
    if ((w0 & 0x1f) != 0) {
        goto label_19;
    }
    w0 = *((x19 + 0x34));
    w0--;
    *((x19 + 0x34)) = w0;
    if ((w0 & 0x1f) == 0) {
        c ();
    }
    w0 = *((x20 + 0x74));
    w0 += 2;
    do {
        w0 += 0x1d;
        w0 += 3;
        *((x20 + 0x74)) = w0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_19:
        w0 = *((x20 + 0x74));
    } while (1);
label_18:
    w0 = *((x20 + 0x74));
    w0 += 3;
    *((x20 + 0x74)) = w0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_9:
    w0 = *((x20 + 0x74));
    goto label_0;
label_10:
    w0 = *((x20 + 0x74));
    w0 += 0xb;
    *((x20 + 0x74)) = w0;
    goto label_1;
label_16:
    w0 = *((x20 + 0x74));
    goto label_2;
label_12:
    w0 = *((x20 + 0x74));
    w0 += 0xb;
    goto label_3;
label_15:
    w0 = *((x20 + 0x74));
    goto label_4;
label_11:
    w0 = *((x20 + 0x74));
    w0 += 0xd;
    goto label_5;
label_17:
    w0 = *((x20 + 0x74));
    goto label_6;
label_13:
    w0 = *((x20 + 0x74));
    w0 += 0xd;
    goto label_7;
label_14:
    w0 = *((x20 + 0x74));
    w0 += 0xb;
    goto label_8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1480 */
#include <stdint.h>
 
uint32_t l () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x12038;
    w1 = l_b;
    w1--;
    *((x0 + 0x30)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0x34));
        w1--;
        *((x0 + 0x34)) = w1;
        if ((w1 & 0x1f) == 0) {
            *((sp + -0x10)) = x29;
            *((sp + -0x10 + 8)) = x30;
            x29 = sp;
            c ();
            x1 = 0x12000;
            x29 = *(sp);
            x30 = *((sp + 8));
            w0 = *(0x12074);
            w0 += 2;
            w0 += 0x1d;
            *((x1 + 0x74)) = w0;
            return w0;
        }
        x1 = 0x12000;
        w0 = *(0x12074);
        w0 += 2;
        w0 += 0x1d;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x12000;
    w0 = 0x12091;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1358 */
#include <stdint.h>
 
uint32_t j () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x12038;
    w1 = j_k;
    w1--;
    *((x0 + 0x24)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_0;
    }
    w1 = *((x0 + 0x28));
    w1--;
    *((x0 + 0x28)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0x10));
        w1--;
        *((x0 + 0x10)) = w1;
        if ((w1 & 0x1f) != 0) {
            goto label_1;
        }
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        c ();
        x1 = 0x12000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = *(0x12074);
        w0 += 7;
        w0 += 0x1b;
        w0 += 0x17;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x12000;
    w0 = *(0x12074);
    do {
        w0 += 0x1b;
        w0 += 0x17;
        *((x1 + 0x74)) = w0;
        return w0;
label_0:
        x1 = 0x12000;
        w0 = 0x1208b;
        *((x1 + 0x74)) = w0;
        return w0;
label_1:
        x1 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1300 */
#include <stdint.h>
 
uint32_t h () {
    x1 = 0x12038;
    w0 = *(0x12054);
    w0--;
    *((x1 + 0x1c)) = w0;
    x1 = 0x12000;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x1 + 0x74));
        w0 += 0x13;
        w0 += 0x11;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    w0 = *((x1 + 0x74));
    w0 += 0x11;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x157c */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [14] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x878 */
#include <stdint.h>
 
uint32_t f () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x12000;
    w1 = *(0x12038);
    w2 = w1 - 1;
    *((x0 + 0x38)) = w2;
    if ((w2 & 0x1f) != 0) {
        goto label_2;
    }
    x3 = x0 + 0x38;
    w2 = *((x3 + 4));
    w4 = w2 - 1;
    *((x3 + 4)) = w4;
    if ((w4 & 0x1f) == 0) {
        w4 = w1 - 2;
        *((x0 + 0x38)) = w4;
        if (w4 == 1) {
            goto label_3;
        }
        w4 = w2 - 2;
        *((x3 + 4)) = w4;
        if (w4 == 1) {
            goto label_4;
        }
        w1 -= 3;
        *((x0 + 0x38)) = w1;
        if (w1 == 1) {
            goto label_5;
        }
        w2 -= 3;
        *((x3 + 4)) = w2;
        if (w2 == 1) {
            goto label_6;
        }
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        f ();
        x1 = 0x12000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x120bc;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x12000;
    w0 = *(0x12074);
    do {
label_0:
        w0 += 0xd;
        w0 += 0xb;
        *((x1 + 0x74)) = w0;
        return w0;
label_2:
        x1 = 0x12000;
        w0 = 0x1207f;
        *((x1 + 0x74)) = w0;
        return w0;
label_4:
        x1 = 0x12000;
        w0 = 0x12081;
label_1:
        w0 += 0xb;
    } while (1);
label_3:
    x1 = 0x12000;
    w0 = 0x1207f;
    goto label_0;
label_5:
    x1 = 0x12000;
    w0 = 0x1207f;
    do {
        w0 += 0xd;
        goto label_1;
label_6:
        x1 = 0x12000;
        w0 = 0x1208c;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x11b0 */
#include <stdint.h>
 
uint32_t g () {
    int64_t var_10h;
    int64_t var_10h_2;
    x1 = 0x12000;
    x0 = x1 + 0x38;
    w3 = *((x0 + 4));
    w2 = w3 - 1;
    *((x0 + 4)) = w2;
    if ((w2 & 0x1f) != 0) {
        goto label_3;
    }
    w2 = *((x1 + 0x38));
    w4 = w2 - 1;
    *((x1 + 0x38)) = w4;
    if ((w4 & 0x1f) == 0) {
        w4 = w3 - 2;
        *((x0 + 4)) = w4;
        if (w4 == 1) {
            goto label_4;
        }
        w4 = w2 - 2;
        *((x1 + 0x38)) = w4;
        if (w4 == 1) {
            goto label_5;
        }
        w4 = w3 - 3;
        *((x0 + 4)) = w4;
        if (w4 == 1) {
            goto label_6;
        }
        w2 -= 3;
        *((x1 + 0x38)) = w2;
        if (w2 == 1) {
            goto label_7;
        }
        w3 -= 4;
        *((x0 + 4)) = w3;
        if (w3 == 1) {
            goto label_8;
        }
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        f ();
        x1 = 0x12000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x120c9;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x12000;
    w0 = *(0x12074);
    do {
label_0:
        w0 += 0xb;
        w0 += 0xd;
        *((x1 + 0x74)) = w0;
        return w0;
label_3:
        x1 = 0x12000;
        w0 = 0x12081;
        *((x1 + 0x74)) = w0;
        return w0;
label_5:
        x1 = 0x12000;
        w0 = 0x1207f;
label_1:
        w0 += 0xd;
    } while (1);
label_4:
    x1 = 0x12000;
    w0 = 0x12081;
    goto label_0;
label_6:
    x1 = 0x12000;
    w0 = 0x12081;
    do {
        w0 += 0xb;
        goto label_1;
label_8:
        x1 = 0x12000;
        w0 = 0x1208c;
label_2:
        w0 += 0xd;
    } while (1);
label_7:
    x1 = 0x12000;
    w0 = 0x1207f;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xf20 */
#include <stdint.h>
 
uint32_t e () {
    int64_t var_10h;
    int64_t var_10h_2;
    x5 = 0x12000;
    x0 = x5 + 0x38;
    w2 = *((x0 + 0x10));
    w1 = w2 - 1;
    *((x0 + 0x10)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_8;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x6 = 0x12000;
    x29 = sp;
    w1 = *((x0 + 8));
    w1--;
    *((x0 + 8)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0xc));
        w1--;
        *((x0 + 0xc)) = w1;
        if ((w1 & 0x1f) != 0) {
            goto label_9;
        }
        w2 -= 2;
        *((x0 + 0x10)) = w2;
        if (w2 != 1) {
            c ();
        }
        x6 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
label_3:
        w0 += 5;
        *((x6 + 0x74)) = w0;
    }
    x1 = x5 + 0x38;
    w0 = *((x1 + 0x14));
    w0--;
    *((x1 + 0x14)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x5 + 0x38));
        w2 = w0 - 1;
        *((x5 + 0x38)) = w2;
        if ((w2 & 0x1f) != 0) {
            goto label_10;
        }
        w2 = *((x1 + 4));
        w3 = w2 - 1;
        *((x1 + 4)) = w3;
        if ((w3 & 0x1f) != 0) {
            goto label_11;
        }
        w3 = w0 - 2;
        *((x5 + 0x38)) = w3;
        if (w3 == 1) {
            goto label_12;
        }
        w3 = w2 - 2;
        *((x1 + 4)) = w3;
        if (w3 == 1) {
            goto label_13;
        }
        w0 -= 3;
        *((x5 + 0x38)) = w0;
        if (w0 == 1) {
            goto label_14;
        }
        w2 -= 3;
        *((x1 + 4)) = w2;
        if (w2 != 1) {
            f ();
        }
        w0 = *((x6 + 0x74));
        w0 += 0xd;
        w0 += 0xb;
label_6:
        w0 += 0xd;
label_7:
        w0 += 0xb;
label_0:
        w0 += 0xd;
label_5:
        w0 += 0xb;
        *((x6 + 0x74)) = w0;
    }
    x1 = x5 + 0x38;
    w0 = *((x1 + 0x18));
    w0--;
    *((x1 + 0x18)) = w0;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x1 + 0x1c));
        w0--;
        *((x1 + 0x1c)) = w0;
        if ((w0 & 0x1f) != 0) {
            goto label_15;
        }
        w0 = *((x6 + 0x74));
        w0 += 0x13;
label_2:
        w0 += 0x11;
        *((x6 + 0x74)) = w0;
    }
    x0 = x5 + 0x38;
    w1 = *((x0 + 0x20));
    w1--;
    *((x0 + 0x20)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_16;
    }
    w1 = *((x0 + 0x24));
    w1--;
    *((x0 + 0x24)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_17;
    }
    w1 = *((x0 + 0x28));
    w1--;
    *((x0 + 0x28)) = w1;
    if ((w1 & 0x1f) != 0) {
        goto label_18;
    }
    w1 = *((x0 + 0x10));
    w1--;
    *((x0 + 0x10)) = w1;
    if ((w1 & 0x1f) == 0) {
        c ();
    }
    w0 = *((x6 + 0x74));
    w0 += 7;
    do {
        w0 += 0x1b;
label_4:
        w0 += 0x17;
        *((x6 + 0x74)) = w0;
label_16:
        x5 += 0x38;
        w0 = *((x5 + 0x2c));
        w0--;
        *((x5 + 0x2c)) = w0;
        if ((w0 & 0x1f) == 0) {
            w0 = *((x5 + 0x30));
            w0--;
            *((x5 + 0x30)) = w0;
            if ((w0 & 0x1f) != 0) {
                goto label_19;
            }
            w0 = *((x5 + 0x34));
            w0--;
            *((x5 + 0x34)) = w0;
            if ((w0 & 0x1f) == 0) {
                c ();
            }
            w0 = *((x6 + 0x74));
            w0 += 2;
            w0 += 0x1d;
label_1:
            w0 += 3;
            w0 += 7;
            *((x6 + 0x74)) = w0;
            x29 = *(sp);
            x30 = *((sp + 8));
            return;
        }
        w0 = *((x6 + 0x74));
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 += 3;
        w0 += 7;
        *((x6 + 0x74)) = w0;
        return w0;
label_8:
        x6 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
        *((x6 + 0x74)) = w0;
        return w0;
label_18:
        w0 = *((x6 + 0x74));
    } while (1);
label_11:
    w0 = *((x6 + 0x74));
    goto label_0;
label_19:
    w0 = *((x6 + 0x74));
    w0 += 0x1d;
    goto label_1;
label_15:
    w0 = *((x6 + 0x74));
    goto label_2;
label_9:
    w0 = *((x6 + 0x74));
    goto label_3;
label_17:
    w0 = *((x6 + 0x74));
    goto label_4;
label_10:
    w0 = *((x6 + 0x74));
    goto label_5;
label_14:
    w0 = *((x6 + 0x74));
    w0 += 0xb;
    goto label_6;
label_12:
    w0 = *((x6 + 0x74));
    w0 += 0xb;
    goto label_0;
label_13:
    w0 = *((x6 + 0x74));
    w0 += 0xd;
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1340 */
#include <stdint.h>
 
uint32_t i () {
    x1 = 0x12000;
    w0 = 0x12087;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1400 */
#include <stdint.h>
 
uint32_t k () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x12038;
    w1 = k_e;
    w1--;
    *((x0 + 0x28)) = w1;
    if ((w1 & 0x1f) == 0) {
        w1 = *((x0 + 0x10));
        w1--;
        *((x0 + 0x10)) = w1;
        if ((w1 & 0x1f) == 0) {
            *((sp + -0x10)) = x29;
            *((sp + -0x10 + 8)) = x30;
            x29 = sp;
            c ();
            x1 = 0x12000;
            x29 = *(sp);
            x30 = *((sp + 8));
            w0 = *(0x12074);
            w0 += 7;
            w0 += 0x1b;
            *((x1 + 0x74)) = w0;
            return w0;
        }
        x1 = 0x12000;
        w0 = *(0x12074);
        w0 += 7;
        w0 += 0x1b;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x12000;
    w0 = 0x1208f;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x660 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [11] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x680 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 112 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
