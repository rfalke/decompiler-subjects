
void call_weak_fn();

void _init() {
    call_weak_fn();
    return;
}

struct s0 {
    struct s0* f0;
    struct s0* f4;
    struct s0** f8;
};

/* std::__throw_length_error(char const*) */
int32_t _ZSt20__throw_length_errorPKc = 0x85bc;

/* std::__throw_length_error(char const*) */
void _ZSt20__throw_length_errorPKc(struct s0* r0) {
    int32_t pc2;

    pc2 = _ZSt20__throw_length_errorPKc;
    goto pc2;
}

/* $d */
int32_t d = 0x9e1c;

int32_t g86c8 = 64;

int32_t __gmon_start__ = 0x85bc;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g86c8;
    if (!*reinterpret_cast<int32_t*>(0x86b8 + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
int32_t d = 0x12523;

void deregister_tm_clones() {
    int32_t r3_1;

    r3_1 = d;
    if (reinterpret_cast<uint32_t>(r3_1 - 0x12520) <= 6) {
        return;
    } else {
        if (1) {
            return;
        } else {
            goto 0;
        }
    }
}

int32_t abort = 0x85bc;

int16_t* abort() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

/* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_category std::__iterator_category<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
int32_t _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS9_(uint32_t* r0);

/* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::difference_type std::__distance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::random_access_iterator_tag) */
struct s0* _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES9_S9_St26random_access_iterator_tag(struct s0* r0, struct s0* r1, int32_t r2);

/* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::difference_type std::distance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES9_S9_(struct s0* r0, struct s0* r1) {
    int32_t r4_3;
    struct s0* r0_4;

    _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS9_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 + 8 - 24);
    r0_4 = _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES9_S9_St26random_access_iterator_tag(r0, r1, r4_3);
    return r0_4;
}

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(int* const&) */
struct s0** _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(struct s0** r0, struct s0* r1);

/* std::vector<int, std::allocator<int> >::end() */
int32_t _ZNSt6vectorIiSaIiEE3endEv(struct s0* r0, struct s0* r1) {
    int32_t v3;

    _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4 - 8, &r0->f4);
    return v3;
}

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */
struct s0* _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(struct s0* r0, struct s0* r1, struct s0* r2);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&) */
struct s0* _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;
    struct s0* r0_5;

    r0_4 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(r0, r1, r2);
    r0_5 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(r1, r1, r2);
    return reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r0_4->f0) - reinterpret_cast<uint32_t>(r0_5->f0)) >> 2;
}

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() */
struct s0* _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* r0, struct s0* r1, struct s0* r2) {
    return r0;
}

/* std::move_iterator<int*> std::make_move_iterator<int*>(int*) */
int32_t _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_(struct s0* r0);

/* int* std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int>(std::move_iterator<int*>, std::move_iterator<int*>, int*, std::allocator<int>&) */
struct s0* _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E(int32_t r0, int32_t r1, struct s0* r2, struct s0* r3);

/* int* std::__uninitialized_move_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
struct s0* _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    int32_t r0_5;
    int32_t r0_6;
    struct s0* r0_7;

    r0_5 = _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_(r0);
    r0_6 = _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_(r1);
    r0_7 = _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E(r0_5, r0_6, r2, r3);
    return r0_7;
}

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */
struct s0* _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(struct s0* r0, struct s0* r1, struct s0* r2) {
    return r0;
}

/* std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*) */
struct s0* _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(struct s0* r0);

/* int* std::__copy_move_backward_a2<true, int*, int*>(int*, int*, int*) */
uint32_t _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_(struct s0* r0, struct s0* r1, struct s0* r2);

/* int* std::move_backward<int*, int*>(int*, int*, int*) */
uint32_t _ZSt13move_backwardIPiS0_ET0_T_S2_S1_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;
    struct s0* r0_5;
    uint32_t r0_6;

    r0_4 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(r0);
    r0_5 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(r1);
    r0_6 = _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_(r0_4, r0_5, r2);
    return r0_6;
}

/* std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(struct s0* r0);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_(struct s0* r0, struct s0* r1, struct s0* r2);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;
    struct s0* r0_5;
    struct s0* r0_6;

    r0_4 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(r0);
    r0_5 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(r1);
    r0_6 = _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_(r0_4, r0_5, r2);
    return r0_6;
}

/* std::vector<int, std::allocator<int> >::size() const */
struct s0* _ZNKSt6vectorIiSaIiEE4sizeEv(struct s0* r0, struct s0* r1) {
    return reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r0->f4) - reinterpret_cast<uint32_t>(r0->f0)) >> 2;
}

/* unsigned int const& std::max<unsigned int>(unsigned int const&, unsigned int const&) */
struct s0* _ZSt3maxIjERKT_S2_S2_(struct s0* r0, struct s0* r1) {
    struct s0* r3_3;

    if (reinterpret_cast<uint32_t>(r0->f0) < reinterpret_cast<uint32_t>(r1->f0)) {
        r3_3 = r0;
    } else {
        r3_3 = r1;
    }
    return r3_3;
}

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */
struct s0* _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* r0);

/* std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */
struct s0* _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_(struct s0* r0);

/* std::vector<int, std::allocator<int> >::max_size() const */
struct s0* _ZNKSt6vectorIiSaIiEE8max_sizeEv(struct s0* r0, struct s0* r1) {
    struct s0* r0_3;
    struct s0* r0_4;

    r0_3 = _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0);
    r0_4 = _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_(r0_3);
    return r0_4;
}

/* __gnu_cxx::new_allocator<int>::allocate(unsigned int, void const*) */
struct s0* _ZN9__gnu_cxx13new_allocatorIiE8allocateEjPKv(struct s0* r0, struct s0* r1, int32_t r2);

/* std::allocator_traits<std::allocator<int> >::allocate(std::allocator<int>&, unsigned int) */
struct s0* _ZNSt16allocator_traitsISaIiEE8allocateERS0_j(struct s0* r0, struct s0* r1) {
    struct s0* r0_3;

    r0_3 = _ZN9__gnu_cxx13new_allocatorIiE8allocateEjPKv(r0, r1, 0);
    return r0_3;
}

