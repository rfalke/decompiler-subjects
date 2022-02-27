/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [14] -r-x section size 1128 named .text */
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400570 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x4005fc */
#include <stdint.h>
 
int64_t call_gmon_start (void) {
    rax = .got;
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400620 */
#include <stdint.h>
 
int64_t do_global_dtors_aux (void) {
    if (*(obj.completed.6341) != 0) {
        goto label_0;
    }
    ebx = obj.__DTOR_END__;
    rax = *(obj.dtor_idx.6343);
    rbx -= obj.__DTOR_LIST__;
    rbx >>= 3;
    rbx--;
    if (rax >= rbx) {
        goto label_1;
    }
    do {
        rax++;
        *(obj.dtor_idx.6343) = rax;
        uint64_t (*rax*8 + obj.__DTOR_LIST__)() ();
        rax = *(obj.dtor_idx.6343);
    } while (rax < rbx);
label_1:
    *(obj.completed.6341) = 1;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400690 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400a00 */
#include <stdint.h>
 
int64_t do_global_ctors_aux (void) {
    rax = .ctors;
    if (rax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        rbx -= 8;
        void (*rax)() ();
        rax = *(rbx);
    } while (rax != -1);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400853 */
#include <stdint.h>
 
uint64_t hexdump (int64_t arg1) {
    uint32_t var_30h;
    int64_t var_90h;
    rdi = arg1;
    rbx = rdi;
    rdx = rsp;
    rsi = rdi;
    edi = 1;
    eax = xstat ();
    if (eax != 0) {
        perror (rbx);
        eax = 1;
        goto label_0;
    }
    rax = fopen (rbx, 0x400a5a);
    r13 = rax;
    if (rax != 0) {
        r12 = rsp + 0x90;
        if (*((rsp + 0x30)) != 0) {
            goto label_1;
        }
        goto label_2;
    }
    perror (rbx);
    eax = 1;
    goto label_0;
    do {
label_1:
        eax = fread (r12, 1, 0x10, r13);
        ebx = eax;
        if (eax == 0) {
            goto label_2;
        }
        edx = eax;
        rsi = rbp;
        rdi = r12;
        dumpline ();
        rbx = (int64_t) ebx;
        rbp += rbx;
    } while (*((rsp + 0x30)) > rbp);
label_2:
    fclose (r13);
    eax = 0;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400960 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400a38 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 14 named .fini */
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x4006c0 */
#include <stdint.h>
 
int64_t dumpline (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = rdi;
    ebx = edx;
    eax = 0;
    sprintf (rsp, "%08lX:", rsi);
    r12d = 0x10;
    if (ebx <= 0x10) {
        r12d = ebx;
    }
    edx = 1;
    if (r12d <= 0) {
        goto label_2;
    }
    r14 = r15;
    rbx = r15;
    r13 = rsp;
    do {
        edx = *(rbx);
        rax = (int64_t) ebp;
        eax = 0;
        sprintf (r13 + rax + 9, " %02lX", rdx);
        rbx++;
        ebp += 3;
        eax = ebx;
        eax -= r14d;
    } while (r12d > eax);
    if (r12d > 0xf) {
        goto label_3;
    }
    edx = r12 + 1;
label_2:
    rbx = rsp;
    rsi = rsp;
    eax = 0;
    do {
        rcx = rbp;
        rdi = rsi;
        __asm ("repne scasb al, byte [rdi]");
        rcx = ~rcx;
        *((rbx + rcx - 1)) = 0x202020;
        edx++;
        ecx = rdx - 1;
    } while (ecx <= 0xf);
    rdi = rsp;
    eax = 0;
    rcx = 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rbx = rcx - 1;
    rax = (int64_t) ebx;
    *((rsp + rax)) = 0x7c2020;
    ebp += 3;
    if (r12d <= 0) {
        r12d = 0;
label_0:
        eax = r12 + rbp;
        goto label_4;
    }
label_1:
    eax = r12 - 1;
    rdi = r15 + rax + 1;
    rax = r15;
    esi = 0x2e;
    ebx -= r15d;
    ebx += 3;
    do {
        edx = *(rax);
        ecx = rdx - 0x20;
        if (cl >= 0x5f) {
            edx = esi;
        }
        ecx = rbx + rax;
        rcx = (int64_t) ecx;
        *((rsp + rcx)) = dl;
        rax++;
    } while (rax != rdi);
    if (r12d <= 0xf) {
        goto label_0;
    }
    goto label_5;
    do {
label_4:
        rdx = (int64_t) eax;
        *((rsp + rdx)) = 0x20;
        r12d++;
        eax++;
    } while (r12d <= 0xf);
label_5:
    rax = (int64_t) r12d;
    rbp = (int64_t) ebp;
    rax += rbp;
    *((rsp + rax)) = 0x7c;
    puts (rsp);
    return rax;
label_3:
    rdi = rsp;
    eax = 0;
    rcx = 0xffffffffffffffff;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rbx = rcx - 1;
    rax = (int64_t) ebx;
    *((rsp + rax)) = 0x7c2020;
    ebp += 3;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400970 */
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
    rbp = loc___init_array_end;
    r12 = loc___init_array_end;
    *((rsp - 0x18)) = r13;
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r15;
    *((rsp - 0x30)) = rbx;
    rbp -= r12;
    r13d = edi;
    r14 = rsi;
    rbp >>= 3;
    r15 = rdx;
    rax = _init ();
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
    } while (rbx < rbp);
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
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400912 */
#include <stdint.h>
 
int32_t main (char ** argv, int32_t argc) {
    rsi = argv;
    rdi = argc;
    r13d = edi;
    r12d = 0;
    if (edi <= 1) {
        goto label_0;
    }
    rbx = rsi;
    do {
        rdi = *((rbx + 8));
        eax = hexdump ();
        r12d += eax;
        ebp++;
        rbx += 8;
    } while (r13d > ebp);
label_0:
    eax = r12d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400528 */
#include <stdint.h>
 
void init (void) {
    /* [12] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400550 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400560 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400580 */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x400590 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4O/subject.exe @ 0x4005c0 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
