/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049090 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [13] -r-x section size 9973 named .text */
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080490c7 ();
    ebx += 0x6f5c;
    eax = main;
    return libc_start_main (eax, esi, ecx, ebx - 0x48e0, ebx - 0x4880);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x80490c7 */
#include <stdint.h>
 
void fcn_080490c7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.6844;
    if (eax != obj.completed.6844) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6844);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049130 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6844;
    eax -= obj.completed.6844;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6844, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049170 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.6844) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6844) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x80491a0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b780 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b410 */
#include <stdint.h>
 
uint32_t FXCH (void) {
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = pi;
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_tmp_1 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    printf ("FXCH(para):  should=                             is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 1.0;
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    eax = printf ("FXCH(pi):    should=    3.141593/   3.141593e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b4f0 */
#include <stdint.h>
 
uint32_t FYL2X (void) {
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FYL2X(para, base=2):  should=                             is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *(0x804c3d4);
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FYL2X(1000, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_e(2);
    *(fp_stack--) = *(0x804c3d4);
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FYL2X(1000, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_10(2);
    *(fp_stack--) = *(0x804c3d4);
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FYL2X(1000, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x80490e0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049f30 */
#include <stdint.h>
 
uint32_t FABS (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = abs(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FABS(para):   should=                            is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    fp_stack[0] = abs(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FABS(-1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    fp_stack[0] = abs(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FABS(-0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    fp_stack[0] = abs(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FABS(+1):   should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b460 */
#include <stdint.h>
 
uint32_t FXTRACT (void) {
    *(fp_stack--) = *((esp + 0x2c));
    __asm ("fxtract");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FXTRACT(para)[0=signi]:  should=                             is=%12f/%15e\n");
    *(fp_stack--) = *((esp + 0x2c));
    __asm ("fxtract");
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FXTRACT(para)[1=exp]:    should=                             is=%12f/%15e\n");
    *(fp_stack--) = *(0x804e438);
    __asm ("fxtract");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FXTRACT(12.34)[0=signi]: should=    1.542500/   1.542500e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804e438);
    __asm ("fxtract");
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FXTRACT(12.34)[1=exp]:   should=    3.000000/   3.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b788 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x486b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049eb0 */
#include <stdint.h>
 
uint32_t F2XM1 (void) {
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf (0x804c080);
    *(fp_stack--) = 0.0;
    fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("F2XM1(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("F2XM1(+1):   should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("F2XM1(1/pi): should=    0.246869/   2.468690e-01 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804ab70 */
#include <stdint.h>
 
uint32_t FPREM (void) {
    *(fp_stack--) = *(0x804d5ea);
    *(fp_stack--) = *(0x804d5e8);
    fp_stack[0] %= fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FPREM(11 mod 7):          should=    4.000000/   4.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804d5ea);
    *(fp_stack--) = *(0x804d5e8);
    fp_stack[0] %= fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("FPREM1(11 mod 7):         should=   -3.000000/  -3.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("wait");
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("reduced para using FPREM: should=                             is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a150 */
#include <stdint.h>
 
uint32_t FCHS (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = -fp_stack[0];
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FCHS(para):  should=                             is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] = -fp_stack[0];
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FCHS(pi):    should=   -3.141593/  -3.141593e+00 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 0.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = -fp_stack[0];
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FCHS(0-pi):  should=    3.141593/   3.141593e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804abf0 */
#include <stdint.h>
 
uint32_t FPTAN (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FPTAN(para): should=                             is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FPTAN(0):    should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FPTAN(0)[1]: should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = pi;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FPTAN(pi/4): should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a5f0 */
#include <stdint.h>
 
uint32_t FDIVR (void) {
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FDIVR(1/para):     should=                             is=%12f/%15e\n");
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = *(0x804c3cc);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FDIVR(para/12.34): should=                             is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FDIVR(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *(0x804c3d4) /= fp_stack[0];
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FIDIVR(1000/pi):   should=  318.309886/   3.183099e+02 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a6e0 */
#include <stdint.h>
 
int32_t FIST (void) {
    int32_t var_ch;
    int32_t var_16h;
    int32_t var_18h;
    puts ("FIST:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
    *(fp_stack--) = *(str.ffffff__ffffff);
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x18));
    *(fp_stack--) = *(str.ffffff__ffffff);
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FISTT(%f):        should=12 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(str.ffffff__ffffff);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0x7f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=00):   should=13 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(str.ffffff__ffffff);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0x47f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=01):   should=12 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(str.ffffff__ffffff);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0x87f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=10):   should=13 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(str.ffffff__ffffff);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0xc7f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=11):   should=12 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(0x804d0c6);
    *((esp + 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((esp + 0x18));
    *(fp_stack--) = *(0x804d0c6);
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FISTT(%f):        should=-7 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(0x804d0c6);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0x7f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=00):   should=-7 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(0x804d0c6);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0x47f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=01):   should=-8 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(0x804d0c6);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0x87f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=10):   should=-7 is=%d\n";
    printf (eax);
    *(fp_stack--) = *(0x804d0c6);
    eax = *((esp + 0x16));
    *((esp + 0x16)) = 0xc7f;
    *((esp + 0x16)) = ax;
    *((esp + 0x18)) = fp_stack[0];
    eax = *((esp + 0x18));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    *(esp) = "  FIST(%f,RC=11):   should=-7 is=%d\n";
    eax = printf (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b610 */
#include <stdint.h>
 
uint32_t NOT_EXECUTED (void) {
    puts ("before FNOP");
    puts ("before FNCLEX");
    puts ("before FDECSTP");
    fp_stack++;
    puts ("before FFREE(st(4))");
    puts ("before FINCSTP");
    fp_stack--;
    puts ("before FNINIT");
    __asm ("fninit");
    puts ("before FNSAVE");
    puts ("before FNSTCW");
    puts ("before FNSTENV");
    puts ("before FNSTSW");
    obj.buffer = fp_status;
    puts ("before FRSTOR");
    puts ("before FWAIT");
    __asm ("wait");
    puts ("before FXRSTOR");
    eax = puts ("before FXSAVE");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b100 */
#include <stdint.h>
 
uint32_t FST (void) {
    *(fp_stack--) = pi;
    *(obj.buffer) = fp_stack[0];
    fp_stack--;
    eax = *(0x805002b);
    eax = *(0x805002a);
    eax = *(0x8050029);
    eax = *(obj.buffer);
    printf ("FST(pi as float)       should=0xdb 0x0f 0x49 0x40                               is=0x%02x 0x%02x 0x%02x 0x%02x\n");
    *(fp_stack--) = pi;
    *(obj.buffer) = fp_stack[0];
    fp_stack--;
    eax = *(0x805002f);
    eax = *(0x805002e);
    eax = *(0x805002d);
    eax = *(0x805002c);
    eax = *(0x805002b);
    eax = *(0x805002a);
    eax = *(0x8050029);
    eax = *(obj.buffer);
    printf ("FST(pi as double)      should=0x18 0x2d 0x44 0x54 0xfb 0x21 0x09 0x40           is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    *(fp_stack--) = pi;
    ? = fp_stack[0];
    fp_stack--;
    eax = *(0x8050031);
    eax = *(0x8050030);
    eax = *(0x805002f);
    eax = *(0x805002e);
    eax = *(0x805002d);
    eax = *(0x805002c);
    eax = *(0x805002b);
    eax = *(0x805002a);
    eax = *(0x8050029);
    eax = *(obj.buffer);
    eax = printf ("FST(pi as long double) should=0x35 0xc2 0x68 0x21 0xa2 0xda 0x0f 0xc9 0x00 0x40 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b580 */
#include <stdint.h>
 
uint32_t FYL2XP1 (void) {
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0] + 1.0);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FYL2XP1(para, base=2): should=                             is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *(0x804e688);
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0] + 1.0);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FYL2XP1(999, base=2):  should=    9.965784/   9.965784e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_e(2);
    *(fp_stack--) = *(0x804e688);
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0] + 1.0);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FYL2XP1(999, base=e):  should=    6.907755/   6.907755e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_10(2);
    *(fp_stack--) = *(0x804e688);
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0] + 1.0);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FYL2XP1(999, base=10): should=    3.000000/   3.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b710 */
#include <stdint.h>
 
uint32_t TOP (void) {
    __asm ("wait");
    ax = fp_status;
    eax = (int32_t) ax;
    eax >>= 0xb;
    eax &= 7;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804af90 */
#include <stdint.h>
 
uint32_t FSIN (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = sin(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSIN(para):  should=                              is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = sin(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSIN(0):     should=     0.000000/   0.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804dc44);
    *(fp_stack--) = pi;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sin(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSIN(pi/6):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = pi;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sin(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FSIN(pi/2):  should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b0a0 */
#include <stdint.h>
 
uint32_t FSQRT (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = sqrt(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSQRT(para):     should=                             is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] = sqrt(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSQRT(pi):       should=    1.772454/   1.772454e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804de39);
    fp_stack[0] = sqrt(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FSQRT(152.2756): should=   12.340000/   1.234000e+01 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a410 */
#include <stdint.h>
 
uint32_t FCOMI (void) {
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = 1.0;
    fp_stack--;
    fp_stack++;
    __asm ("lahf");
    ah &= 0x45;
    eax = (int32_t) ah;
    printf ("FCOMI(1,para): should=0x00 is=0x%02x\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack--;
    fp_stack++;
    __asm ("lahf");
    ah &= 0x45;
    eax = (int32_t) ah;
    printf ("FCOMI(para,1): should=0x01 is=0x%02x\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    fp_stack--;
    fp_stack++;
    __asm ("lahf");
    ah &= 0x45;
    eax = (int32_t) ah;
    printf ("FCOMI(pi,1):   should=0x00 is=0x%02x\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 1.0;
    fp_stack--;
    fp_stack++;
    __asm ("lahf");
    ah &= 0x45;
    eax = (int32_t) ah;
    printf ("FCOMI(1,pi):   should=0x01 is=0x%02x\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_stack--;
    fp_stack++;
    __asm ("lahf");
    ah &= 0x45;
    eax = (int32_t) ah;
    printf ("FCOMI(1,1):    should=0x40 is=0x%02x\n");
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 0.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack--;
    fp_stack++;
    __asm ("lahf");
    ah &= 0x45;
    eax = (int32_t) ah;
    eax = printf ("FCOMI(1,nan):  should=0x45 is=0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804ab10 */
#include <stdint.h>
 
uint32_t FPATAN (void) {
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FPATAN(y=1 x=para): should=                             is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 0.0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FPATAN(y=1 x=0):    should=    1.570796/   1.570796e+00 is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FPATAN(y=1 x=1):    should=    0.785398/   7.853982e-01 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a9e0 */
#include <stdint.h>
 
uint32_t FLDC (void) {
    *(fp_stack--) = 1.0;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLD1:   should=    1.000000/   1.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_2(e);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLDL2E: should=    1.442695/   1.442695e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_2(10);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLDL2T: should=    3.321928/   3.321928e+00 is=%12f/%15e\n");
    *(fp_stack--) = log_10(2);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLDLG2: should=    0.301030/   3.010300e-01 is=%12f/%15e\n");
    *(fp_stack--) = log_e(2);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLDLN2: should=    0.693147/   6.931472e-01 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLDPI:  should=    3.141593/   3.141593e+00 is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FLDZ:   should=    0.000000/   0.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b720 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x48d3;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf0;
    eax = ebx - 0xf4;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf4)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804aed0 */
#include <stdint.h>
 
uint32_t FSCALE (void) {
    *(fp_stack--) = *(0x804db42);
    *(fp_stack--) = *((esp + 0x2c));
    __asm ("fscale");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FSCALE(para*2^4):   should=                             is=%12f/%15e\n");
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = pi;
    __asm ("fscale");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FSCALE(pi*2^para):  should=                             is=%12f/%15e\n");
    *(fp_stack--) = *(0x804db42);
    *(fp_stack--) = pi;
    __asm ("fscale");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FSCALE(pi*2^4):     should=   50.265482/   5.026548e+01 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804db42);
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = pi;
    __asm ("fscale");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FSCALE(pi*2^-4):    should=    0.196350/   1.963495e-01 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804db3a);
    *(fp_stack--) = pi;
    __asm ("fscale");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    eax = printf ("FSCALE(pi*2^12.34): should=12867.963509/   1.286796e+04 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x80490d0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b020 */
#include <stdint.h>
 
uint32_t FSINCOS (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FSINCOS(para)[0=cos]:  should=                              is=%12f/%15e\n");
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSINCOS(para)[1=sin]:  should=                              is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("FSINCOS(0)[0=cos]:     should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FSINCOS(0)[1=sin]:     should=     0.000000/   0.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x80491a6 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    uint32_t var_90h;
    uint32_t var_8ch;
    uint32_t var_88h;
    uint32_t var_84h;
    uint32_t var_80h;
    uint32_t var_7ch;
    uint32_t var_78h;
    uint32_t var_74h;
    uint32_t var_70h;
    uint32_t var_6ch;
    uint32_t var_68h;
    uint32_t var_64h;
    uint32_t var_60h;
    uint32_t var_5ch;
    uint32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_14h;
    uint32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    ecx = esp + 4;
    ebx = ecx;
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    F2XM1 (ecx, ebx, ebp);
    eax = TOP ();
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0xc)) == 0) {
            goto label_0;
        }
        assert_fail ("top==0", "source.c", 0x30, "main");
    }
label_0:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FABS ();
    eax = TOP ();
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x10)) == 0) {
            goto label_1;
        }
        assert_fail ("top==0", "source.c", 0x34, "main");
    }
label_1:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FADD ();
    eax = TOP ();
    *((ebp - 0x14)) = eax;
    if (*((ebp - 0x14)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x14)) == 0) {
            goto label_2;
        }
        assert_fail ("top==0", "source.c", 0x38, "main");
    }
label_2:
    putchar (0xa);
    FBSTP ();
    eax = TOP ();
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x18)) == 0) {
            goto label_3;
        }
        assert_fail ("top==0", "source.c", 0x3c, "main");
    }
label_3:
    putchar (0xa);
    FBLD ();
    eax = TOP ();
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x1c)) == 0) {
            goto label_4;
        }
        assert_fail ("top==0", "source.c", 0x40, "main");
    }
label_4:
    putchar (0xa);
    *(fp_stack--) = *(0x804c038);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FCHS ();
    eax = TOP ();
    *((ebp - 0x20)) = eax;
    if (*((ebp - 0x20)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x20)) == 0) {
            goto label_5;
        }
        assert_fail ("top==0", "source.c", 0x44, "main");
    }
label_5:
    putchar (0xa);
    FCMOV (0);
    eax = TOP ();
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0x24)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x24)) == 0) {
            goto label_6;
        }
        assert_fail ("top==0", "source.c", 0x48, "main");
    }
label_6:
    FCMOV (0xffffffffffffffff);
    eax = TOP ();
    *((ebp - 0x28)) = eax;
    if (*((ebp - 0x28)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x28)) == 0) {
            goto label_7;
        }
        assert_fail ("top==0", "source.c", 0x4a, "main");
    }
label_7:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FCOM ();
    eax = TOP ();
    *((ebp - 0x2c)) = eax;
    if (*((ebp - 0x2c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x2c)) == 0) {
            goto label_8;
        }
        assert_fail ("top==0", "source.c", 0x4e, "main");
    }
label_8:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FCOMI ();
    eax = TOP ();
    *((ebp - 0x30)) = eax;
    if (*((ebp - 0x30)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x30)) == 0) {
            goto label_9;
        }
        assert_fail ("top==0", "source.c", 0x52, "main");
    }
label_9:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FCOS ();
    eax = TOP ();
    *((ebp - 0x34)) = eax;
    if (*((ebp - 0x34)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x34)) == 0) {
            goto label_10;
        }
        assert_fail ("top==0", "source.c", 0x56, "main");
    }