/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned int) */
struct s0* _ZN9__gnu_cxx13new_allocatorIiE10deallocateEPij(struct s0* r0, struct s0* r1, int32_t r2);

/* std::allocator_traits<std::allocator<int> >::deallocate(std::allocator<int>&, int*, unsigned int) */
struct s0* _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pij(struct s0* r0, struct s0* r1, int32_t r2) {
    struct s0* r0_4;

    r0_4 = _ZN9__gnu_cxx13new_allocatorIiE10deallocateEPij(r0, r1, r2);
    return r0_4;
}

/* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_category std::__iterator_category<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
int32_t _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS9_(uint32_t* r0) {
    int32_t r3_2;

    return r3_2;
}

/* unsigned int std::allocator_traits<std::allocator<int> >::_S_max_size<std::allocator<int> const, void>(std::allocator<int> const&, int) */
struct s0* _ZNSt16allocator_traitsISaIiEE11_S_max_sizeIKS0_vEEjRT_i(struct s0* r0, int32_t r1);

/* std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */
struct s0* _ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_(struct s0* r0) {
    struct s0* r0_2;

    r0_2 = _ZNSt16allocator_traitsISaIiEE11_S_max_sizeIKS0_vEEjRT_i(r0, 0);
    return r0_2;
}

/* std::__throw_bad_alloc() */
int32_t _ZSt17__throw_bad_allocv = 0x85bc;

/* std::__throw_bad_alloc() */
void _ZSt17__throw_bad_allocv() {
    int32_t pc1;

    pc1 = _ZSt17__throw_bad_allocv;
    goto pc1;
}

/* operator new(unsigned int) */
int32_t _Znwj = 0x85bc;

/* operator new(unsigned int) */
struct s0* _Znwj(uint32_t r0) {
    int32_t pc2;

    pc2 = _Znwj;
    goto pc2;
}

/* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */
void _ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_(struct s0* r0, struct s0* r1) {
    return;
}

int32_t memmove = 0x85bc;

void memmove(struct s0* r0, struct s0* r1, uint32_t r2) {
    int32_t pc4;

    pc4 = memmove;
    goto pc4;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base() const */
struct s0* _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(struct s0* r0);

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb1EE7_S_baseES7_(struct s0* r0) {
    struct s0* r0_2;

    r0_2 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4 - 8);
    return r0_2->f0;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator++() */
int32_t* _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv(int32_t* r0, struct s0** r1) {
    *r0 = *r0 + 4;
    return r0;
}

/* __gnu_cxx::new_allocator<int>::max_size() const */
struct s0* _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(struct s0* r0);

/* unsigned int std::allocator_traits<std::allocator<int> >::_S_max_size<std::allocator<int> const, void>(std::allocator<int> const&, int) */
struct s0* _ZNSt16allocator_traitsISaIiEE11_S_max_sizeIKS0_vEEjRT_i(struct s0* r0, int32_t r1) {
    struct s0* r0_3;

    r0_3 = _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(r0);
    return r0_3;
}

/* std::move_iterator<int*>::base() const */
struct s0* _ZNKSt13move_iteratorIPiE4baseEv(struct s0* r0);

/* bool std::operator==<int*>(std::move_iterator<int*> const&, std::move_iterator<int*> const&) */
uint32_t _ZSteqIPiEbRKSt13move_iteratorIT_ES5_(struct s0* r0, struct s0* r1) {
    struct s0* r0_3;
    struct s0* r0_4;
    struct s0* r3_5;
    int1_t z6;

    r0_3 = _ZNKSt13move_iteratorIPiE4baseEv(r0);
    r0_4 = _ZNKSt13move_iteratorIPiE4baseEv(r1);
    r3_5 = r0_4;
    z6 = r0_3 == r3_5;
    if (z6) {
        r3_5 = reinterpret_cast<struct s0*>(1);
    }
    if (!z6) {
        r3_5 = reinterpret_cast<struct s0*>(0);
    }
    return static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r3_5));
}

/* std::move_iterator<int*>::base() const */
struct s0* _ZNKSt13move_iteratorIPiE4baseEv(struct s0* r0) {
    return r0->f0;
}

int32_t __libc_start_main = 0x85bc;

void __libc_start_main(int32_t r0) {
    int32_t pc2;

    pc2 = __libc_start_main;
    goto pc2;
}

/* operator delete(void*) */
int32_t _ZdlPv = 0x85bc;

/* operator delete(void*) */
struct s0* _ZdlPv(struct s0* r0) {
    int32_t pc2;

    pc2 = _ZdlPv;
    goto pc2;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator<int*>(__gnu_cxx::__normal_iterator<int*, __gnu_cxx::__enable_if<std::__are_same<int*, int*>::__value, std::vector<int, std::allocator<int> > >::__type> const&) */
struct s0* _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;

    r0_4 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(r1, r1, r2);
    r0->f0 = r0_4->f0;
    return r0;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(int const* const&) */
int32_t* _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_(int32_t* r0, int32_t* r1);

/* std::vector<int, std::allocator<int> >::begin() const */
struct s0* _ZNKSt6vectorIiSaIiEE5beginEv(struct s0* r0, struct s0* r1) {
    void* r11_3;
    struct s0* v4;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4);
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_(reinterpret_cast<int32_t>(r11_3) - 12, reinterpret_cast<int32_t>(r11_3) - 8);
    return v4;
}

/* std::vector<int, std::allocator<int> >::end() const */
struct s0* _ZNKSt6vectorIiSaIiEE3endEv(struct s0* r0, struct s0* r1) {
    void* r11_3;
    struct s0* v4;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4);
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_(reinterpret_cast<int32_t>(r11_3) - 12, reinterpret_cast<int32_t>(r11_3) - 8);
    return v4;
}

/* std::vector<int, std::allocator<int> >::cbegin() const */
int32_t _ZNKSt6vectorIiSaIiEE6cbeginEv(struct s0* r0);

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int const*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
struct s0* _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_(struct s0* r0, struct s0* r1);

