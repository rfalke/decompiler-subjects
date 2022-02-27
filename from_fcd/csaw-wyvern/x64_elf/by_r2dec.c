/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4013bb */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    ebp = 0;
    return libc_start_main (main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f10 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e490 */
#include <stdint.h>
 
int64_t method_std::basic_string_char_std::char_traits_char_std::allocator_char_std::operator_char_std::char_traits_char_std_allocator_char_char_const_std::basic_string_char_std::char_traits_char_std::allocator_char_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_19h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
    rax = rdi;
    *((rbp - 8)) = rsi;
    *((rbp - 0x10)) = rdx;
    rdx = *((rbp - 8));
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rax;
    rax = std::char_traits<char>::length(char const*) (rdx);
    *((rbp - 0x18)) = rax;
    *((rbp - 0x19)) = 0;
    rdi = *((rbp - 0x38));
    std::string () ();
    rax = *((rbp - 0x18));
    rdi = *((rbp - 0x10));
    *((rbp - 0x48)) = rax;
    rax = std::string::size()const ();
    *((rbp - 0x50)) = rax;
    rax = *((rbp - 0x48));
    rcx = *((rbp - 0x50));
    rax += rcx;
    rdi = *((rbp - 0x38));
    rsi = rax;
    std::string::reserve(unsigned long) ();
    rsi = *((rbp - 8));
    rdx = *((rbp - 0x18));
    rdi = *((rbp - 0x38));
    rax = symstd::string::append(char const* ();
    *((rbp - 0x58)) = rax;
    rsi = *((rbp - 0x10));
    rdi = *((rbp - 0x38));
    rax = std::string::append(std::string const&) ();
    *((rbp - 0x60)) = rax;
    *((rbp - 0x19)) = 1;
    *((rbp - 0x30)) = 1;
    if ((*((rbp - 0x19)) & 1) != 0) {
        void (*0x40e568)() ();
    }
    return void (*0x40e55f)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e590 */
#include <stdint.h>
 
void method_std::char_traits_char_length_char_const_ (char * arg1) {
    char * s;
    rdi = arg1;
    /* std::char_traits<char>::length(char const*) */
    *((rbp - 8)) = rdi;
    strlen (*((rbp - 8)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f90 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400e90 */
#include <stdint.h>
 
void fcn_00400e90 (void) {
    /* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string() */
    uint64_t (*0x00610028)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400ef0 */
#include <stdint.h>
 
void std::string::size_const (void) {
    /* std::string::size() const */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400ed0 */
#include <stdint.h>
 
void std::string::reserve_unsigned_long_ (void) {
    /* std::string::reserve(unsigned long) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400e70 */
#include <stdint.h>
 
void std::string::append_char_const_unsigned_long_ (void) {
    /* std::string::append(char const*, unsigned long) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401080 */
#include <stdint.h>
 
void std::string::append_std::string_const_ (void) {
    /* std::string::append(std::string const&) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e55f */
#include <stdint.h>
 
int64_t loc_0040e55f (void) {
    int64_t var_40h;
    int64_t var_38h;
    rdi = *((rbp - 0x38));
    std::~string () ();
    rax = *((rbp - 0x40));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f80 */
#include <stdint.h>
 
void std::basic_string_char_std::char_traits_char_std::allocator_char_::basic_string_ (void) {
    /* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4012b0 */
#include <stdint.h>
 
int32_t entry_init1 (void) {
    eax = x163;
    ecx = y164;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        _text ();
        _cxx_global_var_init1 ();
        eax = x163;
        ecx = y164;
        edx = eax;
        edx--;
        eax *= edx;
        eax &= 1;
        sil = (eax == 0) ? 1 : 0;
        dil = (ecx < 0xa) ? 1 : 0;
        sil |= dil;
        if ((sil & 1) == 0) {
        } else {
            return eax;
        }
        _text ();
        _cxx_global_var_init1 ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401090 */
#include <stdint.h>
 
int32_t cxx_global_var_init (void) {
    int64_t var_8h;
    int64_t var_4h;
    /* [13] -r-x section size 54674 named .text */
    eax = x;
    ecx = y;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rdi = std::__ioinit;
        std::ios_base::Init::Init() ();
        rdi = std::ios_base::Init::~Init();
        rsi = std::__ioinit;
        rdx = obj.__dso_handle;
        cxa_atexit ();
        ecx = x;
        r8d = y;
        r9d = ecx;
        r9d--;
        ecx *= r9d;
        ecx &= 1;
        r10b = (ecx == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        *((rbp - 4)) = eax;
        if ((r10b & 1) == 0) {
        } else {
            return eax;
        }
        rdi = std::__ioinit;
        std::ios_base::Init::Init() ();
        rdi = std::ios_base::Init::~Init();
        rsi = std::__ioinit;
        rdx = obj.__dso_handle;
        eax = cxa_atexit ();
        *((rbp - 8)) = eax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4011a0 */
#include <stdint.h>
 
int64_t cxx_global_var_init1 (void) {
    int64_t var_8h;
    int64_t var_4h;
    eax = x5;
    ecx = y6;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rdi = hero;
        std::vector<int,std::allocator<int>>::vector() (rdi);
        rdi = std::vector<int, std::allocator<int> >::~vector();
        rax = hero;
        rdx = obj.__dso_handle;
        rsi = rax;
        cxa_atexit ();
        ecx = x5;
        r8d = y6;
        r9d = ecx;
        r9d--;
        ecx *= r9d;
        ecx &= 1;
        r10b = (ecx == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        *((rbp - 4)) = eax;
        if ((r10b & 1) == 0) {
        } else {
            return rax;
        }
        rdi = hero;
        std::vector<int,std::allocator<int>>::vector() (rdi);
        rdi = std::vector<int, std::allocator<int> >::~vector();
        rax = hero;
        rdx = obj.__dso_handle;
        rsi = rax;
        eax = cxa_atexit ();
        *((rbp - 8)) = eax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4013b0 */
#include <stdint.h>
 
void GLOBAL_sub_I_domain_cpp (void) {
    _cxx_global_var_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401360 */
#include <stdint.h>
 
uint32_t cxx_global_var_init_1 (void) {
    int64_t var_4h;
    rdi = std::__ioinit;
    std::ios_base::Init::Init() ();
    rdi = std::ios_base::Init::~Init();
    rsi = std::__ioinit;
    rdx = obj.__dso_handle;
    eax = cxa_atexit ();
    *((rbp - 4)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f00 */
#include <stdint.h>
 
void fcn_00400f00 (void) {
    /* std::ios_base::Init::Init() */
    uint64_t (*0x00610060)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f30 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4013f0 */
#include <stdint.h>
 
int64_t deregister_tm_clones (void) {
    eax = 0x6101b7;
    rax -= obj.__TMC_END__;
    while (rax == 0) {
        return rax;
        eax = 0;
    }
    edi = __TMC_END__;
    return void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401420 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    eax = __TMC_END__;
    rax -= obj.__TMC_END__;
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
    edi = __TMC_END__;
    return void (*rdx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401460 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6973) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6973) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401480 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
        void (*0x401420)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407860 */
#include <stdint.h>
 
int64_t method_int_std::uninitialized_copy_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_const_std::ve (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
    eax = x55;
    ecx = y56;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x28)) = rsi;
    *((rbp - 0x30)) = rdi;
    *((rbp - 0x38)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        *(rsi) = rax;
        rax = *(rcx);
        *(rdi) = rax;
        rax = *(rsi);
        int*std::_uninitialized_copy<true>::_uninit_copy<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (rax, *(rdi), *(rdx));
        r11d = x55;
        ebx = y56;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x40)) = rax;
        if ((r15b & 1) == 0) {
        } else {
            rax = *((rbp - 0x40));
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        *(rsi) = rax;
        rax = *(rcx);
        *(rdi) = rax;
        rax = *(rsi);
        rax = int*std::_uninitialized_copy<true>::_uninit_copy<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (rax, *(rdi), *(rdx));
        *((rbp - 0x48)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40cbf0 */
#include <stdint.h>
 
int64_t method_std::_Miter_base_int_::iterator_type_std_miter_base_int_int_ (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*) */
    eax = x137;
    ecx = y138;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        std::_Iter_base<int*,false>::_S_base(int*) (*(rax));
        edx = x137;
        esi = y138;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rax;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = std::_Iter_base<int*,false>::_S_base(int*) (*(rax));
        *((rbp - 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407620 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_deallocate_int_unsigned_long_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long) */
    eax = x51;
    ecx = y52;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x10)) = rsi;
    *((rbp - 0x18)) = rdi;
    *((rbp - 0x20)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x18));
        *(rax) = rsi;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
        rdi = *((rbp - 0x20));
        *(rdx) = rdi;
        rcx = *(rcx);
        rdi = *(rcx);
        delete ();
        r8d = x51;
        r9d = y52;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        if ((r11b & 1) == 0) {
        } else {
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x18));
        *(rax) = rsi;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
        rdi = *((rbp - 0x20));
        *(rdx) = rdi;
        rcx = *(rcx);
        rdi = *(rcx);
        delete ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40ca40 */
#include <stdint.h>
 
int64_t method_int_std_copy_move_a2_false_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_a2<false, int*, int*>(int*, int*, int*) */
    eax = x135;
    ecx = y136;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x30)) = rcx;
        *((rbp - 0x38)) = rdx;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x30));
        *((rbp - 0x40)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x38));
        *((rbp - 0x48)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        int*std::_copy_move_a<false,int*,int*>(int*,int*,int*) (*((rbp - 0x40)), *((rbp - 0x48)), rax);
        r9d = x135;
        r10d = y136;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x50)) = rax;
        if ((bl & 1) == 0) {
        } else {
            rax = *((rbp - 0x50));
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x58)) = rcx;
        *((rbp - 0x60)) = rdx;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x58));
        *((rbp - 0x68)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x60));
        *((rbp - 0x70)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rax = int*std::_copy_move_a<false,int*,int*>(int*,int*,int*) (*((rbp - 0x68)), *((rbp - 0x70)), rax);
        *((rbp - 0x78)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40bdd0 */
#include <stdint.h>
 
int64_t method_int_std::_uninitialized_move_if_noexcept_a_int_int_std_allocator_int_int_int_int_std::allocator_int_ (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
    eax = x115;
    r8d = y116;
    r9d = eax;
    r9d--;
    eax *= r9d;
    eax &= 1;
    r10b = (eax == 0) ? 1 : 0;
    r11b = (r8d < 0xa) ? 1 : 0;
    r10b |= r11b;
    *((rbp - 0x28)) = rdx;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rcx;
    if ((r10b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x28));
        *(rdx) = r9;
        r10 = *((rbp - 0x40));
        *(rsi) = r10;
        rdi = *(rax);
        rax = *(rcx);
        int*std::_uninitialized_copy_a<int*,int*,int>(int*,int*,int*,std::allocator<int>&) (*(rdi), rax, *(rdx), *(rsi));
        r11d = x115;
        ebx = y116;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x48)) = rax;
        if ((r15b & 1) == 0) {
        } else {
            rax = *((rbp - 0x48));
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x28));
        *(rdx) = r9;
        r10 = *((rbp - 0x40));
        *(rsi) = r10;
        rdi = *(rax);
        rax = *(rcx);
        rax = int*std::_uninitialized_copy_a<int*,int*,int>(int*,int*,int*,std::allocator<int>&) (*(rdi), rax, *(rdx), *(rsi));
        *((rbp - 0x50)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e620 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408150 */
#include <stdint.h>
 
int64_t method_std::_Iter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_false_S_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_ (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    eax = x65;
    ecx = y66;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rcx) = rdx;
        rcx = *(rcx);
        *(rax) = rcx;
        rax = *(rax);
        esi = x65;
        edi = y66;
        r8d = esi;
        r8d--;
        esi *= r8d;
        esi &= 1;
        r9b = (esi == 0) ? 1 : 0;
        r10b = (edi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rax;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rcx) = rdx;
        rcx = *(rcx);
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408830 */
#include <stdint.h>
 
int64_t method_int_std::_copy_move_false_true_std::random_access_iterator_tag_copy_m_int_int_const_int_const_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_68h;
    int64_t var_59h;
    size_t * s1;
    int64_t var_50h;
    size_t * s2;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int const*, int*) */
    eax = x79;
    ecx = y80;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_2;
    }
    while (1) {
label_2:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x40));
        *(rdx) = r9;
        rcx = *(rcx);
        r10 = *(rax);
        rcx -= r10;
        rcx >>= 2;
        *(rsi) = rcx;
        r11b = (*(rsi) != 0) ? 1 : 0;
        ebx = x79;
        r14d = y80;
        r15d = ebx;
        r15d--;
        ebx *= r15d;
        ebx &= 1;
        r12b = (ebx == 0) ? 1 : 0;
        r13b = (r14d < 0xa) ? 1 : 0;
        r12b |= r13b;
        *((rbp - 0x48)) = rax;
        *((rbp - 0x50)) = rdx;
        *((rbp - 0x58)) = rsi;
        *((rbp - 0x59)) = r11b;
        if ((r12b & 1) == 0) {
        } else {
            al = *((rbp - 0x59));
            if ((al & 1) == 0) {
            } else {
                eax = x79;
                ecx = y80;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_3;
                }
label_0:
                rax = *((rbp - 0x50));
                rcx = *(rax);
                rdx = *((rbp - 0x48));
                rdi = *((rbp - 0x58));
                r8 = *(rdi);
                r8 <<= 2;
                memmove (rcx, *(rdx), r8);
                r9d = x79;
                r10d = y80;
                r11d = r9d;
                r11d--;
                r9d *= r11d;
                r9d &= 1;
                bl = (r9d == 0) ? 1 : 0;
                r14b = (r10d < 0xa) ? 1 : 0;
                bl |= r14b;
                if ((bl & 1) == 0) {
                    goto label_3;
                }
            }
            eax = x79;
            ecx = y80;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
label_1:
            rax = *((rbp - 0x50));
            rcx = *(rax);
            rdx = *((rbp - 0x58));
            rsi = *(rdx);
            rsi <<= 2;
            rcx += rsi;
            edi = x79;
            r8d = y80;
            r9d = edi;
            r9d--;
            edi *= r9d;
            edi &= 1;
            r10b = (edi == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0x68)) = rcx;
            if ((r10b & 1) == 0) {
                goto label_4;
            }
            rax = *((rbp - 0x68));
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x40));
        *(rdx) = r9;
        rcx = *(rcx);
        rax = *(rax);
        rcx -= rax;
        rcx >>= 2;
        *(rsi) = rcx;
    }
label_3:
    rax = *((rbp - 0x50));
    rcx = *(rax);
    rdx = *((rbp - 0x48));
    rdi = *((rbp - 0x58));
    r8 = *(rdi);
    r8 <<= 2;
    memmove (rcx, *(rdx), r8);
    goto label_0;
label_4:
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406dc0 */
#include <stdint.h>
 
int32_t fcn_00406dc0 (int64_t arg1) {
    int64_t var_18h;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::~_Vector_base() */
    eax = x41;
    ecx = y42;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x18)) = rdi;
    if ((sil & 1) != 0) {
        void (*0x406e12)() ();
    }
    return void (*0x4070a8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c760 */
#include <stdint.h>
 
int64_t method_int_std::_uninitialized_copy_true_uninit_copy_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(int*, int*, int*) */
    eax = x131;
    ecx = y132;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        int*std::copy<int*,int*>(int*,int*,int*) (*(rax), *(rcx), *(rdx));
        r9d = x131;
        r10d = y132;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x30)) = rax;
        if ((bl & 1) == 0) {
        } else {
            rax = *((rbp - 0x30));
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        rax = int*std::copy<int*,int*>(int*,int*,int*) (*(rax), *(rcx), *(rdx));
        *((rbp - 0x38)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x405560 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_size_const (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::size() const */
    eax = x13;
    ecx = y14;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rdx = *((rax + 8));
        rax = *(rax);
        rdx -= rax;
        rdx >>= 2;
        esi = x13;
        edi = y14;
        r8d = esi;
        r8d--;
        esi *= r8d;
        esi &= 1;
        r9b = (esi == 0) ? 1 : 0;
        r10b = (edi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rdx;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e000 */
#include <stdint.h>
 
uint64_t reward_strength_std::string_ (int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* reward_strength(std::string) */
    *((rbp - 0x30)) = rdi;
    rax = std::string::size()const ();
    rax--;
    ecx = 0;
    edx = ecx;
    rdi = rbp - 0x18;
    *((rbp - 0x38)) = rdi;
    rsi = *((rbp - 0x30));
    rcx = rax;
    std::string::substr(unsigned long,unsigned long)const ();
    r8d = "\n[+] A great success! Here is a flag{";
    std::string std::operator+ (char const*,std::string const&) (rbp - 0x10, "\n[+] A great success! Here is a flag{", *((rbp - 0x38)));
    eax = 0x40e679;
    std::string std::operator+ (std::string const&,char const*) (rbp - 8, rbp - 0x10, 0x40e679);
    eax = std::cout;
    edi = std::cout;
    rsi = rbp - 8;
    rax = std::string & std::operator <<  (std::string &,std::string const&) ();
    *((rbp - 0x40)) = rax;
    rdi = rbp - 8;
    std::~string () ();
    rdi = rbp - 0x10;
    std::~string () ();
    rdi = rbp - 0x18;
    std::~string () ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400ea0 */
#include <stdint.h>
 
void std::string::substr_unsigned_long_unsigned_long_const (void) {
    /* std::string::substr(unsigned long, unsigned long) const */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e3f0 */
#include <stdint.h>
 
int64_t method_std::basic_string_char_std::char_traits_char_std::allocator_char_std::operator_char_std::char_traits_char_std_allocator_char_std::basic_string_char_std::char_traits_char_std::allocator_char_const_char_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_11h;
    int64_t var_10h;
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*) */
    rax = rdi;
    *((rbp - 8)) = rsi;
    *((rbp - 0x10)) = rdx;
    *((rbp - 0x11)) = 0;
    rsi = *((rbp - 8));
    *((rbp - 0x30)) = rdi;
    *((rbp - 0x38)) = rax;
    std::string (std::string const&) ();
    rsi = *((rbp - 0x10));
    rdi = *((rbp - 0x30));
    rax = std::string::append(char const*) ();
    *((rbp - 0x40)) = rax;
    *((rbp - 0x11)) = 1;
    *((rbp - 0x28)) = 1;
    if ((*((rbp - 0x11)) & 1) != 0) {
        void (*0x40e468)() ();
    }
    return void (*0x40e45f)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f20 */
#include <stdint.h>
 
void std::basic_string_char_std::char_traits_char_std::allocator_char_::basic_string_std::string_const_ (void) {
    /* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::string const&) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
void std::string::append_char_const_ (void) {
    /* std::string::append(char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e45f */
#include <stdint.h>
 
int64_t loc_0040e45f (void) {
    int64_t var_38h;
    int64_t var_30h;
    rdi = *((rbp - 0x30));
    std::~string () ();
    rax = *((rbp - 0x38));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400fe0 */
#include <stdint.h>
 
void method_std::basic_ostream_char_std::char_traits_char_std::operator_char_std::char_traits_char_std_allocator_char_std::basic_ostream_char_std::char_traits_char_std::basic_string_char_std::char_traits_char_std::allocator_char_const (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
    std::basic_ostream_char_std::char_traits_char_std::operator_char_std::char_traits_char_std::allocator_char_std::basic_ostream_char_std::char_traits_char_std::basic_string_char_std::char_traits_char_std::allocator_char_const_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40af70 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_end_ (int64_t arg1) {
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::end() */
    eax = x99;
    ecx = y100;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x10)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rcx) = rdx;
        rcx = *(rcx);
        rcx += 8;
        rdi = rax;
        *((rbp - 0x18)) = rax;
        _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::_normal_iterator(int*const&) (rdi, rcx);
        rax = *((rbp - 0x18));
        rax = *(rax);
        r8d = x99;
        r9d = y100;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x20)) = rax;
        if ((r11b & 1) == 0) {
        } else {
            rax = *((rbp - 0x20));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rcx) = rdx;
        rcx = *(rcx);
        rcx += 8;
        _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::_normal_iterator(int*const&) (rax, rcx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e624 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 9 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40de60 */
#include <stdint.h>
 
int64_t fcn_0040de60 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* std::allocator<int>::allocator() */
    eax = x159;
    ecx = y160;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::new_allocator() (*(rax));
        edx = x159;
        esi = y160;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::new_allocator() (*(rax));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40b330 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_base_const (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */
    eax = x105;
    ecx = y106;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        edx = x105;
        esi = y106;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40d520 */
#include <stdint.h>
 
int64_t method_int_std_copy_move_backward_a_false_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_backward_a<false, int*, int*>(int*, int*, int*) */
    eax = x149;
    ecx = y150;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x20)) = rsi;
    *((rbp - 0x28)) = rdi;
    *((rbp - 0x30)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x28));
        *(rax) = rdi;
        r8 = *((rbp - 0x20));
        *(rcx) = r8;
        r9 = *((rbp - 0x30));
        *(rdx) = r9;
        *(rsi) = 1;
        int*std::_copy_move_backward<false,true,std::random_access_iterator_tag>::_copy_move_b<int>(intconst*,intconst*,int*) (*(rax), *(rcx), *(rdx));
        r10d = x149;
        r11d = y150;
        ebx = r10d;
        ebx--;
        r10d *= ebx;
        r10d &= 1;
        r14b = (r10d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x38)) = rax;
        if ((r14b & 1) == 0) {
        } else {
            rax = *((rbp - 0x38));
            rsp = rbp - 0x18;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x28));
        *(rax) = rdi;
        r8 = *((rbp - 0x20));
        *(rcx) = r8;
        r9 = *((rbp - 0x30));
        *(rdx) = r9;
        *(rsi) = 1;
        rax = int*std::_copy_move_backward<false,true,std::random_access_iterator_tag>::_copy_move_b<int>(intconst*,intconst*,int*) (*(rax), *(rcx), *(rdx));
        *((rbp - 0x40)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40ccd0 */
#include <stdint.h>
 
int64_t method_int_std_copy_move_a_false_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_a<false, int*, int*>(int*, int*, int*) */
    eax = x139;
    ecx = y140;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x20)) = rsi;
    *((rbp - 0x28)) = rdi;
    *((rbp - 0x30)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x28));
        *(rax) = rdi;
        r8 = *((rbp - 0x20));
        *(rcx) = r8;
        r9 = *((rbp - 0x30));
        *(rdx) = r9;
        *(rsi) = 1;
        int*std::_copy_move<false,true,std::random_access_iterator_tag>::_copy_m<int>(intconst*,intconst*,int*) (*(rax), *(rcx), *(rdx));
        r10d = x139;
        r11d = y140;
        ebx = r10d;
        ebx--;
        r10d *= ebx;
        r10d &= 1;
        r14b = (r10d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x38)) = rax;
        if ((r14b & 1) == 0) {
        } else {
            rax = *((rbp - 0x38));
            rsp = rbp - 0x18;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x28));
        *(rax) = rdi;
        r8 = *((rbp - 0x20));
        *(rcx) = r8;
        r9 = *((rbp - 0x30));
        *(rdx) = r9;
        *(rsi) = 1;
        rax = int*std::_copy_move<false,true,std::random_access_iterator_tag>::_copy_m<int>(intconst*,intconst*,int*) (*(rax), *(rcx), *(rdx));
        *((rbp - 0x40)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407560 */
#include <stdint.h>
 
int64_t fcn_00407560 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::~new_allocator() */
    eax = x49;
    ecx = y50;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        edx = x49;
        esi = y50;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        if ((r8b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c060 */
#include <stdint.h>
 
int64_t method_void_std_Destroy_int_int_int_int_std::allocator_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&) */
    eax = x119;
    ecx = y120;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        voidstd::_Destroy<int*>(int*,int*) (*(rax), *(rcx));
        r9d = x119;
        r10d = y120;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        if ((bl & 1) == 0) {
        } else {
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        voidstd::_Destroy<int*>(int*,int*) (*(rax), *(rcx));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40d690 */
#include <stdint.h>
 
int64_t method_int_std::_copy_move_backward_false_true_std::random_access_iterator_tag_copy_move_b_int_int_const_int_const_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_68h;
    int64_t var_59h;
    size_t * s1;
    size_t * n;
    void ** s2;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*) */
    eax = x151;
    ecx = y152;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_2;
    }
    while (1) {
label_2:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x40));
        *(rdx) = r9;
        rcx = *(rcx);
        r10 = *(rax);
        rcx -= r10;
        rcx >>= 2;
        *(rsi) = rcx;
        r11b = (*(rsi) != 0) ? 1 : 0;
        ebx = x151;
        r14d = y152;
        r15d = ebx;
        r15d--;
        ebx *= r15d;
        ebx &= 1;
        r12b = (ebx == 0) ? 1 : 0;
        r13b = (r14d < 0xa) ? 1 : 0;
        r12b |= r13b;
        *((rbp - 0x48)) = rax;
        *((rbp - 0x50)) = rdx;
        *((rbp - 0x58)) = rsi;
        *((rbp - 0x59)) = r11b;
        if ((r12b & 1) == 0) {
        } else {
            al = *((rbp - 0x59));
            if ((al & 1) == 0) {
            } else {
                eax = x151;
                ecx = y152;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_3;
                }
label_0:
                eax = 0;
                ecx = eax;
                rdx = *((rbp - 0x50));
                rsi = *(rdx);
                rdi = *((rbp - 0x58));
                rcx -= *(rdi);
                rcx <<= 2;
                rsi += rcx;
                rcx = *((rbp - 0x48));
                r8 = *(rcx);
                r9 = *(rdi);
                r9 <<= 2;
                memmove (rsi, r8, r9);
                eax = x151;
                r10d = y152;
                r11d = eax;
                r11d--;
                eax *= r11d;
                eax &= 1;
                bl = (eax == 0) ? 1 : 0;
                r14b = (r10d < 0xa) ? 1 : 0;
                bl |= r14b;
                if ((bl & 1) == 0) {
                    goto label_3;
                }
            }
            eax = x151;
            ecx = y152;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
