/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x866c */
#include <stdint.h>
 
void entry0 (int32_t argc) {
    r1 = argc;
    /* [12] -r-x section size 6836 named .text */
    lr = 0;
    r1 = *(sp!);
    r2 = sp;
    __asm ("stmdb sp!, {r2}");
    __asm ("stmdb sp!, {r0}");
    ip = sym.__libc_csu_fini;
    __asm ("stmdb sp!, {ip}");
    r0 = $d;
    r3 = main;
    libc_start_main (r0, r1, r2, r3, r4, r5, r6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x85e8 */
#include <stdint.h>
 
void libc_start_main () {
    pc = *((ip += 0xef8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x86a8 */
#include <stdint.h>
 
void call_weak_fn () {
    r3 = *(0x86c0);
    r2 = *(0x86c4);
    r3 = pc + r3;
    r2 = *(0x86c0);
    if (r2 != 0) {
        return;
    }
    return void (*0x85f4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x86cc */
#include <stdint.h>
 
void deregister_tm_clones () {
    r3 = *(0x86f4);
    r0 = 0x12520;
    r3 -= r0;
    if (r3 > 6) {
        return;
    }
    if (r3 != 0) {
        return;
    }
    return uint32_t (*r3)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x86fc */
#include <stdint.h>
 
void register_tm_clones (int32_t arg2) {
    r1 = arg2;
    r3 = 0x12520;
    r0 = 0x12520;
    r1 = r3 - r0;
    r1 >>= 2;
    r1 += (r1 >> 31);
    r1 >>= 1;
    if (? != ?) {
        return;
    }
    if (r3 != 0) {
        return;
    }
    return uint32_t (*r3)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8734 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    r4 = 0x12520;
    r3 = *(r4);
    deregister_tm_clones ();
    r3 = 1;
    *(r4) = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x875c */
#include <stdint.h>
 
void entry_init0 (int32_t arg2) {
    r1 = arg2;
    r0 = 0x123d0;
    r3 = .comment;
    while (r3 == 0) {
label_0:
        void (*0x86fc)() ();
    }
    uint32_t (*r3)() ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9688 */
#include <stdint.h>
 
void method_int_std::uninitialized_copy_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_const_std::ve (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_5h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r3 = 0;
    *((fp - 5)) = r3;
    r0 = *((fp - 0x10));
    r1 = *((fp - 0x14));
    r2 = *((fp - 0x18));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9a38 */
#include <stdint.h>
 
void method_int_std::_uninitialized_copy_false_::_uninit_copy_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iter (int32_t arg1, int32_t arg2) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_sp_18h;
    int32_t var_8h_2;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    *((fp - 0x20)) = r2;
    r3 = *((fp - 0x20));
    *((fp - 0x10)) = r3;
    while (r3 != 0) {
        r0 = *((fp - 0x10));
        r0 = method (r0);
        r4 = r0;
        r3 = fp - 0x18;
        r0 = r3;
        r0 = method (r0);
        r3 = r0;
        r0 = r4;
        r1 = r3;
        method (r0, r1);
        r3 = fp - 0x18;
        r0 = r3;
        method (r0);
        r3 = *((fp - 0x10));
        r3 += 4;
        *((fp - 0x10)) = r3;
        r2 = fp - 0x18;
        r3 = fp - 0x1c;
        r0 = r2;
        r1 = r3;
        r0 = method (r0, r1);
        r3 = r0;
    }
    r3 = *((fp - 0x10));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9538 */
#include <stdint.h>
 
void method_std::_Miter_base_int_::iterator_type_std_miter_base_int_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*) */
    *((fp - 8)) = r0;
    r0 = *((fp - 8));
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x98b4 */
#include <stdint.h>
 
void method_std::_Iter_base_int_false_S_base_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::_Iter_base<int*, false>::_S_base(int*) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8b88 */
#include <stdint.h>
 
void method_void_std::vector_int_std::allocator_int_::_M_insert_dispatch_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_gnu_cxx::_normal_iter (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_0h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* void std::vector<int, std::allocator<int> >::_M_insert_dispatch<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::__false_type) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    *((fp - 0x1c)) = r3;
    *(sp) = ip;
    r0 = *((fp - 0x10));
    r1 = *((fp - 0x14));
    r2 = *((fp - 0x18));
    r3 = *((fp - 0x1c));
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8be8 */
#include <stdint.h>
 
void method_void_std::vector_int_std::allocator_int_::_M_range_insert_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterato (int32_t arg1, int32_t arg2) {
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_10h;
    r0 = arg1;
    r1 = arg2;
    /* void std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::forward_iterator_tag) */
    *((fp - 0x38)) = r0;
    *((fp - 0x3c)) = r1;
    *((fp - 0x40)) = r2;
    *((fp - 0x44)) = r3;
    r2 = fp - 0x40;
    r3 = fp - 0x44;
    r0 = r2;
    r1 = r3;
    r0 = method (r0, r1);
    r3 = r0;
    if (r3 != 0) {
        r0 = *((fp - 0x40));
        r1 = *((fp - 0x44));
        r0 = method (r0, r1);
        r3 = r0;
        *((fp - 0x1c)) = r3;
        r3 = *((fp - 0x38));
        r3 = *((r3 + 8));
        r2 = r3;
        r3 = *((fp - 0x38));
        r3 = *((r3 + 4));
        r3 = r2 - r3;
        r3 >>= 2;
        r2 = r3;
        r3 = *((fp - 0x1c));
        if (r2 > r3) {
            r0 = *((fp - 0x38));
            r0 = method (r0);
            r3 = r0;
            *((fp - 0x30)) = r3;
            r2 = fp - 0x30;
            r3 = fp - 0x3c;
            r0 = r2;
            r1 = r3;
            r0 = method (r0, r1);
            r3 = r0;
            *((fp - 0x20)) = r3;
            r3 = *((fp - 0x38));
            r3 = *((r3 + 4));
            *((fp - 0x24)) = r3;
            r2 = *((fp - 0x20));
            r3 = *((fp - 0x1c));
            if (r2 >= r3) {
                r3 = *((fp - 0x38));
                r2 = *((r3 + 4));
                r3 = *((fp - 0x1c));
                r3 <<= 2;
                r3 -= ;
                r6 = r2 + r3;
                r3 = *((fp - 0x38));
                r5 = *((r3 + 4));
                r3 = *((fp - 0x38));
                r4 = *((r3 + 4));
                r3 = *((fp - 0x38));
                r0 = r3;
                r0 = method (r0);
                r3 = r0;
                r0 = r6;
                r1 = r5;
                r2 = r4;
                method (r0, r1);
                r3 = *((fp - 0x38));
                r2 = *((r3 + 4));
                r3 = *((fp - 0x1c));
                r3 <<= 2;
                r2 += r3;
                r3 = *((fp - 0x38));
                *((r3 + 4)) = r2;
                r3 = fp - 0x3c;
                r0 = r3;
                r0 = method (r0);
                r3 = r0;
                r1 = *(r3);
                r3 = *((fp - 0x1c));
                r3 <<= 2;
                r3 -= ;
                r2 = *((fp - 0x24));
                r3 = r2 + r3;
                r0 = r1;
                r1 = r3;
                r2 = *((fp - 0x24));
                method (r0, r1);
                r0 = *((fp - 0x40));
                r1 = *((fp - 0x44));
                r2 = *((fp - 0x3c));
                method (r0, r1);
            } else {
                r3 = *((fp - 0x40));
            }
            *((fp - 0x34)) = r3;
            r3 = fp - 0x34;
            r0 = r3;
            r1 = *((fp - 0x20));
            method (r0, r1);
            r3 = *((fp - 0x38));
            r4 = *((r3 + 4));
            r3 = *((fp - 0x38));
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r0 = *((fp - 0x34));
            r1 = *((fp - 0x44));
            r2 = r4;
            method (r0, r1);
            r3 = *((fp - 0x38));
            r2 = *((r3 + 4));
            r1 = *((fp - 0x1c));
            r3 = *((fp - 0x20));
            r3 = r1 - r3;
            r3 <<= 2;
            r2 += r3;
            r3 = *((fp - 0x38));
            *((r3 + 4)) = r2;
            r3 = fp - 0x3c;
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r5 = *(r3);
            r3 = *((fp - 0x38));
            r4 = *((r3 + 4));
            r3 = *((fp - 0x38));
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r0 = r5;
            r1 = *((fp - 0x24));
            r2 = r4;
            method (r0, r1);
            r3 = *((fp - 0x38));
            r2 = *((r3 + 4));
            r3 = *((fp - 0x20));
            r3 <<= 2;
            r2 += r3;
            r3 = *((fp - 0x38));
            *((r3 + 4)) = r2;
            r0 = *((fp - 0x40));
            r1 = *((fp - 0x34));
            r2 = *((fp - 0x3c));
            method (r0, r1);
        } else {
            r0 = *((fp - 0x38));
            r1 = *((fp - 0x1c));
            r0 = method (r0, r1);
            r3 = r0;
            *((fp - 0x28)) = r3;
            r3 = *((fp - 0x38));
            r0 = r3;
            r1 = *((fp - 0x28));
            r0 = method (r0, r1);
            r3 = r0;
            *((fp - 0x2c)) = r3;
            r3 = *((fp - 0x2c));
            *((fp - 0x18)) = r3;
            r3 = *((fp - 0x38));
            r5 = *(r3);
            r3 = fp - 0x3c;
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r4 = *(r3);
            r3 = *((fp - 0x38));
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r0 = r5;
            r1 = r4;
            r2 = *((fp - 0x2c));
            r0 = method (r0, r1);
            r3 = r0;
            *((fp - 0x18)) = r3;
            r3 = *((fp - 0x38));
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r0 = *((fp - 0x40));
            r1 = *((fp - 0x44));
            r2 = *((fp - 0x18));
            r0 = method (r0, r1);
            r3 = r0;
            *((fp - 0x18)) = r3;
            r3 = fp - 0x3c;
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r5 = *(r3);
            r3 = *((fp - 0x38));
            r4 = *((r3 + 4));
            r3 = *((fp - 0x38));
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r0 = r5;
            r1 = r4;
            r2 = *((fp - 0x18));
            r0 = method (r0, r1);
            r3 = r0;
            *((fp - 0x18)) = r3;
            r3 = *((fp - 0x38));
            r5 = *(r3);
            r3 = *((fp - 0x38));
            r4 = *((r3 + 4));
            r3 = *((fp - 0x38));
            r0 = r3;
            r0 = method (r0);
            r3 = r0;
            r0 = r5;
            r1 = r4;
            r2 = r3;
            method (r0, r1);
            r1 = *((fp - 0x38));
            r3 = *((fp - 0x38));
            r2 = *(r3);
            r3 = *((fp - 0x38));
            r3 = *((r3 + 8));
            r0 = r3;
            r3 = *((fp - 0x38));
            r3 = *(r3);
            r3 = r0 - r3;
            r3 >>= 2;
            r0 = r1;
            r1 = r2;
            r2 = r3;
            method (r0, r1);
            r3 = *((fp - 0x38));
            r2 = *((fp - 0x2c));
            *(r3) = r2;
            r3 = *((fp - 0x38));
            r2 = *((fp - 0x18));
            *((r3 + 4)) = r2;
            r3 = *((fp - 0x28));
            r3 <<= 2;
            r2 = *((fp - 0x2c));
            r2 += r3;
            r3 = *((fp - 0x38));
            *((r3 + 8)) = r2;
            goto label_0;
        }
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x95e4 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_std::_copy_move_a2_false_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std_alloca (int32_t arg1, int32_t arg2) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch_2;
    int32_t var_ch;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    *((fp - 0x20)) = r2;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r5 = r0;
    r0 = *((fp - 0x1c));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x20));
    r0 = method (r0);
    r3 = r0;
    r0 = r5;
    r1 = r4;
    r2 = r3;
    r0 = method (r0, r1);
    r3 = r0;
    *((fp - 0x10)) = r3;
    r2 = fp - 0x14;
    r3 = fp - 0x10;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 0x14));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9964 */
#include <stdint.h>
 
void method_std::_Niter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::iterator_type_std::_niter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_in (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    *((fp - 8)) = r0;
    r0 = *((fp - 8));
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9d08 */
#include <stdint.h>
 
void method_std::_Iter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_true_S_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    *((fp - 8)) = r0;
    r3 = fp - 8;
    r0 = r3;
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8bc4 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_base_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x998c */
#include <stdint.h>
 
void method_std::_Niter_base_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_::iterator_type_std::_niter_base_gnu_cxx::_normal_iterator_int_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_std::vec (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
    *((fp - 8)) = r0;
    r0 = *((fp - 8));
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9d38 */
#include <stdint.h>
 
void method_std::_Iter_base_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_true_S_base_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Iter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
    *((fp - 8)) = r0;
    r3 = fp - 8;
    r0 = r3;
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8a54 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_base_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x99b4 */
#include <stdint.h>
 
void method_int_std_copy_move_a_false_int_const_int_int_const_int_const_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_5h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r3 = 1;
    *((fp - 5)) = r3;
    r0 = *((fp - 0x10));
    r1 = *((fp - 0x14));
    r2 = *((fp - 0x18));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9d68 */
#include <stdint.h>
 
void method_int_std::_copy_move_false_true_std::random_access_iterator_tag_copy_m_int_int_const_int_const_int_ (void * arg1, int32_t arg2) {
    void * s1;
    int32_t var_14h;
    void * s2;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int const*, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r2 = *((fp - 0x14));
    r3 = *((fp - 0x10));
    r3 = r2 - r3;
    r3 >>= 2;
    *((fp - 8)) = r3;
    r3 = *((fp - 8));
    if (r3 != 0) {
        r3 = *((fp - 8));
        r3 <<= 2;
        r0 = *((fp - 0x18));
        r1 = *((fp - 0x10));
        r2 = r3;
        memmove (r0, r1, r2);
    }
    r3 = *((fp - 8));
    r3 <<= 2;
    r2 = *((fp - 0x18));
    r3 = r2 + r3;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8630 */
#include <stdint.h>
 
void memmove () {
    pc = *((ip += 0xec8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x89e4 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_normal_iterator_int_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(int* const&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 0xc));
    r2 = *(r3);
    r3 = *((fp - 8));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x93ac */
#include <stdint.h>
 
void method_int_std::_uninitialized_move_if_noexcept_a_int_int_std_allocator_int_int_int_int_std::allocator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    *((fp - 0x1c)) = r3;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r0 = r4;
    r1 = r3;
    r2 = *((fp - 0x18));
    r3 = *((fp - 0x1c));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x97b8 */
#include <stdint.h>
 
void method_std::move_iterator_int_std::_make_move_if_noexcept_iterator_int_std_move_iterator_int_int_ (int32_t arg1) {
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::move_iterator<int*> std::__make_move_if_noexcept_iterator<int*, std::move_iterator<int*> >(int*) */
    *((fp - 0x10)) = r0;
    r3 = fp - 8;
    r0 = r3;
    r1 = *((fp - 0x10));
    method (r0, r1);
    r3 = *((fp - 8));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9840 */
#include <stdint.h>
 
void method_std::move_iterator_int_move_iterator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* std::move_iterator<int*>::move_iterator(int*) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 8));
    r2 = *((fp - 0xc));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x94fc */
#include <stdint.h>
 
void method_int_std::_uninitialized_copy_a_std_move_iterator_int_int_int_std::move_iterator_int_std::move_iterator_int_int_std::allocator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int>(std::move_iterator<int*>, std::move_iterator<int*>, int*, std::allocator<int>&) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    *((fp - 0x14)) = r3;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    r2 = *((fp - 0x10));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9874 */
#include <stdint.h>
 
void method_int_std::uninitialized_copy_std_move_iterator_int_int_std::move_iterator_int_std::move_iterator_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_5h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::uninitialized_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r3 = 0;
    *((fp - 5)) = r3;
    r0 = *((fp - 0x10));
    r1 = *((fp - 0x14));
    r2 = *((fp - 0x18));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9bc8 */
#include <stdint.h>
 
void method_int_std::_uninitialized_copy_false_::_uninit_copy_std_move_iterator_int_int_std::move_iterator_int_std::move_iterator_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_sp_18h;
    int32_t var_8h_2;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__uninitialized_copy<false>::__uninit_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*) */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    *((fp - 0x20)) = r2;
    r3 = *((fp - 0x20));
    *((fp - 0x10)) = r3;
    while (r3 != 0) {
        r0 = *((fp - 0x10));
        r0 = method (r0);
        r4 = r0;
        r3 = fp - 0x18;
        r0 = r3;
        r0 = method (r0);
        r3 = r0;
        r0 = r4;
        r1 = r3;
        method (r0, r1);
        r3 = fp - 0x18;
        r0 = r3;
        method (r0);
        r3 = *((fp - 0x10));
        r3 += 4;
        *((fp - 0x10)) = r3;
        r2 = fp - 0x18;
        r3 = fp - 0x1c;
        r0 = r2;
        r1 = r3;
        r0 = method (r0, r1);
        r3 = r0;
    }
    r3 = *((fp - 0x10));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0xa11c */
#include <stdint.h>
 
void libc_csu_fini () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9fac */
#include <stdint.h>
 
void method_std::move_iterator_int_operator_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::move_iterator<int*>::operator*() const */
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *(r3);
    r0 = r3;
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9f88 */
#include <stdint.h>
 
void method_std::remove_reference_int_::type_std_move_int_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::remove_reference<int&>::type&& std::move<int&>(int&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9940 */
#include <stdint.h>
 
void method_std::_Iter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_false_S_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9810 */
#include <stdint.h>
 
void method_std::allocator_traits_std::allocator_int_deallocate_std::allocator_int_int_unsigned_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* std::allocator_traits<std::allocator<int> >::deallocate(std::allocator<int>&, int*, unsigned int) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    r2 = *((fp - 0x10));
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9ba0 */
#include <stdint.h>
 
void method_gnu_cxx::new_allocator_int_deallocate_int_unsigned_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned int) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r0 = *((fp - 0xc));
    sym ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8600 */
#include <stdint.h>
 
void operator_delete_void_ () {
    /* operator delete(void*) */
    pc = *((ip += 0xee8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9430 */
#include <stdint.h>
 
void method_std::_Vector_base_int_std::allocator_int_M_deallocate_int_unsigned_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned int) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r3 = *((fp - 0xc));
    if (r3 != 0) {
        r3 = *((fp - 8));
        r0 = r3;
        r1 = *((fp - 0xc));
        r2 = *((fp - 0x10));
        method (r0, r1);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9470 */
#include <stdint.h>
 
void method_std::iterator_traits_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::iterator_category_std::_iterator_category_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_nor (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_category std::__iterator_category<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x96c8 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_size_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::size() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *((r3 + 4));
    r2 = r3;
    r3 = *((fp - 8));
    r3 = *(r3);
    r3 = r2 - r3;
    r3 >>= 2;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8794 */
#include <stdint.h>
 
void f_std::vector_int_std::allocator_int_std::vector_int_std::allocator_int_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* f(std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> > const&) */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r3 = r0;
    *((fp - 0x10)) = r3;
    r2 = fp - 0x14;
    r3 = fp - 0x10;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r0 = *((fp - 0x1c));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x1c));
    r0 = method (r0);
    r3 = r0;
    r0 = *((fp - 0x18));
    r1 = *((fp - 0x14));
    r2 = r4;
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8840 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_end_ (int32_t arg1) {
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::end() */
    *((fp - 0x10)) = r0;
    r3 = *((fp - 0x10));
    r3 += 4;
    r2 = fp - 8;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 8));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x88f8 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_normal_iterator_int_gnu_cxx::_normal_iterator_int_gnu_cxx::_enable_if_std::_are_same_int_int_::_value_std::vector_int_std::allocator_int_::_ty (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator<int*>(__gnu_cxx::__normal_iterator<int*, __gnu_cxx::__enable_if<std::__are_same<int*, int*>::__value, std::vector<int, std::allocator<int> > >::__type> const&) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r0 = *((fp - 0xc));
    r0 = method (r0);
    r3 = r0;
    r2 = *(r3);
    r3 = *((fp - 8));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8878 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_begin_const (int32_t arg1) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::begin() const */
    *((fp - 0x10)) = r0;
    r3 = *((fp - 0x10));
    r3 = *(r3);
    *((fp - 8)) = r3;
    r2 = fp - 0xc;
    r3 = fp - 8;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 0xc));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8a1c */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_normal_iterator_int_const_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(int const* const&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 0xc));
    r2 = *(r3);
    r3 = *((fp - 8));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x88b8 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_end_const (int32_t arg1) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::end() const */
    *((fp - 0x10)) = r0;
    r3 = *((fp - 0x10));
    r3 = *((r3 + 4));
    *((fp - 8)) = r3;
    r2 = fp - 0xc;
    r3 = fp - 8;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 0xc));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8934 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_std::vector_int_std::allocator_int_::insert_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_void_gnu_cxx::_normal_iterator_int_cons (int32_t arg1, int32_t arg2) {
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_0h;
    int32_t var_sp_2ch;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::vector<int, std::allocator<int> >::insert<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, void>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    *((fp - 0x28)) = r0;
    *((fp - 0x2c)) = r1;
    *((fp - 0x30)) = r2;
    *((fp - 0x34)) = r3;
    r0 = *((fp - 0x28));
    r0 = method (r0);
    r3 = r0;
    *((fp - 0x20)) = r3;
    r2 = fp - 0x2c;
    r3 = fp - 0x20;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    *((fp - 0x10)) = r0;
    r0 = *((fp - 0x28));
    r0 = method (r0);
    r3 = r0;
    *((fp - 0x1c)) = r3;
    r3 = fp - 0x1c;
    r0 = r3;
    r1 = *((fp - 0x10));
    r0 = method (r0, r1);
    r3 = r0;
    *(sp) = r4;
    r0 = *((fp - 0x28));
    r1 = r3;
    r2 = *((fp - 0x30));
    r3 = *((fp - 0x34));
    method (r0, r1);
    r0 = *((fp - 0x28));
    r0 = method (r0);
    r3 = r0;
    *((fp - 0x14)) = r3;
    r3 = fp - 0x14;
    r0 = r3;
    r1 = *((fp - 0x10));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8a78 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_cbegin_const (int32_t arg1) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::cbegin() const */
    *((fp - 0x10)) = r0;
    r3 = *((fp - 0x10));
    r3 = *(r3);
    *((fp - 8)) = r3;
    r2 = fp - 0xc;
    r3 = fp - 8;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 0xc));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8ab8 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::difference_type_gnu_cxx::operator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int const*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    r4 = r3;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    r3 = r4 - r3;
    r3 >>= 2;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8b04 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_begin_ (int32_t arg1) {
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::begin() */
    *((fp - 0x10)) = r0;
    r3 = *((fp - 0x10));
    r2 = fp - 8;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 8));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8b38 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_operator_int_const (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator+(int) const */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r3 = *((fp - 0x10));
    r2 = *(r3);
    r3 = *((fp - 0x14));
    r3 <<= 2;
    r3 = r2 + r3;
    *((fp - 8)) = r3;
    r2 = fp - 0xc;
    r3 = fp - 8;
    r0 = r2;
    r1 = r3;
    method (r0, r1);
    r3 = *((fp - 0xc));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9364 */
#include <stdint.h>
 
void method_std::_Vector_base_int_std::allocator_int_M_allocate_unsigned_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned int) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 0xc));
    if (r3 != 0) {
        r3 = *((fp - 8));
        r0 = r3;
        r1 = *((fp - 0xc));
        r0 = method (r0, r1);
        r3 = r0;
    } else {
        r3 = 0;
    }
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0xa120 */
#include <stdint.h>
 
void fini () {
    /* [13] -r-x section size 8 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9ec8 */
#include <stdint.h>
 
void method_unsigned_int_std::allocator_traits_std::allocator_int_::_S_max_size_std_allocator_int_const_void_std::allocator_int_const_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* unsigned int std::allocator_traits<std::allocator<int> >::_S_max_size<std::allocator<int> const, void>(std::allocator<int> const&, int) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r0 = *((fp - 8));
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9ef4 */
#include <stdint.h>
 
void method_gnu_cxx::new_allocator_int_max_size_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* __gnu_cxx::new_allocator<int>::max_size() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = ~0xc0000000;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9404 */
#include <stdint.h>
 
void method_void_std_Destroy_int_int_int_int_std::allocator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x97e8 */
#include <stdint.h>
 
void method_void_std_Destroy_int_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* void std::_Destroy<int*>(int*, int*) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9b80 */
#include <stdint.h>
 
void method_void_std::_Destroy_aux_true_destroy_int_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x910c */
#include <stdint.h>
 
void method_int_std::_uninitialized_move_a_int_int_std_allocator_int_int_int_int_std::allocator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__uninitialized_move_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    *((fp - 0x1c)) = r3;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r0 = r4;
    r1 = r3;
    r2 = *((fp - 0x18));
    r3 = *((fp - 0x1c));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x94cc */
#include <stdint.h>
 
void method_std::move_iterator_int_std_make_move_iterator_int_int_ (int32_t arg1) {
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::move_iterator<int*> std::make_move_iterator<int*>(int*) */
    *((fp - 0x10)) = r0;
    r3 = fp - 8;
    r0 = r3;
    r1 = *((fp - 0x10));
    method (r0, r1);
    r3 = *((fp - 8));
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9704 */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_max_size_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::vector<int, std::allocator<int> >::max_size() const */
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9af8 */
#include <stdint.h>
 
void method_std::_Vector_base_int_std::allocator_int_M_get_Tp_allocator_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9acc */
#include <stdint.h>
 
void method_std::allocator_traits_std::allocator_int_max_size_std::allocator_int_const_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */
    *((fp - 8)) = r0;
    r0 = *((fp - 8));
    r1 = 0;
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x90e8 */
#include <stdint.h>
 
void method_std::_Vector_base_int_std::allocator_int_M_get_Tp_allocator_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8818 */
#include <stdint.h>
 
void operator_new_unsigned_int_void_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* operator new(unsigned int, void*) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 0xc));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x99f4 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_operator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator+=(int) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 8));
    r2 = *(r3);
    r3 = *((fp - 0xc));
    r3 <<= 2;
    r2 += r3;
    r3 = *((fp - 8));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9784 */
#include <stdint.h>
 
void method_std::allocator_traits_std::allocator_int_allocate_std::allocator_int_unsigned_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* std::allocator_traits<std::allocator<int> >::allocate(std::allocator<int>&, unsigned int) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    r2 = 0;
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9b1c */
#include <stdint.h>
 
void method_gnu_cxx::new_allocator_int_allocate_unsigned_int_void_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::new_allocator<int>::allocate(unsigned int, void const*) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r0 = *((fp - 8));
    r0 = method (r0);
    r2 = r0;
    r3 = *((fp - 0xc));
    if (r2 >= r3) {
        r3 = 1;
    }
    if (r2 < r3) {
        r3 = 0;
    }
    r3 = (int8_t) r3;
    if (r3 != 0) {
        sym ();
    }
    r3 = *((fp - 0xc));
    r3 <<= 2;
    r0 = r3;
    r0 = sym ();
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8648 */
#include <stdint.h>
 
void std::_throw_bad_alloc_ () {
    /* std::__throw_bad_alloc() */
    pc = *((ip += 0xeb8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8624 */
#include <stdint.h>
 
void operator_new_unsigned_int_ () {
    /* operator new(unsigned int) */
    pc = *((ip += 0xed0));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x900c */
#include <stdint.h>
 
void method_bool_gnu_cxx::operator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_const_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* bool __gnu_cxx::operator!=<int const*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r3 = r0;
    r4 = *(r3);
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    if (r4 == r3) {
        r3 = 1;
    }
    if (r4 != r3) {
        r3 = 0;
    }
    r3 = (int8_t) r3;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9560 */
#include <stdint.h>
 
void method_int_std_copy_move_backward_a2_true_int_int_int_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch_2;
    int32_t var_ch;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__copy_move_backward_a2<true, int*, int*>(int*, int*, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r5 = r0;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r3 = r0;
    r0 = r5;
    r1 = r4;
    r2 = r3;
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x98d8 */
#include <stdint.h>
 
void method_std::_Niter_base_int_::iterator_type_std_niter_base_int_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*) */
    *((fp - 8)) = r0;
    r0 = *((fp - 8));
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9900 */
#include <stdint.h>
 
void method_int_std_copy_move_backward_a_true_int_int_int_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_5h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__copy_move_backward_a<true, int*, int*>(int*, int*, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r3 = 1;
    *((fp - 5)) = r3;
    r0 = *((fp - 0x10));
    r1 = *((fp - 0x14));
    r2 = *((fp - 0x18));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9c84 */
#include <stdint.h>
 
void method_int_std::_copy_move_backward_true_true_std::random_access_iterator_tag_copy_move_b_int_int_const_int_const_int_ (void * arg1, int32_t arg2) {
    void * s1;
    int32_t var_14h;
    void * s2;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__copy_move_backward<true, true, std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r2 = *((fp - 0x14));
    r3 = *((fp - 0x10));
    r3 = r2 - r3;
    r3 >>= 2;
    *((fp - 8)) = r3;
    r3 = *((fp - 8));
    if (r3 != 0) {
        r3 = *((fp - 8));
        r3 <<= 2;
        r3 -= ;
        r2 = *((fp - 0x18));
        r2 += r3;
        r3 = *((fp - 8));
        r3 <<= 2;
        r0 = r2;
        r1 = *((fp - 0x10));
        r2 = r3;
        memmove (r0, r1, r2);
    }
    r3 = *((fp - 8));
    r3 <<= 2;
    r3 -= ;
    r2 = *((fp - 0x18));
    r3 = r2 + r3;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9204 */
#include <stdint.h>
 
void method_void_std::advance_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_unsigned_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_unsigned_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h_2;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* void std::advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, unsigned int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >&, unsigned int) */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    r3 = *((fp - 0x1c));
    *((fp - 0x10)) = r3;
    r0 = *((fp - 0x18));
    method (r0);
    r0 = *((fp - 0x18));
    r1 = *((fp - 0x10));
    r2 = r4;
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x965c */
#include <stdint.h>
 
void method_void_std::_advance_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_int_std::random_access_iterator_tag_ (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* void std::__advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >&, int, std::random_access_iterator_tag) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    method (r0, r1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9240 */
#include <stdint.h>
 
void method_int_std::_uninitialized_copy_a_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_const (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, std::allocator<int>&) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    *((fp - 0x14)) = r3;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    r2 = *((fp - 0x10));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x905c */
#include <stdint.h>
 
void method_std::iterator_traits_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::difference_type_std::distance_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_ (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_8h_2;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::difference_type std::distance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    r3 = fp - 0x18;
    r0 = r3;
    method (r0);
    r0 = *((fp - 0x18));
    r1 = *((fp - 0x1c));
    r2 = r4;
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9490 */
#include <stdint.h>
 
void method_std::iterator_traits_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::difference_type_std::_distance_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterato (int32_t arg1, int32_t arg2) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::difference_type std::__distance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::random_access_iterator_tag) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    *((fp - 0x10)) = r2;
    r2 = fp - 0xc;
    r3 = fp - 8;
    r0 = r2;
    r1 = r3;
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9e7c */
#include <stdint.h>
 
void method_void_std_Construct_int_int_const_int_int_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* void std::_Construct<int, int const&>(int*, int const&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r4 = *(r3);
    r3 = *((fp - 0x10));
    r0 = 4;
    r1 = r3;
    r0 = sym ();
    r3 = r0;
    if (r3 != 0) {
        *(r3) = r4;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9e58 */
#include <stdint.h>
 
void method_int_const_std_forward_int_const_std::remove_reference_int_const_::type_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* int const& std::forward<int const&>(std::remove_reference<int const&>::type&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9e0c */
#include <stdint.h>
 
void method_int_std_addressof_int_int_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* int* std::__addressof<int>(int&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x927c */
#include <stdint.h>
 
void method_std::vector_int_std::allocator_int_M_check_len_unsigned_int_char_const_const (int32_t arg1, int32_t arg2) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_18h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* std::vector<int, std::allocator<int> >::_M_check_len(unsigned int, char const*) const */
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    *((fp - 0x20)) = r2;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r3 = r0;
    r2 = r4 - r3;
    r3 = *((fp - 0x1c));
    if (r2 >= r3) {
        r3 = 1;
    }
    if (r2 < r3) {
        r3 = 0;
    }
    r3 = (int8_t) r3;
    if (r3 != 0) {
        r0 = *((fp - 0x20));
        sym ();
    }
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r3 = r0;
    *((fp - 0x14)) = r3;
    r2 = fp - 0x14;
    r3 = fp - 0x1c;
    r0 = r2;
    r1 = r3;
    r0 = method (r0, r1);
    r3 = r0;
    r3 = *(r3);
    r3 = r4 + r3;
    *((fp - 0x10)) = r3;
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r2 = r0;
    r3 = *((fp - 0x10));
    if (r2 <= r3) {
        r0 = *((fp - 0x18));
        r0 = method (r0);
        r2 = r0;
        r3 = *((fp - 0x10));
        if (r2 >= r3) {
            goto label_0;
        }
    }
    r0 = *((fp - 0x18));
    r0 = method (r0);
    r3 = r0;
    goto label_1;
label_0:
    r3 = *((fp - 0x10));
label_1:
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0xa0bc */
#include <stdint.h>
 
void libc_csu_init (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r6 = r0;
    r5 = *(0xa110);
    r7 = r1;
    r8 = r2;
    sb = $d;
    r5 = pc + r5;
    init ();
    sb = pc + sb;
    r5 -= sb;
    r5 >>= 2;
    r4 = 0;
    do {
        offset_0 = r4 << 2;
        r3 = *((sb + offset_0));
        r0 = r6;
        r4++;
        r1 = r7;
        r2 = r8;
        uint32_t (*r3)(uint32_t, uint32_t, uint32_t, uint32_t) (r0, r1, r2, r3);
    } while (r4 != r5);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x85b0 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 12 named .init */
    call_weak_fn ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0xa000 */
#include <stdint.h>
 
void method_void_std_Construct_int_int_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* void std::_Construct<int, int>(int*, int&&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r4 = *(r3);
    r3 = *((fp - 0x10));
    r0 = 4;
    r1 = r3;
    r0 = sym ();
    r3 = r0;
    if (r3 != 0) {
        *(r3) = r4;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9fdc */
#include <stdint.h>
 
void method_int_std_forward_int_std::remove_reference_int_::type_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* int&& std::forward<int>(std::remove_reference<int>::type&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x91b4 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_std::copy_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std_allocator_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r0 = r4;
    r1 = r3;
    r2 = *((fp - 0x18));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x95bc */
#include <stdint.h>
 
void method_std::_Miter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::iterator_type_std::_miter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_in (int32_t arg1) {
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    /* std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    *((fp - 8)) = r0;
    r0 = *((fp - 8));
    r0 = method (r0);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x973c */
#include <stdint.h>
 
void method_unsigned_int_const_std_max_unsigned_int_unsigned_int_const_unsigned_int_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_0h;
    r0 = arg1;
    r1 = arg2;
    /* unsigned int const& std::max<unsigned int>(unsigned int const&, unsigned int const&) */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r3 = *((fp - 8));
    r2 = *(r3);
    r3 = *((fp - 0xc));
    r3 = *(r3);
    if (r2 < r3) {
        r3 = *((fp - 0xc));
    } else {
        r3 = *((fp - 8));
    }
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9f50 */
#include <stdint.h>
 
void method_std::move_iterator_int_operator_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::move_iterator<int*>::operator++() */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *(r3);
    r2 = r3 + 4;
    r3 = *((fp - 8));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0xa04c */
#include <stdint.h>
 
void method_bool_std_operator_int_std::move_iterator_int_const_std::move_iterator_int_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* bool std::operator==<int*>(std::move_iterator<int*> const&, std::move_iterator<int*> const&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    if (r4 != r3) {
        r3 = 1;
    }
    if (r4 == r3) {
        r3 = 0;
    }
    r3 = (int8_t) r3;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0xa094 */
#include <stdint.h>
 
void method_std::move_iterator_int_base_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* std::move_iterator<int*>::base() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *(r3);
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9164 */
#include <stdint.h>
 
void method_int_std_move_backward_int_int_int_int_int_ (int32_t arg1, int32_t arg2) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* int* std::move_backward<int*, int*>(int*, int*, int*) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    *((fp - 0x18)) = r2;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r4 = r0;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r0 = r4;
    r1 = r3;
    r2 = *((fp - 0x18));
    r0 = method (r0, r1);
    r3 = r0;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9e30 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_operator_const (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator*() const */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *(r3);
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x87fc */
#include <stdint.h>
 
int32_t main () {
    *((sp -= 4)) = fp;
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9f18 */
#include <stdint.h>
 
void method_bool_std_operator_int_std::move_iterator_int_const_std::move_iterator_int_const_ (int32_t arg1, int32_t arg2) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    /* bool std::operator!=<int*>(std::move_iterator<int*> const&, std::move_iterator<int*> const&) */
    *((fp - 8)) = r0;
    *((fp - 0xc)) = r1;
    r0 = *((fp - 8));
    r1 = *((fp - 0xc));
    r0 = method (r0, r1);
    r3 = r0;
    r3 ^= 1;
    r3 = (int8_t) r3;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x909c */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_::difference_type_gnu_cxx::operator_int_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_const_gn (int32_t arg1, int32_t arg2) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    r0 = arg1;
    r1 = arg2;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&) */
    *((fp - 0x10)) = r0;
    *((fp - 0x14)) = r1;
    r0 = *((fp - 0x10));
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    r4 = r3;
    r0 = *((fp - 0x14));
    r0 = method (r0);
    r3 = r0;
    r3 = *(r3);
    r3 = r4 - r3;
    r3 >>= 2;
    r0 = r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x9dd4 */
#include <stdint.h>
 
void method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_operator_ (int32_t arg1) {
    int32_t var_8h;
    int32_t var_sp_8h;
    int32_t var_0h;
    r0 = arg1;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator++() */
    *((sp -= 4)) = fp;
    *((fp - 8)) = r0;
    r3 = *((fp - 8));
    r3 = *(r3);
    r2 = r3 + 4;
    r3 = *((fp - 8));
    *(r3) = r2;
    r3 = *((fp - 8));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x85d0 */
#include <stdint.h>
 
void std::_throw_length_error_char_const_ () {
    /* std::__throw_length_error(char const*) */
    pc = *((ip += 0xf08));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x85dc */
#include <stdint.h>
 
void abort () {
    pc = *((ip += 0xf00));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x860c */
#include <stdint.h>
 
void cxa_rethrow () {
    pc = *((ip += 0xee0));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8618 */
#include <stdint.h>
 
void cxa_end_cleanup () {
    pc = *((ip += 0xed8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x863c */
#include <stdint.h>
 
void cxa_end_catch () {
    pc = *((ip += 0xec0));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8654 */
#include <stdint.h>
 
void cxa_begin_catch () {
    pc = *((ip += 0xeb0));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x8660 */
#include <stdint.h>
 
void gxx_personality_v0 () {
    pc = *((ip += 0xea8));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/arm-009_vector/arm_elf/subject.exe @ 0x85bc */
#include <stdint.h>
 
void _plt () {
    /* [11] -r-x section size 176 named .plt */
    lr = *(0x85c8);
    lr = pc + lr;
    pc = *(0x85d0);
}