label_10:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FDIV ();
    eax = TOP ();
    *((ebp - 0x38)) = eax;
    if (*((ebp - 0x38)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x38)) == 0) {
            goto label_11;
        }
        assert_fail ("top==0", "source.c", 0x5a, "main");
    }
label_11:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FDIVR ();
    eax = TOP ();
    *((ebp - 0x3c)) = eax;
    if (*((ebp - 0x3c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x3c)) == 0) {
            goto label_12;
        }
        assert_fail ("top==0", "source.c", 0x5e, "main");
    }
label_12:
    putchar (0xa);
    FILD ();
    eax = TOP ();
    *((ebp - 0x40)) = eax;
    if (*((ebp - 0x40)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x40)) == 0) {
            goto label_13;
        }
        assert_fail ("top==0", "source.c", 0x62, "main");
    }
label_13:
    putchar (0xa);
    *(fp_stack--) = *(str.q_n);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FIST ();
    eax = TOP ();
    *((ebp - 0x44)) = eax;
    if (*((ebp - 0x44)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x44)) == 0) {
            goto label_14;
        }
        assert_fail ("top==0", "source.c", 0x66, "main");
    }
label_14:
    putchar (0xa);
    FLD ();
    eax = TOP ();
    *((ebp - 0x48)) = eax;
    if (*((ebp - 0x48)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x48)) == 0) {
            goto label_15;
        }
        assert_fail ("top==0", "source.c", 0x6a, "main");
    }