label_1:
            eax = 0;
            ecx = eax;
            rdx = *((rbp - 0x50));
            rsi = *(rdx);
            rdi = *((rbp - 0x58));
            rcx -= *(rdi);
            rcx <<= 2;
            rsi += rcx;
            eax = x151;
            r8d = y152;
            r9d = eax;
            r9d--;
            eax *= r9d;
            eax &= 1;
            r10b = (eax == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0x68)) = rsi;
            if ((r10b & 1) == 0) {
                goto label_4;
            }
            rax = *((rbp - 0x68));
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x40));
        *(rdx) = r9;
        rcx = *(rcx);
        rax = *(rax);
        rcx -= rax;
        rcx >>= 2;
        *(rsi) = rcx;
    }
label_3:
    eax = 0;
    ecx = eax;
    rdx = *((rbp - 0x50));
    rsi = *(rdx);
    rdi = *((rbp - 0x58));
    r8 = *(rdi);
    rcx -= r8;
    rcx <<= 2;
    rsi += rcx;
    rcx = *((rbp - 0x48));
    r8 = *(rcx);
    r9 = *(rdi);
    r9 <<= 2;
    memmove (rsi, r8, r9);
    goto label_0;
label_4:
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40dd40 */
#include <stdint.h>
 
int64_t fcn_0040dd40 (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl() */
    eax = x157;
    ecx = y158;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rdx = *(rax);
        rdi = *(rax);
        *((rbp - 0x10)) = rax;
        std::allocator<int>::allocator() (*(rdi));
        rax = *((rbp - 0x10));
        *(rax) = 0;
        *((rax + 8)) = 0;
        *((rax + 0x10)) = 0;
        esi = x157;
        r8d = y158;
        r9d = esi;
        r9d--;
        esi *= r9d;
        esi &= 1;
        r10b = (esi == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        if ((r10b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rdx = *(rax);
        rdi = *(rax);
        *((rbp - 0x18)) = rax;
        std::allocator<int>::allocator() (*(rdi));
        rax = *((rbp - 0x18));
        *(rax) = 0;
        *((rax + 8)) = 0;
        *((rax + 0x10)) = 0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4062f0 */
#include <stdint.h>
 
uint64_t clang_call_terminate (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    eax = x23;
    ecx = y24;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rdi = *((rbp - 8));
        rax = cxa_begin_catch ();
        *((rbp - 0x10)) = rax;
        std::terminate() ();
        ecx = x23;
        edx = y24;
        esi = ecx;
        esi--;
        ecx *= esi;
        ecx &= 1;
        r8b = (ecx == 0) ? 1 : 0;
        r9b = (edx < 0xa) ? 1 : 0;
        r8b |= r9b;
        if ((r8b & 1) == 0) {
        }
        rdi = *((rbp - 8));
        rax = cxa_begin_catch ();
        *((rbp - 0x18)) = rax;
        std::terminate() ();
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40ce40 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_max_size_const (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::max_size() const */
    eax = x141;
    ecx = y142;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator()const (*(rax));
        _gnu_cxx::_alloc_traits<std::allocator<int>>::max_size(std::allocator<int>const&) (rax);
        edx = x141;
        esi = y142;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rax;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator()const (*(rax));
        rax = _gnu_cxx::_alloc_traits<std::allocator<int>>::max_size(std::allocator<int>const&) (rax);
        *((rbp - 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4073a0 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_::_Vector_impl_Vector_impl_ (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl() */
    eax = x45;
    ecx = y46;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        std::allocator<int>::~allocator() (*(rax));
        edx = x45;
        esi = y46;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        std::allocator<int>::~allocator() (*(rax));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4070f0 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_M_deallocate_int_unsigned_long_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_49h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned long) */
    eax = x43;
    ecx = y44;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x20)) = rsi;
    *((rbp - 0x28)) = rdi;
    *((rbp - 0x30)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_2;
    }
    while (1) {
label_2:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x28));
        *(rax) = rsi;
        rdi = *((rbp - 0x20));
        *(rcx) = rdi;
        r8 = *((rbp - 0x30));
        *(rdx) = r8;
        rax = *(rax);
        r9b = (*(rcx) != 0) ? 1 : 0;
        r10d = x43;
        r11d = y44;
        ebx = r10d;
        ebx--;
        r10d *= ebx;
        r10d &= 1;
        r14b = (r10d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x38)) = rcx;
        *((rbp - 0x40)) = rdx;
        *((rbp - 0x48)) = rax;
        *((rbp - 0x49)) = r9b;
        if ((r14b & 1) == 0) {
        } else {
            al = *((rbp - 0x49));
            if ((al & 1) == 0) {
            } else {
                eax = x43;
                ecx = y44;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_3;
                }
label_0:
                rax = *((rbp - 0x48));
                rcx = *((rbp - 0x38));
                rdx = *((rbp - 0x40));
                _gnu_cxx::new_allocator<int>::deallocate(int*,unsigned long) (rax, *(rcx), *(rdx));
                r8d = x43;
                r9d = y44;
                r10d = r8d;
                r10d--;
                r8d *= r10d;
                r8d &= 1;
                r11b = (r8d == 0) ? 1 : 0;
                bl = (r9d < 0xa) ? 1 : 0;
                r11b |= bl;
                if ((r11b & 1) == 0) {
                    goto label_3;
                }
            }
            eax = x43;
            ecx = y44;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
label_1:
            eax = x43;
            ecx = y44;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
            rsp = rbp - 0x18;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x28));
        *(rax) = rsi;
        rax = *((rbp - 0x20));
        *(rcx) = rax;
        rcx = *((rbp - 0x30));
        *(rdx) = rcx;
    }
label_3:
    rax = *((rbp - 0x48));
    rcx = *((rbp - 0x38));
    rdx = *((rbp - 0x40));
    _gnu_cxx::new_allocator<int>::deallocate(int*,unsigned long) (rax, *(rcx), *(rdx));
    goto label_0;
label_4:
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406cf0 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_M_get_Tp_allocator_ (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() */
    eax = x39;
    ecx = y40;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        edx = x39;
        esi = y40;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407750 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_normal_iterator_int_const_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(int const* const&) */
    eax = x53;
    ecx = y54;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rax = *(rax);
        rcx = *(rcx);
        rcx = *(rcx);
        *(rax) = rcx;
        edi = x53;
        r8d = y54;
        r9d = edi;
        r9d--;
        edi *= r9d;
        edi &= 1;
        r10b = (edi == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        if ((r10b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rax = *(rax);
        rcx = *(rcx);
        rcx = *(rcx);
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407e00 */
#include <stdint.h>
 
int64_t method_int_std::_copy_move_a2_false_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_const_std_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
    eax = x61;
    ecx = y62;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x28)) = rsi;
    *((rbp - 0x30)) = rdi;
    *((rbp - 0x38)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        *(rsi) = rax;
        rax = *(rsi);
        *((rbp - 0x40)) = rdi;
        *((rbp - 0x48)) = rcx;
        *((rbp - 0x50)) = rdx;
        rax = std::_Niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (rax);
        rcx = *((rbp - 0x48));
        rdx = *(rcx);
        rsi = *((rbp - 0x40));
        *(rsi) = rdx;
        *((rbp - 0x58)) = rax;
        rax = std::_Niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rsi));
        rcx = *((rbp - 0x50));
        *((rbp - 0x60)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        int*std::_copy_move_a<false,intconst*,int*>(intconst*,intconst*,int*) (*((rbp - 0x58)), *((rbp - 0x60)), rax);
        r11d = x61;
        ebx = y62;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x68)) = rax;
        if ((r15b & 1) == 0) {
        } else {
            rax = *((rbp - 0x68));
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        *(rsi) = rax;
        rax = *(rsi);
        *((rbp - 0x70)) = rdi;
        *((rbp - 0x78)) = rcx;
        *((rbp - 0x80)) = rdx;
        rax = std::_Niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (rax);
        rcx = *((rbp - 0x78));
        rdx = *(rcx);
        rsi = *((rbp - 0x70));
        *(rsi) = rdx;
        *((rbp - 0x88)) = rax;
        rax = std::_Niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_niter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rsi));
        rcx = *((rbp - 0x80));
        *((rbp - 0x90)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rax = int*std::_copy_move_a<false,intconst*,int*>(intconst*,intconst*,int*) (*((rbp - 0x88)), *((rbp - 0x90)), rax);
        *((rbp - 0x98)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4096e0 */
#include <stdint.h>
 
int64_t method_void_gnu_cxx::_alloc_traits_std::allocator_int_construct_int_std::allocator_int_int_int_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(std::allocator<int>&, int*, int const&) */
    eax = x95;
    ecx = y96;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::construct(int*,intconst&) (rax, *(rcx), *(rdx));
        r9d = x95;
        r10d = y96;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        if ((bl & 1) == 0) {
        } else {
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::construct(int*,intconst&) (rax, *(rcx), *(rdx));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c610 */
#include <stdint.h>
 
int64_t method_int_std_uninitialized_copy_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::uninitialized_copy<int*, int*>(int*, int*, int*) */
    eax = x129;
    ecx = y130;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        int*std::_uninitialized_copy<true>::_uninit_copy<int*,int*>(int*,int*,int*) (*(rax), *(rcx), *(rdx));
        r9d = x129;
        r10d = y130;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x30)) = rax;
        if ((bl & 1) == 0) {
        } else {
            rax = *((rbp - 0x30));
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        rax = int*std::_uninitialized_copy<true>::_uninit_copy<int*,int*>(int*,int*,int*) (*(rax), *(rcx), *(rdx));
        *((rbp - 0x38)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x404f60 */
#include <stdint.h>
 
int64_t fcn_00404f60 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::vector() */
    eax = x7;
    ecx = y8;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        std::_Vector_base<int,std::allocator<int>>::_Vector_base() (*(rax));
        edx = x7;
        esi = y8;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        std::_Vector_base<int,std::allocator<int>>::_Vector_base() (*(rax));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c2b0 */
#include <stdint.h>
 
int64_t method_void_std::_Destroy_aux_true_destroy_int_int_int_ (int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */
    eax = x123;
    ecx = y124;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
        esi = x123;
        edi = y124;
        r8d = esi;
        r8d--;
        esi *= r8d;
        esi &= 1;
        r9b = (esi == 0) ? 1 : 0;
        r10b = (edi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408b50 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_::_Vector_impl_Vector_impl_std::allocator_int_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(std::allocator<int> const&) */
    eax = x81;
    ecx = y82;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        rdi = *(rax);
        *((rbp - 0x20)) = rax;
        std::allocator<int>::allocator(std::allocator<int>const&) (*(rdi), *(rcx));
        rax = *((rbp - 0x20));
        *(rax) = 0;
        *((rax + 8)) = 0;
        *((rax + 0x10)) = 0;
        r8d = x81;
        r9d = y82;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        if ((r11b & 1) == 0) {
        } else {
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        rdi = *(rax);
        *((rbp - 0x28)) = rax;
        std::allocator<int>::allocator(std::allocator<int>const&) (*(rdi), *(rcx));
        rax = *((rbp - 0x28));
        *(rax) = 0;
        *((rax + 8)) = 0;
        *((rax + 0x10)) = 0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4068d0 */
#include <stdint.h>
 
int64_t method_int_std::_uninitialized_copy_a_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_const (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, std::allocator<int>&) */
    eax = x33;
    r8d = y34;
    r9d = eax;
    r9d--;
    eax *= r9d;
    eax &= 1;
    r10b = (eax == 0) ? 1 : 0;
    r11b = (r8d < 0xa) ? 1 : 0;
    r10b |= r11b;
    *((rbp - 0x30)) = rdx;
    *((rbp - 0x38)) = rsi;
    *((rbp - 0x40)) = rdi;
    *((rbp - 0x48)) = rcx;
    if ((r10b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = rdi;
        r8 += 0xfffffffffffffff0;
        r9 = *((rbp - 0x40));
        *(rax) = r9;
        r10 = *((rbp - 0x38));
        *(rcx) = r10;
        r11 = *((rbp - 0x30));
        *(rdx) = r11;
        rbx = *((rbp - 0x48));
        *(rsi) = rbx;
        rax = *(rax);
        *(rdi) = rax;
        rax = *(rcx);
        *(r8) = rax;
        int*std::uninitialized_copy<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (*(rdi), *(r8), *(rdx));
        r14d = x33;
        r15d = y34;
        r12d = r14d;
        r12d--;
        r14d *= r12d;
        r14d &= 1;
        r13b = (r14d == 0) ? 1 : 0;
        cl = (r15d < 0xa) ? 1 : 0;
        r13b |= cl;
        *((rbp - 0x50)) = rax;
        if ((r13b & 1) == 0) {
        } else {
            rax = *((rbp - 0x50));
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = rdi;
        r8 += 0xfffffffffffffff0;
        r9 = *((rbp - 0x40));
        *(rax) = r9;
        r10 = *((rbp - 0x38));
        *(rcx) = r10;
        r11 = *((rbp - 0x30));
        *(rdx) = r11;
        rbx = *((rbp - 0x48));
        *(rsi) = rbx;
        rax = *(rax);
        *(rdi) = rax;
        rax = *(rcx);
        *(r8) = rax;
        rax = int*std::uninitialized_copy<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (*(rdi), *(r8), *(rdx));
        *((rbp - 0x58)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40dc60 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_Vector_base_ (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_Vector_base() */
    eax = x155;
    ecx = y156;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl() (*(rax));
        edx = x155;
        esi = y156;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl() (*(rax));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x405ae0 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_vector_std::vector_int_std::allocator_int_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_118h;
    int64_t var_110h;
    int64_t var_108h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    int64_t var_a8h;
    int64_t var_a0h;
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rsi = arg2;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::vector(std::vector<int, std::allocator<int> > const&) */
    eax = x21;
    ecx = y22;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x30)) = rdi;
    *((rbp - 0x38)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_4;
    }
    while (1) {
label_4:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = rdi;
        r8 += 0xfffffffffffffff0;
        r9 = *((rbp - 0x30));
        *(rax) = r9;
        r10 = *((rbp - 0x38));
        *(rcx) = r10;
        rax = *(rax);
        r11 = *(rax);
        rbx = *(rcx);
        *((rbp - 0x40)) = rdi;
        *((rbp - 0x48)) = rcx;
        *((rbp - 0x50)) = rdx;
        *((rbp - 0x58)) = rsi;
        *((rbp - 0x60)) = r11;
        *((rbp - 0x68)) = r8;
        *((rbp - 0x70)) = rax;
        rax = std::vector<int,std::allocator<int>>::size()const (rbx);
        rcx = *((rbp - 0x48));
        rdx = *(rcx);
        *((rbp - 0x78)) = rax;
        rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator()const (*(rcx));
        rax = _gnu_cxx::_alloc_traits<std::allocator<int>>::_S_select_on_copy(std::allocator<int>const&) (rax);
        std::_Vector_base<int,std::allocator<int>>::_Vector_base(unsigned long,std::allocator<int>const&) (*((rbp - 0x60)), *((rbp - 0x78)), rax);
        rax = *((rbp - 0x48));
        rdi = *(rax);
        r14d = x21;
        r15d = y22;
        r12d = r14d;
        r12d--;
        r14d *= r12d;
        r14d &= 1;
        r13b = (r14d == 0) ? 1 : 0;
        al = (r15d < 0xa) ? 1 : 0;
        r13b |= al;
        *((rbp - 0x80)) = rdi;
        if ((r13b & 1) == 0) {
        } else {
            rax = std::vector<int,std::allocator<int>>::begin()const (*((rbp - 0x80)));
            *((rbp - 0x88)) = rax;
            eax = x21;
            ecx = y22;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_5;
            }
label_0:
            rax = *((rbp - 0x50));
            rcx = *((rbp - 0x88));
            *(rax) = rcx;
            rdx = *((rbp - 0x48));
            rdi = *(rdx);
            esi = x21;
            r8d = y22;
            r9d = esi;
            r9d--;
            esi *= r9d;
            esi &= 1;
            r10b = (esi == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0x90)) = rdi;
            if ((r10b & 1) == 0) {
                goto label_5;
            }
            rax = std::vector<int,std::allocator<int>>::end()const (*((rbp - 0x90)));
            *((rbp - 0x98)) = rax;
            eax = x21;
            ecx = y22;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_6;
            }
label_1:
            rax = *((rbp - 0x68));
            rcx = *((rbp - 0x98));
            *(rax) = rcx;
            rdx = *((rbp - 0x70));
            rdx = *(rdx);
            rsi = *((rbp - 0x70));
            edi = x21;
            r8d = y22;
            r9d = edi;
            r9d--;
            edi *= r9d;
            edi &= 1;
            r10b = (edi == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0xa0)) = rdx;
            *((rbp - 0xa8)) = rsi;
            if ((r10b & 1) == 0) {
                goto label_6;
            }
            rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator() (*((rbp - 0xa8)));
            *((rbp - 0xb0)) = rax;
            eax = x21;
            ecx = y22;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_7;
            }
label_2:
            rax = *((rbp - 0x50));
            rdi = *(rax);
            rcx = *((rbp - 0x68));
            rsi = *(rcx);
            edx = x21;
            r8d = y22;
            r9d = edx;
            r9d--;
            edx *= r9d;
            edx &= 1;
            r10b = (edx == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0xb8)) = rdi;
            *((rbp - 0xc0)) = rsi;
            if ((r10b & 1) == 0) {
                goto label_7;
            }
            rax = int*std::_uninitialized_copy_a<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*,int>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*,std::allocator<int>&) (*((rbp - 0xb8)), *((rbp - 0xc0)), *((rbp - 0xa0)), *((rbp - 0xb0)));
            *((rbp - 0xc8)) = rax;
            eax = x21;
            ecx = y22;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_8;
            }
label_3:
            rax = *((rbp - 0x70));
            rcx = *((rbp - 0xc8));
            *((rax + 8)) = rcx;
            edx = x21;
            esi = y22;
            edi = edx;
            edi--;
            edx *= edi;
            edx &= 1;
            r8b = (edx == 0) ? 1 : 0;
            r9b = (esi < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_8;
            }
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x30));
        *(rax) = rdx;
        rsi = *((rbp - 0x38));
        *(rcx) = rsi;
        rax = *(rax);
        rdi = *(rcx);
        *((rbp - 0x108)) = rcx;
        *((rbp - 0x110)) = rax;
        rax = std::vector<int,std::allocator<int>>::size()const (*(rdi));
        rcx = *((rbp - 0x108));
        rdx = *(rcx);
        *((rbp - 0x118)) = rax;
        rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator()const (*(rcx));
        rax = _gnu_cxx::_alloc_traits<std::allocator<int>>::_S_select_on_copy(std::allocator<int>const&) (rax);
        std::_Vector_base<int,std::allocator<int>>::_Vector_base(unsigned long,std::allocator<int>const&) (*((rbp - 0x110)), *((rbp - 0x118)), rax);
    }