/* std::vector<int, std::allocator<int> >::begin() */
int32_t _ZNSt6vectorIiSaIiEE5beginEv(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, signed char a5);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator+(int) const */
struct s0* _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEi(void* r0, struct s0* r1, struct s0* r2);

/* void std::vector<int, std::allocator<int> >::_M_insert_dispatch<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::__false_type) */
struct s0* _ZNSt6vectorIiSaIiEE18_M_insert_dispatchIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEvNS4_IPiS1_EET_SA_St12__false_type(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, signed char a5);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::vector<int, std::allocator<int> >::insert<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, void>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZNSt6vectorIiSaIiEE6insertIN9__gnu_cxx17__normal_iteratorIPKiS1_EEvEENS4_IPiS1_EES7_T_SA_(struct s0* r0, int32_t r1, struct s0* r2, struct s0* r3) {
    void* r11_5;
    struct s0* r2_6;
    struct s0* r3_7;
    struct s0* r0_8;
    signed char v9;
    struct s0* r0_10;
    signed char v11;
    int32_t r4_12;
    struct s0* r0_13;

    r11_5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 + 8);
    _ZNKSt6vectorIiSaIiEE6cbeginEv(r0);
    r2_6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_5) - 44);
    r3_7 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_5) - 32);
    r0_8 = _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_(r2_6, r3_7);
    _ZNSt6vectorIiSaIiEE5beginEv(r0, r3_7, r2_6, r3_7, v9);
    r0_10 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEi(reinterpret_cast<int32_t>(r11_5) - 28, r0_8, r2_6);
    v11 = static_cast<signed char>(r4_12);
    _ZNSt6vectorIiSaIiEE18_M_insert_dispatchIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEvNS4_IPiS1_EET_SA_St12__false_type(r0, r0_10, r2, r3, v11);
    _ZNSt6vectorIiSaIiEE5beginEv(r0, r0_10, r2, r3, v11);
    r0_13 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEi(reinterpret_cast<int32_t>(r11_5) - 20, r0_8, r2);
    return r0_13;
}

/* std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::difference_type std::__distance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::random_access_iterator_tag) */
struct s0* _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES9_S9_St26random_access_iterator_tag(struct s0* r0, struct s0* r1, int32_t r2) {
    void* r11_4;
    struct s0* r0_5;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4);
    r0_5 = _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_(reinterpret_cast<int32_t>(r11_4) - 12, reinterpret_cast<int32_t>(r11_4) - 8);
    return r0_5;
}

/* bool __gnu_cxx::operator!=<int const*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
struct s0* _ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_(struct s0* r0, struct s0* r1) {
    struct s0* r0_3;
    struct s0* r0_4;
    struct s0* r3_5;
    int1_t z6;

    r0_3 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(r0);
    r0_4 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(r1);
    r3_5 = r0_4->f0;
    z6 = r0_3->f0 == r3_5;
    if (!z6) {
        r3_5 = reinterpret_cast<struct s0*>(1);
    }
    if (z6) {
        r3_5 = reinterpret_cast<struct s0*>(0);
    }
    return static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r3_5));
}

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(int* const&) */
struct s0** _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(struct s0** r0, struct s0* r1) {
    *r0 = r1->f0;
    return r0;
}

/* std::vector<int, std::allocator<int> >::_M_check_len(unsigned int, char const*) const */
struct s0* _ZNKSt6vectorIiSaIiEE12_M_check_lenEjPKc(struct s0* r0, struct s0* r1, struct s0* r2) {
    void* r11_4;
    struct s0* r0_5;
    struct s0* r0_6;
    struct s0* r3_7;
    int1_t c8;
    struct s0* r0_9;
    struct s0* r1_10;
    struct s0* r0_11;
    struct s0* v12;
    struct s0* r0_13;
    struct s0* r0_14;
    struct s0* r3_15;
    struct s0* r0_16;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 + 8);
    r0_5 = _ZNKSt6vectorIiSaIiEE8max_sizeEv(r0, r1);
    r0_6 = _ZNKSt6vectorIiSaIiEE4sizeEv(r0, r1);
    r3_7 = r1;
    c8 = reinterpret_cast<uint32_t>(r0_5) - reinterpret_cast<uint32_t>(r0_6) < reinterpret_cast<uint32_t>(r3_7);
    if (!c8) {
        r3_7 = reinterpret_cast<struct s0*>(1);
    }
    if (c8) {
        r3_7 = reinterpret_cast<struct s0*>(0);
    }
    if (*reinterpret_cast<unsigned char*>(&r3_7)) {
        _ZSt20__throw_length_errorPKc(r2);
    }
    r0_9 = _ZNKSt6vectorIiSaIiEE4sizeEv(r0, r1);
    _ZNKSt6vectorIiSaIiEE4sizeEv(r0, r1);
    r1_10 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_4) - 28);
    r0_11 = _ZSt3maxIjERKT_S2_S2_(reinterpret_cast<int32_t>(r11_4) - 20, r1_10);
    v12 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r0_9) + reinterpret_cast<uint32_t>(r0_11->f0));
    r0_13 = _ZNKSt6vectorIiSaIiEE4sizeEv(r0, r1_10);
    if (reinterpret_cast<uint32_t>(r0_13) > reinterpret_cast<uint32_t>(v12)) {
        goto addr_9344_10;
    } else {
        r0_14 = _ZNKSt6vectorIiSaIiEE8max_sizeEv(r0, r1_10);
        if (reinterpret_cast<uint32_t>(r0_14) < reinterpret_cast<uint32_t>(v12)) {
            r3_15 = v12;
        } else {
            addr_9344_10:
            r0_16 = _ZNKSt6vectorIiSaIiEE8max_sizeEv(r0, r1_10);
            r3_15 = r0_16;
        }
        return r3_15;
    }
}

/* std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned int) */
struct s0* _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEj(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r3_4;
    struct s0* r0_5;

    if (!r1) {
        r3_4 = reinterpret_cast<struct s0*>(0);
    } else {
        r0_5 = _ZNSt16allocator_traitsISaIiEE8allocateERS0_j(r0, r1);
        r3_4 = r0_5;
    }
    return r3_4;
}

