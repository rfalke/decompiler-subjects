/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049090 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [14] -r-x section size 33225 named .text */
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080490c7 ();
    ebx += 0xcf5c;
    eax = dbg.main;
    return libc_start_main (eax, esi, ecx, ebx - 0x4e20, ebx - 0x4db0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80490c7 */
#include <stdint.h>
 
void fcn_080490c7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049070 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e6f2 */
#include <stdint.h>
 
int32_t dbg_isnanl (int32_t sw) {
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* int isnanl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    ebx = (int32_t) al;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb41 */
#include <stdint.h>
 
void dbg_scalbnf (void) {
    float x;
    int32_t n;
    /* float scalbnf(float x,int n); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    __asm ("fscale");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e870 */
#include <stdint.h>
 
int32_t dbg_isinff (int32_t retval, int32_t sw) {
    float x;
    ebx = retval;
    esi = sw;
    /* int isinff(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    al = (eax == 0x500) ? 1 : 0;
    ebx = (int32_t) al;
    eax = esi;
    eax &= 0x200;
    if (eax != 0) {
        ebx = -ebx;
    }
    eax = ebx;
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f442 */
#include <stdint.h>
 
uint32_t dbg_copysignl (long double y, int32_t sw) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t * xp;
    long double x;
    ebx = sw;
    /* long double copysignl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax = ebp + 8;
    *((ebp - 8)) = eax;
    eax = ebx;
    eax &= 0x200;
    if (eax != 0) {
        eax = *((ebp - 8));
        eax += 8;
        edx = *(eax);
        eax = *((ebp - 8));
        eax += 8;
        dh |= 0x80;
        *(eax) = edx;
    } else {
        eax = *((ebp - 8));
        eax += 8;
        edx = *(eax);
        eax = *((ebp - 8));
        eax += 8;
        dh &= 0x7f;
        *(eax) = edx;
    }
    *(fp_stack--) = fp_stack[?];
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e6bb */
#include <stdint.h>
 
int32_t dbg_isnan (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = sw;
    /* int isnan(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    ebx = (int32_t) al;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f911 */
#include <stdint.h>
 
int32_t dbg_frexp (int * exp, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    int * eptr;
    /* double frexp(double x,int * eptr); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    eax = *((ebp + 0x10));
    *(eax) = 0;
    *(fp_stack--) = *((ebp - 8));
    edx = *((ebp + 0x10));
    __asm ("wait");
    ax = fp_status;
    ah &= 0x41;
    ah ^= 0x40;
    if (ah != 0) {
        __asm ("fxtract");
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *(edx) = fp_stack[0];
        fp_stack--;
        __asm ("fscale");
        *(edx)++;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb77 */
#include <stdint.h>
 
void dbg_ldexpf (void) {
    float x;
    int32_t n;
    /* float ldexpf(float x,int n); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    __asm ("fscale");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb6a */
#include <stdint.h>
 
void dbg_scalbnl (void) {
    long double x;
    int32_t n;
    /* long double scalbnl(long double x,int n); */
    *(fp_stack--) = *((ebp + 0x14));
    *(fp_stack--) = fp_stack[?];
    __asm ("fscale");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e8ec */
#include <stdint.h>
 
int32_t dbg_isinfl (int32_t retval, int32_t sw) {
    long double x;
    ebx = retval;
    esi = sw;
    /* int isinfl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    al = (eax == 0x500) ? 1 : 0;
    ebx = (int32_t) al;
    eax = esi;
    eax &= 0x200;
    if (eax != 0) {
        ebx = -ebx;
    }
    eax = ebx;
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb84 */
#include <stdint.h>
 
int32_t dbg_ldexp (int32_t exp, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    int32_t n;
    /* double ldexp(double x,int n); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp + 0x10));
    *(fp_stack--) = *((ebp - 8));
    __asm ("fscale");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f8e0 */
#include <stdint.h>
 
int32_t dbg_frexpf (int32_t arg_ch) {
    float x;
    int * eptr;
    /* float frexpf(float x,int * eptr); */
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    eax = *((ebp + 0xc));
    *(eax) = 0;
    *(fp_stack--) = *((ebp + 8));
    edx = *((ebp + 0xc));
    __asm ("wait");
    ax = fp_status;
    ah &= 0x41;
    ah ^= 0x40;
    if (ah != 0) {
        __asm ("fxtract");
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *(edx) = fp_stack[0];
        fp_stack--;
        __asm ("fscale");
        *(edx)++;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e693 */
#include <stdint.h>
 
int32_t dbg_isnanf (int32_t sw) {
    int32_t var_4h;
    float x;
    ebx = sw;
    /* int isnanf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    ebx = (int32_t) al;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f3d1 */
#include <stdint.h>
 
int32_t dbg_copysign (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t sw) {
    int32_t var_28h;
    int32_t var_24h;
    arithmetic var_20h;
    int32_t var_1ch;
    double x;
    int32_t var_ch;
    uint32_t * xp;
    ebx = sw;
    /* double copysign(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x24)) = eax;
    *(fp_stack--) = *((ebp - 0x28));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax = ebp - 0x20;
    *((ebp - 0xc)) = eax;
    eax = ebx;
    eax &= 0x200;
    if (eax != 0) {
        eax = *((ebp - 0xc));
        eax += 4;
        edx = *(eax);
        eax = *((ebp - 0xc));
        eax += 4;
        edx |= 0x80000000;
        *(eax) = edx;
    } else {
        eax = *((ebp - 0xc));
        eax += 4;
        edx = *(eax);
        eax = *((ebp - 0xc));
        eax += 4;
        edx &= 0x7fffffff;
        *(eax) = edx;
    }
    *(fp_stack--) = *((ebp - 0x20));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb4e */
#include <stdint.h>
 
int32_t dbg_scalbn (int32_t ex, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    int32_t n;
    /* double scalbn(double x,int n); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp + 0x10));
    *(fp_stack--) = *((ebp - 8));
    __asm ("fscale");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e8a5 */
#include <stdint.h>
 
int32_t dbg_isinf (int32_t arg_8h, int32_t arg_ch, int32_t retval, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    ebx = retval;
    esi = sw;
    /* int isinf(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    al = (eax == 0x500) ? 1 : 0;
    ebx = (int32_t) al;
    eax = esi;
    eax &= 0x200;
    if (eax != 0) {
        ebx = -ebx;
    }
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fba0 */
#include <stdint.h>
 
void dbg_ldexpl (void) {
    long double x;
    int32_t n;
    /* long double ldexpl(long double x,int n); */
    *(fp_stack--) = *((ebp + 0x14));
    *(fp_stack--) = fp_stack[?];
    __asm ("fscale");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f382 */
#include <stdint.h>
 
uint32_t dbg_copysignf (float y, int32_t sw) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t * xp;
    float x;
    ebx = sw;
    /* float copysignf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax = ebp + 8;
    *((ebp - 8)) = eax;
    eax = ebx;
    eax &= 0x200;
    if (eax != 0) {
        eax = *((ebp - 8));
        eax = *(eax);
        eax |= 0x80000000;
        edx = eax;
        eax = *((ebp - 8));
        *(eax) = edx;
    } else {
        eax = *((ebp - 8));
        eax = *(eax);
        eax &= 0x7fffffff;
        edx = eax;
        eax = *((ebp - 8));
        *(eax) = edx;
    }
    *(fp_stack--) = *((ebp + 8));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f951 */
#include <stdint.h>
 
int32_t dbg_frexpl (int32_t arg_14h) {
    long double x;
    int * eptr;
    /* long double frexpl(long double x,int * eptr); */
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    eax = *((ebp + 0x14));
    *(eax) = 0;
    *(fp_stack--) = fp_stack[?];
    edx = *((ebp + 0x14));
    __asm ("wait");
    ax = fp_status;
    ah &= 0x41;
    ah ^= 0x40;
    if (ah != 0) {
        __asm ("fxtract");
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *(edx) = fp_stack[0];
        fp_stack--;
        __asm ("fscale");
        *(edx)++;
    }
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.0;
    if (eax != obj.completed.0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.0);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049130 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.0;
    eax -= obj.completed.0;
    edx = eax;
    eax >>= 0x1f;
    edx >>= 2;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.0, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049170 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80491a0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fd0a */
#include <stdint.h>
 
int16_t dbg_frac (void) {
    int32_t var_4h;
    int32_t var_2h;
    short int cw2;
    short int cw1;
    /* void frac(); */
    __asm ("wait");
    ax = *((ebp - 2));
    ah &= 0xf3;
    ah |= 4;
    *((ebp - 4)) = ax;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = round(fp_stack[0]);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] -= fp_stack[1];
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fd33 */
#include <stdint.h>
 
void dbg_Lpow2 (void) {
    /* void Lpow2(); */
    frac ();
    fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    __asm ("fscale");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8051250 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805090a */
#include <stdint.h>
 
int32_t dbg_tanhf (int32_t sw) {
    float esmall;
    float ebig;
    float x;
    ebx = sw;
    /* float tanhf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], *(0x80526ac));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = 1.0;
    } else {
        *(fp_stack--) = *((ebp + 8));
        *(fp_stack--) = *(0x80526b0);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            *(fp_stack--) = 1.0;
            fp_stack[0] = -fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp + 8));
            __asm ("fxam");
            ax = fp_status;
            fp_stack++;
            ebx = eax;
            eax &= 0x4500;
            if (eax == 0x500) {
                eax = ebx;
                eax &= 0x200;
                if (eax != 0) {
                    *(fp_stack--) = 0.0;
                    *((ebp - 8)) = fp_stack[0];
                    fp_stack--;
                } else {
                    *(fp_stack--) = *((ebp + 8));
                }
                *((ebp - 8)) = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = *((ebp + 8));
                *(fp_stack--) = log_2(e);
                fp_tmp_0 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_0;
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = round(fp_stack[0]);
                fp_stack[2] = fp_stack[0];
                fp_stack[0] -= fp_stack[1];
                fp_stack++;
                fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
                *(fp_stack--) = 1.0;
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                __asm ("fscale");
                *((ebp - 8)) = fp_stack[0];
                fp_stack--;
            }
            *(fp_stack--) = 1.0;
            fp_stack[0] /= *((ebp - 8));
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((ebp - 8));
            fp_stack[0] -= *((ebp - 0xc));
            *(fp_stack--) = *((ebp - 8));
            fp_stack[0] += *((ebp - 0xc));
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
        }
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050a50 */
#include <stdint.h>
 
int32_t dbg_tanhl (int32_t sw) {
    long double esmall;
    long double ebig;
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* long double tanhl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = 1.0;
    } else {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            *(fp_stack--) = 1.0;
            fp_stack[0] = -fp_stack[0];
        } else {
            *(fp_stack--) = fp_stack[?];
            __asm ("fxam");
            ax = fp_status;
            fp_stack++;
            ebx = eax;
            eax &= 0x4500;
            if (eax == 0x500) {
                eax = ebx;
                eax &= 0x200;
                if (eax != 0) {
                    *(fp_stack--) = 0.0;
                    ? = fp_stack[0];
                    fp_stack--;
                } else {
                    *(fp_stack--) = fp_stack[?];
                }
                ? = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = fp_stack[?];
                *(fp_stack--) = log_2(e);
                fp_tmp_0 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_0;
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = round(fp_stack[0]);
                fp_stack[2] = fp_stack[0];
                fp_stack[0] -= fp_stack[1];
                fp_stack++;
                fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
                *(fp_stack--) = 1.0;
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                __asm ("fscale");
                ? = fp_stack[0];
                fp_stack--;
            }
            *(fp_stack--) = 1.0;
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
            ? = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
        }
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eaf2 */
#include <stdint.h>
 
int32_t dbg_isgreaterl (int32_t retval) {
    int32_t var_4h;
    long double x;
    long double y;
    ebx = retval;
    /* int isgreaterl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x45) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f567 */
#include <stdint.h>
 
void dbg_sinl (void) {
    long double x;
    /* long double sinl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = sin(fp_stack[0]);
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = sin(fp_stack[0]);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fcdd */
#include <stdint.h>
 
void dbg_fabsf (void) {
    float x;
    /* float fabsf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = abs(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fd00 */
#include <stdint.h>
 
void dbg_fabsl (void) {
    long double x;
    /* long double fabsl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = abs(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f9eb */
#include <stdint.h>
 
int32_t dbg_llrint (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    int32_t var_8h;
    int32_t var_4h;
    long long int ret;
    /* long long int llrint(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    eax = *((ebp - 8));
    edx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb02 */
#include <stdint.h>
 
int32_t dbg_lrintl (void) {
    int32_t var_4h;
    long int ret;
    long double x;
    /* long int lrintl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f510 */
#include <stdint.h>
 
void dbg_sinf (void) {
    float x;
    /* float sinf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = sin(fp_stack[0]);
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = sin(fp_stack[0]);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80490e0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80506e6 */
#include <stdint.h>
 
int32_t dbg_sinh (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    double x;
    int32_t var_14h;
    double eneg;
    double epos;
    int32_t var_4h;
    ebx = sw;
    /* double sinh(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    *(fp_stack--) = *((ebp - 0x20));
    ax = fp_status;
    fp_stack++;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *((ebp - 0x20));
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        ebx = eax;
        eax &= 0x4500;
        if (eax == 0x500) {
            eax = ebx;
            eax &= 0x200;
            if (eax != 0) {
                *(fp_stack--) = 0.0;
                *((ebp - 0x10)) = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = *((ebp - 0x20));
            }
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = *((ebp - 0x20));
            *(fp_stack--) = log_2(e);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = 1.0;
        fp_stack[0] /= *((ebp - 0x10));
        *(fp_stack--) = *((ebp - 0x10));
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *(0x8052690);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
    } else {
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] = -fp_stack[0];
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        ebx = eax;
        eax &= 0x4500;
        if (eax == 0x500) {
            eax = ebx;
            eax &= 0x200;
            if (eax != 0) {
                *(fp_stack--) = 0.0;
                *((ebp - 0x18)) = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = *((ebp - 0x20));
            }
            fp_stack[0] = -fp_stack[0];
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x28));
            edx = *((ebp - 0x24));
            *((ebp - 0x18)) = eax;
            *((ebp - 0x14)) = edx;
        } else {
            *(fp_stack--) = *((ebp - 0x20));
            fp_stack[0] = -fp_stack[0];
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x28));
            edx = *((ebp - 0x24));
            *((ebp - 0x28)) = eax;
            *((ebp - 0x24)) = edx;
            *(fp_stack--) = *((ebp - 0x28));
            *(fp_stack--) = log_2(e);
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = 1.0;
        fp_stack[0] /= *((ebp - 0x18));
        fp_stack[0] -= *((ebp - 0x18));
        *(fp_stack--) = *(0x8052690);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fad2 */
#include <stdint.h>
 
int32_t dbg_lrintf (void) {
    int32_t var_4h;
    long int ret;
    float x;
    /* long int lrintf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f9be */
#include <stdint.h>
 
int32_t dbg_ilogbl (void) {
    int32_t var_4h;
    int32_t ret;
    long double x;
    /* int ilogbl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxtract");
    fp_stack++;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    fp_stack++;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa74 */
#include <stdint.h>
 
int32_t dbg_log2 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double log2(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = 1.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fc1c */
#include <stdint.h>
 
int32_t dbg_sincos (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    double * sinptr;
    double * cosptr;
    /* void sincos(double x,double * sinptr,double * cosptr); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    ecx = *((ebp - 0x18));
    ebx = *((ebp - 0x14));
    eax = *((ebp + 0x14));
    *(eax) = ecx;
    *((eax + 4)) = ebx;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    ecx = *((ebp - 0x18));
    ebx = *((ebp - 0x14));
    eax = *((ebp + 0x10));
    *(eax) = ecx;
    *((eax + 4)) = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804faab */
#include <stdint.h>
 
int32_t dbg_logb (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double logb(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    __asm ("fxtract");
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fc5c */
#include <stdint.h>
 
int32_t dbg_sincosl (int32_t arg_14h, int32_t arg_18h) {
    long double x;
    long double * sinptr;
    long double * cosptr;
    /* void sincosl(long double x,long double * sinptr,long double * cosptr); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    eax = *((ebp + 0x18));
    ? = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x14));
    ? = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8051255 */
#include <stdint.h>
 
void x86_get_pc_thunk_bp (void) {
    ebp = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f982 */
#include <stdint.h>
 
int32_t dbg_ilogbf (void) {
    int32_t var_4h;
    int32_t ret;
    float x;
    /* int ilogbf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxtract");
    fp_stack++;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    fp_stack++;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804efce */
#include <stdint.h>
 
int32_t dbg_exp10l (int32_t sw) {
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* long double exp10l(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
        } else {
            *(fp_stack--) = fp_stack[?];
        }
    } else {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = log_2(10);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[2] = fp_stack[0];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f181 */
#include <stdint.h>
 
void dbg_logf (void) {
    float x;
    /* float logf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e999 */
#include <stdint.h>
 
int32_t dbg_fpclassify (int32_t arg_8h, int32_t arg_ch, int32_t retval) {
    int32_t var_20h;
    int32_t var_1ch;
    double x;
    int32_t var_ch;
    uint32_t const * xp;
    ebx = retval;
    /* int __fpclassify(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    eax = ebp - 0x20;
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x20));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x100) {
        ebx = 0;
    } else {
        eax = ebx;
        eax &= 0x4500;
        if (eax == 0x500) {
            ebx = 1;
        } else {
            eax = ebx;
            eax &= 0x4500;
            if (eax == 0x4000) {
                ebx = 2;
            } else {
                eax = *((ebp - 0xc));
                eax += 4;
                eax = *(eax);
                if (eax == 0) {
                    ebx = 3;
                } else {
                    ebx = 4;
                }
            }
        }
    }
    eax = 4;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ef1d */
#include <stdint.h>
 
int32_t dbg_exp10f (int32_t sw) {
    int32_t var_4h;
    float x;
    ebx = sw;
    /* float exp10f(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
        } else {
            *(fp_stack--) = *((ebp + 8));
        }
    } else {
        *(fp_stack--) = *((ebp + 8));
        *(fp_stack--) = log_2(10);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[2] = fp_stack[0];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fbc2 */
#include <stdint.h>
 
int32_t dbg_significand (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    double ret;
    /* double significand(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    __asm ("fxtract");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050ffe */
#include <stdint.h>
 
int32_t dbg_scalbl (int32_t nx, int32_t sw) {
    arithmetic x;
    int32_t ex;
    int32_t var_ch;
    int32_t var_ah;
    int32_t var_8h;
    long double n;
    ebx = nx;
    esi = sw;
    /* long double scalbl(long double x,long double n); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    ebx = (int32_t) al;
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    esi = (int32_t) al;
    if (ebx == 0) {
        if (esi == 0) {
            goto label_0;
        }
    }
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    goto label_1;
label_0:
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = ebx;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_2;
        }
    }
    eax = 1;
    goto label_3;
label_2:
    eax = 0;
label_3:
    ebx = 0;
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = esi;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_4;
        }
    }
    eax = 1;
    goto label_5;
label_4:
    eax = 0;
label_5:
    esi = 0;
    if (esi == 0) {
        *(fp_stack--) = fp_stack[?];
        ax = fp_status;
        fp_stack++;
        if ((ah & 0x45) == 0) {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
        } else {
            *(fp_stack--) = 0.0;
        }
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        ah ^= 0x40;
        if (ah == 0) {
            *(fp_stack--) = fp_stack[?];
        } else {
        }
        if (ebx == 0) {
            *(fp_stack--) = 0.0;
            fp_stack[0] /= fp_stack[0];
        } else {
            *(fp_stack--) = fp_stack[?];
        }
        fp_stack[0] = -fp_stack[0];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
    } else {
        *(fp_stack--) = fp_stack[?];
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        ax = rint (*((ebp - 0x18)), *((ebp - 0x14)));
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        if (ah != 0x40) {
            *(fp_stack--) = 0.0;
            fp_stack[0] /= fp_stack[0];
        } else {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            if ((ah & 0x45) == 0) {
                *(fp_stack--) = fp_stack[?];
                *((ebp - 0x18)) = fp_stack[0];
                fp_stack--;
                ax = scalbn (*((ebp - 0x18)), *((ebp - 0x14)));
            } else {
                *(fp_stack--) = fp_stack[?];
                *(fp_stack--) = fp_stack[?];
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                if ((ah & 0x45) == 0) {
                    *(fp_stack--) = fp_stack[?];
                    *((ebp - 0x18)) = fp_stack[0];
                    fp_stack--;
                    scalbn (*((ebp - 0x18)), *((ebp - 0x14)));
                } else {
                    *(fp_stack--) = fp_stack[?];
                    ax = *((ebp - 0xa));
                    ah |= 0xc;
                    *((ebp - 0xc)) = ax;
                    *((ebp - 0x18)) = fp_stack[0];
                    fp_stack--;
                    eax = *((ebp - 0x18));
                    *(fp_stack--) = fp_stack[?];
                    *((ebp - 0x18)) = fp_stack[0];
                    fp_stack--;
                    scalbn (*((ebp - 0x18)), *((ebp - 0x14)));
                }
            }
        }
    }
label_1:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eb81 */
#include <stdint.h>
 
int32_t dbg_islessf (int32_t retval) {
    int32_t var_4h;
    float x;
    float y;
    ebx = retval;
    /* int islessf(float x,float y); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x45) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fef4 */
#include <stdint.h>
 
int32_t dbg_powl (int32_t sw) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t yint;
    long double x;
    long double y;
    ebx = sw;
    /* long double powl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x500) {
        *(fp_stack--) = 1.0;
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        ah ^= 0x40;
        if (ah != 0) {
            goto label_0;
        }
    }
    *(fp_stack--) = fp_stack[?];
    goto label_1;
label_0:
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ah &= 0x45;
    ah ^= 0x40;
    if (ah == 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = log_2(10);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ax = frac ();
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        goto label_1;
    }
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    ax = fp_status;
    __asm ("sahf");
    if (fp_stack[0] > 0.0) {
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        ax = Lpow2 ();
        goto label_1;
    }
    if (fp_stack[0] < 0.0) {
        goto label_2;
    }
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (fp_stack[0] > 0.0) {
        goto label_3;
    }
    if (fp_stack[0] < 0.0) {
        goto label_4;
    }
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    do {
label_4:
        fp_stack[0] = sqrt(fp_stack[0]);
        goto label_1;
label_3:
        fp_stack++;
        *(fp_stack--) = 0.0;
        goto label_1;
label_2:
        fp_stack[0] = abs(fp_stack[0]);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        ax = frac ();
        ax = fp_status;
        fp_stack++;
        __asm ("sahf");
        if (fp_stack[0] == 0.0) {
            goto label_5;
        }
        fp_stack++;
        fp_stack[0] = -fp_stack[0];
    } while (1);
label_5:
    *((ebp - 8)) = fp_stack[0];
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    Lpow2 ();
    *((ebp - 8)) &= 1;
    if (*((ebp - 8)) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
label_1:
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fd48 */
#include <stdint.h>
 
int32_t dbg_powf (int32_t sw) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t yint;
    float x;
    float y;
    ebx = sw;
    /* float powf(float x,float y); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x500) {
        *(fp_stack--) = 1.0;
        *(fp_stack--) = *((ebp + 8));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        ah ^= 0x40;
        if (ah != 0) {
            goto label_0;
        }
    }
    *(fp_stack--) = *((ebp + 8));
    goto label_1;
label_0:
    *(fp_stack--) = *(0x8052650);
    *(fp_stack--) = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ah &= 0x45;
    ah ^= 0x40;
    if (ah == 0) {
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = log_2(10);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ax = frac ();
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        goto label_1;
    }
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    ax = fp_status;
    __asm ("sahf");
    if (fp_stack[0] > 0.0) {
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        ax = Lpow2 ();
        goto label_1;
    }
    if (fp_stack[0] < 0.0) {
        goto label_2;
    }
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (fp_stack[0] > 0.0) {
        goto label_3;
    }
    if (fp_stack[0] < 0.0) {
        goto label_4;
    }
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    do {
label_4:
        fp_stack[0] = sqrt(fp_stack[0]);
        goto label_1;
label_3:
        fp_stack++;
        *(fp_stack--) = 0.0;
        goto label_1;
label_2:
        fp_stack[0] = abs(fp_stack[0]);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        ax = frac ();
        ax = fp_status;
        fp_stack++;
        __asm ("sahf");
        if (fp_stack[0] == 0.0) {
            goto label_5;
        }
        fp_stack++;
        fp_stack[0] = -fp_stack[0];
    } while (1);
label_5:
    *((ebp - 8)) = fp_stack[0];
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    Lpow2 ();
    *((ebp - 8)) &= 1;
    if (*((ebp - 8)) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
label_1:
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fffb */
#include <stdint.h>
 
int32_t dbg_pow10 (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double y;
    int32_t var_4h;
    ebx = sw;
    /* double pow10(double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        *(fp_stack--) = *((ebp - 0x10));
    } else {
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = log_2(10);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        frac ();
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa21 */
#include <stdint.h>
 
void dbg_log1pf (void) {
    float x;
    /* float log1pf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f6f7 */
#include <stdint.h>
 
void dbg_fdiml (void) {
    long double x;
    long double y;
    /* long double fdiml(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = abs(fp_stack[0]);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f07c */
#include <stdint.h>
 
int8_t dbg_hypotf (void) {
    float x;
    float y;
    /* float hypotf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    ch = ah;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = fp_stack[0];
    fp_stack++;
    __asm ("fxam");
    ax = fp_status;
    al = ah;
    ah |= ch;
    __asm ("sahf");
    if (ah >= 0) {
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[0] *= fp_stack[0];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] *= fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
    } else {
        al &= 0x45;
        if (al != 5) {
            ch &= 0x45;
            if (ch != 5) {
                goto label_0;
            }
            fp_tmp_3 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_3;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        fp_stack[0] = abs(fp_stack[0]);
        goto label_1;
label_0:
        if ((al & 1) == 0) {
            fp_tmp_4 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_4;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
label_1:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f32c */
#include <stdint.h>
 
int32_t dbg_ceil (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double val;
    int32_t var_8h;
    int32_t var_4h;
    uint32_t new_cw;
    uint32_t cw;
    /* double ceil(double val); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    __asm ("wait");
    eax = *((ebp - 4));
    eax &= 0xf3ff;
    ah |= 8;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050e29 */
#include <stdint.h>
 
int32_t dbg_scalb (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t nx, int32_t sw) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_1ah;
    arithmetic x;
    int32_t var_14h;
    double n;
    int32_t ex;
    int32_t var_8h;
    ebx = nx;
    esi = sw;
    /* double scalb(double x,double n); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    ebx = (int32_t) al;
    *(fp_stack--) = *((ebp - 0x18));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    esi = (int32_t) al;
    if (ebx == 0) {
        if (esi == 0) {
            goto label_0;
        }
    }
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[0] *= *((ebp - 0x18));
    goto label_1;
label_0:
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = ebx;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_2;
        }
    }
    eax = 1;
    goto label_3;
label_2:
    eax = 0;
label_3:
    ebx = 0;
    *(fp_stack--) = *((ebp - 0x18));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = esi;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_4;
        }
    }
    eax = 1;
    goto label_5;
label_4:
    eax = 0;
label_5:
    esi = 0;
    if (esi == 0) {
        *(fp_stack--) = *((ebp - 0x18));
        ax = fp_status;
        fp_stack++;
        if ((ah & 0x45) == 0) {
            *(fp_stack--) = *((ebp - 0x10));
            fp_stack[0] *= *((ebp - 0x18));
        } else {
            *(fp_stack--) = 0.0;
        }
        *(fp_stack--) = *((ebp - 0x10));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        ah ^= 0x40;
        if (ah == 0) {
            *(fp_stack--) = *((ebp - 0x10));
        } else {
        }
        if (ebx == 0) {
            *(fp_stack--) = 0.0;
            fp_stack[0] /= fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp - 0x10));
        }
        fp_stack[0] = -fp_stack[0];
        fp_stack[0] /= *((ebp - 0x18));
    } else {
        ax = rint (*((ebp - 0x18)), *((ebp - 0x14)));
        *(fp_stack--) = *((ebp - 0x18));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        if (ah != 0x40) {
            *(fp_stack--) = 0.0;
            fp_stack[0] /= fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp - 0x18));
            fp_status = fp_compare(fp_stack[0], *(0x80526f8));
            fp_stack++;
            ax = fp_status;
            if ((ah & 0x45) == 0) {
                ax = scalbn (*((ebp - 0x10)), *((ebp - 0xc)));
            } else {
                *(fp_stack--) = *((ebp - 0x18));
                *(fp_stack--) = *(0x8052700);
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                if ((ah & 0x45) == 0) {
                    scalbn (*((ebp - 0x10)), *((ebp - 0xc)));
                } else {
                    *(fp_stack--) = *((ebp - 0x18));
                    ax = *((ebp - 0x1a));
                    ah |= 0xc;
                    *((ebp - 0x1c)) = ax;
                    *((ebp - 0x20)) = fp_stack[0];
                    fp_stack--;
                    eax = *((ebp - 0x20));
                    scalbn (*((ebp - 0x10)), *((ebp - 0xc)));
                }
            }
        }
    }
label_1:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050583 */
#include <stdint.h>
 
int32_t dbg_coshl (int32_t sw) {
    long double retval;
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* long double coshl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = abs(fp_stack[0]);
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
            ? = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = log_2(e);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            ? = fp_stack[0];
            fp_stack--;
        } else {
        }
    }
    *(fp_stack--) = 1.0;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ebd6 */
#include <stdint.h>
 
int32_t dbg_islessl (int32_t retval) {
    int32_t var_4h;
    long double x;
    long double y;
    ebx = retval;
    /* int islessl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x45) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804edec */
#include <stdint.h>
 
int32_t dbg_atan2 (arithmetic x, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double y;
    /* double atan2(double y,double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ea1b */
#include <stdint.h>
 
uint32_t dbg_fpclassifyl (int32_t arg_8h, int32_t retval) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t const * xp;
    long double x;
    ebx = retval;
    /* int __fpclassifyl(long double x); */
    eax = ebp + 8;
    *((ebp - 8)) = eax;
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x100) {
        ebx = 0;
    } else {
        eax = ebx;
        eax &= 0x4500;
        if (eax == 0x500) {
            ebx = 1;
        } else {
            eax = ebx;
            eax &= 0x4500;
            if (eax == 0x4000) {
                ebx = 2;
            } else {
                eax = *((ebp - 8));
                eax += 8;
                eax = *(eax);
                if (eax == 0) {
                    eax = *((ebp - 8));
                    eax += 4;
                    eax = *(eax);
                    if (eax >= 0) {
                        ebx = 3;
                    }
                } else {
                    ebx = 4;
                }
            }
        }
    }
    eax = 4;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f6ba */
#include <stdint.h>
 
void dbg_fdimf (void) {
    float x;
    float y;
    /* float fdimf(float x,float y); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = abs(fp_stack[0]);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f1ac */
#include <stdint.h>
 
void dbg_logl (void) {
    long double x;
    /* long double logl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e921 */
#include <stdint.h>
 
uint32_t dbg_fpclassifyf (int32_t arg_8h, int32_t retval) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t const * xp;
    float x;
    ebx = retval;
    /* int __fpclassifyf(float x); */
    eax = ebp + 8;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x100) {
        ebx = 0;
    } else {
        eax = ebx;
        eax &= 0x4500;
        if (eax == 0x500) {
            ebx = 1;
        } else {
            eax = ebx;
            eax &= 0x4500;
            if (eax == 0x4000) {
                ebx = 2;
            } else {
                eax = *((ebp - 8));
                eax = *(eax);
                eax &= 0x7f000000;
                if (eax == 0) {
                    ebx = 3;
                } else {
                    ebx = 4;
                }
            }
        }
    }
    eax = 4;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f133 */
#include <stdint.h>
 
int8_t dbg_hypotl (void) {
    long double x;
    long double y;
    /* long double hypotl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    ch = ah;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = fp_stack[0];
    fp_stack++;
    __asm ("fxam");
    ax = fp_status;
    al = ah;
    ah |= ch;
    __asm ("sahf");
    if (ah >= 0) {
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[0] *= fp_stack[0];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] *= fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
    } else {
        al &= 0x45;
        if (al != 5) {
            ch &= 0x45;
            if (ch != 5) {
                goto label_0;
            }
            fp_tmp_3 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_3;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        fp_stack[0] = abs(fp_stack[0]);
        goto label_1;
label_0:
        if ((al & 1) == 0) {
            fp_tmp_4 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_4;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
label_1:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f58b */
#include <stdint.h>
 
void dbg_tanf (void) {
    float x;
    /* float tanf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
label_0:
    __asm ("ffreep st(0)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80509a7 */
#include <stdint.h>
 
int32_t dbg_tanh (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_20h;
    int32_t var_1ch;
    double x;
    double esmall;
    double ebig;
    int32_t var_4h;
    ebx = sw;
    /* double tanh(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    *(fp_stack--) = *((ebp - 0x20));
    fp_status = fp_compare(fp_stack[0], *(0x80526b8));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = 1.0;
    } else {
        *(fp_stack--) = *((ebp - 0x20));
        *(fp_stack--) = *(0x80526c0);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            *(fp_stack--) = 1.0;
            fp_stack[0] = -fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp - 0x20));
            __asm ("fxam");
            ax = fp_status;
            fp_stack++;
            ebx = eax;
            eax &= 0x4500;
            if (eax == 0x500) {
                eax = ebx;
                eax &= 0x200;
                if (eax != 0) {
                    *(fp_stack--) = 0.0;
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                } else {
                    *(fp_stack--) = *((ebp - 0x20));
                }
                *((ebp - 0x10)) = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = *((ebp - 0x20));
                *(fp_stack--) = log_2(e);
                fp_tmp_0 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_0;
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = round(fp_stack[0]);
                fp_stack[2] = fp_stack[0];
                fp_stack[0] -= fp_stack[1];
                fp_stack++;
                fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
                *(fp_stack--) = 1.0;
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                __asm ("fscale");
                *((ebp - 0x10)) = fp_stack[0];
                fp_stack--;
            }
            *(fp_stack--) = 1.0;
            fp_stack[0] /= *((ebp - 0x10));
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((ebp - 0x10));
            fp_stack[0] -= *((ebp - 0x18));
            *(fp_stack--) = *((ebp - 0x10));
            fp_stack[0] += *((ebp - 0x18));
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
        }
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa54 */
#include <stdint.h>
 
void dbg_log1pl (void) {
    long double x;
    /* long double log1pl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805048b */
#include <stdint.h>
 
int32_t dbg_coshf (int32_t sw) {
    int32_t var_1ch;
    float retval;
    float x;
    ebx = sw;
    /* float coshf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = abs(fp_stack[0]);
    *((ebp - 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xc));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = *((ebp - 0xc));
            *(fp_stack--) = log_2(e);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
        } else {
        }
    }
    *(fp_stack--) = *((ebp - 0xc));
    *(fp_stack--) = *((ebp - 0xc));
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *(0x8052690);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((ebp - 0x1c)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x1c));
    *((ebp - 0x1c)) = eax;
    *(fp_stack--) = *((ebp - 0x1c));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f2fb */
#include <stdint.h>
 
void dbg_atanl (void) {
    long double x;
    /* long double atanl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = 1.0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f2d4 */
#include <stdint.h>
 
void dbg_atanf (void) {
    float x;
    /* float atanf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = 1.0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050429 */
#include <stdint.h>
 
int32_t dbg_atanh (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    double retval;
    /* double atanh(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] -= *((ebp - 0x18));
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *(0x8052690);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f495 */
#include <stdint.h>
 
void dbg_cosf (void) {
    float x;
    /* float cosf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = cos(fp_stack[0]);
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = cos(fp_stack[0]);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050509 */
#include <stdint.h>
 
int32_t dbg_cosh (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_20h;
    int32_t var_1ch;
    double x;
    double retval;
    int32_t var_4h;
    ebx = sw;
    /* double cosh(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    *(fp_stack--) = *((ebp - 0x20));
    fp_stack[0] = abs(fp_stack[0]);
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = *((ebp - 0x10));
            *(fp_stack--) = log_2(e);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        } else {
        }
    }
    *(fp_stack--) = 1.0;
    fp_stack[0] /= *((ebp - 0x10));
    fp_stack[0] += *((ebp - 0x10));
    *(fp_stack--) = *(0x8052690);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f5e6 */
#include <stdint.h>
 
void dbg_tanl (void) {
    long double x;
    /* long double tanl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
label_0:
    __asm ("ffreep st(0)");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805125c */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x4d97;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f4ec */
#include <stdint.h>
 
void dbg_cosl (void) {
    long double x;
    /* long double cosl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = cos(fp_stack[0]);
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = cos(fp_stack[0]);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ecd7 */
#include <stdint.h>
 
int32_t dbg_isunorderedf (int32_t retval) {
    int32_t var_4h;
    float x;
    float y;
    ebx = retval;
    /* int isunorderedf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    __asm ("setp al");
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f060 */
#include <stdint.h>
 
void dbg_fmodl (void) {
    long double ret;
    long double x;
    long double y;
    /* long double fmodl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f032 */
#include <stdint.h>
 
int32_t dbg_fmod (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double x;
    /* double fmod(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 8));
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050af8 */
#include <stdint.h>
 
int32_t dbg_nearbyintf (void) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t org_sw;
    int32_t new_sw;
    float x;
    /* float nearbyintf(float x); */
    eax = *((ebp - 8));
    eax &= 0xffffffdf;
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ed7e */
#include <stdint.h>
 
void dbg_acosl (void) {
    long double x;
    /* long double acosl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f641 */
#include <stdint.h>
 
int32_t dbg_exp2 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double exp2(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    dh = 0x45;
    dh &= ah;
    if (dh != 5) {
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[1] -= fp_stack[0];
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    } else {
        if ((eax & 0x200) == 0) {
            goto label_0;
        }
        __asm ("ffreep st(0)");
        *(fp_stack--) = 0.0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ed28 */
#include <stdint.h>
 
int32_t dbg_isunorderedl (int32_t retval) {
    int32_t var_4h;
    long double x;
    long double y;
    ebx = retval;
    /* int isunorderedl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    __asm ("setp al");
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f01f */
#include <stdint.h>
 
void dbg_fmodf (void) {
    float x;
    float y;
    /* float fmodf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050286 */
#include <stdint.h>
 
int32_t dbg_acosh (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    double retval;
    /* double acosh(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] += *((ebp - 8));
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ed43 */
#include <stdint.h>
 
void dbg_acosf (void) {
    float x;
    /* float acosf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ee21 */
#include <stdint.h>
 
int32_t dbg_expf (int32_t sw) {
    int32_t var_4h;
    float x;
    ebx = sw;
    /* float expf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
        } else {
            *(fp_stack--) = *((ebp + 8));
        }
    } else {
        *(fp_stack--) = *((ebp + 8));
        *(fp_stack--) = log_2(e);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[2] = fp_stack[0];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ed59 */
#include <stdint.h>
 
int32_t dbg_acos (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double acos(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f9d6 */
#include <stdint.h>
 
int32_t dbg_llrintf (void) {
    int32_t var_8h;
    int32_t var_4h;
    long long int ret;
    float x;
    /* long long int llrintf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    eax = *((ebp - 8));
    edx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80507f5 */
#include <stdint.h>
 
int32_t dbg_sinhl (int32_t sw) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_1ch;
    int32_t var_18h;
    long double eneg;
    long double epos;
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* long double sinhl(long double x); */
    *(fp_stack--) = fp_stack[?];
    ax = fp_status;
    fp_stack++;
    if ((ah & 5) == 0) {
        *(fp_stack--) = fp_stack[?];
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        ebx = eax;
        eax &= 0x4500;
        if (eax == 0x500) {
            eax = ebx;
            eax &= 0x200;
            if (eax != 0) {
                *(fp_stack--) = 0.0;
                ? = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = fp_stack[?];
            }
            ? = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = log_2(e);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            ? = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = 1.0;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
    } else {
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] = -fp_stack[0];
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        ebx = eax;
        eax &= 0x4500;
        if (eax == 0x500) {
            eax = ebx;
            eax &= 0x200;
            if (eax != 0) {
                *(fp_stack--) = 0.0;
                ? = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = fp_stack[?];
            }
            fp_stack[0] = -fp_stack[0];
            ? = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x30));
            edx = *((ebp - 0x2c));
            ecx = *((ebp - 0x28));
            *((ebp - 0x1c)) = eax;
            *((ebp - 0x18)) = edx;
            *((ebp - 0x14)) = ecx;
        } else {
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] = -fp_stack[0];
            ? = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x30));
            edx = *((ebp - 0x2c));
            ecx = *((ebp - 0x28));
            *((ebp - 0x30)) = eax;
            *((ebp - 0x2c)) = edx;
            *((ebp - 0x28)) = ecx;
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = log_2(e);
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            ? = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = 1.0;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f60c */
#include <stdint.h>
 
void dbg_exp2f (void) {
    float x;
    /* float exp2f(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    dh = 0x45;
    dh &= ah;
    if (dh != 5) {
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[1] -= fp_stack[0];
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    } else {
        if ((eax & 0x200) == 0) {
            goto label_0;
        }
        __asm ("ffreep st(0)");
        *(fp_stack--) = 0.0;
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f685 */
#include <stdint.h>
 
void dbg_exp2l (void) {
    long double x;
    /* long double exp2l(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    dh = 0x45;
    dh &= ah;
    if (dh != 5) {
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[1] -= fp_stack[0];
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    } else {
        if ((eax & 0x200) == 0) {
            goto label_0;
        }
        __asm ("ffreep st(0)");
        *(fp_stack--) = 0.0;
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f8be */
#include <stdint.h>
 
void dbg_fminl (void) {
    long double x;
    long double y;
    /* long double fminl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    ah &= 0x45;
    if (ah != 1) {
        __asm ("fucom st(1)");
        ax = fp_status;
        __asm ("sahf");
        if (ah < 1) {
            goto label_0;
        }
    }
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
label_0:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f85f */
#include <stdint.h>
 
void dbg_fminf (void) {
    float x;
    float y;
    /* float fminf(float x,float y); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    __asm ("fxam");
    ax = fp_status;
    ah &= 0x45;
    if (ah != 1) {
        __asm ("fucom st(1)");
        ax = fp_status;
        __asm ("sahf");
        if (ah < 1) {
            goto label_0;
        }
    }
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
label_0:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e848 */
#include <stdint.h>
 
int32_t dbg_isnormall (int32_t sw) {
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* int isnormall(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x400) ? 1 : 0;
    ebx = (int32_t) al;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f708 */
#include <stdint.h>
 
int32_t dbg_floorf (void) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t new_cw;
    uint32_t cw;
    float val;
    /* float floorf(float val); */
    __asm ("wait");
    eax = *((ebp - 4));
    eax &= 0xf3ff;
    ah |= 4;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eece */
#include <stdint.h>
 
int32_t dbg_expl (int32_t sw) {
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* long double expl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
        } else {
            *(fp_stack--) = fp_stack[?];
        }
    } else {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = log_2(e);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[2] = fp_stack[0];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e7e9 */
#include <stdint.h>
 
int32_t dbg_isnormalf (int32_t sw) {
    int32_t var_4h;
    float x;
    ebx = sw;
    /* int isnormalf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x400) ? 1 : 0;
    ebx = (int32_t) al;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eb64 */
#include <stdint.h>
 
int32_t dbg_isgreaterequall (int32_t retval) {
    int32_t var_4h;
    long double x;
    long double y;
    ebx = retval;
    /* int isgreaterequall(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 5) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eb0f */
#include <stdint.h>
 
int32_t dbg_isgreaterequalf (int32_t retval) {
    int32_t var_4h;
    float x;
    float y;
    ebx = retval;
    /* int isgreaterequalf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 5) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f99a */
#include <stdint.h>
 
int32_t dbg_ilogb (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    int32_t var_4h;
    int32_t ret;
    /* int ilogb(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    __asm ("fxtract");
    fp_stack++;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    fp_stack++;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fce7 */
#include <stdint.h>
 
int32_t dbg_fabs (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double fabs(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] = abs(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80501b1 */
#include <stdint.h>
 
int32_t dbg_cbrtl (long double x, long double y, int32_t arg_10h, int32_t sw) {
    long double var_10h;
    long double var_ch;
    long double var_8h;
    int32_t var_4h;
    ebx = sw;
    /* long double cbrtl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = *((ebp + 8));
        edx = *((ebp + 0xc));
        ecx = *((ebp + 0x10));
    } else {
        *(fp_stack--) = fp_stack[?];
        ax = fp_status;
        fp_stack++;
        if ((ah & 5) == 0) {
            *(fp_stack--) = fp_stack[?];
            esp = esp - 0xc;
            ? = fp_stack[0];
            fp_stack--;
            powl ();
            ? = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x10));
            edx = *((ebp - 0xc));
            ecx = *((ebp - 8));
        } else {
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] = -fp_stack[0];
            ? = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x10));
            edx = *((ebp - 0xc));
            ecx = *((ebp - 8));
            *(fp_stack--) = fp_stack[?];
            esp = esp - 0xc;
            ? = fp_stack[0];
            fp_stack--;
            powl ();
            fp_stack[0] = -fp_stack[0];
            ? = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x10));
            edx = *((ebp - 0xc));
            ecx = *((ebp - 8));
        }
    }
    *((ebp - 0x10)) = eax;
    *((ebp - 0xc)) = edx;
    *((ebp - 8)) = ecx;
    *(fp_stack--) = fp_stack[?];
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f7d8 */
#include <stdint.h>
 
void dbg_fmaxf (void) {
    float x;
    float y;
    /* float fmaxf(float x,float y); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    __asm ("fxam");
    ax = fp_status;
    ah &= 0x45;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    if (ah != 1) {
        __asm ("fucom st(1)");
        ax = fp_status;
        __asm ("sahf");
        if (ah >= 1) {
            goto label_0;
        }
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
    }
label_0:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f534 */
#include <stdint.h>
 
int32_t dbg_sin (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double sin(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] = sin(fp_stack[0]);
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = sin(fp_stack[0]);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050084 */
#include <stdint.h>
 
int32_t dbg_cbrtf (float x, int32_t sw) {
    float var_8h;
    int32_t var_4h;
    ebx = sw;
    /* float cbrtf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = *((ebp + 8));
    } else {
        *(fp_stack--) = *((ebp + 8));
        ax = fp_status;
        fp_stack++;
        if ((ah & 5) == 0) {
            *(fp_stack--) = *(0x805266c);
            esp = esp - 4;
            *(esp) = fp_stack[0];
            fp_stack--;
            powf ();
            *((ebp - 8)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 8));
        } else {
            *(fp_stack--) = *((ebp + 8));
            fp_stack[0] = -fp_stack[0];
            *((ebp - 8)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 8));
            *(fp_stack--) = *(0x805266c);
            esp = esp - 4;
            *(esp) = fp_stack[0];
            fp_stack--;
            powf ();
            fp_stack[0] = -fp_stack[0];
            *((ebp - 8)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 8));
        }
    }
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp - 8));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb1e */
#include <stdint.h>
 
int32_t dbg_rint (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double rint(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fae4 */
#include <stdint.h>
 
int32_t dbg_lrint (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    int32_t var_4h;
    long int ret;
    /* long int lrint(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050b46 */
#include <stdint.h>
 
int32_t dbg_nearbyintl (void) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t org_sw;
    int32_t new_sw;
    long double x;
    /* long double nearbyintl(long double x); */
    eax = *((ebp - 8));
    eax &= 0xffffffdf;
    *((ebp - 4)) = eax;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fac6 */
#include <stdint.h>
 
void dbg_logbl (void) {
    long double x;
    /* long double logbl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxtract");
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa9f */
#include <stdint.h>
 
void dbg_logbf (void) {
    float x;
    /* float logbf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxtract");
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa91 */
#include <stdint.h>
 
void dbg_log2l (void) {
    long double x;
    /* long double log2l(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = 1.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f2e0 */
#include <stdint.h>
 
int32_t dbg_atan (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double atan(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = 1.0;
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f881 */
#include <stdint.h>
 
int32_t dbg_fmin (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double x;
    /* double fmin(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    ah &= 0x45;
    if (ah != 1) {
        __asm ("fucom st(1)");
        ax = fp_status;
        __asm ("sahf");
        if (ah < 1) {
            goto label_0;
        }
    }
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
label_0:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f262 */
#include <stdint.h>
 
int32_t dbg_drem (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    double y;
    int32_t var_4h;
    double x;
    /* double drem(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 8));
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e75a */
#include <stdint.h>
 
int32_t dbg_isfinite (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = sw;
    /* int isfinite(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = ebx;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_0;
        }
    }
    eax = 1;
    goto label_1;
label_0:
    eax = 0;
label_1:
    ebx = 0;
    eax = 0;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa66 */
#include <stdint.h>
 
void dbg_log2f (void) {
    float x;
    /* float log2f(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = 1.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ffbe */
#include <stdint.h>
 
int32_t dbg_pow10f (int32_t sw) {
    int32_t var_4h;
    float y;
    ebx = sw;
    /* float pow10f(float y); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        *(fp_stack--) = *((ebp + 8));
    } else {
        *(fp_stack--) = *((ebp + 8));
        *(fp_stack--) = log_2(10);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        frac ();
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eda8 */
#include <stdint.h>
 
int32_t dbg_asin (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double asin(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80511e0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    _x86_get_pc_thunk_bp ();
    ebp += 0x4e16;
    ebx = ebp;
    edi = *((esp + 0x28));
    _init (ebx, esi, edi);
    ebx = ebp - 0xf0;
    eax = ebp - 0xf4;
    ebx -= eax;
    ebx >>= 2;
    if (ebx == 0) {
        goto label_0;
    }
    esi = 0;
    do {
        uint32_t (*ebp + esi*4 - 0xf4)(uint32_t*, uint32_t*, uint32_t) (*((esp + 0x2c)), *((esp + 0x2c)), edi);
        esi++;
    } while (ebx != esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f208 */
#include <stdint.h>
 
int32_t dbg_remainder (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double x;
    /* double remainder(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 8));
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e811 */
#include <stdint.h>
 
int32_t dbg_isnormal (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = sw;
    /* int isnormal(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x400) ? 1 : 0;
    ebx = (int32_t) al;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ec10 */
#include <stdint.h>
 
int32_t dbg_islessequal (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t retval) {
    int32_t var_18h;
    int32_t var_14h;
    arithmetic var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = retval;
    /* int islessequal(double x,double y); */
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
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 5) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f0ca */
#include <stdint.h>
 
int32_t dbg_hypot (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double x;
    /* double hypot(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 8));
    __asm ("fxam");
    ax = fp_status;
    ch = ah;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = fp_stack[0];
    fp_stack++;
    __asm ("fxam");
    ax = fp_status;
    al = ah;
    ah |= ch;
    __asm ("sahf");
    if (ah >= 0) {
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[0] *= fp_stack[0];
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] *= fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] = sqrt(fp_stack[0]);
    } else {
        al &= 0x45;
        if (al != 5) {
            ch &= 0x45;
            if (ch != 5) {
                goto label_0;
            }
            fp_tmp_3 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_3;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        fp_stack[0] = abs(fp_stack[0]);
        goto label_1;
label_0:
        if ((al & 1) == 0) {
            fp_tmp_4 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_4;
        }
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f6cb */
#include <stdint.h>
 
int32_t dbg_fdim (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double x;
    /* double fdim(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 0x10));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = abs(fp_stack[0]);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb37 */
#include <stdint.h>
 
void dbg_rintl (void) {
    long double x;
    /* long double rintl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = round(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050047 */
#include <stdint.h>
 
int32_t dbg_pow10l (int32_t sw) {
    int32_t var_4h;
    long double y;
    ebx = sw;
    /* long double pow10l(long double y); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        *(fp_stack--) = fp_stack[?];
    } else {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = log_2(10);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        frac ();
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f2ca */
#include <stdint.h>
 
void dbg_sqrtl (void) {
    long double x;
    /* long double sqrtl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = sqrt(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fb14 */
#include <stdint.h>
 
void dbg_rintf (void) {
    float x;
    /* float rintf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = round(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ee70 */
#include <stdint.h>
 
int32_t dbg_exp (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = sw;
    /* double exp(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
        } else {
            *(fp_stack--) = *((ebp - 0x10));
        }
    } else {
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = log_2(e);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[2] = fp_stack[0];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f83b */
#include <stdint.h>
 
void dbg_fmaxl (void) {
    long double x;
    long double y;
    /* long double fmaxl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    ah &= 0x45;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    if (ah != 1) {
        __asm ("fucom st(1)");
        ax = fp_status;
        __asm ("sahf");
        if (ah >= 1) {
            goto label_0;
        }
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
    }
label_0:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80503ff */
#include <stdint.h>
 
void dbg_atanhf (void) {
    float retval;
    float x;
    /* float atanhf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] -= *((ebp + 8));
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    *(fp_stack--) = *(0x805268c);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f2a7 */
#include <stdint.h>
 
void dbg_sqrtf (void) {
    float x;
    /* float sqrtf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = sqrt(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805045f */
#include <stdint.h>
 
void dbg_atanhl (void) {
    long double retval;
    long double x;
    /* long double atanhl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 1.0;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80490d0 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f35d */
#include <stdint.h>
 
int32_t dbg_ceill (void) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t new_cw;
    uint32_t cw;
    long double val;
    /* long double ceill(long double val); */
    __asm ("wait");
    eax = *((ebp - 4));
    eax &= 0xf3ff;
    ah |= 8;
    *((ebp - 8)) = eax;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f307 */
#include <stdint.h>
 
int32_t dbg_ceilf (void) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t new_cw;
    uint32_t cw;
    float val;
    /* float ceilf(float val); */
    __asm ("wait");
    eax = *((ebp - 4));
    eax &= 0xf3ff;
    ah |= 8;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa0c */
#include <stdint.h>
 
int32_t dbg_llrintl (void) {
    int32_t var_8h;
    int32_t var_4h;
    long long int ret;
    long double x;
    /* long long int llrintl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    __asm ("wait");
    eax = *((ebp - 8));
    edx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050c02 */
#include <stdint.h>
 
void dbg_expm1l (void) {
    long double x;
    /* long double expm1l(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    ch = 0x45;
    ch &= ah;
    if (ch != 0x40) {
        if (ch != 5) {
            *(fp_stack--) = log_2(e);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[1] -= fp_stack[0];
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            __asm ("fscale");
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *(fp_stack--) = 1.0;
            __asm ("fscale");
            *(fp_stack--) = 1.0;
            fp_stack[1] -= fp_stack[0];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
        } else {
            if ((ah & 2) == 0) {
                goto label_0;
            }
            __asm ("ffreep st(0)");
            *(fp_stack--) = 1.0;
            fp_stack[0] = -fp_stack[0];
        }
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fc91 */
#include <stdint.h>
 
int32_t dbg_trunc (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    int32_t var_8h;
    int32_t var_4h;
    int32_t i2;
    int32_t i1;
    /* double trunc(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    __asm ("wait");
    eax = *((ebp - 4));
    ah |= 0xc;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f5b1 */
#include <stdint.h>
 
int32_t dbg_tan (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double tan(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = tan(fp_stack[0]);
    *(fp_stack--) = 1.0;
label_0:
    __asm ("ffreep st(0)");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f783 */
#include <stdint.h>
 
void dbg_fmaf (void) {
    float x;
    float y;
    float z;
    /* float fmaf(float x,float y,float z); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] *= *((ebp + 0xc));
    fp_stack[0] += *((ebp + 0x10));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f238 */
#include <stdint.h>
 
void dbg_remainderl (void) {
    long double x;
    long double y;
    /* long double remainderl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050b67 */
#include <stdint.h>
 
void dbg_expm1f (void) {
    float x;
    /* float expm1f(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    ch = 0x45;
    ch &= ah;
    if (ch != 0x40) {
        if (ch != 5) {
            *(fp_stack--) = log_2(e);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[1] -= fp_stack[0];
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            __asm ("fscale");
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *(fp_stack--) = 1.0;
            __asm ("fscale");
            *(fp_stack--) = 1.0;
            fp_stack[1] -= fp_stack[0];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
        } else {
            if ((ah & 2) == 0) {
                goto label_0;
            }
            __asm ("ffreep st(0)");
            *(fp_stack--) = 1.0;
            fp_stack[0] = -fp_stack[0];
        }
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f1f3 */
#include <stdint.h>
 
void dbg_remainderf (void) {
    float x;
    float y;
    /* float remainderf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80491a6 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_60h;
    int32_t var_5ch;
    long long var_58h;
    long long var_54h;
    long long var_50h;
    long long var_4ch;
    long long var_48h;
    long long var_44h;
    long long var_40h;
    long long var_3ch;
    int32_t itmp;
    MATHTYPE ytmp;
    MATHTYPE xtmp;
    /* int main(); */
    ecx = esp + 4;
    puts ("*** It's test for new mathlib *** !!!\n");
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80521f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80521f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80521f8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052200);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052208);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052208);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    acosh ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = acosh ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = acosh ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052220);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052220);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052228);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052230);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052238);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052238);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    asinh ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = asinh ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = asinh ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052240);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052240);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052248);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052248);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052250);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052250);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052260));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052258);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x8052268);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052260));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052270);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x8052268);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052280));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052258);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x8052288);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x80521f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052290));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052270);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x8052298);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x80522a0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80522a8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80522a8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x80522b0));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x80522a8);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x80522b8);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052220);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x80522c0));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052270);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x80522c8);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x80522d0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x80522d8));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x80522e0);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052240);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x80522e8));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x80522f0);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x80522f8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052300));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x8052308);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052310);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    atan2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = atan2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052318));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = atan2 ();
        *(fp_stack--) = *(0x8052320);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052328);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052330);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052338);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052340);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052340);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052348);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052350);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052358);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052358);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    cbrt ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cbrt ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = cbrt ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    cbrt ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cbrt ();
    fp_status = fp_compare(fp_stack[0], *(0x8052278));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = cbrt ();
        *(fp_stack--) = *(0x8052360);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    cbrt ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cbrt ();
    *(fp_stack--) = *((ebp - 0x60));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    if ((ah & 4) != 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s (NAN version)\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052370);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052370);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052270);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    printf ("%s - %s (NAN version)\n");
    printf ("%s - %s (NAN version)\n");
    printf ("%s - %s (NAN version)\n");
    printf ("%s - %s (NAN version)\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052378);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052380);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052388);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052390);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052390);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cosh ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax != 0) {
            ebx = 0xffffffff;
        } else {
            ebx = 1;
        }
    } else {
        fp_stack++;
        ebx = 0;
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cosh ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax == 0) {
            eax = 0x8052037;
        } else {
            fp_stack++;
        }
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cosh ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax != 0) {
            ebx = 0xffffffff;
        } else {
            ebx = 1;
        }
    } else {
        fp_stack++;
        ebx = 0;
    }
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = cosh ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax == 0) {
            eax = 0x8052037;
        } else {
            fp_stack++;
        }
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052398);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052398);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523a0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523a0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax != 0) {
            ebx = 0xffffffff;
        } else {
            ebx = 1;
        }
    } else {
        fp_stack++;
        ebx = 0;
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax == 0) {
            eax = 0x8052037;
        } else {
            fp_stack++;
        }
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    exp ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp ();
    fp_status = fp_compare(fp_stack[0], *(0x8052260));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = exp ();
        *(fp_stack--) = *(0x8052268);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523a8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523a8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523b0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523b8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp10 ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax != 0) {
            ebx = 0xffffffff;
        } else {
            ebx = 1;
        }
    } else {
        fp_stack++;
        ebx = 0;
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp10 ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_7 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax == 0) {
            eax = 0x8052037;
        } else {
            fp_stack++;
        }
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    exp10 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp10 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052260));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = exp10 ();
        *(fp_stack--) = *(0x8052268);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523c0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523c0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523c8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523c8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp2 ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax != 0) {
            ebx = 0xffffffff;
        } else {
            ebx = 1;
        }
    } else {
        fp_stack++;
        ebx = 0;
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp2 ();
    *(fp_stack--) = *(0x8052218);
    fp_tmp_9 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    __asm ("fucom st(1)");
    ax = fp_status;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    al = ((ah & 0x45) != 0) ? 1 : 0;
    eax ^= 1;
    if (al != 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        eax &= 0x200;
        if (eax == 0) {
            eax = 0x8052037;
        } else {
            fp_stack++;
        }
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    exp2 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = exp2 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052260));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = exp2 ();
        *(fp_stack--) = *(0x8052268);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    expm1 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = expm1 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = expm1 ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    expm1 ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = expm1 ();
    fp_status = fp_compare(fp_stack[0], *(0x80523d0));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = expm1 ();
        *(fp_stack--) = *(0x80523d8);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523e0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523e8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80523f8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80523f8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052400);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052400);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052258);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052410);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052410);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = *(0x8052418);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052418);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmax ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmax ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052408);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmax ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmax ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmax ();
    fp_status = fp_compare(fp_stack[0], *(0x8052260));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmax ();
        *(fp_stack--) = *(0x8052268);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    *(fp_stack--) = *(0x8052408);
    fp_status = fp_compare(fp_stack[0], *(0x8052420));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052408);
        *(fp_stack--) = *(0x8052428);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052430);
    *(fp_stack--) = *(0x8052430);
    fp_status = fp_compare(fp_stack[0], *(0x8052438));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052430);
        *(fp_stack--) = *(0x8052440);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052430);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    *(fp_stack--) = *(0x8052210);
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    *(fp_stack--) = *(0x8052278);
    fp_status = fp_compare(fp_stack[0], *(0x8052278));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        *(fp_stack--) = *(0x8052360);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052430);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052430);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmin ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmin ();
    fp_status = fp_compare(fp_stack[0], *(0x8052420));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052408);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmin ();
        *(fp_stack--) = *(0x8052428);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmin ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmin ();
    fp_status = fp_compare(fp_stack[0], *(0x8052278));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmin ();
        *(fp_stack--) = *(0x8052360);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052408);
    *(fp_stack--) = *(0x8052408);
    fp_status = fp_compare(fp_stack[0], *(0x8052420));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052408);
        *(fp_stack--) = *(0x8052428);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052408);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052430);
    *(fp_stack--) = *(0x8052430);
    fp_status = fp_compare(fp_stack[0], *(0x8052438));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052430);
        *(fp_stack--) = *(0x8052440);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052430);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    *(fp_stack--) = *(0x8052210);
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    *(fp_stack--) = *(0x8052278);
    fp_status = fp_compare(fp_stack[0], *(0x8052278));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        *(fp_stack--) = *(0x8052360);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = *(0x8052448);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmod ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052448);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmod ();
    fp_status = fp_compare(fp_stack[0], *(0x8052458));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052448);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052450);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmod ();
        *(fp_stack--) = *(0x8052460);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052468);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052448);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmod ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052448);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmod ();
    fp_status = fp_compare(fp_stack[0], *(0x8052478));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052448);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052470);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmod ();
        *(fp_stack--) = *(0x8052480);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052488);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052490);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmod ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052490);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmod ();
    fp_status = fp_compare(fp_stack[0], *(0x8052458));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052490);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052450);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmod ();
        *(fp_stack--) = *(0x8052460);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052468);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052490);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmod ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052490);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmod ();
    fp_status = fp_compare(fp_stack[0], *(0x8052478));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052490);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052470);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmod ();
        *(fp_stack--) = *(0x8052480);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052488);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmod ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmod ();
    fp_status = fp_compare(fp_stack[0], *(0x8052498));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052450);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmod ();
        *(fp_stack--) = *(0x80524a0);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052450);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    fmod ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = fmod ();
    fp_status = fp_compare(fp_stack[0], *(0x80524a8));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052470);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = fmod ();
        *(fp_stack--) = *(0x80524b0);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052470);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *((ebp - 0x2c)) = 5;
    *((ebp - 0x2c)) = 5;
    *((ebp - 0x2c)) = 5;
    eax = 0x8052037;
    *(fp_stack--) = *(str.p_nW);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(str.p_nW);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x2c));
    if (eax == 5) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x2c)) = 0;
    eax = 0x8052037;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x2c));
    if (eax == 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *((ebp - 0x2c)) = 4;
    *((ebp - 0x2c)) = 4;
    *((ebp - 0x2c)) = 4;
    eax = 0x8052037;
    *(fp_stack--) = *(0x80524c0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80524c0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    edx = *((ebp - 0x2c));
    eax = *((ebp - 0x2c));
    if (eax == 4) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %i should be: %i\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = *(0x8052418);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052418);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80524c8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80524d0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    hypot ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = hypot ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052368);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = hypot ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    hypot ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = hypot ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052368);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(0x8052278);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = hypot ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052368);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = hypot ();
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 4) != 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s (NAN version)\n");
    putchar (0xa);
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    putchar (0xa);
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    putchar (0xa);
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    putchar (0xa);
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    printf ("%s - %s computed: %i should be: %i\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80524d8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80524d8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x80524e0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x80524e0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    *(fp_stack--) = *(0x8052210);
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052278);
    *(fp_stack--) = *(0x8052278);
    fp_status = fp_compare(fp_stack[0], *(0x8052278));
    fp_stack++;
    ax = fp_status;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *(0x8052278);
        *(fp_stack--) = *(0x8052360);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) == 0) {
            eax = 0x8052037;
        }
    } else {
        eax = "fail";
    }
    *(fp_stack--) = *(0x8052278);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052368);
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    if ((ah & 4) != 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s (NAN version)\n");
    putchar (0xa);
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    esi = eax;
    edi = edx;
    *(fp_stack--) = 0.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    ecx = eax;
    ch ^= 0;
    *((ebp - 0x40)) = ecx;
    eax = edx;
    ah ^= 0;
    *((ebp - 0x3c)) = eax;
    ecx = *((ebp - 0x40));
    ebx = *((ebp - 0x3c));
    eax = *((ebp - 0x3c));
    eax |= ecx;
    if (eax == 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %lli should be: %lli\n");
    *(fp_stack--) = *(0x80524e8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    esi = eax;
    edi = edx;
    *(fp_stack--) = *(0x80524e8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    ecx = eax;
    ch ^= 0;
    *((ebp - 0x48)) = ecx;
    eax = edx;
    ah ^= 0;
    *((ebp - 0x44)) = eax;
    ecx = *((ebp - 0x48));
    ebx = *((ebp - 0x44));
    eax = *((ebp - 0x44));
    eax |= ecx;
    if (eax == 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %lli should be: %lli\n");
    *(fp_stack--) = *(0x80524f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    esi = eax;
    edi = edx;
    *(fp_stack--) = *(0x80524f0);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    ecx = eax;
    ecx ^= 0xffffffff;
    *((ebp - 0x50)) = ecx;
    eax = edx;
    eax ^= 0xffffffff;
    *((ebp - 0x4c)) = eax;
    edx = *((ebp - 0x50));
    ecx = *((ebp - 0x4c));
    eax = *((ebp - 0x4c));
    eax |= edx;
    if (eax == 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %lli should be: %lli\n");
    *(fp_stack--) = *(0x80524f8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    esi = eax;
    edi = edx;
    *(fp_stack--) = *(0x80524f8);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = llrint ();
    ecx = eax;
    ch ^= 0;
    *((ebp - 0x58)) = ecx;
    eax = edx;
    eax ^= 0x1000000;
    *((ebp - 0x54)) = eax;
    edx = *((ebp - 0x58));
    ecx = *((ebp - 0x54));
    eax = *((ebp - 0x54));
    eax |= edx;
    if (eax == 0) {
        eax = 0x8052037;
    } else {
        eax = "fail";
    }
    printf ("%s - %s computed: %lli should be: %lli\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052500);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052500);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052508);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052508);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    log ();
    *((ebp - 0x40)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = log ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *(0x8052210);
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = log ();
        *(fp_stack--) = *(0x8052210);
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 5) != 0) {
            goto label_0;
        }
    }
label_0:
    eax = "fail";
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    putchar (0xa);
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 1.0;
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052510);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052510);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052370);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052370);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    printf ("%s - %s computed: %10.15e should be: %10.15e\n");
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    log10 ();
    *((ebp - 0x40)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8052210);
    esp = esp - 8;
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = log10 ();
    fp_status = fp_compare(fp_stack[0], *(0x8052218));
    fp_stack++;
    ax = fp_status;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x804c95d)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fbe3 */
#include <stdint.h>
 
void dbg_significandl (void) {
    long double ret;
    long double x;
    /* long double significandl(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxtract");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805010b */
#include <stdint.h>
 
int32_t dbg_cbrt (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = sw;
    /* double cbrt(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = *((ebp - 0x10));
        edx = *((ebp - 0xc));
    } else {
        *(fp_stack--) = *((ebp - 0x10));
        ax = fp_status;
        fp_stack++;
        if ((ah & 5) == 0) {
            *(fp_stack--) = *(0x8052670);
            esp = esp - 8;
            *(esp) = fp_stack[0];
            fp_stack--;
            pow (*((ebp - 0x10)), *((ebp - 0xc)));
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x18));
            edx = *((ebp - 0x14));
        } else {
            *(fp_stack--) = *((ebp - 0x10));
            fp_stack[0] = -fp_stack[0];
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x18));
            edx = *((ebp - 0x14));
            *(fp_stack--) = *(0x8052670);
            esp = esp - 8;
            *(esp) = fp_stack[0];
            fp_stack--;
            pow (eax, edx);
            fp_stack[0] = -fp_stack[0];
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x18));
            edx = *((ebp - 0x14));
        }
    }
    *((ebp - 0x18)) = eax;
    *((ebp - 0x14)) = edx;
    *(fp_stack--) = *((ebp - 0x18));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050b19 */
#include <stdint.h>
 
int32_t dbg_nearbyint (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double x;
    int32_t var_8h;
    int32_t var_4h;
    int32_t org_sw;
    int32_t new_sw;
    /* double nearbyint(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 8));
    eax &= 0xffffffdf;
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fbad */
#include <stdint.h>
 
void dbg_significandf (void) {
    float ret;
    float x;
    /* float significandf(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxtract");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f4b9 */
#include <stdint.h>
 
int32_t dbg_cos (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double cos(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] = cos(fp_stack[0]);
    ax = fp_status;
    if ((ah & 4) == 0) {
        goto label_0;
    }
    *(fp_stack--) = pi;
    fp_stack[0] += fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        fp_stack[0] %= fp_stack[1];
        ax = fp_status;
    } while ((ah & 4) != 0);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    fp_stack[0] = cos(fp_stack[0]);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f7c6 */
#include <stdint.h>
 
void dbg_fmal (void) {
    long double x;
    long double y;
    long double z;
    /* long double fmal(long double x,long double y,long double z); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e71a */
#include <stdint.h>
 
int32_t dbg_isfinitef (int32_t sw) {
    int32_t var_4h;
    float x;
    ebx = sw;
    /* int isfinitef(float x); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = ebx;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_0;
        }
    }
    eax = 1;
    goto label_1;
label_0:
    eax = 0;
label_1:
    ebx = 0;
    eax = 0;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f791 */
#include <stdint.h>
 
int32_t dbg_fma (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_18h;
    int32_t var_14h;
    double z;
    int32_t var_ch;
    double y;
    int32_t var_4h;
    double x;
    /* double fma(double x,double y,double z); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x1c));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 0x10));
    fp_stack[0] += *((ebp - 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f7fc */
#include <stdint.h>
 
int32_t dbg_fmax (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_10h;
    int32_t var_ch;
    arithmetic var_8h;
    int32_t var_4h;
    double x;
    /* double fmax(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    ah &= 0x45;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    if (ah != 1) {
        __asm ("fucom st(1)");
        ax = fp_status;
        __asm ("sahf");
        if (ah >= 1) {
            goto label_0;
        }
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
    }
label_0:
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804e7a9 */
#include <stdint.h>
 
int32_t dbg_isfinitel (int32_t sw) {
    int32_t var_4h;
    long double x;
    ebx = sw;
    /* int isfinitel(long double x); */
    *(fp_stack--) = fp_stack[?];
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = ebx;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_0;
        }
    }
    eax = 1;
    goto label_1;
label_0:
    eax = 0;
label_1:
    ebx = 0;
    eax = 0;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80502e4 */
#include <stdint.h>
 
void dbg_asinhf (void) {
    float retval;
    float x;
    /* float asinhf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp + 8));
    ax = fp_status;
    fp_stack++;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] += *((ebp - 4));
        *(fp_stack--) = log_e(2);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        *((ebp - 4)) = fp_stack[0];
        fp_stack--;
    } else {
        *(fp_stack--) = *((ebp - 4));
        fp_stack[0] -= *((ebp + 8));
        *(fp_stack--) = log_e(2);
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        *((ebp - 4)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 4));
        fp_stack[0] = -fp_stack[0];
        *((ebp - 4)) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805039a */
#include <stdint.h>
 
int32_t dbg_asinhl (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    long double retval;
    long double x;
    /* long double asinhl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
    ax = fp_status;
    fp_stack++;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = log_e(2);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        ? = fp_stack[0];
        fp_stack--;
    } else {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = log_e(2);
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        ? = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] = -fp_stack[0];
        ? = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x1c));
        edx = *((ebp - 0x18));
        ecx = *((ebp - 0x14));
        *((ebp - 0xc)) = eax;
        *((ebp - 8)) = edx;
        *((ebp - 4)) = ecx;
    }
    *(fp_stack--) = fp_stack[?];
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f18f */
#include <stdint.h>
 
int32_t dbg_log (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double log(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x805025e */
#include <stdint.h>
 
void dbg_acoshf (void) {
    float retval;
    float x;
    /* float acoshf(float x); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] += *((ebp - 4));
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80502ba */
#include <stdint.h>
 
void dbg_acoshl (void) {
    long double retval;
    long double x;
    /* long double acoshl(long double x); */
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[?];
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ecba */
#include <stdint.h>
 
int32_t dbg_islessgreaterl (int32_t retval) {
    int32_t var_4h;
    long double x;
    long double y;
    ebx = retval;
    /* int islessgreaterl(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x44) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fe12 */
#include <stdint.h>
 
int32_t dbg_pow (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t sw) {
    int32_t var_28h;
    int32_t var_24h;
    double y;
    int32_t var_1ch;
    double x;
    int32_t var_ch;
    int32_t yint;
    ebx = sw;
    /* double pow(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x24)) = eax;
    *(fp_stack--) = *((ebp - 0x20));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x500) {
        *(fp_stack--) = 1.0;
        *(fp_stack--) = *((ebp - 0x20));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        ah ^= 0x40;
        if (ah != 0) {
            goto label_0;
        }
    }
    *(fp_stack--) = *((ebp - 0x20));
    goto label_1;
label_0:
    *(fp_stack--) = *(0x8052658);
    *(fp_stack--) = *((ebp - 0x20));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ah &= 0x45;
    ah ^= 0x40;
    if (ah == 0) {
        *(fp_stack--) = *((ebp - 0x28));
        *(fp_stack--) = log_2(10);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ax = frac ();
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        goto label_1;
    }
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = *((ebp - 0x20));
    ax = fp_status;
    __asm ("sahf");
    if (fp_stack[0] > 0.0) {
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        ax = Lpow2 ();
        goto label_1;
    }
    if (fp_stack[0] < 0.0) {
        goto label_2;
    }
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (fp_stack[0] > 0.0) {
        goto label_3;
    }
    if (fp_stack[0] < 0.0) {
        goto label_4;
    }
    fp_stack++;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    do {
label_4:
        fp_stack[0] = sqrt(fp_stack[0]);
        goto label_1;
label_3:
        fp_stack++;
        *(fp_stack--) = 0.0;
        goto label_1;
label_2:
        fp_stack[0] = abs(fp_stack[0]);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        ax = frac ();
        ax = fp_status;
        fp_stack++;
        __asm ("sahf");
        if (fp_stack[0] == 0.0) {
            goto label_5;
        }
        fp_stack++;
        fp_stack[0] = -fp_stack[0];
    } while (1);
label_5:
    *((ebp - 0xc)) = fp_stack[0];
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    Lpow2 ();
    *((ebp - 0xc)) &= 1;
    if (*((ebp - 0xc)) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
label_1:
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ec65 */
#include <stdint.h>
 
int32_t dbg_islessgreaterf (int32_t retval) {
    int32_t var_4h;
    float x;
    float y;
    ebx = retval;
    /* int islessgreaterf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x44) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f1ba */
#include <stdint.h>
 
void dbg_log10f (void) {
    float x;
    /* float log10f(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = log_10(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050bad */
#include <stdint.h>
 
int32_t dbg_expm1 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double expm1(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    __asm ("fxam");
    __asm ("wait");
    ax = fp_status;
    ch = 0x45;
    ch &= ah;
    if (ch != 0x40) {
        if (ch != 5) {
            *(fp_stack--) = log_2(e);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[1] -= fp_stack[0];
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            __asm ("fscale");
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *(fp_stack--) = 1.0;
            __asm ("fscale");
            *(fp_stack--) = 1.0;
            fp_stack[1] -= fp_stack[0];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack--;
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
        } else {
            if ((ah & 2) == 0) {
                goto label_0;
            }
            __asm ("ffreep st(0)");
            *(fp_stack--) = 1.0;
            fp_stack[0] = -fp_stack[0];
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f1c8 */
#include <stdint.h>
 
int32_t dbg_log10 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double log10(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = log_10(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ec82 */
#include <stdint.h>
 
int32_t dbg_islessgreater (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t retval) {
    int32_t var_18h;
    int32_t var_14h;
    arithmetic var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = retval;
    /* int islessgreater(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x44) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f2b1 */
#include <stdint.h>
 
int32_t dbg_sqrt (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double sqrt(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] = sqrt(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eaba */
#include <stdint.h>
 
int32_t dbg_isgreater (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t retval) {
    int32_t var_18h;
    int32_t var_14h;
    arithmetic var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = retval;
    /* int isgreater(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x45) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050333 */
#include <stdint.h>
 
int32_t dbg_asinh (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    double x;
    int32_t var_8h;
    int32_t var_4h;
    double retval;
    /* double asinh(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x18));
    ax = fp_status;
    fp_stack++;
    if ((ah & 0x45) == 0) {
        *(fp_stack--) = *((ebp - 0x18));
        fp_stack[0] += *((ebp - 8));
        *(fp_stack--) = log_e(2);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
    } else {
        *(fp_stack--) = *((ebp - 8));
        fp_stack[0] -= *((ebp - 0x18));
        *(fp_stack--) = log_e(2);
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 8));
        fp_stack[0] = -fp_stack[0];
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x20));
        edx = *((ebp - 0x1c));
        *((ebp - 8)) = eax;
        *((ebp - 4)) = edx;
    }
    *(fp_stack--) = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fbf8 */
#include <stdint.h>
 
int32_t dbg_sincosf (int32_t arg_ch) {
    int32_t var_4h;
    float x;
    float * sinptr;
    float * cosptr;
    /* void sincosf(float x,float * sinptr,float * cosptr); */
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = sin(fp_stack[0]);
    *(fp_stack--) = cos(fp_stack[0]);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 4));
    eax = *((ebp + 0x10));
    *(eax) = edx;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 4));
    eax = *((ebp + 0xc));
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804edcb */
#include <stdint.h>
 
void dbg_asinl (void) {
    long double x;
    /* long double asinl(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fcbd */
#include <stdint.h>
 
int32_t dbg_truncl (void) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t i2;
    int32_t i1;
    long double x;
    /* long double truncl(long double x); */
    __asm ("wait");
    eax = *((ebp - 4));
    ah |= 0xc;
    *((ebp - 8)) = eax;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ed94 */
#include <stdint.h>
 
void dbg_asinf (void) {
    float x;
    /* float asinf(float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[0];
    *(fp_stack--) = 1.0;
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    fp_stack[0] = sqrt(fp_stack[0]);
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eb9e */
#include <stdint.h>
 
int32_t dbg_isless (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t retval) {
    int32_t var_18h;
    int32_t var_14h;
    arithmetic var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = retval;
    /* int isless(double x,double y); */
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
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x45) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f1e5 */
#include <stdint.h>
 
void dbg_log10l (void) {
    long double x;
    /* long double log10l(long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = log_10(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fc71 */
#include <stdint.h>
 
int32_t dbg_truncf (void) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t i2;
    int32_t i1;
    float x;
    /* float truncf(float x); */
    __asm ("wait");
    eax = *((ebp - 4));
    ah |= 0xc;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f75e */
#include <stdint.h>
 
int32_t dbg_floorl (void) {
    int32_t var_8h;
    int32_t var_4h;
    uint32_t new_cw;
    uint32_t cw;
    long double val;
    /* long double floorl(long double val); */
    __asm ("wait");
    eax = *((ebp - 4));
    eax &= 0xf3ff;
    ah |= 4;
    *((ebp - 8)) = eax;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ee14 */
#include <stdint.h>
 
void dbg_atan2l (void) {
    long double y;
    long double x;
    /* long double atan2l(long double y,long double x); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eddf */
#include <stdint.h>
 
void dbg_atan2f (void) {
    float y;
    float x;
    /* float atan2f(float y,float x); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    fp_stack[1] = arctan(fp_stack[1]/fp_stack[0]);
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ec48 */
#include <stdint.h>
 
int32_t dbg_islessequall (int32_t retval) {
    int32_t var_4h;
    long double x;
    long double y;
    ebx = retval;
    /* int islessequall(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 5) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ecf2 */
#include <stdint.h>
 
int32_t dbg_isunordered (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t retval) {
    int32_t var_18h;
    int32_t var_14h;
    arithmetic var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = retval;
    /* int isunordered(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    __asm ("setp al");
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ef6e */
#include <stdint.h>
 
int32_t dbg_exp10 (int32_t arg_8h, int32_t arg_ch, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = sw;
    /* double exp10(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax == 0x500) {
        eax = ebx;
        eax &= 0x200;
        if (eax != 0) {
            *(fp_stack--) = 0.0;
        } else {
            *(fp_stack--) = *((ebp - 0x10));
        }
    } else {
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = log_2(10);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = round(fp_stack[0]);
        fp_stack[2] = fp_stack[0];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        __asm ("fscale");
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804fa33 */
#include <stdint.h>
 
int32_t dbg_log1p (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_8h;
    int32_t var_4h;
    double x;
    /* double log1p(double x); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = log_e(2);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_stack[1] = fp_stack[1] * log_2(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ea9d */
#include <stdint.h>
 
int32_t dbg_isgreaterf (int32_t retval) {
    int32_t var_4h;
    float x;
    float y;
    ebx = retval;
    /* int isgreaterf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 0x45) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804ebf3 */
#include <stdint.h>
 
int32_t dbg_islessequalf (int32_t retval) {
    int32_t var_4h;
    float x;
    float y;
    ebx = retval;
    /* int islessequalf(float x,float y); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 5) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x80505f5 */
#include <stdint.h>
 
int32_t dbg_sinhf (int32_t sw) {
    float eneg;
    float epos;
    float x;
    ebx = sw;
    /* float sinhf(float x); */
    *(fp_stack--) = *((ebp + 8));
    ax = fp_status;
    fp_stack++;
    if ((ah & 5) == 0) {
        *(fp_stack--) = *((ebp + 8));
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        ebx = eax;
        eax &= 0x4500;
        if (eax == 0x500) {
            eax = ebx;
            eax &= 0x200;
            if (eax != 0) {
                *(fp_stack--) = 0.0;
                *((ebp - 0xc)) = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = *((ebp + 8));
            }
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = *((ebp + 8));
            *(fp_stack--) = log_2(e);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = *((ebp - 0xc));
        *(fp_stack--) = *((ebp - 0xc));
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8052690);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0x1c)) = fp_stack[0];
        fp_stack--;
    } else {
        *(fp_stack--) = *((ebp + 8));
        fp_stack[0] = -fp_stack[0];
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        ebx = eax;
        eax &= 0x4500;
        if (eax == 0x500) {
            eax = ebx;
            eax &= 0x200;
            if (eax != 0) {
                *(fp_stack--) = 0.0;
                *((ebp - 0x10)) = fp_stack[0];
                fp_stack--;
            } else {
                *(fp_stack--) = *((ebp + 8));
            }
            fp_stack[0] = -fp_stack[0];
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = *((ebp + 8));
            fp_stack[0] = -fp_stack[0];
            *(fp_stack--) = log_2(e);
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = round(fp_stack[0]);
            fp_stack[2] = fp_stack[0];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            __asm ("fscale");
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x10));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8052690);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0x1c)) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *((ebp - 0x1c));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [12] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0xcff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f24d */
#include <stdint.h>
 
void dbg_dremf (void) {
    float x;
    float y;
    /* float dremf(float x,float y); */
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 8));
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f72d */
#include <stdint.h>
 
int32_t dbg_floor (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    double val;
    int32_t var_8h;
    int32_t var_4h;
    uint32_t new_cw;
    uint32_t cw;
    /* double floor(double val); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    __asm ("wait");
    eax = *((ebp - 4));
    eax &= 0xf3ff;
    ah |= 4;
    *((ebp - 8)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    fp_stack[0] = round(fp_stack[0]);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8050c48 */
#include <stdint.h>
 
int32_t dbg_scalbf (int32_t nx, int32_t sw) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_ah;
    int32_t var_8h;
    float x;
    float n;
    ebx = nx;
    esi = sw;
    /* float scalbf(float x,float n); */
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    ebx = (int32_t) al;
    *(fp_stack--) = *((ebp + 0xc));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    al = (eax == 0x100) ? 1 : 0;
    esi = (int32_t) al;
    if (ebx == 0) {
        if (esi == 0) {
            goto label_0;
        }
    }
    *(fp_stack--) = *((ebp + 8));
    fp_stack[0] *= *((ebp + 0xc));
    goto label_1;
label_0:
    *(fp_stack--) = *((ebp + 8));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    ebx = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = ebx;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_2;
        }
    }
    eax = 1;
    goto label_3;
label_2:
    eax = 0;
label_3:
    ebx = 0;
    *(fp_stack--) = *((ebp + 0xc));
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    esi = eax;
    eax &= 0x4500;
    if (eax != 0x400) {
        eax = esi;
        eax &= 0x4500;
        if (eax != 0x4000) {
            goto label_4;
        }
    }
    eax = 1;
    goto label_5;
label_4:
    eax = 0;
label_5:
    esi = 0;
    if (esi == 0) {
        *(fp_stack--) = *((ebp + 0xc));
        ax = fp_status;
        fp_stack++;
        if ((ah & 0x45) == 0) {
            *(fp_stack--) = *((ebp + 8));
            fp_stack[0] *= *((ebp + 0xc));
        } else {
            *(fp_stack--) = 0.0;
        }
        *(fp_stack--) = *((ebp + 8));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        ah ^= 0x40;
        if (ah == 0) {
            *(fp_stack--) = *((ebp + 8));
        } else {
        }
        if (ebx == 0) {
            *(fp_stack--) = 0.0;
            fp_stack[0] /= fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp + 8));
        }
        fp_stack[0] = -fp_stack[0];
        fp_stack[0] /= *((ebp + 0xc));
    } else {
        *(fp_stack--) = *((ebp + 0xc));
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = rint ();
        *(fp_stack--) = *((ebp + 0xc));
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        ah &= 0x45;
        if (ah != 0x40) {
            *(fp_stack--) = 0.0;
            fp_stack[0] /= fp_stack[0];
        } else {
            *(fp_stack--) = *((ebp + 0xc));
            fp_status = fp_compare(fp_stack[0], *(0x80526ec));
            fp_stack++;
            ax = fp_status;
            if ((ah & 0x45) == 0) {
                *(fp_stack--) = *((ebp + 8));
                esp = esp - 8;
                *(esp) = fp_stack[0];
                fp_stack--;
                ax = scalbn (0xfde8);
                *((ebp - 0x10)) = fp_stack[0];
                fp_stack--;
                *(fp_stack--) = *((ebp - 0x10));
            } else {
                *(fp_stack--) = *((ebp + 0xc));
                *(fp_stack--) = *(0x80526f0);
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                if ((ah & 0x45) == 0) {
                    *(fp_stack--) = *((ebp + 8));
                    esp = esp - 8;
                    *(esp) = fp_stack[0];
                    fp_stack--;
                    scalbn (0xffff0218);
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((ebp - 0x10));
                } else {
                    *(fp_stack--) = *((ebp + 0xc));
                    ax = *((ebp - 0xa));
                    ah |= 0xc;
                    *((ebp - 0xc)) = ax;
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                    eax = *((ebp - 0x10));
                    *(fp_stack--) = *((ebp + 8));
                    esp = esp - 8;
                    *(esp) = fp_stack[0];
                    fp_stack--;
                    scalbn (eax);
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((ebp - 0x10));
                }
            }
        }
    }
label_1:
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804f292 */
#include <stdint.h>
 
void dbg_dreml (void) {
    long double x;
    long double y;
    /* long double dreml(long double x,long double y); */
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    do {
        fp_stack[0] %= fp_stack[1];
        __asm ("wait");
        ax = fp_status;
        __asm ("sahf");
    } while (? == ?);
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x804eb2c */
#include <stdint.h>
 
int32_t dbg_isgreaterequal (arithmetic y, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t retval) {
    int32_t var_18h;
    int32_t var_14h;
    arithmetic var_10h;
    int32_t var_ch;
    double x;
    int32_t var_4h;
    ebx = retval;
    /* int isgreaterequal(double x,double y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    al = ((ah & 5) == 0) ? 1 : 0;
    ebx = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/testm/ia32_elf_static/subject.exe @ 0x8049080 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
