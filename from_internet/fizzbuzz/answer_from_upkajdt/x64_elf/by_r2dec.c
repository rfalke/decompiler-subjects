/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4014f0 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4011a0 */
#include <stdint.h>
 
int64_t loc_annobin_lto_unlikely (int64_t arg_18h, int64_t arg_20h, int64_t arg_30h, int64_t arg_40h, int64_t arg_48h, int64_t arg_50h) {
    /* [14] -r-x section size 3781 named .text */
    rdi = rbp;
    esi = 0x28;
    operatordelete(void*,unsigned long) ();
label_0:
    rdi = *((rsp + 0x20));
    rsi = *((rsp + 0x30));
    rsi -= rdi;
    if (rdi != 0) {
        operatordelete(void*,unsigned long) ();
    }
    rdi = rbp;
    Unwind_Resume ();
    rdi = *((rsp + 0x18));
    if (rdi != 0) {
        rax = *(rdi);
        uint64_t (*rax + 8)() ();
    }
    rdi = *((rsp + 0x40));
    rdx = *((rsp + 0x48));
    rax = rdi;
    do {
        if (rdx == rax) {
            goto label_1;
        }
        if (*(rax) != 0) {
            goto label_2;
        }
        rax += 8;
    } while (1);
label_1:
    rsi = *((rsp + 0x50));
    rsi -= rdi;
    if (rdi == 0) {
        goto label_0;
    }
    operatordelete(void*,unsigned long) ();
    goto label_0;
label_2:
    rax = std::terminate() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4014c0 */
#include <stdint.h>
 
void GLOBAL_sub_I_Z4taskP6worker (void) {
    edi = std::__ioinit;
    std::ios_base::Init::Init() ();
    edx = obj.__dso_handle;
    esi = std::__ioinit;
    edi = std::ios_base::Init::~Init();
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401130 */
#include <stdint.h>
 
void fcn_00401130 (void) {
    /* std::ios_base::Init::Init() */
    uint64_t (*0x00405098)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401530 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.__TMC_END__;
    if (rax != obj.__TMC_END__) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__TMC_END__;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401560 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = obj.__TMC_END__;
    rsi -= obj.__TMC_END__;
    rax = rsi;
    rsi >>= 0x3f;
    rax >>= 3;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__TMC_END__;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4015a0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4015d0 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401c80 */
#include <stdint.h>
 
int64_t method_void_std::vector_std::thread_std::allocator_std::thread_M_realloc_insert_void_worker_worker_gnu_cxx::_normal_iterator_std::thread_std::vector_std::thread_std::allocator_std::thread_void_worker_worker_ (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_28h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::vector<std::thread, std::allocator<std::thread> >::_M_realloc_insert<void (&)(worker*), worker*&>(__gnu_cxx::__normal_iterator<std::thread*, std::vector<std::thread, std::allocator<std::thread> > >, void (&)(worker*), worker*&) */
    rax = *((rdi + 8));
    r14 = *(rdi);
    *((rsp + 0x10)) = rdx;
    r12 = rax;
    *(rsp) = rax;
    rax = 0xfffffffffffffff;
    r12 -= r14;
    *((rsp + 0x18)) = rcx;
    r12 >>= 3;
    if (r12 == rax) {
        goto label_2;
    }
    eax = 1;
    r15 = rsi;
    rbx = rdi;
    if (r12 != 0) {
        rax = r12;
    }
    r12 += rax;
    al = (r12 < 0) ? 1 : 0;
    r15 -= r14;
    eax = (int32_t) al;
    if (rax != 0) {
        goto label_3;
    }
    if (r12 != 0) {
        goto label_4;
    }
    r13d = 0;
label_0:
    r15 += r13;
    edi = 0x18;
    *(r15) = 0;
    rax = operatornew(unsigned long) ();
    rdi = *((rsp + 0x18));
    rsi = *((rsp + 0x10));
    *((rsp + 0x28)) = rax;
    *(rax) = vtable.std::thread::_State_impl_std::thread::_Invoker_std::tuple_void____worker___worker_____.0;
    rdx = *(rdi);
    *((rax + 0x10)) = rsi;
    rdi = r15;
    rsi = rsp + 0x28;
    *((rax + 8)) = rdx;
    edx = imp.pthread_create;
    std::thread::_M_start_thread(std::unique_ptr<std::thread::_State,std::default_delete<std::thread::_State>>,void(*)()) ();
    rdi = *((rsp + 0x28));
    if (rdi != 0) {
        rax = *(rdi);
        uint64_t (*rax + 8)() ();
    }
    rsi = rbp;
    rax = r14;
    rdx = r13;
    rcx = r13;
    rsi -= r14;
    if (rbp == r14) {
        goto label_5;
    }
    do {
        rcx = *(rax);
        rax += 8;
        rdx += 8;
        *((rdx - 8)) = rcx;
    } while (rax != rbp);
    rcx = r13 + rsi;
label_5:
    rax = *(rsp);
    rcx += 8;
    if (rbp != rax) {
        r15 = rax;
        r15 -= rbp;
        rax = memcpy (rcx, rbp, r15);
        rcx = rax;
        rcx += r15;
    }
    xmm0 = r13;
    xmm1 = rcx;
    __asm ("punpcklqdq xmm0, xmm1");
    if (r14 != 0) {
        rsi = *((rbx + 0x10));
        rdi = r14;
        *(rsp) = xmm0;
        rsi -= r14;
        operatordelete(void*,unsigned long) ();
        __asm ("movdqa xmm0, xmmword [rsp]");
    }
    r13 += r12;
    __asm ("movups xmmword [rbx], xmm0");
    *((rbx + 0x10)) = r13;
    return rax;
label_3:
    r12 = 0x7ffffffffffffff8;
    do {
        rdi = r12;
        rax = operatornew(unsigned long) ();
        r13 = rax;
        goto label_0;
label_4:
        rax = 0xfffffffffffffff;
        if (r12 <= rax) {
            rax = r12;
        }
        r12 = rax*8;
    } while (1);
label_2:
    edi = "vector::_M_realloc_insert";
    rax = std::_throw_length_error(char const*) ();
    rdi = rax;
    goto label_6;
label_1:
    rdi = rbx;
label_6:
    cxa_begin_catch ();
    if (r13 == 0) {
        goto label_7;
    }
    rsi = r12;
    rdi = r13;
    operatordelete(void*,unsigned long) ();
    do {
        cxa_rethrow ();
label_7:
    } while (*(r15) == 0);
    rax = std::terminate() ();
    cxa_end_catch ();
    rdi = rbp;
    Unwind_Resume ();
    rax = *(rdi);
    uint64_t (*rax + 8)() ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401220 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    eax = std::thread::hardware_concurrency() ();
    xmm0 = 0;
    *((rsp + 0x30)) = 0;
    r13d = eax;
    *((rsp + 0x20)) = xmm0;
    if (r13 == 0) {
        goto label_6;
    }
    r12d = 0;
    ebx = 0;
    while (rax != r12) {
        *(rax) = rbp;
        rbx++;
        rax += 8;
        *((rsp + 0x28)) = rax;
        if (r13 == rbx) {
            goto label_6;
        }
label_0:
        r12 = *((rsp + 0x30));
        edi = 0x28;
        rax = operatornew(unsigned long) ();
        *((rax + 0x10)) = 0x989680;
        edi = 0x17d78400;
        rax = symoperatornew ();
        *((rbp + 0x18)) = rax;
        rax = *((rsp + 0x28));
        *((rsp + 0x40)) = rbp;
    }
    voidstd::vector<worker*,std::allocator<worker*>>::_M_realloc_insert<worker*>(_gnu_cxx::_normal_iterator<worker**,std::vector<worker*,std::allocator<worker*>>>,worker*&&) (rsp + 0x20, r12, rsp + 0x40);
    rbx++;
    if (r13 != rbx) {
        goto label_0;
    }
label_6:
    r12 = *((rsp + 0x28));
    r13 = *((rsp + 0x20));
    r14d = 0;
    rax = r12 - 8;
    rax -= r13;
    rax >>= 3;
    rax++;
    rax *= 0x989680;
    *((rsp + 8)) = rax;
label_3:
    if (r12 == r13) {
        goto label_7;
    }
label_4:
    rdx = r13;
    rax = r14;
    do {
        xmm0 = rax;
        rax += 0x989680;
        rcx = *(rdx);
        rdx += 8;
        xmm1 = rax;
        __asm ("punpcklqdq xmm0, xmm1");
        __asm ("movups xmmword [rcx], xmm0");
    } while (rdx != r12);
    xmm0 = 0;
    r14 += *((rsp + 8));
    rbx = r13;
    eax = 0;
    *((rsp + 0x50)) = 0;
    ebp = 0;
    *((rsp + 0x40)) = xmm0;
    while (rbp != rax) {
        *(rbp) = 0;
        edi = 0x18;
        operatornew(unsigned long) ();
        *(rax) = vtable.std::thread::_State_impl_std::thread::_Invoker_std::tuple_void____worker___worker_____.0;
        edx = imp.pthread_create;
        rsi = rsp + 0x18;
        rdi = rbp;
        *((rax + 8)) = r15;
        *((rax + 0x10)) = sym.task_worker_;
        *((rsp + 0x18)) = rax;
        std::thread::_M_start_thread(std::unique_ptr<std::thread::_State,std::default_delete<std::thread::_State>>,void(*)()) ();
        rdi = *((rsp + 0x18));
        if (rdi != 0) {
            rax = *(rdi);
            uint64_t (*rax + 8)() ();
        }
        rbp += 8;
        rbx += 8;
        *((rsp + 0x48)) = rbp;
        if (r12 == rbx) {
            goto label_8;
        }
label_1:
        rax = *((rsp + 0x50));
        r15 = *(rbx);
        *((rsp + 0x10)) = r15;
    }
    voidstd::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<void(&)(worker*),worker*&>(_gnu_cxx::_normal_iterator<std::thread*,std::vector<std::thread,std::allocator<std::thread>>>,void(&)(worker*),worker*&) (rsp + 0x40, rbp, sym.task_worker_, rsp + 0x10);
    rbx += 8;
    rbp = *((rsp + 0x48));
    if (r12 != rbx) {
        goto label_1;
    }
label_8:
    r15 = *((rsp + 0x40));
    rbx = *((rsp + 0x40));
    if (r15 == rbp) {
        goto label_9;
    }
    do {
        rdi = rbx;
        rax = std::thread::join() ();
        rbx += 8;
    } while (rbp != rbx);
label_9:
    rbx = r13;
    do {
        rax = *(rbx);
        write (1, *((rax + 0x18)), *((rax + 0x20)));
        rbx += 8;
    } while (r12 != rbx);
label_5:
    rsi = r14;
    edi = std::cerr;
    rax = std::ostream&std::ostream::_M_insert<unsigned long>(unsigned long) ();
    rdi = rax;
    edx = 1;
    esi = 0x40302a;
    std::string &std::_ostream_insert<char,std::char_traits<char>>(std::string &,char const*,long) ();
    rax = r15;
    if (rbp == r15) {
        goto label_10;
    }
label_2:
    if (*(rax) != 0) {
        void (*0x40149a)() ();
    }
    rax += 8;
    if (rax != rbp) {
        goto label_2;
    }
label_10:
    if (r15 == 0) {
        goto label_3;
    }
    rsi = *((rsp + 0x50));
    rdi = r15;
    rsi -= r15;
    operatordelete(void*,unsigned long) ();
    if (r12 != r13) {
        goto label_4;
    }
label_7:
    xmm0 = 0;
    r15d = 0;
    ebp = 0;
    *((rsp + 0x50)) = 0;
    *((rsp + 0x40)) = xmm0;
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x402068 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401520 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401c50 */
#include <stdint.h>
 
void method_std::thread::_State_impl_std::thread::_Invoker_std_tuple_void_worker_worker_::_State_impl_ (int64_t arg1) {
    rdi = arg1;
    /* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> > >::~_State_impl() */
    *(rdi) = vtable.std::thread::_State_impl_std::thread::_Invoker_std::tuple_void____worker___worker_____.0;
    return void (*0x401070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401c40 */
#include <stdint.h>
 
int64_t method_std::thread::_State_impl_std::thread::_Invoker_std_tuple_void_worker_worker_::_M_run_ (int64_t arg1) {
    rdi = arg1;
    /* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> > >::_M_run() */
    r8 = *((rdi + 8));
    rax = *((rdi + 0x10));
    rdi = r8;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [12] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401c60 */
#include <stdint.h>
 
void fcn_00401c60 (int64_t arg1) {
    rdi = arg1;
    /* std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> > >::~_State_impl() */
    *(rdi) = vtable.std::thread::_State_impl_std::thread::_Invoker_std::tuple_void____worker___worker_____.0;
    std::thread::_State::~_State() ();
    rdi = rbp;
    esi = 0x18;
    return void (*0x4010f0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401070 */
#include <stdint.h>
 
void std::thread::_State::_State_ (void) {
    /* std::thread::_State::~_State() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401ff0 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = obj___frame_dummy_init_array_entry;
    r14 = rdx;
    r13 = rsi;
    r12d = edi;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r15;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r14;
        rsi = r13;
        edi = r12d;
        uint64_t (*r15 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4015e0 */
#include <stdint.h>
 
int64_t task_worker_ (int64_t arg3, uint32_t arg1) {
    rdx = arg3;
    rdi = arg1;
    /* task(worker*) */
    rsi = *((rdi + 0x18));
    rcx = *(rdi);
    r8 = rdi;
    if (rcx >= *((rdi + 8))) {
        goto label_5;
    }
    r10 = 0xaaaaaaaaaaaaaaab;
    edi = 0;
    r9 = 0xcccccccccccccccd;
    rbx = 0xffffffffffffff9c;
    do {
label_1:
        rax = rcx;
        rdx:rax = rax * r10;
        rax = rcx;
        r12 = rdx;
        rdx &= 0xfffffffffffffffe;
        r12 >>= 1;
        rdx += r12;
        r12 = rcx;
        r12 -= rdx;
        rdx:rax = rax * r9;
        rax = rdx;
        rdx &= 0xfffffffffffffffc;
        rax >>= 2;
        rdx += rax;
        rax = rcx;
        rax -= rdx;
        rdx = r12;
        rdx |= rax;
        if (rdx != 0) {
            goto label_6;
        }
        rdx = "FizzBuzz";
        rax = rsi + 8;
        *(rsi) = rdx;
label_0:
        edi++;
        *(rax) = 0xa;
        rsi = rax + 1;
        rcx++;
        if (dil == 0xa) {
            goto label_7;
        }
    } while (rcx < *((r8 + 8)));
    do {
        rsi -= *((r8 + 0x18));
        *((r8 + 0x20)) = rsi;
        r12 = rbx;
        r13 = rbx;
        r14 = rbx;
        r15 = rbx;
        return rax;
label_6:
        if (r12 != 0) {
            goto label_8;
        }
        *(rsi) = 0x7a7a6946;
        rax = rsi + 4;
        goto label_0;
label_7:
    } while (*((r8 + 8)) <= rcx);
    edi = 0;
    goto label_1;
label_8:
    if (rax == 0) {
        *(rsi) = 0x7a7a7542;
        rax = rsi + 4;
        goto label_0;
    }
    rax = rcx;
    rax -= rbx;
    if (rax <= 9) {
        eax = (int32_t) bpl;
        edx = (int32_t) dil;
        eax += edx;
        if (eax <= 9) {
            goto label_9;
        }
    }
    rax = rcx;
    rdx:rax = rax * r9;
    rax = rcx;
    rbx = rdx;
    rbx >>= 3;
    rdx = rbx * 5;
    rdx += rdx;
    rax -= rdx;
    eax += 0x30;
    *((rsp - 0x19)) = al;
    if (rcx <= 9) {
        goto label_10;
    }
    rax = rbx;
    rdx:rax = rax * r9;
    rax = rbx;
    rdx >>= 3;
    r13 = rdx;
    rdx *= 5;
    rdx += rdx;
    rax -= rdx;
    eax += 0x30;
    *((rsp - 0x1a)) = al;
    if (rcx <= 0x63) {
        goto label_11;
    }
    rax = r13;
    rdx:rax = rax * r9;
    rax = r13;
    rdx >>= 3;
    r14 = rdx;
    rdx *= 5;
    rdx += rdx;
    rax -= rdx;
    eax += 0x30;
    *((rsp - 0x1b)) = al;
    if (rcx <= 0x3e7) {
        goto label_12;
    }
    rax = r14;
    rdx:rax = rax * r9;
    rax = r14;
    rdx >>= 3;
    r11 = rdx;
    rdx *= 5;
    rdx += rdx;
    rax -= rdx;
    eax += 0x30;
    *((rsp - 0x1c)) = al;
    if (rcx <= 0x270f) {
        goto label_13;
    }
    rax = r11;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r12 = rdx;
    rax += rax;
    r11 -= rax;
    r11d += 0x30;
    *((rsp - 0x1d)) = r11b;
    if (rcx <= 0x1869f) {
        goto label_14;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r11 = rdx;
    rax += rax;
    r12 -= rax;
    r12d += 0x30;
    *((rsp - 0x1e)) = r12b;
    if (rcx <= 0xf423f) {
        goto label_15;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r12 = rdx;
    rax += rax;
    r11 -= rax;
    r11d += 0x30;
    *((rsp - 0x1f)) = r11b;
    if (rcx <= 0x98967f) {
        goto label_16;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r11 = rdx;
    rax += rax;
    r12 -= rax;
    r12d += 0x30;
    *((rsp - 0x20)) = r12b;
    if (rcx <= 0x5f5e0ff) {
        goto label_17;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r12 = rdx;
    rax += rax;
    r11 -= rax;
    r11d += 0x30;
    *((rsp - 0x21)) = r11b;
    if (rcx <= 0x3b9ac9ff) {
        goto label_18;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r11 = rdx;
    rax += rax;
    r12 -= rax;
    rax = 0x2540be3ff;
    r12d += 0x30;
    *((rsp - 0x22)) = r12b;
    if (rcx <= rax) {
        goto label_19;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r12 = rdx;
    rax += rax;
    r11 -= rax;
    rax = 0x174876e7ff;
    r11d += 0x30;
    *((rsp - 0x23)) = r11b;
    if (rcx <= rax) {
        goto label_20;
    }
    r15 = 0xe8d4a50fff;
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r11 = rdx;
    rax += rax;
    r12 -= rax;
    r12d += 0x30;
    *((rsp - 0x24)) = r12b;
    if (rcx <= r15) {
        goto label_21;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r12 = rdx;
    rax += rax;
    r11 -= rax;
    r11d += 0x30;
    *((rsp - 0x25)) = r11b;
    if (rbx <= r15) {
        goto label_22;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    r11 = rdx;
    rax += rax;
    r12 -= rax;
    eax = r12 + 0x30;
    *((rsp - 0x26)) = al;
    if (r13 <= r15) {
        goto label_23;
    }
    rax = rdx;
    rdx:rax = rax * r9;
    rbx = rdx;
    rbx >>= 3;
    rax = rbx * 5;
    rax += rax;
    r11 -= rax;
    eax = r11 + 0x30;
    *((rsp - 0x27)) = al;
    if (r14 <= r15) {
        goto label_24;
    }
    rax = rbx;
    r11d = 0;
    rdx:rax = rax * r9;
    rdx >>= 3;
    rax = rdx * 5;
    rax += rax;
    rbx -= rax;
    eax = rbx + 0x30;
    *((rsp - 0x28)) = al;
label_3:
    eax = 0x10;
    rdx = r11 + 1;
    ebx = 1;
    rax -= r11;
    if (rdx > 0x10) {
        rax = rbx;
    }
    rbx = rsp - 0x28;
    r12 = rbx + r11;
    if (eax >= 8) {
        goto label_25;
    }
    if ((al & 4) != 0) {
        goto label_26;
    }
    if (eax != 0) {
        edx = *(r12);
        *(rsi) = dl;
        if ((al & 2) != 0) {
            goto label_27;
        }
    }
label_4:
    rax += rsi;
    rbx = rcx;
    goto label_0;
label_9:
    if (r11 == 0xf) {
        goto label_28;
    }
    r14d = 0xf;
    rax = rsp - 0x28;
    r14 -= r11;
    r12 = rax + r11;
    if (r14d >= 8) {
        goto label_29;
    }
    if ((r14b & 4) != 0) {
        goto label_30;
    }
    if (r14d == 0) {
        goto label_2;
    }
    eax = *(r12);
    *(rsi) = al;
    if ((r14b & 2) != 0) {
        goto label_31;
    }
    do {
label_2:
        rsi += r14;
label_28:
        edx = edi;
        rax = rsi + 1;
        edx -= ebp;
        dl += *((rsp - 0x19));
        *(rsi) = dl;
        goto label_0;
label_29:
        rax = *(r12);
        *(rsi) = rax;
        eax = r14d;
        rdx = *((r12 + rax - 8));
        *((rsi + rax - 8)) = rdx;
        rax = rsi + 8;
        rdx = rsi;
        rax &= 0xfffffffffffffff8;
        rdx -= rax;
        r15 = rax;
        rax = rdx;
        r12 -= rdx;
        eax += r14d;
        eax &= 0xfffffff8;
    } while (eax < 8);
    *((rsp - 0x30)) = rcx;
    eax &= 0xfffffff8;
    edx = 0;
    r13 = rsi;
    do {
        esi = edx;
        edx += 8;
        rcx = *((r12 + rsi));
        *((r15 + rsi)) = rcx;
    } while (edx < eax);
    rcx = *((rsp - 0x30));
    rsi = r13;
    goto label_2;
label_12:
    r11d = 0xd;
    goto label_3;
label_25:
    rdx = *(r12);
    r14 = rsi + 8;
    r14 &= 0xfffffffffffffff8;
    *(rsi) = rdx;
    edx = eax;
    rbx = *((r12 + rdx - 8));
    *((rsi + rdx - 8)) = rbx;
    rdx = rsi;
    rdx -= r14;
    r12 -= rdx;
    edx += eax;
    edx &= 0xfffffff8;
    if (edx < 8) {
        goto label_4;
    }
    edx &= 0xfffffff8;
    ebx = 0;
    do {
        r13d = ebx;
        ebx += 8;
        r15 = *((r12 + r13));
        *((r14 + r13)) = r15;
    } while (ebx < edx);
    goto label_4;
label_5:
    esi = 0;
    *((rdi + 0x20)) = rsi;
    return rax;
label_10:
    r11d = 0xf;
    goto label_3;
label_11:
    r11d = 0xe;
    goto label_3;
label_20:
    r11d = 5;
    goto label_3;
label_13:
    r11d = 0xc;
    goto label_3;
label_14:
    r11d = 0xb;
    goto label_3;
label_15:
    r11d = 0xa;
    goto label_3;
label_16:
    r11d = 9;
    goto label_3;
label_17:
    r11d = 8;
    goto label_3;
label_18:
    r11d = 7;
    goto label_3;
label_26:
    edx = *(r12);
    *(rsi) = edx;
    edx = eax;
    ebx = *((r12 + rdx - 4));
    *((rsi + rdx - 4)) = ebx;
    goto label_4;
label_19:
    r11d = 6;
    goto label_3;
label_21:
    r11d = 4;
    goto label_3;
label_22:
    r11d = 3;
    goto label_3;
label_30:
    eax = *(r12);
    *(rsi) = eax;
    eax = r14d;
    edx = *((r12 + rax - 4));
    *((rsi + rax - 4)) = edx;
    goto label_2;
label_23:
    r11d = 2;
    goto label_3;
label_24:
    r11d = 1;
    goto label_3;
label_27:
    edx = eax;
    ebx = *((r12 + rdx - 2));
    *((rsi + rdx - 2)) = bx;
    goto label_4;
label_31:
    eax = r14d;
    edx = *((r12 + rax - 2));
    *((rsi + rax - 2)) = dx;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401e90 */
#include <stdint.h>
 
int64_t method_void_std::vector_worker_std::allocator_worker_M_realloc_insert_worker_gnu_cxx::_normal_iterator_worker_std::vector_worker_std::allocator_worker_worker_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::vector<worker*, std::allocator<worker*> >::_M_realloc_insert<worker*>(__gnu_cxx::__normal_iterator<worker**, std::vector<worker*, std::allocator<worker*> > >, worker*&&) */
    r15 = rdx;
    rdx = 0xfffffffffffffff;
    r12 = *((rdi + 8));
    r14 = *(rdi);
    rax = r12;
    rax -= r14;
    rax >>= 3;
    if (rax == rdx) {
        goto label_3;
    }
    edx = 1;
    r13 = rsi;
    if (rax != 0) {
        rdx = rax;
    }
    ecx = 0;
    rax += rdx;
    rdx = rsi;
    cl = (rax < 0) ? 1 : 0;
    rdx -= r14;
    if (rcx != 0) {
        goto label_4;
    }
    if (rax != 0) {
        goto label_5;
    }
    ebx = 0;
    edi = 0;
label_2:
    rax = *(r15);
    r8 = rdi + rdx + 8;
    r12 -= r13;
    xmm0 = rdi;
    r15 = *((rbp + 0x10));
    *((rdi + rdx)) = rax;
    rax = r8 + r12;
    xmm1 = rax;
    __asm ("punpcklqdq xmm0, xmm1");
    *(rsp) = xmm0;
    if (rdx > 0) {
        goto label_6;
    }
    if (r12 > 0) {
        goto label_7;
    }
    while (1) {
label_0:
        __asm ("movdqa xmm2, xmmword [rsp]");
        *((rbp + 0x10)) = rbx;
        __asm ("movups xmmword [rbp], xmm2");
        return rax;
label_6:
        *((rsp + 0x18)) = r8;
        memmove (rdi, r14, rdx);
        r8 = *((rsp + 0x18));
        if (r12 > 0) {
            goto label_7;
        }
label_1:
        rsi = r15;
        rdi = r14;
        rsi -= r14;
        operatordelete(void*,unsigned long) ();
    }
label_7:
    memcpy (r8, r13, r12);
    if (r14 == 0) {
        goto label_0;
    }
    goto label_1;
label_4:
    rbx = 0x7ffffffffffffff8;
    do {
        rdi = rbx;
        *(rsp) = rdx;
        rax = operatornew(unsigned long) ();
        rdx = *(rsp);
        rdi = rax;
        rbx += rax;
        goto label_2;
label_5:
        rcx = 0xfffffffffffffff;
        if (rax > rcx) {
            rax = rcx;
        }
        rbx = rax*8;
    } while (1);
label_3:
    edi = "vector::_M_realloc_insert";
    std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x402060 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void operator_new_unsigned_long_ (void) {
    /* operator new[](unsigned long) */
    operator_new_unsigned_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void std::terminate_ (void) {
    /* std::terminate() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401060 */
#include <stdint.h>
 
void cxa_begin_catch (void) {
    cxa_begin_catch ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401080 */
#include <stdint.h>
 
void std::_throw_length_error_char_const_ (void) {
    /* std::__throw_length_error(char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4010a0 */
#include <stdint.h>
 
void std::ostream_std::ostream::_M_insert_unsigned_long_unsigned_long_ (void) {
    /* std::ostream& std::ostream::_M_insert<unsigned long>(unsigned long) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4010b0 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4010c0 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4010d0 */
#include <stdint.h>
 
void std::thread::_M_start_thread_std::unique_ptr_std::thread::_State_std::default_delete_std::thread::_State_void_ (void) {
    /* std::thread::_M_start_thread(std::unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >, void (*)()) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4010e0 */
#include <stdint.h>
 
void operator_new_unsigned_long_ (void) {
    /* operator new(unsigned long) */
    operator_new_unsigned_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x4010f0 */
#include <stdint.h>
 
void operator_delete_void_unsigned_long_ (void) {
    /* operator delete(void*, unsigned long) */
    operator_delete_void_unsigned_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401100 */
#include <stdint.h>
 
void method_std::basic_ostream_char_std::char_traits_char_std::_ostream_insert_char_std_char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_long_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::__ostream_insert<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*, long) */
    std::basic_ostream_char_std::char_traits_char_std::_ostream_insert_char_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401110 */
#include <stdint.h>
 
void std::thread::hardware_concurrency_ (void) {
    /* std::thread::hardware_concurrency() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401120 */
#include <stdint.h>
 
void cxa_rethrow (void) {
    cxa_rethrow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401140 */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401150 */
#include <stdint.h>
 
void cxa_end_catch (void) {
    cxa_end_catch ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401170 */
#include <stdint.h>
 
void std::thread::join_ (void) {
    /* std::thread::join() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401180 */
#include <stdint.h>
 
void Unwind_Resume (void) {
    Unwind_Resume ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401090 */
#include <stdint.h>
 
void pthread_create (void) {
    pthread_create ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401160 */
#include <stdint.h>
 
void gxx_personality_v0 (void) {
    gxx_personality_v0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_upkajdt/x64_elf/subject.exe @ 0x401190 */
#include <stdint.h>
 
void std::ios_base::Init::Init_ (void) {
    /* std::ios_base::Init::~Init() */
}
