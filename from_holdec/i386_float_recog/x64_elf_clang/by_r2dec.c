/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401040 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    /* [13] -r-x section size 853 named .text */
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = .annobin_elf_init.c;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401080 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = loc._end;
    if (rax != loc._end) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x4010b0 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = loc._end;
    rsi -= loc._end;
    rsi >>= 3;
    rax = rsi;
    rax >>= 0x3f;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = loc._end;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.7287) == 0) {
        deregister_tm_clones ();
        *(obj.completed.7287) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401120 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401390 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401230 */
#include <stdint.h>
 
uint32_t double_to_double (int64_t arg7) {
    xmm0 = arg7;
    __asm ("addsd xmm0, xmm0");
    al = 1;
    eax = printf ("got 2*x=%f\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401030 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x4011a0 */
#include <stdint.h>
 
int64_t double_to_unknown (char * format) {
    xmm0 = format;
    rax = xmm0;
    rdx = rax;
    rcx = rax;
    r8 = rax;
    ebx = eax;
    edi = eax;
    ebp = (int32_t) ah;
    r10d = (int32_t) al;
    rsi = rax;
    rsi >>= 0x38;
    rdx >>= 0x30;
    edx = (int32_t) dl;
    rcx >>= 0x28;
    ecx = (int32_t) cl;
    r8 >>= 0x20;
    r8d = (int32_t) r8b;
    ebx >>= 0x18;
    edi >>= 0x10;
    r11d = (int32_t) dil;
    eax = 0;
    r9d = ebx;
    eax = printf (0x402050);
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401398 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401210 */
#include <stdint.h>
 
uint32_t unknown_to_double (int64_t arg7) {
    xmm0 = arg7;
    __asm ("addsd xmm0, xmm0");
    al = 1;
    eax = printf ("got 2*x=%f\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401320 */
#include <stdint.h>
 
uint64_t loc_annobin_elf_init_c (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = rdx;
    r14 = rsi;
    r13d = edi;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r12;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r15;
        rsi = r14;
        edi = r13d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401130 */
#include <stdint.h>
 
int64_t unknown_to_unknown (char * format) {
    xmm0 = format;
    rax = xmm0;
    rdx = rax;
    rcx = rax;
    r8 = rax;
    ebx = eax;
    edi = eax;
    ebp = (int32_t) ah;
    r10d = (int32_t) al;
    rsi = rax;
    rsi >>= 0x38;
    rdx >>= 0x30;
    edx = (int32_t) dl;
    rcx >>= 0x28;
    ecx = (int32_t) cl;
    r8 >>= 0x20;
    r8d = (int32_t) r8b;
    ebx >>= 0x18;
    edi >>= 0x10;
    r11d = (int32_t) dil;
    eax = 0;
    r9d = ebx;
    eax = printf (0x402050);
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401070 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401250 */
#include <stdint.h>
 
int32_t main (int32_t argc) {
    int64_t var_10h;
    int64_t var_18h;
    rdi = argc;
    ebx = edi;
    xmm0 = *(0x00402010);
    unknown_to_unknown ();
    __asm ("cvtsi2sd xmm1, ebx");
    *((rsp + 0x10)) = xmm1;
    xmm0 = *(0x00402018);
    __asm ("addsd xmm0, xmm1");
    double_to_unknown ();
    xmm0 = *(0x00402020);
    unknown_to_double ();
    xmm0 = *(0x00402028);
    __asm ("addsd xmm0, qword [rsp + 0x10]");
    double_to_double ();
    *(fp_stack--) = *(0x00402030);
    ? = fp_stack[0];
    fp_stack--;
    xmm0 = *(0x00402038);
    esi = 0x64;
    edx = 0x65;
    ecx = 0x66;
    al = 1;
    printf ("unknown: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    xmm0 = *(0x00402040);
    xmm1 = *((rsp + 0x10));
    __asm ("addsd xmm0, xmm1");
    __asm ("addsd xmm1, qword [0x00402048]");
    *((rsp + 0x18)) = xmm1;
    *(fp_stack--) = *((rsp + 0x18));
    ? = fp_stack[0];
    fp_stack--;
    esi = 0xc8;
    edx = 0xc9;
    ecx = 0xca;
    al = 1;
    eax = printf ("double: int-a=%d double=%f int-b=%d long double=%Lf int-c=%d\n");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/i386_float_recog/x64_elf_clang/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
