/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400594 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400560 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x4005c0 */
#include <stdint.h>
 
int64_t call_gmon_start (void) {
    rax = .got;
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
int64_t do_global_dtors_aux (void) {
    if (*(obj.completed.5886) != 0) {
        goto label_0;
    }
    ebx = obj.__DTOR_END__;
    rax = *(obj.dtor_idx.5888);
    rbx -= obj.__DTOR_LIST__;
    rbx >>= 3;
    rbx--;
    if (rax >= rbx) {
        goto label_1;
    }
    do {
        rax++;
        *(obj.dtor_idx.5888) = rax;
        uint64_t (*rax*8 + obj.__DTOR_LIST__)() ();
        rax = *(obj.dtor_idx.5888);
    } while (rax < rbx);
label_1:
    *(obj.completed.5886) = 1;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400650 */
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
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400a40 */
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
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x4009a0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400a78 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 14 named .fini */
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400680 */
#include <stdint.h>
 
void f_std::vector_int_std::allocator_int_std::vector_int_std::allocator_int_ (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    /* f(std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&) */
    *(rsp) = 0;
    voidstd::vector<int,std::allocator<int>>::_M_range_insert<_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::forward_iterator_tag) (rdi, *((rdi + 8)), *(rsi), *((rsi + 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
int64_t method_void_std::vector_int_std::allocator_int_::_M_range_insert_gnu_cxx::_normal_iterator_int_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int (int64_t arg4, uint32_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, std::forward_iterator_tag) */
    *((rsp - 0x30)) = rbx;
    *((rsp - 0x28)) = rbp;
    rbx = rdi;
    *((rsp - 0x20)) = r12;
    *((rsp - 0x18)) = r13;
    r12 = rsi;
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r15;
    if (rdx == rcx) {
        goto label_1;
    }
    r14 = *((rdi + 8));
    rax = *((rdi + 0x10));
    r13 = rcx;
    r13 -= rdx;
    r13 >>= 2;
    rax -= r14;
    rax >>= 2;
    if (r13 <= rax) {
        goto label_5;
    }
    rsi = *(rdi);
    rdx = 0x3fffffffffffffff;
    rax = rdx;
    r14 -= rsi;
    r14 >>= 2;
    rax -= r14;
    if (r13 > rax) {
        goto label_6;
    }
    rax = r13;
    r15 = 0xfffffffffffffffc;
    if (r14 >= r13) {
        rax = r14;
    }
    r14 += rax;
    if (r14 >= 0) {
        if (r14 <= rdx) {
            goto label_7;
        }
    }
label_4:
    rdi = r15;
    rax = operatornew(unsigned long) ();
    rsi = *(rbx);
    r14 = rax;
label_0:
    rax = r12;
    ecx = 0;
    rax -= rsi;
    rax >>= 2;
    if (rax != 0) {
        rcx = rax*4;
        rdx = rcx;
        *((rsp + 8)) = rcx;
        memmove (r14, rsi, rdx);
        rcx = *((rsp + 8));
    }
    rcx += r14;
    if (r13 != 0) {
        r13 <<= 2;
        rdi = rcx;
        *((rsp + 8)) = rcx;
        memmove (rdi, rbp, r13);
        rcx = *((rsp + 8));
    }
    rax = *((rbx + 8));
    r13 += rcx;
    ebp = 0;
    rax -= r12;
    rax >>= 2;
    if (rax != 0) {
        rbp = rax*4;
        memmove (r13, r12, rbp);
    }
    rdi = *(rbx);
    rbp += r13;
    if (rdi != 0) {
        delete ();
    }
    *(rbx) = r14;
    r14 += r15;
    *((rbx + 8)) = rbp;
    *((rbx + 0x10)) = r14;
    do {
label_1:
        rbx = *((rsp + 0x18));
        rbp = *((rsp + 0x20));
        r12 = *((rsp + 0x28));
        r13 = *((rsp + 0x30));
        r14 = *((rsp + 0x38));
        r15 = *((rsp + 0x40));
        return rax;
label_5:
        r15 = r14;
        r15 -= rsi;
        r15 >>= 2;
        if (r13 >= r15) {
            goto label_8;
        }
        r15 = r13*4;
        rcx = r14;
        rax = r14;
        rdx = r15;
        rcx -= r15;
        rdx >>= 2;
        if (rdx != 0) {
            goto label_9;
        }
label_3:
        rcx -= r12;
        rax += r15;
        rcx >>= 2;
        *((rbx + 8)) = rax;
        if (rcx != 0) {
            goto label_10;
        }
        rdx = r15;
    } while (r13 == 0);
label_2:
    rsi = rbp;
    rdi = r12;
    rbx = *((rsp + 0x18));
    rbp = *((rsp + 0x20));
    r12 = *((rsp + 0x28));
    r13 = *((rsp + 0x30));
    r14 = *((rsp + 0x38));
    r15 = *((rsp + 0x40));
    void (*0x400570)() ();
label_7:
    if (r14 != 0) {
        goto label_11;
    }
    r15d = 0;
    r14d = 0;
    goto label_0;
label_10:
    rdi -= rdx;
    memmove (r14, r12, rcx*4);
    rdx = r15;
    if (r13 == 0) {
        goto label_1;
    }
    goto label_2;
label_9:
    rsi = rcx;
    rdx <<= 2;
    *((rsp + 8)) = rcx;
    memmove (r14, rsi, rdx);
    rax = *((rbx + 8));
    rcx = *((rsp + 8));
    goto label_3;
label_8:
    r8 = r15*4;
    r9 = rdx + r8;
    rcx -= r9;
    rcx >>= 2;
    if (rcx != 0) {
        rsi = r9;
        *((rsp + 8)) = r8;
        *(rsp) = r9;
        memmove (r14, rsi, rcx*4);
        r14 = *((rbx + 8));
        r9 = *(rsp);
        r8 = *((rsp + 8));
    }
    r13 -= r15;
    rdi = r14 + r13*4;
    *((rbx + 8)) = rdi;
    if (r15 != 0) {
        rdx = r8;
        *((rsp + 8)) = r8;
        *(rsp) = r9;
        memmove (rdi, r12, rdx);
        rdi = *((rbx + 8));
        r9 = *(rsp);
        r8 = *((rsp + 8));
    }
    r9 -= rbp;
    r8 += rdi;
    r9 >>= 2;
    *((rbx + 8)) = r8;
    if (r9 == 0) {
        goto label_1;
    }
    rdx = r9*4;
    goto label_2;
label_6:
    edi = "vector::_M_range_insert";
    symstd::_throw_length_error(char const*) ();
label_11:
    r15 = r14*4;
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x4009b0 */
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
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400590 */
#include <stdint.h>
 
int32_t main (void) {
    /* [14] -r-x section size 1256 named .text */
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400510 */
#include <stdint.h>
 
void init (void) {
    /* [12] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400540 */
#include <stdint.h>
 
void std::_throw_length_error_char_const_ (void) {
    /* std::__throw_length_error(char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400550 */
#include <stdint.h>
 
void operator_delete_void_ (void) {
    /* operator delete(void*) */
    operator_delete_void_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400570 */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-025_vector/x64_elf/subject.exe @ 0x400580 */
#include <stdint.h>
 
void operator_new_unsigned_long_ (void) {
    /* operator new(unsigned long) */
    operator_new_unsigned_long_ ();
}