label_5:
    rax = *((rbp - 0x50));
    rcx = *((rbp - 0x88));
    *(rax) = rcx;
    goto label_0;
label_6:
    rax = *((rbp - 0x68));
    rcx = *((rbp - 0x98));
    *(rax) = rcx;
    goto label_1;
label_7:
    goto label_2;
label_8:
    rax = *((rbp - 0x70));
    rcx = *((rbp - 0xc8));
    *((rax + 8)) = rcx;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c1a0 */
#include <stdint.h>
 
int64_t method_void_std_Destroy_int_int_int_ (int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* void std::_Destroy<int*>(int*, int*) */
    eax = x121;
    ecx = y122;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        voidstd::_Destroy_aux<true>::_destroy<int*>(int*,int*) (*(rax), *(rcx));
        r8d = x121;
        r9d = y122;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        if ((r11b & 1) == 0) {
        } else {
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        voidstd::_Destroy_aux<true>::_destroy<int*>(int*,int*) (*(rax), *(rcx));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4063b0 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_alloc_traits_std::allocator_int_S_select_on_copy_std::allocator_int_const_ (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(std::allocator<int> const&) */
    eax = x27;
    ecx = y28;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        edx = x27;
        esi = y28;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407a00 */
#include <stdint.h>
 
int64_t method_int_std::_uninitialized_copy_true_::_uninit_copy_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_itera (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
    eax = x57;
    ecx = y58;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x28)) = rsi;
    *((rbp - 0x30)) = rdi;
    *((rbp - 0x38)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        *(rsi) = rax;
        rax = *(rcx);
        *(rdi) = rax;
        rax = *(rsi);
        int*std::copy<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (rax, *(rdi), *(rdx));
        r11d = x57;
        ebx = y58;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x40)) = rax;
        if ((r15b & 1) == 0) {
        } else {
            rax = *((rbp - 0x40));
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        *(rsi) = rax;
        rax = *(rcx);
        *(rdi) = rax;
        rax = *(rsi);
        rax = int*std::copy<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (rax, *(rdi), *(rdx));
        *((rbp - 0x48)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4083b0 */
#include <stdint.h>
 
int64_t method_std::_Niter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::iterator_type_std::_niter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_in (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    eax = x69;
    ecx = y70;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *(rax);
        *(rcx) = rax;
        std::_Iter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,true>::_S_base(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rcx));
        esi = x69;
        r8d = y70;
        r9d = esi;
        r9d--;
        esi *= r9d;
        esi &= 1;
        r10b = (esi == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        *((rbp - 0x10)) = rax;
        if ((r10b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *(rax);
        *(rcx) = rax;
        rax = std::_Iter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,true>::_S_base(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rcx));
        *((rbp - 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40bcc0 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_begin_ (int64_t arg1) {
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::begin() */
    eax = x113;
    ecx = y114;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x10)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rcx) = rdx;
        rcx = *(rcx);
        rdi = rax;
        *((rbp - 0x18)) = rax;
        _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::_normal_iterator(int*const&) (rdi, rcx);
        rax = *((rbp - 0x18));
        rax = *(rax);
        r8d = x113;
        r9d = y114;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x20)) = rax;
        if ((r11b & 1) == 0) {
        } else {
            rax = *((rbp - 0x20));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rcx) = rdx;
        rcx = *(rcx);
        _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::_normal_iterator(int*const&) (rax, rcx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4085a0 */
#include <stdint.h>
 
int64_t method_std::_Iter_base_int_false_S_base_int_ (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Iter_base<int*, false>::_S_base(int*) */
    eax = x73;
    ecx = y74;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        edx = x73;
        esi = y74;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4095f0 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_new_allocator_gnu_cxx::new_allocator_int_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&) */
    eax = x93;
    ecx = y94;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
        esi = x93;
        edi = y94;
        r8d = esi;
        r8d--;
        esi *= r8d;
        esi &= 1;
        r9b = (esi == 0) ? 1 : 0;
        r10b = (edi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x409820 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_M_insert_aux_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_int_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_218h;
    int64_t var_210h;
    int64_t var_208h;
    int64_t var_1f4h;
    int64_t var_1f0h;
    int64_t var_1c8h;
    int64_t var_1c0h;
    int64_t var_1b8h;
    int64_t var_138h;
    int64_t var_130h;
    int64_t var_128h;
    int64_t var_120h;
    int64_t var_118h;
    int64_t var_110h;
    int64_t var_108h;
    int64_t var_100h;
    int64_t var_f8h;
    int64_t var_f0h;
    int64_t var_e8h;
    int64_t var_e0h;
    int64_t var_d8h;
    int64_t var_d0h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_ach;
    int64_t var_a8h;
    int64_t var_a0h;
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_61h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::_M_insert_aux(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */
    eax = x97;
    ecx = y98;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_11;
    }
    while (1) {
label_11:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = rdi;
        r8 += 0xfffffffffffffff0;
        r9 = r8;
        r9 += 0xfffffffffffffff0;
        r10 = r9;
        r10 += 0xfffffffffffffff0;
        r11 = r10;
        r11 += 0xfffffffffffffff0;
        rbx = r11;
        rbx += 0xfffffffffffffff0;
        r14 = rbx;
        r14 += 0xfffffffffffffff0;
        r15 = *((rbp - 0x30));
        *(rax) = r15;
        r12 = *((rbp - 0x38));
        *(rcx) = r12;
        r13 = *((rbp - 0x40));
        *(rdx) = r13;
        rcx = *(rcx);
        r15 = *((rcx + 8));
        r15b = (r15 != *((rcx + 0x10))) ? 1 : 0;
        r12d = x97;
        r13d = y98;
        *((rbp - 0x48)) = rsi;
        esi = r12d;
        esi--;
        r12d *= esi;
        r12d &= 1;
        sil = (r12d == 0) ? 1 : 0;
        r12b = (r13d < 0xa) ? 1 : 0;
        sil |= r12b;
        *((rbp - 0x50)) = rax;
        *((rbp - 0x58)) = rcx;
        *((rbp - 0x60)) = rdx;
        *((rbp - 0x61)) = r15b;
        *((rbp - 0x70)) = rdi;
        *((rbp - 0x78)) = r8;
        *((rbp - 0x80)) = r9;
        *((rbp - 0x88)) = r10;
        *((rbp - 0x90)) = r11;
        *((rbp - 0x98)) = rbx;
        *((rbp - 0xa0)) = r14;
        if ((sil & 1) == 0) {
        } else {
            al = *((rbp - 0x61));
            if ((al & 1) == 0) {
            } else {
                eax = x97;
                ecx = y98;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_12;
                }
label_0:
                rax = *((rbp - 0x58));
                rcx = *((rbp - 0x58));
                rsi = *((rcx + 8));
                rdx += 0xfffffffffffffffc;
                void_gnu_cxx::_alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&,int*,intconst&) (rax, *(rsi), *((rcx + 8)));
                rax = *((rbp - 0x58));
                rcx = *((rax + 8));
                rcx += 4;
                *((rax + 8)) = rcx;
                rcx = *((rbp - 0x60));
                rdx = *(rcx);
                r8d = *(rdx);
                rdx = *((rbp - 0x48));
                *(rdx) = r8d;
                rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*((rbp - 0x50)));
                rax = *((rbp - 0x58));
                rcx = *((rax + 8));
                rcx += 0xfffffffffffffff8;
                rdx += 0xfffffffffffffffc;
                rax = int*std::copy_backward<int*,int*>(int*,int*,int*) (*(rax), rcx, *((rax + 8)));
                rcx = *((rbp - 0x48));
                r8d = *(rcx);
                *((rbp - 0xa8)) = rax;
                *((rbp - 0xac)) = r8d;
                _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*()const (*((rbp - 0x50)));
                r8d = *((rbp - 0xac));
                *(rax) = r8d;
                r8d = x97;
                r9d = y98;
                r10d = r8d;
                r10d--;
                r8d *= r10d;
                r8d &= 1;
                r11b = (r8d == 0) ? 1 : 0;
                bl = (r9d < 0xa) ? 1 : 0;
                r11b |= bl;
                if ((r11b & 1) == 0) {
                    goto label_12;
                }
                goto label_13;
            }
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_14;
            }
label_1:
            eax = 1;
            rdx = "vector::_M_insert_aux";
            rax = std::vector<int,std::allocator<int>>::_M_check_len(unsigned long,char const*)const (*((rbp - 0x58)), 1, rdx);
            rdx = *((rbp - 0x70));
            *(rdx) = rax;
            rax = std::vector<int,std::allocator<int>>::begin() (*((rbp - 0x58)));
            rdx = *((rbp - 0x80));
            *(rdx) = rax;
            rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::difference_type_gnu_cxx::operator-<int*,std::vector<int,std::allocator<int>>>(_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>const&,_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>const&) (*((rbp - 0x50)), rdx);
            rdx = *((rbp - 0x78));
            *(rdx) = rax;
            rax = *((rbp - 0x58));
            rsi = *((rbp - 0x70));
            rax = std::_Vector_base<int,std::allocator<int>>::_M_allocate(unsigned long) (rax, *(rsi));
            rdx = *((rbp - 0x88));
            *(rdx) = rax;
            rax = *(rdx);
            rsi = *((rbp - 0x90));
            *(rsi) = rax;
            rax = *((rbp - 0x58));
            rdi = *(rdx);
            rcx = *((rbp - 0x78));
            r8 = *(rcx);
            r8 <<= 2;
            rdi += r8;
            r8 = *((rbp - 0x60));
            rdx = *(r8);
            r9d = x97;
            r10d = y98;
            r11d = r9d;
            r11d--;
            r9d *= r11d;
            r9d &= 1;
            bl = (r9d == 0) ? 1 : 0;
            r14b = (r10d < 0xa) ? 1 : 0;
            bl |= r14b;
            *((rbp - 0xb8)) = rdx;
            *((rbp - 0xc0)) = rax;
            *((rbp - 0xc8)) = rdi;
            if ((bl & 1) == 0) {
                goto label_14;
            }
            void_gnu_cxx::_alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&,int*,intconst&) (*((rbp - 0xc0)), *((rbp - 0xc8)), *((rbp - 0xb8)));
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_15;
            }
label_2:
            rax = *((rbp - 0x90));
            *(rax) = 0;
            rcx = *((rbp - 0x58));
            rdi = *(rcx);
            edx = x97;
            esi = y98;
            r8d = edx;
            r8d--;
            edx *= r8d;
            edx &= 1;
            r9b = (edx == 0) ? 1 : 0;
            r10b = (esi < 0xa) ? 1 : 0;
            r9b |= r10b;
            *((rbp - 0xd0)) = rdi;
            if ((r9b & 1) == 0) {
                goto label_15;
            }
            rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*((rbp - 0x50)));
            *((rbp - 0xd8)) = rax;
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_16;
            }
label_3:
            rax = *((rbp - 0xd8));
            rsi = *(rax);
            rcx = *((rbp - 0x88));
            rdx = *(rcx);
            rdi = *((rbp - 0x58));
            r8d = x97;
            r9d = y98;
            r10d = r8d;
            r10d--;
            r8d *= r10d;
            r8d &= 1;
            r11b = (r8d == 0) ? 1 : 0;
            bl = (r9d < 0xa) ? 1 : 0;
            r11b |= bl;
            *((rbp - 0xe0)) = rsi;
            *((rbp - 0xe8)) = rdx;
            *((rbp - 0xf0)) = rdi;
            if ((r11b & 1) == 0) {
                goto label_16;
            }
            rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator() (*((rbp - 0xf0)));
            *((rbp - 0xf8)) = rax;
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_17;
            }
label_4:
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_17;
            }
            rax = int*std::_uninitialized_move_if_noexcept_a<int*,int*,std::allocator<int>>(int*,int*,int*,std::allocator<int>&) (*((rbp - 0xd0)), *((rbp - 0xe0)), *((rbp - 0xe8)), *((rbp - 0xf8)));
            *((rbp - 0x100)) = rax;
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_18;
            }
label_5:
            rax = *((rbp - 0x90));
            rcx = *((rbp - 0x100));
            *(rax) = rcx;
            rdx = *(rax);
            rdx += 4;
            *(rax) = rdx;
            esi = x97;
            edi = y98;
            r8d = esi;
            r8d--;
            esi *= r8d;
            esi &= 1;
            r9b = (esi == 0) ? 1 : 0;
            r10b = (edi < 0xa) ? 1 : 0;
            r9b |= r10b;
            if ((r9b & 1) == 0) {
                goto label_18;
            }
            rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*((rbp - 0x50)));
            *((rbp - 0x108)) = rax;
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_19;
            }
