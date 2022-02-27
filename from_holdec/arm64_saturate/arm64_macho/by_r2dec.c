/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x1000034d4 */
#include <stdint.h>
 
int32_t main (int64_t argc) {
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_0h_3;
    int64_t var_28h;
    int64_t var_28h_2;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    int64_t var_60h;
    int64_t var_60h_2;
    int64_t var_70h;
    int64_t var_70h_2;
    int64_t var_80h;
    int64_t var_80h_2;
    int64_t var_90h;
    int64_t var_90h_2;
    /* [00] -r-x section size 2480 named 0.__TEXT.__text */
    *((sp + 0x40)) = x28;
    *((sp + 0x40 + 8)) = x27;
    *((sp + 0x50)) = x26;
    *((sp + 0x50 + 8)) = x25;
    *((sp + 0x60)) = x24;
    *((sp + 0x60 + 8)) = x23;
    *((sp + 0x70)) = x22;
    *((sp + 0x70 + 8)) = x21;
    *((sp + 0x80)) = x20;
    *((sp + 0x80 + 8)) = x19;
    *((sp + 0x90)) = x29;
    *((sp + 0x90 + 8)) = x30;
    x29 = sp + 0x90;
    x0 = 0x100003f46;
    puts ("=== signed add with saturation");
    x21 = 0x0;
    x23 = sym._dest_signed_output;
    x27 = 0x100008000;
    w22 = 0x1;
    w24 = 0x2;
    w25 = 0x7e;
    w26 = 0x7f;
    x19 = 0x100003ebf;
    do {
        x8 = 0x100003ea8;
        w28 = *((x8 + x21));
        x20 = (int64_t) w28;
        x0 = x20;
        x1 = 0x7f;
        inst_sqadd ();
        w8 = w28 - 0x80;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        w8 = 0x7f;
        *(sp) = x20;
        *((sp + 8)) = x8;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        x1 = 0x7e;
        inst_sqadd ();
        w8 = w28 - 0x7f;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        w8 = 0x7e;
        *(sp) = x20;
        *((sp + 8)) = x8;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        x1 = 0x1;
        inst_sqadd ();
        w8 = w28 - 2;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        w8 = 0x1;
        *(sp) = x20;
        *((sp + 8)) = x8;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        x1 = 0x0;
        inst_sqadd ();
        w8 = w28 - 1;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        w8 = 0x0;
        *(sp) = x20;
        *((sp + 8)) = x8;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        x1 = 0x0;
        inst_sqadd ();
        x8 = *(x23);
        w9 = w8 & 0xff;
        x10 = *(x27);
        *((sp + 0x28)) = x9;
        *((sp + 0x28 + 8)) = x10;
        *((sp + 0x10)) = x20;
        *((sp + 0x10 + 8)) = x20;
        *(sp) = x20;
        *((sp + 8)) = 0;
        *((sp + 0x20)) = x8;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x1;
        inst_sqadd ();
        w8 = w28 + 1;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        *(sp) = x20;
        *((sp + 8)) = x22;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x2;
        inst_sqadd ();
        w8 = w28 + 2;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        *(sp) = x20;
        *((sp + 8)) = x24;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x7e;
        inst_sqadd ();
        w8 = w28 + 0x7e;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        *(sp) = x20;
        *((sp + 8)) = x25;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x7f;
        inst_sqadd ();
        w8 = w28 + 0x7f;
        w9 = (int32_t) w8;
        x10 = *(x23);
        w11 = w10 & 0xff;
        x12 = *(x27);
        *((sp + 0x28)) = x11;
        *((sp + 0x28 + 8)) = x12;
        *((sp + 0x10)) = x9;
        *((sp + 0x10 + 8)) = x8;
        *(sp) = x20;
        *((sp + 8)) = x26;
        *((sp + 0x20)) = x10;
        x0 = x19;
        printf (x0);
        x21++;
    } while (x21 != 9);
    x0 = 0x100003f65;
    puts ("=== unsigned add with saturation");
    x21 = 0x0;
    x28 = sym._dest_unsigned_output;
    w26 = 0x7f;
    w22 = 0x80;
    w23 = 0x81;
    w24 = 0xfe;
    w25 = 0xff;
    x19 = 0x100003ee6;
    do {
        x8 = 0x100003eb1;
        w20 = *((x8 + x21));
        x0 = x20;
        x1 = 0x0;
        inst_uqadd ();
        w8 = *(x28);
        x9 = *(x27);
        *((sp + 0x28)) = x8;
        *((sp + 0x28 + 8)) = x9;
        *((sp + 0x18)) = x20;
        *((sp + 0x18 + 8)) = x8;
        *((sp + 8)) = 0;
        *((sp + 8 + 8)) = x20;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x1;
        inst_uqadd ();
        w8 = w20 + 1;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        w8 = 0x1;
        *((sp + 8)) = x8;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x2;
        inst_uqadd ();
        w8 = w20 + 2;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        w8 = 0x2;
        *((sp + 8)) = x8;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x7e;
        inst_uqadd ();
        w8 = w20 + 0x7e;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        w8 = 0x7e;
        *((sp + 8)) = x8;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x7f;
        inst_uqadd ();
        w8 = w20 + 0x7f;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        *((sp + 8)) = x26;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x80;
        inst_uqadd ();
        w8 = w20 + 0x80;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        *((sp + 8)) = x22;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0x81;
        inst_uqadd ();
        w8 = w20 + 0x81;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        *((sp + 8)) = x23;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0xfe;
        inst_uqadd ();
        w8 = w20 + 0xfe;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        *((sp + 8)) = x24;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x0 = x20;
        w1 = 0xff;
        inst_uqadd ();
        w8 = w20 + 0xff;
        w9 = w8 & 0xff;
        w10 = *(x28);
        x11 = *(x27);
        *((sp + 0x28)) = x10;
        *((sp + 0x28 + 8)) = x11;
        *((sp + 0x18)) = x8;
        *((sp + 0x18 + 8)) = x10;
        *((sp + 8)) = x25;
        *((sp + 8 + 8)) = x9;
        *(sp) = x20;
        x0 = x19;
        printf (x0);
        x21++;
    } while (x21 != 9);
    x0 = 0x100003f86;
    puts ("=== left shift variants with saturation");
    x8 = 0x0;
    x20 = 0x100003f22;
    x21 = 0x100003f27;
    x22 = 0x100003f2e;
    x23 = 0x100003f38;
    while (x26 == 9) {
        w0 = 0xa;
        putchar (w0);
        x8 = *((sp + 0x38));
        x8++;
        if (x8 == 5) {
            goto label_2;
        }
        *((sp + 0x38)) = x8;
        x9 = 0x100003eba;
        w25 = *((x9 + x8));
        x19 = x25;
        x26 = 0x7;
        w24 = 0x8;
        goto label_3;
label_0:
        x8 = x19;
        *(sp) = x8;
        *((sp + 8)) = x26;
        x0 = 0x100003f17;
label_1:
        printf ("0x%02x<<%d");
        x0 = x20;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_sshl ();
        w8 = *(x28);
        *(sp) = x8;
        x0 = x21;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_srshl ();
        w8 = *(x28);
        *(sp) = x8;
        x0 = x22;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_sqshl ();
        w8 = *(x28);
        x9 = *(x27);
        *(sp) = x8;
        *((sp + 8)) = x9;
        x0 = x23;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_sqrshl ();
        w8 = *(x28);
        x9 = *(x27);
        *(sp) = x8;
        *((sp + 8)) = x9;
        x0 = x23;
        printf (x0);
        x0 = x20;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_ushl ();
        w8 = *(x28);
        *(sp) = x8;
        x0 = x21;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_urshl ();
        w8 = *(x28);
        *(sp) = x8;
        x0 = x22;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_uqshl ();
        w8 = *(x28);
        x9 = *(x27);
        *(sp) = x8;
        *((sp + 8)) = x9;
        x0 = x23;
        printf (x0);
        x0 = x25;
        x1 = x26;
        inst_uqrshl ();
        w8 = *(x28);
        x9 = *(x27);
        *(sp) = x8;
        *((sp + 8)) = x9;
        x0 = x23;
        printf (x0);
        w0 = 0xa;
        putchar (w0);
        x26++;
        w24--;
    }
    if ((x26 & 0x3f) == 0) {
label_3:
        goto label_0;
    }
    *(sp) = x19;
    *((sp + 8)) = x24;
    x0 = 0x100003f0c;
    goto label_1;
label_2:
    w0 = 0x0;
    x29 = *((sp + 0x90));
    x30 = *((sp + 0x90 + 8));
    x20 = *((sp + 0x80));
    x19 = *((sp + 0x80 + 8));
    x22 = *((sp + 0x70));
    x21 = *((sp + 0x70 + 8));
    x24 = *((sp + 0x60));
    x23 = *((sp + 0x60 + 8));
    x26 = *((sp + 0x50));
    x25 = *((sp + 0x50 + 8));
    x28 = *((sp + 0x40));
    x27 = *((sp + 0x40 + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003b3c */
#include <stdint.h>
 
uint32_t inst_sqadd (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("sqadd v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 8;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003ce0 */
#include <stdint.h>
 
uint32_t inst_sqrshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("sqrshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003c8c */
#include <stdint.h>
 
uint32_t inst_sqshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("sqshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003c38 */
#include <stdint.h>
 
uint32_t inst_srshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("srshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003be4 */
#include <stdint.h>
 
uint32_t inst_sshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("sshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003b90 */
#include <stdint.h>
 
uint32_t inst_uqadd (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("uqadd v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003e30 */
#include <stdint.h>
 
uint32_t inst_uqrshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("uqrshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003ddc */
#include <stdint.h>
 
uint32_t inst_uqshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("uqshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003d88 */
#include <stdint.h>
 
uint32_t inst_urshl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("urshl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003d34 */
#include <stdint.h>
 
uint32_t inst_ushl (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    d0 = x0;
    v0.d = 1;
    d1 = x1;
    v1.d = 1;
    x4 = fpsr;
    x4 &= 0xfffffffff7ffffff;
    fpsr = x4;
    __asm ("ushl v2.16b, v0.16b, v1.16b");
    x0 = d2;
    x2 = _dest_qc;
    x2 += 9;
    *(x2) = w0;
    x2 = _dest_qc;
    x2 += 0;
    w0 = 0;
    x4 = fpsr;
    if ((w4 & 0x1b) != 0) {
        w0 = 0x1;
    }
    *(x2) = w0;
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003e84 */
#include <stdint.h>
 
void printf () {
    /* [01] -r-x section size 36 named 1.__TEXT.__stubs */
    x16 = *(0x0);
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003e90 */
#include <stdint.h>
 
void putchar () {
    x16 = *(0x8);
    return uint64_t (*x16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/arm64_saturate/arm64_macho/subject.exe @ 0x100003e9c */
#include <stdint.h>
 
void puts () {
    x16 = *(0x10);
    return uint64_t (*x16)() ();
}
