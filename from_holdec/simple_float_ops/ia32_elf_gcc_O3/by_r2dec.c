/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048355 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048390 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a067;
    eax -= loc._end;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (loc._end);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = loc._end;
    eax -= loc._end;
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
        void (*edx)(uint32_t, uint32_t) (loc._end, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048420 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x80483c0)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80488f0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80485d0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 (void) {
    /* void converting_between_floats_f2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048590 */
#include <stdint.h>
 
void dbg_write_floats (void) {
    double pi;
    /* void write_floats(double pi); */
    *(fp_stack--) = *((esp + 0x10));
    *(obj.global_float) = fp_stack[0];
    *(obj.global_double) = fp_stack[0];
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80487f0 */
#include <stdint.h>
 
int32_t dbg_constants (void) {
    double x;
    /* int constants(double x); */
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] += fp_stack[1];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x18));
    fp_stack[0] *= *(0x8048934);
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x18));
    *(fp_stack--) = *(0x8048940);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x18));
    fp_stack[0] *= *(0x8048938);
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x18));
    fp_stack[0] *= *(0x8048948);
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    eax = 0x7d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80482e0 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
uint32_t dbg_write_ints (void) {
    double pi;
    int32_t var_4h;
    int32_t var_ah;
    int32_t var_ch;
    int32_t var_eh;
    /* int write_ints(double pi); */
    eax = *((esp + 0xe));
    *(fp_stack--) = *((esp + 0x18));
    ah = 0xc;
    *((esp + 0xc)) = ax;
    *((esp + 0xa)) = fp_stack[0];
    eax = *((esp + 0xa));
    *((esp + 4)) = fp_stack[0];
    *(obj.global_char) = al;
    *(obj.global_short) = ax;
    eax = *((esp + 4));
    *(obj.global_long_long) = fp_stack[0];
    fp_stack--;
    *(obj.global_int) = eax;
    *(0x804a058) = eax;
    eax = 0x79;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048550 */
#include <stdint.h>
 
int32_t dbg_read_floats (void) {
    /* int read_floats(); */
    *(fp_stack--) = 0.0;
    fp_stack[0] += *(obj.global_float);
    fp_stack[0] += *(obj.global_double);
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((esp + 0x14));
    *(esp) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    eax = 0x7a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048380 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048640 */
#include <stdint.h>
 
int32_t dbg_basic_operations (void) {
    double x;
    double y;
    /* int basic_operations(double x,double y); */
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = *((esp + 0x34));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((esp + 0xc)) = fp_stack[0];
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] -= *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x18));
    fp_stack[0] -= *((esp + 0x10));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] *= *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] /= *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x18));
    fp_stack[0] /= *((esp + 0x10));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    *(fp_stack--) = *((esp + 0x10));
    fp_stack[0] = -fp_stack[0];
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    eax = 0x7b;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80488f4 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1703;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048450 */
#include <stdint.h>
 
void use (int32_t arg_18h_2, int32_t arg_18h) {
    printf (0x8048914);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048620 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 (void) {
    /* void converting_between_floats_l1(); */
    *(fp_stack--) = *(obj.global_float);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048700 */
#include <stdint.h>
 
void dbg_compare_floats (void) {
    double x;
    double y;
    /* int compare_floats(double x,double y); */
    eax = 0;
    edx = 0;
    *(fp_stack--) = *((esp + 0x28));
    *(fp_stack--) = *((esp + 0x30));
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    __asm ("setnp al");
    if (fp_stack[0] != fp_stack[1]) {
        eax = edx;
    }
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    printf (0x8048917);
    eax = 0;
    edx = 1;
    *(fp_stack--) = *((esp + 8));
    *(fp_stack--) = *((esp + 0x10));
    fp_stack--;
    fp_stack++;
    __asm ("setp al");
    if (fp_stack[0] != fp_stack[1]) {
        eax = edx;
    }
    printf (0x8048917);
    eax = 0;
    *(fp_stack--) = *((esp + 8));
    *(fp_stack--) = *((esp + 0x10));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    printf (0x8048917);
    eax = 0;
    *(fp_stack--) = *((esp + 8));
    *(fp_stack--) = *((esp + 0x10));
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    printf (0x8048917);
    *(fp_stack--) = *((esp + 8));
    *(fp_stack--) = *((esp + 0x10));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    *((esp + 0x10)) = fp_stack[0];
    fp_stack--;
    eax = (int32_t) al;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    printf (0x8048917);
    eax = 0;
    *(fp_stack--) = *((esp + 8));
    *(fp_stack--) = *((esp + 0x10));
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    printf (0x8048917);
    eax = 0x7c;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048470 */
#include <stdint.h>
 
void use_int (int32_t arg_18h) {
    printf (0x8048917);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80485f0 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 (void) {
    /* void converting_between_floats_d1(); */
    *(fp_stack--) = *(obj.global_float);
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80485b0 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 (void) {
    /* void converting_between_floats_f1(); */
    *(fp_stack--) = *(obj.global_double);
    *(obj.global_float) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048890 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1767;
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048310 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_4h;
    /* int main(); */
    ecx = esp + 4;
    printf ("%zu %zu %zu %zu %zu\n");
    eax = printf (0x8048922);
    ecx = *((ebp - 4));
    eax = 0;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048630 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 (void) {
    /* void converting_between_floats_l2(); */
    *(fp_stack--) = *(obj.global_double);
    ? = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048600 */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 (void) {
    /* void converting_between_floats_d2(); */
    *(fp_stack--) = fp_stack[?];
    *(obj.global_double) = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x80482ac */
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
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/ia32_elf_gcc_O3/subject.exe @ 0x8048490 */
#include <stdint.h>
 
int32_t dbg_read_ints (void) {
    int32_t var_12h;
    /* int read_ints(); */
    ax = *(obj.global_char);
    *((esp + 0x12)) = ax;
    *(fp_stack--) = *((esp + 0x12));
    fp_stack[0] += *(0x8048930);
    *(fp_stack--) = *(obj.global_short);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(obj.global_int);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x804a058);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(obj.global_long_long);
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf (0x8048914);
    eax = 0x78;
    return eax;
}
