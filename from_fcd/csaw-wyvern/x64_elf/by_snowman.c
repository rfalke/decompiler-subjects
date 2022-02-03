
int64_t __gmon_start__ = 0;

void fun_400eb0();

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_400eb0();
    }
    return;
}

int64_t __gmon_start__ = 0x400eb6;

void fun_400eb0() {
    goto __gmon_start__;
}

int64_t deregister_tm_clones() {
    int64_t rax1;

    rax1 = 7;
    if (!0 || (*reinterpret_cast<int32_t*>(&rax1) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0, 1)) {
        return rax1;
    } else {
        goto 0;
    }
}

int32_t x23 = 0;

int32_t y24 = 0;

int64_t fun_401030(int64_t rdi);

void fun_400fb0(int64_t rdi);

void __clang_call_terminate(int64_t rdi) {
    int32_t eax2;
    int32_t ecx3;
    int64_t v4;
    int32_t ecx5;
    int32_t edx6;

    eax2 = x23;
    ecx3 = y24;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (1) {
            fun_401030(v4);
            fun_400fb0(v4);
            ecx5 = x23;
            edx6 = y24;
            if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx6 < 10))) & 1)) {
            }
            addr_406396_4:
            fun_401030(v4);
            fun_400fb0(v4);
        }
    } else {
        goto addr_406396_4;
    }
}

struct s0 {
    uint32_t* f0;
    uint32_t* f8;
    uint32_t* f10;
};

int32_t x45 = 0;

int32_t y46 = 0;

/* std::allocator<int>::~allocator() */
void* _ZNSaIiED2Ev(struct s0* rdi);

/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl() */
void* _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    void* rax5;
    int32_t edx6;
    int32_t esi7;

    eax2 = x45;
    ecx3 = y46;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNSaIiED2Ev(v4), edx6 = x45, esi7 = y46, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_407458_4:
            _ZNSaIiED2Ev(v4);
        }
        return rax5;
    } else {
        goto addr_407458_4;
    }
}

/* std::ios_base::Init::Init() */
int64_t _ZNSt8ios_base4InitC1Ev = 0x400f06;

void fun_400f00(int64_t rdi, uint32_t* rsi, int64_t rdx) {
    goto _ZNSt8ios_base4InitC1Ev;
}

int64_t __cxa_atexit = 0x400f36;

int32_t fun_400f30(int64_t rdi, uint32_t* rsi, int64_t rdx) {
    goto __cxa_atexit;
}

int32_t x7 = 0;

int32_t y8 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_Vector_base() */
void _ZNSt12_Vector_baseIiSaIiEEC2Ev(struct s0* rdi);

/* std::vector<int, std::allocator<int> >::vector() */
void _ZNSt6vectorIiSaIiEEC2Ev(struct s0* rdi, uint32_t* rsi, ...) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    int32_t edx6;
    int32_t esi7;

    eax3 = x7;
    ecx4 = y8;
    v5 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (_ZNSt12_Vector_baseIiSaIiEEC2Ev(v5), edx6 = x7, esi7 = y8, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_405018_4:
            _ZNSt12_Vector_baseIiSaIiEEC2Ev(v5);
        }
        return;
    } else {
        goto addr_405018_4;
    }
}

int32_t x = 0;

int32_t y = 0;

/* std::ios_base::Init::~Init() */
void _ZNSt8ios_base4InitD1Ev();

int32_t __cxx_global_var_init() {
    int32_t eax1;
    int32_t ecx2;
    int64_t rdx3;
    uint32_t* rsi4;
    int32_t eax5;
    int32_t ecx6;
    int32_t r8d7;

    eax1 = x;
    ecx2 = y;
    *reinterpret_cast<int32_t*>(&rdx3) = eax1 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rsi4) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax1 * *reinterpret_cast<int32_t*>(&rdx3)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx2 < 10)));
    if (*reinterpret_cast<unsigned char*>(&rsi4) & 1) {
        while (fun_400f00(0x610310, rsi4, rdx3), rsi4 = reinterpret_cast<uint32_t*>(0x610310), rdx3 = 0x610130, eax5 = fun_400f30(_ZNSt8ios_base4InitD1Ev, 0x610310, 0x610130), ecx6 = x, r8d7 = y, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx6 * (ecx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d7 < 10))) & 1)) {
            addr_401160_4:
            fun_400f00(0x610310, rsi4, rdx3);
            rsi4 = reinterpret_cast<uint32_t*>(0x610310);
            rdx3 = 0x610130;
            fun_400f30(_ZNSt8ios_base4InitD1Ev, 0x610310, 0x610130);
        }
        return eax5;
    } else {
        goto addr_401160_4;
    }
}

int32_t x5 = 0;

int32_t y6 = 0;

/* std::vector<int, std::allocator<int> >::~vector() */
void _ZNSt6vectorIiSaIiEED2Ev(struct s0* rdi, ...);

int32_t __cxx_global_var_init1() {
    int32_t eax1;
    int32_t ecx2;
    uint32_t* rsi3;
    int32_t eax4;
    int32_t ecx5;
    int32_t r8d6;

    eax1 = x5;
    ecx2 = y6;
    *reinterpret_cast<unsigned char*>(&rsi3) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax1 * (eax1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx2 < 10)));
    if (*reinterpret_cast<unsigned char*>(&rsi3) & 1) {
        while (_ZNSt6vectorIiSaIiEEC2Ev(0x6102f8, rsi3, 0x6102f8, rsi3), rsi3 = reinterpret_cast<uint32_t*>(0x6102f8), eax4 = fun_400f30(_ZNSt6vectorIiSaIiEED2Ev, 0x6102f8, 0x610130), ecx5 = x5, r8d6 = y6, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d6 < 10))) & 1)) {
            addr_401273_4:
            _ZNSt6vectorIiSaIiEEC2Ev(0x6102f8, rsi3, 0x6102f8, rsi3);
            rsi3 = reinterpret_cast<uint32_t*>(0x6102f8);
            fun_400f30(_ZNSt6vectorIiSaIiEED2Ev, 0x6102f8, 0x610130);
        }
        return eax4;
    } else {
        goto addr_401273_4;
    }
}

int32_t x13 = 0;

int32_t y14 = 0;

/* std::vector<int, std::allocator<int> >::size() const */
uint64_t _ZNKSt6vectorIiSaIiEE4sizeEv(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t esi5;
    int32_t edi6;
    uint64_t v7;

    eax2 = x13;
    ecx3 = y14;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (esi5 = x13, edi6 = y14, v7 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v4->f8) - reinterpret_cast<uint64_t>(v4->f0)) >> 2), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi5 * (esi5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi6 < 10))) & 1)) {
            addr_405626_4:
        }
        return v7;
    } else {
        goto addr_405626_4;
    }
}

int32_t x15 = 0;

int32_t y16 = 0;

/* std::vector<int, std::allocator<int> >::operator[](unsigned long) */
uint32_t* _ZNSt6vectorIiSaIiEEixEm(struct s0* rdi, uint64_t rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    uint64_t v6;
    int32_t edi7;
    int32_t r8d8;
    uint32_t* v9;

    eax3 = x15;
    ecx4 = y16;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (edi7 = x15, r8d8 = y16, v9 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(v5->f0) + (v6 << 2)), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi7 * (edi7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d8 < 10))) & 1)) {
            addr_40571c_4:
        }
        return v9;
    } else {
        goto addr_40571c_4;
    }
}

/* std::string::operator[](unsigned long) */
int64_t _ZNSsixEm = 0x400fc6;

int64_t fun_400fc0(uint32_t* rdi, int64_t rsi) {
    goto _ZNSsixEm;
}

int32_t x19 = 0;

int32_t y20 = 0;

/* void __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(std::allocator<int>&, int*, int const&) */
void _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(struct s0* rdi, uint32_t* rsi, uint32_t* rdx);

/* std::vector<int, std::allocator<int> >::end() */
struct s0* _ZNSt6vectorIiSaIiEE3endEv(struct s0* rdi, struct s0* rsi, uint32_t* rdx);

/* std::vector<int, std::allocator<int> >::_M_insert_aux(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */
void _ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi(struct s0* rdi, struct s0* rsi, uint32_t* rdx);

/* std::vector<int, std::allocator<int> >::push_back(int const&) */
void _ZNSt6vectorIiSaIiEE9push_backERKi(struct s0* rdi, uint32_t* rsi, ...) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    uint32_t* v6;
    struct s0* rsi7;
    uint32_t* v8;
    unsigned char r9b9;
    int32_t r10d10;
    int32_t r11d11;
    struct s0* v12;
    int32_t eax13;
    int32_t ecx14;
    uint32_t* rsi15;
    int32_t r8d16;
    int32_t r9d17;
    uint32_t* rsi18;
    int32_t eax19;
    int32_t ecx20;
    int32_t eax21;
    int32_t ecx22;
    int32_t eax23;
    int32_t ecx24;
    uint32_t* rdx25;
    struct s0* rax26;
    int32_t ecx27;
    int32_t r8d28;
    struct s0* rax29;

    eax3 = x19;
    ecx4 = y20;
    v5 = rdi;
    v6 = rsi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1)) {
        goto addr_405a57_3;
    }
    while (rsi7 = v5, v8 = v6, r9b9 = reinterpret_cast<uint1_t>(rsi7->f8 != rsi7->f10), r10d10 = x19, r11d11 = y20, v12 = rsi7, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r10d10 * (r10d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d11 < 10))) & 1)) {
        addr_405a57_3:
    }
    if (!(r9b9 & 1)) 
        goto addr_40584a_7;
    eax13 = x19;
    ecx14 = y20;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1) {
        while (rsi15 = v12->f8, _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(v12, rsi15, v8), v12->f8 = v12->f8 + 1, r8d16 = x19, r9d17 = y20, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d16 * (r8d16 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d17 < 10))) & 1)) {
            addr_405a7e_11:
            rsi18 = v12->f8;
            _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(v12, rsi18, v8);
            v12->f8 = v12->f8 + 1;
        }
    } else {
        goto addr_405a7e_11;
    }
    addr_4059c6_14:
    eax19 = x19;
    ecx20 = y20;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax19 * (eax19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx20 < 10))) & 1) {
        while (eax21 = x19, ecx22 = y20, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax21 * (eax21 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx22 < 10))) & 1)) {
            addr_405ad9_17:
        }
        return;
    } else {
        goto addr_405ad9_17;
    }
    addr_40584a_7:
    eax23 = x19;
    ecx24 = y20;
    *reinterpret_cast<int32_t*>(&rdx25) = eax23 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rsi7) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax23 * *reinterpret_cast<int32_t*>(&rdx25)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx24 < 10)));
    if (!(*reinterpret_cast<unsigned char*>(&rsi7) & 1)) 
        goto addr_40594f_21;
    while (rax26 = _ZNSt6vectorIiSaIiEE3endEv(v12, rsi7, rdx25), rdx25 = v8, rsi7 = rax26, _ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi(v12, rsi7, rdx25), ecx27 = x19, r8d28 = y20, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx27 * (ecx27 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d28 < 10))) & 1)) {
        addr_405ab1_24:
        rax29 = _ZNSt6vectorIiSaIiEE3endEv(v12, rsi7, rdx25);
        rdx25 = v8;
        rsi7 = rax29;
        _ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi(v12, rsi7, rdx25);
    }
    goto addr_4059c6_14;
    addr_40594f_21:
    goto addr_405ab1_24;
}

/* std::string::length() const */
int64_t _ZNKSs6lengthEv = 0x400f56;

uint64_t fun_400f50(uint32_t* rdi, uint32_t* rsi, ...) {
    goto _ZNKSs6lengthEv;
}

int32_t x21 = 0;

int32_t y22 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */
struct s0* _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* rdi);

/* __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(std::allocator<int> const&) */
struct s0* _ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_(struct s0* rdi);

/* std::_Vector_base<int, std::allocator<int> >::_Vector_base(unsigned long, std::allocator<int> const&) */
void _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_(struct s0* rdi, uint64_t rsi, struct s0* rdx);

/* std::vector<int, std::allocator<int> >::begin() const */
int64_t _ZNKSt6vectorIiSaIiEE5beginEv(struct s0* rdi, uint64_t rsi, struct s0* rdx);

/* std::vector<int, std::allocator<int> >::end() const */
int64_t _ZNKSt6vectorIiSaIiEE3endEv(struct s0* rdi);

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() */
struct s0* _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* rdi);

/* int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, std::allocator<int>&) */
uint32_t* _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E(int64_t rdi, int64_t rsi, uint32_t* rdx, struct s0* rcx);

/* std::vector<int, std::allocator<int> >::vector(std::vector<int, std::allocator<int> > const&) */
void _ZNSt6vectorIiSaIiEEC2ERKS1_(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    struct s0* v6;
    struct s0* v7;
    struct s0* v8;
    uint64_t rax9;
    struct s0* rax10;
    struct s0* rax11;
    int32_t r14d12;
    int32_t r15d13;
    uint64_t rax14;
    struct s0* rax15;
    struct s0* rax16;
    int64_t rax17;
    int64_t v18;
    int32_t eax19;
    int32_t ecx20;
    int64_t v21;
    int32_t esi22;
    int32_t r8d23;
    int64_t rax24;
    int64_t v25;
    int32_t eax26;
    int32_t ecx27;
    int64_t v28;
    int32_t edi29;
    int32_t r8d30;
    uint32_t* v31;
    struct s0* rax32;
    struct s0* v33;
    int32_t eax34;
    int32_t ecx35;
    int32_t edx36;
    int32_t r8d37;
    uint32_t* rax38;
    uint32_t* v39;
    int32_t eax40;
    int32_t ecx41;
    int32_t edx42;
    int32_t esi43;

    eax3 = x21;
    ecx4 = y22;
    v5 = rdi;
    v6 = rsi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1)) {
        goto addr_4061f5_3;
    }
    while (v7 = v6, v8 = v5, rax9 = _ZNKSt6vectorIiSaIiEE4sizeEv(v7), rax10 = _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v7), rax11 = _ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_(rax10), _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_(v5, rax9, rax11), r14d12 = x21, r15d13 = y22, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r14d12 * (r14d12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r15d13 < 10))) & 1)) {
        addr_4061f5_3:
        rax14 = _ZNKSt6vectorIiSaIiEE4sizeEv(v6);
        rax15 = _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v6);
        rax16 = _ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_(rax15);
        _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_(v5, rax14, rax16);
    }
    rax17 = _ZNKSt6vectorIiSaIiEE5beginEv(v7, rax9, rax11);
    v18 = rax17;
    eax19 = x21;
    ecx20 = y22;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax19 * (eax19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx20 < 10))) & 1)) 
        goto addr_405c8b_8;
    while (v21 = v18, esi22 = x21, r8d23 = y22, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi22 * (esi22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d23 < 10))) & 1)) {
        addr_40626c_11:
    }
    rax24 = _ZNKSt6vectorIiSaIiEE3endEv(v7);
    v25 = rax24;
    eax26 = x21;
    ecx27 = y22;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax26 * (eax26 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx27 < 10))) & 1)) 
        goto addr_405d4c_14;
    while (v28 = v25, edi29 = x21, r8d30 = y22, v31 = v8->f0, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi29 * (edi29 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d30 < 10))) & 1)) {
        addr_40627f_17:
    }
    rax32 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v8);
    v33 = rax32;
    eax34 = x21;
    ecx35 = y22;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax34 * (eax34 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx35 < 10))) & 1)) 
        goto addr_405e18_20;
    while (edx36 = x21, r8d37 = y22, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx36 * (edx36 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d37 < 10))) & 1)) {
        addr_406292_23:
    }
    rax38 = _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E(v21, v28, v31, v33);
    v39 = rax38;
    eax40 = x21;
    ecx41 = y22;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax40 * (eax40 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx41 < 10))) & 1)) 
        goto addr_405eee_26;
    while (v8->f8 = v39, edx42 = x21, esi43 = y22, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx42 * (edx42 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi43 < 10))) & 1)) {
        addr_406297_29:
        v8->f8 = v39;
    }
    return;
    addr_405eee_26:
    goto addr_406297_29;
    addr_405e18_20:
    goto addr_406292_23;
    addr_405d4c_14:
    goto addr_40627f_17;
    addr_405c8b_8:
    goto addr_40626c_11;
}

int32_t x1 = 0;

int32_t y2 = 0;

int32_t x11 = 0;

int32_t y12 = 0;

/* transform_input(std::vector<int, std::allocator<int> >) */
uint32_t _Z15transform_inputSt6vectorIiSaIiEE(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t eax5;
    int32_t ecx6;
    int32_t eax7;
    int32_t ecx8;
    uint32_t v9;
    int32_t v10;
    int32_t edx11;
    int32_t esi12;
    int32_t eax13;
    int32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    int32_t eax17;
    int32_t ecx18;
    int32_t ecx19;
    int32_t edx20;
    uint32_t v21;
    int32_t eax22;
    int32_t ecx23;
    int32_t eax24;
    int32_t ecx25;
    int32_t ecx26;
    int32_t edx27;
    int32_t eax28;
    int32_t ecx29;
    uint32_t* rax30;
    int32_t ecx31;
    int32_t edx32;
    int32_t ecx33;
    int32_t edx34;
    int32_t eax35;
    int32_t ecx36;
    int32_t eax37;
    int32_t ecx38;
    int32_t ecx39;
    int32_t edx40;
    int32_t ecx41;
    int32_t edx42;
    int32_t eax43;
    int32_t ecx44;
    uint32_t* rax45;
    uint32_t* rax46;
    uint64_t rax47;
    int32_t eax48;
    int32_t ecx49;
    int32_t eax50;
    int32_t ecx51;
    int32_t esi52;
    int32_t r8d53;
    int32_t esi54;
    int32_t r8d55;
    int32_t eax56;
    int32_t ecx57;

    eax2 = x1;
    ecx3 = y2;
    v4 = rdi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1)) {
        goto addr_401c52_3;
    }
    while (eax5 = x11, ecx6 = y12, eax7 = x1, ecx8 = y2, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax7 * (eax7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx8 < 10))) & 1)) {
        addr_401c52_3:
    }
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx6 < 10))) & 1)) 
        goto addr_401586_7;
    while (v9 = 0, v10 = 0, edx11 = x11, esi12 = y12, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx11 * (edx11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi12 < 10))) & 1)) {
        addr_401b5a_10:
    }
    goto addr_4015fd_12;
    addr_401586_7:
    goto addr_401b5a_10;
    addr_401747_13:
    eax13 = x1;
    ecx14 = y2;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) {
        goto addr_401c9d_16;
    }
    while (eax15 = x11, ecx16 = y12, eax17 = x1, ecx18 = y2, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax17 * (eax17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx18 < 10))) & 1)) {
        addr_401c9d_16:
    }
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax15 * (eax15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx16 < 10))) & 1)) 
        goto addr_401a77_20;
    while (ecx19 = x11, edx20 = y12, v21 = v9, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx19 * (ecx19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx20 < 10))) & 1)) {
        addr_401c4d_23:
    }
    eax22 = x1;
    ecx23 = y2;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax22 * (eax22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx23 < 10))) & 1)) 
        goto addr_401b08_25;
    while (eax24 = x1, ecx25 = y2, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax24 * (eax24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx25 < 10))) & 1)) {
        addr_401ca2_28:
    }
    return v21;
    addr_401b08_25:
    goto addr_401ca2_28;
    addr_401a77_20:
    goto addr_401c4d_23;
    while (1) {
        ++v10;
        ecx26 = x1;
        edx27 = y2;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx26 * (ecx26 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx27 < 10))) & 1) {
            goto addr_4018c9_32;
        }
        addr_401ca7_34:
        ++v10;
        continue;
        addr_4018c4_35:
        addr_401bb2_36:
        eax28 = x1;
        ecx29 = y2;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax28 * (eax28 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx29 < 10))) & 1) 
            continue;
        goto addr_401ca7_34;
        addr_4019a4_38:
        goto addr_401bb2_36;
        while (1) {
            rax30 = _ZNSt6vectorIiSaIiEEixEm(v4, static_cast<int64_t>(v10));
            v9 = *rax30 + v9;
            ecx31 = x11;
            edx32 = y12;
            ecx33 = x1;
            edx34 = y2;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx33 * (ecx33 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx34 < 10))) & 1) {
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx31 * (ecx31 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx32 < 10))) & 1) {
                    eax35 = x11;
                    ecx36 = y12;
                    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax35 * (eax35 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx36 < 10))) & 1)) 
                        goto addr_4018c4_35;
                    addr_4018c9_32:
                    eax37 = x1;
                    ecx38 = y2;
                    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax37 * (eax37 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx38 < 10))) & 1)) 
                        goto addr_401907_43;
                } else {
                    goto addr_401b91_45;
                }
            } else {
                goto addr_401c69_47;
            }
            while (++v10, ecx39 = x11, edx40 = y12, ecx41 = x1, edx42 = y2, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx41 * (ecx41 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx42 < 10))) & 1)) {
                addr_401c8a_50:
                ++v10;
            }
            if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx39 * (ecx39 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx40 < 10))) & 1)) 
                goto addr_4019a4_38;
            addr_4015fd_12:
            eax43 = x11;
            ecx44 = y12;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax43 * (eax43 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx44 < 10))) & 1) 
                goto addr_401640_53;
            goto addr_401b7f_55;
            addr_401907_43:
            goto addr_401c8a_50;
            addr_401b91_45:
            rax45 = _ZNSt6vectorIiSaIiEEixEm(v4, static_cast<int64_t>(v10));
            v9 = v9 + *rax45;
            goto addr_40178f_56;
            addr_401c69_47:
            rax46 = _ZNSt6vectorIiSaIiEEixEm(v4, static_cast<int64_t>(v10));
            v9 = v9 + *rax46;
            continue;
            addr_40173c_57:
            if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(static_cast<int64_t>(v10)) < rax47)) & 1)) 
                goto addr_401747_13;
            eax48 = x11;
            ecx49 = y12;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax48 * (eax48 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx49 < 10))) & 1) {
                addr_40178f_56:
                eax50 = x1;
                ecx51 = y2;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax50 * (eax50 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx51 < 10))) & 1) 
                    continue;
            } else {
                goto addr_401b91_45;
            }
            goto addr_401c69_47;
            while (1) {
                rax47 = _ZNKSt6vectorIiSaIiEE4sizeEv(v4);
                esi52 = x11;
                r8d53 = y12;
                esi54 = x1;
                r8d55 = y2;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi54 * (esi54 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d55 < 10))) & 1) {
                    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi52 * (esi52 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d53 < 10))) & 1) 
                        goto addr_40173c_57;
                    addr_401b7f_55:
                    _ZNKSt6vectorIiSaIiEE4sizeEv(v4);
                    addr_401640_53:
                    eax56 = x1;
                    ecx57 = y2;
                    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax56 * (eax56 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx57 < 10))) & 1) 
                        continue;
                }
                _ZNKSt6vectorIiSaIiEE4sizeEv(v4);
            }
        }
    }
}