label_6:
            rax = *((rbp - 0x108));
            rdi = *(rax);
            rcx = *((rbp - 0x58));
            rsi = *((rcx + 8));
            rdx = *((rbp - 0x90));
            rdx = *(rdx);
            r8d = x97;
            r9d = y98;
            r10d = r8d;
            r10d--;
            r8d *= r10d;
            r8d &= 1;
            r11b = (r8d == 0) ? 1 : 0;
            bl = (r9d < 0xa) ? 1 : 0;
            r11b |= bl;
            *((rbp - 0x110)) = rdi;
            *((rbp - 0x118)) = rcx;
            *((rbp - 0x120)) = rsi;
            *((rbp - 0x128)) = rdx;
            if ((r11b & 1) == 0) {
                goto label_19;
            }
            rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator() (*((rbp - 0x118)));
            *((rbp - 0x130)) = rax;
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_20;
            }
label_7:
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_20;
            }
            rax = int*std::_uninitialized_move_if_noexcept_a<int*,int*,std::allocator<int>>(int*,int*,int*,std::allocator<int>&) (*((rbp - 0x110)), *((rbp - 0x120)), *((rbp - 0x128)), *((rbp - 0x130)));
            *((rbp - 0x138)) = rax;
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_21;
            }
label_8:
            rax = *((rbp - 0x90));
            rcx = *((rbp - 0x138));
            *(rax) = rcx;
            edx = x97;
            esi = y98;
            edi = edx;
            edi--;
            edx *= edi;
            edx &= 1;
            r8b = (edx == 0) ? 1 : 0;
            r9b = (esi < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_21;
            }
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_22;
            }
label_9:
            rax = *((rbp - 0x58));
            rdi = *(rax);
            rsi = *((rax + 8));
            *((rbp - 0x1b8)) = rdi;
            *((rbp - 0x1c0)) = rsi;
            rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator() (rax);
            voidstd::_Destroy<int*,int>(int*,int*,std::allocator<int>&) (*((rbp - 0x1b8)), *((rbp - 0x1c0)), rax);
            rax = *((rbp - 0x58));
            rdx = *((rbp - 0x58));
            rsi = *(rdx);
            rdi = *((rdx + 0x10));
            rcx = *(rdx);
            rdi -= rcx;
            rdi >>= 2;
            *((rbp - 0x1c8)) = rdi;
            std::_Vector_base<int,std::allocator<int>>::_M_deallocate(int*,unsigned long) (rax, *(rsi), *((rbp - 0x1c8)));
            rax = *((rbp - 0x88));
            rcx = *(rax);
            rdx = *((rbp - 0x58));
            *(rdx) = rcx;
            rcx = *((rbp - 0x90));
            rsi = *(rcx);
            *((rdx + 8)) = rsi;
            rsi = *(rax);
            rdi = *((rbp - 0x70));
            r8 = *(rdi);
            r8 <<= 2;
            rsi += r8;
            *((rdx + 0x10)) = rsi;
            r9d = x97;
            r10d = y98;
            r11d = r9d;
            r11d--;
            r9d *= r11d;
            r9d &= 1;
            bl = (r9d == 0) ? 1 : 0;
            r14b = (r10d < 0xa) ? 1 : 0;
            bl |= r14b;
            if ((bl & 1) == 0) {
                goto label_22;
            }
label_13:
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_23;
            }
label_10:
            eax = x97;
            ecx = y98;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_23;
            }
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x30));
        *(rax) = rsi;
        rax = *((rbp - 0x38));
        *(rcx) = rax;
        rcx = *((rbp - 0x40));
        *(rdx) = rcx;
    }
label_12:
    rax = *((rbp - 0x58));
    rcx = *((rbp - 0x58));
    rsi = *((rcx + 8));
    rdx += 0xfffffffffffffffc;
    void_gnu_cxx::_alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&,int*,intconst&) (rax, *(rsi), *((rcx + 8)));
    rax = *((rbp - 0x58));
    rcx = *((rax + 8));
    rcx += 4;
    *((rax + 8)) = rcx;
    rcx = *((rbp - 0x60));
    rdx = *(rcx);
    r8d = *(rdx);
    rdx = *((rbp - 0x48));
    *(rdx) = r8d;
    rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*((rbp - 0x50)));
    rax = *((rbp - 0x58));
    rcx = *((rax + 8));
    rcx += 0xfffffffffffffff8;
    rdx += 0xfffffffffffffffc;
    rax = int*std::copy_backward<int*,int*>(int*,int*,int*) (*(rax), rcx, *((rax + 8)));
    rcx = *((rbp - 0x48));
    r8d = *(rcx);
    *((rbp - 0x1f0)) = rax;
    *((rbp - 0x1f4)) = r8d;
    _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator*()const (*((rbp - 0x50)));
    r8d = *((rbp - 0x1f4));
    *(rax) = r8d;
    goto label_0;
label_14:
    eax = 1;
    rdx = "vector::_M_insert_aux";
    rax = std::vector<int,std::allocator<int>>::_M_check_len(unsigned long,char const*)const (*((rbp - 0x58)), 1, rdx);
    rdx = *((rbp - 0x70));
    *(rdx) = rax;
    rax = std::vector<int,std::allocator<int>>::begin() (*((rbp - 0x58)));
    rdx = *((rbp - 0x80));
    *(rdx) = rax;
    rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::difference_type_gnu_cxx::operator-<int*,std::vector<int,std::allocator<int>>>(_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>const&,_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>const&) (*((rbp - 0x50)), rdx);
    rdx = *((rbp - 0x78));
    *(rdx) = rax;
    rax = *((rbp - 0x58));
    rsi = *((rbp - 0x70));
    rax = std::_Vector_base<int,std::allocator<int>>::_M_allocate(unsigned long) (rax, *(rsi));
    rdx = *((rbp - 0x88));
    *(rdx) = rax;
    rax = *(rdx);
    rsi = *((rbp - 0x90));
    *(rsi) = rax;
    goto label_1;
label_15:
    rax = *((rbp - 0x90));
    *(rax) = 0;
    goto label_2;
label_16:
    goto label_3;
label_17:
    goto label_4;
label_18:
    rax = *((rbp - 0x90));
    rcx = *((rbp - 0x100));
    *(rax) = rcx;
    rdx = *(rax);
    rdx += 4;
    *(rax) = rdx;
    goto label_5;
label_19:
    goto label_6;
label_20:
    goto label_7;
label_21:
    rax = *((rbp - 0x90));
    rcx = *((rbp - 0x138));
    *(rax) = rcx;
    goto label_8;
label_22:
    rax = *((rbp - 0x58));
    rdi = *(rax);
    rsi = *((rax + 8));
    *((rbp - 0x208)) = rdi;
    *((rbp - 0x210)) = rsi;
    rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator() (rax);
    voidstd::_Destroy<int*,int>(int*,int*,std::allocator<int>&) (*((rbp - 0x208)), *((rbp - 0x210)), rax);
    rax = *((rbp - 0x58));
    rdx = *((rbp - 0x58));
    rsi = *(rdx);
    rdi = *((rdx + 0x10));
    rcx = *(rdx);
    rdi -= rcx;
    rdi >>= 2;
    *((rbp - 0x218)) = rdi;
    std::_Vector_base<int,std::allocator<int>>::_M_deallocate(int*,unsigned long) (rax, *(rsi), *((rbp - 0x218)));
    rax = *((rbp - 0x88));
    rcx = *(rax);
    rdx = *((rbp - 0x58));
    *(rdx) = rcx;
    rcx = *((rbp - 0x90));
    rsi = *(rcx);
    *((rdx + 8)) = rsi;
    rsi = *(rax);
    rdi = *((rbp - 0x70));
    r8 = *(rdi);
    r8 <<= 2;
    rsi += r8;
    *((rdx + 0x10)) = rsi;
    goto label_9;
label_23:
    goto label_10;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e5b0 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = edi;
    r14 = rsi;
    r13 = rdx;
    r12 = obj___frame_dummy_init_array_entry;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r12;
    ebx = 0;
    rbp >>= 3;
    _init ();
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
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407480 */
#include <stdint.h>
 
int64_t method_std::allocator_int_allocator_ (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* std::allocator<int>::~allocator() */
    eax = x47;
    ecx = y48;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::~new_allocator() (*(rax));
        edx = x47;
        esi = y48;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::~new_allocator() (*(rax));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x404350 */
#include <stdint.h>
 
int64_t start_quest_std::string_ (int64_t arg1) {
    int64_t var_88h;
    int64_t var_5ch;
    int64_t var_48h;
    int64_t var_41h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rdi = arg1;
    /* start_quest(std::string) */
    eax = x25;
    ecx = y26;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x20)) = rdi;
    if ((sil & 1) != 0) {
        goto label_4;
    }
    while (1) {
label_4:
        rdi = hero;
        rsi = obj.secret_100;
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        r8 = rdx;
        r8 += 0xfffffffffffffff0;
        *((rbp - 0x28)) = r8;
        *((rbp - 0x30)) = rdx;
        *((rbp - 0x38)) = rax;
        *((rbp - 0x40)) = rcx;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = obj.secret_214;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = obj.secret_266;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = obj.secret_369;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_417;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_527;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_622;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_733;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_847;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_942;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1054;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1106;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1222;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1336;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1441;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1540;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1589;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1686;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1796;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1891;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1996;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2112;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2165;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2260;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2336;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2412;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2498;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2575;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = *((rbp - 0x20));
        rax = std::string::length()const ();
        rax--;
        r9d = *(obj.legend);
        r9d >>= 2;
        rcx = (int64_t) r9d;
        r10b = (rax != rcx) ? 1 : 0;
        r9d = x25;
        r11d = y26;
        ebx = r9d;
        ebx--;
        r9d *= ebx;
        r9d &= 1;
        r14b = (r9d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x41)) = r10b;
        if ((r14b & 1) == 0) {
        } else {
            al = *((rbp - 0x41));
            if ((al & 1) == 0) {
            } else {
                eax = x25;
                ecx = y26;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_5;
                }
label_0:
                eax = *(obj.legend);
                eax >>= 2;
                rcx = *((rbp - 0x38));
                *(rcx) = eax;
                eax = x25;
                edx = y26;
                esi = eax;
                esi--;
                eax *= esi;
                eax &= 1;
                dil = (eax == 0) ? 1 : 0;
                r8b = (edx < 0xa) ? 1 : 0;
                dil |= r8b;
                if ((dil & 1) == 0) {
                    goto label_5;
                }
                goto label_6;
            }
            eax = x25;
            ecx = y26;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_7;
            }
label_1:
            rdi = *((rbp - 0x40));
            rsi = *((rbp - 0x20));
            std::string (std::string const&) ();
            eax = x25;
            ecx = y26;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            r8b = (eax == 0) ? 1 : 0;
            r9b = (ecx < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_7;
            }
            rdi = *((rbp - 0x40));
            eax = sanitize_input(std::string) ();
            *((rbp - 0x48)) = eax;
            eax = x25;
            ecx = y26;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_8;
            }
label_2:
            rax = *((rbp - 0x38));
            ecx = *((rbp - 0x48));
            *(rax) = ecx;
            rdi = *((rbp - 0x40));
            std::~string () ();
            ecx = x25;
            edx = y26;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            r8b = (ecx == 0) ? 1 : 0;
            r9b = (edx < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_8;
            }
label_6:
            eax = x25;
            ecx = y26;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_9;
            }
label_3:
            rax = *((rbp - 0x38));
            eax = *(rax);
            ecx = x25;
            edx = y26;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            *((rbp - 0x5c)) = eax;
            if ((dil & 1) == 0) {
                goto label_9;
            }
            eax = *((rbp - 0x5c));
            rsp = rbp - 0x18;
            return rax;
        }
        rdi = hero;
        rsi = obj.secret_100;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = obj.secret_214;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = obj.secret_266;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = obj.secret_369;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_417;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_527;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_622;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_733;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_847;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_942;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1054;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1106;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1222;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1336;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1441;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1540;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1589;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1686;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1796;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1891;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_1996;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2112;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2165;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2260;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2336;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2412;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2498;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = hero;
        rsi = secret_2575;
        std::vector<int,std::allocator<int>>::push_back(intconst&) (rdi, rsi);
        rdi = *((rbp - 0x20));
        rax = std::string::length()const ();
        *((rbp - 0x88)) = rax;
    }
label_5:
    eax = *(obj.legend);
    eax >>= 2;
    rcx = *((rbp - 0x38));
    *(rcx) = eax;
    goto label_0;
label_7:
    rdi = *((rbp - 0x40));
    rsi = *((rbp - 0x20));
    std::string (std::string const&) ();
    goto label_1;
label_8:
    rax = *((rbp - 0x38));
    ecx = *((rbp - 0x48));
    *(rax) = ecx;
    rdi = *((rbp - 0x40));
    std::~string () ();
    goto label_2;
label_9:
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40b090 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_normal_iterator_int_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(int* const&) */
    eax = x101;
    ecx = y102;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rax = *(rax);
        rcx = *(rcx);
        rcx = *(rcx);
        *(rax) = rcx;
        edi = x101;
        r8d = y102;
        r9d = edi;
        r9d--;
        edi *= r9d;
        edi &= 1;
        r10b = (edi == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        if ((r10b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rax = *(rax);
        rcx = *(rcx);
        rcx = *(rcx);
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406bc0 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_end_const (int64_t arg1) {
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::end() const */
    eax = x37;
    ecx = y38;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x10)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rcx = *(rcx);
        rcx = *((rcx + 8));
        *(rdx) = rcx;
        rdi = rax;
        *((rbp - 0x18)) = rax;
        _gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>::_normal_iterator(intconst*const&) (rdi, rdx);
        rax = *((rbp - 0x18));
        rax = *(rax);
        r8d = x37;
        r9d = y38;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x20)) = rax;
        if ((r11b & 1) == 0) {
        } else {
            rax = *((rbp - 0x20));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rcx = *(rcx);
        rcx = *((rcx + 8));
        *(rdx) = rcx;
        _gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>::_normal_iterator(intconst*const&) (rax, rdx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c490 */
#include <stdint.h>
 
int64_t method_int_std_uninitialized_copy_a_int_int_int_int_int_int_std::allocator_int_ (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__uninitialized_copy_a<int*, int*, int>(int*, int*, int*, std::allocator<int>&) */
    eax = x127;
    r8d = y128;
    r9d = eax;
    r9d--;
    eax *= r9d;
    eax &= 1;
    r10b = (eax == 0) ? 1 : 0;
    r11b = (r8d < 0xa) ? 1 : 0;
    r10b |= r11b;
    *((rbp - 0x28)) = rdx;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rcx;
    if ((r10b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x28));
        *(rdx) = r9;
        r10 = *((rbp - 0x40));
        *(rsi) = r10;
        int*std::uninitialized_copy<int*,int*>(int*,int*,int*) (*(rax), *(rcx), *(rdx));
        r11d = x127;
        ebx = y128;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x48)) = rax;
        if ((r15b & 1) == 0) {
        } else {
            rax = *((rbp - 0x48));
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x38));
        *(rax) = rdi;
        r8 = *((rbp - 0x30));
        *(rcx) = r8;
        r9 = *((rbp - 0x28));
        *(rdx) = r9;
        r10 = *((rbp - 0x40));
        *(rsi) = r10;
        rax = int*std::uninitialized_copy<int*,int*>(int*,int*,int*) (*(rax), *(rcx), *(rdx));
        *((rbp - 0x50)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408240 */
#include <stdint.h>
 
int64_t method_int_std_copy_move_a_false_int_const_int_int_const_int_const_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */
    eax = x67;
    ecx = y68;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x20)) = rsi;
    *((rbp - 0x28)) = rdi;
    *((rbp - 0x30)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x28));
        *(rax) = rdi;
        r8 = *((rbp - 0x20));
        *(rcx) = r8;
        r9 = *((rbp - 0x30));
        *(rdx) = r9;
        *(rsi) = 1;
        int*std::_copy_move<false,true,std::random_access_iterator_tag>::_copy_m<int>(intconst*,intconst*,int*) (*(rax), *(rcx), *(rdx));
        r10d = x67;
        r11d = y68;
        ebx = r10d;
        ebx--;
        r10d *= ebx;
        r10d &= 1;
        r14b = (r10d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x38)) = rax;
        if ((r14b & 1) == 0) {
        } else {
            rax = *((rbp - 0x38));
            rsp = rbp - 0x18;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = *((rbp - 0x28));
        *(rax) = rdi;
        r8 = *((rbp - 0x20));
        *(rcx) = r8;
        r9 = *((rbp - 0x30));
        *(rdx) = r9;
        *(rsi) = 1;
        rax = int*std::_copy_move<false,true,std::random_access_iterator_tag>::_copy_m<int>(intconst*,intconst*,int*) (*(rax), *(rcx), *(rdx));
        *((rbp - 0x40)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x405040 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_vector_ (int64_t arg1) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::~vector() */
    eax = x9;
    ecx = y10;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x18)) = rdi;
    if ((sil & 1) != 0) {
        goto label_2;
    }
    while (1) {
label_2:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x18));
        *(rax) = rsi;
        rax = *(rax);
        rdi = *(rax);
        rsi = *((rax + 8));
        r8 = rax;
        r9d = x9;
        r10d = y10;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x20)) = rsi;
        *((rbp - 0x28)) = rcx;
        *((rbp - 0x30)) = rdx;
        *((rbp - 0x38)) = rax;
        *((rbp - 0x40)) = rdi;
        *((rbp - 0x48)) = r8;
        if ((bl & 1) == 0) {
        } else {
            rax = std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator() (*((rbp - 0x48)));
            *((rbp - 0x50)) = rax;
            eax = x9;
            ecx = y10;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_3;
            }
label_0:
            eax = x9;
            ecx = y10;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_3;
            }
            voidstd::_Destroy<int*,int>(int*,int*,std::allocator<int>&) (*((rbp - 0x40)), *((rbp - 0x20)), *((rbp - 0x50)));
            eax = x9;
            ecx = y10;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
label_1:
            rax = *((rbp - 0x38));
            std::_Vector_base<int,std::allocator<int>>::~_Vector_base() (*((rbp - 0x38)));
            ecx = x9;
            edx = y10;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            r8b = (ecx == 0) ? 1 : 0;
            r9b = (edx < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_4;
            }
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 0x18));
        *(rax) = rcx;
    }
label_3:
    goto label_0;
label_4:
    rax = *((rbp - 0x38));
    std::_Vector_base<int,std::allocator<int>>::~_Vector_base() (*((rbp - 0x38)));
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408760 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_base_const (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base() const */
    eax = x77;
    ecx = y78;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        edx = x77;
        esi = y78;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4014b0 */
#include <stdint.h>
 
int64_t transform_input_std::vector_int_std::allocator_int_ (int64_t arg1) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_3ch;
    int64_t var_35h;
    int64_t var_34h;
    int64_t var_33h;
    int64_t var_32h;
    int64_t var_31h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_11h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* transform_input(std::vector<int, std::allocator<int> >) */
    eax = x1;
    ecx = y2;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x10)) = rdi;
    if ((sil & 1) == 0) {
        goto label_11;
    }