/* std::move_iterator<int*> std::__make_move_if_noexcept_iterator<int*, std::move_iterator<int*> >(int*) */
int32_t _ZSt32__make_move_if_noexcept_iteratorIPiSt13move_iteratorIS0_EET0_T_(struct s0* r0);

/* int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
struct s0* _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    int32_t r0_5;
    int32_t r0_6;
    struct s0* r0_7;

    r0_5 = _ZSt32__make_move_if_noexcept_iteratorIPiSt13move_iteratorIS0_EET0_T_(r0);
    r0_6 = _ZSt32__make_move_if_noexcept_iteratorIPiSt13move_iteratorIS0_EET0_T_(r1);
    r0_7 = _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E(r0_5, r0_6, r2, r3);
    return r0_7;
}

/* int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
struct s0* _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(struct s0* r0, struct s0* r1, struct s0* r2);

/* int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, std::allocator<int>&) */
struct s0* _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0* r0_5;

    r0_5 = _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(r0, r1, r2);
    return r0_5;
}

/* void std::_Destroy<int*>(int*, int*) */
void _ZSt8_DestroyIPiEvT_S1_(struct s0* r0, struct s0* r1);

/* void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&) */
void _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(struct s0* r0, struct s0* r1, struct s0* r2) {
    _ZSt8_DestroyIPiEvT_S1_(r0, r1);
    return;
}

/* std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned int) */
struct s0* _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPij(struct s0* r0, struct s0* r1, int32_t r2) {
    if (r1) {
        r0 = _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pij(r0, r1, r2);
    }
    return r0;
}

/* std::move_iterator<int*>::move_iterator(int*) */
struct s0** _ZNSt13move_iteratorIPiEC1ES0_(struct s0** r0, struct s0* r1);

/* std::move_iterator<int*> std::make_move_iterator<int*>(int*) */
int32_t _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_(struct s0* r0) {
    int32_t v2;

    _ZNSt13move_iteratorIPiEC1ES0_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4 - 8, r0);
    return v2;
}

/* int* std::uninitialized_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*) */
struct s0* _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_(int32_t r0, int32_t r1, struct s0* r2);

/* int* std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int>(std::move_iterator<int*>, std::move_iterator<int*>, int*, std::allocator<int>&) */
struct s0* _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES1_iET0_T_S4_S3_RSaIT1_E(int32_t r0, int32_t r1, struct s0* r2, struct s0* r3) {
    struct s0* r0_5;

    r0_5 = _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_(r0, r1, r2);
    return r0_5;
}

/* std::vector<int, std::allocator<int> >::cbegin() const */
int32_t _ZNKSt6vectorIiSaIiEE6cbeginEv(struct s0* r0) {
    void* r11_2;
    int32_t v3;

    r11_2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4);
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_(reinterpret_cast<int32_t>(r11_2) - 12, reinterpret_cast<int32_t>(r11_2) - 8);
    return v3;
}

/* std::_Iter_base<int*, false>::_S_base(int*) */
struct s0* _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(struct s0* r0);

/* std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*) */
struct s0* _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(struct s0* r0) {
    struct s0* r0_2;

    r0_2 = _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(r0);
    return r0_2;
}

/* std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*) */
struct s0* _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(struct s0* r0);

/* int* std::__copy_move_backward_a<true, int*, int*>(int*, int*, int*) */
uint32_t _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_(struct s0* r0, struct s0* r1, struct s0* r2);

/* int* std::__copy_move_backward_a2<true, int*, int*>(int*, int*, int*) */
uint32_t _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;
    struct s0* r0_5;
    struct s0* r0_6;
    uint32_t r0_7;

    r0_4 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(r0);
    r0_5 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(r1);
    r0_6 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(r2);
    r0_7 = _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_(r0_4, r0_5, r0_6);
    return r0_7;
}

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(struct s0* r0);

/* std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(struct s0* r0) {
    struct s0* r0_2;

    r0_2 = _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(r0);
    return r0_2;
}

/* std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(struct s0* r0);

/* std::_Niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES8_(struct s0* r0, struct s0* r1, struct s0* r2);

/* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */
struct s0** _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(struct s0* r0, struct s0* r1, struct s0* r2);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_(struct s0* r0, struct s0* r1, struct s0* r2) {
    void* r11_4;
    struct s0* r0_5;
    struct s0* r0_6;
    struct s0* r0_7;
    struct s0* v8;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 + 12);
    r0_5 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(r0);
    r0_6 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(r1);
    r0_7 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES8_(r2, r1, r2);
    _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(r0_5, r0_6, r0_7);
    _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(reinterpret_cast<int32_t>(r11_4) - 20, reinterpret_cast<int32_t>(r11_4) - 16);
    return v8;
}

/* void std::__advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >&, int, std::random_access_iterator_tag) */
uint32_t* _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEiEvRT_T0_St26random_access_iterator_tag(uint32_t* r0, struct s0* r1, int32_t r2);

/* void std::advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, unsigned int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >&, unsigned int) */
uint32_t* _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEjEvRT_T0_(uint32_t* r0, struct s0* r1) {
    int32_t r4_3;
    uint32_t* r0_4;

    _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS9_(r0);
    r0_4 = _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEiEvRT_T0_St26random_access_iterator_tag(r0, r1, r4_3);
    return r0_4;
}

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */
struct s0* _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* r0) {
    return r0;
}

/* __gnu_cxx::new_allocator<int>::allocate(unsigned int, void const*) */
struct s0* _ZN9__gnu_cxx13new_allocatorIiE8allocateEjPKv(struct s0* r0, struct s0* r1, int32_t r2) {
    struct s0* r0_4;
    struct s0* r3_5;
    int1_t c6;
    struct s0* r0_7;

    r0_4 = _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(r0);
    r3_5 = r1;
    c6 = reinterpret_cast<uint32_t>(r0_4) < reinterpret_cast<uint32_t>(r3_5);
    if (!c6) {
        r3_5 = reinterpret_cast<struct s0*>(1);
    }
    if (c6) {
        r3_5 = reinterpret_cast<struct s0*>(0);
    }
    if (*reinterpret_cast<unsigned char*>(&r3_5)) {
        _ZSt17__throw_bad_allocv();
    }
    r0_7 = _Znwj(reinterpret_cast<uint32_t>(r1) << 2);
    return r0_7;
}