int32_t x9 = 0;

int32_t y10 = 0;

/* void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&) */
uint32_t* _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(uint32_t* rdi, uint32_t* rsi, struct s0* rdx);

/* std::_Vector_base<int, std::allocator<int> >::~_Vector_base() */
void _ZNSt12_Vector_baseIiSaIiEED2Ev(struct s0* rdi);

/* std::vector<int, std::allocator<int> >::~vector() */
void _ZNSt6vectorIiSaIiEED2Ev(struct s0* rdi, ...) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    uint32_t* rdi5;
    int32_t r9d6;
    int32_t r10d7;
    uint32_t* v8;
    struct s0* v9;
    uint32_t* v10;
    struct s0* rax11;
    struct s0* v12;
    int32_t eax13;
    int32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    int32_t eax17;
    int32_t ecx18;
    int32_t ecx19;
    int32_t edx20;

    eax2 = x9;
    ecx3 = y10;
    v4 = rdi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1)) {
        goto addr_4054fc_3;
    }
    while (rdi5 = v4->f0, r9d6 = x9, r10d7 = y10, v8 = v4->f8, v9 = v4, v10 = rdi5, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d6 * (r9d6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d7 < 10))) & 1)) {
        addr_4054fc_3:
    }
    rax11 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v4);
    v12 = rax11;
    eax13 = x9;
    ecx14 = y10;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) 
        goto addr_40517a_8;
    while (eax15 = x9, ecx16 = y10, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax15 * (eax15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx16 < 10))) & 1)) {
        addr_405512_11:
    }
    _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(v10, v8, v12);
    eax17 = x9;
    ecx18 = y10;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax17 * (eax17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx18 < 10))) & 1)) 
        goto addr_405216_14;
    while (_ZNSt12_Vector_baseIiSaIiEED2Ev(v9), ecx19 = x9, edx20 = y10, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx19 * (ecx19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx20 < 10))) & 1)) {
        addr_405517_17:
        _ZNSt12_Vector_baseIiSaIiEED2Ev(v9);
    }
    return;
    addr_405216_14:
    goto addr_405517_17;
    addr_40517a_8:
    goto addr_405512_11;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*) */
int64_t _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc = 0x400f76;

int64_t fun_400f70(int64_t rdi, int64_t rsi, ...) {
    goto _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;
}

int64_t _Unwind_Resume = 0x401076;

int64_t fun_401070(int64_t rdi) {
    goto _Unwind_Resume;
}

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::string const&) */
int64_t _ZNSsC1ERKSs = 0x400f26;

void fun_400f20(uint32_t* rdi, uint32_t* rsi, ...) {
    goto _ZNSsC1ERKSs;
}

int32_t x3 = 0;

int32_t y4 = 0;

int32_t x17 = 0;

int32_t y18 = 0;

int32_t legend = 0x73;

/* sanitize_input(std::string) */
uint32_t _Z14sanitize_inputSs(uint32_t* rdi, uint32_t* rsi) {
    void* rsp3;
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    int32_t eax7;
    int32_t ecx8;
    int32_t eax9;
    int32_t ecx10;
    struct s0* rcx11;
    struct s0* r10_12;
    struct s0* v13;
    uint32_t* v14;
    struct s0* v15;
    uint32_t v16;
    int32_t ebx17;
    int32_t r14d18;
    struct s0* rax19;
    int32_t eax20;
    int32_t ecx21;
    int32_t eax22;
    int32_t ecx23;
    int32_t eax24;
    int32_t ecx25;
    int32_t eax26;
    int32_t ecx27;
    int32_t eax28;
    int32_t ecx29;
    uint32_t v30;
    int32_t edx31;
    int32_t esi32;
    int32_t eax33;
    int32_t ecx34;
    int32_t ecx35;
    int32_t edx36;
    uint32_t v37;
    int32_t eax38;
    int32_t ecx39;
    int32_t eax40;
    int32_t ecx41;
    int32_t ecx42;
    int32_t edx43;
    int32_t eax44;
    int32_t ecx45;
    int32_t edx46;
    int32_t ecx47;
    int32_t edx48;
    int32_t eax49;
    int32_t ecx50;
    int32_t eax51;
    int32_t ecx52;
    int32_t eax53;
    int32_t ecx54;
    uint32_t* rsi55;
    uint64_t rax56;
    uint64_t v57;
    int32_t eax58;
    int32_t ecx59;
    int32_t eax60;
    int32_t ecx61;
    int32_t eax62;
    int32_t ecx63;
    uint64_t rcx64;
    uint32_t* v65;
    uint32_t v66;
    int32_t edx67;
    int32_t edi68;
    int32_t eax69;
    int32_t ecx70;
    int32_t eax71;
    int32_t ecx72;
    int32_t eax73;
    int32_t ecx74;
    int32_t ecx75;
    int32_t edx76;
    uint32_t* rax77;
    uint32_t* v78;
    int32_t eax79;
    int32_t ecx80;
    int32_t eax81;
    int32_t ecx82;
    int32_t eax83;
    int32_t ecx84;
    int32_t edx85;
    int32_t esi86;
    uint32_t v87;
    int32_t eax88;
    int32_t ecx89;
    int32_t eax90;
    int32_t ecx91;
    int32_t eax92;
    int32_t ecx93;
    int32_t eax94;
    int32_t ecx95;
    int32_t eax96;
    int32_t ecx97;
    int32_t eax98;
    int32_t ecx99;
    uint32_t eax100;
    uint32_t v101;
    int32_t eax102;
    int32_t ecx103;
    int32_t eax104;
    int32_t ecx105;
    int32_t eax106;
    int32_t ecx107;
    int32_t edx108;
    int32_t esi109;
    int32_t edx110;
    int32_t esi111;
    unsigned char v112;
    int32_t eax113;
    int32_t ecx114;
    int32_t eax115;
    int32_t ecx116;
    int32_t eax117;
    int32_t ecx118;
    int32_t eax119;
    int32_t ecx120;
    int32_t eax121;
    int32_t ecx122;
    int32_t eax123;
    int32_t ecx124;
    int32_t eax125;
    int32_t ecx126;
    int32_t eax127;
    int32_t ecx128;
    int32_t eax129;
    int32_t ecx130;
    int32_t eax131;
    int32_t ecx132;
    int32_t eax133;
    int32_t ecx134;
    int32_t eax135;
    int32_t ecx136;
    int32_t eax137;
    int32_t ecx138;
    int32_t eax139;
    int32_t ecx140;
    int32_t esi141;
    int32_t edi142;
    unsigned char v143;
    int32_t eax144;
    int32_t ecx145;
    int32_t eax146;
    int32_t ecx147;
    int32_t eax148;
    int32_t ecx149;
    int32_t eax150;
    int32_t ecx151;
    int32_t eax152;
    int32_t ecx153;
    int32_t eax154;
    int32_t ecx155;
    int32_t eax156;
    int32_t ecx157;
    int32_t eax158;
    int32_t ecx159;
    int32_t edi160;
    int32_t r8d161;
    uint32_t v162;
    uint32_t* rax163;
    uint32_t* v164;
    int32_t eax165;
    int32_t ecx166;
    int32_t eax167;
    int32_t edi168;
    int32_t ecx169;
    int32_t edi170;
    int32_t ecx171;
    int32_t edi172;
    int32_t eax173;
    int32_t ecx174;
    int32_t ecx175;
    int32_t esi176;
    int32_t ecx177;
    int32_t esi178;
    int32_t eax179;
    int32_t ecx180;
    int32_t eax181;
    int32_t ecx182;
    int32_t eax183;
    int32_t ecx184;
    int32_t eax185;
    int32_t ecx186;
    int32_t eax187;
    int32_t ecx188;
    int32_t eax189;
    int32_t ecx190;
    int32_t ecx191;
    int32_t edx192;
    int32_t ecx193;
    int32_t edx194;
    int64_t v195;
    int32_t eax196;
    int32_t ecx197;
    int32_t eax198;
    int32_t ecx199;
    int32_t eax200;
    int32_t ecx201;
    int32_t eax202;
    int32_t ecx203;
    int32_t eax204;
    int32_t ecx205;
    int32_t eax206;
    int32_t ecx207;
    int32_t eax208;
    int32_t ecx209;
    int32_t ecx210;
    int32_t edi211;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x158);
    eax4 = x3;
    ecx5 = y4;
    v6 = rdi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_404255_3;
    }
    while (eax7 = x17, ecx8 = y18, *reinterpret_cast<unsigned char*>(&rsi) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax7 * (eax7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx8 < 10))), eax9 = x3, ecx10 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1)) {
        addr_404255_3:
    }
    if (!(*reinterpret_cast<unsigned char*>(&rsi) & 1)) 
        goto addr_401da1_7;
    while (rcx11 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp3) + 0xfffffffffffffff0 + 0xffffffffffffffe0), rsi = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rcx11) + 0xfffffffffffffff0 + 0xfffffffffffffff0), r10_12 = reinterpret_cast<struct s0*>(rsi + 0xfffffffffffffffc + 0xfffffffffffffffc + 0xfffffffffffffffc + 0xfffffffffffffff8), v13 = rcx11, v14 = rsi, v15 = r10_12, _ZNSt6vectorIiSaIiEEC2Ev(rcx11, rsi), rsp3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r10_12) + 0xfffffffffffffff0 - 8 + 8), v16 = 0, ebx17 = x17, r14d18 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ebx17 * (ebx17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r14d18 < 10))) & 1)) {
        addr_403d84_10:
        rax19 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp3) + 0xfffffffffffffff0 + 0xffffffffffffffe0);
        _ZNSt6vectorIiSaIiEEC2Ev(rax19, rsi);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax19) + 0xfffffffffffffff0 - 8 + 8);
    }
    goto addr_401e85_12;
    addr_401da1_7:
    goto addr_403d84_10;
    addr_403998_13:
    goto addr_4042cf_14;
    addr_403438_15:
    goto addr_4040b9_16;
    addr_401f38_17:
    eax20 = x3;
    ecx21 = y4;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax20 * (eax20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx21 < 10))) & 1)) {
        goto addr_4042ca_20;
    }
    while (eax22 = x17, ecx23 = y18, eax24 = x3, ecx25 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax24 * (eax24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx25 < 10))) & 1)) {
        addr_4042ca_20:
    }
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax22 * (eax22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx23 < 10))) & 1)) 
        goto addr_4037b5_24;
    while (eax26 = x17, ecx27 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax26 * (eax26 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx27 < 10))) & 1)) {
        addr_4040f5_27:
    }
    fun_400f70(0x6101e0, "success\n", 0x6101e0, "success\n");
    eax28 = x17;
    ecx29 = y18;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax28 * (eax28 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx29 < 10))) & 1)) 
        goto addr_40385a_30;
    while (v30 = 0x1337, edx31 = x17, esi32 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx31 * (edx31 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi32 < 10))) & 1)) {
        addr_4040fa_33:
    }
    addr_4038bd_35:
    eax33 = x17;
    ecx34 = y18;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax33 * (eax33 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx34 < 10))) & 1)) {
        goto addr_404113_37;
    }
    while (_ZNSt6vectorIiSaIiEED2Ev(v13, v13), ecx35 = x17, edx36 = y18, v37 = v30, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx35 * (ecx35 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx36 < 10))) & 1)) {
        addr_404113_37:
        _ZNSt6vectorIiSaIiEED2Ev(v13, v13);
    }
    eax38 = x3;
    ecx39 = y4;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax38 * (eax38 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx39 < 10))) & 1)) 
        goto addr_403998_13;
    while (eax40 = x3, ecx41 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax40 * (eax40 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx41 < 10))) & 1)) {
        addr_4042cf_14:
    }
    return v37;
    addr_40385a_30:
    goto addr_4040fa_33;
    addr_4037b5_24:
    goto addr_4040f5_27;
    while (1) {
        ++v16;
        ecx42 = x17;
        edx43 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx42 * (ecx42 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx43 < 10))) & 1) {
            addr_401e85_12:
            eax44 = x17;
            ecx45 = y18;
            if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax44 * (eax44 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx45 < 10))) & 1)) 
                goto addr_401ec3_46;
        } else {
            goto addr_4040e2_48;
        }
        while (edx46 = legend, ecx47 = x17, edx48 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx47 * (ecx47 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx48 < 10))) & 1)) {
            addr_403dc3_51:
        }
        if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v16) < edx46 >> 2)) & 1)) 
            goto addr_401f38_17;
        eax49 = x3;
        ecx50 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax49 * (eax49 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx50 < 10))) & 1)) 
            goto addr_401f7b_54;
        while (eax51 = x17, ecx52 = y18, eax53 = x3, ecx54 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax53 * (eax53 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx54 < 10))) & 1)) {
            addr_40425a_57:
        }
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax51 * (eax51 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx52 < 10))) & 1) 
            goto addr_402011_59;
        goto addr_403dc8_61;
        addr_401f7b_54:
        goto addr_40425a_57;
        addr_401ec3_46:
        goto addr_403dc3_51;
        addr_4040e2_48:
        ++v16;
        continue;
        addr_402491_62:
        rax56 = fun_400f50(v6, rsi55, v6, rsi55);
        v57 = rax56;
        eax58 = x3;
        ecx59 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax58 * (eax58 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx59 < 10))) & 1)) {
            goto addr_404284_65;
        }
        while (eax60 = x17, ecx61 = y18, eax62 = x3, ecx63 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax62 * (eax62 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx63 < 10))) & 1)) {
            addr_404284_65:
        }
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax60 * (eax60 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx61 < 10))) & 1)) 
            goto addr_402575_69;
        while (rcx64 = reinterpret_cast<uint64_t>(v65) & v57 >> 40 | 28, v66 = *reinterpret_cast<uint32_t*>(&rcx64), edx67 = x17, edi68 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx67 * (edx67 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi68 < 10))) & 1)) {
            addr_403e7b_72:
        }
        eax69 = x3;
        ecx70 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax69 * (eax69 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx70 < 10))) & 1)) 
            goto addr_402635_74;
        while (eax71 = x3, ecx72 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax71 * (eax71 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx72 < 10))) & 1)) {
            addr_404289_77:
        }
        if (!1) 
            goto addr_40268b_79;
        eax73 = x17;
        ecx74 = y18;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax73 * (eax73 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx74 < 10))) & 1)) {
            goto addr_403ea4_82;
        }
        while (ecx75 = x17, edx76 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx75 * (ecx75 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx76 < 10))) & 1)) {
            addr_403ea4_82:
        }
        rax77 = _ZNSt6vectorIiSaIiEEixEm(0x6102f8, static_cast<int64_t>(reinterpret_cast<int32_t>(v16)));
        v78 = rax77;
        eax79 = x3;
        ecx80 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax79 * (eax79 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx80 < 10))) & 1)) 
            goto addr_402783_87;
        while (eax81 = x17, ecx82 = y18, eax83 = x3, ecx84 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax83 * (eax83 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx84 < 10))) & 1)) {
            addr_40428e_90:
        }
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax81 * (eax81 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx82 < 10))) & 1)) 
            goto addr_402814_92;
        while (edx85 = x17, esi86 = y18, v87 = *v78, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx85 * (edx85 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi86 < 10))) & 1)) {
            addr_403ea9_95:
        }
        _ZNSt6vectorIiSaIiEEC2ERKS1_(v15, v13);
        eax88 = x3;
        ecx89 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax88 * (eax88 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx89 < 10))) & 1)) 
            goto addr_4028bd_98;
        while (eax90 = x17, ecx91 = y18, eax92 = x3, ecx93 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax92 * (eax92 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx93 < 10))) & 1)) {
            addr_404293_101:
        }
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax90 * (eax90 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx91 < 10))) & 1)) 
            goto addr_40294e_103;
        while (eax94 = x17, ecx95 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax94 * (eax94 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx95 < 10))) & 1)) {
            addr_403eae_106:
        }
        eax96 = x3;
        ecx97 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax96 * (eax96 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx97 < 10))) & 1)) 
            goto addr_4029d4_108;
        while (eax98 = x3, ecx99 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax98 * (eax98 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx99 < 10))) & 1)) {
            addr_404298_111:
        }
        eax100 = _Z15transform_inputSt6vectorIiSaIiEE(v15);
        v101 = eax100;
        eax102 = x17;
        ecx103 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax102 * (eax102 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx103 < 10))) & 1) 
            goto addr_402a73_114;
        goto addr_403eb3_116;
        addr_4029d4_108:
        goto addr_404298_111;
        addr_40294e_103:
        goto addr_403eae_106;
        addr_4028bd_98:
        goto addr_404293_101;
        addr_402814_92:
        goto addr_403ea9_95;
        addr_402783_87:
        goto addr_40428e_90;
        addr_40268b_79:
        addr_4031a2_117:
        eax104 = x17;
        ecx105 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax104 * (eax104 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx105 < 10))) & 1) 
            goto addr_4031e5_118;
        goto addr_4040b4_120;
        addr_402635_74:
        goto addr_404289_77;
        addr_402575_69:
        goto addr_403e7b_72;
        addr_403117_121:
        eax106 = x17;
        ecx107 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax106 * (eax106 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx107 < 10))) & 1) 
            goto addr_40315a_122;
        goto addr_404029_124;
        addr_40319d_125:
        goto addr_4031a2_117;
        addr_4035fe_126:
        goto addr_4042c5_127;
        addr_403578_128:
        goto addr_4040dd_129;
        addr_4034e7_130:
        goto addr_4042c0_131;
        addr_402d94_132:
        goto addr_403f48_133;
        addr_402c8b_134:
        goto addr_403117_121;
        addr_402c35_135:
        goto addr_403f3e_136;
        addr_402ba4_137:
        goto addr_4042a2_138;
        addr_402307_139:
        goto addr_40426e_140;
        while (1) {
            edx108 = x17;
            esi109 = y18;
            edx110 = x3;
            esi111 = y4;
            v112 = reinterpret_cast<uint1_t>(!!v66);
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx110 * (edx110 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi111 < 10))) & 1) {
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx108 * (edx108 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi109 < 10))) & 1) 
                    break;
                addr_4040b4_120:
                addr_4031e5_118:
                eax113 = x3;
                ecx114 = y4;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax113 * (eax113 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx114 < 10))) & 1) 
                    continue;
            }
        }
        eax115 = x3;
        ecx116 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax115 * (eax115 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx116 < 10))) & 1)) {
            goto addr_4042b6_149;
        }
        while (eax117 = x3, ecx118 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax117 * (eax117 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx118 < 10))) & 1)) {
            addr_4042b6_149:
        }
        if (v112 & 1) 
            break;
        eax119 = x3;
        ecx120 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax119 * (eax119 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx120 < 10))) & 1)) 
            goto addr_4034e7_130;
        while (eax121 = x17, ecx122 = y18, eax123 = x3, ecx124 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax123 * (eax123 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx124 < 10))) & 1)) {
            addr_4042c0_131:
        }
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax121 * (eax121 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx122 < 10))) & 1)) 
            goto addr_403578_128;
        while (eax125 = x17, ecx126 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax125 * (eax125 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx126 < 10))) & 1)) {
            addr_4040dd_129:
        }
        eax127 = x3;
        ecx128 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax127 * (eax127 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx128 < 10))) & 1)) 
            goto addr_4035fe_126;
        while (eax129 = x3, ecx130 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax129 * (eax129 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx130 < 10))) & 1)) {
            addr_4042c5_127:
        }
        eax131 = x17;
        ecx132 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax131 * (eax131 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx132 < 10))) & 1) 
            continue;
        goto addr_4040e2_48;
        while (1) {
            eax133 = x3;
            ecx134 = y4;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax133 * (eax133 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx134 < 10))) & 1) {
                addr_40315a_122:
                eax135 = x17;
                ecx136 = y18;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax135 * (eax135 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx136 < 10))) & 1) 
                    goto addr_40319d_125;
                addr_404029_124:
                eax137 = x3;
                ecx138 = y4;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax137 * (eax137 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx138 < 10))) & 1) 
                    continue;
            }
        }
        while (1) {
            eax139 = x3;
            ecx140 = y4;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax139 * (eax139 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx140 < 10))) & 1) {
                addr_402a73_114:
                esi141 = x17;
                edi142 = y18;
                v143 = reinterpret_cast<uint1_t>(v87 == v101);
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi141 * (esi141 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi142 < 10))) & 1) 
                    break;
                addr_403eb3_116:
                eax144 = x3;
                ecx145 = y4;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax144 * (eax144 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx145 < 10))) & 1) 
                    continue;
            }
        }
        eax146 = x3;
        ecx147 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax146 * (eax146 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx147 < 10))) & 1)) {
            goto addr_40429d_180;
        }
        while (eax148 = x3, ecx149 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax148 * (eax148 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx149 < 10))) & 1)) {
            addr_40429d_180:
        }
        _ZNSt6vectorIiSaIiEED2Ev(v15);
        eax150 = x3;
        ecx151 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax150 * (eax150 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx151 < 10))) & 1)) 
            goto addr_402ba4_137;
        while (eax152 = x17, ecx153 = y18, eax154 = x3, ecx155 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax154 * (eax154 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx155 < 10))) & 1)) {
            addr_4042a2_138:
        }
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax152 * (eax152 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx153 < 10))) & 1)) 
            goto addr_402c35_135;
        while (eax156 = x17, ecx157 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax156 * (eax156 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx157 < 10))) & 1)) {
            addr_403f3e_136:
        }
        if (!(v143 & 1)) 
            goto addr_402c8b_134;
        eax158 = x17;
        ecx159 = y18;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax158 * (eax158 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx159 < 10))) & 1)) {
            goto addr_403f43_193;
        }
        while (edi160 = x17, r8d161 = y18, v162 = v66, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi160 * (edi160 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d161 < 10))) & 1)) {
            addr_403f43_193:
        }
        rax163 = _ZNSt6vectorIiSaIiEEixEm(0x6102f8, static_cast<int64_t>(reinterpret_cast<int32_t>(v16)));
        v164 = rax163;
        eax165 = x17;
        ecx166 = y18;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax165 * (eax165 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx166 < 10))) & 1)) 
            goto addr_402d94_132;
        while (v66 = static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v162 & *v164) < reinterpret_cast<int32_t>(0))) & 1, eax167 = x17, edi168 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax167 * (eax167 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi168 < 10))) & 1)) {
            addr_403f48_133:
        }
        goto addr_403117_121;
        while (1) {
            rsi55 = reinterpret_cast<uint32_t*>(static_cast<int64_t>(reinterpret_cast<int32_t>(v16)));
            ecx169 = x17;
            edi170 = y18;
            ecx171 = x3;
            edi172 = y4;
            v65 = rsi55;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx171 * (ecx171 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi172 < 10))) & 1) {
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx169 * (ecx169 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi170 < 10))) & 1) 
                    goto addr_402491_62;
                addr_403e6a_204:
                addr_40239d_205:
                eax173 = x3;
                ecx174 = y4;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax173 * (eax173 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx174 < 10))) & 1) 
                    continue;
            }
        }
        while (1) {
            ecx175 = x3;
            esi176 = y4;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx175 * (ecx175 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi176 < 10))) & 1) {
                addr_4021dc_211:
                ecx177 = x17;
                esi178 = y18;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx177 * (ecx177 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi178 < 10))) & 1) 
                    break;
                addr_403dcd_213:
                eax179 = x3;
                ecx180 = y4;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax179 * (eax179 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx180 < 10))) & 1) 
                    continue;
            }
        }
        eax181 = x3;
        ecx182 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax181 * (eax181 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx182 < 10))) & 1)) {
            goto addr_404269_219;
        }
        while (eax183 = x3, ecx184 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax183 * (eax183 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx184 < 10))) & 1)) {
            addr_404269_219:
        }
        _ZNSt6vectorIiSaIiEE9push_backERKi(v13, v14, v13, v14);
        eax185 = x3;
        ecx186 = y4;
        if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax185 * (eax185 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx186 < 10))) & 1)) 
            goto addr_402307_139;
        while (eax187 = x17, ecx188 = y18, eax189 = x3, ecx190 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax189 * (eax189 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx190 < 10))) & 1)) {
            addr_40426e_140:
        }
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax187 * (eax187 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx188 < 10))) & 1) 
            goto addr_40239d_205;
        goto addr_403e6a_204;
        while (1) {
            ecx191 = x17;
            edx192 = y18;
            ecx193 = x3;
            edx194 = y4;
            v195 = reinterpret_cast<int32_t>(v16);
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx193 * (ecx193 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx194 < 10))) & 1) {
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx191 * (ecx191 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx192 < 10))) & 1) 
                    break;
                addr_403dc8_61:
                addr_402011_59:
                eax196 = x3;
                ecx197 = y4;
                if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax196 * (eax196 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx197 < 10))) & 1) 
                    continue;
            }
        }
        eax198 = x3;
        ecx199 = y4;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax198 * (eax198 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx199 < 10))) & 1) {
            while (eax200 = x3, ecx201 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax200 * (eax200 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx201 < 10))) & 1)) {
                addr_404264_237:
            }
            fun_400fc0(v6, v195);
            eax202 = x17;
            ecx203 = y18;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax202 * (eax202 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx203 < 10))) & 1) 
                goto addr_4021dc_211;
            goto addr_403dcd_213;
        } else {
            goto addr_404264_237;
        }
    }
    eax204 = x3;
    ecx205 = y4;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax204 * (eax204 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx205 < 10))) & 1)) {
        goto addr_4042bb_244;
    }
    while (eax206 = x17, ecx207 = y18, eax208 = x3, ecx209 = y4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax208 * (eax208 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx209 < 10))) & 1)) {
        addr_4042bb_244:
    }
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax206 * (eax206 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx207 < 10))) & 1)) 
        goto addr_403438_15;
    while (v30 = v16 << 8 & 0x147, ecx210 = x17, edi211 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx210 * (ecx210 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi211 < 10))) & 1)) {
        addr_4040b9_16:
    }
    goto addr_4038bd_35;
}

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string() */
int64_t _ZNSsD1Ev = 0x400f86;