label_4:
    eax = x11;
    ecx = y12;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x1;
    ecx = y2;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0x11)) = sil;
    if ((dil & 1) == 0) {
        goto label_11;
    }
    al = *((rbp - 0x11));
    if ((al & 1) == 0) {
        goto label_12;
    }
label_0:
    rax = rsp;
    rax += 0xfffffffffffffff0;
    rcx = rax;
    rcx += 0xfffffffffffffff0;
    *(rax) = 0;
    *(rcx) = 0;
    edx = x11;
    esi = y12;
    edi = edx;
    edi--;
    edx *= edi;
    edx &= 1;
    r8b = (edx == 0) ? 1 : 0;
    r9b = (esi < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x20)) = rax;
    *((rbp - 0x28)) = rcx;
    if ((r8b & 1) == 0) {
        goto label_12;
    }
    while (1) {
        eax = x11;
        ecx = y12;
        edx = eax;
        edx--;
        eax *= edx;
        eax &= 1;
        sil = (eax == 0) ? 1 : 0;
        dil = (ecx < 0xa) ? 1 : 0;
        sil |= dil;
        if ((sil & 1) == 0) {
            goto label_13;
        }
label_1:
        eax = x1;
        ecx = y2;
        edx = eax;
        edx--;
        eax *= edx;
        eax &= 1;
        sil = (eax == 0) ? 1 : 0;
        dil = (ecx < 0xa) ? 1 : 0;
        sil |= dil;
        if ((sil & 1) == 0) {
            goto label_14;
        }
label_5:
        rax = *((rbp - 0x28));
        rcx = *(rax);
        *((rbp - 0x30)) = rcx;
        rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x10)));
        rcx = *((rbp - 0x30));
        dl = (rcx < rax) ? 1 : 0;
        esi = x11;
        r8d = y12;
        r9d = esi;
        r9d--;
        esi *= r9d;
        esi &= 1;
        r10b = (esi == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        esi = x1;
        r8d = y2;
        r9d = esi;
        r9d--;
        esi *= r9d;
        esi &= 1;
        r11b = (esi == 0) ? 1 : 0;
        bl = (r8d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x31)) = dl;
        *((rbp - 0x32)) = r10b;
        if ((r11b & 1) == 0) {
            goto label_14;
        }
        al = *((rbp - 0x32));
        if ((al & 1) == 0) {
            goto label_13;
        }
        al = *((rbp - 0x31));
        if ((al & 1) == 0) {
        } else {
            eax = x11;
            ecx = y12;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_15;
            }
label_2:
            eax = x1;
            ecx = y2;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_16;
            }
label_6:
            rax = *((rbp - 0x28));
            rsi = *(rax);
            rax = std::vector<int,std::allocator<int>>::operator [] (unsigned long) (*((rbp - 0x10)), rsi);
            ecx = *(rax);
            rax = *((rbp - 0x20));
            ecx += *(rax);
            *(rax) = ecx;
            ecx = x11;
            edx = y12;
            r8d = ecx;
            r8d--;
            ecx *= r8d;
            ecx &= 1;
            r9b = (ecx == 0) ? 1 : 0;
            r10b = (edx < 0xa) ? 1 : 0;
            r9b |= r10b;
            ecx = x1;
            edx = y2;
            r8d = ecx;
            r8d--;
            ecx *= r8d;
            ecx &= 1;
            r10b = (ecx == 0) ? 1 : 0;
            r11b = (edx < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0x33)) = r9b;
            if ((r10b & 1) == 0) {
                goto label_16;
            }
            al = *((rbp - 0x33));
            if ((al & 1) == 0) {
                goto label_15;
            }
            eax = x11;
            ecx = y12;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_17;
            }
label_3:
            eax = x1;
            ecx = y2;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_18;
            }
label_7:
            rax = *((rbp - 0x28));
            ecx = *(rax);
            ecx++;
            *(rax) = ecx;
            ecx = x11;
            edx = y12;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            ecx = x1;
            edx = y2;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            r8b = (ecx == 0) ? 1 : 0;
            r9b = (edx < 0xa) ? 1 : 0;
            r8b |= r9b;
            *((rbp - 0x34)) = dil;
            if ((r8b & 1) == 0) {
                goto label_18;
            }
            al = *((rbp - 0x34));
            if ((al & 1) == 0) {
                goto label_17;
            }
        }
    }
    eax = x1;
    ecx = y2;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_19;
    }
label_8:
    eax = x11;
    ecx = y12;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x1;
    ecx = y2;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0x35)) = sil;
    if ((dil & 1) == 0) {
        goto label_19;
    }
    al = *((rbp - 0x35));
    if ((al & 1) != 0) {
        goto label_20;
    }
    while (1) {
label_20:
        rax = *((rbp - 0x20));
        eax = *(rax);
        ecx = x11;
        edx = y12;
        esi = ecx;
        esi--;
        ecx *= esi;
        ecx &= 1;
        dil = (ecx == 0) ? 1 : 0;
        r8b = (edx < 0xa) ? 1 : 0;
        dil |= r8b;
        *((rbp - 0x3c)) = eax;
        if ((dil & 1) == 0) {
        } else {
            eax = x1;
            ecx = y2;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_21;
            }
label_9:
            eax = x1;
            ecx = y2;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_21;
            }
            eax = *((rbp - 0x3c));
            rsp = rbp - 8;
            return rax;
label_12:
            rax = rsp;
            rax += 0xfffffffffffffff0;
            rcx = rax;
            rcx += 0xfffffffffffffff0;
            *(rax) = 0;
            *(rcx) = 0;
            goto label_0;
label_13:
            rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x10)));
            *((rbp - 0x48)) = rax;
            goto label_1;
label_15:
            rax = *((rbp - 0x28));
            rsi = *(rax);
            rax = std::vector<int,std::allocator<int>>::operator [] (unsigned long) (*((rbp - 0x10)), rsi);
            ecx = *(rax);
            rax = *((rbp - 0x20));
            edx = *(rax);
            edx += ecx;
            *(rax) = edx;
            goto label_2;
label_17:
            eax = x1;
            ecx = y2;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_22;
            }
label_10:
            rax = *((rbp - 0x28));
            ecx = *(rax);
            ecx++;
            *(rax) = ecx;
            ecx = x1;
            edx = y2;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            if ((dil & 1) == 0) {
                goto label_22;
            }
            goto label_3;
        }
    }
label_11:
    goto label_4;
label_14:
    rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x10)));
    *((rbp - 0x50)) = rax;
    goto label_5;
label_16:
    rax = *((rbp - 0x28));
    rsi = *(rax);
    rax = std::vector<int,std::allocator<int>>::operator [] (unsigned long) (*((rbp - 0x10)), rsi);
    ecx = *(rax);
    rax = *((rbp - 0x20));
    edx = *(rax);
    edx += ecx;
    *(rax) = edx;
    goto label_6;
label_18:
    rax = *((rbp - 0x28));
    ecx = *(rax);
    ecx++;
    *(rax) = ecx;
    goto label_7;
label_19:
    goto label_8;
label_21:
    goto label_9;
label_22:
    rax = *((rbp - 0x28));
    ecx = *(rax);
    ecx++;
    *(rax) = ecx;
    goto label_10;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408ca0 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_M_create_storage_unsigned_long_ (int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_create_storage(unsigned long) */
    eax = x83;
    ecx = y84;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        rsi = *(rcx);
        rdi = rax;
        *((rbp - 0x20)) = rax;
        *((rbp - 0x28)) = rcx;
        rax = std::_Vector_base<int,std::allocator<int>>::_M_allocate(unsigned long) (rdi, *(rsi));
        rcx = *((rbp - 0x20));
        *(rcx) = rax;
        rax = *(rcx);
        *((rcx + 8)) = rax;
        rax = *(rcx);
        rdx = *((rbp - 0x28));
        rsi = *(rdx);
        rsi <<= 2;
        rax += rsi;
        *((rcx + 0x10)) = rax;
        r8d = x83;
        r9d = y84;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        if ((r11b & 1) == 0) {
        } else {
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        rsi = *(rcx);
        rdi = rax;
        *((rbp - 0x30)) = rax;
        *((rbp - 0x38)) = rcx;
        rax = std::_Vector_base<int,std::allocator<int>>::_M_allocate(unsigned long) (rdi, *(rsi));
        rcx = *((rbp - 0x30));
        *(rcx) = rax;
        rax = *(rcx);
        *((rcx + 8)) = rax;
        rax = *(rcx);
        rdx = *((rbp - 0x38));
        rsi = *(rdx);
        rsi <<= 2;
        rax += rsi;
        *((rcx + 0x10)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4094d0 */
#include <stdint.h>
 
int64_t method_std::allocator_int_allocator_std::allocator_int_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* std::allocator<int>::allocator(std::allocator<int> const&) */
    eax = x91;
    ecx = y92;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        rcx = *(rcx);
        _gnu_cxx::new_allocator<int>::new_allocator(_gnu_cxx::new_allocator<int>const&) (rax, rcx);
        r8d = x91;
        r9d = y92;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        if ((r11b & 1) == 0) {
        } else {
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        rcx = *(rcx);
        _gnu_cxx::new_allocator<int>::new_allocator(_gnu_cxx::new_allocator<int>const&) (rax, rcx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40b4d0 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_M_check_len_unsigned_long_char_const_const (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_f8h;
    int64_t var_f0h;
    int64_t var_e8h;
    int64_t var_e0h;
    int64_t var_d8h;
    int64_t var_d0h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    int64_t var_a8h;
    int64_t var_99h;
    int64_t var_98h;
    int64_t var_89h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_71h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::_M_check_len(unsigned long, char const*) const */
    eax = x109;
    ecx = y110;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_6;
    }
    while (1) {
label_6:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x38));
        *(rax) = r8;
        r9 = *((rbp - 0x30));
        *(rcx) = r9;
        r10 = *((rbp - 0x40));
        *(rdx) = r10;
        rax = *(rax);
        *((rbp - 0x48)) = rdi;
        rdi = rax;
        *((rbp - 0x50)) = rcx;
        *((rbp - 0x58)) = rdx;
        *((rbp - 0x60)) = rsi;
        *((rbp - 0x68)) = rax;
        rax = std::vector<int,std::allocator<int>>::max_size()const (rdi);
        *((rbp - 0x70)) = rax;
        rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
        rcx = *((rbp - 0x70));
        rcx -= rax;
        rax = *((rbp - 0x50));
        r11b = (rcx < *(rax)) ? 1 : 0;
        ebx = x109;
        r14d = y110;
        r15d = ebx;
        r15d--;
        ebx *= r15d;
        ebx &= 1;
        r12b = (ebx == 0) ? 1 : 0;
        r13b = (r14d < 0xa) ? 1 : 0;
        r12b |= r13b;
        *((rbp - 0x71)) = r11b;
        if ((r12b & 1) == 0) {
        } else {
            al = *((rbp - 0x71));
            if ((al & 1) == 0) {
            } else {
                eax = x109;
                ecx = y110;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_7;
                }
label_0:
                rax = *((rbp - 0x58));
                rdi = *(rax);
                std::_throw_length_error(char const*) ();
                ecx = x109;
                edx = y110;
                esi = ecx;
                esi--;
                ecx *= esi;
                ecx &= 1;
                r8b = (ecx == 0) ? 1 : 0;
                r9b = (edx < 0xa) ? 1 : 0;
                r8b |= r9b;
                if ((r8b & 1) != 0) {
                    goto label_8;
                }
                goto label_7;
            }
label_8:
            eax = x109;
            ecx = y110;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_9;
            }
label_1:
            rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
            *((rbp - 0x80)) = rax;
            rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
            rdi = *((rbp - 0x48));
            rax = unsigned longconst&std::max<unsigned long>(unsigned longconst&,unsigned longconst&) (rax, *((rbp - 0x50)));
            rsi = *((rbp - 0x80));
            rsi += *(rax);
            rax = *((rbp - 0x60));
            *(rax) = rsi;
            rsi = *(rax);
            *((rbp - 0x88)) = rsi;
            rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
            rsi = *((rbp - 0x88));
            cl = (rsi < rax) ? 1 : 0;
            edx = x109;
            r8d = y110;
            r9d = edx;
            r9d--;
            edx *= r9d;
            edx &= 1;
            r10b = (edx == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            *((rbp - 0x89)) = cl;
            if ((r10b & 1) == 0) {
                goto label_9;
            }
            al = *((rbp - 0x89));
            if ((al & 1) == 0) {
                eax = x109;
                ecx = y110;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_10;
                }
label_2:
                rax = *((rbp - 0x60));
                rcx = *(rax);
                *((rbp - 0x98)) = rcx;
                rax = std::vector<int,std::allocator<int>>::max_size()const (*((rbp - 0x68)));
                rcx = *((rbp - 0x98));
                dl = (rcx > rax) ? 1 : 0;
                esi = x109;
                r8d = y110;
                r9d = esi;
                r9d--;
                esi *= r9d;
                esi &= 1;
                r10b = (esi == 0) ? 1 : 0;
                r11b = (r8d < 0xa) ? 1 : 0;
                r10b |= r11b;
                *((rbp - 0x99)) = dl;
                if ((r10b & 1) == 0) {
                    goto label_10;
                }
                al = *((rbp - 0x99));
                if ((al & 1) == 0) {
                }
            } else {
                eax = x109;
                ecx = y110;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_11;
                }
label_3:
                std::vector<int,std::allocator<int>>::max_size()const (*((rbp - 0x68)));
                ecx = x109;
                edx = y110;
                esi = ecx;
                esi--;
                ecx *= esi;
                ecx &= 1;
                r8b = (ecx == 0) ? 1 : 0;
                r9b = (edx < 0xa) ? 1 : 0;
                r8b |= r9b;
                *((rbp - 0xa8)) = rax;
                if ((r8b & 1) == 0) {
                    goto label_11;
                }
                rax = *((rbp - 0xa8));
                *((rbp - 0xb0)) = rax;
                goto label_12;
            }
            eax = x109;
            ecx = y110;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_13;
            }
label_4:
            rax = *((rbp - 0x60));
            rcx = *(rax);
            edx = x109;
            esi = y110;
            edi = edx;
            edi--;
            edx *= edi;
            edx &= 1;
            r8b = (edx == 0) ? 1 : 0;
            r9b = (esi < 0xa) ? 1 : 0;
            r8b |= r9b;
            *((rbp - 0xb8)) = rcx;
            if ((r8b & 1) == 0) {
                goto label_13;
            }
            rax = *((rbp - 0xb8));
            *((rbp - 0xb0)) = rax;
label_12:
            rax = *((rbp - 0xb0));
            ecx = x109;
            edx = y110;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            *((rbp - 0xc0)) = rax;
            if ((dil & 1) == 0) {
                goto label_14;
            }
label_5:
            eax = x109;
            ecx = y110;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_14;
            }
            rax = *((rbp - 0xc0));
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x38));
        *(rax) = rsi;
        rdi = *((rbp - 0x30));
        *(rcx) = rdi;
        rcx = *((rbp - 0x40));
        *(rdx) = rcx;
        rax = *(rax);
        rdi = *(rax);
        *((rbp - 0xc8)) = rax;
        rax = std::vector<int,std::allocator<int>>::max_size()const (*(rdi));
        *((rbp - 0xd0)) = rax;
        rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0xc8)));
        *((rbp - 0xd8)) = rax;
    }
label_7:
    rax = *((rbp - 0x58));
    rdi = *(rax);
    std::_throw_length_error(char const*) ();
    goto label_0;
label_9:
    rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
    *((rbp - 0xe0)) = rax;
    rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
    rdi = *((rbp - 0x48));
    rax = unsigned longconst&std::max<unsigned long>(unsigned longconst&,unsigned longconst&) (rax, *((rbp - 0x50)));
    rax = *(rax);
    rsi = *((rbp - 0xe0));
    rsi += rax;
    rax = *((rbp - 0x60));
    *(rax) = rsi;
    rax = std::vector<int,std::allocator<int>>::size()const (*((rbp - 0x68)));
    *((rbp - 0xe8)) = rax;
    goto label_1;
label_10:
    rax = std::vector<int,std::allocator<int>>::max_size()const (*((rbp - 0x68)));
    *((rbp - 0xf0)) = rax;
    goto label_2;
label_11:
    rax = std::vector<int,std::allocator<int>>::max_size()const (*((rbp - 0x68)));
    *((rbp - 0xf8)) = rax;
    goto label_3;
label_13:
    goto label_4;
label_14:
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c3a0 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_destroy_int_ (int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::destroy(int*) */
    eax = x125;
    ecx = y126;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
        esi = x125;
        edi = y126;
        r8d = esi;
        r8d--;
        esi *= r8d;
        esi &= 1;
        r9b = (esi == 0) ? 1 : 0;
        r10b = (edi < 0xa) ? 1 : 0;
        r9b |= r10b;
        if ((r9b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x405640 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_operator_unsigned_long_ (int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::operator[](unsigned long) */
    eax = x15;
    ecx = y16;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 8)) = rdi;
    *((rbp - 0x10)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rax = *(rax);
        rax = *(rax);
        rcx = *(rcx);
        rcx <<= 2;
        rax += rcx;
        edi = x15;
        r8d = y16;
        r9d = edi;
        r9d--;
        edi *= r9d;
        edi &= 1;
        r10b = (edi == 0) ? 1 : 0;
        r11b = (r8d < 0xa) ? 1 : 0;
        r10b |= r11b;
        *((rbp - 0x18)) = rax;
        if ((r10b & 1) == 0) {
        } else {
            rax = *((rbp - 0x18));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x10));
        *(rcx) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40d280 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_alloc_traits_std::allocator_int_max_size_std::allocator_int_const_ (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::__alloc_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */
    eax = x145;
    ecx = y146;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::max_size()const (*(rax));
        edx = x145;
        esi = y146;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rax;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rax = _gnu_cxx::new_allocator<int>::max_size()const (*(rax));
        *((rbp - 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408670 */
#include <stdint.h>
 
int64_t method_std::_Iter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_true_S_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_ (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    eax = x75;
    ecx = y76;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = _gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>::base()const (rax);
        rax = *(rax);
        edx = x75;
        esi = y76;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rax;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = _gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>::base()const (rax);
        *((rbp - 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40cf40 */
#include <stdint.h>
 
int64_t method_unsigned_long_const_std_max_unsigned_long_unsigned_long_const_unsigned_long_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_58h;
    int64_t var_49h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rsi = arg2;
    rdi = arg1;
    /* unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&) */
    eax = x143;
    ecx = y144;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x28)) = rdi;
    *((rbp - 0x30)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_3;
    }
    while (1) {
label_3:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x28));
        *(rcx) = rsi;
        rdi = *((rbp - 0x30));
        *(rdx) = rdi;
        r8 = *(rcx);
        r8 = *(r8);
        r9 = *(rdx);
        r10b = (r8 < *(r9)) ? 1 : 0;
        r11d = x143;
        ebx = y144;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x38)) = rax;
        *((rbp - 0x40)) = rcx;
        *((rbp - 0x48)) = rdx;
        *((rbp - 0x49)) = r10b;
        if ((r15b & 1) == 0) {
        } else {
            al = *((rbp - 0x49));
            if ((al & 1) == 0) {
            } else {
                eax = x143;
                ecx = y144;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_4;
                }
label_0:
                rax = *((rbp - 0x48));
                rcx = *(rax);
                rdx = *((rbp - 0x38));
                *(rdx) = rcx;
                esi = x143;
                edi = y144;
                r8d = esi;
                r8d--;
                esi *= r8d;
                esi &= 1;
                r9b = (esi == 0) ? 1 : 0;
                r10b = (edi < 0xa) ? 1 : 0;
                r9b |= r10b;
                if ((r9b & 1) == 0) {
                    goto label_4;
                }
                goto label_5;
            }
            eax = x143;
            ecx = y144;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_6;
            }
label_1:
            rax = *((rbp - 0x40));
            rcx = *(rax);
            rdx = *((rbp - 0x38));
            *(rdx) = rcx;
            esi = x143;
            edi = y144;
            r8d = esi;
            r8d--;
            esi *= r8d;
            esi &= 1;
            r9b = (esi == 0) ? 1 : 0;
            r10b = (edi < 0xa) ? 1 : 0;
            r9b |= r10b;
            if ((r9b & 1) == 0) {
                goto label_6;
            }
label_5:
            eax = x143;
            ecx = y144;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_7;
            }
label_2:
            rax = *((rbp - 0x38));
            rax = *(rax);
            ecx = x143;
            edx = y144;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            *((rbp - 0x58)) = rax;
            if ((dil & 1) == 0) {
                goto label_7;
            }
            rax = *((rbp - 0x58));
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x28));
        *(rax) = rdx;
        rax = *((rbp - 0x30));
        *(rcx) = rax;
    }