/* std::move_iterator<int*> std::__make_move_if_noexcept_iterator<int*, std::move_iterator<int*> >(int*) */
int32_t _ZSt32__make_move_if_noexcept_iteratorIPiSt13move_iteratorIS0_EET0_T_(struct s0* r0) {
    int32_t v2;

    _ZNSt13move_iteratorIPiEC1ES0_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4 - 8, r0);
    return v2;
}

/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned int) */
struct s0* _ZN9__gnu_cxx13new_allocatorIiE10deallocateEPij(struct s0* r0, struct s0* r1, int32_t r2) {
    struct s0* r0_4;

    r0_4 = _ZdlPv(r1);
    return r0_4;
}

/* std::move_iterator<int*>::move_iterator(int*) */
struct s0** _ZNSt13move_iteratorIPiEC1ES0_(struct s0** r0, struct s0* r1) {
    *r0 = r1;
    return r0;
}

/* int* std::__addressof<int>(int&) */
struct s0* _ZSt11__addressofIiEPT_RS0_(struct s0* r0, struct s0* r1) {
    return r0;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator*() const */
struct s0** _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv(struct s0*** r0, struct s0* r1) {
    return *r0;
}

/* int const& std::forward<int const&>(std::remove_reference<int const&>::type&) */
struct s0** _ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE(struct s0** r0);

/* operator new(unsigned int, void*) */
struct s0* _ZnwjPv(int32_t r0, struct s0* r1);

/* void std::_Construct<int, int const&>(int*, int const&) */
void _ZSt10_ConstructIiJRKiEEvPT_DpOT0_(struct s0* r0, struct s0** r1) {
    struct s0** r0_3;
    struct s0* r0_4;

    r0_3 = _ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE(r1);
    r0_4 = _ZnwjPv(4, r0);
    if (r0_4) {
        r0_4->f0 = *r0_3;
    }
    return;
}

int32_t __cxa_begin_catch = 0x85bc;

void __cxa_begin_catch(int32_t r0) {
    int32_t pc2;

    pc2 = __cxa_begin_catch;
    goto pc2;
}

/* int* std::__copy_move_backward<true, true, std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*) */
uint32_t _ZNSt20__copy_move_backwardILb1ELb1ESt26random_access_iterator_tagE13__copy_move_bIiEEPT_PKS3_S6_S4_(struct s0* r0, struct s0* r1, struct s0* r2) {
    uint32_t v4;

    v4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r1) - reinterpret_cast<uint32_t>(r0)) >> 2);
    if (v4) {
        memmove(reinterpret_cast<uint32_t>(r2) + -(v4 << 2), r0, v4 << 2);
    }
    return reinterpret_cast<uint32_t>(r2) + -(v4 << 2);
}

int32_t __cxa_end_catch = 0x85bc;

void __cxa_end_catch() {
    int32_t pc1;

    pc1 = __cxa_end_catch;
    goto pc1;
}

int32_t __cxa_end_cleanup = 0x85bc;

int32_t __cxa_end_cleanup() {
    int32_t pc1;

    pc1 = __cxa_end_cleanup;
    goto pc1;
}

/* void std::_Destroy<int*>(int*, int*) */
void _ZSt8_DestroyIPiEvT_S1_(struct s0* r0, struct s0* r1) {
    _ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_(r0, r1);
    return;
}

int32_t __cxa_rethrow = 0x85bc;

void __cxa_rethrow(struct s0* r0, struct s0* r1, int32_t r2) {
    int32_t pc4;

    pc4 = __cxa_rethrow;
    goto pc4;
}

/* std::remove_reference<int&>::type&& std::move<int&>(int&) */
struct s0** _ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_(struct s0** r0);

/* std::move_iterator<int*>::operator*() const */
struct s0** _ZNKSt13move_iteratorIPiEdeEv(struct s0*** r0, struct s0* r1) {
    struct s0** r0_3;

    r0_3 = _ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_(*r0);
    return r0_3;
}

/* int&& std::forward<int>(std::remove_reference<int>::type&) */
struct s0** _ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE(struct s0** r0);

/* void std::_Construct<int, int>(int*, int&&) */
void _ZSt10_ConstructIiJiEEvPT_DpOT0_(struct s0* r0, struct s0** r1) {
    struct s0** r0_3;
    struct s0* r0_4;

    r0_3 = _ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE(r1);
    r0_4 = _ZnwjPv(4, r0);
    if (r0_4) {
        r0_4->f0 = *r0_3;
    }
    return;
}

/* std::move_iterator<int*>::operator++() */
int32_t* _ZNSt13move_iteratorIPiEppEv(int32_t* r0, struct s0** r1) {
    *r0 = *r0 + 4;
    return r0;
}

/* bool std::operator!=<int*>(std::move_iterator<int*> const&, std::move_iterator<int*> const&) */
uint32_t _ZStneIPiEbRKSt13move_iteratorIT_ES5_(struct s0* r0, struct s0* r1) {
    uint32_t r0_3;
    uint32_t r3_4;

    r0_3 = _ZSteqIPiEbRKSt13move_iteratorIT_ES5_(r0, r1);
    r3_4 = r0_3 ^ 1;
    return static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&r3_4));
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base() const */
struct s0* _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(struct s0* r0) {
    return r0;
}

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEELb1EE7_S_baseES6_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;

    r0_4 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4 - 8, r1, r2);
    return r0_4->f0;
}

/* __gnu_cxx::new_allocator<int>::max_size() const */
struct s0* _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(struct s0* r0) {
    return 0x3fffffff;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(int const* const&) */
int32_t* _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_(int32_t* r0, int32_t* r1) {
    *r0 = *r1;
    return r0;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int const*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > const&) */
struct s0* _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_(struct s0* r0, struct s0* r1) {
    struct s0* r0_3;
    struct s0* r0_4;

    r0_3 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(r0);
    r0_4 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(r1);
    return reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r0_3->f0) - reinterpret_cast<uint32_t>(r0_4->f0)) >> 2;
}