void fun_400f80(uint32_t* rdi, ...) {
    goto _ZNSsD1Ev;
}

int32_t x155 = 0;

int32_t y156 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl() */
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2Ev(struct s0* rdi);

/* std::_Vector_base<int, std::allocator<int> >::_Vector_base() */
void _ZNSt12_Vector_baseIiSaIiEEC2Ev(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x155;
    ecx3 = y156;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2Ev(v4), edx5 = x155, esi6 = y156, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_40dd15_4:
            _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2Ev(v4);
        }
        return;
    } else {
        goto addr_40dd15_4;
    }
}

int32_t x39 = 0;

int32_t y40 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() */
struct s0* _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x39;
    ecx3 = y40;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx5 = x39, esi6 = y40, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_406da5_4:
        }
        return v4;
    } else {
        goto addr_406da5_4;
    }
}

int32_t x119 = 0;

int32_t y120 = 0;

/* void std::_Destroy<int*>(int*, int*) */
uint32_t* _ZSt8_DestroyIPiEvT_S1_(uint32_t* rdi, uint32_t* rsi);

/* void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&) */
uint32_t* _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(uint32_t* rdi, uint32_t* rsi, struct s0* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* rax8;
    int32_t r9d9;
    int32_t r10d10;

    eax4 = x119;
    ecx5 = y120;
    v6 = rsi;
    v7 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax8 = _ZSt8_DestroyIPiEvT_S1_(v7, v6), r9d9 = x119, r10d10 = y120, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d9 * (r9d9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d10 < 10))) & 1)) {
            addr_40c14f_4:
            _ZSt8_DestroyIPiEvT_S1_(v7, v6);
        }
        return rax8;
    } else {
        goto addr_40c14f_4;
    }
}

int32_t x41 = 0;

int32_t y42 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned long) */
void _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim(struct s0* rdi, uint32_t* rsi, int64_t rdx);

/* std::_Vector_base<int, std::allocator<int> >::~_Vector_base() */
void _ZNSt12_Vector_baseIiSaIiEED2Ev(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int64_t rdi5;
    int32_t r9d6;
    int32_t r10d7;
    uint32_t* v8;
    struct s0* v9;
    int32_t eax10;
    int32_t ecx11;
    int32_t eax12;
    int32_t ecx13;

    eax2 = x41;
    ecx3 = y42;
    v4 = rdi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1)) {
        goto addr_4070a8_3;
    }
    while (rdi5 = reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v4->f10) - reinterpret_cast<uint64_t>(v4->f0)) >> 2, r9d6 = x41, r10d7 = y42, v8 = v4->f0, v9 = v4, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d6 * (r9d6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d7 < 10))) & 1)) {
        addr_4070a8_3:
    }
    _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim(v9, v8, rdi5);
    eax10 = x41;
    ecx11 = y42;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax10 * (eax10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx11 < 10))) & 1)) 
        goto addr_406efe_8;
    while (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(v9), eax12 = x41, ecx13 = y42, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax12 * (eax12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx13 < 10))) & 1)) {
        addr_4070be_11:
        _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(v9);
    }
    return;
    addr_406efe_8:
    goto addr_4070be_11;
}

int32_t x95 = 0;

int32_t y96 = 0;

/* __gnu_cxx::new_allocator<int>::construct(int*, int const&) */
void _ZN9__gnu_cxx13new_allocatorIiE9constructEPiRKi(struct s0* rdi, uint32_t* rsi, uint32_t* rdx);

/* void __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(std::allocator<int>&, int*, int const&) */
void _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(struct s0* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    struct s0* v7;
    uint32_t* v8;
    int32_t r9d9;
    int32_t r10d10;

    eax4 = x95;
    ecx5 = y96;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (_ZN9__gnu_cxx13new_allocatorIiE9constructEPiRKi(v7, v6, v8), r9d9 = x95, r10d10 = y96, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d9 * (r9d9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d10 < 10))) & 1)) {
            addr_4097d5_4:
            _ZN9__gnu_cxx13new_allocatorIiE9constructEPiRKi(v7, v6, v8);
        }
        return;
    } else {
        goto addr_4097d5_4;
    }
}

int32_t x99 = 0;

int32_t y100 = 0;

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(int* const&) */
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(uint32_t** rdi, struct s0* rsi);

/* std::vector<int, std::allocator<int> >::end() */
struct s0* _ZNSt6vectorIiSaIiEE3endEv(struct s0* rdi, struct s0* rsi, uint32_t* rdx) {
    void* rsp4;
    int32_t eax5;
    int32_t ecx6;
    struct s0* v7;
    uint32_t** rax8;
    int32_t r8d9;
    int32_t r9d10;
    uint32_t** rax11;
    struct s0* v12;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 24);
    eax5 = x99;
    ecx6 = y100;
    v7 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx6 < 10))) & 1) {
        while (rax8 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp4) - 16), _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(rax8, &v7->f8), rsp4 = reinterpret_cast<void*>(rax8 - 2 - 1 + 1), r8d9 = x99, r9d10 = y100, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d9 * (r8d9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d10 < 10))) & 1)) {
            addr_40b056_4:
            rax11 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp4) - 16);
            _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(rax11, &v7->f8);
            rsp4 = reinterpret_cast<void*>(rax11 - 2 - 1 + 1);
        }
        return v12;
    } else {
        goto addr_40b056_4;
    }
}

int32_t x97 = 0;

int32_t y98 = 0;

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */
uint32_t** _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(uint32_t** rdi, ...);

/* int* std::copy_backward<int*, int*>(int*, int*, int*) */
uint32_t* _ZSt13copy_backwardIPiS0_ET0_T_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*() const */
uint32_t* _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv(uint32_t** rdi, uint32_t* rsi);

/* std::vector<int, std::allocator<int> >::_M_check_len(unsigned long, char const*) const */
uint64_t _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc(struct s0* rdi, uint64_t rsi, int64_t rdx);

/* std::vector<int, std::allocator<int> >::begin() */
int64_t _ZNSt6vectorIiSaIiEE5beginEv(struct s0* rdi, uint64_t rsi);

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&) */
uint64_t _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(uint32_t** rdi, uint32_t** rsi);

/* std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned long) */
uint32_t* _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm(struct s0* rdi, uint64_t rsi);

/* int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
uint32_t* _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx, struct s0* rcx);

/* std::vector<int, std::allocator<int> >::_M_insert_aux(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&) */
void _ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi(struct s0* rdi, struct s0* rsi, uint32_t* rdx) {
    void* rsp4;
    int32_t eax5;
    int32_t ecx6;
    struct s0* v7;
    uint32_t* v8;
    uint32_t** rax9;
    uint32_t** r9_10;
    uint32_t* v11;
    unsigned char r15b12;
    int32_t r12d13;
    int32_t r13d14;
    uint32_t** v15;
    struct s0* v16;
    uint32_t** v17;
    int32_t eax18;
    int32_t ecx19;
    uint32_t* rsi20;
    uint32_t* rdx21;
    uint32_t v22;
    uint32_t** rax23;
    uint32_t* rdi24;
    uint32_t* rdx25;
    uint32_t* rsi26;
    uint32_t* rax27;
    int32_t r8d28;
    int32_t r9d29;
    uint32_t* rsi30;
    uint32_t* rdx31;
    uint32_t v32;
    uint32_t** rax33;
    uint32_t* rdi34;
    uint32_t* rdx35;
    uint32_t* rsi36;
    uint32_t* rax37;
    int32_t eax38;
    int32_t ecx39;
    int32_t eax40;
    int32_t ecx41;
    int32_t eax42;
    int32_t ecx43;
    uint64_t rax44;
    uint64_t v45;
    uint64_t rax46;
    uint32_t* rax47;
    uint32_t* v48;
    int32_t r9d49;
    int32_t r10d50;
    uint64_t rax51;
    int32_t eax52;
    int32_t ecx53;
    int32_t edx54;
    int32_t esi55;
    uint32_t* v56;
    uint32_t** rax57;
    uint32_t** v58;
    int32_t eax59;
    int32_t ecx60;
    int32_t r8d61;
    int32_t r9d62;
    uint32_t* v63;
    uint32_t* v64;
    struct s0* rax65;
    struct s0* v66;
    int32_t eax67;
    int32_t ecx68;
    int32_t eax69;
    int32_t ecx70;
    uint32_t* rax71;
    uint32_t* v72;
    int32_t eax73;
    int32_t ecx74;
    uint32_t* v75;
    int32_t esi76;
    int32_t edi77;
    uint32_t** rax78;
    uint32_t** v79;
    int32_t eax80;
    int32_t ecx81;
    uint32_t* rsi82;
    int32_t r8d83;
    int32_t r9d84;
    uint32_t* v85;
    uint32_t* v86;
    uint32_t* v87;
    struct s0* rax88;
    struct s0* v89;
    int32_t eax90;
    int32_t ecx91;
    int32_t eax92;
    int32_t ecx93;
    uint32_t* rax94;
    uint32_t* v95;
    int32_t eax96;
    int32_t ecx97;
    uint32_t* v98;
    int32_t edx99;
    int32_t esi100;
    int32_t eax101;
    int32_t ecx102;
    uint32_t* rsi103;
    uint32_t* v104;
    struct s0* rax105;
    uint32_t* rsi106;
    int64_t v107;
    int32_t r9d108;
    int32_t r10d109;
    uint32_t* rsi110;
    uint32_t* v111;
    struct s0* rax112;
    uint32_t* rsi113;
    int64_t v114;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x1f8);
    eax5 = x97;
    ecx6 = y98;
    v7 = rdi;
    v8 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx6 < 10))) & 1)) {
        goto addr_40ac7a_3;
    }
    while (rax9 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp4) - 16), r9_10 = rax9 - 2 - 2 - 2 - 2 - 2 - 2, rsp4 = reinterpret_cast<void*>(r9_10 - 2 - 2 - 2 - 2), v11 = v8, r15b12 = reinterpret_cast<uint1_t>(v7->f8 != v7->f10), r12d13 = x97, r13d14 = y98, v15 = rax9, v16 = v7, v17 = r9_10, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r12d13 * (r12d13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r13d14 < 10))) & 1)) {
        addr_40ac7a_3:
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 16 - 16 - 16);
    }
    if (!(r15b12 & 1)) 
        goto addr_4099ab_7;
    eax18 = x97;
    ecx19 = y98;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax18 * (eax18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx19 < 10))) & 1) {
        while (rsi20 = v16->f8, rdx21 = v16->f8 + 0xffffffffffffffff, _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(v16, rsi20, rdx21), v16->f8 = v16->f8 + 1, v22 = *v11, rax23 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v15, v15), rdi24 = *rax23, rdx25 = v16->f8 + 0xffffffffffffffff, rsi26 = v16->f8 + 0xfffffffffffffffe, _ZSt13copy_backwardIPiS0_ET0_T_S2_S1_(rdi24, rsi26, rdx25), rax27 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv(v15, rsi26), *rax27 = v22, r8d28 = x97, r9d29 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d28 * (r8d28 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d29 < 10))) & 1)) {
            addr_40acb2_11:
            rsi30 = v16->f8;
            rdx31 = v16->f8 + 0xffffffffffffffff;
            _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(v16, rsi30, rdx31);
            v16->f8 = v16->f8 + 1;
            v32 = *v11;
            rax33 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v15, v15);
            rdi34 = *rax33;
            rdx35 = v16->f8 + 0xffffffffffffffff;
            rsi36 = v16->f8 + 0xfffffffffffffffe;
            _ZSt13copy_backwardIPiS0_ET0_T_S2_S1_(rdi34, rsi36, rdx35);
            rax37 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv(v15, rsi36);
            *rax37 = v32;
        }
    } else {
        goto addr_40acb2_11;
    }
    addr_40aa10_14:
    eax38 = x97;
    ecx39 = y98;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax38 * (eax38 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx39 < 10))) & 1) {
        while (eax40 = x97, ecx41 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax40 * (eax40 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx41 < 10))) & 1)) {
            addr_40af3d_17:
        }
        return;
    } else {
        goto addr_40af3d_17;
    }
    addr_4099ab_7:
    eax42 = x97;
    ecx43 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax42 * (eax42 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx43 < 10))) & 1)) 
        goto addr_409b1b_21;
    while (rax44 = _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc(v16, 1, "vector::_M_insert_aux"), v45 = rax44, _ZNSt6vectorIiSaIiEE5beginEv(v16, 1), rax46 = _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(v15, v17), rax47 = _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm(v16, v45), v48 = rax47, r9d49 = x97, r10d50 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d49 * (r9d49 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d50 < 10))) & 1)) {
        addr_40ad50_24:
        rax51 = _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc(v16, 1, "vector::_M_insert_aux");
        _ZNSt6vectorIiSaIiEE5beginEv(v16, 1);
        _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(v15, v17);
        _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm(v16, rax51);
    }
    _ZN9__gnu_cxx14__alloc_traitsISaIiEE9constructIiEEvRS1_PiRKT_(v16, reinterpret_cast<uint64_t>(v48) + (rax46 << 2), v11);
    eax52 = x97;
    ecx53 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax52 * (eax52 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx53 < 10))) & 1)) 
        goto addr_409c67_27;
    while (edx54 = x97, esi55 = y98, v56 = v16->f0, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx54 * (edx54 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi55 < 10))) & 1)) {
        addr_40adc3_30:
    }
    rax57 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v15);
    v58 = rax57;
    eax59 = x97;
    ecx60 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax59 * (eax59 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx60 < 10))) & 1)) 
        goto addr_409d23_33;
    while (r8d61 = x97, r9d62 = y98, v63 = *v58, v64 = v48, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d61 * (r8d61 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d62 < 10))) & 1)) {
        addr_40add6_36:
    }
    rax65 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v16);
    v66 = rax65;
    eax67 = x97;
    ecx68 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax67 * (eax67 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx68 < 10))) & 1)) 
        goto addr_409df7_39;
    while (eax69 = x97, ecx70 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax69 * (eax69 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx70 < 10))) & 1)) {
        addr_40addb_42:
    }
    rax71 = _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(v56, v63, v64, v66);
    v72 = rax71;
    eax73 = x97;
    ecx74 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax73 * (eax73 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx74 < 10))) & 1)) 
        goto addr_409eaa_45;
    while (v75 = v72 + 1, esi76 = x97, edi77 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi76 * (esi76 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi77 < 10))) & 1)) {
        addr_40ade0_48:
    }
    rax78 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v15);
    v79 = rax78;
    eax80 = x97;
    ecx81 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax80 * (eax80 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx81 < 10))) & 1)) 
        goto addr_409f68_51;
    while (rsi82 = v16->f8, r8d83 = x97, r9d84 = y98, v85 = *v79, v86 = rsi82, v87 = v75, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d83 * (r8d83 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d84 < 10))) & 1)) {
        addr_40ae03_54:
    }
    rax88 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v16);
    v89 = rax88;
    eax90 = x97;
    ecx91 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax90 * (eax90 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx91 < 10))) & 1)) 
        goto addr_40a047_57;
    while (eax92 = x97, ecx93 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax92 * (eax92 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx93 < 10))) & 1)) {
        addr_40ae08_60:
    }
    rax94 = _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(v85, v86, v87, v89);
    v95 = rax94;
    eax96 = x97;
    ecx97 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax96 * (eax96 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx97 < 10))) & 1)) 
        goto addr_40a0fa_63;
    while (v98 = v95, edx99 = x97, esi100 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx99 * (edx99 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi100 < 10))) & 1)) {
        addr_40ae0d_66:
    }
    eax101 = x97;
    ecx102 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax101 * (eax101 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx102 < 10))) & 1)) 
        goto addr_40a921_69;
    while (rsi103 = v16->f8, v104 = v16->f0, rax105 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v16), _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(v104, rsi103, rax105), rsi106 = v16->f0, v107 = reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v16->f10) - reinterpret_cast<uint64_t>(v16->f0)) >> 2, _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim(v16, rsi106, v107), v16->f0 = v48, v16->f8 = v98, v16->f10 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(v48) + (v45 << 2)), r9d108 = x97, r10d109 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d108 * (r9d108 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d109 < 10))) & 1)) {
        addr_40ae9e_72:
        rsi110 = v16->f8;
        v111 = v16->f0;
        rax112 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v16);
        _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(v111, rsi110, rax112);
        rsi113 = v16->f0;
        v114 = reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v16->f10) - reinterpret_cast<uint64_t>(v16->f0)) >> 2;
        _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim(v16, rsi113, v114);
        v16->f0 = v48;
        v16->f8 = v98;
        v16->f10 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(v48) + (v45 << 2));
    }
    goto addr_40aa10_14;
    addr_40a921_69:
    goto addr_40ae9e_72;
    addr_40a0fa_63:
    goto addr_40ae0d_66;
    addr_40a047_57:
    goto addr_40ae08_60;
    addr_409f68_51:
    goto addr_40ae03_54;
    addr_409eaa_45:
    goto addr_40ade0_48;
    addr_409df7_39:
    goto addr_40addb_42;
    addr_409d23_33:
    goto addr_40add6_36;
    addr_409c67_27:
    goto addr_40adc3_30;
    addr_409b1b_21:
    goto addr_40ad50_24;
}

int32_t x29 = 0;

int32_t y30 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const */
struct s0* _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x29;
    ecx3 = y30;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx5 = x29, esi6 = y30, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_406535_4:
        }
        return v4;
    } else {
        goto addr_406535_4;
    }
}

int32_t x27 = 0;

int32_t y28 = 0;

/* __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(std::allocator<int> const&) */
struct s0* _ZN9__gnu_cxx14__alloc_traitsISaIiEE17_S_select_on_copyERKS1_(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x27;
    ecx3 = y28;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx5 = x27, esi6 = y28, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_406465_4:
        }
        return v4;
    } else {
        goto addr_406465_4;
    }
}

int32_t x31 = 0;

int32_t y32 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(std::allocator<int> const&) */
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_(struct s0* rdi, struct s0* rsi);

/* std::_Vector_base<int, std::allocator<int> >::_M_create_storage(unsigned long) */
void _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm(struct s0* rdi, uint64_t rsi);

/* std::_Vector_base<int, std::allocator<int> >::_Vector_base(unsigned long, std::allocator<int> const&) */
void _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_(struct s0* rdi, uint64_t rsi, struct s0* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint64_t v6;
    struct s0* v7;
    struct s0* v8;
    int32_t r11d9;
    int32_t ebx10;
    int32_t eax11;
    int32_t ecx12;
    int32_t eax13;
    int32_t ecx14;

    eax4 = x31;
    ecx5 = y32;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_406864_3;
    }
    while (_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_(v7, v8), r11d9 = x31, ebx10 = y32, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d9 * (r11d9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx10 < 10))) & 1)) {
        addr_406864_3:
        _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_(v7, v8);
    }
    _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm(v7, v6);
    eax11 = x31;
    ecx12 = y32;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1)) 
        goto addr_4066bf_8;
    while (eax13 = x31, ecx14 = y32, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) {
        addr_4068a7_11:
    }
    return;
    addr_4066bf_8:
    goto addr_4068a7_11;
}