label_15:
    putchar (0xa);
    FLDC ();
    eax = TOP ();
    *((ebp - 0x4c)) = eax;
    if (*((ebp - 0x4c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x4c)) == 0) {
            goto label_16;
        }
        assert_fail ("top==0", "source.c", 0x6e, "main");
    }
label_16:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FMUL ();
    eax = TOP ();
    *((ebp - 0x50)) = eax;
    if (*((ebp - 0x50)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x50)) == 0) {
            goto label_17;
        }
        assert_fail ("top==0", "source.c", 0x72, "main");
    }
label_17:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FPATAN ();
    eax = TOP ();
    *((ebp - 0x54)) = eax;
    if (*((ebp - 0x54)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x54)) == 0) {
            goto label_18;
        }
        assert_fail ("top==0", "source.c", 0x76, "main");
    }
label_18:
    putchar (0xa);
    *(fp_stack--) = *(0x804c048);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FPREM ();
    eax = TOP ();
    *((ebp - 0x58)) = eax;
    if (*((ebp - 0x58)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x58)) == 0) {
            goto label_19;
        }
        assert_fail ("top==0", "source.c", 0x7a, "main");
    }
label_19:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FPTAN ();
    eax = TOP ();
    *((ebp - 0x5c)) = eax;
    if (*((ebp - 0x5c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x5c)) == 0) {
            goto label_20;
        }
        assert_fail ("top==0", "source.c", 0x7e, "main");
    }
