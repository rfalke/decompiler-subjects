/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402bd0 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4044a0 */
#include <stdint.h>
 
int64_t method_std::_cxx11::basic_string_char_std::char_traits_char_std::allocator_char_M_replace_aux_unsigned_long_unsigned_long_unsigned_long_char_ (int64_t arg5, int64_t arg4, uint32_t arg3, int64_t arg2, uint32_t arg1) {
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_replace_aux(unsigned long, unsigned long, unsigned long, char) */
    r13 = rcx;
    rax = 0x7fffffffffffffff;
    rax += rdx;
    rcx = *((rdi + 8));
    rax -= rcx;
    if (r13 > rax) {
        goto label_3;
    }
    r12 = rdi;
    rdi = *(rdi);
    rbx = r13;
    r14 = rsi;
    rbx -= rdx;
    rax = r12 + 0x10;
    rbx += rcx;
    if (rdi == rax) {
        goto label_4;
    }
    rax = *((r12 + 0x10));
label_1:
    if (rax < rbx) {
        goto label_5;
    }
    rax = rdx + r14;
    rcx -= rax;
    if (rcx != 0) {
        if (rdx == r13) {
            goto label_6;
        }
        rdi += r14;
        rsi = rdi + rdx;
        rdi += r13;
        if (rcx == 1) {
            goto label_7;
        }
        memmove (rdi, rsi, rcx);
        rdi = *(r12);
    }
label_6:
    if (r13 == 0) {
        goto label_2;
    }
label_0:
    rdi += r14;
    if (r13 == 1) {
        goto label_8;
    }
    esi = (int32_t) bpl;
    memset (rdi, rsi, r13);
    rdi = *(r12);
    do {
label_2:
        *((r12 + 8)) = rbx;
        rax = r12;
        *((rdi + rbx)) = 0;
        return rax;
label_5:
        std::string ::_M_mutate(unsigned long,unsigned long,char const*,unsigned long) (r12, r14, rdx, 0, r13);
        rdi = *(r12);
    } while (r13 == 0);
    goto label_0;
label_4:
    eax = 0xf;
    goto label_1;
label_8:
    *(rdi) = bpl;
    rdi = *(r12);
    goto label_2;
label_7:
    eax = *(rsi);
    *(rdi) = al;
    rdi = *(r12);
    if (r13 == 0) {
        goto label_2;
    }
    goto label_0;
label_3:
    edi = "basic_string::_M_replace_aux";
    rax = std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4042e0 */
#include <stdint.h>
 
int64_t method_std::_cxx11::basic_string_char_std::char_traits_char_std::allocator_char_M_mutate_unsigned_long_unsigned_long_char_const_unsigned_long_ (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, uint32_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */
    r9 = rcx;
    rcx = rsi + rdx;
    r12 = rsi;
    r14 = r8;
    rbx = rdi;
    rax = *((rdi + 8));
    rbp -= rdx;
    r13 = rdi + 0x10;
    *((rsp + 0x10)) = rcx;
    rsi = rax;
    rbp += rax;
    rsi -= rcx;
    *(rsp) = rsi;
    if (r13 == *(rdi)) {
        goto label_5;
    }
    rax = *((rdi + 0x10));
    do {
        if (rbp < 0) {
            goto label_6;
        }
        if (rbp > rax) {
            rax += rax;
            if (rbp >= rax) {
                goto label_7;
            }
            if (rax < 0) {
                goto label_8;
            }
        }
label_7:
        rdi = rbp;
        rdi++;
        if (rdi >= 0) {
            *((rsp + 8)) = r9;
            rax = operatornew(unsigned long) ();
            r10 = *(rbx);
            r9 = *((rsp + 8));
            r15 = rax;
            if (r12 != 0) {
                if (r12 == 1) {
                    goto label_9;
                }
                rsi = r10;
                *((rsp + 0x18)) = r9;
                *((rsp + 8)) = r10;
                memcpy (rax, rsi, r12);
                r9 = *((rsp + 0x18));
                r10 = *((rsp + 8));
            }
label_0:
            if (r9 != 0) {
                if (r14 == 0) {
                    goto label_10;
                }
                rdi = r15 + r12;
                if (r14 == 1) {
                    goto label_11;
                }
                *((rsp + 8)) = r10;
                memcpy (rdi, r9, r14);
                r10 = *((rsp + 8));
            }
label_10:
            rax = *(rsp);
            if (rax != 0) {
label_2:
                rsi = *((rsp + 0x10));
                r8 = r12 + r14;
                rdi = r15 + r8;
                rsi += r10;
                if (rax == 1) {
                    goto label_12;
                }
                *((rsp + 8)) = r10;
                memcpy (rdi, rsi, rax);
                r10 = *((rsp + 8));
            }
label_1:
            if (r10 != r13) {
label_3:
                rax = *((rbx + 0x10));
                rdi = r10;
                rsi = rax + 1;
                operatordelete(void*,unsigned long) ();
            }
label_4:
            *(rbx) = r15;
            *((rbx + 0x10)) = rbp;
            return rax;
        }
label_8:
        std::_throw_bad_alloc() ();
label_5:
        eax = 0xf;
    } while (1);
label_9:
    eax = *(r10);
    *(r15) = al;
    goto label_0;
label_11:
    eax = *(r9);
    *(rdi) = al;
    rax = *(rsp);
    if (rax == 0) {
        goto label_1;
    }
    goto label_2;
label_12:
    eax = *(rsi);
    *(rdi) = al;
    if (r10 != r13) {
        goto label_3;
    }
    goto label_4;
label_6:
    edi = "basic_string::_M_create";
    std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402cc0 */
#include <stdint.h>
 
void method_std::thread::_State_impl_std::thread::_Invoker_std::tuple_main_lambda_worker_1_worker_::_State_impl_ (int64_t arg1) {
    rdi = arg1;
    /* std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> > >::~_State_impl() */
    *(rdi) = method.std::thread::_State_impl_std::thread::_Invoker_std::tuple_main.lambda_worker_1__worker_____::_State_impl__;
    return void (*0x402070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402cd0 */
#include <stdint.h>
 
void std::thread::_State_impl_std::thread::_Invoker_std::tuple_main::lambda_worker_1_worker_::_State_impl_ (int64_t arg1) {
    rdi = arg1;
    /* std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> > >::~_State_impl() */
    *(rdi) = method.std::thread::_State_impl_std::thread::_Invoker_std::tuple_main.lambda_worker_1__worker_____::_State_impl__;
    std::thread::_State::~_State() ();
    rdi = rbp;
    esi = 0x10;
    return void (*0x402140)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402070 */
#include <stdint.h>
 
void std::thread::_State::_State_ (void) {
    /* std::thread::_State::~_State() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x403070 */
#include <stdint.h>
 
void method_std::thread::_State_impl_std::thread::_Invoker_std::tuple_main_lambda_worker_1_worker_::_M_run_ (int64_t arg1) {
    rdi = arg1;
    /* std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> > >::_M_run() */
    worker::loop() (*((rdi + 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402ba0 */
#include <stdint.h>
 
void GLOBAL_sub_I_main (void) {
    edi = std::__ioinit;
    std::ios_base::Init::Init() ();
    edx = obj.__dso_handle;
    esi = std::__ioinit;
    edi = std::ios_base::Init::~Init();
    return cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402180 */
#include <stdint.h>
 
void fcn_00402180 (void) {
    /* std::ios_base::Init::Init() */
    uint64_t (*0x004070c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402c10 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402c40 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402c80 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402cb0 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x403080 */
#include <stdint.h>
 
uint64_t method_worker_worker_unsigned_long_unsigned_long_unsigned_long_ (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    uint32_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* worker::worker(unsigned long, unsigned long, unsigned long) */
    __asm ("vpxor xmm0, xmm0, xmm0");
    rax = rdi + 0x10;
    r13 = rcx;
    r12 = rsi;
    rbx = rdi;
    __asm ("vmovdqu xmmword [rdi + 0x20], xmm0");
    __asm ("vpxor xmm0, xmm0, xmm0");
    *(rdi) = rax;
    *(rsp) = rax;
    *((rdi + 8)) = 0;
    rax = rdi + 0x20;
    rdi += 0x68;
    *((rdi - 0x58)) = 0;
    *((rdi - 0x38)) = 0;
    *((rdi - 0x30)) = 0;
    *((rdi - 0x2c)) = 0;
    __asm ("vmovdqu xmmword [rdi - 0x28], xmm0");
    __asm ("vmovdqu xmmword [rdi - 0x18], xmm0");
    *((rdi - 8)) = 0;
    *((rsp + 0x10)) = rax;
    std::condition_variable::condition_variable() ();
    *((rbx + 0x98)) = 0;
    *((rbx + 0xa0)) = 0;
    *((rbx + 0xa8)) = 0;
    *((rbx + 0xb0)) = 0;
    *((rbx + 0xb8)) = 0;
    if (r13 <= 9) {
        goto label_23;
    }
    if (r13 <= 0x63) {
        goto label_24;
    }
    if (r13 <= 0x3e7) {
        goto label_25;
    }
    rdx = r13;
    esi = 1;
    rdi = 0x346dc5d63886594b;
    if (r13 > 0x270f) {
        goto label_26;
    }
    goto label_27;
    do {
        if (rcx <= 0xf423f) {
            goto label_28;
        }
        if (rcx <= 0x98967f) {
            goto label_29;
        }
        if (rcx <= 0x5f5e0ff) {
            goto label_30;
        }
label_26:
        rax = rdx;
        rcx = rdx;
        rdx:rax = rax * rdi;
        eax = esi;
        esi += 4;
        rdx >>= 0xb;
    } while (rcx > 0x1869f);
    r14d = esi;
label_15:
    rax = rsp + 0x30;
    *((rsp + 8)) = rax;
    *((rsp + 0x20)) = rax;
    if (r14 > 0xf) {
        goto label_31;
    }
    if (r14 != 0) {
        goto label_32;
    }
    rsi = rax;
    *((rsp + 0x28)) = 0;
    *((rsp + 0x30)) = 0;
    ecx = 0xffffffff;
label_10:
    rdi = 0x28f5c28f5c28f5c3;
    do {
        rdx = r13;
        rdx >>= 2;
        rax = rdx;
        rdx:rax = rax * rdi;
        rax = r13;
        rdx >>= 2;
        r8 = rdx * 0x64;
        rax -= r8;
        r8 = r13;
        r13 = rdx;
        edx = ecx;
        rax += rax;
        r9d = *((rax + 0x405141));
        eax = *((rax + method.std::__detail.__to_chars_10_impl_unsigned_long__char__unsigned_int__unsigned_long_::__digits));
        *((rsi + rdx)) = r9b;
        edx = rcx - 1;
        ecx -= 2;
        *((rsi + rdx)) = al;
    } while (r8 > 0x270f);
label_11:
    eax = r13 + 0x30;
    if (r13 > 9) {
        r13 += r13;
        eax = *((r13 + 0x405141));
        *((rsi + 1)) = al;
        eax = *((r13 + method.std::__detail.__to_chars_10_impl_unsigned_long__char__unsigned_int__unsigned_long_::__digits));
    }
    *(rsi) = al;
    eax = *((rsp + 0x28));
    rdx = rbp * 0xef;
    rcx = 0x8888888888888889;
    eax++;
    *((rbx + 0x38)) = eax;
    rax = *((rsp + 0x20));
    eax = *(rax);
    eax -= 0x30;
    *((rbx + 0x3c)) = al;
    rax = rdx;
    rdx:rax = rax * rcx;
    rax = *(rsp);
    rdx >>= 3;
    rdx++;
    if (*(rbx) == rax) {
        goto label_33;
    }
    r13 = *((rbx + 0x10));
label_17:
    if (rdx > r13) {
        r13 += r13;
        if (r13 < rdx) {
            r13 = rdx;
        }
        rdi = r13 + 1;
        rax = operatornew(unsigned long) ();
        r15 = *(rbx);
        r14 = rax;
        rax = *((rbx + 8));
        rdx = rax + 1;
        if (rax == 0) {
            goto label_34;
        }
        if (rdx != 0) {
            goto label_35;
        }
label_16:
        if (r15 != *(rsp)) {
            rax = *((rbx + 0x10));
            rdi = r15;
            rsi = rax + 1;
            operatordelete(void*,unsigned long) ();
        }
        *(rbx) = r14;
        *((rbx + 0x10)) = r13;
    }
    rax = rbp;
    rax >>= 0x3c;
    if (rax != 0) {
        goto label_36;
    }
    rdi = *((rbx + 0x20));
    r8 = *((rbx + 0x30));
    r8 -= rdi;
    rax = r8;
    rax >>= 3;
    if (rbp <= rax) {
        goto label_37;
    }
    rsi = *((rbx + 0x28));
    r14 = rbp*8;
    r15d = 0;
    r13 = rsi;
    r13 -= rdi;
    if (rbp != 0) {
        rdi = r14;
        rax = operatornew(unsigned long) ();
        rdi = *((rbx + 0x20));
        r8 = *((rbx + 0x30));
        rsi = *((rbx + 0x28));
        r15 = rax;
        r8 -= rdi;
    }
    if (rdi == rsi) {
        goto label_38;
    }
    rsi -= rdi;
    rax = r15;
    rdx = rdi;
    rsi += r15;
    do {
        rcx = *(rdx);
        rax += 8;
        rdx += 8;
        *((rax - 8)) = rcx;
    } while (rax != rsi);
label_38:
    if (rdi != 0) {
        rsi = r8;
        operatordelete(void*,unsigned long) ();
    }
    r13 += r15;
    __asm ("vmovq xmm1, r15");
    r15 += r14;
    __asm ("vpinsrq xmm0, xmm1, r13, 1");
    *((rbx + 0x30)) = r15;
    __asm ("vmovdqu xmmword [rbx + 0x20], xmm0");
label_37:
    rbp += r12;
    r14 = 0xeeeeeeeeeeeeeeef;
    r13 = 0x1111111111111111;
    if (r12 >= rbp) {
        goto label_3;
    }
    do {
label_2:
        rax = r12;
        rax *= r14;
        if (rax <= r13) {
            goto label_39;
        }
        rax = 0xcccccccccccccccd;
        rdi = 0x3333333333333333;
        rax *= r12;
        if (rax <= rdi) {
            goto label_40;
        }
        rax = 0xaaaaaaaaaaaaaaab;
        rdx = 0x5555555555555555;
        rax *= r12;
        if (rax > rdx) {
            goto label_41;
        }
        rsi = *((rbx + 8));
        rax = 0x7fffffffffffffff;
        rax -= rsi;
        if (rax <= 4) {
            goto label_42;
        }
        rax = *(rbx);
        r15 = rsi + 5;
        if (*(rsp) == rax) {
            goto label_43;
        }
        rdx = *((rbx + 0x10));
label_12:
        if (r15 > rdx) {
            goto label_44;
        }
        rax += rsi;
        *(rax) = 0x7a7a6946;
        *((rax + 4)) = 0xa;
label_0:
        *((rbx + 8)) = r15;
        rax = *(rbx);
        *((rax + r15)) = 0;
label_1:
        rax = *((rbx + 8));
        rax += *(rbx);
        rsi = *((rbx + 0x28));
        *((rsp + 0x60)) = rax;
        if (rsi == *((rbx + 0x30))) {
            goto label_45;
        }
        *(rsi) = rax;
        r12++;
        rsi += 8;
        *((rbx + 0x28)) = rsi;
    } while (rbp > r12);
label_3:
    rax = *(rbx);
    rdi = *((rsp + 0x20));
    *((rbx + 0xa8)) = rax;
    if (rdi != *((rsp + 8))) {
        rax = *((rsp + 0x30));
        rsi = rax + 1;
        operatordelete(void*,unsigned long) ();
    }
    return rax;
label_39:
    rsi = *((rbx + 8));
    rax = 0x7fffffffffffffff;
    rax -= rsi;
    if (rax <= 8) {
        goto label_42;
    }
    rax = *(rbx);
    r15 = rsi + 9;
    if (*(rsp) == rax) {
        goto label_46;
    }
    rdx = *((rbx + 0x10));
label_8:
    if (r15 > rdx) {
        goto label_47;
    }
    rax += rsi;
    rdi = 0x7a7a75427a7a6946;
    *(rax) = rdi;
    *((rax + 8)) = 0xa;
    goto label_0;
label_41:
    if (r12 <= 9) {
        goto label_48;
    }
    if (r12 <= 0x63) {
        goto label_49;
    }
    if (r12 <= 0x3e7) {
        goto label_50;
    }
    rdx = r12;
    esi = 1;
    rdi = 0x346dc5d63886594b;
    if (r12 > 0x270f) {
        goto label_51;
    }
    goto label_52;
    do {
        if (rcx <= 0xf423f) {
            goto label_53;
        }
        if (rcx <= 0x98967f) {
            goto label_54;
        }
        if (rcx <= 0x5f5e0ff) {
            goto label_55;
        }
label_51:
        rax = rdx;
        rcx = rdx;
        rdx:rax = rax * rdi;
        eax = esi;
        esi += 4;
        rdx >>= 0xb;
    } while (rcx > 0x1869f);
    edx = esi;
label_9:
    r15 = rsp + 0x70;
    *((rsp + 0x60)) = r15;
    if (rdx > 0xf) {
        goto label_56;
    }
    if (rdx != 0) {
        goto label_57;
    }
    *((rsp + 0x68)) = 0;
    *((rsp + 0x70)) = 0;
    rdi = r15;
    esi = 0xffffffff;
label_5:
    rcx = r12;
    r8 = 0x28f5c28f5c28f5c3;
    do {
        rdx = rcx;
        rdx >>= 2;
        rax = rdx;
        rdx:rax = rax * r8;
        rax = rcx;
        rdx >>= 2;
        r9 = rdx * 0x64;
        rax -= r9;
        r9 = rcx;
        rcx = rdx;
        edx = esi;
        rax += rax;
        r10d = *((rax + 0x405141));
        eax = *((rax + method.std::__detail.__to_chars_10_impl_unsigned_long__char__unsigned_int__unsigned_long_::__digits));
        *((rdi + rdx)) = r10b;
        edx = rsi - 1;
        esi -= 2;
        *((rdi + rdx)) = al;
    } while (r9 > 0x270f);
label_6:
    eax = rcx + 0x30;
    if (rcx > 9) {
        rcx += rcx;
        eax = *((rcx + 0x405141));
        *((rdi + 1)) = al;
        eax = *((rcx + method.std::__detail.__to_chars_10_impl_unsigned_long__char__unsigned_int__unsigned_long_::__digits));
    }
    *(rdi) = al;
    rax = std::string ::_M_replace_aux(unsigned long,unsigned long,unsigned long,char) (rsp + 0x60, *((rsp + 0x68)), 0, 1, 0xa);
    r9 = rsp + 0x50;
    *((rsp + 0x40)) = r9;
    rcx = *(rax);
    rdx = rax + 0x10;
    if (rcx == rdx) {
        goto label_58;
    }
    *((rsp + 0x40)) = rcx;
    rcx = *((rax + 0x10));
    *((rsp + 0x50)) = rcx;
label_7:
    rcx = *((rax + 8));
    *((rax + 0x10)) = 0;
    *((rsp + 0x48)) = rcx;
    *((rax + 8)) = 0;
    r8 = *((rsp + 0x48));
    rsi = *((rbx + 8));
    *(rax) = rdx;
    rcx = *((rsp + 0x40));
    rdi = *(rbx);
    r10 = r8 + rsi;
    if (*(rsp) == rdi) {
        goto label_59;
    }
    rax = *((rbx + 0x10));
label_14:
    if (r10 > rax) {
        goto label_60;
    }
    if (r8 != 0) {
        rdi += rsi;
        if (r8 == 1) {
            goto label_61;
        }
        *((rsp + 0x18)) = r10;
        memcpy (rdi, rcx, r8);
        r9 = rsp + 0x50;
        rdi = *(rbx);
        r10 = *((rsp + 0x18));
    }
label_4:
    *((rbx + 8)) = r10;
    *((rdi + r10)) = 0;
    rdi = *((rsp + 0x40));
    if (rdi != r9) {
        rax = *((rsp + 0x50));
        rsi = rax + 1;
        operatordelete(void*,unsigned long) ();
    }
    rdi = *((rsp + 0x60));
    if (rdi == r15) {
        goto label_1;
    }
    rax = *((rsp + 0x70));
    rsi = rax + 1;
    operatordelete(void*,unsigned long) ();
    goto label_1;
label_40:
    rsi = *((rbx + 8));
    rax = 0x7fffffffffffffff;
    rax -= rsi;
    if (rax <= 4) {
        goto label_42;
    }
    rax = *(rbx);
    r15 = rsi + 5;
    if (*(rsp) == rax) {
        goto label_62;
    }
    rdx = *((rbx + 0x10));
label_13:
    if (r15 > rdx) {
        goto label_63;
    }
    rax += rsi;
    *(rax) = 0x7a7a7542;
    *((rax + 4)) = 0xa;
    goto label_0;
label_45:
    r12++;
    voidstd::vector<_gnu_cxx::_normal_iterator<char*,std::string >,std::allocator<_gnu_cxx::_normal_iterator<char*,std::string >>>::_M_realloc_insert<_gnu_cxx::_normal_iterator<char*,std::string >>(_gnu_cxx::_normal_iterator<_gnu_cxx::_normal_iterator<char*,std::string >*,std::vector<_gnu_cxx::_normal_iterator<char*,std::string >,std::allocator<_gnu_cxx::_normal_iterator<char*,std::string >>>>,_gnu_cxx::_normal_iterator<char*,std::string >&&) (*((rsp + 0x10)), rsi, rsp + 0x60);
    if (r12 < rbp) {
        goto label_2;
    }
    goto label_3;
label_47:
    std::string ::_M_mutate(unsigned long,unsigned long,char const*,unsigned long) (rbx, rsi, 0, "FizzBuzz\n", 9);
    goto label_0;
label_44:
    std::string ::_M_mutate(unsigned long,unsigned long,char const*,unsigned long) (rbx, rsi, 0, "Fizz\n", 5);
    goto label_0;
label_63:
    std::string ::_M_mutate(unsigned long,unsigned long,char const*,unsigned long) (rbx, rsi, 0, 0x405088, 5);
    goto label_0;
label_60:
    *((rsp + 0x18)) = r10;
    std::string ::_M_mutate(unsigned long,unsigned long,char const*,unsigned long) (rbx, rsi, 0, rcx, r8);
    r9 = rsp + 0x50;
    rdi = *(rbx);
    r10 = *((rsp + 0x18));
    goto label_4;
label_56:
    rdi = rdx + 1;
    *((rsp + 0x18)) = rdx;
    rax = operatornew(unsigned long) ();
    rdi = rax;
    *((rsp + 0x60)) = rax;
    *((rsp + 0x70)) = rdx;
label_20:
    *((rsp + 0x18)) = rdx;
    memset (rdi, 0, *((rsp + 0x18)));
    rax = *((rsp + 0x60));
    rdx = *((rsp + 0x18));
label_18:
    *((rsp + 0x68)) = rdx;
    *((rax + rdx)) = 0;
    eax = *((rsp + 0x68));
    rdi = *((rsp + 0x60));
    rcx = r12;
    esi = rax - 1;
    if (r12 > 0x63) {
        goto label_5;
    }
    goto label_6;
label_58:
    __asm ("vmovdqu xmm2, xmmword [rax + 0x10]");
    __asm ("vmovdqa xmmword [rsp + 0x50], xmm2");
    goto label_7;
label_46:
    edx = 0xf;
    goto label_8;
label_53:
    edx = rax + 5;
    goto label_9;
label_54:
    edx = rax + 6;
    goto label_9;
label_55:
    edx = rax + 7;
    goto label_9;
label_31:
    rdi = r14 + 1;
    rax = operatornew(unsigned long) ();
    *((rsp + 0x30)) = r14;
    rdi = rax;
    *((rsp + 0x20)) = rax;
label_22:
    memset (rdi, 0, r14);
    rax = *((rsp + 0x20));
label_19:
    *((rsp + 0x28)) = r14;
    *((rax + r14)) = 0;
    eax = *((rsp + 0x28));
    rsi = *((rsp + 0x20));
    ecx = rax - 1;
    if (r13 > 0x63) {
        goto label_10;
    }
    goto label_11;
label_43:
    edx = 0xf;
    goto label_12;
label_62:
    edx = 0xf;
    goto label_13;
label_59:
    eax = 0xf;
    goto label_14;
label_28:
    r14d = rax + 5;
    goto label_15;
label_29:
    r14d = rax + 6;
    goto label_15;
label_30:
    r14d = rax + 7;
    goto label_15;
label_35:
    memcpy (r14, r15, rdx);
    goto label_16;
label_33:
    r13d = 0xf;
    goto label_17;
label_61:
    eax = *(rcx);
    *(rdi) = al;
    rdi = *(rbx);
    goto label_4;
label_57:
    if (rdx != 1) {
        goto label_64;
    }
    do {
        *((rsp + 0x70)) = 0;
        rax = r15;
        edx = 1;
        goto label_18;
label_34:
        eax = *(r15);
        *(r14) = al;
        goto label_16;
label_32:
        if (r14 != 1) {
            goto label_65;
        }
label_21:
        rax = *((rsp + 8));
        *((rsp + 0x30)) = 0;
        r14d = 1;
        goto label_19;
label_48:
        r15 = rsp + 0x70;
        *((rsp + 0x60)) = r15;
    } while (1);
label_49:
    r15 = rsp + 0x70;
    edx = 2;
    *((rsp + 0x60)) = r15;
    rdi = r15;
    goto label_20;
label_52:
    r15 = rsp + 0x70;
    edx = 4;
    *((rsp + 0x60)) = r15;
    rdi = r15;
    goto label_20;
label_50:
    r15 = rsp + 0x70;
    edx = 3;
    *((rsp + 0x60)) = r15;
    rdi = r15;
    goto label_20;
label_23:
    rax = rsp + 0x30;
    *((rsp + 8)) = rax;
    *((rsp + 0x20)) = rax;
    goto label_21;
label_24:
    rax = rsp + 0x30;
    r14d = 2;
    *((rsp + 0x20)) = rax;
    *((rsp + 8)) = rax;
    rdi = rax;
    goto label_22;
label_25:
    rax = rsp + 0x30;
    r14d = 3;
    *((rsp + 0x20)) = rax;
    *((rsp + 8)) = rax;
    rdi = rax;
    goto label_22;
label_27:
    rax = rsp + 0x30;
    r14d = 4;
    *((rsp + 0x20)) = rax;
    *((rsp + 8)) = rax;
    rdi = rax;
    goto label_22;
label_65:
    rdi = *((rsp + 8));
    goto label_22;
label_42:
    edi = "basic_string::append";
    std::_throw_length_error(char const*) ();
label_64:
    rdi = r15;
    goto label_20;
label_36:
    edi = "vector::reserve";
    std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x403b70 */
#include <stdint.h>
 
int64_t method_std::_cxx11_to_string_unsigned_long_ (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    /* std::__cxx11::to_string(unsigned long) */
    r12 = rdi;
    rdi += 0x10;
    rbx = rsi;
    if (rsi <= 9) {
        goto label_5;
    }
    if (rsi <= 0x63) {
        goto label_6;
    }
    if (rsi <= 0x3e7) {
        goto label_7;
    }
    rdx = rsi;
    r8 = 0x346dc5d63886594b;
    esi = 1;
    if (rbx > 0x270f) {
        goto label_8;
    }
    goto label_9;
    do {
        if (rcx <= 0xf423f) {
            goto label_10;
        }
        if (rcx <= 0x98967f) {
            goto label_11;
        }
        if (rcx <= 0x5f5e0ff) {
            goto label_12;
        }
label_8:
        rax = rdx;
        rcx = rdx;
        rdx:rax = rax * r8;
        eax = esi;
        esi += 4;
        rdx >>= 0xb;
    } while (rcx > 0x1869f);
label_2:
    *(r12) = rdi;
    if (rbp > 0xf) {
        goto label_13;
    }
    if (rbp != 0) {
        goto label_14;
    }
    *((r12 + 8)) = 0;
    *((r12 + 0x10)) = 0;
    rsi = rdi;
    ecx = 0xffffffff;
label_0:
    r8 = 0x28f5c28f5c28f5c3;
    do {
        rdx = rbx;
        rdx >>= 2;
        rax = rdx;
        rdx:rax = rax * r8;
        rax = rbx;
        rdx >>= 2;
        rdi = rdx * 0x64;
        rax -= rdi;
        rdi = rbx;
        rbx = rdx;
        edx = ecx;
        rax += rax;
        r9d = *((rax + 0x405141));
        eax = *((rax + method.std::__detail.__to_chars_10_impl_unsigned_long__char__unsigned_int__unsigned_long_::__digits));
        *((rsi + rdx)) = r9b;
        edx = rcx - 1;
        ecx -= 2;
        *((rsi + rdx)) = al;
    } while (rdi > 0x270f);
label_1:
    eax = rbx + 0x30;
    if (rbx > 9) {
        rbx += rbx;
        eax = *((rbx + 0x405141));
        *((rsi + 1)) = al;
        eax = *((rbx + method.std::__detail.__to_chars_10_impl_unsigned_long__char__unsigned_int__unsigned_long_::__digits));
    }
    *(rsi) = al;
    rax = r12;
    r12 = rbx;
    return rax;
label_13:
    rdi = rbp + 1;
    rax = operatornew(unsigned long) ();
    *((r12 + 0x10)) = rbp;
    rdi = rax;
    *(r12) = rax;
label_3:
    memset (rdi, 0, rbp);
    rax = *(r12);
label_4:
    *((r12 + 8)) = rbp;
    *((rax + rbp)) = 0;
    eax = *((r12 + 8));
    rsi = *(r12);
    ecx = rax - 1;
    if (rbx > 0x63) {
        goto label_0;
    }
    goto label_1;
label_10:
    ebp = rax + 5;
    goto label_2;
label_11:
    ebp = rax + 6;
    goto label_2;
label_12:
    ebp = rax + 7;
    goto label_2;
label_14:
    if (rbp != 1) {
        goto label_3;
    }
    do {
        rax = *(r12);
        *((r12 + 0x10)) = 0;
        goto label_4;
label_5:
        *(r12) = rdi;
    } while (1);
label_6:
    *(r12) = rdi;
    goto label_3;
label_9:
    *(r12) = rdi;
    goto label_3;
label_7:
    *(r12) = rdi;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x403f80 */
#include <stdint.h>
 
int64_t method_void_std::vector_std::unique_ptr_std::thread_std::default_delete_std::thread_std::allocator_std::unique_ptr_std::thread_std::default_delete_std::thread_::_M_realloc_insert_std::unique_ptr_std::thread_std::default_delete_std_thread_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_18h_2;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread> >, std::allocator<std::unique_ptr<std::thread, std::default_delete<std::thread> > > >::_M_realloc_insert<std::unique_ptr<std::thread, std::default_delete<std::thread> > >(__gnu_cxx::__normal_iterator<std::unique_ptr<std::thread, std::default_delete<std::thread> >*, std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread> >, std::allocator<std::unique_ptr<std::thread, std::default_delete<std::thread> > > > >, std::unique_ptr<std::thread, std::default_delete<std::thread> >&&) */
    rcx = 0xfffffffffffffff;
    r15 = *((rdi + 8));
    rbp = *(rdi);
    rax = r15;
    rax -= rbp;
    rax >>= 3;
    if (rax == rcx) {
        goto label_3;
    }
    ecx = 1;
    r13 = rsi;
    r14 = rdi;
    if (rax != 0) {
        rcx = rax;
    }
    rax += rcx;
    cl = (rax < 0) ? 1 : 0;
    rsi -= rbp;
    ecx = (int32_t) cl;
    if (rcx != 0) {
        goto label_4;
    }
    if (rax != 0) {
        goto label_5;
    }
    ecx = 8;
    ebx = 0;
    r12d = 0;
label_0:
    rax = *(rdx);
    *(rdx) = 0;
    *((r12 + rsi)) = rax;
    if (r13 == rbp) {
        goto label_6;
    }
    rcx = r13;
    rax = rbp + 8;
    rcx -= rbp;
    rdx = rcx - 8;
    if (r12 == rax) {
        goto label_7;
    }
    if (rdx <= 0x10) {
        goto label_7;
    }
    rdx >>= 3;
    eax = 0;
    rdx++;
    rsi = rdx;
    rsi >>= 1;
    rsi <<= 4;
    do {
        __asm ("vmovdqu xmm1, xmmword [rbp + rax]");
        __asm ("vmovdqu xmmword [r12 + rax], xmm1");
        rax += 0x10;
    } while (rsi != rax);
    rdi = rdx;
    rdi &= 0xfffffffffffffffe;
    rax = rdi*8;
    rsi = r12 + rax;
    rax += rbp;
    if (rdx != rdi) {
        rax = *(rax);
        *(rsi) = rax;
    }
label_1:
    rcx = r12 + rcx + 8;
label_6:
    if (r13 != r15) {
        r15 -= r13;
        rax = memcpy (rcx, r13, r15);
        rcx = rax;
        rcx += r15;
    }
    __asm ("vmovq xmm2, r12");
    __asm ("vpinsrq xmm0, xmm2, rcx, 1");
    if (rbp != 0) {
        rsi = *((r14 + 0x10));
        rdi = rbp;
        __asm ("vmovdqa xmmword [rsp], xmm0");
        rsi -= rbp;
        operatordelete(void*,unsigned long) ();
        __asm ("vmovdqa xmm0, xmmword [rsp]");
    }
    __asm ("vmovdqu xmmword [r14], xmm0");
    *((r14 + 0x10)) = rbx;
    return rax;
label_4:
    rbx = 0x7ffffffffffffff8;
label_2:
    rdi = rbx;
    *((rsp + 0x18)) = rdx;
    *(rsp) = rsi;
    rax = operatornew(unsigned long) ();
    rsi = *(rsp);
    rdx = *((rsp + 0x18));
    r12 = rax;
    rbx += rax;
    rcx = rax + 8;
    goto label_0;
label_7:
    rdi = r12 + rcx;
    rdx = rbp;
    rax = r12;
    do {
        rsi = *(rdx);
        rax += 8;
        rdx += 8;
        *((rax - 8)) = rsi;
    } while (rax != rdi);
    goto label_1;
label_5:
    rcx = 0xfffffffffffffff;
    if (rax > rcx) {
        rax = rcx;
    }
    rbx = rax*8;
    goto label_2;
label_3:
    edi = "vector::_M_realloc_insert";
    std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402210 */
#include <stdint.h>
 
int32_t main (void) {
    uint32_t var_18h;
    int64_t var_1ch;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    uint32_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t var_60h;
    /* [14] -r-x section size 9253 named .text */
    r15d = 0x3e8;
    r13 = 0x8888888888888889;
    ebx = 4;
    eax = get_nprocs ();
    *((rsp + 0x18)) = eax;
    rbp = (int64_t) eax;
    do {
        eax = 0;
        r12 = r15 * 3;
        snprintf (0, 0, 0x405094, r15);
        rax = (int64_t) eax;
        rcx = rax*8 + 0x27;
        rax = rcx;
        rax *= r12;
        rdx:rax = rax * r13;
        rax = rdx;
        edx = 0;
        rax >>= 3;
        rax = rdx:rax / rbp;
        rdx = rdx:rax % rbp;
        if (rax > 0x10000) {
            goto label_14;
        }
        r12 += r12;
        rax = rcx;
        rax *= r12;
        rdx:rax = rax * r13;
        rax = rdx;
        edx = 0;
        rax >>= 3;
        rax = rdx:rax / rbp;
        rdx = rdx:rax % rbp;
        if (rax > 0x10000) {
            goto label_14;
        }
        r12 = r15 * 9;
        rcx *= r12;
        rax = rcx;
        rdx:rax = rax * r13;
        rax = rdx;
        edx = 0;
        rax >>= 3;
        rax = rdx:rax / rbp;
        rdx = rdx:rax % rbp;
        if (rax > 0x10000) {
            goto label_14;
        }
        r15 *= 5;
        r15 += r15;
        ebx--;
    } while (ebx != 0);
    r12d = 0x895440;
label_14:
    std::to_string(unsigned long) (rsp + 0x50, r12);
    rax = *((rsp + 0x58));
    rdi = *((rsp + 0x50));
    *(rsp) = rax;
    rax = rsp + 0x60;
    if (rdi != rax) {
        rax = *((rsp + 0x60));
        rsi = rax + 1;
        rax = operatordelete(void*,unsigned long) ();
    }
    r13d = 1;
    r14 = 0x346dc5d63886594b;
    ecx = r13d;
    r15d = r13d;
    if (r13 <= 9) {
        goto label_15;
    }
label_0:
    if (r13d <= 0x63) {
        goto label_16;
    }
    if (r13d <= 0x3e7) {
        goto label_17;
    }
    if (r13d <= 0x270f) {
        goto label_18;
    }
    rdx = r13;
    ebx = 1;
    while (rsi > 0x1869f) {
        if (edx <= 0x63) {
            goto label_19;
        }
        if (edx <= 0x3e7) {
            goto label_20;
        }
        if (edx <= 0x270f) {
            goto label_21;
        }
        rax = rdx;
        rsi = rdx;
        rdx:rax = rax * r14;
        eax = ebx;
        ebx += 4;
        rdx >>= 0xb;
    }
    esi = ebx;
    ebx = rax + 3;
label_3:
    rax = rsp + 0x60;
    edx = esi;
    *((rsp + 0x50)) = rax;
    if (esi > 0xf) {
        goto label_22;
    }
    rax = rsp + 0x60;
    if (rdx != 0) {
        goto label_23;
    }
label_1:
    *((rsp + 0x58)) = rdx;
    *((rax + rdx)) = 0;
    rsi = *((rsp + 0x50));
    if (r13 <= 0x63) {
        goto label_24;
    }
    do {
        edx = ecx;
        eax = ecx;
        rdx *= 0x51eb851f;
        rdx >>= 0x25;
        edi = edx * 0x64;
        eax -= edi;
        edi = ecx;
        ecx = edx;
        edx = ebx;
        eax += eax;
        r11d = rax + 1;
        eax = *((rax + method.std::__detail.__to_chars_10_impl_unsigned_int__char__unsigned_int__unsigned_int_::__digits));
        r11d = *((r11 + method.std::__detail.__to_chars_10_impl_unsigned_int__char__unsigned_int__unsigned_int_::__digits));
        *((rsi + rdx)) = r11b;
        edx = rbx - 1;
        ebx -= 2;
        *((rsi + rdx)) = al;
    } while (edi > 0x270f);
label_24:
    eax = rcx + 0x30;
    if (ecx > 9) {
        ecx += ecx;
        eax = rcx + 1;
        eax = *((rax + method.std::__detail.__to_chars_10_impl_unsigned_int__char__unsigned_int__unsigned_int_::__digits));
        *((rsi + 1)) = al;
        eax = *((rcx + method.std::__detail.__to_chars_10_impl_unsigned_int__char__unsigned_int__unsigned_int_::__digits));
    }
    *(rsi) = al;
    rdi = *((rsp + 0x50));
    rax = rsp + 0x60;
    rbx = *((rsp + 0x58));
    if (rdi != rax) {
        rax = *((rsp + 0x60));
        rsi = rax + 1;
        eax = operatordelete(void*,unsigned long) ();
    }
    if (*(rsp) < rbx) {
        goto label_25;
    }
    eax = r15d * 0xeeeeeeef;
    if (eax <= 0x11111111) {
        goto label_26;
    }
    eax = r15d * 0xcccccccd;
    if (eax <= 0x33333333) {
        goto label_27;
    }
    eax = r15d * 0xaaaaaaab;
    if (eax > 0x55555555) {
        goto label_28;
    }
    edx = 5;
    esi = "Fizz\n";
    edi = std::cout;
    std::string &std::_ostream_insert<char,std::char_traits<char>>(std::string &,char const*,long) ();
label_2:
    r13++;
    ecx = r13d;
    r15d = r13d;
    if (r13 > 9) {
        goto label_0;
    }
label_15:
    rax = rsp + 0x60;
    ebx = 0;
    *((rsp + 0x50)) = rax;
    goto label_29;
label_22:
    rdi = rdx + 1;
    *((rsp + 0x1c)) = ecx;
    *((rsp + 0x10)) = rdx;
    rax = operatornew(unsigned long) ();
    ecx = *((rsp + 0x1c));
    rdi = rax;
    *((rsp + 0x50)) = rax;
    *((rsp + 0x60)) = rdx;
label_13:
    *((rsp + 0x1c)) = ecx;
    *((rsp + 0x10)) = rdx;
    memset (rdi, 0x2d, *((rsp + 0x10)));
    rax = *((rsp + 0x50));
    ecx = *((rsp + 0x1c));
    rdx = *((rsp + 0x10));
    goto label_1;
label_26:
    edx = 9;
    esi = "FizzBuzz\n";
    edi = std::cout;
    rax = std::string &std::_ostream_insert<char,std::char_traits<char>>(std::string &,char const*,long) ();
    goto label_2;
label_16:
    ebx = 1;
label_19:
    esi = rbx + 1;
    goto label_3;
label_17:
    ebx = 1;
label_20:
    esi = rbx + 2;
    ebx++;
    goto label_3;
label_18:
    ebx = 1;
label_21:
    esi = rbx + 3;
    ebx += 2;
    goto label_3;
label_28:
    esi = r15d;
    edi = std::cout;
    rax = std::ostream::operator << (int) ();
    edx = 1;
    rsi = rsp + 0x50;
    *((rsp + 0x50)) = 0xa;
    rdi = rax;
    std::string &std::_ostream_insert<char,std::char_traits<char>>(std::string &,char const*,long) ();
    goto label_2;
label_27:
    edx = 5;
    esi = 0x405088;
    edi = std::cout;
    std::string &std::_ostream_insert<char,std::char_traits<char>>(std::string &,char const*,long) ();
    goto label_2;
label_23:
    if (rdx != 1) {
        goto label_30;
    }
label_29:
    rax = *((rsp + 0x50));
    *((rsp + 0x60)) = 0x2d;
    edx = 1;
    goto label_1;
label_25:
    edi = std::cout;
    std::ostream::flush() ();
    rax = rbp;
    __asm ("vpxor xmm0, xmm0, xmm0");
    *((rsp + 0x40)) = 0;
    rax >>= 0x3c;
    __asm ("vmovdqa xmmword [rsp + 0x30], xmm0");
    if (rax != 0) {
        goto label_31;
    }
    if (rbp == 0) {
        goto label_32;
    }
    r13 = rbp*8;
    rdi = r13;
    rax = operatornew(unsigned long) ();
    rcx = *((rsp + 0x38));
    rdi = *((rsp + 0x30));
    __asm ("vmovq xmm3, rax");
    rbx = rax;
    __asm ("vpunpcklqdq xmm0, xmm3, xmm3");
    if (rcx == rdi) {
        goto label_33;
    }
    rdx = rcx - 8;
    rax = rdi + 8;
    rdx -= rdi;
    if (rbx == rax) {
        goto label_34;
    }
    if (rdx <= 0x10) {
        goto label_34;
    }
    rdx >>= 3;
    eax = 0;
    rdx++;
    rcx = rdx;
    rcx >>= 1;
    rcx <<= 4;
    do {
        __asm ("vmovdqu xmm1, xmmword [rdi + rax]");
        __asm ("vmovdqu xmmword [rbx + rax], xmm1");
        rax += 0x10;
    } while (rax != rcx);
    rsi = rdx;
    rsi &= 0xfffffffffffffffe;
    rax = rsi*8;
    rcx = rbx + rax;
    rax += rdi;
    if (rsi != rdx) {
        rax = *(rax);
        *(rcx) = rax;
    }
label_10:
    rsi = *((rsp + 0x40));
    __asm ("vmovdqa xmmword [rsp], xmm0");
    rsi -= rdi;
    operatordelete(void*,unsigned long) ();
    __asm ("vmovdqa xmm0, xmmword [rsp]");
label_9:
    rbx += r13;
    __asm ("vmovdqa xmmword [rsp + 0x30], xmm0");
    *((rsp + 0x40)) = rbx;
    if (*((rsp + 0x18)) <= 0) {
        goto label_35;
    }
    rax = (int64_t) r15d;
    ebx = 0;
    r13d = 0;
    *((rsp + 0x10)) = rax;
    while (rsi != *((rsp + 0x40))) {
        *(rsi) = r14;
        rsi += 8;
        *((rsp + 0x38)) = rsi;
label_4:
        if (r13d == *((rsp + 0x18))) {
            goto label_35;
        }
label_5:
        rax = rbx;
        edx = 0;
        rbx += r12;
        rax = rdx:rax / rbp;
        rdx = rdx:rax % rbp;
        edx = 0;
        edi = 0xc0;
        r13d++;
        r15 = rax;
        rax = rbx;
        rax = rdx:rax / rbp;
        rdx = rdx:rax % rbp;
        rax -= r15;
        r15 += *((rsp + 0x10));
        *(rsp) = rax;
        rax = operatornew(unsigned long) ();
        r14 = rax;
        worker::worker(unsigned long,unsigned long,unsigned long) (rax, r15, *(rsp), r12);
        rsi = *((rsp + 0x38));
        *((rsp + 0x50)) = r14;
    }
    voidstd::vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>::_M_realloc_insert<std::unique_ptr<worker,std::default_delete<worker>>>(_gnu_cxx::_normal_iterator<std::unique_ptr<worker,std::default_delete<worker>>*,std::vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>>,std::unique_ptr<worker,std::default_delete<worker>>&&) (rsp + 0x30, rsi, rsp + 0x50);
    r14 = *((rsp + 0x50));
    if (r14 == 0) {
        goto label_4;
    }
    rdi = r14 + 0x68;
    std::condition_variable::~condition_variable() ();
    rdi = *((r14 + 0x20));
    if (rdi != 0) {
        rsi = *((r14 + 0x30));
        rsi -= rdi;
        operatordelete(void*,unsigned long) ();
    }
    rdi = *(r14);
    rax = r14 + 0x10;
    if (rdi != rax) {
        rax = *((r14 + 0x10));
        rsi = rax + 1;
        operatordelete(void*,unsigned long) ();
    }
    esi = 0xc0;
    rdi = r14;
    operatordelete(void*,unsigned long) ();
    if (r13d != *((rsp + 0x18))) {
        goto label_5;
    }
label_35:
    rax = *((rsp + 0x30));
    rdx = *((rsp + 0x38));
    rcx = *(rax);
    rdx = *((rdx - 8));
    *((rdx + 0xb8)) = rcx;
    if (*((rsp + 0x18)) <= 1) {
        goto label_8;
    }
    ecx = *((rsp + 0x18));
    edx = rcx - 2;
    rsi = rax + rdx*8 + 8;
    do {
        rcx = *((rax + 8));
        rdx = *(rax);
        rax += 8;
        *((rdx + 0xb8)) = rcx;
    } while (rax != rsi);
label_8:
    __asm ("vpxor xmm0, xmm0, xmm0");
    *((rsp + 0x60)) = 0;
    __asm ("vmovdqa xmmword [rsp + 0x50], xmm0");
    if (rbp == 0) {
        goto label_36;
    }
    rbp <<= 3;
    rdi = rbp;
    rax = operatornew(unsigned long) ();
    rcx = *((rsp + 0x58));
    rdi = *((rsp + 0x50));
    __asm ("vmovq xmm4, rax");
    rbx = rax;
    __asm ("vpunpcklqdq xmm0, xmm4, xmm4");
    if (rcx == rdi) {
        goto label_37;
    }
    rdx = rcx - 8;
    rax = rdi + 8;
    rdx -= rdi;
    if (rbx == rax) {
        goto label_38;
    }
    if (rdx <= 0x10) {
        goto label_38;
    }
    rdx >>= 3;
    eax = 0;
    rdx++;
    rcx = rdx;
    rcx >>= 1;
    rcx <<= 4;
    do {
        __asm ("vmovdqu xmm2, xmmword [rdi + rax]");
        __asm ("vmovdqu xmmword [rbx + rax], xmm2");
        rax += 0x10;
    } while (rcx != rax);
    rsi = rdx;
    rsi &= 0xfffffffffffffffe;
    rax = rsi*8;
    rcx = rbx + rax;
    rax += rdi;
    if (rsi != rdx) {
        rax = *(rax);
        *(rcx) = rax;
    }
label_12:
    rsi = *((rsp + 0x60));
    __asm ("vmovdqa xmmword [rsp], xmm0");
    rsi -= rdi;
    operatordelete(void*,unsigned long) ();
    __asm ("vmovdqa xmm0, xmmword [rsp]");
label_11:
    rbx += rbp;
    __asm ("vmovdqa xmmword [rsp + 0x50], xmm0");
    *((rsp + 0x60)) = rbx;
label_36:
    r12 = *((rsp + 0x38));
    rbp = *((rsp + 0x30));
    if (r12 != rbp) {
        goto label_7;
    }
    goto label_39;
    do {
        *(rsi) = rbx;
        rsi += 8;
        *((rsp + 0x58)) = rsi;
label_6:
        rbp += 8;
        if (r12 == rbp) {
            goto label_39;
        }
label_7:
        r13 = *(rbp);
        edi = 8;
        operatornew(unsigned long) ();
        edi = 0x10;
        *(rax) = 0;
        rbx = rax;
        operatornew(unsigned long) ();
        rdi = rbx;
        edx = imp.pthread_create;
        rsi = rsp + 0x28;
        *(rax) = method.std::thread::_State_impl_std::thread::_Invoker_std::tuple_main.lambda_worker_1__worker_____::_State_impl__;
        *((rax + 8)) = r13;
        *((rsp + 0x28)) = rax;
        std::thread::_M_start_thread(std::unique_ptr<std::thread::_State,std::default_delete<std::thread::_State>>,void(*)()) ();
        rdi = *((rsp + 0x28));
        if (rdi != 0) {
            rax = *(rdi);
            uint64_t (*rax + 8)() ();
        }
        rsi = *((rsp + 0x58));
        *((rsp + 0x28)) = rbx;
    } while (rsi != *((rsp + 0x60)));
    voidstd::vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>::_M_realloc_insert<std::unique_ptr<std::thread,std::default_delete<std::thread>>>(_gnu_cxx::_normal_iterator<std::unique_ptr<std::thread,std::default_delete<std::thread>>*,std::vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>>,std::unique_ptr<std::thread,std::default_delete<std::thread>>&&) (rsp + 0x50, rsi, rsp + 0x28);
    rdi = *((rsp + 0x28));
    if (rdi == 0) {
        goto label_6;
    }
    if (*(rdi) != 0) {
        goto label_40;
    }
    esi = 8;
    rbp += 8;
    operatordelete(void*,unsigned long) ();
    if (r12 != rbp) {
        goto label_7;
    }
label_39:
    rbx = *((rsp + 0x30));
    rax = *(rbx);
    r12 = rax + 0x40;
    if (rbp != 0) {
        rdi = r12;
        eax = pthread_mutex_lock ();
        if (eax != 0) {
            goto label_41;
        }
        rax = *(rbx);
    }
    rdx = *(rax);
    *((rax + 0xa0)) = 0;
    *((rax + 0x98)) = rdx;
    if (rbp != 0) {
        rdi = r12;
        pthread_mutex_unlock ();
    }
    rdi = *(rbx);
    rdi += 0x68;
    std::condition_variable::notify_one() ();
    rax = *((rsp + 0x50));
    rdi = *(rax);
    std::thread::join() ();
    rbp = *((rsp + 0x58));
    rbx = *((rsp + 0x50));
    if (rbp == rbx) {
        goto label_42;
    }
    do {
        rdi = *(rbx);
        if (rdi != 0) {
            if (*(rdi) != 0) {
                goto label_40;
            }
            esi = 8;
            operatordelete(void*,unsigned long) ();
        }
        rbx += 8;
    } while (rbp != rbx);
label_42:
    rdi = *((rsp + 0x50));
    if (rdi != 0) {
        rsi = *((rsp + 0x60));
        rsi -= rdi;
        operatordelete(void*,unsigned long) ();
    }
    r12 = *((rsp + 0x38));
    rbx = *((rsp + 0x30));
    if (r12 == rbx) {
        goto label_43;
    }
    do {
        rbp = *(rbx);
        if (rbp != 0) {
            rdi = rbp + 0x68;
            std::condition_variable::~condition_variable() ();
            rdi = *((rbp + 0x20));
            if (rdi != 0) {
                rsi = *((rbp + 0x30));
                rsi -= rdi;
                operatordelete(void*,unsigned long) ();
            }
            rdi = *(rbp);
            rax = rbp + 0x10;
            if (rdi != rax) {
                rax = *((rbp + 0x10));
                rsi = rax + 1;
                operatordelete(void*,unsigned long) ();
            }
            esi = 0xc0;
            rdi = rbp;
            operatordelete(void*,unsigned long) ();
        }
        rbx += 8;
    } while (r12 != rbx);
label_43:
    rdi = *((rsp + 0x30));
    if (rdi != 0) {
        rsi = *((rsp + 0x40));
        rsi -= rdi;
        eax = operatordelete(void*,unsigned long) ();
    }
    eax = 0;
    return rax;
label_32:
    rax = *((rsp + 0x30));
    rdx = *(rax);
    rax = *((rsp + 0x38));
    rax = *((rax - 8));
    *((rax + 0xb8)) = rdx;
    goto label_8;
label_34:
    rax = rdi;
    rdx = rbx;
    do {
        rsi = *(rax);
        rax += 8;
        rdx += 8;
        *((rdx - 8)) = rsi;
    } while (rcx != rax);
label_33:
    if (rdi == 0) {
        goto label_9;
    }
    goto label_10;
label_38:
    rax = rdi;
    rdx = rbx;
    do {
        rsi = *(rax);
        rax += 8;
        rdx += 8;
        *((rdx - 8)) = rsi;
    } while (rcx != rax);
label_37:
    if (rdi == 0) {
        goto label_11;
    }
    goto label_12;
label_30:
    rdi = rsp + 0x60;
    goto label_13;
label_31:
    edi = "vector::reserve";
    std::_throw_length_error(char const*) ();
label_40:
    eax = std::terminate() ();
label_41:
    edi = eax;
    std::_throw_system_error(int) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x403d90 */
#include <stdint.h>
 
int64_t method_void_std::vector_std::unique_ptr_worker_std::default_delete_worker_std::allocator_std::unique_ptr_worker_std::default_delete_worker_::_M_realloc_insert_std::unique_ptr_worker_std_default_delete_worker_gnu_cxx::_normal_iterator_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::vector<std::unique_ptr<worker, std::default_delete<worker> >, std::allocator<std::unique_ptr<worker, std::default_delete<worker> > > >::_M_realloc_insert<std::unique_ptr<worker, std::default_delete<worker> > >(__gnu_cxx::__normal_iterator<std::unique_ptr<worker, std::default_delete<worker> >*, std::vector<std::unique_ptr<worker, std::default_delete<worker> >, std::allocator<std::unique_ptr<worker, std::default_delete<worker> > > > >, std::unique_ptr<worker, std::default_delete<worker> >&&) */
    rax = 0xfffffffffffffff;
    r15 = *((rdi + 8));
    rbp = *(rdi);
    rcx = r15;
    rcx -= rbp;
    rcx >>= 3;
    if (rcx == rax) {
        goto label_3;
    }
    eax = 1;
    r13 = rsi;
    rsi = rdx;
    if (rcx != 0) {
        rax = rcx;
    }
    edx = 0;
    r8 = r13;
    r14 = rdi;
    rax += rcx;
    dl = (rax < 0) ? 1 : 0;
    r8 -= rbp;
    if (rdx != 0) {
        goto label_4;
    }
    if (rax != 0) {
        goto label_5;
    }
    ecx = 8;
    r12d = 0;
    ebx = 0;
label_0:
    rax = *(rsi);
    *(rsi) = 0;
    *((rbx + r8)) = rax;
    if (r13 == rbp) {
        goto label_6;
    }
    rcx = r13;
    rax = rbp + 8;
    rcx -= rbp;
    rdx = rcx - 8;
    if (rbx == rax) {
        goto label_7;
    }
    if (rdx <= 0x10) {
        goto label_7;
    }
    rdx >>= 3;
    eax = 0;
    rdx++;
    rsi = rdx;
    rsi >>= 1;
    rsi <<= 4;
    do {
        __asm ("vmovdqu xmm1, xmmword [rbp + rax]");
        __asm ("vmovdqu xmmword [rbx + rax], xmm1");
        rax += 0x10;
    } while (rsi != rax);
    rdi = rdx;
    rdi &= 0xfffffffffffffffe;
    rax = rdi*8;
    rsi = rbx + rax;
    rax += rbp;
    if (rdx != rdi) {
        rax = *(rax);
        *(rsi) = rax;
    }
label_1:
    rcx = rbx + rcx + 8;
label_6:
    if (r13 != r15) {
        r15 -= r13;
        rax = memcpy (rcx, r13, r15);
        rcx = rax;
        rcx += r15;
    }
    __asm ("vmovq xmm2, rbx");
    __asm ("vpinsrq xmm0, xmm2, rcx, 1");
    if (rbp != 0) {
        rsi = *((r14 + 0x10));
        rdi = rbp;
        __asm ("vmovdqa xmmword [rsp], xmm0");
        rsi -= rbp;
        operatordelete(void*,unsigned long) ();
        __asm ("vmovdqa xmm0, xmmword [rsp]");
    }
    __asm ("vmovdqu xmmword [r14], xmm0");
    *((r14 + 0x10)) = r12;
    return rax;
label_4:
    r12 = 0x7ffffffffffffff8;
label_2:
    rdi = r12;
    *((rsp + 0x18)) = rsi;
    *(rsp) = r8;
    rax = operatornew(unsigned long) ();
    r8 = *(rsp);
    rsi = *((rsp + 0x18));
    rbx = rax;
    r12 += rax;
    rcx = rax + 8;
    goto label_0;
label_7:
    rdi = rbx + rcx;
    rdx = rbp;
    rax = rbx;
    do {
        rsi = *(rdx);
        rax += 8;
        rdx += 8;
        *((rax - 8)) = rsi;
    } while (rax != rdi);
    goto label_1;
label_5:
    rdx = 0xfffffffffffffff;
    if (rax > rdx) {
        rax = rdx;
    }
    r12 = rax*8;
    goto label_2;
label_3:
    edi = "vector::_M_realloc_insert";
    std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402cf0 */
#include <stdint.h>
 
uint64_t method_worker_loop_ (int64_t arg1) {
    int64_t var_10h_2;
    int64_t var_8h;
    int64_t var_10h;
    uint32_t var_18h;
    rdi = arg1;
    /* worker::loop() */
    r13 = rdi;
    r12 = rdi + 0x40;
    rbx = rdi + 0x68;
label_0:
    *((rsp + 0x10)) = r12;
    *((rsp + 0x18)) = 0;
    if (rbp != 0) {
        rdi = r12;
        eax = pthread_mutex_lock ();
        if (eax != 0) {
            goto label_8;
        }
    }
    *((rsp + 0x18)) = 1;
    r14 = rsp + 0x10;
    if (*((r13 + 0x98)) != 0) {
        goto label_9;
    }
    do {
        rsi = r14;
        rdi = rbx;
        std::condition_variable::wait(std::unique_lock<std::mutex>&) ();
    } while (*((r13 + 0x98)) == 0);
label_9:
    eax = 0x10000;
    rax -= *((r13 + 0xa0));
    rsi = r13 + 0x98;
    edx = 2;
    edi = 1;
    *((r13 + 0xb0)) = rax;
    writev ();
    *((r13 + 0x98)) = 0;
    if (*((rsp + 0x18)) != 0) {
        goto label_10;
    }
label_5:
    rdi = rbx;
    std::condition_variable::notify_one() ();
    rax = *(r13);
    r14 = *((r13 + 0xb0));
    r14 += rax;
    rax += *((r13 + 8));
    rdx = r14 + 0x10000;
    if (rdx < rax) {
        goto label_11;
    }
label_3:
    rdx = *((r13 + 0xb8));
    r15 = rdx + 0x40;
    if (rbp != 0) {
        rdi = r15;
        eax = pthread_mutex_lock ();
        if (eax != 0) {
            goto label_8;
        }
        rax = *((r13 + 8));
        rax += *(r13);
        rdx = *((r13 + 0xb8));
    }
    rax -= r14;
    *((rdx + 0x98)) = r14;
    *((rdx + 0xa0)) = rax;
    if (rbp != 0) {
        rdi = r15;
        pthread_mutex_unlock ();
    }
    rax = *((r13 + 0xb8));
    rdi = rax + 0x68;
    std::condition_variable::notify_one() ();
    rax = *((r13 + 0xb8));
    *((rsp + 0x18)) = 0;
    rdi = rax + 0x40;
    *((rsp + 0x10)) = rdi;
    if (rbp != 0) {
        eax = pthread_mutex_lock ();
        if (eax != 0) {
            goto label_8;
        }
        rax = *((r13 + 0xb8));
    }
    *((rsp + 0x18)) = 1;
    r15 = rax + 0x68;
    r14 = rsp + 0x10;
    if (*((rax + 0x98)) == 0) {
        goto label_12;
    }
    do {
        rsi = r14;
        rdi = r15;
        std::condition_variable::wait(std::unique_lock<std::mutex>&) ();
        rax = *((r13 + 0xb8));
    } while (*((rax + 0x98)) != 0);
    if (*((rsp + 0x18)) != 0) {
        goto label_12;
    }
label_6:
    rdi = *((r13 + 0x28));
    rcx = *((r13 + 0x20));
    esi = 0;
    if (rdi == rcx) {
        goto label_0;
    }
label_1:
    rdx = *(rcx);
    if (*((rdx - 2)) == 0x7a) {
        goto label_13;
    }
    rax = *((r13 + 0x38));
    rdx -= rax;
    eax = *((r13 + 0x3c));
    al += *(rdx);
    *(rdx) = al;
    if (al <= 0x39) {
        goto label_14;
    }
    do {
        rdx--;
        eax -= 0xa;
        *((rdx + 1)) = al;
        eax = *(rdx);
        eax++;
        *(rdx) = al;
    } while (al > 0x39);
label_14:
    al = (al == 0xb) ? 1 : 0;
    eax = (int32_t) al;
    esi += eax;
label_13:
    rcx += 8;
    if (rdi != rcx) {
        goto label_1;
    }
    if (esi == 0) {
        goto label_0;
    }
    r9 = *((r13 + 8));
    ecx = esi;
    edx = 0;
    r14 = *((r13 + 0x28));
    rax = rcx;
    r15 = *(r13);
    rax += r9;
    dl = (rax < 0) ? 1 : 0;
    if (rax > r9) {
        goto label_15;
    }
    rcx = r15 + r9;
    if (rdx != 0) {
        *((r13 + 8)) = rax;
        *((r15 + rax)) = 0;
        rcx = *((r13 + 8));
        rcx += *(r13);
    }
label_7:
    rdx = rcx - 1;
    rax = r15 + r9 - 1;
    if (rax >= rdx) {
        goto label_0;
    }
label_2:
    esi = *(rax);
    if (sil == 0xb) {
        *(rax) = 0xa;
        *((rcx - 1)) = 0x31;
        esi = *(rax);
        rdx = rcx - 2;
    }
    if (sil == 0xa) {
        goto label_16;
    }
    *(rdx) = sil;
    rax--;
    rsi = rdx - 1;
    if (rsi <= rax) {
        goto label_0;
    }
    rcx = rdx;
    rdx = rsi;
    goto label_2;
label_11:
    r15 = rdx;
label_4:
    r14 = r15;
    write (1, r15 - 0x10000, 0x10000);
    rax = *((r13 + 8));
    r15 += 0x10000;
    rax += *(r13);
    if (rax <= r15) {
        goto label_3;
    }
    goto label_4;
label_10:
    rdi = *((rsp + 0x10));
    if (rdi == 0) {
        goto label_5;
    }
    if (rbp == 0) {
        goto label_5;
    }
    pthread_mutex_unlock ();
    goto label_5;
label_12:
    rdi = *((rsp + 0x10));
    if (rdi == 0) {
        goto label_6;
    }
    if (rbp == 0) {
        goto label_6;
    }
    pthread_mutex_unlock ();
    goto label_6;
label_15:
    rsi = r9;
    *((rsp + 8)) = r9;
    rax = std::string ::_M_replace_aux(unsigned long,unsigned long,unsigned long,char) (r13, rsi, 0, rcx, 0);
    rcx = *((r13 + 8));
    r9 = *((rsp + 8));
    rcx += *(r13);
    goto label_7;
label_16:
    rsi = rdx + 1;
    rax--;
    rcx = r14 - 8;
    *(r14) = rsi;
    esi = *((rax + 1));
    *(rdx) = sil;
    rsi = rdx - 1;
    if (rsi <= rax) {
        goto label_0;
    }
    r14 = rcx;
    rcx = rdx;
    rdx = rsi;
    goto label_2;
label_8:
    edi = eax;
    std::_throw_system_error(int) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x404638 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402c00 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402000 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4045c0 */
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
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x404170 */
#include <stdint.h>
 
int64_t method_void_std::vector_gnu_cxx::_normal_iterator_char_std::_cxx11::basic_string_char_std::char_traits_char_std::allocator_char_std::allocator_gnu_cxx::_normal_iterator_char_std::_cxx11::basic_string_char_std::char_traits_char_std_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >::_M_realloc_insert<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >(__gnu_cxx::__normal_iterator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >*, std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > >, __gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&&) */
    rcx = 0xfffffffffffffff;
    r15 = *((rdi + 8));
    r12 = *(rdi);
    rax = r15;
    rax -= r12;
    rax >>= 3;
    if (rax == rcx) {
        goto label_1;
    }
    ecx = 1;
    r13 = rdi;
    if (rax != 0) {
        rcx = rax;
    }
    rax += rcx;
    cl = (rax < 0) ? 1 : 0;
    rsi -= r12;
    ecx = (int32_t) cl;
    if (rcx != 0) {
        goto label_2;
    }
    if (rax != 0) {
        goto label_3;
    }
    ecx = 8;
    ebx = 0;
    r14d = 0;
label_0:
    rax = *(rdx);
    *((r14 + rsi)) = rax;
    if (rbp == r12) {
        goto label_4;
    }
    rcx = rbp;
    rax = r14;
    rdx = r12;
    rcx -= r12;
    rcx += r14;
    do {
        rsi = *(rdx);
        rax += 8;
        rdx += 8;
        *((rax - 8)) = rsi;
    } while (rcx != rax);
    rcx += 8;
label_4:
    if (rbp != r15) {
        r15 -= rbp;
        rax = memcpy (rcx, rbp, r15);
        rcx = rax;
        rcx += r15;
    }
    __asm ("vmovq xmm1, r14");
    __asm ("vpinsrq xmm0, xmm1, rcx, 1");
    if (r12 != 0) {
        rsi = *((r13 + 0x10));
        rdi = r12;
        __asm ("vmovdqa xmmword [rsp], xmm0");
        rsi -= r12;
        operatordelete(void*,unsigned long) ();
        __asm ("vmovdqa xmm0, xmmword [rsp]");
    }
    __asm ("vmovdqu xmmword [r13], xmm0");
    *((r13 + 0x10)) = rbx;
    return rax;
label_2:
    rbx = 0x7ffffffffffffff8;
    do {
        rdi = rbx;
        *((rsp + 0x18)) = rdx;
        *(rsp) = rsi;
        rax = operatornew(unsigned long) ();
        rsi = *(rsp);
        rdx = *((rsp + 0x18));
        r14 = rax;
        rbx += rax;
        rcx = rax + 8;
        goto label_0;
label_3:
        rcx = 0xfffffffffffffff;
        if (rax > rcx) {
            rax = rcx;
        }
        rbx = rax*8;
    } while (1);
label_1:
    edi = "vector::_M_realloc_insert";
    std::_throw_length_error(char const*) ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x404630 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402030 */
#include <stdint.h>
 
void get_nprocs (void) {
    get_nprocs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402040 */
#include <stdint.h>
 
void std::terminate_ (void) {
    /* std::terminate() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402050 */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402060 */
#include <stdint.h>
 
void std::_throw_bad_alloc_ (void) {
    /* std::__throw_bad_alloc() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402080 */
#include <stdint.h>
 
void std::condition_variable::notify_one_ (void) {
    /* std::condition_variable::notify_one() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402090 */
#include <stdint.h>
 
void std::_throw_length_error_char_const_ (void) {
    /* std::__throw_length_error(char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4020a0 */
#include <stdint.h>
 
void writev (void) {
    writev ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4020b0 */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4020d0 */
#include <stdint.h>
 
void std::_throw_system_error_int_ (void) {
    /* std::__throw_system_error(int) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4020e0 */
#include <stdint.h>
 
void std::ostream::flush_ (void) {
    /* std::ostream::flush() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4020f0 */
#include <stdint.h>
 
void pthread_mutex_unlock (void) {
    pthread_mutex_unlock ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402100 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402110 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402120 */
#include <stdint.h>
 
void std::thread::_M_start_thread_std::unique_ptr_std::thread::_State_std::default_delete_std::thread::_State_void_ (void) {
    /* std::thread::_M_start_thread(std::unique_ptr<std::thread::_State, std::default_delete<std::thread::_State> >, void (*)()) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402130 */
#include <stdint.h>
 
void operator_new_unsigned_long_ (void) {
    /* operator new(unsigned long) */
    operator_new_unsigned_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402140 */
#include <stdint.h>
 
void operator_delete_void_unsigned_long_ (void) {
    /* operator delete(void*, unsigned long) */
    operator_delete_void_unsigned_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402150 */
#include <stdint.h>
 
void method_std::basic_ostream_char_std::char_traits_char_std::_ostream_insert_char_std_char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_long_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::__ostream_insert<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*, long) */
    std::basic_ostream_char_std::char_traits_char_std::_ostream_insert_char_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402160 */
#include <stdint.h>
 
void fcn_00402160 (void) {
    /* std::condition_variable::condition_variable() */
    uint64_t (*0x004070b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402170 */
#include <stdint.h>
 
void pthread_mutex_lock (void) {
    pthread_mutex_lock ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402190 */
#include <stdint.h>
 
void std::condition_variable::wait_std::unique_lock_std::mutex_ (void) {
    /* std::condition_variable::wait(std::unique_lock<std::mutex>&) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4021a0 */
#include <stdint.h>
 
void snprintf (void) {
    snprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4021b0 */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4021d0 */
#include <stdint.h>
 
void std::thread::join_ (void) {
    /* std::thread::join() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4021e0 */
#include <stdint.h>
 
void std::ostream::operator_int_ (void) {
    /* std::ostream::operator<<(int) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4021f0 */
#include <stdint.h>
 
void std::condition_variable::condition_variable_ (void) {
    /* std::condition_variable::~condition_variable() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4021c0 */
#include <stdint.h>
 
void pthread_key_create (void) {
    pthread_key_create ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x4020c0 */
#include <stdint.h>
 
void pthread_create (void) {
    pthread_create ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_toby-speight2/x64_elf/subject.exe @ 0x402200 */
#include <stdint.h>
 
void std::ios_base::Init::Init_ (void) {
    /* std::ios_base::Init::~Init() */
}