int32_t x35 = 0;

int32_t y36 = 0;

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(int const* const&) */
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_(int64_t* rdi, int64_t* rsi);

/* std::vector<int, std::allocator<int> >::begin() const */
int64_t _ZNKSt6vectorIiSaIiEE5beginEv(struct s0* rdi, uint64_t rsi, struct s0* rdx) {
    void* rsp4;
    int32_t eax5;
    int32_t ecx6;
    int64_t* rax7;
    int64_t* rdx8;
    int32_t r8d9;
    int32_t r9d10;
    int64_t* rax11;
    int64_t* rdx12;
    int64_t v13;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 24);
    eax5 = x35;
    ecx6 = y36;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx6 < 10))) & 1) {
        while (rax7 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp4) - 16), rdx8 = rax7 - 2 - 2, _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_(rax7, rdx8), rsp4 = reinterpret_cast<void*>(rdx8 - 1 + 1), r8d9 = x35, r9d10 = y36, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d9 * (r8d9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d10 < 10))) & 1)) {
            addr_406b7f_4:
            rax11 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp4) - 16);
            rdx12 = rax11 - 2 - 2;
            _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_(rax11, rdx12);
            rsp4 = reinterpret_cast<void*>(rdx12 - 1 + 1);
        }
        return v13;
    } else {
        goto addr_406b7f_4;
    }
}

int32_t x37 = 0;

int32_t y38 = 0;

/* std::vector<int, std::allocator<int> >::end() const */
int64_t _ZNKSt6vectorIiSaIiEE3endEv(struct s0* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t ecx4;
    int64_t* rax5;
    int64_t* rdx6;
    int32_t r8d7;
    int32_t r9d8;
    int64_t* rax9;
    int64_t* rdx10;
    int64_t v11;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 24);
    eax3 = x37;
    ecx4 = y38;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax5 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp2) - 16), rdx6 = rax5 - 2 - 2, _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_(rax5, rdx6), rsp2 = reinterpret_cast<void*>(rdx6 - 1 + 1), r8d7 = x37, r9d8 = y38, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d7 * (r8d7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d8 < 10))) & 1)) {
            addr_406cb0_4:
            rax9 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp2) - 16);
            rdx10 = rax9 - 2 - 2;
            _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_(rax9, rdx10);
            rsp2 = reinterpret_cast<void*>(rdx10 - 1 + 1);
        }
        return v11;
    } else {
        goto addr_406cb0_4;
    }
}

int32_t x33 = 0;

int32_t y34 = 0;

/* int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(int64_t rdi, int64_t rsi, uint32_t* rdx);

/* int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, std::allocator<int>&) */
uint32_t* _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E(int64_t rdi, int64_t rsi, uint32_t* rdx, struct s0* rcx) {
    int32_t eax5;
    int32_t r8d6;
    uint32_t* v7;
    int64_t v8;
    int64_t v9;
    uint32_t* rax10;
    int32_t r14d11;
    int32_t r15d12;

    eax5 = x33;
    r8d6 = y34;
    v7 = rdx;
    v8 = rsi;
    v9 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d6 < 10))) & 1) {
        while (rax10 = _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(v9, v8, v7), r14d11 = x33, r15d12 = y34, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r14d11 * (r14d11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r15d12 < 10))) & 1)) {
            addr_406a0e_4:
            _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(v9, v8, v7);
        }
        return rax10;
    } else {
        goto addr_406a0e_4;
    }
}

int64_t __cxa_begin_catch = 0x401036;

int64_t fun_401030(int64_t rdi) {
    goto __cxa_begin_catch;
}

/* std::terminate() */
int64_t _ZSt9terminatev = 0x400fb6;

void fun_400fb0(int64_t rdi) {
    goto _ZSt9terminatev;
}

int32_t x81 = 0;

int32_t y82 = 0;

/* std::allocator<int>::allocator(std::allocator<int> const&) */
struct s0* _ZNSaIiEC2ERKS_(struct s0* rdi, struct s0* rsi);

/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(std::allocator<int> const&) */
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    struct s0* v6;
    int32_t r8d7;
    int32_t r9d8;

    eax3 = x81;
    ecx4 = y82;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (_ZNSaIiEC2ERKS_(v5, v6), v5->f0 = reinterpret_cast<uint32_t*>(0), v5->f8 = reinterpret_cast<uint32_t*>(0), v5->f10 = reinterpret_cast<uint32_t*>(0), r8d7 = x81, r9d8 = y82, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d7 * (r8d7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d8 < 10))) & 1)) {
            addr_408c46_4:
            _ZNSaIiEC2ERKS_(v5, v6);
            v5->f0 = reinterpret_cast<uint32_t*>(0);
            v5->f8 = reinterpret_cast<uint32_t*>(0);
            v5->f10 = reinterpret_cast<uint32_t*>(0);
        }
        return;
    } else {
        goto addr_408c46_4;
    }
}

int32_t x83 = 0;

int32_t y84 = 0;

/* std::_Vector_base<int, std::allocator<int> >::_M_create_storage(unsigned long) */
void _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm(struct s0* rdi, uint64_t rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    uint64_t v6;
    uint32_t* rax7;
    int32_t r8d8;
    int32_t r9d9;
    uint32_t* rax10;

    eax3 = x83;
    ecx4 = y84;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax7 = _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm(v5, v6), v5->f0 = rax7, v5->f8 = v5->f0, v5->f10 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(v5->f0) + (v6 << 2)), r8d8 = x83, r9d9 = y84, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d8 * (r8d8 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d9 < 10))) & 1)) {
            addr_408da2_4:
            rax10 = _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm(v5, v6);
            v5->f0 = rax10;
            v5->f8 = v5->f0;
            v5->f10 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(v5->f0) + (v6 << 2));
        }
        return;
    } else {
        goto addr_408da2_4;
    }
}

int32_t x55 = 0;

int32_t y56 = 0;

/* int* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(int64_t rdi, int64_t rsi, uint32_t* rdx);

/* int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(int64_t rdi, int64_t rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    int64_t v6;
    int64_t v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r11d10;
    int32_t ebx11;

    eax4 = x55;
    ecx5 = y56;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(v7, v6, v8), r11d10 = x55, ebx11 = y56, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d10 * (r11d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx11 < 10))) & 1)) {
            addr_407985_4:
            _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_407985_4;
    }
}

int32_t x53 = 0;

int32_t y54 = 0;

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(int const* const&) */
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_(int64_t* rdi, int64_t* rsi) {
    int32_t eax3;
    int32_t ecx4;
    int64_t* v5;
    int64_t* v6;
    int32_t edi7;
    int32_t r8d8;

    eax3 = x53;
    ecx4 = y54;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (*v5 = *v6, edi7 = x53, r8d8 = y54, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi7 * (edi7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d8 < 10))) & 1)) {
            addr_407820_4:
            *v5 = *v6;
        }
        return;
    } else {
        goto addr_407820_4;
    }
}

int32_t x43 = 0;

int32_t y44 = 0;

/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long) */
void _ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim(struct s0* rdi, uint32_t* rsi, int64_t rdx);

/* std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned long) */
void _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim(struct s0* rdi, uint32_t* rsi, int64_t rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    struct s0* v7;
    int64_t v8;
    uint32_t* v9;
    int64_t v10;
    int32_t r10d11;
    int32_t r11d12;
    struct s0* v13;
    int32_t eax14;
    int32_t ecx15;
    int32_t r8d16;
    int32_t r9d17;
    int32_t eax18;
    int32_t ecx19;
    int32_t eax20;
    int32_t ecx21;

    eax4 = x43;
    ecx5 = y44;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_40733b_3;
    }
    while (v9 = v6, v10 = v8, r10d11 = x43, r11d12 = y44, v13 = v7, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r10d11 * (r10d11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d12 < 10))) & 1)) {
        addr_40733b_3:
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!v9)) & 1)) 
        goto addr_4071f7_7;
    eax14 = x43;
    ecx15 = y44;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax14 * (eax14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx15 < 10))) & 1) {
        while (_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim(v13, v9, v10), r8d16 = x43, r9d17 = y44, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d16 * (r8d16 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d17 < 10))) & 1)) {
            addr_407373_11:
            _ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim(v13, v9, v10);
        }
    } else {
        goto addr_407373_11;
    }
    addr_4072aa_14:
    eax18 = x43;
    ecx19 = y44;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax18 * (eax18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx19 < 10))) & 1) {
        while (eax20 = x43, ecx21 = y44, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax20 * (eax20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx21 < 10))) & 1)) {
            addr_407392_17:
        }
        return;
    } else {
        goto addr_407392_17;
    }
    addr_4071f7_7:
    goto addr_4072aa_14;
}

int32_t x51 = 0;

int32_t y52 = 0;

void fun_400ec0(uint32_t* rdi);

/* __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long) */
void _ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim(struct s0* rdi, uint32_t* rsi, int64_t rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    int32_t r8d7;
    int32_t r9d8;

    eax4 = x51;
    ecx5 = y52;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (fun_400ec0(v6), r8d7 = x51, r9d8 = y52, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d7 * (r8d7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d8 < 10))) & 1)) {
            addr_40770c_4:
            fun_400ec0(v6);
        }
        return;
    } else {
        goto addr_40770c_4;
    }
}

int32_t x47 = 0;

int32_t y48 = 0;

/* __gnu_cxx::new_allocator<int>::~new_allocator() */
void* _ZN9__gnu_cxx13new_allocatorIiED2Ev(struct s0* rdi);

/* std::allocator<int>::~allocator() */
void* _ZNSaIiED2Ev(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    void* rax5;
    int32_t edx6;
    int32_t esi7;

    eax2 = x47;
    ecx3 = y48;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZN9__gnu_cxx13new_allocatorIiED2Ev(v4), edx6 = x47, esi7 = y48, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_407538_4:
            _ZN9__gnu_cxx13new_allocatorIiED2Ev(v4);
        }
        return rax5;
    } else {
        goto addr_407538_4;
    }
}

int32_t x49 = 0;

int32_t y50 = 0;

/* __gnu_cxx::new_allocator<int>::~new_allocator() */
void* _ZN9__gnu_cxx13new_allocatorIiED2Ev(struct s0* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t ecx4;
    void* rax5;
    int32_t edx6;
    int32_t esi7;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    eax3 = x49;
    ecx4 = y50;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 16), rsp2 = rax5, edx6 = x49, esi7 = y50, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40760a_4:
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 16);
        }
        return rax5;
    } else {
        goto addr_40760a_4;
    }
}

/* operator delete(void*) */
int64_t _ZdlPv = 0x400ec6;

void fun_400ec0(uint32_t* rdi) {
    goto _ZdlPv;
}

int32_t x57 = 0;

int32_t y58 = 0;

/* int* std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(int64_t rdi, int64_t rsi, uint32_t* rdx);

/* int* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_(int64_t rdi, int64_t rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    int64_t v6;
    int64_t v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r11d10;
    int32_t ebx11;

    eax4 = x57;
    ecx5 = y58;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(v7, v6, v8), r11d10 = x57, ebx11 = y58, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d10 * (r11d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx11 < 10))) & 1)) {
            addr_407b25_4:
            _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_407b25_4;
    }
}

int32_t x59 = 0;

int32_t y60 = 0;

/* std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
int64_t _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(int64_t rdi);

/* int* std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_(int64_t rdi, int64_t rsi, uint32_t* rdx);

/* int* std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_(int64_t rdi, int64_t rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    int64_t v6;
    int64_t v7;
    uint32_t* v8;
    int64_t rax9;
    int64_t rax10;
    uint32_t* rax11;
    int32_t r14d12;
    int32_t r15d13;
    int64_t rax14;
    int64_t rax15;

    eax4 = x59;
    ecx5 = y60;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(v7), rax10 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(v6), rax11 = _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_(rax9, rax10, v8), r14d12 = x59, r15d13 = y60, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r14d12 * (r14d12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r15d13 < 10))) & 1)) {
            addr_407d1d_4:
            rax14 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(v7);
            rax15 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(v6);
            _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_(rax14, rax15, v8);
        }
        return rax11;
    } else {
        goto addr_407d1d_4;
    }
}

int32_t x63 = 0;

int32_t y64 = 0;

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
int64_t _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(int64_t rdi);

/* std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
int64_t _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Miter_baseIT_E13iterator_typeES9_(int64_t rdi) {
    int32_t eax2;
    int32_t ecx3;
    int64_t v4;
    int64_t rax5;
    int32_t r8d6;
    int32_t r9d7;

    eax2 = x63;
    ecx3 = y64;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(v4), r8d6 = x63, r9d7 = y64, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d6 * (r8d6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d7 < 10))) & 1)) {
            addr_40810c_4:
            _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(v4);
        }
        return rax5;
    } else {
        goto addr_40810c_4;
    }
}

int32_t x61 = 0;

int32_t y62 = 0;

/* std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
uint32_t* _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(int64_t rdi);

/* std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*) */
uint32_t* _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(uint32_t* rdi);

/* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */
uint32_t* _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*) */
uint32_t* _ZSt14__copy_move_a2ILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_(int64_t rdi, int64_t rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    int64_t v6;
    int64_t v7;
    uint32_t* v8;
    uint32_t* rax9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t* rax12;
    int32_t r11d13;
    int32_t ebx14;
    uint32_t* rax15;
    uint32_t* rax16;
    uint32_t* rax17;

    eax4 = x61;
    ecx5 = y62;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(v7), rax10 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(v6), rax11 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v8), rax12 = _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(rax9, rax10, rax11), r11d13 = x61, ebx14 = y62, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d13 * (r11d13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx14 < 10))) & 1)) {
            addr_407f62_4:
            rax15 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(v7);
            rax16 = _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(v6);
            rax17 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v8);
            _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(rax15, rax16, rax17);
        }
        return rax12;
    } else {
        goto addr_407f62_4;
    }
}

int32_t x69 = 0;

int32_t y70 = 0;

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
uint32_t* _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb1EE7_S_baseES7_(int64_t rdi);

/* std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
uint32_t* _ZSt12__niter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEENSt11_Niter_baseIT_E13iterator_typeES9_(int64_t rdi) {
    int32_t eax2;
    int32_t ecx3;
    int64_t v4;
    uint32_t* rax5;
    int32_t esi6;
    int32_t r8d7;

    eax2 = x69;
    ecx3 = y70;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb1EE7_S_baseES7_(v4), esi6 = x69, r8d7 = y70, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi6 * (esi6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d7 < 10))) & 1)) {
            addr_40847f_4:
            _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb1EE7_S_baseES7_(v4);
        }
        return rax5;
    } else {
        goto addr_40847f_4;
    }
}

int32_t x71 = 0;

int32_t y72 = 0;

/* std::_Iter_base<int*, false>::_S_base(int*) */
uint32_t* _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(uint32_t* rdi);

/* std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*) */
uint32_t* _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(uint32_t* rdi) {
    int32_t eax2;
    int32_t ecx3;
    uint32_t* v4;
    uint32_t* rax5;
    int32_t edx6;
    int32_t esi7;

    eax2 = x71;
    ecx3 = y72;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(v4), edx6 = x71, esi7 = y72, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40857d_4:
            _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(v4);
        }
        return rax5;
    } else {
        goto addr_40857d_4;
    }
}

int32_t x67 = 0;

int32_t y68 = 0;

/* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int const*, int*) */
uint32_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*) */
uint32_t* _ZSt13__copy_move_aILb0EPKiPiET1_T0_S4_S3_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r10d10;
    int32_t r11d11;

    eax4 = x67;
    ecx5 = y68;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(v7, v6, v8), r10d10 = x67, r11d11 = y68, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r10d10 * (r10d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d11 < 10))) & 1)) {
            addr_40834c_4:
            _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_40834c_4;
    }
}

int32_t x65 = 0;

int32_t y66 = 0;

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
int64_t _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb0EE7_S_baseES7_(int64_t rdi) {
    int32_t eax2;
    int32_t ecx3;
    int64_t v4;
    int32_t esi5;
    int32_t edi6;

    eax2 = x65;
    ecx3 = y66;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (esi5 = x65, edi6 = y66, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi5 * (esi5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi6 < 10))) & 1)) {
            addr_408218_4:
        }
        return v4;
    } else {
        goto addr_408218_4;
    }
}

int32_t x79 = 0;

int32_t y80 = 0;

void fun_400fd0(uint32_t* rdi, uint32_t* rsi, uint64_t rdx);

/* int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int const*, int*) */
uint32_t* _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* v9;
    uint32_t* v10;
    uint64_t v11;
    int32_t ebx12;
    int32_t r14d13;
    int32_t eax14;
    int32_t ecx15;
    int32_t r9d16;
    int32_t r10d17;
    int32_t eax18;
    int32_t ecx19;
    int32_t edi20;
    int32_t r8d21;

    eax4 = x79;
    ecx5 = y80;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_408ac5_3;
    }
    while (v9 = v7, v10 = v8, v11 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v6) - reinterpret_cast<uint64_t>(v9)) >> 2), ebx12 = x79, r14d13 = y80, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ebx12 * (ebx12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r14d13 < 10))) & 1)) {
        addr_408ac5_3:
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!v11)) & 1)) 
        goto addr_408950_7;
    eax14 = x79;
    ecx15 = y80;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax14 * (eax14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx15 < 10))) & 1) {
        while (fun_400fd0(v10, v9, v11 << 2), r9d16 = x79, r10d17 = y80, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d16 * (r9d16 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d17 < 10))) & 1)) {
            addr_408b17_11:
            fun_400fd0(v10, v9, v11 << 2);
        }
    } else {
        goto addr_408b17_11;
    }
    addr_408a0c_14:
    eax18 = x79;
    ecx19 = y80;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax18 * (eax18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx19 < 10))) & 1) {
        while (edi20 = x79, r8d21 = y80, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi20 * (edi20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d21 < 10))) & 1)) {
            addr_408b40_17:
        }
        return reinterpret_cast<uint64_t>(v10) + (v11 << 2);
    } else {
        goto addr_408b40_17;
    }
    addr_408950_7:
    goto addr_408a0c_14;
}

int32_t x75 = 0;

int32_t y76 = 0;

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base() const */
uint32_t** _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(uint32_t** rdi);

/* std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >) */
uint32_t* _ZNSt10_Iter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEELb1EE7_S_baseES7_(int64_t rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t ecx4;
    uint32_t** rax5;
    uint32_t** rax6;
    int32_t edx7;
    int32_t esi8;
    uint32_t* v9;
    uint32_t** rax10;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    eax3 = x75;
    ecx4 = y76;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax5 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp2) - 16), rax6 = _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(rax5), rsp2 = reinterpret_cast<void*>(rax5 - 1 + 1), edx7 = x75, esi8 = y76, v9 = *rax6, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx7 * (edx7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi8 < 10))) & 1)) {
            addr_408730_4:
            rax10 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp2) - 16);
            _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(rax10);
            rsp2 = reinterpret_cast<void*>(rax10 - 1 + 1);
        }
        return v9;
    } else {
        goto addr_408730_4;
    }
}

int32_t x73 = 0;

int32_t y74 = 0;

/* std::_Iter_base<int*, false>::_S_base(int*) */
uint32_t* _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(uint32_t* rdi) {
    int32_t eax2;
    int32_t ecx3;
    uint32_t* v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x73;
    ecx3 = y74;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx5 = x73, esi6 = y74, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_408655_4:
        }
        return v4;
    } else {
        goto addr_408655_4;
    }
}

int32_t x77 = 0;

int32_t y78 = 0;

/* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base() const */
uint32_t** _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv(uint32_t** rdi) {
    int32_t eax2;
    int32_t ecx3;
    uint32_t** v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x77;
    ecx3 = y78;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx5 = x77, esi6 = y78, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_408815_4:
        }
        return v4;
    } else {
        goto addr_408815_4;
    }
}

int64_t memmove = 0x400fd6;

void fun_400fd0(uint32_t* rdi, uint32_t* rsi, uint64_t rdx) {
    goto memmove;
}

int32_t x91 = 0;

int32_t y92 = 0;

/* __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&) */
struct s0* _ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_(struct s0* rdi, struct s0* rsi);

/* std::allocator<int>::allocator(std::allocator<int> const&) */
struct s0* _ZNSaIiEC2ERKS_(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    struct s0* v6;
    struct s0* rax7;
    int32_t r8d8;
    int32_t r9d9;

    eax3 = x91;
    ecx4 = y92;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax7 = _ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_(v5, v6), r8d8 = x91, r9d9 = y92, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d8 * (r8d8 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d9 < 10))) & 1)) {
            addr_4095aa_4:
            _ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_(v5, v6);
        }
        return rax7;
    } else {
        goto addr_4095aa_4;
    }
}

int32_t x85 = 0;

int32_t y86 = 0;

/* __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*) */
uint32_t* _ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv(struct s0* rdi, uint64_t rsi, int64_t rdx);

/* std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned long) */
uint32_t* _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm(struct s0* rdi, uint64_t rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    uint64_t v6;
    uint64_t v7;
    int32_t r8d8;
    int32_t r9d9;
    struct s0* v10;
    int32_t eax11;
    int32_t ecx12;
    uint32_t* rax13;
    int32_t r8d14;
    int32_t r9d15;
    uint32_t* v16;
    int32_t ecx17;
    int32_t edx18;
    uint32_t* v19;
    int32_t eax20;
    int32_t ecx21;
    int32_t eax22;
    int32_t ecx23;
    int32_t eax24;
    int32_t ecx25;

    eax3 = x85;
    ecx4 = y86;
    v5 = rdi;
    v6 = rsi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1)) {
        goto addr_4090e1_3;
    }
    while (v7 = v6, r8d8 = x85, r9d9 = y86, v10 = v5, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d8 * (r8d8 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d9 < 10))) & 1)) {
        addr_4090e1_3:
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!v7)) & 1)) 
        goto addr_408ef7_7;
    eax11 = x85;
    ecx12 = y86;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1) {
        while (rax13 = _ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv(v10, v7, 0), r8d14 = x85, r9d15 = y86, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d14 * (r8d14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d15 < 10))) & 1)) {
            addr_409108_11:
            _ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv(v10, v7, 0);
        }
        v16 = rax13;
    } else {
        goto addr_409108_11;
    }
    addr_409046_14:
    ecx17 = x85;
    edx18 = y86;
    v19 = v16;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx17 * (ecx17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx18 < 10))) & 1) {
        while (eax20 = x85, ecx21 = y86, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax20 * (eax20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx21 < 10))) & 1)) {
            addr_40912d_17:
        }
        return v19;
    } else {
        goto addr_40912d_17;
    }
    addr_408ef7_7:
    eax22 = x85;
    ecx23 = y86;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax22 * (eax22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx23 < 10))) & 1)) 
        goto addr_408ff1_21;
    while (eax24 = x85, ecx25 = y86, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax24 * (eax24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx25 < 10))) & 1)) {
        addr_409128_24:
    }
    v16 = reinterpret_cast<uint32_t*>(0);
    goto addr_409046_14;
    addr_408ff1_21:
    goto addr_409128_24;
}