label_20:
    putchar (0xa);
    *(fp_stack--) = *(0x804c050);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FRNDINT ();
    eax = TOP ();
    *((ebp - 0x60)) = eax;
    if (*((ebp - 0x60)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x60)) == 0) {
            goto label_21;
        }
        assert_fail ("top==0", "source.c", 0x82, "main");
    }
label_21:
    putchar (0xa);
    *(fp_stack--) = *(0x804c058);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FSCALE ();
    eax = TOP ();
    *((ebp - 0x64)) = eax;
    if (*((ebp - 0x64)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x64)) == 0) {
            goto label_22;
        }
        assert_fail ("top==0", "source.c", 0x86, "main");
    }
label_22:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FSIN ();
    eax = TOP ();
    *((ebp - 0x68)) = eax;
    if (*((ebp - 0x68)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x68)) == 0) {
            goto label_23;
        }
        assert_fail ("top==0", "source.c", 0x8a, "main");
    }
label_23:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FSINCOS ();
    eax = TOP ();
    *((ebp - 0x6c)) = eax;
    if (*((ebp - 0x6c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x6c)) == 0) {
            goto label_24;
        }
        assert_fail ("top==0", "source.c", 0x8e, "main");
    }
label_24:
    putchar (0xa);
    *(fp_stack--) = *(0x804c060);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FSQRT ();
    eax = TOP ();
    *((ebp - 0x70)) = eax;
    if (*((ebp - 0x70)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x70)) == 0) {
            goto label_25;
        }
        assert_fail ("top==0", "source.c", 0x92, "main");
    }
