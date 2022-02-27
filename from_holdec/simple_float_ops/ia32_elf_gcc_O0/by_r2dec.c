/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 1682 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048350 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a06f;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048380 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = .bss;
    eax -= obj.completed.6532;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048380)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80489a0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x804861f */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80485ce */
#include <stdint.h>
 
int32_t dbg_write_floats (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double pi;
    /* void write_floats(double pi); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *((ebp - 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xc));
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    ? = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048850 */
#include <stdint.h>
 
int32_t dbg_constants (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    /* int constants(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use (ebp);
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x80489f0);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x80489f8);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x8048a00);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x8048a08);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x804840b */
#include <stdint.h>
 
int32_t dbg_use (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    /* void use(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    printf (0x80489c8);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80484eb */
#include <stdint.h>
 
int32_t dbg_write_ints (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_eh;
    int32_t var_ch;
    int32_t var_ah;
    int32_t var_8h;
    int32_t var_4h;
    double pi;
    /* int write_ints(double pi); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    eax = *((ebp - 0xa));
    ah = 0xc;
    *((ebp - 0xc)) = ax;
    *((ebp - 0xe)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xe));
    *(obj.global_char) = al;
    *(fp_stack--) = *((ebp - 8));
    *((ebp - 0xe)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xe));
    *(obj.global_short) = ax;
    *(fp_stack--) = *((ebp - 8));
    *((ebp - 0x14)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x14));
    *(obj.global_int) = eax;
    *(fp_stack--) = *((ebp - 8));
    *((ebp - 0x14)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x14));
    *(obj.global_long) = eax;
    *(fp_stack--) = *((ebp - 8));
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x20));
    edx = *((ebp - 0x1c));
    *(obj.global_long_long) = eax;
    *(0x804a044) = edx;
    eax = 0x79;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048581 */
#include <stdint.h>
 
int32_t dbg_read_floats (void) {
    int32_t var_10h;
    int32_t var_ch;
    double sum;
    /* int read_floats(); */
    *(fp_stack--) = 0.0;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(obj.global_float);
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(obj.global_double);
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    use (*((ebp - 0x10)), *((ebp - 0xc)));
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x804868b */
#include <stdint.h>
 
int32_t dbg_basic_operations (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    double y;
    int32_t var_ch;
    double x;
    /* int basic_operations(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += *((ebp - 0x18));
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use (ebp);
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] -= *((ebp - 0x18));
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] -= *((ebp - 0x10));
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] *= *((ebp - 0x18));
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] /= *((ebp - 0x18));
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] /= *((ebp - 0x10));
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    use ();
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80489a4 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1653;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048667 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048757 */
#include <stdint.h>
 
int32_t dbg_compare_floats (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    double y;
    int32_t var_ch;
    double x;
    /* int compare_floats(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack--;
    fp_stack++;
    __asm ("setnp al");
    edx = 0;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack--;
    fp_stack++;
    if (fp_stack[0] != fp_stack[1]) {
        eax = edx;
    }
    eax = (int32_t) al;
    use_int (eax);
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack--;
    fp_stack++;
    __asm ("setp al");
    edx = 1;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack--;
    fp_stack++;
    if (fp_stack[0] != fp_stack[1]) {
        eax = edx;
    }
    eax = (int32_t) al;
    use_int (eax);
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    eax = (int32_t) al;
    use_int (eax);
    eax = 0x7c;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048436 */
#include <stdint.h>
 
void dbg_use_int (int32_t arg_8h) {
    int32_t x;
    /* void use_int(int x); */
    printf (0x80489cb);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x804863a */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    *(fp_stack--) = *(obj.global_float);
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048604 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    *(fp_stack--) = *(obj.global_double);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048940 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x16b7;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80488f4 */
#include <stdint.h>
 
int32_t dbg_main (char ** argv) {
    int32_t var_4h;
    /* int main(); */
    ecx = esp + 4;
    printf ("%zu %zu %zu %zu %zu\n");
    printf ("%zu %zu %zu\n");
    eax = 0;
    ecx = *((ebp - 4));
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048679 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x804864c */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x80482ac */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d4b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O0/subject.exe @ 0x8048452 */
#include <stdint.h>
 
uint32_t dbg_read_ints (void) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_10h;
    int32_t var_ch;
    double sum;
    /* int read_ints(); */
    *(fp_stack--) = 0.0;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *(obj.global_char);
    ax = (int16_t) al;
    *((ebp - 0x28)) = ax;
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *(obj.global_short);
    *((ebp - 0x28)) = ax;
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *(obj.global_int);
    *((ebp - 0x28)) = eax;
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *(obj.global_long);
    *((ebp - 0x28)) = eax;
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = global_long_long;
    edx = .comment;
    *((ebp - 0x28)) = eax;
    *((ebp - 0x24)) = edx;
    *(fp_stack--) = *((ebp - 0x28));
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    use (*((ebp - 0x10)), *((ebp - 0xc)));
    eax = 0x78;
    return eax;
}