int32_t x87 = 0;

int32_t y88 = 0;

/* __gnu_cxx::new_allocator<int>::max_size() const */
uint64_t _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(struct s0* rdi);

void fun_401020();

uint32_t* fun_401060(uint64_t rdi);

/* __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*) */
uint32_t* _ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv(struct s0* rdi, uint64_t rsi, int64_t rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint64_t v6;
    struct s0* v7;
    uint64_t v8;
    uint64_t rax9;
    int32_t r10d10;
    int32_t r11d11;
    int32_t eax12;
    int32_t ecx13;
    int32_t eax14;
    int32_t ecx15;
    int32_t eax16;
    int32_t ecx17;
    uint32_t* rax18;
    int32_t edx19;
    int32_t esi20;

    eax4 = x87;
    ecx5 = y88;
    v6 = rsi;
    v7 = rdi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_40938c_3;
    }
    while (v8 = v6, rax9 = _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(v7), r10d10 = x87, r11d11 = y88, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r10d10 * (r10d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d11 < 10))) & 1)) {
        addr_40938c_3:
        _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(v7);
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v8 > rax9)) & 1)) 
        goto addr_40924b_7;
    eax12 = x87;
    ecx13 = y88;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax12 * (eax12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx13 < 10))) & 1) {
        while (fun_401020(), eax14 = x87, ecx15 = y88, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax14 * (eax14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx15 < 10))) & 1)) {
            addr_4093d0_11:
            fun_401020();
        }
    } else {
        goto addr_4093d0_11;
    }
    addr_4092db_13:
    eax16 = x87;
    ecx17 = y88;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax16 * (eax16 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx17 < 10))) & 1) {
        while (rax18 = fun_401060(v8 << 2), edx19 = x87, esi20 = y88, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx19 * (edx19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi20 < 10))) & 1)) {
            addr_4093da_16:
            fun_401060(v8 << 2);
        }
        return rax18;
    } else {
        goto addr_4093da_16;
    }
    addr_40924b_7:
    goto addr_4092db_13;
}

int32_t x89 = 0;

int32_t y90 = 0;

/* __gnu_cxx::new_allocator<int>::max_size() const */
uint64_t _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    int32_t edx4;
    int32_t esi5;

    eax2 = x89;
    ecx3 = y90;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx4 = x89, esi5 = y90, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx4 * (edx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi5 < 10))) & 1)) {
            addr_4094b4_4:
        }
        return 0x3fffffffffffffff;
    } else {
        goto addr_4094b4_4;
    }
}

/* std::__throw_bad_alloc() */
int64_t _ZSt17__throw_bad_allocv = 0x401026;

void fun_401020() {
    goto _ZSt17__throw_bad_allocv;
}

/* operator new(unsigned long) */
int64_t _Znwm = 0x401066;

uint32_t* fun_401060(uint64_t rdi) {
    goto _Znwm;
}

int32_t x93 = 0;

int32_t y94 = 0;

/* __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&) */
struct s0* _ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_(struct s0* rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t ecx4;
    struct s0* v5;
    int32_t esi6;
    int32_t edi7;

    eax3 = x93;
    ecx4 = y94;
    v5 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (esi6 = x93, edi7 = y94, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi6 * (esi6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi7 < 10))) & 1)) {
            addr_4096b2_4:
        }
        return v5;
    } else {
        goto addr_4096b2_4;
    }
}

int32_t x153 = 0;

int32_t y154 = 0;

/* __gnu_cxx::new_allocator<int>::construct(int*, int const&) */
void _ZN9__gnu_cxx13new_allocatorIiE9constructEPiRKi(struct s0* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    int32_t r9d9;
    int32_t r10d10;
    uint32_t* v11;
    int32_t eax12;
    int32_t ecx13;
    int32_t eax14;
    int32_t ecx15;
    int32_t eax16;
    int32_t ecx17;
    int32_t esi18;
    int32_t edi19;

    eax4 = x153;
    ecx5 = y154;
    v6 = rsi;
    v7 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_40dc0b_3;
    }
    while (v8 = v7, r9d9 = x153, r10d10 = y154, v11 = v6, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d9 * (r9d9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d10 < 10))) & 1)) {
        addr_40dc0b_3:
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v6 == 0)) & 1)) 
        goto addr_40dad0_7;
    addr_40db7c_8:
    eax12 = x153;
    ecx13 = y154;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax12 * (eax12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx13 < 10))) & 1) {
        while (eax14 = x153, ecx15 = y154, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax14 * (eax14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx15 < 10))) & 1)) {
            addr_40dc57_11:
        }
        return;
    } else {
        goto addr_40dc57_11;
    }
    addr_40dad0_7:
    eax16 = x153;
    ecx17 = y154;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax16 * (eax16 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx17 < 10))) & 1)) 
        goto addr_40db13_15;
    while (*v11 = *v8, esi18 = x153, edi19 = y154, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi18 * (esi18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi19 < 10))) & 1)) {
        addr_40dc43_18:
        *v11 = *v8;
    }
    goto addr_40db7c_8;
    addr_40db13_15:
    goto addr_40dc43_18;
}

int32_t x105 = 0;

int32_t y106 = 0;

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const */
uint32_t** _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(uint32_t** rdi, ...) {
    int32_t eax2;
    int32_t ecx3;
    uint32_t** v4;
    int32_t edx5;
    int32_t esi6;

    eax2 = x105;
    ecx3 = y106;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (edx5 = x105, esi6 = y106, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx5 * (edx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
            addr_40b3e5_4:
        }
        return v4;
    } else {
        goto addr_40b3e5_4;
    }
}

int32_t x103 = 0;

int32_t y104 = 0;

/* std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*) */
uint32_t* _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(uint32_t* rdi);

/* int* std::__copy_move_backward_a2<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt23__copy_move_backward_a2ILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::copy_backward<int*, int*>(int*, int*, int*) */
uint32_t* _ZSt13copy_backwardIPiS0_ET0_T_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    uint32_t* rax10;
    uint32_t* rax11;
    int32_t r9d12;
    int32_t r10d13;
    uint32_t* rax14;
    uint32_t* rax15;

    eax4 = x103;
    ecx5 = y104;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v7), rax10 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v6), rax11 = _ZSt23__copy_move_backward_a2ILb0EPiS0_ET1_T0_S2_S1_(rax9, rax10, v8), r9d12 = x103, r10d13 = y104, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d12 * (r9d12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d13 < 10))) & 1)) {
            addr_40b2bf_4:
            rax14 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v7);
            rax15 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v6);
            _ZSt23__copy_move_backward_a2ILb0EPiS0_ET1_T0_S2_S1_(rax14, rax15, v8);
        }
        return rax11;
    } else {
        goto addr_40b2bf_4;
    }
}

int32_t x107 = 0;

int32_t y108 = 0;

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*() const */
uint32_t* _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv(uint32_t** rdi, uint32_t* rsi) {
    int32_t eax3;
    int32_t ecx4;
    uint32_t** v5;
    int32_t edx6;
    int32_t esi7;
    uint32_t* v8;

    eax3 = x107;
    ecx4 = y108;
    v5 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (edx6 = x107, esi7 = y108, v8 = *v5, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40b4b8_4:
        }
        return v8;
    } else {
        goto addr_40b4b8_4;
    }
}

int32_t x109 = 0;

int32_t y110 = 0;

/* std::vector<int, std::allocator<int> >::max_size() const */
uint64_t _ZNKSt6vectorIiSaIiEE8max_sizeEv(struct s0* rdi);

void fun_400e80(int64_t rdi);

/* unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&) */
uint64_t* _ZSt3maxImERKT_S2_S2_(uint64_t* rdi, uint64_t* rsi);

/* std::vector<int, std::allocator<int> >::_M_check_len(unsigned long, char const*) const */
uint64_t _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc(struct s0* rdi, uint64_t rsi, int64_t rdx) {
    void* rsp4;
    int32_t eax5;
    int32_t ecx6;
    uint64_t v7;
    struct s0* v8;
    int64_t v9;
    uint64_t* rcx10;
    uint64_t* rdi11;
    int64_t v12;
    uint64_t* v13;
    uint64_t* v14;
    struct s0* v15;
    uint64_t rax16;
    uint64_t rax17;
    int32_t ebx18;
    int32_t r14d19;
    int32_t eax20;
    int32_t ecx21;
    int32_t ecx22;
    int32_t edx23;
    int32_t eax24;
    int32_t ecx25;
    uint64_t rax26;
    uint64_t* rax27;
    uint64_t v28;
    uint64_t rax29;
    int32_t edx30;
    int32_t r8d31;
    int32_t eax32;
    int32_t ecx33;
    uint64_t rax34;
    int32_t ecx35;
    int32_t edx36;
    uint64_t v37;
    int32_t ecx38;
    int32_t edx39;
    uint64_t v40;
    int32_t eax41;
    int32_t ecx42;
    int32_t eax43;
    int32_t ecx44;
    uint64_t rax45;
    int32_t esi46;
    int32_t r8d47;
    int32_t eax48;
    int32_t ecx49;
    int32_t edx50;
    int32_t esi51;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xd8);
    eax5 = x109;
    ecx6 = y110;
    v7 = rsi;
    v8 = rdi;
    v9 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx6 < 10))) & 1)) {
        goto addr_40ba71_3;
    }
    while (rcx10 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rsp4) - 16 - 16), rdi11 = rcx10 - 2 - 2 - 2, v12 = v9, v13 = rdi11, v14 = rcx10, v15 = v8, rax16 = _ZNKSt6vectorIiSaIiEE8max_sizeEv(v8), rax17 = _ZNKSt6vectorIiSaIiEE4sizeEv(v15), rsp4 = reinterpret_cast<void*>(rdi11 - 1 + 1 - 1 + 1), ebx18 = x109, r14d19 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ebx18 * (ebx18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r14d19 < 10))) & 1)) {
        addr_40ba71_3:
        _ZNKSt6vectorIiSaIiEE8max_sizeEv(v8);
        _ZNKSt6vectorIiSaIiEE4sizeEv(v8);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 16 - 16 - 16 - 8 + 8 - 8 + 8);
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax16 - rax17 < v7)) & 1)) 
        goto addr_40b614_7;
    eax20 = x109;
    ecx21 = y110;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax20 * (eax20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx21 < 10))) & 1) {
        while (fun_400e80(v12), ecx22 = x109, edx23 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx22 * (ecx22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx23 < 10))) & 1)) {
            addr_40bad5_11:
            fun_400e80(v12);
        }
    } else {
        goto addr_40bad5_11;
    }
    addr_40b6ad_13:
    eax24 = x109;
    ecx25 = y110;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax24 * (eax24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx25 < 10))) & 1)) {
        goto addr_40bae6_15;
    }
    while (rax26 = _ZNKSt6vectorIiSaIiEE4sizeEv(v15), _ZNKSt6vectorIiSaIiEE4sizeEv(v15), rax27 = _ZSt3maxImERKT_S2_S2_(v13, v14), v28 = rax26 + *rax27, rax29 = _ZNKSt6vectorIiSaIiEE4sizeEv(v15), edx30 = x109, r8d31 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx30 * (edx30 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d31 < 10))) & 1)) {
        addr_40bae6_15:
        _ZNKSt6vectorIiSaIiEE4sizeEv(v15);
        _ZNKSt6vectorIiSaIiEE4sizeEv(v15);
        _ZSt3maxImERKT_S2_S2_(v13, v14);
        _ZNKSt6vectorIiSaIiEE4sizeEv(v15);
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(v28 < rax29)) & 1)) 
        goto addr_40b7a2_19;
    addr_40b871_20:
    eax32 = x109;
    ecx33 = y110;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax32 * (eax32 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx33 < 10))) & 1) {
        while (rax34 = _ZNKSt6vectorIiSaIiEE8max_sizeEv(v15), ecx35 = x109, edx36 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx35 * (ecx35 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx36 < 10))) & 1)) {
            addr_40bb4d_23:
            _ZNKSt6vectorIiSaIiEE8max_sizeEv(v15);
        }
        v37 = rax34;
    } else {
        goto addr_40bb4d_23;
    }
    addr_40b9c5_26:
    ecx38 = x109;
    edx39 = y110;
    v40 = v37;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx38 * (ecx38 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx39 < 10))) & 1) {
        while (eax41 = x109, ecx42 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax41 * (eax41 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx42 < 10))) & 1)) {
            addr_40bb67_29:
        }
        return v40;
    } else {
        goto addr_40bb67_29;
    }
    addr_40b7a2_19:
    eax43 = x109;
    ecx44 = y110;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax43 * (eax43 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx44 < 10))) & 1)) 
        goto addr_40b7e5_33;
    while (rax45 = _ZNKSt6vectorIiSaIiEE8max_sizeEv(v15), esi46 = x109, r8d47 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi46 * (esi46 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d47 < 10))) & 1)) {
        addr_40bb38_36:
        _ZNKSt6vectorIiSaIiEE8max_sizeEv(v15);
    }
    if (static_cast<unsigned char>(reinterpret_cast<uint1_t>(v28 > rax45)) & 1) 
        goto addr_40b871_20;
    eax48 = x109;
    ecx49 = y110;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax48 * (eax48 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx49 < 10))) & 1)) 
        goto addr_40b95a_40;
    while (edx50 = x109, esi51 = y110, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx50 * (edx50 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi51 < 10))) & 1)) {
        addr_40bb62_43:
    }
    v37 = v28;
    goto addr_40b9c5_26;
    addr_40b95a_40:
    goto addr_40bb62_43;
    addr_40b7e5_33:
    goto addr_40bb38_36;
    addr_40b614_7:
    goto addr_40b6ad_13;
}

int32_t x113 = 0;

int32_t y114 = 0;

/* std::vector<int, std::allocator<int> >::begin() */
int64_t _ZNSt6vectorIiSaIiEE5beginEv(struct s0* rdi, uint64_t rsi) {
    void* rsp3;
    int32_t eax4;
    int32_t ecx5;
    struct s0* v6;
    uint32_t** rax7;
    int32_t r8d8;
    int32_t r9d9;
    uint32_t** rax10;
    int64_t v11;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 24);
    eax4 = x113;
    ecx5 = y114;
    v6 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax7 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp3) - 16), _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(rax7, v6), rsp3 = reinterpret_cast<void*>(rax7 - 2 - 1 + 1), r8d8 = x113, r9d9 = y114, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d8 * (r8d8 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d9 < 10))) & 1)) {
            addr_40bd9f_4:
            rax10 = reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(rsp3) - 16);
            _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(rax10, v6);
            rsp3 = reinterpret_cast<void*>(rax10 - 2 - 1 + 1);
        }
        return v11;
    } else {
        goto addr_40bd9f_4;
    }
}

int32_t x111 = 0;

int32_t y112 = 0;

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > const&) */
uint64_t _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_(uint32_t** rdi, uint32_t** rsi) {
    int32_t eax3;
    int32_t ecx4;
    uint32_t** v5;
    uint32_t** v6;
    uint32_t** rax7;
    uint32_t* v8;
    uint32_t** rax9;
    int32_t r8d10;
    int32_t r9d11;
    uint64_t v12;

    eax3 = x111;
    ecx4 = y112;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax7 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v5), v8 = *rax7, rax9 = _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v6), r8d10 = x111, r9d11 = y112, v12 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v8) - reinterpret_cast<uint64_t>(*rax9)) >> 2), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d10 * (r8d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d11 < 10))) & 1)) {
            addr_40bc6e_4:
            _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v5);
            _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv(v6);
        }
        return v12;
    } else {
        goto addr_40bc6e_4;
    }
}

int32_t x115 = 0;

int32_t y116 = 0;

/* int* std::__uninitialized_copy_a<int*, int*, int>(int*, int*, int*, std::allocator<int>&) */
uint32_t* _ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx, struct s0* rcx);

/* int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&) */
uint32_t* _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx, struct s0* rcx) {
    int32_t eax5;
    int32_t r8d6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* v9;
    struct s0* v10;
    uint32_t* rax11;
    int32_t r11d12;
    int32_t ebx13;

    eax5 = x115;
    r8d6 = y116;
    v7 = rdx;
    v8 = rsi;
    v9 = rdi;
    v10 = rcx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d6 < 10))) & 1) {
        while (rax11 = _ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E(v9, v8, v7, v10), r11d12 = x115, ebx13 = y116, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d12 * (r11d12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx13 < 10))) & 1)) {
            addr_40beef_4:
            _ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E(v9, v8, v7, v10);
        }
        return rax11;
    } else {
        goto addr_40beef_4;
    }
}

int32_t x117 = 0;

int32_t y118 = 0;

/* __gnu_cxx::new_allocator<int>::destroy(int*) */
int64_t _ZN9__gnu_cxx13new_allocatorIiE7destroyEPi(int64_t rdi, int64_t rsi);

/* __gnu_cxx::__alloc_traits<std::allocator<int> >::destroy(std::allocator<int>&, int*) */
int64_t _ZN9__gnu_cxx14__alloc_traitsISaIiEE7destroyERS1_Pi(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int32_t ecx4;
    int64_t v5;
    int64_t v6;
    int64_t rax7;
    int32_t r8d8;
    int32_t r9d9;

    eax3 = x117;
    ecx4 = y118;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax7 = _ZN9__gnu_cxx13new_allocatorIiE7destroyEPi(v5, v6), r8d8 = x117, r9d9 = y118, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d8 * (r8d8 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d9 < 10))) & 1)) {
            addr_40c027_4:
            _ZN9__gnu_cxx13new_allocatorIiE7destroyEPi(v5, v6);
        }
        return rax7;
    } else {
        goto addr_40c027_4;
    }
}

int64_t __cxa_end_catch = 0x401016;

void fun_401010() {
    goto __cxa_end_catch;
}

int64_t __cxa_rethrow = 0x400ee6;

void fun_400ee0() {
    goto __cxa_rethrow;
}

int32_t x101 = 0;

int32_t y102 = 0;

/* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(int* const&) */
void _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_(uint32_t** rdi, struct s0* rsi) {
    int32_t eax3;
    int32_t ecx4;
    uint32_t** v5;
    struct s0* v6;
    int32_t edi7;
    int32_t r8d8;

    eax3 = x101;
    ecx4 = y102;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (*v5 = v6->f0, edi7 = x101, r8d8 = y102, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi7 * (edi7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d8 < 10))) & 1)) {
            addr_40b160_4:
            *v5 = v6->f0;
        }
        return;
    } else {
        goto addr_40b160_4;
    }
}

int32_t x137 = 0;

int32_t y138 = 0;

/* std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*) */
uint32_t* _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(uint32_t* rdi) {
    int32_t eax2;
    int32_t ecx3;
    uint32_t* v4;
    uint32_t* rax5;
    int32_t edx6;
    int32_t esi7;

    eax2 = x137;
    ecx3 = y138;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(v4), edx6 = x137, esi7 = y138, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40ccad_4:
            _ZNSt10_Iter_baseIPiLb0EE7_S_baseES0_(v4);
        }
        return rax5;
    } else {
        goto addr_40ccad_4;
    }
}

int32_t x147 = 0;

int32_t y148 = 0;

/* int* std::__copy_move_backward_a<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt22__copy_move_backward_aILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__copy_move_backward_a2<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt23__copy_move_backward_a2ILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t* rax12;
    int32_t r9d13;
    int32_t r10d14;
    uint32_t* rax15;
    uint32_t* rax16;
    uint32_t* rax17;

    eax4 = x147;
    ecx5 = y148;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v7), rax10 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v6), rax11 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v8), rax12 = _ZSt22__copy_move_backward_aILb0EPiS0_ET1_T0_S2_S1_(rax9, rax10, rax11), r9d13 = x147, r10d14 = y148, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d13 * (r9d13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d14 < 10))) & 1)) {
            addr_40d49c_4:
            rax15 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v7);
            rax16 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v6);
            rax17 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v8);
            _ZSt22__copy_move_backward_aILb0EPiS0_ET1_T0_S2_S1_(rax15, rax16, rax17);
        }
        return rax12;
    } else {
        goto addr_40d49c_4;
    }
}

int32_t x141 = 0;

int32_t y142 = 0;

/* __gnu_cxx::__alloc_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */
uint64_t _ZN9__gnu_cxx14__alloc_traitsISaIiEE8max_sizeERKS1_(struct s0* rdi);

/* std::vector<int, std::allocator<int> >::max_size() const */
uint64_t _ZNKSt6vectorIiSaIiEE8max_sizeEv(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    struct s0* rax5;
    uint64_t rax6;
    int32_t edx7;
    int32_t esi8;
    struct s0* rax9;

    eax2 = x141;
    ecx3 = y142;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v4), rax6 = _ZN9__gnu_cxx14__alloc_traitsISaIiEE8max_sizeERKS1_(rax5), edx7 = x141, esi8 = y142, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx7 * (edx7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi8 < 10))) & 1)) {
            addr_40cf08_4:
            rax9 = _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(v4);
            _ZN9__gnu_cxx14__alloc_traitsISaIiEE8max_sizeERKS1_(rax9);
        }
        return rax6;
    } else {
        goto addr_40cf08_4;
    }
}

/* std::__throw_length_error(char const*) */
int64_t _ZSt20__throw_length_errorPKc = 0x400e86;

void fun_400e80(int64_t rdi) {
    goto _ZSt20__throw_length_errorPKc;
}

int32_t x143 = 0;

int32_t y144 = 0;

/* unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&) */
uint64_t* _ZSt3maxImERKT_S2_S2_(uint64_t* rdi, uint64_t* rsi) {
    int32_t eax3;
    int32_t ecx4;
    uint64_t* v5;
    uint64_t* v6;
    uint64_t* v7;
    uint64_t* v8;
    unsigned char r10b9;
    int32_t r11d10;
    int32_t ebx11;
    int32_t eax12;
    int32_t ecx13;
    uint64_t* v14;
    int32_t esi15;
    int32_t edi16;
    int32_t eax17;
    int32_t ecx18;
    int32_t ecx19;
    int32_t edx20;
    int32_t eax21;
    int32_t ecx22;
    int32_t esi23;
    int32_t edi24;

    eax3 = x143;
    ecx4 = y144;
    v5 = rdi;
    v6 = rsi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1)) {
        goto addr_40d221_3;
    }
    while (v7 = v5, v8 = v6, r10b9 = reinterpret_cast<uint1_t>(*v7 < *v8), r11d10 = x143, ebx11 = y144, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d10 * (r11d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx11 < 10))) & 1)) {
        addr_40d221_3:
    }
    if (!(r10b9 & 1)) 
        goto addr_40d03c_7;
    eax12 = x143;
    ecx13 = y144;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax12 * (eax12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx13 < 10))) & 1) {
        while (v14 = v8, esi15 = x143, edi16 = y144, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi15 * (esi15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi16 < 10))) & 1)) {
            addr_40d252_11:
        }
    } else {
        goto addr_40d252_11;
    }
    addr_40d17d_14:
    eax17 = x143;
    ecx18 = y144;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax17 * (eax17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx18 < 10))) & 1) {
        while (ecx19 = x143, edx20 = y144, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx19 * (ecx19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx20 < 10))) & 1)) {
            addr_40d278_17:
        }
        return v14;
    } else {
        goto addr_40d278_17;
    }
    addr_40d03c_7:
    eax21 = x143;
    ecx22 = y144;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax21 * (eax21 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx22 < 10))) & 1)) 
        goto addr_40d11d_21;
    while (v14 = v7, esi23 = x143, edi24 = y144, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi23 * (esi23 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi24 < 10))) & 1)) {
        addr_40d265_24:
    }
    goto addr_40d17d_14;
    addr_40d11d_21:
    goto addr_40d265_24;
}

int32_t x127 = 0;

int32_t y128 = 0;

/* int* std::uninitialized_copy<int*, int*>(int*, int*, int*) */
uint32_t* _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__uninitialized_copy_a<int*, int*, int>(int*, int*, int*, std::allocator<int>&) */
uint32_t* _ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx, struct s0* rcx) {
    int32_t eax5;
    int32_t r8d6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* v9;
    uint32_t* rax10;
    int32_t r11d11;
    int32_t ebx12;

    eax5 = x127;
    r8d6 = y128;
    v7 = rdx;
    v8 = rsi;
    v9 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d6 < 10))) & 1) {
        while (rax10 = _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_(v9, v8, v7), r11d11 = x127, ebx12 = y128, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r11d11 * (r11d11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ebx12 < 10))) & 1)) {
            addr_40c5a9_4:
            _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_(v9, v8, v7);
        }
        return rax10;
    } else {
        goto addr_40c5a9_4;
    }
}

int32_t x125 = 0;

int32_t y126 = 0;

/* __gnu_cxx::new_allocator<int>::destroy(int*) */
int64_t _ZN9__gnu_cxx13new_allocatorIiE7destroyEPi(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int32_t ecx4;
    int64_t v5;
    int32_t esi6;
    int32_t edi7;

    eax3 = x125;
    ecx4 = y126;
    v5 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (esi6 = x125, edi7 = y126, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi6 * (esi6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi7 < 10))) & 1)) {
            addr_40c462_4:
        }
        return v5;
    } else {
        goto addr_40c462_4;
    }
}

int32_t x121 = 0;

int32_t y122 = 0;

/* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */
uint32_t* _ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_(uint32_t* rdi, uint32_t* rsi);

/* void std::_Destroy<int*>(int*, int*) */
uint32_t* _ZSt8_DestroyIPiEvT_S1_(uint32_t* rdi, uint32_t* rsi) {
    int32_t eax3;
    int32_t ecx4;
    uint32_t* v5;
    uint32_t* v6;
    uint32_t* rax7;
    int32_t r8d8;
    int32_t r9d9;

    eax3 = x121;
    ecx4 = y122;
    v5 = rdi;
    v6 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax7 = _ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_(v5, v6), r8d8 = x121, r9d9 = y122, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d8 * (r8d8 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d9 < 10))) & 1)) {
            addr_40c274_4:
            _ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_(v5, v6);
        }
        return rax7;
    } else {
        goto addr_40c274_4;
    }
}

int32_t x123 = 0;

int32_t y124 = 0;

/* void std::_Destroy_aux<true>::__destroy<int*>(int*, int*) */
uint32_t* _ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_(uint32_t* rdi, uint32_t* rsi) {
    int32_t eax3;
    int32_t ecx4;
    uint32_t* v5;
    int32_t esi6;
    int32_t edi7;

    eax3 = x123;
    ecx4 = y124;
    v5 = rsi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (esi6 = x123, edi7 = y124, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi6 * (esi6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi7 < 10))) & 1)) {
            addr_40c372_4:
        }
        return v5;
    } else {
        goto addr_40c372_4;
    }
}

int32_t x129 = 0;

int32_t y130 = 0;

/* int* std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(int*, int*, int*) */
uint32_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::uninitialized_copy<int*, int*>(int*, int*, int*) */
uint32_t* _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r9d10;
    int32_t r10d11;

    eax4 = x129;
    ecx5 = y130;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_(v7, v6, v8), r9d10 = x129, r10d11 = y130, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d10 * (r9d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d11 < 10))) & 1)) {
            addr_40c70a_4:
            _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_40c70a_4;
    }
}

int32_t x131 = 0;

int32_t y132 = 0;

/* int* std::copy<int*, int*>(int*, int*, int*) */
uint32_t* _ZSt4copyIPiS0_ET0_T_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(int*, int*, int*) */
uint32_t* _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r9d10;
    int32_t r10d11;

    eax4 = x131;
    ecx5 = y132;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt4copyIPiS0_ET0_T_S2_S1_(v7, v6, v8), r9d10 = x131, r10d11 = y132, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d10 * (r9d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d11 < 10))) & 1)) {
            addr_40c85a_4:
            _ZSt4copyIPiS0_ET0_T_S2_S1_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_40c85a_4;
    }
}

int32_t x133 = 0;

int32_t y134 = 0;

/* int* std::__copy_move_a2<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::copy<int*, int*>(int*, int*, int*) */
uint32_t* _ZSt4copyIPiS0_ET0_T_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    uint32_t* rax10;
    uint32_t* rax11;
    int32_t r9d12;
    int32_t r10d13;
    uint32_t* rax14;
    uint32_t* rax15;

    eax4 = x133;
    ecx5 = y134;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v7), rax10 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v6), rax11 = _ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_(rax9, rax10, v8), r9d12 = x133, r10d13 = y134, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d12 * (r9d12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d13 < 10))) & 1)) {
            addr_40c9cf_4:
            rax14 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v7);
            rax15 = _ZSt12__miter_baseIPiENSt11_Miter_baseIT_E13iterator_typeES2_(v6);
            _ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_(rax14, rax15, v8);
        }
        return rax11;
    } else {
        goto addr_40c9cf_4;
    }
}

int32_t x135 = 0;

int32_t y136 = 0;

/* int* std::__copy_move_a<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__copy_move_a2<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t* rax12;
    int32_t r9d13;
    int32_t r10d14;
    uint32_t* rax15;
    uint32_t* rax16;
    uint32_t* rax17;

    eax4 = x135;
    ecx5 = y136;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v7), rax10 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v6), rax11 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v8), rax12 = _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_(rax9, rax10, rax11), r9d13 = x135, r10d14 = y136, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d13 * (r9d13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d14 < 10))) & 1)) {
            addr_40cb6c_4:
            rax15 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v7);
            rax16 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v6);
            rax17 = _ZSt12__niter_baseIPiENSt11_Niter_baseIT_E13iterator_typeES2_(v8);
            _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_(rax15, rax16, rax17);
        }
        return rax12;
    } else {
        goto addr_40cb6c_4;
    }
}

int32_t x139 = 0;

int32_t y140 = 0;

/* int* std::__copy_move_a<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r10d10;
    int32_t r11d11;

    eax4 = x139;
    ecx5 = y140;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(v7, v6, v8), r10d10 = x139, r11d11 = y140, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r10d10 * (r10d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d11 < 10))) & 1)) {
            addr_40cddc_4:
            _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_40cddc_4;
    }
}

int32_t x145 = 0;

int32_t y146 = 0;

/* __gnu_cxx::__alloc_traits<std::allocator<int> >::max_size(std::allocator<int> const&) */
uint64_t _ZN9__gnu_cxx14__alloc_traitsISaIiEE8max_sizeERKS1_(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    uint64_t rax5;
    int32_t edx6;
    int32_t esi7;

    eax2 = x145;
    ecx3 = y146;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(v4), edx6 = x145, esi7 = y146, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40d340_4:
            _ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv(v4);
        }
        return rax5;
    } else {
        goto addr_40d340_4;
    }
}

int32_t x149 = 0;

int32_t y150 = 0;

/* int* std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*) */
uint32_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIiEEPT_PKS3_S6_S4_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx);

/* int* std::__copy_move_backward_a<false, int*, int*>(int*, int*, int*) */
uint32_t* _ZSt22__copy_move_backward_aILb0EPiS0_ET1_T0_S2_S1_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* rax9;
    int32_t r10d10;
    int32_t r11d11;

    eax4 = x149;
    ecx5 = y150;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1) {
        while (rax9 = _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIiEEPT_PKS3_S6_S4_(v7, v6, v8), r10d10 = x149, r11d11 = y150, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r10d10 * (r10d10 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d11 < 10))) & 1)) {
            addr_40d62c_4:
            _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIiEEPT_PKS3_S6_S4_(v7, v6, v8);
        }
        return rax9;
    } else {
        goto addr_40d62c_4;
    }
}

int32_t x151 = 0;

int32_t y152 = 0;

/* int* std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*) */
uint32_t* _ZNSt20__copy_move_backwardILb0ELb1ESt26random_access_iterator_tagE13__copy_move_bIiEEPT_PKS3_S6_S4_(uint32_t* rdi, uint32_t* rsi, uint32_t* rdx) {
    int32_t eax4;
    int32_t ecx5;
    uint32_t* v6;
    uint32_t* v7;
    uint32_t* v8;
    uint32_t* v9;
    uint32_t* v10;
    uint64_t v11;
    int32_t ebx12;
    int32_t r14d13;
    int32_t eax14;
    int32_t ecx15;
    int32_t eax16;
    int32_t r10d17;
    int32_t eax18;
    int32_t ecx19;
    int32_t eax20;
    int32_t r8d21;

    eax4 = x151;
    ecx5 = y152;
    v6 = rsi;
    v7 = rdi;
    v8 = rdx;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax4 * (eax4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx5 < 10))) & 1)) {
        goto addr_40d933_3;
    }
    while (v9 = v7, v10 = v8, v11 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(reinterpret_cast<uint64_t>(v6) - reinterpret_cast<uint64_t>(v9)) >> 2), ebx12 = x151, r14d13 = y152, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ebx12 * (ebx12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r14d13 < 10))) & 1)) {
        addr_40d933_3:
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!v11)) & 1)) 
        goto addr_40d7b0_7;
    eax14 = x151;
    ecx15 = y152;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax14 * (eax14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx15 < 10))) & 1) {
        while (fun_400fd0(reinterpret_cast<uint64_t>(v10) + (-v11 << 2), v9, v11 << 2), eax16 = x151, r10d17 = y152, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax16 * (eax16 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10d17 < 10))) & 1)) {
            addr_40d985_11:
            fun_400fd0(reinterpret_cast<uint64_t>(v10) + (-v11 << 2), v9, v11 << 2);
        }
    } else {
        goto addr_40d985_11;
    }
    addr_40d878_14:
    eax18 = x151;
    ecx19 = y152;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax18 * (eax18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx19 < 10))) & 1) {
        while (eax20 = x151, r8d21 = y152, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax20 * (eax20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d21 < 10))) & 1)) {
            addr_40d9c2_17:
        }
        return reinterpret_cast<uint64_t>(v10) + (-v11 << 2);
    } else {
        goto addr_40d9c2_17;
    }
    addr_40d7b0_7:
    goto addr_40d878_14;
}

int32_t x157 = 0;

int32_t y158 = 0;

/* std::allocator<int>::allocator() */
void* _ZNSaIiEC2Ev(struct s0* rdi);

/* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl() */
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2Ev(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    int32_t esi5;
    int32_t r8d6;

    eax2 = x157;
    ecx3 = y158;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (_ZNSaIiEC2Ev(v4), v4->f0 = reinterpret_cast<uint32_t*>(0), v4->f8 = reinterpret_cast<uint32_t*>(0), v4->f10 = reinterpret_cast<uint32_t*>(0), esi5 = x157, r8d6 = y158, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(esi5 * (esi5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d6 < 10))) & 1)) {
            addr_40de1c_4:
            _ZNSaIiEC2Ev(v4);
            v4->f0 = reinterpret_cast<uint32_t*>(0);
            v4->f8 = reinterpret_cast<uint32_t*>(0);
            v4->f10 = reinterpret_cast<uint32_t*>(0);
        }
        return;
    } else {
        goto addr_40de1c_4;
    }
}

int32_t x159 = 0;

int32_t y160 = 0;

/* __gnu_cxx::new_allocator<int>::new_allocator() */
void* _ZN9__gnu_cxx13new_allocatorIiEC2Ev(struct s0* rdi);

/* std::allocator<int>::allocator() */
void* _ZNSaIiEC2Ev(struct s0* rdi) {
    int32_t eax2;
    int32_t ecx3;
    struct s0* v4;
    void* rax5;
    int32_t edx6;
    int32_t esi7;

    eax2 = x159;
    ecx3 = y160;
    v4 = rdi;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax2 * (eax2 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx3 < 10))) & 1) {
        while (rax5 = _ZN9__gnu_cxx13new_allocatorIiEC2Ev(v4), edx6 = x159, esi7 = y160, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40df18_4:
            _ZN9__gnu_cxx13new_allocatorIiEC2Ev(v4);
        }
        return rax5;
    } else {
        goto addr_40df18_4;
    }
}

int32_t x161 = 0;

int32_t y162 = 0;

/* __gnu_cxx::new_allocator<int>::new_allocator() */
void* _ZN9__gnu_cxx13new_allocatorIiEC2Ev(struct s0* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t ecx4;
    void* rax5;
    int32_t edx6;
    int32_t esi7;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    eax3 = x161;
    ecx4 = y162;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1) {
        while (rax5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 16), rsp2 = rax5, edx6 = x161, esi7 = y162, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx6 * (edx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi7 < 10))) & 1)) {
            addr_40dfea_4:
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 16);
        }
        return rax5;
    } else {
        goto addr_40dfea_4;
    }
}

int64_t fun_400ef0(void* rdi);

void fun_400ea0();

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
uint32_t* _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_(uint32_t* rdi, int64_t rsi, void* rdx, int64_t rcx);

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*) */
uint32_t* _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_(uint32_t* rdi, uint32_t* rsi, int64_t rdx, int64_t rcx);

int64_t fun_400fe0(int64_t rdi, void* rsi, int64_t rdx, int64_t rcx);

/* reward_strength(std::string) */
void _Z15reward_strengthSs(void* rdi, uint32_t* rsi, void* rdx) {
    void* rbp4;
    int64_t rax5;
    int64_t rcx6;
    uint32_t* rdi7;
    uint32_t* rdi8;
    uint32_t* rdi9;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax5 = fun_400ef0(rdi);
    rcx6 = rax5 - 1;
    fun_400ea0();
    _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff0, "\n[+] A great success! Here is a flag{", reinterpret_cast<int64_t>(rbp4) - 24, rcx6);
    _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff8, reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff0, "}\n", rcx6);
    fun_400fe0(0x6101e0, reinterpret_cast<int64_t>(rbp4) - 8, "}\n", rcx6);
    rdi7 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff8);
    fun_400f80(rdi7, rdi7);
    rdi8 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + 0xfffffffffffffff0);
    fun_400f80(rdi8, rdi8);
    rdi9 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + 0xffffffffffffffe8);
    fun_400f80(rdi9, rdi9);
    return;
}

/* std::string::size() const */
int64_t _ZNKSs4sizeEv = 0x400ef6;

int64_t fun_400ef0(void* rdi) {
    goto _ZNKSs4sizeEv;
}

/* std::string::substr(unsigned long, unsigned long) const */
int64_t _ZNKSs6substrEmm = 0x400ea6;

void fun_400ea0() {
    goto _ZNKSs6substrEmm;
}

/* std::char_traits<char>::length(char const*) */
int64_t _ZNSt11char_traitsIcE6lengthEPKc(int64_t rdi);

void fun_400e90(uint32_t* rdi);

void fun_400ed0(uint32_t* rdi, int64_t rsi);

int64_t fun_400e70(uint32_t* rdi, int64_t rsi, int64_t rdx);

int64_t fun_401080(uint32_t* rdi, void* rsi, int64_t rdx);

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(char const*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
uint32_t* _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_EPKS3_RKS6_(uint32_t* rdi, int64_t rsi, void* rdx, int64_t rcx) {
    int64_t rax5;
    int64_t rax6;

    rax5 = _ZNSt11char_traitsIcE6lengthEPKc(rsi);
    fun_400e90(rdi);
    rax6 = fun_400ef0(rdx);
    fun_400ed0(rdi, rax5 + rax6);
    fun_400e70(rdi, rsi, rax5);
    fun_401080(rdi, rdx, rax5);
    if (!1) {
        fun_400f80(rdi, rdi);
    }
    return rdi;
}

int64_t __libc_start_main = 0x400f16;

void fun_400f10(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

int64_t fgets = 0x400f46;

int64_t fun_400f40(void* rdi, int64_t rsi, int64_t rdx) {
    goto fgets;
}

int32_t __cxx_global_var_init() {
    uint32_t* rsi1;
    int64_t rdx2;
    int32_t eax3;

    fun_400f00(0x610314, rsi1, rdx2);
    eax3 = fun_400f30(_ZNSt8ios_base4InitD1Ev, 0x610314, 0x610130);
    return eax3;
}

/* std::string::append(std::string const&) */
int64_t _ZNSs6appendERKSs = 0x401086;

int64_t fun_401080(uint32_t* rdi, void* rsi, int64_t rdx) {
    goto _ZNSs6appendERKSs;
}

int64_t strlen = 0x400f96;

int64_t fun_400f90(int64_t rdi) {
    goto strlen;
}

/* std::allocator<char>::allocator() */
int64_t _ZNSaIcEC1Ev = 0x401046;

void fun_401040(void* rdi, int64_t rsi, int64_t rdx) {
    goto _ZNSaIcEC1Ev;
}

/* std::string::reserve(unsigned long) */
int64_t _ZNSs7reserveEm = 0x400ed6;

void fun_400ed0(uint32_t* rdi, int64_t rsi) {
    goto _ZNSs7reserveEm;
}

/* std::basic_ostream<char, std::char_traits<char> >& std::operator<< <char, std::char_traits<char>, std::allocator<char> >(std::basic_ostream<char, std::char_traits<char> >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */
int64_t _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E = 0x400fe6;

int64_t fun_400fe0(int64_t rdi, void* rsi, int64_t rdx, int64_t rcx) {
    goto _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E;
}

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string() */
int64_t _ZNSsC1Ev = 0x400e96;

void fun_400e90(uint32_t* rdi) {
    goto _ZNSsC1Ev;
}

/* std::char_traits<char>::length(char const*) */
int64_t _ZNSt11char_traitsIcE6lengthEPKc(int64_t rdi) {
    int64_t rax2;

    rax2 = fun_400f90(rdi);
    return rax2;
}

int64_t fun_401000(uint32_t* rdi, int64_t rsi);

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> > std::operator+<char, std::char_traits<char>, std::allocator<char> >(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*) */
uint32_t* _ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_(uint32_t* rdi, uint32_t* rsi, int64_t rdx, int64_t rcx) {
    fun_400f20(rdi, rsi);
    fun_401000(rdi, rdx);
    if (!1) {
        fun_400f80(rdi, rdi);
    }
    return rdi;
}

/* std::string::append(char const*) */
int64_t _ZNSs6appendEPKc = 0x401006;

int64_t fun_401000(uint32_t* rdi, int64_t rsi) {
    goto _ZNSs6appendEPKc;
}

/* std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(char const*, std::allocator<char> const&) */
int64_t _ZNSsC1EPKcRKSaIcE = 0x400fa6;

void fun_400fa0(void* rdi, void* rsi, void* rdx) {
    goto _ZNSsC1EPKcRKSaIcE;
}

/* std::allocator<char>::~allocator() */
int64_t _ZNSaIcED1Ev = 0x400ff6;

void fun_400ff0(void* rdi, void* rsi, void* rdx) {
    goto _ZNSaIcED1Ev;
}

/* std::string::append(char const*, unsigned long) */
int64_t _ZNSs6appendEPKcm = 0x400e76;

int64_t fun_400e70(uint32_t* rdi, int64_t rsi, int64_t rdx) {
    goto _ZNSs6appendEPKcm;
}

int32_t x25 = 0;

int32_t y26 = 0;

/* start_quest(std::string) */
uint32_t _Z11start_questSs(uint32_t* rdi, uint32_t* rsi, void* rdx) {
    void* rsp4;
    int32_t eax5;
    int32_t ecx6;
    uint32_t* v7;
    uint32_t* rcx8;
    uint32_t* v9;
    uint64_t rax10;
    int32_t r9d11;
    int32_t r9d12;
    int32_t r11d13;
    int32_t eax14;
    int32_t ecx15;
    int32_t eax16;
    uint32_t v17;
    int32_t eax18;
    int32_t edx19;
    int32_t eax20;
    int32_t ecx21;
    int32_t ecx22;
    int32_t edx23;
    int32_t eax24;
    int32_t ecx25;
    int32_t eax26;
    int32_t ecx27;
    uint32_t eax28;
    uint32_t v29;
    int32_t eax30;
    int32_t ecx31;
    int32_t ecx32;
    int32_t edx33;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 0x78);
    eax5 = x25;
    ecx6 = y26;
    v7 = rdi;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax5 * (eax5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx6 < 10))) & 1)) {
        goto addr_404c13_3;
    }
    while (rcx8 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint64_t>(rsp4) + 0xfffffffffffffff0 + 0xfffffffffffffff0), v9 = rcx8, _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, "d"), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610140), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610144), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610148), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61014c), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610150), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610154), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610158), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61015c), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610160), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610164), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610168), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61016c), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610170), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610174), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610178), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61017c), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610180), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610184), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610188), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61018c), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610190), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610194), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610198), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, " \t"), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, "l\t"), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x6101a4), _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x6101a8), rax10 = fun_400f50(v7, 0x6101a8), rsp4 = reinterpret_cast<void*>(rcx8 + 0xfffffffffffffffc + 0xfffffffffffffffc - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2), r9d11 = legend, r9d12 = x25, r11d13 = y26, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r9d12 * (r9d12 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11d13 < 10))) & 1)) {
        addr_404c13_3:
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, "d", 0x6102f8, "d");
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610140, 0x6102f8, 0x610140);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610144, 0x6102f8, 0x610144);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610148, 0x6102f8, 0x610148);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61014c, 0x6102f8, 0x61014c);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610150, 0x6102f8, 0x610150);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610154, 0x6102f8, 0x610154);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610158, 0x6102f8, 0x610158);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61015c, 0x6102f8, 0x61015c);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610160, 0x6102f8, 0x610160);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610164, 0x6102f8, 0x610164);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610168, 0x6102f8, 0x610168);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61016c, 0x6102f8, 0x61016c);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610170, 0x6102f8, 0x610170);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610174, 0x6102f8, 0x610174);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610178, 0x6102f8, 0x610178);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61017c, 0x6102f8, 0x61017c);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610180, 0x6102f8, 0x610180);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610184, 0x6102f8, 0x610184);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610188, 0x6102f8, 0x610188);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x61018c, 0x6102f8, 0x61018c);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610190, 0x6102f8, 0x610190);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610194, 0x6102f8, 0x610194);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x610198, 0x6102f8, 0x610198);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, " \t", 0x6102f8, " \t");
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, "l\t", 0x6102f8, "l\t");
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x6101a4, 0x6102f8, 0x6101a4);
        _ZNSt6vectorIiSaIiEE9push_backERKi(0x6102f8, 0x6101a8, 0x6102f8, 0x6101a8);
        fun_400f50(v7, 0x6101a8, v7, 0x6101a8);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp4) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    }
    if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax10 - 1 != static_cast<int64_t>(r9d11 >> 2))) & 1)) 
        goto addr_404718_7;
    eax14 = x25;
    ecx15 = y26;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax14 * (eax14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx15 < 10))) & 1) {
        while (eax16 = legend, v17 = reinterpret_cast<uint32_t>(eax16 >> 2), eax18 = x25, edx19 = y26, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax18 * (eax18 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx19 < 10))) & 1)) {
            addr_404ee4_11:
        }
    } else {
        goto addr_404ee4_11;
    }
    addr_404a37_14:
    eax20 = x25;
    ecx21 = y26;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax20 * (eax20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx21 < 10))) & 1) {
        while (ecx22 = x25, edx23 = y26, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx22 * (ecx22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx23 < 10))) & 1)) {
            addr_404f3d_17:
        }
        return v17;
    } else {
        goto addr_404f3d_17;
    }
    addr_404718_7:
    eax24 = x25;
    ecx25 = y26;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax24 * (eax24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx25 < 10))) & 1)) 
        goto addr_4047f6_21;
    while (fun_400f20(v9, v7, v9, v7), eax26 = x25, ecx27 = y26, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax26 * (eax26 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx27 < 10))) & 1)) {
        addr_404ef9_24:
        fun_400f20(v9, v7, v9, v7);
    }
    eax28 = _Z14sanitize_inputSs(v9, v7);
    v29 = eax28;
    eax30 = x25;
    ecx31 = y26;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax30 * (eax30 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx31 < 10))) & 1)) 
        goto addr_40489a_27;
    while (v17 = v29, fun_400f80(v9), ecx32 = x25, edx33 = y26, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx32 * (ecx32 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx33 < 10))) & 1)) {
        addr_404f0b_30:
        fun_400f80(v9, v9);
    }
    goto addr_404a37_14;
    addr_40489a_27:
    goto addr_404f0b_30;
    addr_4047f6_21:
    goto addr_404ef9_24;
}