label_25:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FST ();
    eax = TOP ();
    *((ebp - 0x74)) = eax;
    if (*((ebp - 0x74)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x74)) == 0) {
            goto label_26;
        }
        assert_fail ("top==0", "source.c", 0x96, "main");
    }
label_26:
    putchar (0xa);
    *(fp_stack--) = *(0x804c050);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FSUB ();
    eax = TOP ();
    *((ebp - 0x78)) = eax;
    if (*((ebp - 0x78)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x78)) == 0) {
            goto label_27;
        }
        assert_fail ("top==0", "source.c", 0x9a, "main");
    }
label_27:
    putchar (0xa);
    *(fp_stack--) = *(0x804c068);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FTST ();
    eax = TOP ();
    *((ebp - 0x7c)) = eax;
    if (*((ebp - 0x7c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x7c)) == 0) {
            goto label_28;
        }
        assert_fail ("top==0", "source.c", 0x9e, "main");
    }
label_28:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FXAM ();
    eax = TOP ();
    *((ebp - 0x80)) = eax;
    if (*((ebp - 0x80)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x80)) == 0) {
            goto label_29;
        }
        assert_fail ("top==0", "source.c", 0xa2, "main");
    }
label_29:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FXCH ();
    eax = TOP ();
    *((ebp - 0x84)) = eax;
    if (*((ebp - 0x84)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x84)) == 0) {
            goto label_30;
        }
        assert_fail ("top==0", "source.c", 0xa6, "main");
    }