label_4:
    rax = *((rbp - 0x48));
    rcx = *(rax);
    rdx = *((rbp - 0x38));
    *(rdx) = rcx;
    goto label_0;
label_6:
    rax = *((rbp - 0x40));
    rcx = *(rax);
    rdx = *((rbp - 0x38));
    *(rdx) = rcx;
    goto label_1;
label_7:
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40d370 */
#include <stdint.h>
 
int64_t method_int_std_copy_move_backward_a2_false_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::__copy_move_backward_a2<false, int*, int*>(int*, int*, int*) */
    eax = x147;
    ecx = y148;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x30)) = rcx;
        *((rbp - 0x38)) = rdx;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x30));
        *((rbp - 0x40)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x38));
        *((rbp - 0x48)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        int*std::_copy_move_backward_a<false,int*,int*>(int*,int*,int*) (*((rbp - 0x40)), *((rbp - 0x48)), rax);
        r9d = x147;
        r10d = y148;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x50)) = rax;
        if ((bl & 1) == 0) {
        } else {
            rax = *((rbp - 0x50));
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x58)) = rcx;
        *((rbp - 0x60)) = rdx;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x58));
        *((rbp - 0x68)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x60));
        *((rbp - 0x70)) = rax;
        rax = std::_Niter_base<int*>::iterator_typestd::_niter_base<int*>(int*) (*(rcx));
        rax = int*std::_copy_move_backward_a<false,int*,int*>(int*,int*,int*) (*((rbp - 0x68)), *((rbp - 0x70)), rax);
        *((rbp - 0x78)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40b1a0 */
#include <stdint.h>
 
int64_t method_int_std_copy_backward_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::copy_backward<int*, int*>(int*, int*, int*) */
    eax = x103;
    ecx = y104;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x30)) = rcx;
        *((rbp - 0x38)) = rdx;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x30));
        *((rbp - 0x40)) = rax;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x38));
        int*std::_copy_move_backward_a2<false,int*,int*>(int*,int*,int*) (*((rbp - 0x40)), rax, *(rcx));
        r9d = x103;
        r10d = y104;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x48)) = rax;
        if ((bl & 1) == 0) {
        } else {
            rax = *((rbp - 0x48));
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x50)) = rcx;
        *((rbp - 0x58)) = rdx;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x50));
        *((rbp - 0x60)) = rax;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x58));
        rax = int*std::_copy_move_backward_a2<false,int*,int*>(int*,int*,int*) (*((rbp - 0x60)), rax, *(rcx));
        *((rbp - 0x68)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40b400 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_operator_const (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*() const */
    eax = x107;
    ecx = y108;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        rax = *(rax);
        edx = x107;
        esi = y108;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408020 */
#include <stdint.h>
 
int64_t method_std::_Miter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_::iterator_type_std::_miter_base_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_in (int64_t arg1) {
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
    eax = x63;
    ecx = y64;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x10)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rcx = *(rcx);
        *(rdx) = rcx;
        *((rbp - 0x18)) = rax;
        rax = std::_Iter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,false>::_S_base(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rdx));
        rcx = *((rbp - 0x18));
        *(rcx) = rax;
        rax = *(rcx);
        r8d = x63;
        r9d = y64;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x20)) = rax;
        if ((r11b & 1) == 0) {
        } else {
            rax = *((rbp - 0x20));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rcx = *(rcx);
        *(rdx) = rcx;
        *((rbp - 0x28)) = rax;
        rax = std::_Iter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,false>::_S_base(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rdx));
        rcx = *((rbp - 0x28));
        *(rcx) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40bf50 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_alloc_traits_std::allocator_int_destroy_std::allocator_int_int_ (int64_t arg2, int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::__alloc_traits<std::allocator<int> >::destroy(std::allocator<int>&, int*) */
    eax = x117;
    ecx = y118;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::destroy(int*) (rax, *(rcx));
        r8d = x117;
        r9d = y118;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        if ((r11b & 1) == 0) {
        } else {
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        _gnu_cxx::new_allocator<int>::destroy(int*) (rax, *(rcx));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401cc0 */
#include <stdint.h>
 
int64_t sanitize_input_std::string_ (int64_t arg1) {
    int64_t var_168h;
    int64_t var_13ch;
    int64_t var_138h;
    int64_t var_12eh;
    int64_t var_12dh;
    int64_t var_12ch;
    int64_t var_12bh;
    int64_t var_12ah;
    int64_t var_f8h;
    int64_t var_f0h;
    int64_t var_eah;
    int64_t var_e9h;
    int64_t var_e8h;
    int64_t var_e1h;
    int64_t var_e0h;
    int64_t var_d9h;
    int64_t var_d8h;
    int64_t var_d0h;
    int64_t var_c2h;
    int64_t var_c1h;
    int64_t var_c0h;
    int64_t var_b1h;
    int64_t var_b0h;
    int64_t var_a1h;
    int64_t var_a0h;
    int64_t var_91h;
    int64_t var_90h;
    int64_t var_82h;
    int64_t var_81h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_31h;
    int64_t var_30h;
    int64_t var_28h;
    rdi = arg1;
    /* sanitize_input(std::string) */
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x30)) = rdi;
    if ((sil & 1) == 0) {
        goto label_41;
    }
label_18:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0x31)) = sil;
    if ((dil & 1) == 0) {
        goto label_41;
    }
    al = *((rbp - 0x31));
    if ((al & 1) == 0) {
        goto label_42;
    }
label_1:
    rax = rsp;
    rax += 0xfffffffffffffff0;
    rcx = rax;
    rcx += 0xffffffffffffffe0;
    rdx = rcx;
    rdx += 0xfffffffffffffff0;
    rsi = rdx;
    rsi += 0xfffffffffffffff0;
    rdi = rsi;
    rdi += 0xfffffffffffffff0;
    r8 = rdi;
    r8 += 0xfffffffffffffff0;
    r9 = r8;
    r9 += 0xfffffffffffffff0;
    r10 = r9;
    r10 += 0xffffffffffffffe0;
    r11 = r10;
    r11 += 0xfffffffffffffff0;
    *((rbp - 0x40)) = rdi;
    rdi = rcx;
    *((rbp - 0x48)) = rax;
    *((rbp - 0x50)) = rcx;
    *((rbp - 0x58)) = rdx;
    *((rbp - 0x60)) = rsi;
    *((rbp - 0x68)) = r11;
    *((rbp - 0x70)) = r8;
    *((rbp - 0x78)) = r9;
    *((rbp - 0x80)) = r10;
    std::vector<int,std::allocator<int>>::vector() (rdi);
    rax = *((rbp - 0x58));
    *(rax) = 0;
    ebx = x17;
    r14d = y18;
    r15d = ebx;
    r15d--;
    ebx *= r15d;
    ebx &= 1;
    r12b = (ebx == 0) ? 1 : 0;
    r13b = (r14d < 0xa) ? 1 : 0;
    r12b |= r13b;
    if ((r12b & 1) == 0) {
        goto label_42;
    }
label_0:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_43;
    }
label_2:
    rax = *((rbp - 0x58));
    ecx = *(rax);
    edx = *(obj.legend);
    edx >>= 2;
    sil = (ecx < edx) ? 1 : 0;
    ecx = x17;
    edx = y18;
    edi = ecx;
    edi--;
    ecx *= edi;
    ecx &= 1;
    r8b = (ecx == 0) ? 1 : 0;
    r9b = (edx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x81)) = sil;
    if ((r8b & 1) == 0) {
        goto label_43;
    }
    al = *((rbp - 0x81));
    if ((al & 1) == 0) {
        goto label_44;
    }
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_45;
    }
label_19:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0x82)) = sil;
    if ((dil & 1) == 0) {
        goto label_45;
    }
    al = *((rbp - 0x82));
    if ((al & 1) == 0) {
        goto label_46;
    }
label_3:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_47;
    }
label_20:
    rax = *((rbp - 0x58));
    rsi = *(rax);
    ecx = x17;
    edx = y18;
    edi = ecx;
    edi--;
    ecx *= edi;
    ecx &= 1;
    r8b = (ecx == 0) ? 1 : 0;
    r9b = (edx < 0xa) ? 1 : 0;
    r8b |= r9b;
    ecx = x3;
    edx = y4;
    edi = ecx;
    edi--;
    ecx *= edi;
    ecx &= 1;
    r9b = (ecx == 0) ? 1 : 0;
    r10b = (edx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x90)) = rsi;
    *((rbp - 0x91)) = r8b;
    if ((r9b & 1) == 0) {
        goto label_47;
    }
    al = *((rbp - 0x91));
    if ((al & 1) == 0) {
        goto label_46;
    }
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_48;
    }
label_21:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_48;
    }
    rdi = *((rbp - 0x30));
    rsi = *((rbp - 0x90));
    rax = std::string::operator [] (unsigned long) ();
    *((rbp - 0xa0)) = rax;
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_49;
    }
label_4:
    rax = *((rbp - 0xa0));
    ecx = *(rax);
    rdx = *((rbp - 0x60));
    *(rdx) = ecx;
    ecx = x17;
    esi = y18;
    edi = ecx;
    edi--;
    ecx *= edi;
    ecx &= 1;
    r8b = (ecx == 0) ? 1 : 0;
    r9b = (esi < 0xa) ? 1 : 0;
    r8b |= r9b;
    if ((r8b & 1) == 0) {
        goto label_49;
    }
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_50;
    }
label_22:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_50;
    }
    std::vector<int,std::allocator<int>>::push_back(intconst&) (*((rbp - 0x50)), *((rbp - 0x60)));
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_51;
    }
label_23:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0xa1)) = sil;
    if ((dil & 1) == 0) {
        goto label_51;
    }
    al = *((rbp - 0xa1));
    if ((al & 1) == 0) {
        goto label_52;
    }
label_5:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_53;
    }
label_24:
    rax = *((rbp - 0x58));
    ecx = *(rax);
    rdx = *((rbp - 0x78));
    *(rdx) = ecx;
    rsi = *(rdx);
    ecx = x17;
    edi = y18;
    r8d = ecx;
    r8d--;
    ecx *= r8d;
    ecx &= 1;
    r9b = (ecx == 0) ? 1 : 0;
    r10b = (edi < 0xa) ? 1 : 0;
    r9b |= r10b;
    ecx = x3;
    edi = y4;
    r8d = ecx;
    r8d--;
    ecx *= r8d;
    ecx &= 1;
    r10b = (ecx == 0) ? 1 : 0;
    r11b = (edi < 0xa) ? 1 : 0;
    r10b |= r11b;
    *((rbp - 0xb0)) = rsi;
    *((rbp - 0xb1)) = r9b;
    if ((r10b & 1) == 0) {
        goto label_53;
    }
    al = *((rbp - 0xb1));
    if ((al & 1) == 0) {
        goto label_52;
    }
    rdi = *((rbp - 0x30));
    rax = std::string::length()const ();
    *((rbp - 0xc0)) = rax;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_54;
    }
label_25:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0xc1)) = sil;
    if ((dil & 1) == 0) {
        goto label_54;
    }
    al = *((rbp - 0xc1));
    if ((al & 1) == 0) {
        goto label_55;
    }
label_6:
    rax = *((rbp - 0xc0));
    rax >>= 0x28;
    rcx = *((rbp - 0xb0));
    rcx &= rax;
    rcx |= 0x1c;
    edx = ecx;
    rax = *((rbp - 0x78));
    *(rax) = edx;
    sil = (*(rax) != 0) ? 1 : 0;
    edx = x17;
    edi = y18;
    r8d = edx;
    r8d--;
    edx *= r8d;
    edx &= 1;
    r9b = (edx == 0) ? 1 : 0;
    r10b = (edi < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0xc2)) = sil;
    if ((r9b & 1) == 0) {
        goto label_55;
    }
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_56;
    }
label_26:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_56;
    }
    al = *((rbp - 0xc2));
    if ((al & 1) == 0) {
        goto label_57;
    }
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_58;
    }
label_7:
    rax = *((rbp - 0x58));
    rsi = *(rax);
    ecx = x17;
    edx = y18;
    edi = ecx;
    edi--;
    ecx *= edi;
    ecx &= 1;
    r8b = (ecx == 0) ? 1 : 0;
    r9b = (edx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0xd0)) = rsi;
    if ((r8b & 1) == 0) {
        goto label_58;
    }
    eax = hero;
    rax = std::vector<int,std::allocator<int>>::operator [] (unsigned long) (obj.hero, *((rbp - 0xd0)));
    *((rbp - 0xd8)) = rax;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_59;
    }
label_27:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0xd9)) = sil;
    if ((dil & 1) == 0) {
        goto label_59;
    }
    al = *((rbp - 0xd9));
    if ((al & 1) == 0) {
        goto label_60;
    }
label_8:
    rax = *((rbp - 0xd8));
    ecx = *(rax);
    edx = x17;
    esi = y18;
    edi = edx;
    edi--;
    edx *= edi;
    edx &= 1;
    r8b = (edx == 0) ? 1 : 0;
    r9b = (esi < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0xe0)) = ecx;
    if ((r8b & 1) == 0) {
        goto label_60;
    }
    std::vector<int,std::allocator<int>>::vector(std::vector<int,std::allocator<int>>const&) (*((rbp - 0x80)), *((rbp - 0x50)));
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_61;
    }
label_28:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0xe1)) = sil;
    if ((dil & 1) == 0) {
        goto label_61;
    }
    al = *((rbp - 0xe1));
    if ((al & 1) == 0) {
        goto label_62;
    }
label_9:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_62;
    }
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_63;
    }
label_29:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_63;
    }
    rdi = *((rbp - 0x80));
    eax = transform_input(std::vector<int,std::allocator<int>>) ();
    *((rbp - 0xe8)) = eax;
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_64;
    }
label_10:
    eax = *((rbp - 0xe0));
    ecx = *((rbp - 0xe8));
    dl = (eax == ecx) ? 1 : 0;
    esi = x17;
    edi = y18;
    r8d = esi;
    r8d--;
    esi *= r8d;
    esi &= 1;
    r9b = (esi == 0) ? 1 : 0;
    r10b = (edi < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0xe9)) = dl;
    if ((r9b & 1) == 0) {
        goto label_64;
    }
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_65;
    }
label_30:
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_65;
    }
    std::vector<int,std::allocator<int>>::~vector() (*((rbp - 0x80)));
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_66;
    }
label_31:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    eax = x3;
    ecx = y4;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    dil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    dil |= r8b;
    *((rbp - 0xea)) = sil;
    if ((dil & 1) == 0) {
        goto label_66;
    }
    al = *((rbp - 0xea));
    if ((al & 1) == 0) {
        goto label_67;
    }
label_11:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        goto label_67;
    }
    al = *((rbp - 0xe9));
    if ((al & 1) == 0) {
        goto label_68;
    }
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) == 0) {
        void (*0x403f43)() ();
    }
    rax = *((rbp - 0x78));
    ecx = *(rax);
    rdx = *((rbp - 0x58));
    rsi = *(rdx);
    edi = x17;
    r8d = y18;
    r9d = edi;
    r9d--;
    edi *= r9d;
    edi &= 1;
    r10b = (edi == 0) ? 1 : 0;
    r11b = (r8d < 0xa) ? 1 : 0;
    r10b |= r11b;
    *((rbp - 0xf0)) = ecx;
    *((rbp - 0xf8)) = rsi;
    if ((r10b & 1) != 0) {
        void (*0x402d37)() ();
    }
label_68:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) != 0) {
        void (*0x40315a)() ();
    }
label_57:
    eax = x17;
    ecx = y18;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    dil = (ecx < 0xa) ? 1 : 0;
    sil |= dil;
    if ((sil & 1) != 0) {
        goto label_69;
    }
    while (1) {
label_69:
        eax = x3;
        ecx = y4;
        edx = eax;
        edx--;
        eax *= edx;
        eax &= 1;
        sil = (eax == 0) ? 1 : 0;
        dil = (ecx < 0xa) ? 1 : 0;
        sil |= dil;
        if ((sil & 1) == 0) {
            goto label_70;
        }
label_32:
        rax = *((rbp - 0x78));
        cl = (*(rax) != 0) ? 1 : 0;
        edx = x17;
        esi = y18;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        edx = x3;
        esi = y4;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x12a)) = cl;
        *((rbp - 0x12b)) = r8b;
        if ((r9b & 1) == 0) {
            goto label_70;
        }
        al = *((rbp - 0x12b));
        if ((al & 1) == 0) {
        } else {
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_71;
            }
label_33:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_71;
            }
            al = *((rbp - 0x12a));
            if ((al & 1) == 0) {
            } else {
                eax = x3;
                ecx = y4;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_72;
                }
label_34:
                eax = x17;
                ecx = y18;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                eax = x3;
                ecx = y4;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                dil = (eax == 0) ? 1 : 0;
                r8b = (ecx < 0xa) ? 1 : 0;
                dil |= r8b;
                *((rbp - 0x12c)) = sil;
                if ((dil & 1) == 0) {
                    goto label_72;
                }
                al = *((rbp - 0x12c));
                if ((al & 1) == 0) {
                    goto label_73;
                }
label_12:
                rax = *((rbp - 0x58));
                ecx = *(rax);
                ecx <<= 8;
                ecx &= 0x147;
                rdx = *((rbp - 0x48));
                *(rdx) = ecx;
                rsi = *((rbp - 0x68));
                *(rsi) = 1;
                ecx = x17;
                edi = y18;
                r8d = ecx;
                r8d--;
                ecx *= r8d;
                ecx &= 1;
                r9b = (ecx == 0) ? 1 : 0;
                r10b = (edi < 0xa) ? 1 : 0;
                r9b |= r10b;
                if ((r9b & 1) == 0) {
                    goto label_73;
                }
                goto label_74;
            }
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_75;
            }