/* std::vector<int, std::allocator<int> >::begin() */
int32_t _ZNSt6vectorIiSaIiEE5beginEv(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, signed char a5) {
    int32_t v6;

    _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4 - 8, r0);
    return v6;
}

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator+(int) const */
struct s0* _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEi(void* r0, struct s0* r1, struct s0* r2) {
    void* r11_4;
    struct s0* v5;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 4);
    _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(reinterpret_cast<int32_t>(r11_4) - 12, reinterpret_cast<int32_t>(r11_4) - 8);
    return v5;
}

/* void std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::forward_iterator_tag) */
struct s0* _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEvNS4_IPiS1_EET_SA_St20forward_iterator_tag(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, signed char a5);

/* void std::vector<int, std::allocator<int> >::_M_insert_dispatch<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::__false_type) */
struct s0* _ZNSt6vectorIiSaIiEE18_M_insert_dispatchIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEvNS4_IPiS1_EET_SA_St12__false_type(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, signed char a5) {
    int32_t r12_6;
    struct s0* r0_7;

    r0_7 = _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEvNS4_IPiS1_EET_SA_St20forward_iterator_tag(r0, r1, r2, r3, static_cast<signed char>(r12_6));
    return r0_7;
}

/* operator new(unsigned int, void*) */
struct s0* _ZnwjPv(int32_t r0, struct s0* r1) {
    return r1;
}

/* int* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
struct s0* _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(struct s0* r0, struct s0* r1, struct s0* r2);

/* int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
struct s0* _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;

    r0_4 = _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(r0, r1, r2);
    return r0_4;
}

/* int* std::__uninitialized_copy<false>::__uninit_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*) */
struct s0* _ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_(int32_t r0, int32_t r1, struct s0* r2);

/* int* std::uninitialized_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*) */
struct s0* _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_(int32_t r0, int32_t r1, struct s0* r2) {
    struct s0* r0_4;

    r0_4 = _ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_(r0, r1, r2);
    return r0_4;
}

/* std::_Iter_base<int*, false>::_S_base(int*) */
struct s0* _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(struct s0* r0) {
    return r0;
}

/* std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*) */
struct s0* _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(struct s0* r0) {
    struct s0* r0_2;

    r0_2 = _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(r0);
    return r0_2;
}

/* int* std::__copy_move_backward_a<true, int*, int*>(int*, int*, int*) */
uint32_t _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_(struct s0* r0, struct s0* r1, struct s0* r2) {
    uint32_t r0_4;

    r0_4 = _ZNSt20__copy_move_backwardILb1ELb1ESt26random_access_iterator_tagE13__copy_move_bIiEEPT_PKS3_S6_S4_(r0, r1, r2);
    return r0_4;
}

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(struct s0* r0) {
    return r0;
}

/* std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(struct s0* r0) {
    struct s0* r0_2;

    r0_2 = _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb1EE7_S_baseES7_(r0);
    return r0_2;
}

/* std::_Niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >) */
struct s0* _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES8_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;

    r0_4 = _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEELb1EE7_S_baseES6_(r0, r1, r2);
    return r0_4;
}

/* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int const*, int*) */
struct s0** _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(struct s0* r0, struct s0* r1, struct s0* r2);

/* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */
struct s0** _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0** r0_4;

    r0_4 = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(r0, r1, r2);
    return r0_4;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator+=(int) */
uint32_t* _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEpLEi(uint32_t* r0, struct s0* r1);

/* void std::__advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >&, int, std::random_access_iterator_tag) */
uint32_t* _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEiEvRT_T0_St26random_access_iterator_tag(uint32_t* r0, struct s0* r1, int32_t r2) {
    uint32_t* r0_4;

    r0_4 = _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEpLEi(r0, r1);
    return r0_4;
}

/* int* std::__uninitialized_copy<false>::__uninit_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*) */
struct s0* _ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIPiES3_EET0_T_S6_S5_(int32_t r0, int32_t r1, struct s0* r2) {
    void* r11_4;
    struct s0* v5;
    struct s0* r1_6;
    uint32_t r0_7;
    struct s0* r0_8;
    struct s0** r0_9;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 + 8);
    v5 = r2;
    while (r1_6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_4) - 28), r0_7 = _ZStneIPiEbRKSt13move_iteratorIT_ES5_(reinterpret_cast<int32_t>(r11_4) - 24, r1_6), !!r0_7) {
        r0_8 = _ZSt11__addressofIiEPT_RS0_(v5, r1_6);
        r0_9 = _ZNKSt13move_iteratorIPiEdeEv(reinterpret_cast<int32_t>(r11_4) - 24, r1_6);
        _ZSt10_ConstructIiJiEEvPT_DpOT0_(r0_8, r0_9);
        _ZNSt13move_iteratorIPiEppEv(reinterpret_cast<int32_t>(r11_4) - 24, r0_9);
        v5 = reinterpret_cast<struct s0*>(&v5->f4);
    }
    return v5;
}

/* int const& std::forward<int const&>(std::remove_reference<int const&>::type&) */
struct s0** _ZSt7forwardIRKiEOT_RNSt16remove_referenceIS2_E4typeE(struct s0** r0) {
    return r0;
}

/* std::remove_reference<int&>::type&& std::move<int&>(int&) */
struct s0** _ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_(struct s0** r0) {
    return r0;
}

/* int&& std::forward<int>(std::remove_reference<int>::type&) */
struct s0** _ZSt7forwardIiEOT_RNSt16remove_referenceIS0_E4typeE(struct s0** r0) {
    return r0;
}

/* void std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, std::forward_iterator_tag) */
struct s0* _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEvNS4_IPiS1_EET_SA_St20forward_iterator_tag(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, signed char a5) {
    void* r11_6;
    struct s0* r0_7;
    struct s0* r0_8;
    struct s0* r0_9;
    struct s0* r0_10;
    struct s0* r0_11;
    struct s0* r0_12;
    struct s0* r1_13;
    struct s0* r0_14;
    struct s0* r0_15;
    struct s0* r0_16;
    struct s0* r0_17;
    struct s0* r0_18;
    struct s0* r1_19;
    struct s0* r0_20;
    struct s0* r0_21;
    struct s0* r2_22;
    struct s0* r1_23;
    struct s0* r0_24;
    struct s0* v25;
    struct s0* r0_26;
    struct s0* r2_27;
    struct s0* r0_28;
    struct s0* r0_29;
    struct s0* r0_30;
    struct s0* r1_31;
    struct s0* r2_32;
    struct s0* r0_33;