label_30:
    putchar (0xa);
    *(fp_stack--) = *(0x804c030);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FXTRACT ();
    eax = TOP ();
    *((ebp - 0x88)) = eax;
    if (*((ebp - 0x88)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x88)) == 0) {
            goto label_31;
        }
        assert_fail ("top==0", "source.c", 0xaa, "main");
    }
label_31:
    putchar (0xa);
    *(fp_stack--) = *(0x804c070);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FYL2X ();
    eax = TOP ();
    *((ebp - 0x8c)) = eax;
    if (*((ebp - 0x8c)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x8c)) == 0) {
            goto label_32;
        }
        assert_fail ("top==0", "source.c", 0xae, "main");
    }
label_32:
    putchar (0xa);
    *(fp_stack--) = *(0x804c078);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    FYL2XP1 ();
    eax = TOP ();
    *((ebp - 0x90)) = eax;
    if (*((ebp - 0x90)) != 0) {
        printf ("top=%d\n");
        if (*((ebp - 0x90)) == 0) {
            goto label_33;
        }
        assert_fail ("top==0", "source.c", 0xb2, "main");
    }
label_33:
    putchar (0xa);
    if (*(ebx) == 0x2a) {
        NOT_EXECUTED ();
    }
    eax = 0;
    esp = ebp - 8;
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049080 */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049070 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049fb0 */
#include <stdint.h>
 
uint32_t FADD (void) {
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FADD(para+1):     should=                             is=%12f/%15e\n");
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] += *(0x804c3cc);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FADD(para+12.34): should=                             is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FADD(pi+1/pi):    should=    3.459903/   3.459903e+00 is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FADD(1+1+-0):     should=    2.000000/   2.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] += *(0x804c3d4);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FADD(pi+1000):    should= 1003.141593/   1.003142e+03 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a060 */
#include <stdint.h>
 