label_35:
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            dil = (eax == 0) ? 1 : 0;
            r8b = (ecx < 0xa) ? 1 : 0;
            dil |= r8b;
            *((rbp - 0x12d)) = sil;
            if ((dil & 1) == 0) {
                goto label_75;
            }
            al = *((rbp - 0x12d));
            if ((al & 1) == 0) {
                goto label_76;
            }
label_13:
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_76;
            }
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_77;
            }
label_36:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_77;
            }
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_78;
            }
label_14:
            rax = *((rbp - 0x58));
            ecx = *(rax);
            ecx++;
            *(rax) = ecx;
            ecx = x17;
            edx = y18;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            if ((dil & 1) == 0) {
                goto label_78;
            }
            goto label_0;
label_44:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_79;
            }
label_37:
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            dil = (eax == 0) ? 1 : 0;
            r8b = (ecx < 0xa) ? 1 : 0;
            dil |= r8b;
            *((rbp - 0x12e)) = sil;
            if ((dil & 1) == 0) {
                goto label_79;
            }
            al = *((rbp - 0x12e));
            if ((al & 1) == 0) {
                goto label_80;
            }
label_15:
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_80;
            }
            eax = std::cout;
            edi = std::cout;
            eax = "success\n";
            esi = "success\n";
            rax = std::string & std::operator << std::string (std::string &,char const*) ();
            *((rbp - 0x138)) = rax;
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_81;
            }
label_16:
            rax = *((rbp - 0x48));
            *(rax) = 0x1337;
            rcx = *((rbp - 0x68));
            *(rcx) = 1;
            edx = x17;
            esi = y18;
            edi = edx;
            edi--;
            edx *= edi;
            edx &= 1;
            r8b = (edx == 0) ? 1 : 0;
            r9b = (esi < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_81;
            }
label_74:
            eax = x17;
            ecx = y18;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_82;
            }
label_17:
            std::vector<int,std::allocator<int>>::~vector() (*((rbp - 0x50)));
            rdi = *((rbp - 0x48));
            eax = *(rdi);
            ecx = x17;
            edx = y18;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            r8b = (ecx == 0) ? 1 : 0;
            r9b = (edx < 0xa) ? 1 : 0;
            r8b |= r9b;
            *((rbp - 0x13c)) = eax;
            if ((r8b & 1) == 0) {
                goto label_82;
            }
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_83;
            }
label_38:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_83;
            }
            eax = *((rbp - 0x13c));
            rsp = rbp - 0x28;
            return rax;
label_42:
            rax = rsp;
            rax += 0xfffffffffffffff0;
            rax += 0xffffffffffffffe0;
            rcx = rax;
            rcx += 0xfffffffffffffff0;
            *((rbp - 0x168)) = rcx;
            std::vector<int,std::allocator<int>>::vector() (rax);
            rax = *((rbp - 0x168));
            *(rax) = 0;
            goto label_1;
label_43:
            goto label_2;
label_46:
            goto label_3;
label_49:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_84;
            }
label_39:
            rax = *((rbp - 0xa0));
            ecx = *(rax);
            rdx = *((rbp - 0x60));
            *(rdx) = ecx;
            ecx = x3;
            esi = y4;
            edi = ecx;
            edi--;
            ecx *= edi;
            ecx &= 1;
            r8b = (ecx == 0) ? 1 : 0;
            r9b = (esi < 0xa) ? 1 : 0;
            r8b |= r9b;
            if ((r8b & 1) == 0) {
                goto label_84;
            }
            goto label_4;
label_52:
            rax = *((rbp - 0x58));
            ecx = *(rax);
            rdx = *((rbp - 0x78));
            *(rdx) = ecx;
            goto label_5;
label_55:
            rax = *((rbp - 0xc0));
            rax >>= 0x28;
            rcx = *((rbp - 0xb0));
            rcx &= rax;
            rcx |= 0x1c;
            edx = ecx;
            rax = *((rbp - 0x78));
            *(rax) = edx;
            goto label_6;
label_58:
            goto label_7;
label_60:
            goto label_8;
label_62:
            goto label_9;
label_64:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_85;
            }
label_40:
            eax = x3;
            ecx = y4;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_85;
            }
            goto label_10;
label_67:
            goto label_11;
        }
    }
label_73:
    rax = *((rbp - 0x58));
    ecx = *(rax);
    ecx <<= 8;
    ecx &= 0x147;
    rdx = *((rbp - 0x48));
    *(rdx) = ecx;
    rsi = *((rbp - 0x68));
    *(rsi) = 1;
    goto label_12;
label_76:
    goto label_13;
label_78:
    rax = *((rbp - 0x58));
    ecx = *(rax);
    ecx++;
    *(rax) = ecx;
    goto label_14;
label_80:
    goto label_15;
label_81:
    rax = *((rbp - 0x48));
    *(rax) = 0x1337;
    rcx = *((rbp - 0x68));
    *(rcx) = 1;
    goto label_16;
label_82:
    std::vector<int,std::allocator<int>>::~vector() (*((rbp - 0x50)));
    goto label_17;
label_41:
    goto label_18;
label_45:
    goto label_19;
label_47:
    goto label_20;
label_48:
    goto label_21;
label_50:
    goto label_22;
label_51:
    goto label_23;
label_53:
    rax = *((rbp - 0x58));
    ecx = *(rax);
    rdx = *((rbp - 0x78));
    *(rdx) = ecx;
    goto label_24;
label_54:
    goto label_25;
label_56:
    goto label_26;
label_59:
    goto label_27;
label_61:
    goto label_28;
label_63:
    goto label_29;
label_65:
    goto label_30;
label_66:
    goto label_31;
label_70:
    goto label_32;
label_71:
    goto label_33;
label_72:
    goto label_34;
label_75:
    goto label_35;
label_77:
    goto label_36;
label_79:
    goto label_37;
label_83:
    goto label_38;
label_84:
    rax = *((rbp - 0xa0));
    ecx = *(rax);
    rdx = *((rbp - 0x60));
    *(rdx) = ecx;
    goto label_39;
label_85:
    goto label_40;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406480 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_M_get_Tp_allocator_const (int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */
    eax = x29;
    ecx = y30;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = *(rax);
        edx = x29;
        esi = y30;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        *((rbp - 0x10)) = rax;
        if ((r8b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40d9d0 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_construct_int_int_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_48h;
    int64_t var_39h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::construct(int*, int const&) */
    eax = x153;
    ecx = y154;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_2;
    }
    while (1) {
label_2:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rax = *((rbp - 0x18));
        *(rcx) = rax;
        rdi = *((rbp - 0x28));
        *(rdx) = rdi;
        rcx = *(rcx);
        r8b = (rcx == 0) ? 1 : 0;
        r9d = x153;
        r10d = y154;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x30)) = rdx;
        *((rbp - 0x38)) = rcx;
        *((rbp - 0x39)) = r8b;
        if ((bl & 1) == 0) {
        } else {
            al = *((rbp - 0x39));
            if ((al & 1) == 0) {
                eax = x153;
                ecx = y154;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_3;
                }
label_0:
                rax = *((rbp - 0x38));
                rcx = *((rbp - 0x30));
                rdx = *(rcx);
                esi = *(rdx);
                rdx = *((rbp - 0x38));
                *(rdx) = esi;
                esi = x153;
                edi = y154;
                r8d = esi;
                r8d--;
                esi *= r8d;
                esi &= 1;
                r9b = (esi == 0) ? 1 : 0;
                r10b = (edi < 0xa) ? 1 : 0;
                r9b |= r10b;
                *((rbp - 0x48)) = rax;
                if ((r9b & 1) == 0) {
                    goto label_3;
                }
            }
            eax = x153;
            ecx = y154;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
label_1:
            eax = x153;
            ecx = y154;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_4;
            }
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rax = *((rbp - 0x18));
        *(rcx) = rax;
        rcx = *((rbp - 0x28));
        *(rdx) = rcx;
    }
label_3:
    rax = *((rbp - 0x30));
    rcx = *(rax);
    edx = *(rcx);
    rcx = *((rbp - 0x38));
    *(rcx) = edx;
    goto label_0;
label_4:
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x408e10 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_M_allocate_unsigned_long_ (int64_t arg2, int64_t arg1) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_29h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned long) */
    eax = x85;
    ecx = y86;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_3;
    }
    while (1) {
label_3:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        rax = *(rax);
        dil = (*(rcx) != 0) ? 1 : 0;
        r8d = x85;
        r9d = y86;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x20)) = rcx;
        *((rbp - 0x28)) = rax;
        *((rbp - 0x29)) = dil;
        if ((r11b & 1) == 0) {
        } else {
            al = *((rbp - 0x29));
            if ((al & 1) == 0) {
            } else {
                eax = x85;
                ecx = y86;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_4;
                }
label_0:
                eax = 0;
                rcx = *((rbp - 0x28));
                rsi = *((rbp - 0x20));
                _gnu_cxx::new_allocator<int>::allocate(unsigned long,voidconst*) (rcx, *(rsi), eax);
                r8d = x85;
                r9d = y86;
                r10d = r8d;
                r10d--;
                r8d *= r10d;
                r8d &= 1;
                r11b = (r8d == 0) ? 1 : 0;
                bl = (r9d < 0xa) ? 1 : 0;
                r11b |= bl;
                *((rbp - 0x38)) = rax;
                if ((r11b & 1) == 0) {
                    goto label_4;
                }
                rax = *((rbp - 0x38));
                *((rbp - 0x40)) = rax;
                goto label_5;
            }
            eax = x85;
            ecx = y86;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_6;
            }
label_1:
            eax = x85;
            ecx = y86;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_6;
            }
            eax = 0;
            ecx = eax;
            *((rbp - 0x40)) = rcx;
label_5:
            rax = *((rbp - 0x40));
            ecx = x85;
            edx = y86;
            esi = ecx;
            esi--;
            ecx *= esi;
            ecx &= 1;
            dil = (ecx == 0) ? 1 : 0;
            r8b = (edx < 0xa) ? 1 : 0;
            dil |= r8b;
            *((rbp - 0x48)) = rax;
            if ((dil & 1) == 0) {
                goto label_7;
            }
label_2:
            eax = x85;
            ecx = y86;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_7;
            }
            rax = *((rbp - 0x48));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rax = *((rbp - 0x18));
        *(rcx) = rax;
    }
label_4:
    eax = 0;
    rcx = *((rbp - 0x28));
    rsi = *((rbp - 0x20));
    rax = _gnu_cxx::new_allocator<int>::allocate(unsigned long,voidconst*) (rcx, *(rsi), eax);
    *((rbp - 0x50)) = rax;
    goto label_0;
label_6:
    goto label_1;
label_7:
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x409400 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_max_size_const (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::max_size() const */
    eax = x89;
    ecx = y90;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        edx = x89;
        esi = y90;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        if ((r8b & 1) == 0) {
        } else {
            rax = 0x3fffffffffffffff;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406a90 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_begin_const (int64_t arg1) {
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::begin() const */
    eax = x35;
    ecx = y36;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 0x10)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rcx = *(rcx);
        rcx = *(rcx);
        *(rdx) = rcx;
        rdi = rax;
        *((rbp - 0x18)) = rax;
        _gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>::_normal_iterator(intconst*const&) (rdi, rdx);
        rax = *((rbp - 0x18));
        rax = *(rax);
        r8d = x35;
        r9d = y36;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x20)) = rax;
        if ((r11b & 1) == 0) {
        } else {
            rax = *((rbp - 0x20));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x10));
        *(rcx) = rsi;
        rcx = *(rcx);
        rcx = *(rcx);
        *(rdx) = rcx;
        _gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>::_normal_iterator(intconst*const&) (rax, rdx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406550 */
#include <stdint.h>
 
int64_t method_std::_Vector_base_int_std::allocator_int_Vector_base_unsigned_long_std::allocator_int_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* std::_Vector_base<int, std::allocator<int> >::_Vector_base(unsigned long, std::allocator<int> const&) */
    eax = x31;
    ecx = y32;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x28)) = rsi;
    *((rbp - 0x30)) = rdi;
    *((rbp - 0x38)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_1;
    }
    while (1) {
label_1:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = *((rbp - 0x30));
        *(rax) = r8;
        r9 = *((rbp - 0x28));
        *(rcx) = r9;
        r10 = *((rbp - 0x38));
        *(rdx) = r10;
        rax = *(rax);
        rdx = *(rdx);
        *((rbp - 0x40)) = rdi;
        rdi = rax;
        *((rbp - 0x48)) = rsi;
        *((rbp - 0x50)) = rcx;
        *((rbp - 0x58)) = rax;
        std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl(std::allocator<int>const&) (rdi, rdx);
        rax = *((rbp - 0x50));
        rsi = *(rax);
        r11d = x31;
        ebx = y32;
        r14d = r11d;
        r14d--;
        r11d *= r14d;
        r11d &= 1;
        r15b = (r11d == 0) ? 1 : 0;
        r12b = (ebx < 0xa) ? 1 : 0;
        r15b |= r12b;
        *((rbp - 0x60)) = rsi;
        if ((r15b & 1) == 0) {
        } else {
            std::_Vector_base<int,std::allocator<int>>::_M_create_storage(unsigned long) (*((rbp - 0x58)), *((rbp - 0x60)));
            eax = x31;
            ecx = y32;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_2;
            }
label_0:
            eax = x31;
            ecx = y32;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_2;
            }
            rsp = rbp - 0x20;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x30));
        *(rax) = rsi;
        rdi = *((rbp - 0x28));
        *(rcx) = rdi;
        rcx = *((rbp - 0x38));
        *(rdx) = rcx;
        std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl(std::allocator<int>const&) (*(rax), *(rdx));
    }
label_2:
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x405750 */
#include <stdint.h>
 
int64_t method_std::vector_int_std::allocator_int_push_back_int_const_ (int64_t arg2, int64_t arg1) {
    int64_t var_41h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rsi = arg2;
    rdi = arg1;
    /* std::vector<int, std::allocator<int> >::push_back(int const&) */
    eax = x19;
    ecx = y20;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_3;
    }
    while (1) {
label_3:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x28));
        *(rcx) = rdi;
        rax = *(rax);
        r8 = *((rax + 8));
        r9b = (r8 != *((rax + 0x10))) ? 1 : 0;
        r10d = x19;
        r11d = y20;
        ebx = r10d;
        ebx--;
        r10d *= ebx;
        r10d &= 1;
        r14b = (r10d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x30)) = rcx;
        *((rbp - 0x38)) = rdx;
        *((rbp - 0x40)) = rax;
        *((rbp - 0x41)) = r9b;
        if ((r14b & 1) == 0) {
        } else {
            al = *((rbp - 0x41));
            if ((al & 1) == 0) {
            } else {
                eax = x19;
                ecx = y20;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_4;
                }
label_0:
                rax = *((rbp - 0x40));
                rcx = *((rbp - 0x40));
                rdx = *((rbp - 0x30));
                void_gnu_cxx::_alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&,int*,intconst&) (rax, *((rcx + 8)), *(rdx));
                rax = *((rbp - 0x40));
                rcx = *((rax + 8));
                rcx += 4;
                *((rax + 8)) = rcx;
                r8d = x19;
                r9d = y20;
                r10d = r8d;
                r10d--;
                r8d *= r10d;
                r8d &= 1;
                r11b = (r8d == 0) ? 1 : 0;
                bl = (r9d < 0xa) ? 1 : 0;
                r11b |= bl;
                if ((r11b & 1) == 0) {
                    goto label_4;
                }
                goto label_5;
            }
            eax = x19;
            ecx = y20;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_6;
            }
label_1:
            rax = std::vector<int,std::allocator<int>>::end() (*((rbp - 0x40)));
            rdi = *((rbp - 0x38));
            *(rdi) = rax;
            rax = *((rbp - 0x30));
            std::vector<int,std::allocator<int>>::_M_insert_aux(_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>,intconst&) (*((rbp - 0x40)), *(rdi), *(rax));
            ecx = x19;
            r8d = y20;
            r9d = ecx;
            r9d--;
            ecx *= r9d;
            ecx &= 1;
            r10b = (ecx == 0) ? 1 : 0;
            r11b = (r8d < 0xa) ? 1 : 0;
            r10b |= r11b;
            if ((r10b & 1) == 0) {
                goto label_6;
            }
label_5:
            eax = x19;
            ecx = y20;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_7;
            }
label_2:
            eax = x19;
            ecx = y20;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_7;
            }
            rsp = rbp - 0x18;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x20));
        *(rax) = rdx;
        rax = *((rbp - 0x28));
        *(rcx) = rax;
    }
label_4:
    rax = *((rbp - 0x40));
    rcx = *((rbp - 0x40));
    rdx = *((rbp - 0x30));
    void_gnu_cxx::_alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&,int*,intconst&) (rax, *((rcx + 8)), *(rdx));
    rax = *((rbp - 0x40));
    rcx = *((rax + 8));
    rcx += 4;
    *((rax + 8)) = rcx;
    goto label_0;
label_6:
    rax = std::vector<int,std::allocator<int>>::end() (*((rbp - 0x40)));
    rdi = *((rbp - 0x38));
    *(rdi) = rax;
    rax = *((rbp - 0x30));
    std::vector<int,std::allocator<int>>::_M_insert_aux(_gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>,intconst&) (*((rbp - 0x40)), *(rdi), *(rax));
    goto label_1;
label_7:
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x409140 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_allocate_unsigned_long_void_const_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_41h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*) */
    eax = x87;
    ecx = y88;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x20)) = rsi;
    *((rbp - 0x28)) = rdi;
    *((rbp - 0x30)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_2;
    }
    while (1) {
label_2:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x28));
        *(rax) = rsi;
        rdi = *((rbp - 0x20));
        *(rcx) = rdi;
        r8 = *((rbp - 0x30));
        *(rdx) = r8;
        rdi = *(rax);
        rax = *(rcx);
        *((rbp - 0x38)) = rcx;
        *((rbp - 0x40)) = rax;
        rax = _gnu_cxx::new_allocator<int>::max_size()const (*(rdi));
        rcx = *((rbp - 0x40));
        r9b = (rcx > rax) ? 1 : 0;
        r10d = x87;
        r11d = y88;
        ebx = r10d;
        ebx--;
        r10d *= ebx;
        r10d &= 1;
        r14b = (r10d == 0) ? 1 : 0;
        r15b = (r11d < 0xa) ? 1 : 0;
        r14b |= r15b;
        *((rbp - 0x41)) = r9b;
        if ((r14b & 1) == 0) {
        } else {
            al = *((rbp - 0x41));
            if ((al & 1) == 0) {
            } else {
                eax = x87;
                ecx = y88;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) == 0) {
                    goto label_3;
                }
label_0:
                std::_throw_bad_alloc() ();
                eax = x87;
                ecx = y88;
                edx = eax;
                edx--;
                eax *= edx;
                eax &= 1;
                sil = (eax == 0) ? 1 : 0;
                dil = (ecx < 0xa) ? 1 : 0;
                sil |= dil;
                if ((sil & 1) != 0) {
                    goto label_4;
                }
                goto label_3;
            }
label_4:
            eax = x87;
            ecx = y88;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_5;
            }