    r11_6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 + 16);
    r0_7 = _ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_(reinterpret_cast<int32_t>(r11_6) - 64, reinterpret_cast<int32_t>(r11_6) - 68);
    if (r0_7) {
        r0_8 = _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES9_S9_(r2, r3);
        if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r0->f8) - reinterpret_cast<uint32_t>(r0->f4)) >> 2) >= reinterpret_cast<uint32_t>(r0_8)) {
            r0_9 = _ZNKSt6vectorIiSaIiEE12_M_check_lenEjPKc(r0, r0_8, "vector::_M_range_insert");
            r0_10 = _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEj(r0, r0_9, "vector::_M_range_insert");
            r0_11 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(reinterpret_cast<int32_t>(r11_6) - 60, r0_9, "vector::_M_range_insert");
            r0_12 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r0_9, "vector::_M_range_insert");
            r1_13 = r0_11->f0;
            r0_14 = _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(r0->f0, r1_13, r0_10, r0_12);
            r0_15 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r1_13, r0_10);
            r0_16 = _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E(r2, r3, r0_14, r0_15);
            r0_17 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(reinterpret_cast<int32_t>(r11_6) - 60, r3, r0_14);
            r0_18 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r3, r0_14);
            r1_19 = r0->f4;
            r0_20 = _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(r0_17->f0, r1_19, r0_16, r0_18);
            r0_21 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r1_19, r0_16);
            _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(r0->f0, r0->f4, r0_21);
            r0_7 = _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPij(r0, r0->f0, reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r0->f8) - reinterpret_cast<uint32_t>(r0->f0)) >> 2);
            r0->f0 = r0_10;
            r0->f4 = r0_20;
            r0->f8 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(r0_10) + (reinterpret_cast<uint32_t>(r0_9) << 2));
        } else {
            _ZNSt6vectorIiSaIiEE3endEv(r0, r3);
            r2_22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_6) - 48);
            r1_23 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_6) - 60);
            r0_24 = _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(r2_22, r1_23, r2_22);
            v25 = r0->f4;
            if (reinterpret_cast<uint32_t>(r0_24) <= reinterpret_cast<uint32_t>(r0_8)) {
                _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEjEvRT_T0_(reinterpret_cast<int32_t>(r11_6) - 52, r0_24);
                r0_26 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r0_24, r0_24);
                _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E(r2, r3, r0->f4, r0_26);
                r2_27 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r0->f4) + (reinterpret_cast<uint32_t>(r0_8) - reinterpret_cast<uint32_t>(r0_24) << 2));
                r0->f4 = r2_27;
                r0_28 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(reinterpret_cast<int32_t>(r11_6) - 60, r0_8, r2_27);
                r0_29 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r0_8, r2_27);
                _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_(r0_28->f0, v25, r0->f4, r0_29);
                r0->f4 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r0->f4) + (reinterpret_cast<uint32_t>(r0_24) << 2));
                r0_7 = _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_(r2, r2, r1);
            } else {
                r0_30 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(r0, r1_23, r0->f4);
                r1_31 = r0->f4;
                _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_(reinterpret_cast<uint32_t>(r0->f4) + -(reinterpret_cast<uint32_t>(r0_8) << 2), r1_31, r0->f4, r0_30);
                r2_32 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r0->f4) + (reinterpret_cast<uint32_t>(r0_8) << 2));
                r0->f4 = r2_32;
                r0_33 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(reinterpret_cast<int32_t>(r11_6) - 60, r1_31, r2_32);
                _ZSt13move_backwardIPiS0_ET0_T_S2_S1_(r0_33->f0, reinterpret_cast<uint32_t>(v25) + -(reinterpret_cast<uint32_t>(r0_8) << 2), v25);
                r0_7 = _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_(r2, r3, r1);
            }
        }
    }
    return r0_7;
}

/* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int const*, int*) */
struct s0** _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(struct s0* r0, struct s0* r1, struct s0* r2) {
    uint32_t v4;

    v4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r1) - reinterpret_cast<uint32_t>(r0)) >> 2);
    if (v4) {
        memmove(r2, r0, v4 << 2);
    }
    return reinterpret_cast<uint32_t>(r2) + (v4 << 2);
}

/* int* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
struct s0* _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(struct s0* r0, struct s0* r1, struct s0* r2) {
    void* r11_4;
    struct s0* v5;
    struct s0* r1_6;
    struct s0* r0_7;
    struct s0* r0_8;
    struct s0** r0_9;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 + 8);
    v5 = r2;
    while (r1_6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_4) - 28), r0_7 = _ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_(reinterpret_cast<int32_t>(r11_4) - 24, r1_6), !!r0_7) {
        r0_8 = _ZSt11__addressofIiEPT_RS0_(v5, r1_6);
        r0_9 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv(reinterpret_cast<int32_t>(r11_4) - 24, r1_6);
        _ZSt10_ConstructIiJRKiEEvPT_DpOT0_(r0_8, r0_9);
        _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv(reinterpret_cast<int32_t>(r11_4) - 24, r0_9);
        v5 = reinterpret_cast<struct s0*>(&v5->f4);
    }
    return v5;
}

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::operator+=(int) */
uint32_t* _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEpLEi(uint32_t* r0, struct s0* r1) {
    *r0 = *r0 + (reinterpret_cast<uint32_t>(r1) << 2);
    return r0;
}

/* $d */
int32_t d = 0x9f08;

/* $d */
void d(int32_t r0);

/* $a */
void a() {
    int32_t lr1;

    lr1 = d;
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(d) + lr1 + 8);
}

/* $d */
void d(int32_t r0) {
    int1_t z2;
    int1_t z3;

    if (z2) {
    }
    if (!z3) 
        goto "???";
}

