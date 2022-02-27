/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x620 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 3164 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x0 = sp;
    x1 = 0x11db8;
    return void (*0x63c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x598 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [07] -r-x section size 16 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x127c */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [10] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x664 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x0 = .data;
    x0 += 8;
    x1 = .data;
    x1 += 8;
    if (x1 != x0) {
        x1 = .comment;
        if (x1 == 0) {
            goto label_0;
        }
        x16 = x1;
        uint64_t (*x16)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x694 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = .data;
    x0 += 8;
    x1 = .data;
    x1 += 8;
    x1 -= x0;
    x2 = 0x2;
    x1 >>= 3;
    x1 /= x2;
    if (x1 != 0) {
        x2 = .comment;
        if (x2 == 0) {
            goto label_0;
        }
        x16 = x2;
        uint64_t (*x16)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void entry_fini0 () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = .data;
    w1 = *((x0 + 8));
    if (w1 == 0) {
        *((sp + -0x20)) = x29;
        *((sp + -0x20 + 8)) = x30;
        x29 = sp;
        *((sp + 0x10)) = x19;
        x19 = x0;
        x0 = .comment;
        if (x0 != 0) {
            x0 = .comment;
            cxa_finalize ();
        }
        deregister_tm_clones ();
        x0 = .comment;
        if (x0 != 0) {
            x0 = .eh_frame;
            loc_imp_deregister_frame_info ();
        }
        w0 = 0x1;
        *((x19 + 8)) = w0;
        x19 = *((sp + 0x10));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x1;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x738 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .comment;
    if (x0 != 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        x1 = 0x10;
        x0 = .eh_frame;
        loc_imp_register_frame_info ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    return void (*0x694)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x120c */
#include <stdint.h>
 
uint64_t sfp_handle_exceptions () {
    if ((w0 & 0) != 0) {
        v1.2s = 0x0;
        s0 = s1 / s1;
        x1 = fpsr;
    }
    if ((w0 & 1) != 0) {
        s1 = 1.00000000;
        v2.2s = 0x0;
        s0 = s1 / s2;
        x1 = fpsr;
    }
    if ((w0 & 2) != 0) {
        w1 = 0x80800000;
        s1 = w1;
        w1 = 0x749dc5ae;
        s2 = w1;
        s0 = s1 + s2;
        x1 = fpsr;
    }
    if ((w0 & 3) != 0) {
        v1.2s = 0x80;
        s0 = s1 * s1;
        x1 = fpsr;
    }
    if ((w0 & 4) != 0) {
        w0 = 0x80800000;
        s2 = 1;
        s1 = w0;
        s0 = s1 - s2;
        x0 = fpsr;
    }
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x7ec */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void addtf3 (uint32_t arg3, uint32_t arg6) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x2 = arg3;
    x5 = arg6;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = q0;
    x9 = *((sp + 0x10));
    x5 = *((sp + 0x10 + 8));
    *((sp + 0x10)) = q1;
    x1 = *((sp + 0x10));
    x2 = *((sp + 0x10 + 8));
    x10 = fpcr;
    x0 = (x5 >> 0x30) & ((1 << 0xf) - 1);
    x12 = (x2 >> 0x30) & ((1 << 0xf) - 1);
    value_0 = x5 >> 0xd;
    x3 = value_0 << 0xd;
    x11 = x2 >> 0x3f;
    x4 = x0;
    value_1 = x2 >> 0xd;
    x2 = value_1 << 0xd;
    w0 -= w12;
    x8 = x5 >> 0x3f;
    x14 = x1;
    x2 |= (x1 >> 61);
    x3 |= (x9 >> 61);
    x7 = x9 << 3;
    x6 = x12;
    x1 <<= 3;
    w5 = w0;
    if (x11 != x5) {
        goto label_36;
    }
    __asm ("b.le 0x990");
    x9 = 0x7fff;
    if (x12 != 0) {
        goto label_37;
    }
    x5 = x2 | x1;
    if (x5 == 0) {
label_9:
        if (x4 != x9) {
            goto label_27;
        }
        x1 = x3 | x7;
        if (x1 == 0) {
            goto label_38;
        }
        x0 = x3 >> 0x32;
        x2 = x3;
        x0 ^= 1;
        x1 = x7;
        w0 &= 1;
        goto label_6;
    }
    w5 = w0 - 1;
    if (w5 == w0) {
        x1 = x7 + x1;
        x7 = x1;
        __asm ("adc x3, x3, x2");
        if ((x3 & 0x33) == 0) {
label_0:
            goto label_27;
        }
        x4++;
        x0 = 0x7fff;
        if (x4 == x0) {
            goto label_39;
        }
        x2 = x3 & 0xfff7ffffffffffff;
        x1 = x7 & 1;
        x1 |= (x7 >> 1);
        x1 |= (x3 << 63);
        x2 >>= 1;
label_26:
        w0 = 0x0;
        goto label_14;
    }
    if (x4 != x9) {
        goto label_40;
    }
    do {
label_10:
        x1 = x3 | x7;
        if (x1 == 0) {
            goto label_38;
        }
        x0 = x3 >> 0x32;
        x2 = x3;
        x0 ^= 1;
        x1 = x7;
        w0 &= 1;
        goto label_14;
label_37:
    } while (x4 == x9);
    x2 |= 0x8000000000000;
label_40:
    if (w5 > 0x74) {
        goto label_41;
    }
    if (w5 > 0x3f) {
        goto label_42;
    }
    w6 = 0x40;
    w6 -= w5;
    x9 = x1 >> x5;
    x1 <<= x6;
    x0 = x2 << x6;
    x1 = (x1 != 0) ? 1 : 0;
    x0 |= x9;
    x2 >>= x5;
    x0 |= x1;
    do {
        x1 = x0 + x7;
        x7 = x1;
        __asm ("adc x3, x2, x3");
        goto label_0;
label_42:
        w0 = w5 - 0x40;
        w6 = 0x80;
        w6 -= w5;
        x0 = x2 >> x0;
        x2 <<= x6;
        x2 = (w5 != 0x40) ? x2 : 0;
        x1 = x2 | x1;
        x1 = (x1 != 0) ? 1 : 0;
        x0 |= x1;
label_1:
        x2 = 0x0;
    } while (1);
label_41:
    x1 = x2 | x1;
    x0 = (x1 != 0) ? 1 : 0;
    goto label_1;
    if (x1 == 0) {
        goto label_43;
    }
    x5 = 0x7fff;
    if (x4 != 0) {
        goto label_44;
    }
    x4 = x3 | x7;
    if (x4 != 0) {
        goto label_45;
    }
    if (x12 != x5) {
        goto label_46;
    }
    do {
label_3:
        x0 = x2 | x1;
        if (x0 == 0) {
            goto label_47;
        }
        x0 = x2 >> 0x32;
        x4 = x6;
        x0 ^= 1;
        w0 &= 1;
label_14:
        w5 = 0x0;
        goto label_6;
label_45:
        if (w0 == 1) {
            x1 = x7 + x1;
            x7 = x1;
            __asm ("adc x3, x3, x2");
label_2:
            x4 = x6;
            goto label_0;
        }
    } while (x12 == x5);
    w0 = ~w0;
label_4:
    if (w0 > 0x74) {
        goto label_48;
    }
    if (w0 > 0x3f) {
        goto label_49;
    }
    w5 = 0x40;
    w5 -= w0;
    x9 = x7 >> x0;
    x7 <<= x5;
    x7 = (x7 != 0) ? 1 : 0;
    x4 = x3 << x5;
    x4 |= x9;
    x0 = x3 >> x0;
    x7 = x4 | x7;
label_5:
    x1 = x7 + x1;
    x7 = x1;
    __asm ("adc x3, x0, x2");
    goto label_2;
label_44:
    if (x12 == x5) {
        goto label_3;
    }
    w0 = -w0;
    x3 |= 0x8000000000000;
    goto label_4;
label_49:
    w4 = w0 - 0x40;
    w5 = 0x80;
    w5 -= w0;
    x4 = x3 >> x4;
    x3 <<= x5;
    x3 = (w0 != 0x40) ? x3 : 0;
    x3 |= x7;
    x7 = (x3 != 0) ? 1 : 0;
    x7 = x4 | x7;
    do {
        x0 = 0x0;
        goto label_5;
label_48:
        x3 |= x7;
        x7 = (x3 != 0) ? 1 : 0;
    } while (1);
label_43:
    x0 = x4 + 1;
    x13 = 0x7fff;
    if ((x0 & 0x7ffe) != 0) {
        goto label_50;
    }
    x12 = x3 | x7;
    if (x4 == 0) {
        if (x12 == 0) {
            goto label_51;
        }
        x0 = x2 | x1;
        if (x0 == 0) {
            goto label_20;
        }
        x1 = x7 + x1;
        x7 = x1;
        __asm ("adc x3, x3, x2");
        if ((x3 & 0x33) == 0) {
            goto label_20;
        }
        x2 = x3 & 0xfff7ffffffffffff;
        w0 = 0x0;
        x4 = 0x1;
label_6:
        if ((x1 & 7) == 0) {
            goto label_52;
        }
        x3 = x10 & 0xc00000;
        w0 |= 0x10;
        if (x3 == 0x400) {
            goto label_53;
        }
        if (x3 == 0x800) {
            goto label_54;
        }
        if (x3 == 0) {
            x3 = x1 & 0xf;
            if (x3 == 4) {
                goto label_29;
            }
            x1 += 4;
label_30:
            __asm ("cinc x2, x2, hs");
        }
        if (w5 == 0) {
label_29:
            goto label_55;
        }
        goto label_56;
    }
    if (x4 != x13) {
        goto label_57;
    }
    if (x12 == 0) {
        goto label_58;
    }
    x0 = x3 >> 0x32;
    x0 ^= 1;
    w0 &= 1;
    if (x6 != x4) {
        goto label_59;
    }
    do {
        x4 = x2 | x1;
        if (x4 == 0) {
            goto label_60;
        }
        w0 = ((x2 & 0x4000000000000) != 0) ? w0 : (0 + 1);
        if (x12 == 0) {
            goto label_8;
        }
label_7:
        x9 &= 0x1fffffffffffffff;
        x1 = x3 >> 3;
        x9 |= (x3 << 61);
        if ((x3 & 0x32) != 0) {
            x3 = x2 >> 3;
            if ((x2 & 0x32) != 0) {
                goto label_61;
            }
            x1 = x14 & 0x1fffffffffffffff;
            x8 = x11;
            x9 = x1 | (x2 << 61);
            x1 = x3;
        }
label_61:
        __asm ("extr x2, x1, x9, 0x3d");
        x1 = x9 << 3;
        goto label_8;
label_57:
        if (x6 != x13) {
            goto label_62;
        }
label_35:
        w0 = 0x0;
    } while (1);
label_62:
    w0 = 0x0;
    if (x12 == 0) {
label_8:
        x4 = 0x7fff;
        goto label_6;
    }
label_59:
    x1 = x2 | x1;
    if (x1 != 0) {
        goto label_7;
    }
label_22:
    x2 = x3;
    x1 = x7;
    goto label_8;
label_50:
    if (x0 != x13) {
        x1 = x7 + x1;
        x4 = x0;
        __asm ("adc x2, x3, x2");
        __asm ("extr x1, x2, x1, 1");
        x2 >>= 1;
label_19:
        w0 = 0x0;
        goto label_6;
    }
    x1 = x10 & 0xc00000;
    if (x1 == x10) {
        goto label_63;
    }
    if (x1 != 0x400) {
        goto label_64;
    }
    if (x8 != 0) {
        goto label_65;
    }
    do {
        x4 = x0;
        x2 = 0x0;
        x1 = 0x0;
        goto label_66;
label_64:
        if (x1 != 0x800) {
            goto label_65;
        }
    } while (x8 != 0);
label_65:
    x2 = 0x0;
    x4 = 0x7ffe;
    x1 = x2;
    goto label_66;
label_39:
    x1 = x10 & 0xc00000;
    if (x1 == x10) {
        goto label_67;
    }
    if (x1 != 0x400) {
        goto label_68;
    }
    if (x8 != 0) {
        goto label_69;
    }
    do {
        x2 = 0x0;
        x1 = 0x0;
        goto label_70;
label_68:
        if (x1 != 0x800) {
            goto label_69;
        }
    } while (x8 != 0);
label_69:
    x2 = 0x0;
    x4 = 0x7ffe;
    x1 = x2;
    goto label_70;
label_36:
    __asm ("b.le 0xd28");
    x9 = 0x7fff;
    if (x12 != 0) {
        goto label_71;
    }
    x5 = x2 | x1;
    if (x5 == 0) {
        goto label_9;
    }
    w5 = w0 - 1;
    if (w5 == w0) {
        x7 -= x1;
        __asm ("sbc x3, x3, x2");
        if ((x3 & 0x33) == 0) {
label_11:
            goto label_27;
        }
        x5 = x3 & 0x7ffffffffffff;
        x6 = x7;
        goto label_72;
    }
    if (x4 == x9) {
        goto label_10;
    }
label_12:
    if (w5 > 0x74) {
        goto label_73;
    }
    if (w5 > 0x3f) {
        goto label_74;
    }
    w6 = 0x40;
    w6 -= w5;
    x9 = x1 >> x5;
    x1 <<= x6;
    x0 = x2 << x6;
    x1 = (x1 != 0) ? 1 : 0;
    x0 |= x9;
    x2 >>= x5;
    x0 |= x1;
label_13:
    x7 -= x0;
    __asm ("sbc x3, x3, x2");
    goto label_11;
label_71:
    if (x4 == x9) {
        goto label_10;
    }
    x2 |= 0x8000000000000;
    goto label_12;
label_74:
    w0 = w5 - 0x40;
    w6 = 0x80;
    w6 -= w5;
    x0 = x2 >> x0;
    x2 <<= x6;
    x2 = (w5 != 0x40) ? x2 : 0;
    x1 = x2 | x1;
    x1 = (x1 != 0) ? 1 : 0;
    x0 |= x1;
    do {
        x2 = 0x0;
        goto label_13;
label_73:
        x1 = x2 | x1;
        x0 = (x1 != 0) ? 1 : 0;
    } while (1);
    if (x1 == 0) {
        goto label_75;
    }
    x5 = 0x7fff;
    if (x4 != 0) {
        goto label_76;
    }
    x4 = x3 | x7;
    if (x4 != 0) {
        goto label_77;
    }
    if (x12 != x5) {
        goto label_78;
    }
    do {
label_16:
        x0 = x2 | x1;
        if (x0 == 0) {
            goto label_79;
        }
        x0 = x2 >> 0x32;
        x4 = x6;
        x0 ^= 1;
        x8 = x11;
        w0 &= 1;
        goto label_14;
label_77:
        if (w0 == 1) {
            x7 = x1 - x7;
            __asm ("sbc x3, x2, x3");
label_15:
            x4 = x6;
            x8 = x11;
            goto label_11;
        }
    } while (x12 == x5);
    w0 = ~w0;
label_17:
    if (w0 > 0x74) {
        goto label_80;
    }
    if (w0 > 0x3f) {
        goto label_81;
    }
    w5 = 0x40;
    w5 -= w0;
    x8 = x7 >> x0;
    x7 <<= x5;
    x4 = x3 << x5;
    x5 = (x7 != 0) ? 1 : 0;
    x4 |= x8;
    x0 = x3 >> x0;
    x4 |= x5;
label_18:
    x7 = x1 - x4;
    __asm ("sbc x3, x2, x0");
    goto label_15;
label_76:
    if (x12 == x5) {
        goto label_16;
    }
    w0 = -w0;
    x3 |= 0x8000000000000;
    goto label_17;
label_81:
    w4 = w0 - 0x40;
    w5 = 0x80;
    w5 -= w0;
    x4 = x3 >> x4;
    x3 <<= x5;
    x3 = (w0 != 0x40) ? x3 : 0;
    x3 |= x7;
    x0 = (x3 != 0) ? 1 : 0;
    x4 |= x0;
    do {
        x0 = 0x0;
        goto label_18;
label_80:
        x3 |= x7;
        x4 = (x3 != 0) ? 1 : 0;
    } while (1);
label_75:
    x0 = x4 + 1;
    if ((x0 & 0x7ffe) != 0) {
        goto label_82;
    }
    x12 = x3 | x7;
    x13 = x2 | x1;
    if (x4 != 0) {
        goto label_83;
    }
    if (x12 != 0) {
        goto label_84;
    }
    if (x13 != 0) {
        goto label_85;
    }
    x0 = x10 & 0xc00000;
    x3 = 0x0;
    x7 = 0x0;
    x8 = (x0 == 0x800) ? 1 : 0;
    do {
label_20:
        x0 = x7 | x3;
        x2 = x3;
        x1 = x7;
        w5 = (x0 != 0) ? 1 : 0;
        x4 = 0x0;
        goto label_19;
label_84:
    } while (x13 == 0);
    x4 = x7 - x1;
    __asm ("sbc x0, x3, x2");
    if ((x0 & 0x33) != 0) {
        x7 = x1 - x7;
        __asm ("sbc x3, x2, x3");
label_28:
        x8 = x11;
        goto label_20;
    }
    x7 = x4 | x0;
    if (x7 != 0) {
        goto label_86;
    }
label_23:
    x0 = x10 & 0xc00000;
    x8 = (x0 == 0x800) ? 1 : 0;
label_25:
    x3 = 0x0;
    goto label_20;
label_83:
    x0 = 0x7fff;
    if (x4 != x0) {
        goto label_87;
    }
    if (x12 == 0) {
        goto label_88;
    }
    x0 = x3 >> 0x32;
    x0 ^= 1;
    w0 &= 1;
    if (x6 != x4) {
        goto label_89;
    }
    do {
        if (x13 == 0) {
            goto label_90;
        }
        w0 = ((x2 & 0x4000000000000) != 0) ? w0 : (0 + 1);
        if (x12 == 0) {
            goto label_34;
        }
label_21:
        x9 &= 0x1fffffffffffffff;
        x4 = x3 >> 3;
        x1 = x9 | (x3 << 61);
        if ((x3 & 0x32) != 0) {
            x3 = x2 >> 3;
            if ((x2 & 0x32) != 0) {
                goto label_91;
            }
            x1 = x14 & 0x1fffffffffffffff;
            x4 = x3;
            x1 |= (x2 << 61);
            x8 = x11;
        }
label_91:
        __asm ("extr x2, x4, x1, 0x3d");
        x1 <<= 3;
        goto label_8;
label_87:
        if (x6 != x0) {
            goto label_92;
        }
label_33:
        w0 = 0x0;
    } while (1);
label_92:
    w0 = 0x0;
    if (x12 != 0) {
        goto label_89;
    }
    if (x13 == 0) {
label_34:
        goto label_93;
    }
    x8 = x11;
    goto label_8;
    if (x13 != 0) {
label_89:
        goto label_21;
    }
    goto label_22;
label_82:
    x0 = x7 - x1;
    x6 = x0;
    __asm ("sbc x5, x3, x2");
    if ((x5 & 0x33) == 0) {
        goto label_94;
    }
    x6 = x1 - x7;
    x8 = x11;
    __asm ("sbc x5, x2, x3");
    do {
label_72:
        x0 &= x6;
        w0 += 0x40;
        x3 &= x5;
        w3 = (x5 == 0) ? w0 : w3;
        w0 = w3 - 0xc;
        if (w0 > 0x3f) {
            goto label_95;
        }
        w3 = -w0;
        x5 <<= x0;
        x7 = x6 << x0;
        x3 = x6 >> x3;
        x3 |= x5;
label_24:
        x1 = (int64_t) w0;
        if (x4 > w0) {
            goto label_96;
        }
        w4 = w0 - w4;
        w2 = w4 + 1;
        if (w2 > 0x3f) {
            goto label_97;
        }
        w1 = 0x40;
        w1 -= w2;
        x4 = x7 >> x2;
        x0 = x3 << x1;
        x0 |= x4;
        x1 = x7 << x1;
        x1 = (x1 != 0) ? 1 : 0;
        x3 >>= x2;
        x7 = x0 | x1;
        goto label_20;
label_94:
        x7 = x0 | x5;
    } while (x7 != 0);
    goto label_23;
label_95:
    w3 -= 0x4c;
    x7 = 0x0;
    x3 = x6 << x3;
    goto label_24;
label_97:
    w4 -= 0x3f;
    w0 = 0x80;
    w0 -= w2;
    x4 = x3 >> x4;
    x3 <<= x0;
    x3 = (w2 != 0x40) ? x3 : 0;
    x3 = x7 | x3;
    x3 = (x3 != 0) ? 1 : 0;
    x7 = x4 | x3;
    goto label_25;
label_96:
    x4 -= x1;
    x3 &= 0xfff7ffffffffffff;
    if (x4 == 0) {
label_27:
        goto label_20;
    }
    x2 = x3;
    x1 = x7;
    goto label_26;
label_46:
    x3 = x2;
    x7 = x1;
    x4 = x12;
    goto label_27;
label_78:
    x3 = x2;
    x7 = x1;
    x4 = x12;
    x8 = x11;
    goto label_27;
label_51:
    x3 = x2;
    x7 = x1;
    goto label_20;
label_85:
    x3 = x2;
    x7 = x1;
    goto label_28;
label_86:
    x3 = x0;
    x7 = x4;
    goto label_20;
label_47:
    x4 = x6;
    x2 = 0x0;
    x1 = 0x0;
    goto label_26;
label_63:
    x4 = x0;
    x2 = 0x0;
label_66:
    w0 = 0x14;
    goto label_6;
label_67:
    x2 = 0x0;
label_70:
    w0 = 0x14;
    goto label_14;
label_38:
    x2 = 0x0;
    goto label_26;
label_79:
    x4 = x6;
    x8 = x11;
    x2 = 0x0;
    x1 = 0x0;
    goto label_26;
    if (x8 != 0) {
label_53:
        goto label_29;
    }
label_31:
    x1 += 8;
    goto label_30;
    if (x8 == 0) {
label_54:
        goto label_29;
    }
    goto label_31;
    if (w5 != 0) {
label_52:
        if ((w0 & 4) == 0) {
            if ((w10 & 0xb) == 0) {
                goto label_55;
            }
        }
label_56:
        w0 |= 8;
    }
    if ((x2 & 0x33) == 0) {
label_55:
        goto label_98;
    }
    x4++;
    x3 = 0x7fff;
    if (x4 == x3) {
        goto label_99;
    }
    x2 &= 0xfff7ffffffffffff;
    do {
label_98:
        x3 = 0x7fff;
        __asm ("extr x1, x2, x1, 3");
        x2 >>= 3;
        if (x4 == x3) {
            x3 = x1 | x2;
            x2 |= 0x800000000000;
            x2 = (x3 != 0) ? x2 : 0;
        }
        x4 &= 0x7fff;
        x7 = 0x0;
        x7 = (uint64_t) (x7 & 0xffff000000000000) | (x2 & 0xffffffffffff);
        w8 = w4 | (w8 << 15);
        d0 = x1;
        value_2 = BIT_MASK (0x30, 0x10);
        value_3 = x8 & value_2;
        value_2 = ~value_2;
        x7 &= value_2;
        x7 |= value_3;
        v0.d = 1;
        if (w0 != 0) {
            *((sp + 0x10)) = q0;
            sfp_handle_exceptions ();
            q0 = *((sp + 0x10));
        }
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_99:
        x1 = x10 & 0xc00000;
        if (x1 != x10) {
            if (x1 != 0x400) {
                goto label_100;
            }
            x2 = 0x7ffe;
            __asm ("csetm x1, ne");
            x4 = (x8 == 0) ? x4 : x2;
        }
label_32:
        w2 = 0x14;
        w0 |= w2;
        x2 = x1;
    } while (1);
label_100:
    if (x1 == 0x800) {
        x2 = 0x7ffe;
        __asm ("csetm x1, eq");
        x4 = (x8 != 0) ? x4 : x2;
        goto label_32;
    }
    x1 = 0x0;
    x4 = 0x7ffe;
    goto label_32;
label_88:
    if (x6 == x4) {
        goto label_33;
    }
    w0 = 0x0;
    goto label_34;
    if (x12 == 0) {
label_60:
        goto label_8;
    }
    goto label_22;
label_58:
    if (x6 == x4) {
        goto label_35;
    }
    w0 = 0x0;
    goto label_8;
    if (x12 != 0) {
label_90:
        goto label_22;
    }
label_93:
    x8 = 0x0;
    x2 = 0xfff8000000000000;
    x1 = 0x7;
    x4 = 0x7fff;
    w0 = 0x1;
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x768 */
#include <stdint.h>
 
void add_float () {
    s0 += s1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x778 */
#include <stdint.h>
 
void add_long_double (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    addtf3 ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x63c */
#include <stdint.h>
 
void dbg_start_c (int64_t arg1) {
    x0 = arg1;
    /* void _start_c(long int * p); */
    x2 = x0;
    x4 = _fini;
    x5 = 0x0;
    x3 = .init;
    x0 = main;
    x1 = *(x2);
    x2 += 8;
    return void (*0x600)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x78c */
#include <stdint.h>
 
int32_t main () {
    int64_t var_10h;
    int64_t var_10h_2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x1000;
    d0 = $d;
    x1 = 0x4;
    x0 = "float:       %2ld %f\n";
    printf (x0, x1);
    x0 = 0x1000;
    d0 = *(0x12e0);
    x1 = 0x8;
    x0 = "double:      %2ld %f\n";
    printf (x0, x1);
    x0 = 0x12f0;
    q0 = *(0x12f0);
    x1 = 0x10;
    x0 = "long double: %2ld %Lf\n";
    printf (x0, x1);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x5d0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x11f90);
    x16 = 0x11f90;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x770 */
#include <stdint.h>
 
void add_double () {
    d0 += d1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x5e0 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x11f98);
    x16 = 0x11f98;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x600 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x11fa8);
    x16 = 0x11fa8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x5f0 */
#include <stdint.h>
 
void loc_imp_deregister_frame_info () {
    x17 = *(0x11fa0);
    x16 = 0x11fa0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x610 */
#include <stdint.h>
 
void loc_imp_register_frame_info () {
    x17 = *(0x11fb0);
    x16 = 0x11fb0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_simple_float_adds/arm64_elf_gcc_O1/subject.exe @ 0x5b0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [08] -r-x section size 112 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11f88;
    return uint64_t (*x17)() ();
}
