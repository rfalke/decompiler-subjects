/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7a0 */
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
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1e50 */
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
    x20 = 0x12db0;
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
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x740 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int32_t number;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int main(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x0 = "Input number: ";
    x29 = sp;
    printf (x0);
    x1 = x29 + 0x1c;
    x0 = 0x1ef8;
    isoc99_scanf ();
    w4 = *((x29 + 0x1c));
    __asm ("b.le 0x798");
    w0 = w4;
    w0 = fib2_part_0 ();
    w2 = w0;
    do {
        w1 = w4;
        x0 = "fibonacci(%d) = %d\n";
        printf (x0, w1, w2);
        w0 = 0x0;
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
        w2 = w4;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x730 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x720 */
#include <stdint.h>
 
void isoc99_scanf () {
    x17 = .plt;
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8e8 */
#include <stdint.h>
 
void fib2_part_0 (int64_t arg1) {
    int64_t var_6ch;
    int64_t var_70h;
    int64_t var_74h;
    int64_t var_78h;
    char * var_7ch;
    int64_t var_80h;
    int64_t var_80h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    x0 = arg1;
    *((sp + -0x80)) = x29;
    *((sp + -0x80 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w0 -= 9;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w23 = w19 - 5;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    w25 = w19 - 3;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w28 = w19 - 7;
    w22 = w19 - 8;
    w27 = w19 - 6;
    w24 = w19 - 4;
    w26 = w19 - 2;
    *((x29 + 0x78)) = w0;
    *((x29 + 0x78 + 4)) = 0;
    do {
        w21 = w19 - 1;
        w20 = w26;
        __asm ("b.le 0xab8");
        w20 = w26;
        __asm ("b.le 0xe08");
        w1 = w25;
        __asm ("b.le 0xfd8");
        w2 = w24;
        __asm ("b.le 0xfa8");
        w21 = w23;
        __asm ("b.le 0x1018");
        w0 = w23;
        *((x29 + 0x70)) = w24;
        *((x29 + 0x70 + 4)) = w25;
        w0 = fib2_part_0 ();
        w5 = w0;
        w2 = *((x29 + 0x70));
        w1 = *((x29 + 0x70 + 4));
label_13:
        w0 = w27;
        __asm ("b.le 0x9a0");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w2;
        *((x29 + 0x74)) = w1;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w2 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w5 = w0 + w5;
label_3:
        __asm ("b.le 0x9f8");
        w21 = w27;
        __asm ("b.le 0x9d4");
        w0 = w27;
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w2;
        *((x29 + 0x74)) = w1;
        w0 = fib2_part_0 ();
        w21 = w0;
        w5 = *((x29 + 0x6c));
        w2 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w0 = w28;
        __asm ("b.le 0x9f4");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w2;
        *((x29 + 0x74)) = w1;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w2 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w21 = w0 + w21;
        w21 += w5;
label_6:
        __asm ("b.le 0xaa8");
        w2 = w27;
        w5 = w23;
        __asm ("b.le 0xa58");
        w2 = w27;
        __asm ("b.le 0x1000");
        w0 = w27;
        *((x29 + 0x70)) = w27;
        *((x29 + 0x70 + 4)) = w1;
        w0 = fib2_part_0 ();
        w5 = w0;
        w2 = *((x29 + 0x70));
        w1 = *((x29 + 0x70 + 4));
label_10:
        w0 = w28;
        __asm ("b.le 0xa54");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w2;
        *((x29 + 0x74)) = w1;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w2 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w5 = w0 + w5;
        __asm ("b.le 0xaa4");
        w2 = w28;
        __asm ("b.le 0xa80");
        w0 = w28;
        *((x29 + 0x70)) = w5;
        *((x29 + 0x70 + 4)) = w1;
        w0 = fib2_part_0 ();
        w2 = w0;
        w5 = *((x29 + 0x70));
        w1 = *((x29 + 0x70 + 4));
        w0 = w22;
        __asm ("b.le 0xaa0");
        *((x29 + 0x6c)) = w2;
        *((x29 + 0x6c + 4)) = w5;
        *((x29 + 0x74)) = w1;
        fib2_part_0 ();
        w2 = *((x29 + 0x6c));
        w5 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w2 = w0 + w2;
        w2 += w5;
        w21 = w2 + w21;
        if (w25 > 1) {
            goto label_15;
        }
label_0:
        w21 = w1 + w21;
label_1:
        __asm ("b.le 0xde0");
        w1 = w24;
        w20 = w25;
        __asm ("b.le 0xc38");
        w1 = w24;
        __asm ("b.le 0xfc8");
        w2 = w23;
        __asm ("b.le 0xf88");
        w20 = w27;
        __asm ("b.le 0x1008");
        w0 = w27;
        *((x29 + 0x70)) = w24;
        *((x29 + 0x70 + 4)) = w23;
        w0 = fib2_part_0 ();
        w5 = w0;
        w1 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
label_11:
        w0 = w28;
        __asm ("b.le 0xb28");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w5 = w0 + w5;
label_2:
        __asm ("b.le 0xb80");
        w20 = w28;
        __asm ("b.le 0xb5c");
        w0 = w28;
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        w0 = fib2_part_0 ();
        w20 = w0;
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w0 = w22;
        __asm ("b.le 0xb7c");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w20 = w0 + w20;
        w20 += w5;
label_5:
        __asm ("b.le 0xc34");
        w2 = w28;
        w5 = w27;
        __asm ("b.le 0xbe0");
        w2 = w28;
        __asm ("b.le 0xfe8");
        w0 = w28;
        *((x29 + 0x70)) = w1;
        *((x29 + 0x70 + 4)) = w28;
        w0 = fib2_part_0 ();
        w5 = w0;
        w1 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
label_7:
        w0 = w22;
        __asm ("b.le 0xbdc");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w5 = w0 + w5;
        __asm ("b.le 0xc30");
        w2 = w22;
        __asm ("b.le 0xc08");
        w0 = w22;
        *((x29 + 0x70)) = w5;
        *((x29 + 0x70 + 4)) = w1;
        w0 = fib2_part_0 ();
        w2 = w0;
        w5 = *((x29 + 0x70));
        w1 = *((x29 + 0x70 + 4));
        w3 = *((x29 + 0x78));
        w0 = w3;
        __asm ("b.le 0xc2c");
        *((x29 + 0x6c)) = w2;
        *((x29 + 0x6c + 4)) = w5;
        *((x29 + 0x74)) = w1;
        fib2_part_0 ();
        w2 = *((x29 + 0x6c));
        w5 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w2 = w0 + w2;
        w2 += w5;
        w20 = w2 + w20;
        __asm ("b.le 0xddc");
        w2 = w27;
        w1 = w23;
        __asm ("b.le 0xcf4");
        w2 = w27;
        __asm ("b.le 0xfb8");
        w1 = w28;
        __asm ("b.le 0xff0");
        w0 = w28;
        *((x29 + 0x70)) = w28;
        *((x29 + 0x70 + 4)) = w27;
        w0 = fib2_part_0 ();
        w5 = w0;
        w1 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
label_8:
        w0 = w22;
        __asm ("b.le 0xc9c");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w5 = w0 + w5;
label_4:
        __asm ("b.le 0xcf0");
        w1 = w22;
        __asm ("b.le 0xcc8");
        w0 = w22;
        *((x29 + 0x70)) = w5;
        *((x29 + 0x70 + 4)) = w2;
        w0 = fib2_part_0 ();
        w1 = w0;
        w5 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
        w3 = *((x29 + 0x78));
        w0 = w3;
        __asm ("b.le 0xcec");
        *((x29 + 0x6c)) = w1;
        *((x29 + 0x6c + 4)) = w5;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w1 = *((x29 + 0x6c));
        w5 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w1 = w0 + w1;
        w1 += w5;
        __asm ("b.le 0xdd8");
        w2 = w22;
        w5 = w28;
        __asm ("b.le 0xd54");
        w2 = w22;
        __asm ("b.le 0x1020");
        w0 = w22;
        *((x29 + 0x70)) = w1;
        *((x29 + 0x70 + 4)) = w22;
        w0 = fib2_part_0 ();
        w5 = w0;
        w1 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
label_14:
        w3 = *((x29 + 0x78));
        w0 = w3;
        __asm ("b.le 0xd50");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w5 = w0 + w5;
        __asm ("b.le 0xdd4");
        w2 = *((x29 + 0x78));
        w0 = w2;
        __asm ("b.le 0xd78");
        *((x29 + 0x70)) = w5;
        *((x29 + 0x70 + 4)) = w1;
        fib2_part_0 ();
        w5 = *((x29 + 0x70));
        w1 = *((x29 + 0x70 + 4));
        w19 -= 0xa;
        w2 = *((x29 + 0x78));
        w28 -= 0xa;
        w22 -= 0xa;
        w2 -= 0xa;
        w23 -= 0xa;
        *((x29 + 0x78)) = w2;
        w27 -= 0xa;
        w25 -= 0xa;
        w24 -= 0xa;
        w26 -= 0xa;
        __asm ("b.le 0xdd0");
        w2 = w5 + w0;
        w0 = *((x29 + 0x7c));
        w1 = w2 + w1;
        w20 = w1 + w20;
        w21 = w20 + w21;
        w0 += w21;
        *((x29 + 0x7c)) = w0;
    } while (1);
    w2 = w19 + w0;
    w2 += w5;
    w1 = w2 + w1;
    w20 = w1 + w20;
    w1 = *((x29 + 0x7c));
    w0 = w20 + w21;
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    w0 += w1;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
    w1 = w25;
    w21 = w26;
    __asm ("b.le 0xab4");
    goto label_0;
label_15:
    w1 = w23;
    w2 = w24;
    __asm ("b.le 0xec8");
    w1 = w23;
    __asm ("b.le 0xf98");
    w2 = w27;
    __asm ("b.le 0x1010");
    w0 = w27;
    *((x29 + 0x70)) = w27;
    *((x29 + 0x70 + 4)) = w23;
    w0 = fib2_part_0 ();
    w5 = w0;
    w2 = *((x29 + 0x70));
    w1 = *((x29 + 0x70 + 4));
label_12:
    w0 = w28;
    __asm ("b.le 0xe74");
    *((x29 + 0x6c)) = w5;
    *((x29 + 0x6c + 4)) = w2;
    *((x29 + 0x74)) = w1;
    fib2_part_0 ();
    w5 = *((x29 + 0x6c));
    w2 = *((x29 + 0x6c + 4));
    w1 = *((x29 + 0x74));
    w5 = w0 + w5;
    do {
        __asm ("b.le 0xec4");
        w2 = w28;
        __asm ("b.le 0xea0");
        w0 = w28;
        *((x29 + 0x70)) = w5;
        *((x29 + 0x70 + 4)) = w1;
        w0 = fib2_part_0 ();
        w2 = w0;
        w5 = *((x29 + 0x70));
        w1 = *((x29 + 0x70 + 4));
        w0 = w22;
        __asm ("b.le 0xec0");
        *((x29 + 0x6c)) = w2;
        *((x29 + 0x6c + 4)) = w5;
        *((x29 + 0x74)) = w1;
        fib2_part_0 ();
        w2 = *((x29 + 0x6c));
        w5 = *((x29 + 0x6c + 4));
        w1 = *((x29 + 0x74));
        w2 = w0 + w2;
        w2 += w5;
        __asm ("b.le 0xf78");
        w1 = w28;
        w5 = w27;
        __asm ("b.le 0xf24");
        w1 = w28;
        __asm ("b.le 0xff8");
        w0 = w28;
        *((x29 + 0x70)) = w28;
        *((x29 + 0x70 + 4)) = w2;
        w0 = fib2_part_0 ();
        w5 = w0;
        w1 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
label_9:
        w0 = w22;
        __asm ("b.le 0xf20");
        *((x29 + 0x6c)) = w5;
        *((x29 + 0x6c + 4)) = w1;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w5 = *((x29 + 0x6c));
        w1 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w5 = w0 + w5;
        __asm ("b.le 0xf74");
        w1 = w22;
        __asm ("b.le 0xf4c");
        w0 = w22;
        *((x29 + 0x70)) = w5;
        *((x29 + 0x70 + 4)) = w2;
        w0 = fib2_part_0 ();
        w1 = w0;
        w5 = *((x29 + 0x70));
        w2 = *((x29 + 0x70 + 4));
        w3 = *((x29 + 0x78));
        w0 = w3;
        __asm ("b.le 0xf70");
        *((x29 + 0x6c)) = w1;
        *((x29 + 0x6c + 4)) = w5;
        *((x29 + 0x74)) = w2;
        fib2_part_0 ();
        w1 = *((x29 + 0x6c));
        w5 = *((x29 + 0x6c + 4));
        w2 = *((x29 + 0x74));
        w1 = w0 + w1;
        w1 += w5;
        w1 += w2;
        w21 = w1 + w21;
        goto label_1;
        w20 = w27;
        w5 = w23;
        goto label_2;
        w2 = w27;
        w5 = w23;
    } while (1);
    w21 = w23;
    w5 = w24;
    goto label_3;
    w1 = w28;
    w5 = w27;
    goto label_4;
    w2 = w23;
    w20 = w24;
    goto label_5;
    w2 = w24;
    w21 = w25;
    goto label_6;
    w5 = w28;
    goto label_7;
    w5 = w28;
    goto label_8;
    w5 = w28;
    goto label_9;
    w5 = w27;
    goto label_10;
    w5 = w27;
    goto label_11;
    w5 = w27;
    goto label_12;
    w5 = w23;
    goto label_13;
    w5 = w22;
    goto label_14;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1ec8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x700)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7f0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x13040;
    x0 = 0x13040;
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
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x828 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x13040;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x13040;
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
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x868 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x13000;
    w0 = *((x19 + 0x40));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13038);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x40)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x828)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x828)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x14e8 */
#include <stdint.h>
 
void fib2 (signed int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    __asm ("b.le 0x1db8");
    if (w0 == 2) {
        goto label_16;
    }
    w6 = w0 - 2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = w0;
    x29 = sp;
    w7 = w0 - 3;
    if (w6 == 1) {
        goto label_17;
    }
    w8 = w0 - 4;
    w10 = w7;
    w9 = w7;
    __asm ("b.le 0x1624");
    w10 = w0 - 5;
    w12 = w8;
    __asm ("b.le 0x15a8");
    w11 = w0 - 6;
    w12 = w10;
    __asm ("b.le 0x1570");
    __asm ("b.le 0x1e00");
    w0 = w11;
    w0 = fib2_part_0 ();
    w12 = w0;
label_6:
    w0 = w4 - 7;
    __asm ("b.le 0x156c");
    w0 = fib2_part_0 ();
    w12 = w0 + w12;
    __asm ("b.le 0x15a4");
    w11 = w4 - 7;
    __asm ("b.le 0x1590");
    w0 = w11;
    w0 = fib2_part_0 ();
    w11 = w0;
    w0 = w4 - 8;
    __asm ("b.le 0x15a0");
    w0 = fib2_part_0 ();
    w11 = w0 + w11;
    w12 = w11 + w12;
    __asm ("b.le 0x1620");
    w10 = w4 - 6;
    w11 = w4 - 7;
    __asm ("b.le 0x15e8");
    __asm ("b.le 0x1e10");
    w0 = w11;
    w0 = fib2_part_0 ();
    w10 = w0;
label_8:
    w0 = w4 - 8;
    __asm ("b.le 0x15e4");
    w0 = fib2_part_0 ();
    w10 = w0 + w10;
    __asm ("b.le 0x161c");
    w11 = w4 - 8;
    __asm ("b.le 0x1608");
    w0 = w11;
    w0 = fib2_part_0 ();
    w11 = w0;
    w0 = w4 - 9;
    __asm ("b.le 0x1618");
    w0 = fib2_part_0 ();
    w11 = w0 + w11;
    w10 = w11 + w10;
    w10 += w12;
    __asm ("b.le 0x1728");
    w11 = w4 - 5;
    w8 = w4 - 6;
    __asm ("b.le 0x16ac");
    w11 = w4 - 7;
    w12 = w8;
    __asm ("b.le 0x1674");
    __asm ("b.le 0x1df8");
    w0 = w11;
    w0 = fib2_part_0 ();
    w12 = w0;
label_5:
    w0 = w4 - 8;
    __asm ("b.le 0x1670");
    w0 = fib2_part_0 ();
    w12 = w0 + w12;
    __asm ("b.le 0x16a8");
    w11 = w4 - 8;
    __asm ("b.le 0x1694");
    w0 = w11;
    w0 = fib2_part_0 ();
    w11 = w0;
    w0 = w4 - 9;
    __asm ("b.le 0x16a4");
    w0 = fib2_part_0 ();
    w11 = w0 + w11;
    w11 += w12;
    __asm ("b.le 0x1724");
    w12 = w4 - 7;
    w8 = w4 - 8;
    __asm ("b.le 0x16ec");
    __asm ("b.le 0x1e30");
    w0 = w8;
    w0 = fib2_part_0 ();
    w12 = w0;
label_12:
    w0 = w4 - 9;
    __asm ("b.le 0x16e8");
    w0 = fib2_part_0 ();
    w12 = w0 + w12;
    __asm ("b.le 0x1720");
    w8 = w4 - 9;
    __asm ("b.le 0x170c");
    w0 = w8;
    w0 = fib2_part_0 ();
    w8 = w0;
    w0 = w4 - 0xa;
    __asm ("b.le 0x171c");
    w0 = fib2_part_0 ();
    w8 = w0 + w8;
    w8 += w12;
    w8 += w11;
    w10 = w8 + w10;
    do {
        __asm ("b.le 0x1948");
        w9 = w4 - 4;
        w8 = w4 - 5;
        __asm ("b.le 0x1840");
        w9 = w4 - 6;
        w11 = w8;
        __asm ("b.le 0x17c4");
        w11 = w4 - 7;
        w12 = w9;
        __asm ("b.le 0x178c");
        __asm ("b.le 0x1de0");
        w0 = w11;
        w0 = fib2_part_0 ();
        w12 = w0;
label_2:
        w0 = w4 - 8;
        __asm ("b.le 0x1788");
        w0 = fib2_part_0 ();
        w12 = w0 + w12;
        __asm ("b.le 0x17c0");
        w11 = w4 - 8;
        __asm ("b.le 0x17ac");
        w0 = w11;
        w0 = fib2_part_0 ();
        w11 = w0;
        w0 = w4 - 9;
        __asm ("b.le 0x17bc");
        w0 = fib2_part_0 ();
        w11 = w0 + w11;
        w11 += w12;
        __asm ("b.le 0x183c");
        w12 = w4 - 7;
        w9 = w4 - 8;
        __asm ("b.le 0x1804");
        __asm ("b.le 0x1e20");
        w0 = w9;
        w0 = fib2_part_0 ();
        w12 = w0;
label_10:
        w0 = w4 - 9;
        __asm ("b.le 0x1800");
        w0 = fib2_part_0 ();
        w12 = w0 + w12;
        __asm ("b.le 0x1838");
        w9 = w4 - 9;
        __asm ("b.le 0x1824");
        w0 = w9;
        w0 = fib2_part_0 ();
        w9 = w0;
        w0 = w4 - 0xa;
        __asm ("b.le 0x1834");
        w0 = fib2_part_0 ();
        w9 = w0 + w9;
        w9 += w12;
        w9 += w11;
        __asm ("b.le 0x1944");
        w11 = w4 - 6;
        w8 = w4 - 7;
        __asm ("b.le 0x18c8");
        w11 = w4 - 8;
        w12 = w8;
        __asm ("b.le 0x1890");
        __asm ("b.le 0x1e08");
        w0 = w11;
        w0 = fib2_part_0 ();
        w12 = w0;
label_7:
        w0 = w4 - 9;
        __asm ("b.le 0x188c");
        w0 = fib2_part_0 ();
        w12 = w0 + w12;
        __asm ("b.le 0x18c4");
        w11 = w4 - 9;
        __asm ("b.le 0x18b0");
        w0 = w11;
        w0 = fib2_part_0 ();
        w11 = w0;
        w0 = w4 - 0xa;
        __asm ("b.le 0x18c0");
        w0 = fib2_part_0 ();
        w11 = w0 + w11;
        w11 += w12;
        __asm ("b.le 0x1940");
        w12 = w4 - 8;
        w8 = w4 - 9;
        __asm ("b.le 0x1908");
        __asm ("b.le 0x1e40");
        w0 = w8;
        w0 = fib2_part_0 ();
        w12 = w0;
label_14:
        w0 = w4 - 0xa;
        __asm ("b.le 0x1904");
        w0 = fib2_part_0 ();
        w12 = w0 + w12;
        __asm ("b.le 0x193c");
        w8 = w4 - 0xa;
        __asm ("b.le 0x1928");
        w0 = w8;
        w0 = fib2_part_0 ();
        w8 = w0;
        w0 = w4 - 0xb;
        __asm ("b.le 0x1938");
        w0 = fib2_part_0 ();
        w8 = w0 + w8;
        w8 += w12;
        w8 += w11;
        w9 = w8 + w9;
        w9 += w10;
        if (w6 != 1) {
            w8 = w7;
            w6 = w4 - 4;
            __asm ("b.le 0x1b78");
            w7 = w4 - 5;
            w8 = w6;
            __asm ("b.le 0x1a70");
            w8 = w4 - 6;
            w11 = w7;
            __asm ("b.le 0x19f4");
            w10 = w4 - 7;
            w11 = w8;
            __asm ("b.le 0x19bc");
            __asm ("b.le 0x1df0");
            w0 = w10;
            w0 = fib2_part_0 ();
            w11 = w0;
label_4:
            w0 = w4 - 8;
            __asm ("b.le 0x19b8");
            w0 = fib2_part_0 ();
            w11 = w0 + w11;
            __asm ("b.le 0x19f0");
            w10 = w4 - 8;
            __asm ("b.le 0x19dc");
            w0 = w10;
            w0 = fib2_part_0 ();
            w10 = w0;
            w0 = w4 - 9;
            __asm ("b.le 0x19ec");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            w11 = w10 + w11;
            __asm ("b.le 0x1a6c");
            w8 = w4 - 7;
            w10 = w4 - 8;
            __asm ("b.le 0x1a34");
            __asm ("b.le 0x1e18");
            w0 = w10;
            w0 = fib2_part_0 ();
            w8 = w0;
label_9:
            w0 = w4 - 9;
            __asm ("b.le 0x1a30");
            w0 = fib2_part_0 ();
            w8 = w0 + w8;
            __asm ("b.le 0x1a68");
            w10 = w4 - 9;
            __asm ("b.le 0x1a54");
            w0 = w10;
            w0 = fib2_part_0 ();
            w10 = w0;
            w0 = w4 - 0xa;
            __asm ("b.le 0x1a64");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            w8 = w10 + w8;
            w8 += w11;
            __asm ("b.le 0x1b74");
            w10 = w4 - 6;
            w7 = w4 - 7;
            __asm ("b.le 0x1af8");
            w10 = w4 - 8;
            w11 = w7;
            __asm ("b.le 0x1ac0");
            __asm ("b.le 0x1de8");
            w0 = w10;
            w0 = fib2_part_0 ();
            w11 = w0;
label_3:
            w0 = w4 - 9;
            __asm ("b.le 0x1abc");
            w0 = fib2_part_0 ();
            w11 = w0 + w11;
            __asm ("b.le 0x1af4");
            w10 = w4 - 9;
            __asm ("b.le 0x1ae0");
            w0 = w10;
            w0 = fib2_part_0 ();
            w10 = w0;
            w0 = w4 - 0xa;
            __asm ("b.le 0x1af0");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            w10 += w11;
            __asm ("b.le 0x1b70");
            w11 = w4 - 8;
            w7 = w4 - 9;
            __asm ("b.le 0x1b38");
            __asm ("b.le 0x1e38");
            w0 = w7;
            w0 = fib2_part_0 ();
            w11 = w0;
label_13:
            w0 = w4 - 0xa;
            __asm ("b.le 0x1b34");
            w0 = fib2_part_0 ();
            w11 = w0 + w11;
            __asm ("b.le 0x1b6c");
            w7 = w4 - 0xa;
            __asm ("b.le 0x1b58");
            w0 = w7;
            w0 = fib2_part_0 ();
            w7 = w0;
            w0 = w4 - 0xb;
            __asm ("b.le 0x1b68");
            w0 = fib2_part_0 ();
            w7 = w0 + w7;
            w7 += w11;
            w7 += w10;
            w8 = w7 + w8;
            __asm ("b.le 0x1d94");
            w10 = w4 - 5;
            w6 = w4 - 6;
            __asm ("b.le 0x1c8c");
            w10 = w4 - 7;
            w7 = w6;
            __asm ("b.le 0x1c10");
            w7 = w4 - 8;
            w11 = w10;
            __asm ("b.le 0x1bd8");
            __asm ("b.le 0x1dd0");
            w0 = w7;
            w0 = fib2_part_0 ();
            w11 = w0;
label_0:
            w0 = w4 - 9;
            __asm ("b.le 0x1bd4");
            w0 = fib2_part_0 ();
            w11 = w0 + w11;
            __asm ("b.le 0x1c0c");
            w7 = w4 - 9;
            __asm ("b.le 0x1bf8");
            w0 = w7;
            w0 = fib2_part_0 ();
            w7 = w0;
            w0 = w4 - 0xa;
            __asm ("b.le 0x1c08");
            w0 = fib2_part_0 ();
            w7 = w0 + w7;
            w7 += w11;
            __asm ("b.le 0x1c88");
            w11 = w4 - 8;
            w10 = w4 - 9;
            __asm ("b.le 0x1c50");
            __asm ("b.le 0x1e48");
            w0 = w10;
            w0 = fib2_part_0 ();
            w11 = w0;
label_15:
            w0 = w4 - 0xa;
            __asm ("b.le 0x1c4c");
            w0 = fib2_part_0 ();
            w11 = w0 + w11;
            __asm ("b.le 0x1c84");
            w10 = w4 - 0xa;
            __asm ("b.le 0x1c70");
            w0 = w10;
            w0 = fib2_part_0 ();
            w10 = w0;
            w0 = w4 - 0xb;
            __asm ("b.le 0x1c80");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            w10 += w11;
            w10 += w7;
            __asm ("b.le 0x1d90");
            w11 = w4 - 7;
            w6 = w4 - 8;
            __asm ("b.le 0x1d14");
            w11 = w4 - 9;
            w7 = w6;
            __asm ("b.le 0x1cdc");
            __asm ("b.le 0x1dd8");
            w0 = w11;
            w0 = fib2_part_0 ();
            w7 = w0;
label_1:
            w0 = w4 - 0xa;
            __asm ("b.le 0x1cd8");
            w0 = fib2_part_0 ();
            w7 = w0 + w7;
            __asm ("b.le 0x1d10");
            w11 = w4 - 0xa;
            __asm ("b.le 0x1cfc");
            w0 = w11;
            w0 = fib2_part_0 ();
            w11 = w0;
            w0 = w4 - 0xb;
            __asm ("b.le 0x1d0c");
            w0 = fib2_part_0 ();
            w11 = w0 + w11;
            w11 += w7;
            __asm ("b.le 0x1d8c");
            w6 = w4 - 9;
            w7 = w4 - 0xa;
            __asm ("b.le 0x1d54");
            __asm ("b.le 0x1e28");
            w0 = w7;
            w0 = fib2_part_0 ();
            w6 = w0;
label_11:
            w0 = w4 - 0xb;
            __asm ("b.le 0x1d50");
            w0 = fib2_part_0 ();
            w6 = w0 + w6;
            __asm ("b.le 0x1d88");
            w7 = w4 - 0xb;
            __asm ("b.le 0x1d74");
            w0 = w7;
            w0 = fib2_part_0 ();
            w7 = w0;
            w0 = w4 - 0xc;
            __asm ("b.le 0x1d84");
            w0 = fib2_part_0 ();
            w7 = w0 + w7;
            w6 = w7 + w6;
            w6 += w11;
            w6 += w10;
            w6 += w8;
        }
        w0 = w6 + w9;
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_16:
        w9 = 0x1;
        w6 = 0x0;
        w0 = w6 + w9;
        return w0;
        return;
label_17:
        w10 = w6;
        w9 = w7;
    } while (1);
    w11 = w7;
    goto label_0;
    w7 = w11;
    goto label_1;
    w12 = w11;
    goto label_2;
    w11 = w10;
    goto label_3;
    w11 = w10;
    goto label_4;
    w12 = w11;
    goto label_5;
    w12 = w11;
    goto label_6;
    w12 = w11;
    goto label_7;
    w10 = w11;
    goto label_8;
    w8 = w10;
    goto label_9;
    w12 = w9;
    goto label_10;
    w6 = w7;
    goto label_11;
    w12 = w8;
    goto label_12;
    w11 = w7;
    goto label_13;
    w12 = w8;
    goto label_14;
    w11 = w10;
    goto label_15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1ecc */
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
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1028 */
#include <stdint.h>
 
void fib1 (signed int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    __asm ("b.le 0x1490");
    if (w0 == 2) {
        goto label_8;
    }
    w6 = w0 - 2;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w4 = w0;
    x29 = sp;
    w7 = w0 - 3;
    if (w6 == 1) {
        goto label_9;
    }
    w9 = w0 - 4;
    w10 = w7;
    w8 = w7;
    __asm ("b.le 0x10d8");
    w10 = w0 - 5;
    w11 = w9;
    __asm ("b.le 0x10a0");
    __asm ("b.le 0x14b0");
    w0 = w10;
    w0 = fib2_part_0 ();
    w11 = w0;
label_1:
    w0 = w4 - 6;
    __asm ("b.le 0x109c");
    w0 = fib2_part_0 ();
    w11 = w0 + w11;
    __asm ("b.le 0x10d4");
    w10 = w4 - 6;
    __asm ("b.le 0x10c0");
    w0 = w10;
    w0 = fib2_part_0 ();
    w10 = w0;
    w0 = w4 - 7;
    __asm ("b.le 0x10d0");
    w0 = fib2_part_0 ();
    w10 = w0 + w10;
    w10 += w11;
    __asm ("b.le 0x1150");
    w11 = w4 - 5;
    w9 = w4 - 6;
    __asm ("b.le 0x1118");
    __asm ("b.le 0x14c8");
    w0 = w9;
    w0 = fib2_part_0 ();
    w11 = w0;
label_4:
    w0 = w4 - 7;
    __asm ("b.le 0x1114");
    w0 = fib2_part_0 ();
    w11 = w0 + w11;
    __asm ("b.le 0x114c");
    w9 = w4 - 7;
    __asm ("b.le 0x1138");
    w0 = w9;
    w0 = fib2_part_0 ();
    w9 = w0;
    w0 = w4 - 8;
    __asm ("b.le 0x1148");
    w0 = fib2_part_0 ();
    w9 = w0 + w9;
    w9 += w11;
    w10 = w9 + w10;
    do {
        __asm ("b.le 0x1258");
        w8 = w4 - 4;
        w9 = w4 - 5;
        __asm ("b.le 0x11dc");
        w8 = w4 - 6;
        w11 = w9;
        __asm ("b.le 0x11a4");
        __asm ("b.le 0x14d0");
        w0 = w8;
        w0 = fib2_part_0 ();
        w11 = w0;
label_5:
        w0 = w4 - 7;
        __asm ("b.le 0x11a0");
        w0 = fib2_part_0 ();
        w11 = w0 + w11;
        __asm ("b.le 0x11d8");
        w8 = w4 - 7;
        __asm ("b.le 0x11c4");
        w0 = w8;
        w0 = fib2_part_0 ();
        w8 = w0;
        w0 = w4 - 8;
        __asm ("b.le 0x11d4");
        w0 = fib2_part_0 ();
        w8 = w0 + w8;
        w8 += w11;
        __asm ("b.le 0x1254");
        w11 = w4 - 6;
        w9 = w4 - 7;
        __asm ("b.le 0x121c");
        __asm ("b.le 0x14b8");
        w0 = w9;
        w0 = fib2_part_0 ();
        w11 = w0;
label_2:
        w0 = w4 - 8;
        __asm ("b.le 0x1218");
        w0 = fib2_part_0 ();
        w11 = w0 + w11;
        __asm ("b.le 0x1250");
        w9 = w4 - 8;
        __asm ("b.le 0x123c");
        w0 = w9;
        w0 = fib2_part_0 ();
        w9 = w0;
        w0 = w4 - 9;
        __asm ("b.le 0x124c");
        w0 = fib2_part_0 ();
        w9 = w0 + w9;
        w9 += w11;
        w8 = w9 + w8;
        w8 += w10;
        if (w6 != 1) {
            w6 = w4 - 4;
            __asm ("b.le 0x136c");
            w7 = w4 - 5;
            w9 = w6;
            __asm ("b.le 0x12f0");
            w9 = w4 - 6;
            w10 = w7;
            __asm ("b.le 0x12b8");
            __asm ("b.le 0x14c0");
            w0 = w9;
            w0 = fib2_part_0 ();
            w10 = w0;
label_3:
            w0 = w4 - 7;
            __asm ("b.le 0x12b4");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            __asm ("b.le 0x12ec");
            w9 = w4 - 7;
            __asm ("b.le 0x12d8");
            w0 = w9;
            w0 = fib2_part_0 ();
            w9 = w0;
            w0 = w4 - 8;
            __asm ("b.le 0x12e8");
            w0 = fib2_part_0 ();
            w9 = w0 + w9;
            w9 += w10;
            __asm ("b.le 0x1368");
            w10 = w4 - 6;
            w7 = w4 - 7;
            __asm ("b.le 0x1330");
            __asm ("b.le 0x14d8");
            w0 = w7;
            w0 = fib2_part_0 ();
            w10 = w0;
label_6:
            w0 = w4 - 8;
            __asm ("b.le 0x132c");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            __asm ("b.le 0x1364");
            w7 = w4 - 8;
            __asm ("b.le 0x1350");
            w0 = w7;
            w0 = fib2_part_0 ();
            w7 = w0;
            w0 = w4 - 9;
            __asm ("b.le 0x1360");
            w0 = fib2_part_0 ();
            w7 = w0 + w7;
            w7 += w10;
            w7 += w9;
            __asm ("b.le 0x1470");
            w9 = w4 - 5;
            w6 = w4 - 6;
            __asm ("b.le 0x13f4");
            w9 = w4 - 7;
            w10 = w6;
            __asm ("b.le 0x13bc");
            __asm ("b.le 0x14e0");
            w0 = w9;
            w0 = fib2_part_0 ();
            w10 = w0;
label_7:
            w0 = w4 - 8;
            __asm ("b.le 0x13b8");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            __asm ("b.le 0x13f0");
            w9 = w4 - 8;
            __asm ("b.le 0x13dc");
            w0 = w9;
            w0 = fib2_part_0 ();
            w9 = w0;
            w0 = w4 - 9;
            __asm ("b.le 0x13ec");
            w0 = fib2_part_0 ();
            w9 = w0 + w9;
            w9 += w10;
            __asm ("b.le 0x146c");
            w10 = w4 - 7;
            w6 = w4 - 8;
            __asm ("b.le 0x1434");
            __asm ("b.le 0x14a8");
            w0 = w6;
            w0 = fib2_part_0 ();
            w10 = w0;
label_0:
            w0 = w4 - 9;
            __asm ("b.le 0x1430");
            w0 = fib2_part_0 ();
            w10 = w0 + w10;
            __asm ("b.le 0x1468");
            w6 = w4 - 9;
            __asm ("b.le 0x1454");
            w0 = w6;
            w0 = fib2_part_0 ();
            w6 = w0;
            w0 = w4 - 0xa;
            __asm ("b.le 0x1464");
            w0 = fib2_part_0 ();
            w6 = w0 + w6;
            w6 += w10;
            w6 += w9;
            w6 += w7;
        }
        w0 = w6 + w8;
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_8:
        w8 = 0x1;
        w6 = 0x0;
        w0 = w6 + w8;
        return w0;
        return;
label_9:
        w10 = w6;
        w8 = w7;
    } while (1);
    w10 = w6;
    goto label_0;
    w11 = w10;
    goto label_1;
    w11 = w9;
    goto label_2;
    w10 = w9;
    goto label_3;
    w11 = w9;
    goto label_4;
    w11 = w8;
    goto label_5;
    w10 = w7;
    goto label_6;
    w10 = w9;
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6a0 */
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
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x710 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6c0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}