label_1:
            rax = *((rbp - 0x38));
            rcx = *(rax);
            rcx <<= 2;
            rdi = rcx;
            operatornew(unsigned long) ();
            edx = x87;
            esi = y88;
            r8d = edx;
            r8d--;
            edx *= r8d;
            edx &= 1;
            r9b = (edx == 0) ? 1 : 0;
            r10b = (esi < 0xa) ? 1 : 0;
            r9b |= r10b;
            *((rbp - 0x50)) = rax;
            if ((r9b & 1) == 0) {
                goto label_5;
            }
            rax = *((rbp - 0x50));
            rsp = rbp - 0x18;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x28));
        *(rax) = rsi;
        rdi = *((rbp - 0x20));
        *(rcx) = rdi;
        rcx = *((rbp - 0x30));
        *(rdx) = rcx;
        rax = _gnu_cxx::new_allocator<int>::max_size()const (*(rax));
        *((rbp - 0x58)) = rax;
    }
label_3:
    std::_throw_bad_alloc() ();
    goto label_0;
label_5:
    rax = *((rbp - 0x38));
    rcx = *(rax);
    rcx <<= 2;
    rdi = rcx;
    rax = operatornew(unsigned long) ();
    *((rbp - 0x60)) = rax;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x407ba0 */
#include <stdint.h>
 
int64_t method_int_std::copy_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_allocator_int_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std::allocator_int_gnu_cxx::_normal_iterator_int_const_std::vector_int_std_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_a0h;
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
    eax = x59;
    ecx = y60;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x30)) = rsi;
    *((rbp - 0x38)) = rdi;
    *((rbp - 0x40)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = rdi;
        r8 += 0xfffffffffffffff0;
        r9 = r8;
        r9 += 0xfffffffffffffff0;
        r10 = *((rbp - 0x38));
        *(rax) = r10;
        r11 = *((rbp - 0x30));
        *(rcx) = r11;
        rbx = *((rbp - 0x40));
        *(rdx) = rbx;
        rax = *(rax);
        *(rdi) = rax;
        *((rbp - 0x48)) = rcx;
        *((rbp - 0x50)) = rdx;
        *((rbp - 0x58)) = rsi;
        *((rbp - 0x60)) = r8;
        *((rbp - 0x68)) = r9;
        rax = std::_Miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rdi));
        rcx = *((rbp - 0x58));
        *(rcx) = rax;
        rax = *((rbp - 0x48));
        rdx = *(rax);
        rsi = *((rbp - 0x68));
        *(rsi) = rdx;
        rax = std::_Miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rsi));
        rcx = *((rbp - 0x60));
        *(rcx) = rax;
        rax = *((rbp - 0x50));
        rsi = *((rbp - 0x58));
        int*std::_copy_move_a2<false,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (*(rsi), *(rcx), *(rax));
        r14d = x59;
        r15d = y60;
        r12d = r14d;
        r12d--;
        r14d *= r12d;
        r14d &= 1;
        r13b = (r14d == 0) ? 1 : 0;
        cl = (r15d < 0xa) ? 1 : 0;
        r13b |= cl;
        *((rbp - 0x70)) = rax;
        if ((r13b & 1) == 0) {
        } else {
            rax = *((rbp - 0x70));
            rsp = rbp - 0x28;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = rdx;
        rsi += 0xfffffffffffffff0;
        rdi = rsi;
        rdi += 0xfffffffffffffff0;
        r8 = rdi;
        r8 += 0xfffffffffffffff0;
        r9 = r8;
        r9 += 0xfffffffffffffff0;
        r10 = *((rbp - 0x38));
        *(rax) = r10;
        r11 = *((rbp - 0x30));
        *(rcx) = r11;
        rbx = *((rbp - 0x40));
        *(rdx) = rbx;
        rax = *(rax);
        *(rdi) = rax;
        *((rbp - 0x78)) = rcx;
        *((rbp - 0x80)) = rdx;
        *((rbp - 0x88)) = rsi;
        *((rbp - 0x90)) = r8;
        *((rbp - 0x98)) = r9;
        rax = std::_Miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rdi));
        rcx = *((rbp - 0x88));
        *(rcx) = rax;
        rax = *((rbp - 0x78));
        rdx = *(rax);
        rsi = *((rbp - 0x98));
        *(rsi) = rdx;
        rax = std::_Miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>::iterator_typestd::_miter_base<_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>) (*(rsi));
        rcx = *((rbp - 0x90));
        *(rcx) = rax;
        rax = *((rbp - 0x80));
        rsi = *((rbp - 0x88));
        rax = int*std::_copy_move_a2<false,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*>(_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,_gnu_cxx::_normal_iterator<intconst*,std::vector<int,std::allocator<int>>>,int*) (*(rsi), *(rcx), *(rax));
        *((rbp - 0xa0)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40c8b0 */
#include <stdint.h>
 
int64_t method_int_std_copy_int_int_int_int_int_ (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* int* std::copy<int*, int*>(int*, int*, int*) */
    eax = x133;
    ecx = y134;
    r8d = eax;
    r8d--;
    eax *= r8d;
    eax &= 1;
    r9b = (eax == 0) ? 1 : 0;
    r10b = (ecx < 0xa) ? 1 : 0;
    r9b |= r10b;
    *((rbp - 0x18)) = rsi;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x28)) = rdx;
    if ((r9b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x30)) = rcx;
        *((rbp - 0x38)) = rdx;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x30));
        *((rbp - 0x40)) = rax;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x38));
        int*std::_copy_move_a2<false,int*,int*>(int*,int*,int*) (*((rbp - 0x40)), rax, *(rcx));
        r9d = x133;
        r10d = y134;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x48)) = rax;
        if ((bl & 1) == 0) {
        } else {
            rax = *((rbp - 0x48));
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x20));
        *(rax) = rsi;
        rdi = *((rbp - 0x18));
        *(rcx) = rdi;
        r8 = *((rbp - 0x28));
        *(rdx) = r8;
        *((rbp - 0x50)) = rcx;
        *((rbp - 0x58)) = rdx;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rax));
        rcx = *((rbp - 0x50));
        *((rbp - 0x60)) = rax;
        rax = std::_Miter_base<int*>::iterator_typestd::_miter_base<int*>(int*) (*(rcx));
        rcx = *((rbp - 0x58));
        rax = int*std::_copy_move_a2<false,int*,int*>(int*,int*,int*) (*((rbp - 0x60)), rax, *(rcx));
        *((rbp - 0x68)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x4084c0 */
#include <stdint.h>
 
int64_t method_std::_Niter_base_int_::iterator_type_std_niter_base_int_int_ (int64_t arg1) {
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rdi = arg1;
    /* std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*) */
    eax = x71;
    ecx = y72;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        std::_Iter_base<int*,false>::_S_base(int*) (*(rax));
        edx = x71;
        esi = y72;
        r8d = edx;
        r8d--;
        edx *= r8d;
        edx &= 1;
        r9b = (edx == 0) ? 1 : 0;
        r10b = (esi < 0xa) ? 1 : 0;
        r9b |= r10b;
        *((rbp - 0x10)) = rax;
        if ((r9b & 1) == 0) {
        } else {
            rax = *((rbp - 0x10));
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        rax = std::_Iter_base<int*,false>::_S_base(int*) (*(rax));
        *((rbp - 0x18)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40e120 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_1b0h;
    int64_t var_1a1h;
    int64_t var_1a0h;
    int64_t var_19ch;
    int64_t var_198h;
    char * var_190h;
    int64_t var_188h;
    int64_t var_180h;
    int64_t var_178h;
    int64_t var_170h;
    int64_t var_168h;
    int64_t var_160h;
    int64_t var_158h;
    int64_t var_150h;
    int64_t var_144h;
    int64_t var_140h;
    int64_t var_138h;
    int64_t var_120h;
    int64_t var_118h;
    char * s;
    int64_t var_4h;
    *((rbp - 4)) = 0;
    eax = std::cout;
    ecx = std::cout;
    eax = "+-----------------------+\n";
    esi = "+-----------------------+\n";
    rdi = rcx;
    *((rbp - 0x150)) = rcx;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    edx = "|    Welcome Hero       |\n";
    esi = "|    Welcome Hero       |\n";
    rdi = *((rbp - 0x150));
    *((rbp - 0x158)) = rax;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    edx = "+-----------------------+\n\n";
    esi = "+-----------------------+\n\n";
    rdi = *((rbp - 0x150));
    *((rbp - 0x160)) = rax;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    edx = "[!] Quest: there is a dragon prowling the domain.\n";
    esi = "[!] Quest: there is a dragon prowling the domain.\n";
    rdi = *((rbp - 0x150));
    *((rbp - 0x168)) = rax;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    edx = "\tbrute strength and magic is our only hope. Test your skill.\n\n";
    esi = "\tbrute strength and magic is our only hope. Test your skill.\n\n";
    rdi = *((rbp - 0x150));
    *((rbp - 0x170)) = rax;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    edx = "Enter the dragon's secret: ";
    esi = "Enter the dragon's secret: ";
    rdi = *((rbp - 0x150));
    *((rbp - 0x178)) = rax;
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    rcx = rbp - 0x110;
    rdi = rcx;
    *((rbp - 0x180)) = rax;
    *((rbp - 0x188)) = rcx;
    rax = fgets (rdi, 0x101, *(obj.stdin));
    rcx = rbp - 0x120;
    rdi = rcx;
    *((rbp - 0x190)) = rax;
    *((rbp - 0x198)) = rcx;
    std::allocator<char>::allocator() ();
    rdi = rbp - 0x118;
    rsi = *((rbp - 0x188));
    rdx = *((rbp - 0x198));
    std::string (char const*,std::allocator<char>const&) ();
    rdi = rbp - 0x120;
    std::allocator<char>::~allocator() ();
    rdi = rbp - 0x138;
    rsi = rbp - 0x118;
    std::string (std::string const&) ();
    rdi = rbp - 0x138;
    eax = start_quest(std::string) ();
    *((rbp - 0x19c)) = eax;
    eax = *((rbp - 0x19c));
    eax -= 0x1337;
    cl = (eax == 0) ? 1 : 0;
    rdi = rbp - 0x138;
    *((rbp - 0x1a0)) = eax;
    *((rbp - 0x1a1)) = cl;
    std::~string () ();
    al = *((rbp - 0x1a1));
    if ((al & 1) == 0) {
    } else {
        rdi = rbp - 0x140;
        rsi = rbp - 0x118;
        std::string (std::string const&) ();
        rdi = rbp - 0x140;
        reward_strength(std::string) ();
        rdi = rbp - 0x140;
        std::~string () ();
        goto label_0;
    }
    eax = std::cout;
    edi = std::cout;
    eax = "\n[-] You have failed. The dragon's power, speed and intelligence was greater.\n";
    esi = "\n[-] You have failed. The dragon's power, speed and intelligence was greater.\n";
    rax = std::string & std::operator << std::string (std::string &,char const*) ();
    *((rbp - 0x1b0)) = rax;
label_0:
    rdi = rbp - 0x118;
    *((rbp - 4)) = 0;
    *((rbp - 0x144)) = 1;
    std::~string () ();
    eax = *((rbp - 4));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400e40 */
#include <stdint.h>
 
int64_t init (void) {
    /* [11] -r-x section size 26 named .init */
    rax = .got;
    if (rax != 0) {
        gmon_start_ ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400eb0 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40df40 */
#include <stdint.h>
 
int64_t method_gnu_cxx::new_allocator_int_new_allocator_ (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    /* __gnu_cxx::new_allocator<int>::new_allocator() */
    eax = x161;
    ecx = y162;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    sil = (eax == 0) ? 1 : 0;
    r8b = (ecx < 0xa) ? 1 : 0;
    sil |= r8b;
    *((rbp - 8)) = rdi;
    if ((sil & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
        edx = x161;
        esi = y162;
        edi = edx;
        edi--;
        edx *= edi;
        edx &= 1;
        r8b = (edx == 0) ? 1 : 0;
        r9b = (esi < 0xa) ? 1 : 0;
        r8b |= r9b;
        if ((r8b & 1) == 0) {
        } else {
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 8));
        *(rax) = rcx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40bb70 */
#include <stdint.h>
 
int64_t method_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_::difference_type_gnu_cxx::operator_int_std::vector_int_std_allocator_int_gnu_cxx::_normal_iterator_int_std::vector_int_std::allocator_int_const_gn (int64_t arg2, int64_t arg1) {
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    rsi = arg2;
    rdi = arg1;
    /* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&) */
    eax = x111;
    ecx = y112;
    edx = eax;
    edx--;
    eax *= edx;
    eax &= 1;
    r8b = (eax == 0) ? 1 : 0;
    r9b = (ecx < 0xa) ? 1 : 0;
    r8b |= r9b;
    *((rbp - 0x10)) = rdi;
    *((rbp - 0x18)) = rsi;
    if ((r8b & 1) != 0) {
        goto label_0;
    }
    while (1) {
label_0:
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        *((rbp - 0x20)) = rcx;
        rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*(rax));
        rax = *(rax);
        rcx = *((rbp - 0x20));
        *((rbp - 0x28)) = rax;
        rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*(rcx));
        rax = *(rax);
        rcx = *((rbp - 0x28));
        rcx -= rax;
        rcx >>= 2;
        r8d = x111;
        r9d = y112;
        r10d = r8d;
        r10d--;
        r8d *= r10d;
        r8d &= 1;
        r11b = (r8d == 0) ? 1 : 0;
        bl = (r9d < 0xa) ? 1 : 0;
        r11b |= bl;
        *((rbp - 0x30)) = rcx;
        if ((r11b & 1) == 0) {
        } else {
            rax = *((rbp - 0x30));
            rsp = rbp - 8;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = *((rbp - 0x10));
        *(rax) = rdx;
        rsi = *((rbp - 0x18));
        *(rcx) = rsi;
        *((rbp - 0x38)) = rcx;
        rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*(rax));
        rcx = *((rbp - 0x38));
        *((rbp - 0x40)) = rax;
        rax = _gnu_cxx::_normal_iterator<int*,std::vector<int,std::allocator<int>>>::base()const (*(rcx));
        *((rbp - 0x48)) = rax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400e80 */
#include <stdint.h>
 
void std::_throw_length_error_char_const_ (void) {
    /* std::__throw_length_error(char const*) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400ec0 */
#include <stdint.h>
 
void operator_delete_void_ (void) {
    /* operator delete(void*) */
    operator_delete_void_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400ee0 */
#include <stdint.h>
 
void cxa_rethrow (void) {
    cxa_rethrow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f40 */
#include <stdint.h>
 
void fgets (void) {
    fgets ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f50 */
#include <stdint.h>
 
void std::string::length_const (void) {
    /* std::string::length() const */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f70 */
#include <stdint.h>
 
void method_std::basic_ostream_char_std::char_traits_char_std::operator_std_char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_ (void) {
    /* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
    std::basic_ostream_char_std::char_traits_char_std::operator_std::char_traits_char_std::basic_ostream_char_std::char_traits_char_char_const_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400fa0 */
#include <stdint.h>
 
void std::basic_string_char_std::char_traits_char_std::allocator_char_::basic_string_char_const_std::allocator_char_const_ (void) {
    /* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400fb0 */
#include <stdint.h>
 
void std::terminate_ (void) {
    /* std::terminate() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400fc0 */
#include <stdint.h>
 
void std::string::operator_unsigned_long_ (void) {
    /* std::string::operator[](unsigned long) */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400fd0 */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400ff0 */
#include <stdint.h>
 
void fcn_00400ff0 (void) {
    /* std::allocator<char>::~allocator() */
    uint64_t (*0x006100d8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401010 */
#include <stdint.h>
 
void cxa_end_catch (void) {
    cxa_end_catch ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401020 */
#include <stdint.h>
 
void std::_throw_bad_alloc_ (void) {
    /* std::__throw_bad_alloc() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void cxa_begin_catch (void) {
    cxa_begin_catch ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void std::allocator_char_::allocator_ (void) {
    /* std::allocator<char>::allocator() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401060 */
#include <stdint.h>
 
void operator_new_unsigned_long_ (void) {
    /* operator new(unsigned long) */
    operator_new_unsigned_long_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401070 */
#include <stdint.h>
 
void Unwind_Resume (void) {
    Unwind_Resume ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x400f60 */
#include <stdint.h>
 
void std::ios_base::Init::Init_ (void) {
    /* std::ios_base::Init::~Init() */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
void gxx_personality_v0 (void) {
    gxx_personality_v0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x40029f */
#include <stdint.h>
 
int64_t fcn_0040029f (int64_t arg4, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    *(rcx) += al;
    *(rax) += al;
    *(rsi) += al;
    *(rax) += al;
    *((rax - 0x4effd000)) += al;
    *(rax) += eax;
    *((rax + rax)) += esp;
    *(rax) += al;
    eax &= 0x26000000;
    *(rax) += al;
    *(rdi) += al;
    ecx = 0x55676e6a;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_fcd/csaw-wyvern/x64_elf/subject.exe @ 0x406e85 */
#include <stdint.h>
 
int64_t fcn_00406e85 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = rax;
        rcx += 0xfffffffffffffff0;
        rdx = rcx;
        rdx += 0xfffffffffffffff0;
        rsi = *((rbp - 0x18));
        *(rax) = rsi;
        rax = *(rax);
        rsi = *(rax);
        rdi = *((rax + 0x10));
        r8 = *(rax);
        rdi -= r8;
        rdi >>= 2;
        r9d = x41;
        r10d = y42;
        r11d = r9d;
        r11d--;
        r9d *= r11d;
        r9d &= 1;
        bl = (r9d == 0) ? 1 : 0;
        r14b = (r10d < 0xa) ? 1 : 0;
        bl |= r14b;
        *((rbp - 0x20)) = rsi;
        *((rbp - 0x28)) = rcx;
        *((rbp - 0x30)) = rdx;
        *((rbp - 0x38)) = rax;
        *((rbp - 0x40)) = rdi;
        if ((bl & 1) == 0) {
        } else {
            std::_Vector_base<int,std::allocator<int>>::_M_deallocate(int*,unsigned long) (*((rbp - 0x38)), *((rbp - 0x20)), *((rbp - 0x40)));
            eax = x41;
            ecx = y42;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            dil = (ecx < 0xa) ? 1 : 0;
            sil |= dil;
            if ((sil & 1) == 0) {
                goto label_1;
            }
label_0:
            std::_Vector_base<int,std::allocator<int>>::_Vector_impl::~_Vector_impl() (*((rbp - 0x38)));
            eax = x41;
            ecx = y42;
            edx = eax;
            edx--;
            eax *= edx;
            eax &= 1;
            sil = (eax == 0) ? 1 : 0;
            r8b = (ecx < 0xa) ? 1 : 0;
            sil |= r8b;
            if ((sil & 1) == 0) {
                goto label_1;
            }
            rsp = rbp - 0x10;
            return rax;
        }
        rax = rsp;
        rax += 0xfffffffffffffff0;
        rcx = *((rbp - 0x18));
        *(rax) = rcx;
    } while (1);
label_1:
    std::_Vector_base<int,std::allocator<int>>::_Vector_impl::~_Vector_impl() (*((rbp - 0x38)));
    goto label_0;
}
