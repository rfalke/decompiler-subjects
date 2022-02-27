/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4003c0 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [13] -r-x section size 520 named .text */
    ebp = 0;
    return libc_start_main (dbg.main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4003b0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4003ec */
#include <stdint.h>
 
int64_t call_gmon_start (void) {
    rax = .got;
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x400410 */
#include <stdint.h>
 
int64_t do_global_dtors_aux (void) {
    if (*(obj.completed.6987) != 0) {
        goto label_0;
    }
    eax = obj.__DTOR_END__;
    rdx = *(obj.dtor_idx.6989);
    rax -= obj.__DTOR_LIST__;
    rax >>= 3;
    rbx = rax - 1;
    if (rdx >= rbx) {
        goto label_1;
    }
    do {
        rax = rdx + 1;
        *(obj.dtor_idx.6989) = rax;
        uint64_t (*rax*8 + obj.__DTOR_LIST__)() ();
        rdx = *(obj.dtor_idx.6989);
    } while (rdx < rbx);
label_1:
    *(obj.completed.6987) = 1;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x400480 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        r11 = rax;
        void (*r11)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x400590 */
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
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4005c8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 14 named .fini */
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4004ac */
#include <stdint.h>
 
int64_t dbg_func (int64_t arg1) {
    s1 * s1p;
    rdi = arg1;
    /* void func(s1 * s1p); */
    *((rbp - 8)) = rdi;
    rax = *((rbp - 8));
    *(rax) = 1;
    rax = *((rbp - 8));
    *((rax + 8)) = 0x6b;
    rax = *((rbp - 8));
    *((rax + 0x10)) = 0xa;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x400500 */
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
    *((rsp - 8)) = r15;
    rbp = loc___init_array_end;
    r15 = loc___init_array_end;
    *((rsp - 0x20)) = r12;
    *((rsp - 0x18)) = r13;
    *((rsp - 0x10)) = r14;
    *((rsp - 0x30)) = rbx;
    rbp -= r15;
    r14d = edi;
    r13 = rsi;
    rbp >>= 3;
    r12 = rdx;
    rax = init ();
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r12;
        rsi = r13;
        edi = r14d;
        uint64_t (*r15 + rbx*8)() ();
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
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x4004d4 */
#include <stdint.h>
 
void dbg_main (void) {
    /* int main(); */
    func (obj.gs1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/vars2/x64_elf_from_rec_gcc_g/subject.exe @ 0x400388 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