void fun_402eeb() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t esi6;
    int32_t eax7;
    int32_t ecx8;
    struct s0* rdi9;
    int64_t rbp10;
    int32_t eax11;
    int32_t ecx12;
    int32_t eax13;
    int32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    int32_t eax17;
    int32_t ecx18;
    int32_t ecx19;
    int64_t rdx20;
    int64_t rbp21;
    int64_t rbp22;
    int32_t eax23;
    int32_t ecx24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rax27;
    int32_t ecx28;
    int32_t esi29;
    int64_t rbp30;
    int64_t rbp31;
    int32_t eax32;
    int32_t ecx33;
    int32_t eax34;
    int32_t ecx35;
    int32_t eax36;
    int32_t ecx37;
    int32_t eax38;
    int32_t ecx39;
    int64_t rbp40;
    int64_t rbp41;
    int32_t eax42;
    int32_t ecx43;

    **reinterpret_cast<int64_t**>(rbp1 - 64) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0x70) = eax4;
    ecx5 = x17;
    esi6 = y18;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1) {
        eax7 = x17;
        ecx8 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax7 * (eax7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx8 < 10))) & 1) 
            goto addr_403a38_4;
        goto addr_404121_6;
    }
    addr_403b0c_9:
    rdi9 = *reinterpret_cast<struct s0**>(rbp10 - 80);
    _ZNSt6vectorIiSaIiEED2Ev(rdi9, rdi9);
    eax11 = x17;
    ecx12 = y18;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1) {
        while (eax13 = x17, ecx14 = y18, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) {
            addr_404126_13:
        }
        eax15 = x17;
        ecx16 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax15 * (eax15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx16 < 10))) & 1) 
            goto addr_403be8_16;
        goto addr_40412b_18;
    } else {
        goto addr_404126_13;
    }
    addr_4041f9_20:
    while (1) {
        eax17 = x3;
        ecx18 = y4;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax17 * (eax17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx18 < 10))) & 1) {
            addr_403be8_16:
            ecx19 = x17;
            *reinterpret_cast<int32_t*>(&rdx20) = y18;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = 0;
            *reinterpret_cast<int64_t*>(rbp21 - 0x148) = **reinterpret_cast<int64_t**>(rbp22 - 64);
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx19 * (ecx19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdx20) < 10))) & 1) 
                break;
            addr_40412b_18:
            eax23 = x3;
            ecx24 = y4;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax23 * (eax23 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx24 < 10))) & 1) 
                continue;
        }
    }
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x148);
    rax27 = fun_401070(rdi25);
    ecx28 = x17;
    esi29 = y18;
    *reinterpret_cast<int64_t*>(rbp30 - 0x150) = rdx20;
    *reinterpret_cast<int64_t*>(rbp31 - 0x158) = rax27;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx28 * (ecx28 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi29 < 10))) & 1) {
        eax32 = x3;
        ecx33 = y4;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax32 * (eax32 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx33 < 10))) & 1) {
        }
    }
    eax34 = x3;
    ecx35 = y4;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax34 * (eax34 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx35 < 10))) & 1) 
        goto addr_4041f9_20;
    while (1) {
        eax36 = x17;
        ecx37 = y18;
        eax38 = x3;
        ecx39 = y4;
        *reinterpret_cast<unsigned char*>(rbp40 - 0x13d) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax36 * (eax36 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx37 < 10)));
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax38 * (eax38 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx39 < 10))) & 1) {
            if (*reinterpret_cast<unsigned char*>(rbp41 - 0x13d) & 1) 
                goto addr_403b0c_9;
            addr_404121_6:
            addr_403a38_4:
            eax42 = x3;
            ecx43 = y4;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax42 * (eax42 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx43 < 10))) & 1) 
                continue;
        }
    }
}

void fun_402f99() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t esi6;
    struct s0* rdi7;
    int64_t rbp8;
    int32_t eax9;
    int32_t ecx10;
    int32_t eax11;
    int32_t ecx12;
    int32_t eax13;
    int32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    int64_t rbp17;
    int64_t rbp18;
    int32_t eax19;
    int32_t ecx20;

    **reinterpret_cast<int64_t**>(rbp1 - 64) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0x70) = eax4;
    ecx5 = x17;
    esi6 = y18;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1) {
        rdi7 = *reinterpret_cast<struct s0**>(rbp8 - 0x80);
        _ZNSt6vectorIiSaIiEED2Ev(rdi7, rdi7);
        eax9 = x17;
        ecx10 = y18;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1) 
            goto addr_40303e_4;
        goto addr_404024_6;
    }
    eax11 = x3;
    ecx12 = y4;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1)) 
        goto addr_403fc4_9;
    addr_403fc4_9:
    addr_403112_12:
    goto 0x4039f5;
    while (1) {
        eax13 = x17;
        ecx14 = y18;
        eax15 = x3;
        ecx16 = y4;
        *reinterpret_cast<unsigned char*>(rbp17 - 0x129) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10)));
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax15 * (eax15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx16 < 10))) & 1) {
            if (*reinterpret_cast<unsigned char*>(rbp18 - 0x129) & 1) 
                goto addr_403112_12;
            addr_404024_6:
            addr_40303e_4:
            eax19 = x3;
            ecx20 = y4;
            if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax19 * (eax19 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx20 < 10))) & 1) 
                continue;
        }
    }
}

void fun_403cdf() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;
    int32_t ecx4;
    int32_t edx5;
    int32_t ecx6;
    int32_t edx7;
    int64_t rbp8;
    int64_t rbp9;

    *reinterpret_cast<int32_t*>(rbp1 - 0x15c) = eax2;
    __clang_call_terminate(rax3);
    ecx4 = x17;
    edx5 = y18;
    ecx6 = x3;
    edx7 = y4;
    *reinterpret_cast<unsigned char*>(rbp8 - 0x15d) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx4 * (ecx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx5 < 10)));
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx6 * (ecx6 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx7 < 10))) & 1) {
        if (*reinterpret_cast<unsigned char*>(rbp9 - 0x15d) & 1) 
            goto 0x403d84;
        goto 0x4041b6;
    } else {
        goto 0x4042d9;
    }
}

void fun_403f72() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 64) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0x70) = eax4;
}

void fun_403fcb() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t esi6;

    **reinterpret_cast<int64_t**>(rbp1 - 64) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0x70) = eax4;
    ecx5 = x3;
    esi6 = y4;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
        goto 0x40430a;
    }
}

void fun_4041fb() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;
    int32_t ecx4;
    int32_t edx5;

    *reinterpret_cast<int32_t*>(rbp1 - 0x16c) = eax2;
    __clang_call_terminate(rax3);
    ecx4 = x3;
    edx5 = y4;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx4 * (ecx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx5 < 10))) & 1) {
        goto 0x403c9a;
    } else {
        goto 0x40432a;
    }
}

void fun_4042db() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x170) = eax2;
    __clang_call_terminate(rax3);
    goto 0x403cdd;
}

void fun_40430c() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 64) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0x70) = eax4;
    goto 0x403fc9;
}

void fun_40432c() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x174) = eax2;
    __clang_call_terminate(rax3);
    goto 0x4041f9;
}

void fun_40494a() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t esi6;
    uint32_t* rdi7;
    int64_t rbp8;
    int32_t eax9;
    int32_t ecx10;
    int32_t eax11;
    int32_t ecx12;
    int32_t eax13;
    int32_t ecx14;
    int32_t ecx15;
    int64_t rdx16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rax21;
    int32_t ecx22;
    int32_t esi23;
    int64_t rbp24;
    int64_t rbp25;

    **reinterpret_cast<int64_t**>(rbp1 - 48) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 40) = eax4;
    ecx5 = x25;
    esi6 = y26;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
    }
    rdi7 = *reinterpret_cast<uint32_t**>(rbp8 - 64);
    fun_400f80(rdi7);
    eax9 = x25;
    ecx10 = y26;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1)) 
        goto addr_4049ea_6;
    while (eax11 = x25, ecx12 = y26, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1)) {
        addr_404f38_9:
    }
    eax13 = x25;
    ecx14 = y26;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) 
        goto addr_404b14_12;
    while (ecx15 = x25, *reinterpret_cast<int32_t*>(&rdx16) = y26, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0, *reinterpret_cast<int64_t*>(rbp17 - 0x68) = **reinterpret_cast<int64_t**>(rbp18 - 48), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx15 * (ecx15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdx16) < 10))) & 1)) {
        addr_404f42_15:
    }
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    rax21 = fun_401070(rdi19);
    ecx22 = x25;
    esi23 = y26;
    *reinterpret_cast<int64_t*>(rbp24 - 0x70) = rdx16;
    *reinterpret_cast<int64_t*>(rbp25 - 0x78) = rax21;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx22 * (ecx22 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi23 < 10))) & 1)) 
        goto addr_404bba_17;
    addr_404bba_17:
    addr_404b14_12:
    goto addr_404f42_15;
    addr_4049ea_6:
    goto addr_404f38_9;
}

void fun_404bc1() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;
    int32_t ecx4;
    int32_t edx5;

    *reinterpret_cast<int32_t*>(rbp1 - 0x7c) = eax2;
    __clang_call_terminate(rax3);
    ecx4 = x25;
    edx5 = y26;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx4 * (ecx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx5 < 10))) & 1) 
        goto 0x404c13;
    goto 0x404f47;
}

void fun_404f24() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 48) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 40) = eax4;
}

void fun_404f49() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x8c) = eax2;
    __clang_call_terminate(rax3);
    goto 0x404bbf;
}

void fun_4052c4() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    struct s0* rdi9;
    int64_t rbp10;
    int32_t eax11;
    int32_t ecx12;
    int32_t eax13;
    int32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    int32_t ecx17;
    int64_t rdx18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rax23;
    int32_t ecx24;
    int32_t esi25;
    int64_t rbp26;
    int64_t rbp27;

    **reinterpret_cast<int64_t**>(rbp1 - 40) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 48) = eax4;
    ecx5 = x9;
    edi6 = y10;
    *reinterpret_cast<int64_t*>(rbp7 - 0x68) = *reinterpret_cast<int64_t*>(rbp8 - 56);
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi6 < 10))) & 1)) {
    }
    rdi9 = *reinterpret_cast<struct s0**>(rbp10 - 0x68);
    _ZNSt12_Vector_baseIiSaIiEED2Ev(rdi9);
    eax11 = x9;
    ecx12 = y10;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1)) 
        goto addr_40536f_6;
    while (eax13 = x9, ecx14 = y10, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) {
        addr_40553e_9:
    }
    eax15 = x9;
    ecx16 = y10;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax15 * (eax15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx16 < 10))) & 1)) 
        goto addr_4053fa_12;
    while (ecx17 = x9, *reinterpret_cast<int32_t*>(&rdx18) = y10, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0, *reinterpret_cast<int64_t*>(rbp19 - 0x70) = **reinterpret_cast<int64_t**>(rbp20 - 40), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx17 * (ecx17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdx18) < 10))) & 1)) {
        addr_405543_15:
    }
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    rax23 = fun_401070(rdi21);
    ecx24 = x9;
    esi25 = y10;
    *reinterpret_cast<int64_t*>(rbp26 - 0x78) = rdx18;
    *reinterpret_cast<int64_t*>(rbp27 - 0x80) = rax23;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx24 * (ecx24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi25 < 10))) & 1)) 
        goto addr_4054a0_17;
    addr_4054a0_17:
    addr_4053fa_12:
    goto addr_405543_15;
    addr_40536f_6:
    goto addr_40553e_9;
}

void fun_4054a7() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;
    int32_t ecx4;
    int32_t edx5;

    *reinterpret_cast<int32_t*>(rbp1 - 0x84) = eax2;
    __clang_call_terminate(rax3);
    ecx4 = x9;
    edx5 = y10;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx4 * (ecx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx5 < 10))) & 1) 
        goto 0x4054fc;
    goto 0x405548;
}

void fun_40552a() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 40) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 48) = eax4;
}

void fun_40554a() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x88) = eax2;
    __clang_call_terminate(rax3);
    goto 0x4054a5;
}

void fun_405fab() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    struct s0* rdi9;
    int64_t rbp10;
    int32_t eax11;
    int32_t ecx12;
    int32_t eax13;
    int32_t ecx14;
    int32_t eax15;
    int32_t ecx16;
    int32_t ecx17;
    int64_t rdx18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rax23;
    int32_t ecx24;
    int32_t esi25;
    int64_t rbp26;
    int64_t rbp27;

    **reinterpret_cast<int64_t**>(rbp1 - 88) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 64) = eax4;
    ecx5 = x21;
    edi6 = y22;
    *reinterpret_cast<int64_t*>(rbp7 - 0xe0) = *reinterpret_cast<int64_t*>(rbp8 - 0x70);
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edi6 < 10))) & 1)) {
    }
    rdi9 = *reinterpret_cast<struct s0**>(rbp10 - 0xe0);
    _ZNSt12_Vector_baseIiSaIiEED2Ev(rdi9);
    eax11 = x21;
    ecx12 = y22;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1)) 
        goto addr_40605c_6;
    while (eax13 = x21, ecx14 = y22, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax13 * (eax13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx14 < 10))) & 1)) {
        addr_4062c1_9:
    }
    eax15 = x21;
    ecx16 = y22;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax15 * (eax15 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx16 < 10))) & 1)) 
        goto addr_4060e7_12;
    while (ecx17 = x21, *reinterpret_cast<int32_t*>(&rdx18) = y22, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0, *reinterpret_cast<int64_t*>(rbp19 - 0xe8) = **reinterpret_cast<int64_t**>(rbp20 - 88), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx17 * (ecx17 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdx18) < 10))) & 1)) {
        addr_4062c6_15:
    }
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0xe8);
    rax23 = fun_401070(rdi21);
    ecx24 = x21;
    esi25 = y22;
    *reinterpret_cast<int64_t*>(rbp26 - 0xf0) = rdx18;
    *reinterpret_cast<int64_t*>(rbp27 - 0xf8) = rax23;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx24 * (ecx24 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi25 < 10))) & 1)) 
        goto addr_406199_17;
    addr_406199_17:
    addr_4060e7_12:
    goto addr_4062c6_15;
    addr_40605c_6:
    goto addr_4062c1_9;
}

void fun_4061a0() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;
    int32_t ecx4;
    int32_t edx5;

    *reinterpret_cast<int32_t*>(rbp1 - 0xfc) = eax2;
    __clang_call_terminate(rax3);
    ecx4 = x21;
    edx5 = y22;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx4 * (ecx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx5 < 10))) & 1) 
        goto 0x4061f5;
    goto 0x4062cb;
}

void fun_4062ad() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 88) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 64) = eax4;
}

void fun_4062cd() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x11c) = eax2;
    __clang_call_terminate(rax3);
    goto 0x40619e;
}

void fun_406763() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    struct s0* rdi5;
    int64_t rbp6;
    int32_t ecx7;
    int32_t esi8;
    int32_t eax9;
    int32_t ecx10;
    int32_t ecx11;
    int32_t edx12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;

    **reinterpret_cast<int64_t**>(rbp1 - 72) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 64) = eax4;
    rdi5 = *reinterpret_cast<struct s0**>(rbp6 - 88);
    _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(rdi5);
    ecx7 = x31;
    esi8 = y32;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx7 * (ecx7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi8 < 10))) & 1)) {
    }
    eax9 = x31;
    ecx10 = y32;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1)) 
        goto addr_406806_6;
    while (ecx11 = x31, edx12 = y32, *reinterpret_cast<int64_t*>(rbp13 - 0x78) = **reinterpret_cast<int64_t**>(rbp14 - 72), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx11 * (ecx11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx12 < 10))) & 1)) {
        addr_4068cb_9:
    }
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x78);
    fun_401070(rdi15);
    addr_406806_6:
    goto addr_4068cb_9;
}

void fun_4068ae() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    struct s0* rdi5;
    int64_t rbp6;

    **reinterpret_cast<int64_t**>(rbp1 - 72) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 64) = eax4;
    rdi5 = *reinterpret_cast<struct s0**>(rbp6 - 88);
    _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(rdi5);
}

void fun_406fa7() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    struct s0* rdi5;
    int64_t rbp6;
    int32_t ecx7;
    int32_t esi8;
    int32_t eax9;
    int32_t ecx10;
    int32_t ecx11;
    int32_t edx12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;

    **reinterpret_cast<int64_t**>(rbp1 - 40) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 48) = eax4;
    rdi5 = *reinterpret_cast<struct s0**>(rbp6 - 56);
    _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(rdi5);
    ecx7 = x41;
    esi8 = y42;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx7 * (ecx7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi8 < 10))) & 1)) {
    }
    eax9 = x41;
    ecx10 = y42;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1)) 
        goto addr_40704a_6;
    while (ecx11 = x41, edx12 = y42, *reinterpret_cast<int64_t*>(rbp13 - 88) = **reinterpret_cast<int64_t**>(rbp14 - 40), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx11 * (ecx11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx12 < 10))) & 1)) {
        addr_4070eb_9:
    }
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_401070(rdi15);
    addr_40704a_6:
    goto addr_4070eb_9;
}

void fun_4070ce() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    struct s0* rdi5;
    int64_t rbp6;

    **reinterpret_cast<int64_t**>(rbp1 - 40) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 48) = eax4;
    rdi5 = *reinterpret_cast<struct s0**>(rbp6 - 56);
    _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev(rdi5);
}