/* $d */
int32_t d() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (z2) {
        return 0x12520;
    } else {
        if (1) {
            return 0x12520;
        } else {
            goto 0;
        }
    }
}

unsigned char _edata = 0;

void __do_global_dtors_aux() {
    uint32_t r3_1;

    r3_1 = _edata;
    if (r3_1) {
        return;
    } else {
        deregister_tm_clones();
        _edata = 1;
        return;
    }
}

int32_t __JCR_END__ = 0;

void __aeabi_unwind_cpp_pr1();

void frame_dummy() {
    int32_t r3_1;

    r3_1 = __JCR_END__;
    if (r3_1) {
        if (!1) 
            goto addr_878c_4;
    } else {
        addr_8774_5:
        goto 0x86fc;
    }
    goto addr_8774_5;
    addr_878c_4:
    __aeabi_unwind_cpp_pr1();
    goto addr_8774_5;
}

/* f(std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> > const&) */
struct s0* _Z1fRSt6vectorIiSaIiEERKS1_(struct s0* r0, struct s0* r1) {
    void* r11_3;
    struct s0* r2_4;
    struct s0* r1_5;
    struct s0* r0_6;
    struct s0* r0_7;
    int32_t v8;
    struct s0* r0_9;

    r11_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 + 8);
    _ZNSt6vectorIiSaIiEE3endEv(r0, r1);
    r2_4 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_3) - 20);
    r1_5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r11_3) - 16);
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE(r2_4, r1_5, r2_4);
    r0_6 = _ZNKSt6vectorIiSaIiEE5beginEv(r1, r1_5);
    r0_7 = _ZNKSt6vectorIiSaIiEE3endEv(r1, r1_5);
    r0_9 = _ZNSt6vectorIiSaIiEE6insertIN9__gnu_cxx17__normal_iteratorIPKiS1_EEvEENS4_IPiS1_EES7_T_SA_(r0, v8, r0_6, r0_7);
    return r0_9;
}

void fun_9c54() {
    int32_t r0_1;
    int32_t r11_2;
    int32_t r11_3;
    int32_t r2_4;

    __cxa_end_catch();
    r0_1 = __cxa_end_cleanup();
    __cxa_begin_catch(r0_1);
    _ZSt8_DestroyIPiEvT_S1_(*reinterpret_cast<struct s0**>(r11_2 - 32), *reinterpret_cast<struct s0**>(r11_3 - 16));
    __cxa_rethrow(*reinterpret_cast<struct s0**>(r11_2 - 32), *reinterpret_cast<struct s0**>(r11_3 - 16), r2_4);
}

/* $d */
int64_t* d(int64_t* r0) {
    int1_t z2;
    int64_t v3;
    int1_t z4;

    if (z2) {
        *r0 = v3;
        r0 = reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(r0) - reinterpret_cast<int32_t>(r0));
    }
    if (z4) {
    }
    return r0;
}

void _fini() {
    return;
}

/* $d */
void d(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

int32_t main() {
    return 0;
}

void fun_8fb8() {
    int32_t r0_1;
    int32_t r11_2;
    struct s0* r1_3;
    struct s0* r2_4;
    struct s0* r0_5;
    int32_t r11_6;
    int32_t r11_7;
    int32_t r11_8;
    int32_t r11_9;
    int32_t r11_10;
    struct s0* r0_11;

    __cxa_end_catch();
    r0_1 = __cxa_end_cleanup();
    __cxa_begin_catch(r0_1);
    r0_5 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(*reinterpret_cast<struct s0**>(r11_2 - 56), r1_3, r2_4);
    _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(*reinterpret_cast<struct s0**>(r11_6 - 44), *reinterpret_cast<struct s0**>(r11_7 - 24), r0_5);
    r0_11 = _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPij(*reinterpret_cast<struct s0**>(r11_8 - 56), *reinterpret_cast<struct s0**>(r11_9 - 44), *reinterpret_cast<int32_t*>(r11_10 - 40));
    __cxa_rethrow(r0_11, *reinterpret_cast<struct s0**>(r11_9 - 44), *reinterpret_cast<int32_t*>(r11_10 - 40));
}

/* $d */
int32_t d = 0x82f0;

int32_t ga118 = 0x82e4;

void __libc_csu_init(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int32_t r6_5;
    int32_t r5_6;
    int32_t r7_7;
    int32_t r8_8;
    int32_t r9_9;
    int32_t r9_10;
    int32_t r5_11;
    int1_t z12;
    int32_t r4_13;

    r6_5 = r0;
    r5_6 = d;
    r7_7 = r1;
    r8_8 = r2;
    r9_9 = ga118;
    _init();
    r9_10 = 0xa0e4 + r9_9;
    r5_11 = 0xa0dc + r5_6 - r9_10 >> 2;
    if (z12) {
        return;
    } else {
        r4_13 = 0;
        while (++r4_13, *reinterpret_cast<int32_t*>(r9_10 + r4_13 << 2)(r6_5, r7_7, r8_8), r4_13 != r5_11) {
        }
        return;
    }
}

int32_t __gxx_personality_v0 = 0x85bc;

void __gxx_personality_v0() {
    int32_t pc1;

    pc1 = __gxx_personality_v0;
    goto pc1;
}

/* $d */
uint32_t d = 0xa11c;

int32_t g86a0 = 0x87fc;

void _start(int32_t r0) {
    uint32_t r12_2;
    int32_t r0_3;
    int16_t* r0_4;
    int1_t z5;
    uint32_t r10_6;
    uint32_t v7;
    int1_t z8;
    int16_t v9;
    int1_t z10;

    r12_2 = d;
    r0_3 = g86a0;
    __libc_start_main(r0_3);
    r0_4 = abort();
    if (z5) {
        r10_6 = reinterpret_cast<uint32_t>(r0_4) & r12_2 << v7;
    }
    if (z8) {
        *r0_4 = v9;
        r0_4 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0_4) - r12_2);
    }
    if (!z10) 
        goto "???";
    *r0_4 = static_cast<int16_t>(r10_6);
}