uint32_t FBSTP (void) {
    *(fp_stack--) = *(0x804c468);
    fp_stack[0] = -fp_stack[0];
    *((tbyte )) = fp_stack[0];
    fp_stack--;
    eax = *(0x8050031);
    eax = *(0x8050030);
    eax = *(0x805002f);
    eax = *(0x805002e);
    eax = *(0x805002d);
    eax = *(0x805002c);
    eax = *(0x805002b);
    eax = *(0x805002a);
    eax = *(0x8050029);
    eax = *(obj.buffer);
    *(fp_stack--) = *(0x804c468);
    fp_stack[0] = -fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FBSTP(%f) should=0x44 0x33 0x22 0x11 0x90 0x78 0x56 0x34 0x12 0x80 is=0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a0e0 */
#include <stdint.h>
 
uint32_t FBLD (void) {
    *(fp_stack--) = *((tbyte ));
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = *(0x804c506);
    eax = *(0x804c505);
    eax = *(0x804c504);
    eax = *(0x804c503);
    eax = *(0x804c502);
    eax = *(0x804c501);
    eax = *(0x804c500);
    eax = *(0x804c4ff);
    eax = *(0x804c4fe);
    eax = *(loc.readbuffer);
    eax = printf (0x804c470);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a1b0 */
#include <stdint.h>
 
int32_t FCMOV (int32_t arg_2ch) {
    eax = *((esp + 0x2c));
    eax = (int32_t) ah;
    printf ("using EFLAGS=0x%0x\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovb st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(below ? 1 : pi):           should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmove st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(equal ? 1 : pi):           should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovbe st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(below_or_equal ? 1 : pi):  should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovu st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(unordered ? 1 : pi):       should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovnb st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(!below ? 1 : pi):          should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovne st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(!equal ? 1 : pi):          should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovnbe st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    printf ("  FCMOV(!below_or_equal ? 1 : pi): should=                             is=%12f/%15e\n");
    eax = *((esp + 0x2c));
    __asm ("sahf");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    __asm ("fcmovnu st(0), st(1)");
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    fp_stack++;
    eax = printf ("  FCMOV(!unordered ? 1 : pi):      should=                             is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a2f0 */
#include <stdint.h>
 
uint32_t FCOM (void) {
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], *((esp + 0x2c)));
    fp_stack++;
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FCOM(1,para): should=0x0000 is=0x%04x\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = *((esp + 0x2c));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FCOM(para,1): should=0x0100 is=0x%04x\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = pi;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FCOM(pi,1):   should=0x0000 is=0x%04x\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FCOM(1,pi):   should=0x0100 is=0x%04x\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FCOM(1,1):    should=0x4000 is=0x%04x\n");
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 0.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FCOM(1,nan):  should=0x4500 is=0x%04x\n");
    *(fp_stack--) = pi;
    __asm ("ficomp word [0x804c9bc]");
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FICOM(pi,3):  should=0x0000 is=0x%04x\n");
    *(fp_stack--) = pi;
    __asm ("ficomp word [0x804db42]");
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    eax = printf ("FICOM(pi,4):  should=0x0100 is=0x%04x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a4e0 */
#include <stdint.h>
 
uint32_t FCOS (void) {
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = cos(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FCOS(para):  should=                              is=%12f/%15e\n");
    *(fp_stack--) = 0.0;
    fp_stack[0] = cos(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FCOS(0):     should=     1.000000/   1.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = pi;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] = cos(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FCOS(pi/3):  should=     0.500000/   5.000000e-01 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] = cos(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FCOS(pi):    should=    -1.000000/  -1.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a560 */
#include <stdint.h>
 
uint32_t FDIV (void) {
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FDIV(1/para):     should=                             is=%12f/%15e\n");
    *(fp_stack--) = *(0x804c3cc);
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FDIV(para/12.34): should=                             is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FDIV(1/pi):       should=    0.318310/   3.183099e-01 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] /= *(0x804c3d4);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FIDIV(pi/1000):   should=    0.003142/   3.141593e-03 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a680 */
#include <stdint.h>
 
uint32_t FILD (void) {
    *(fp_stack--) = *(0x804cea9);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FILD(10k):  should=             10000.000000/   1.000000e+04 is=%25f/%15e\n");
    *(fp_stack--) = *(0x804ceab);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FILD(1G):   should=        1000000000.000000/   1.000000e+09 is=%25f/%15e\n");
    *(fp_stack--) = *(0x804ceaf);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FILD(1P):   should=  1000000000000000.000000/   1.000000e+15 is=%25f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804a980 */
#include <stdint.h>
 
uint32_t FLD (void) {
    *(fp_stack--) = *(0x804d1b7);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLD(float=12.34...):       should=   12.345679/   1.234568e+01 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804d1bb);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FLD(double=12.34...):      should=   12.345679/   1.234568e+01 is=%12f/%15e\n");
    *(fp_stack--) = fp_stack[?];
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FLD(long double=12.34...): should=   12.345679/   1.234568e+01 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804aaa0 */
#include <stdint.h>
 
uint32_t FMUL (void) {
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = pi;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FMUL(para*pi):  should=                             is=%12f/%15e\n");
    *(fp_stack--) = *(0x804c3cc);
    *(fp_stack--) = pi;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FMUL(12.34*pi): should=   38.767253/   3.876725e+01 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] *= *(0x804c3d4);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FIMUL(1000*pi): should= 3141.592654/   3.141593e+03 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804ac80 */
#include <stdint.h>
 
uint32_t FRNDINT (void) {
    int32_t var_20h;
    puts ("FRNDINT:\n  RC=00: to nearest\n  RC=01: down to -inf\n  RC=10: up to +inf\n  RC=11: to zero\n");
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(para):              should=                             is=%12f/%15e\n");
    *(fp_stack--) = *(str.ffffff__ffffff);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0x7f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=00):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n");
    *(fp_stack--) = *(str.ffffff__ffffff);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0x47f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=01):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n");
    *(fp_stack--) = *(str.ffffff__ffffff);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0x87f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=10):   should=   13.000000/   1.300000e+01 is=%12f/%15e\n");
    *(fp_stack--) = *(str.ffffff__ffffff);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0xc7f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=11):   should=   12.000000/   1.200000e+01 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804d0c6);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0x7f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=00):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804d0c6);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0x47f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=01):   should=   -8.000000/  -8.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804d0c6);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0x87f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    printf ("  FRNDINT(%f,RC=10):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n");
    *(fp_stack--) = *(0x804d0c6);
    *((esp + 4)) = fp_stack[0];
    eax = *((esp + 0x20));
    *((esp + 0x20)) = 0xc7f;
    *((esp + 0x20)) = ax;
    fp_stack[0] = round(fp_stack[0]);
    *((esp + 0xc)) = fp_stack[0];
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    eax = printf ("  FRNDINT(%f,RC=11):   should=   -7.000000/  -7.000000e+00 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b200 */
#include <stdint.h>
 
uint32_t FSUB (void) {
    *(fp_stack--) = *((esp + 0x2c));
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSUB(1-para):     should=                             is=%12f/%15e\n");
    *(fp_stack--) = *(0x804c3cc);
    *(fp_stack--) = *((esp + 0x2c));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSUB(para-12.34): should=                             is=%12f/%15e\n");
    *(fp_stack--) = pi;
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("FSUB(1-pi):       should=   -2.141593/  -2.141593e+00 is=%12f/%15e\n");
    *(fp_stack--) = pi;
    fp_stack[0] -= *(0x804c3d4);
    *((esp + 8)) = fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = printf ("FISUB(pi-1000):   should= -996.858407/  -9.968584e+02 is=%12f/%15e\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b290 */
#include <stdint.h>
 
uint32_t FTST (void) {
    *(fp_stack--) = *((esp + 0x2c));
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FTST(para): should=0x0100 is=0x%04x\n");
    *(fp_stack--) = pi;
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FTST(pi):   should=0x0000 is=0x%04x\n");
    *(fp_stack--) = pi;
    fp_stack[0] = -fp_stack[0];
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FTST(-pi):  should=0x0100 is=0x%04x\n");
    *(fp_stack--) = 0.0;
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FTST(0.0):  should=0x4000 is=0x%04x\n");
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 0.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    eax = printf ("FTST(nan):  should=0x4500 is=0x%04x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x804b340 */
#include <stdint.h>
 
uint32_t FXAM (void) {
    *(fp_stack--) = *((esp + 0x2c));
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FXAM(para):  should=0x0400 is=0x%04x\n");
    *(fp_stack--) = pi;
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FXAM(pi):    should=0x0400 is=0x%04x\n");
    *(fp_stack--) = 0.0;
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FXAM(0.0):   should=0x4000 is=0x%04x\n");
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 0.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FXAM(nan):   should=0x0100 is=0x%04x\n");
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    fp_stack++;
    ax &= 0x4500;
    eax = (int32_t) ax;
    ax = printf ("FXAM(inf):   should=0x0500 is=0x%04x\n");
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    ax &= 0x4500;
    eax = (int32_t) ax;
    eax = printf ("FXAM(empty): should=0x4100 is=0x%04x\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_x87_fpu/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x6ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