void fun_40a1af() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t esi6;
    int32_t eax7;
    int32_t ecx8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rax11;
    unsigned char cl12;
    int64_t rbp13;
    int32_t edx14;
    int32_t esi15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rax20;
    int64_t rbp21;
    int64_t rbp22;
    int32_t eax23;
    int32_t ecx24;
    int64_t rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int32_t r8d29;
    int32_t r9d30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    struct s0* rdi35;
    int64_t rbp36;
    struct s0* rax37;
    int64_t rbp38;
    int32_t eax39;
    int32_t ecx40;
    int32_t eax41;
    int32_t ecx42;
    uint32_t* rdi43;
    int64_t rbp44;
    uint32_t* rsi45;
    int64_t rbp46;
    struct s0* rdx47;
    int64_t rbp48;
    int32_t eax49;
    int32_t ecx50;
    int32_t eax51;
    int32_t ecx52;
    int32_t eax53;
    int32_t ecx54;
    int64_t rsi55;
    int64_t rbp56;
    int64_t rdx57;
    int64_t rbp58;
    int32_t edi59;
    int32_t r8d60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    struct s0* rdi65;
    int64_t rbp66;
    uint32_t* rsi67;
    int64_t rbp68;
    int64_t rdx69;
    int64_t rbp70;
    int32_t eax71;
    int32_t ecx72;
    int32_t eax73;
    int32_t ecx74;
    int32_t eax75;
    int32_t ecx76;
    int32_t eax77;
    int32_t ecx78;
    int32_t eax79;
    int32_t ecx80;
    int64_t rdx81;
    int64_t rbp82;
    int64_t rbp83;
    int32_t r8d84;
    int32_t r9d85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rdi89;
    int64_t rbp90;
    int64_t rsi91;
    int64_t rbp92;
    int32_t eax93;
    int32_t ecx94;
    int32_t eax95;
    int32_t ecx96;

    **reinterpret_cast<int64_t**>(rbp1 - 0x98) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0xa0) = eax4;
    ecx5 = x97;
    esi6 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
    }
    eax7 = x97;
    ecx8 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax7 * (eax7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx8 < 10))) & 1)) 
        goto addr_40a24c_6;
    while (rdi9 = **reinterpret_cast<int64_t**>(rbp10 - 0x98), rax11 = fun_401030(rdi9), cl12 = reinterpret_cast<uint1_t>(!!**reinterpret_cast<int64_t**>(rbp13 - 0x90)), edx14 = x97, esi15 = y98, *reinterpret_cast<int64_t*>(rbp16 - 0x150) = rax11, *reinterpret_cast<unsigned char*>(rbp17 - 0x151) = cl12, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edx14 * (edx14 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi15 < 10))) & 1)) {
        addr_40ae3f_9:
        rdi18 = **reinterpret_cast<int64_t**>(rbp19 - 0x98);
        rax20 = fun_401030(rdi18);
        *reinterpret_cast<int64_t*>(rbp21 - 0x200) = rax20;
    }
    if (!(*reinterpret_cast<unsigned char*>(rbp22 - 0x151) & 1)) 
        goto addr_40a2d4_11;
    eax23 = x97;
    ecx24 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax23 * (eax23 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx24 < 10))) & 1)) {
        goto addr_40ae80_14;
    }
    while (rsi25 = **reinterpret_cast<int64_t**>(rbp26 - 0x90), rdx27 = *reinterpret_cast<int64_t*>(rbp28 - 88), r8d29 = x97, r9d30 = y98, *reinterpret_cast<int64_t*>(rbp31 - 0x180) = **reinterpret_cast<int64_t**>(rbp32 - 0x88), *reinterpret_cast<int64_t*>(rbp33 - 0x188) = rsi25, *reinterpret_cast<int64_t*>(rbp34 - 0x190) = rdx27, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d29 * (r8d29 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d30 < 10))) & 1)) {
        addr_40ae80_14:
    }
    rdi35 = *reinterpret_cast<struct s0**>(rbp36 - 0x190);
    rax37 = _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv(rdi35);
    *reinterpret_cast<struct s0**>(rbp38 - 0x198) = rax37;
    eax39 = x97;
    ecx40 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax39 * (eax39 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx40 < 10))) & 1)) 
        goto addr_40a600_19;
    while (eax41 = x97, ecx42 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax41 * (eax41 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx42 < 10))) & 1)) {
        addr_40ae85_22:
    }
    rdi43 = *reinterpret_cast<uint32_t**>(rbp44 - 0x180);
    rsi45 = *reinterpret_cast<uint32_t**>(rbp46 - 0x188);
    rdx47 = *reinterpret_cast<struct s0**>(rbp48 - 0x198);
    _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E(rdi43, rsi45, rdx47);
    eax49 = x97;
    ecx50 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax49 * (eax49 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx50 < 10))) & 1)) 
        goto addr_40a6a5_25;
    while (eax51 = x97, ecx52 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax51 * (eax51 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx52 < 10))) & 1)) {
        addr_40ae8a_28:
    }
    addr_40a6f2_30:
    eax53 = x97;
    ecx54 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax53 * (eax53 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx54 < 10))) & 1)) {
        goto addr_40ae8f_32;
    }
    while (rsi55 = **reinterpret_cast<int64_t**>(rbp56 - 0x88), rdx57 = **reinterpret_cast<int64_t**>(rbp58 - 0x70), edi59 = x97, r8d60 = y98, *reinterpret_cast<int64_t*>(rbp61 - 0x1a0) = *reinterpret_cast<int64_t*>(rbp62 - 88), *reinterpret_cast<int64_t*>(rbp63 - 0x1a8) = rsi55, *reinterpret_cast<int64_t*>(rbp64 - 0x1b0) = rdx57, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(edi59 * (edi59 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d60 < 10))) & 1)) {
        addr_40ae8f_32:
    }
    rdi65 = *reinterpret_cast<struct s0**>(rbp66 - 0x1a0);
    rsi67 = *reinterpret_cast<uint32_t**>(rbp68 - 0x1a8);
    rdx69 = *reinterpret_cast<int64_t*>(rbp70 - 0x1b0);
    _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim(rdi65, rsi67, rdx69);
    eax71 = x97;
    ecx72 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax71 * (eax71 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx72 < 10))) & 1)) 
        goto addr_40a806_37;
    while (eax73 = x97, ecx74 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax73 * (eax73 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx74 < 10))) & 1)) {
        addr_40ae94_40:
    }
    fun_400ee0();
    eax75 = x97;
    ecx76 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax75 * (eax75 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx76 < 10))) & 1)) 
        goto addr_40ac32_43;
    while (1) {
        eax77 = x97;
        ecx78 = y98;
        if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax77 * (eax77 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx78 < 10))) & 1) 
            goto 0x40ac7a;
        addr_40af5e_46:
    }
    addr_40ac32_43:
    goto addr_40af5e_46;
    addr_40a806_37:
    goto addr_40ae94_40;
    addr_40a6a5_25:
    goto addr_40ae8a_28;
    addr_40a600_19:
    goto addr_40ae85_22;
    addr_40a2d4_11:
    eax79 = x97;
    ecx80 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax79 * (eax79 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx80 < 10))) & 1)) 
        goto addr_40a317_48;
    while (rdx81 = **reinterpret_cast<int64_t**>(rbp82 - 0x88) + (**reinterpret_cast<int64_t**>(rbp83 - 0x78) << 2), r8d84 = x97, r9d85 = y98, *reinterpret_cast<int64_t*>(rbp86 - 0x160) = *reinterpret_cast<int64_t*>(rbp87 - 88), *reinterpret_cast<int64_t*>(rbp88 - 0x168) = rdx81, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r8d84 * (r8d84 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9d85 < 10))) & 1)) {
        addr_40ae5a_51:
    }
    rdi89 = *reinterpret_cast<int64_t*>(rbp90 - 0x160);
    rsi91 = *reinterpret_cast<int64_t*>(rbp92 - 0x168);
    _ZN9__gnu_cxx14__alloc_traitsISaIiEE7destroyERS1_Pi(rdi89, rsi91);
    eax93 = x97;
    ecx94 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax93 * (eax93 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx94 < 10))) & 1)) 
        goto addr_40a3e8_54;
    while (eax95 = x97, ecx96 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax95 * (eax95 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx96 < 10))) & 1)) {
        addr_40ae5f_57:
    }
    goto addr_40a6f2_30;
    addr_40a3e8_54:
    goto addr_40ae5f_57;
    addr_40a317_48:
    goto addr_40ae5a_51;
    addr_40a24c_6:
    goto addr_40ae3f_9;
}

void fun_40a48a() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t ecx5;
    int32_t esi6;
    int32_t eax7;
    int32_t ecx8;
    int32_t eax9;
    int32_t ecx10;
    int32_t eax11;
    int32_t ecx12;
    int32_t ecx13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rax19;
    int32_t ecx20;
    int32_t esi21;
    int64_t rbp22;
    int64_t rbp23;

    **reinterpret_cast<int64_t**>(rbp1 - 0x98) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0xa0) = eax4;
    ecx5 = x97;
    esi6 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx5 * (ecx5 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi6 < 10))) & 1)) {
    }
    fun_401010();
    eax7 = x97;
    ecx8 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax7 * (eax7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx8 < 10))) & 1)) 
        goto addr_40a896_6;
    while (eax9 = x97, ecx10 = y98, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1)) {
        addr_40ae99_9:
    }
    eax11 = x97;
    ecx12 = y98;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax11 * (eax11 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx12 < 10))) & 1)) 
        goto addr_40aae3_12;
    while (ecx13 = x97, *reinterpret_cast<int32_t*>(&rdx14) = y98, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0, *reinterpret_cast<int64_t*>(rbp15 - 0x1d0) = **reinterpret_cast<int64_t**>(rbp16 - 0x98), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx13 * (ecx13 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdx14) < 10))) & 1)) {
        addr_40af42_15:
    }
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x1d0);
    rax19 = fun_401070(rdi17);
    ecx20 = x97;
    esi21 = y98;
    *reinterpret_cast<int64_t*>(rbp22 - 0x1d8) = rdx14;
    *reinterpret_cast<int64_t*>(rbp23 - 0x1e0) = rax19;
    if (!(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx20 * (ecx20 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi21 < 10))) & 1)) 
        goto addr_40ab98_17;
    addr_40ab98_17:
    addr_40aae3_12:
    goto addr_40af42_15;
    addr_40a896_6:
    goto addr_40ae99_9;
}

void fun_40ab9f() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;
    int32_t ecx4;
    int32_t edx5;

    *reinterpret_cast<int32_t*>(rbp1 - 0x1e4) = eax2;
    __clang_call_terminate(rax3);
    ecx4 = x97;
    edx5 = y98;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx4 * (ecx4 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx5 < 10))) & 1) 
        goto 0x40abf4;
    goto 0x40af47;
}

void fun_40ae25() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 0x98) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0xa0) = eax4;
}

void fun_40ae66() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t eax4;

    **reinterpret_cast<int64_t**>(rbp1 - 0x98) = rax2;
    **reinterpret_cast<int32_t**>(rbp3 - 0xa0) = eax4;
}

void fun_40af49() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rax3;

    *reinterpret_cast<int32_t*>(rbp1 - 0x21c) = eax2;
    __clang_call_terminate(rax3);
    goto 0x40ab9d;
}

void _fini() {
    return;
}

int64_t fun_401419() {
    if (!0 || 1) {
        return 0;
    } else {
        goto 0;
    }
}

/* completed.6973 */
signed char completed_6973 = 0;

int64_t __do_global_dtors_aux() {
    int1_t zf1;
    int64_t rax2;

    zf1 = completed_6973 == 0;
    if (zf1) {
        rax2 = deregister_tm_clones();
        completed_6973 = 1;
    }
    return rax2;
}

int64_t __JCR_END__ = 0;

/* std::string::append(std::string const&) */
void _ZNSs6appendERKSs(int64_t rdi);

void frame_dummy() {
    int1_t zf1;

    zf1 = __JCR_END__ == 0;
    if (zf1 || 1) {
        goto 0x401420;
    } else {
        _ZNSs6appendERKSs(0x60fdf0);
        goto 0x401420;
    }
}

void fun_40e448() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    uint32_t* rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int32_t edx11;

    *reinterpret_cast<int64_t*>(rbp1 - 32) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 36) = edx4;
    rdi5 = *reinterpret_cast<uint32_t**>(rbp6 - 48);
    fun_400f80(rdi5);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    rax9 = fun_401070(rdi7);
    *reinterpret_cast<int32_t*>(rbp10 - 68) = edx11;
    __clang_call_terminate(rax9);
}

void fun_40e548() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    uint32_t* rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int32_t edx11;

    *reinterpret_cast<int64_t*>(rbp1 - 40) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 44) = edx4;
    rdi5 = *reinterpret_cast<uint32_t**>(rbp6 - 56);
    fun_400f80(rdi5);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 40);
    rax9 = fun_401070(rdi7);
    *reinterpret_cast<int32_t*>(rbp10 - 100) = edx11;
    __clang_call_terminate(rax9);
}

void __libc_csu_fini() {
    return;
}

int64_t g610010 = 0;

void fun_400eb6() {
    goto g610010;
}

void fun_400e76() {
    goto 0x400e60;
}

int32_t x163 = 0;

int32_t y164 = 0;

/* _GLOBAL__sub_I_wyvern.cpp */
void _GLOBAL__sub_I_wyvern_cpp() {
    int32_t eax1;
    int32_t ecx2;
    int32_t eax3;
    int32_t ecx4;

    eax1 = x163;
    ecx2 = y164;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax1 * (eax1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx2 < 10))) & 1) {
        while (__cxx_global_var_init(), __cxx_global_var_init1(), eax3 = x163, ecx4 = y164, !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax3 * (eax3 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx4 < 10))) & 1)) {
            addr_401346_4:
            __cxx_global_var_init();
            __cxx_global_var_init1();
        }
        return;
    } else {
        goto addr_401346_4;
    }
}

void fun_402e05() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;
    int32_t eax7;
    int32_t ecx8;
    int32_t eax9;
    int32_t ecx10;
    int64_t rbp11;
    int64_t rbp12;

    ecx1 = x3;
    esi2 = y4;
    *reinterpret_cast<int64_t*>(rbp3 - 0x108) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 0x110) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) {
        while (eax7 = x17, ecx8 = y18, eax9 = x3, ecx10 = y4, *reinterpret_cast<unsigned char*>(rbp11 - 0x111) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax7 * (eax7 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx8 < 10))), !(reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(eax9 * (eax9 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(ecx10 < 10))) & 1)) {
            addr_4042a7_4:
        }
        if (*reinterpret_cast<unsigned char*>(rbp12 - 0x111) & 1) 
            goto 0x402ee9;
        goto 0x403f70;
    } else {
        goto addr_4042a7_4;
    }
}

void fun_402f44() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x17;
    esi2 = y18;
    *reinterpret_cast<int64_t*>(rbp3 - 0x120) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 0x128) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x402f97;
    goto 0x403f86;
}

void fun_4048fb() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x25;
    esi2 = y26;
    *reinterpret_cast<int64_t*>(rbp3 - 80) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 88) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x404948;
    goto 0x404f22;
}

void fun_405275() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x9;
    esi2 = y10;
    *reinterpret_cast<int64_t*>(rbp3 - 88) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 96) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x4052c2;
    goto 0x405528;
}

void fun_405f56() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x21;
    esi2 = y22;
    *reinterpret_cast<int64_t*>(rbp3 - 0xd0) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 0xd8) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x405fa9;
    goto 0x4062ab;
}

void fun_406714() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x31;
    esi2 = y32;
    *reinterpret_cast<int64_t*>(rbp3 - 0x68) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 0x70) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x406761;
    goto 0x4068ac;
}

void fun_406f58() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x41;
    esi2 = y42;
    *reinterpret_cast<int64_t*>(rbp3 - 72) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 80) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x406fa5;
    goto 0x4070cc;
}

void fun_40a15a() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x97;
    esi2 = y98;
    *reinterpret_cast<int64_t*>(rbp3 - 0x140) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 0x148) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x40a1ad;
    goto 0x40ae23;
}

void fun_40a435() {
    int32_t ecx1;
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rax6;

    ecx1 = x97;
    esi2 = y98;
    *reinterpret_cast<int64_t*>(rbp3 - 0x170) = rdx4;
    *reinterpret_cast<int64_t*>(rbp5 - 0x178) = rax6;
    if (reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(ecx1 * (ecx1 - 1)) & 1) == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(esi2 < 10))) & 1) 
        goto 0x40a488;
    goto 0x40ae64;
}

void fun_400f06() {
    goto 0x400e60;
}

void fun_400f36() {
    goto 0x400e60;
}

/* _GLOBAL__sub_I_domain.cpp */
int32_t _GLOBAL__sub_I_domain_cpp() {
    int32_t eax1;

    eax1 = __cxx_global_var_init();
    return eax1;
}

void fun_400fc6() {
    goto 0x400e60;
}

void fun_400f56() {
    goto 0x400e60;
}

void fun_400f76() {
    goto 0x400e60;
}

void fun_401076() {
    goto 0x400e60;
}

void fun_400f26() {
    goto 0x400e60;
}

void fun_400f86() {
    goto 0x400e60;
}

void fun_401036() {
    goto 0x400e60;
}

void fun_400fb6() {
    goto 0x400e60;
}

void fun_400ec6() {
    goto 0x400e60;
}

void fun_400fd6() {
    goto 0x400e60;
}

void fun_401026() {
    goto 0x400e60;
}

void fun_401066() {
    goto 0x400e60;
}

void fun_401016() {
    goto 0x400e60;
}

void fun_400ee6() {
    goto 0x400e60;
}

void fun_400e86() {
    goto 0x400e60;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx);

void _start() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_400f10(0x40e120, __return_address(), rsp1, __libc_csu_init, __libc_csu_fini, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

/* std::ios_base::Init::~Init() */
int64_t _ZNSt8ios_base4InitD1Ev = 0x400f66;

/* std::ios_base::Init::~Init() */
void _ZNSt8ios_base4InitD1Ev() {
    goto _ZNSt8ios_base4InitD1Ev;
}

void fun_400ef6() {
    goto 0x400e60;
}

void fun_400ea6() {
    goto 0x400e60;
}

void fun_400f16() {
    goto 0x400e60;
}

void fun_400f46() {
    goto 0x400e60;
}

void fun_400f66() {
    goto 0x400e60;
}

void fun_401086() {
    goto 0x400e60;
}

void fun_400f96() {
    goto 0x400e60;
}

void fun_401046() {
    goto 0x400e60;
}

void fun_400ed6() {
    goto 0x400e60;
}

void fun_400fe6() {
    goto 0x400e60;
}

void fun_400e96() {
    goto 0x400e60;
}

void __libc_csu_init(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    *reinterpret_cast<int32_t*>(&rbx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    _init();
    if (!0) {
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x60fdd0 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 3);
    }
    return;
}

void fun_40e2ee() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;
    void* rsi6;
    void* rdx7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rax10;
    int64_t rbp11;
    int32_t edx12;

    *reinterpret_cast<int64_t*>(rbp1 - 0x128) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 0x12c) = edx4;
    fun_400ff0(reinterpret_cast<int64_t>(rbp5) - 0x120, rsi6, rdx7);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 0x128);
    rax10 = fun_401070(rdi8);
    *reinterpret_cast<int32_t*>(rbp11 - 0x1b4) = edx12;
    __clang_call_terminate(rax10);
}

int64_t __gxx_personality_v0 = 0x401056;

void __gxx_personality_v0() {
    goto __gxx_personality_v0;
}

void fun_401006() {
    goto 0x400e60;
}

void fun_40e30e() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;

    *reinterpret_cast<int64_t*>(rbp1 - 0x128) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 0x12c) = edx4;
    fun_400f80(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffee8);
    goto 0x40e3cf;
}

void fun_400fa6() {
    goto 0x400e60;
}

void fun_401056() {
    goto 0x400e60;
}

void fun_400ff6() {
    goto 0x400e60;
}

void fun_40e322() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;

    *reinterpret_cast<int64_t*>(rbp1 - 0x128) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 0x12c) = edx4;
    fun_400f80(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffec8);
    goto 0x40e3b9;
}

int64_t stdin = 0;

int64_t fun_40e0a4() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rax8;
    int64_t rbp9;
    int32_t edx10;
    void* rbp11;
    int64_t rdx12;
    void* rcx13;
    void* rcx14;
    uint32_t* rdi15;
    uint32_t* rsi16;
    uint32_t eax17;
    uint32_t* rdi18;
    uint32_t* rdi19;
    uint32_t* rsi20;
    uint32_t* rdi21;
    uint32_t* rdi22;

    *reinterpret_cast<int64_t*>(rbp1 - 32) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 36) = edx4;
    fun_400f80(reinterpret_cast<int64_t>(rbp5) + 0xffffffffffffffe8);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
    rax8 = fun_401070(rdi6);
    *reinterpret_cast<int32_t*>(rbp9 - 68) = edx10;
    __clang_call_terminate(rax8);
    rbp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8 - 8 + 8 - 8);
    fun_400f70(0x6101e0, "+-----------------------+\n");
    fun_400f70(0x6101e0, "|    Welcome Hero       |\n");
    fun_400f70(0x6101e0, "+-----------------------+\n\n", 0x6101e0, "+-----------------------+\n\n");
    fun_400f70(0x6101e0, "[!] Quest: there is a dragon prowling the domain.\n", 0x6101e0, "[!] Quest: there is a dragon prowling the domain.\n");
    fun_400f70(0x6101e0, "\tbrute strength and magic is our only hope. Test your skill.\n\n", 0x6101e0, "\tbrute strength and magic is our only hope. Test your skill.\n\n");
    fun_400f70(0x6101e0, "Enter the dragon's secret: ", 0x6101e0, "Enter the dragon's secret: ");
    rdx12 = stdin;
    rcx13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp11) - 0x110);
    fun_400f40(rcx13, 0x101, rdx12);
    rcx14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp11) - 0x120);
    fun_401040(rcx14, 0x101, rdx12);
    fun_400fa0(reinterpret_cast<int64_t>(rbp11) - 0x118, rcx13, rcx14);
    fun_400ff0(reinterpret_cast<int64_t>(rbp11) - 0x120, rcx13, rcx14);
    rdi15 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffec8);
    rsi16 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffee8);
    fun_400f20(rdi15, rsi16, rdi15, rsi16);
    eax17 = _Z11start_questSs(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffec8, rsi16, rcx14);
    rdi18 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffec8);
    fun_400f80(rdi18, rdi18);
    if (static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax17 - 0x1337 == 0)) & 1) {
        rdi19 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffec0);
        rsi20 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffee8);
        fun_400f20(rdi19, rsi20, rdi19, rsi20);
        _Z15reward_strengthSs(reinterpret_cast<int64_t>(rbp11) - 0x140, rsi20, rcx14);
        rdi21 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffec0);
        fun_400f80(rdi21, rdi21);
    } else {
        fun_400f70(0x6101e0, "\n[-] You have failed. The dragon's power, speed and intelligence was greater.\n", 0x6101e0, "\n[-] You have failed. The dragon's power, speed and intelligence was greater.\n");
    }
    rdi22 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp11) + 0xfffffffffffffee8);
    fun_400f80(rdi22, rdi22);
    return 0;
}

void fun_40e0b2() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;

    *reinterpret_cast<int64_t*>(rbp1 - 32) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 36) = edx4;
    fun_400f80(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff0);
    goto 0x40e0ef;
}

void fun_40e347() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;

    *reinterpret_cast<int64_t*>(rbp1 - 0x128) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 0x12c) = edx4;
    fun_400f80(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffec0);
    goto 0x40e3b9;
}

void fun_40e0c0() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int32_t edx4;
    void* rbp5;

    *reinterpret_cast<int64_t*>(rbp1 - 32) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 36) = edx4;
    fun_400f80(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff8);
    goto 0x40e0dc;
}
