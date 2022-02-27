/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400800 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [13] ---x section size 930 named .text */
    ebp = 0;
    return libc_start_main (dbg.main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400790 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400830 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x6010a7;
    rax -= obj.stdout;
    while (rax == 0) {
        return rax;
        eax = 0;
    }
    edi = stdout;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400860 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    eax = stdout;
    rax -= obj.stdout;
    rax >>= 3;
    rdx = rax;
    rdx >>= 0x3f;
    rax += rdx;
    rax >>= 1;
    while (rdx == 0) {
        return rax;
        edx = 0;
    }
    rsi = rax;
    edi = stdout;
    return void (*rdx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4008a0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6992) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6992) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4008c0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
        void (*0x400860)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400ba0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400ba4 */
#include <stdint.h>
 
void fini (void) {
    /* [14] ---- section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400b10 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rsp - 0x28)) = rbp;
    *((rsp - 0x20)) = r12;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    r12 = obj___frame_dummy_init_array_entry;
    *((rsp - 0x30)) = rbx;
    *((rsp - 0x18)) = r13;
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r15;
    rbp -= r12;
    r15d = edi;
    r14 = rsi;
    rbp >>= 3;
    r13 = rdx;
    ebx = 0;
    rax = _init ();
    if (rbp == 0) {
        goto label_0;
    }
    do {
        rdx = r13;
        rsi = r14;
        edi = r15d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbx != rbp);
label_0:
    rbx = *((rsp + 8));
    rbp = *((rsp + 0x10));
    r12 = *((rsp + 0x18));
    r13 = *((rsp + 0x20));
    r14 = *((rsp + 0x28));
    r15 = *((rsp + 0x30));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4008ed */
#include <stdint.h>
 
uint64_t dbg_main (void) {
    char * whoami;
    /* int main(); */
    rax = malloc (0xdead);
    *((rbp - 8)) = rax;
    rax = *((rbp - 8));
    rdx = 0x45206e61206d2749;
    *(rax) = rdx;
    *((rax + 8)) = 0x3a20464c;
    *((rax + 0xc)) = 0x292d;
    *((rax + 0xe)) = 0;
    rax = *((rbp - 8));
    rsi = *((rbp - 8));
    eax = 0;
    printf (0x400bb8);
    puts ("...\n");
    eax = time (0);
    srand (eax);
    eax = rand ();
    eax &= 1;
    if (eax != 0) {
        puts ("And I'm happy. I live free ! :-)");
        exit (0);
    }
    help ();
    rax = stdout;
    fputc (0xa, *(obj.stdout));
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4007d0 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400750 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400720 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4007c0 */
#include <stdint.h>
 
void time (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4007a0 */
#include <stdint.h>
 
void srand (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4007f0 */
#include <stdint.h>
 
void rand (void) {
    rand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4007e0 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400996 */
#include <stdint.h>
 
int64_t dbg_help (void) {
    int64_t var_98h;
    int64_t var_90h;
    char[5] msg;
    char[20] msg2;
    int64_t var_78h;
    int64_t var_70h;
    char[36] msg1;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t canary;
    int64_t var_28h;
    /* void help(); */
    rax = *(fs:0x28);
    *((rbp - 0x38)) = rax;
    eax = 0;
    rax = rsp;
    *((rbp - 0x98)) = rax;
    rsi = 0x202c657361656c50;
    *((rbp - 0x60)) = rsi;
    rcx = 0x7420746f6e206f64;
    *((rbp - 0x58)) = rcx;
    rsi = 0x7420656d20656b61;
    *((rbp - 0x50)) = rsi;
    rdi = 0x726f6b6c654d206f;
    *((rbp - 0x48)) = rdi;
    *((rbp - 0x40)) = 0xa2120;
    rcx = 0x6f63206c6c276548;
    *((rbp - 0x80)) = rcx;
    rsi = 0x656d207470757272;
    *((rbp - 0x78)) = rsi;
    *((rbp - 0x70)) = 0xa2120;
    rax = rbp - 0x60;
    rax = strlen (rax);
    rbx = rax;
    rax = rbp - 0x80;
    rax = strlen (rax);
    rax += rbx;
    rbx = rax + 1;
    rax = rbx;
    rax--;
    *((rbp - 0x90)) = rax;
    r14 = rbx;
    r15d = 0;
    r12 = rbx;
    r13d = 0;
    eax = 0x10;
    rax--;
    rax += rbx;
    edi = 0x10;
    edx = 0;
    rax = rdx:rax / rdi;
    rdx = rdx:rax % rdi;
    rax *= 0x10;
    rax = rsp;
    rax += 0;
    *((rbp - 0x88)) = rax;
    rax = *((rbp - 0x88));
    rcx = rbp - 0x60;
    strncpy (rax, rcx, rbx - 1);
    rax = *((rbp - 0x88));
    rcx = rbp - 0x80;
    strncat (rax, rcx, rbx - 1);
    rdx = stdout;
    rax = *((rbp - 0x88));
    fputs (rax, rdx);
    rsp = *((rbp - 0x98));
    rax = *((rbp - 0x38));
    rax ^= *(fs:0x28);
    if (rax != 0) {
        stack_chk_fail ();
    }
    rsp = rbp - 0x28;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400730 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400710 */
#include <stdint.h>
 
void strncpy (void) {
    strncpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400770 */
#include <stdint.h>
 
void strncat (void) {
    strncat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400760 */
#include <stdint.h>
 
void fputs (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400740 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x400780 */
#include <stdint.h>
 
void fputc (void) {
    fputc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] ---x section size 26 named .init */
    rax = .got;
    if (rax != 0) {
        gmon_start_ ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/malformed-elf-2/x64_elf/subject.exe @ 0x4007b0 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
