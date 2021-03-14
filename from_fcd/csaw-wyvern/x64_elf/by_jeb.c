
long __clang_call_terminate(long param0) {
    unsigned int v0 = x23;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y24 < 10 ? 1: 0)) & 0x1)) {
        →__cxa_begin_catch();
        /*NO_RETURN*/ →std::terminate();
    }
    →__cxa_begin_catch();
    /*NO_RETURN*/ →std::terminate();
}

long __cxx_global_var_init() {
    unsigned int v0 = x;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y < 10 ? 1: 0)) & 0x1)) {
    loc_4010E5:
        →std::ios_base::Init::Init();
        long result = →__cxa_atexit();
        unsigned int v1 = x;
        if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (y < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    →std::ios_base::Init::Init();
    long v2 = →__cxa_atexit();
    goto loc_4010E5;
}

long __cxx_global_var_init1() {
    unsigned int v0 = x5;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y6 < 10 ? 1: 0)) & 0x1)) {
    loc_4011F5:
        std::vector<int, std::allocator<int> >::vector(&hero);
        long result = →__cxa_atexit();
        unsigned int v1 = x5;
        if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (y6 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    std::vector<int, std::allocator<int> >::vector(&hero);
    long v2 = →__cxa_atexit();
    goto loc_4011F5;
}

long __cxx_global_var_init2() {
    →std::ios_base::Init::Init();
    return →__cxa_atexit();
}

// Package: __gnu_cxx::__alloc_traits<std::allocator<int> >

long __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x27;
    char v1 = y28 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_406402:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x27;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y28 < 10 ? 1: 0);
        result = *ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_406402;
}

// Package: __gnu_cxx::__alloc_traits<std::allocator<int> >

unsigned int __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(long param0, long param1, long param2) {
    char v0;
    char v1;
    char v2;
    long v3;
    long v4;
    long v5 = (unsigned long)v1 | ((unsigned long)v3 << 8);
    long v6 = (unsigned long)v2 | ((unsigned long)v4 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x95;
    int v8 = y96;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40975F:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 4);
        long v13 = *(long*)(ptr0 - 6);
        long v14 = *(long*)(ptr0 - 2);
        ptr0 -= 7;
        *ptr0 = &loc_409781;
        unsigned int result = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::construct(v14, v12, v13);
        unsigned int v15 = x95;
        if((((((v15 - 1) * v15) & 0x1 ? 0: 1) | (y96 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v16 = *(long*)(ptr0 - 4);
    long v17 = *(long*)(ptr0 - 6);
    long v18 = *(long*)(ptr0 - 2);
    ptr0 -= 7;
    *ptr0 = &loc_409819;
    /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::construct(v18, v16, v17);
    goto loc_40975F;
}

// Package: __gnu_cxx::__alloc_traits<std::allocator<int> >

long __gnu_cxx::__alloc_traits<std::allocator<int> >::destroy(long param0, long param1) {
    char v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x117;
    int v5 = y118;
    long v6 = param0;
    long v7 = param1;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_40BFBC:
        *(long*)(ptr0 - 2) = v6;
        *(long*)(ptr0 - 4) = v7;
        long v8 = *(long*)(ptr0 - 4);
        long v9 = *(long*)(ptr0 - 2);
        ptr0 -= 5;
        *ptr0 = &loc_40BFD4;
        long result = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::destroy(v9, v8);
        unsigned int v10 = x117;
        if((((((v10 - 1) * v10) & 0x1 ? 0: 1) | (y118 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v6;
    *(long*)(ptr0 - 4) = v7;
    long v11 = *(long*)(ptr0 - 4);
    long v12 = *(long*)(ptr0 - 2);
    ptr0 -= 5;
    *ptr0 = &loc_40C057;
    /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::destroy(v12, v11);
    goto loc_40BFBC;
}

// Package: __gnu_cxx::__alloc_traits<std::allocator<int> >

long __gnu_cxx::__alloc_traits<std::allocator<int> >::max_size(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x145;
    int v2 = y146;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40D2DD:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40D2EB;
        long v5 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::max_size(v4);
        unsigned int v6 = x145;
        char v7 = (((v6 - 1) * v6) & 0x1 ? 0: 1) | (y146 < 10 ? 1: 0);
        long result = v5;
        if((v7 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v8 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_40D35C;
    long v9 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::max_size(v8);
    goto loc_40D2DD;
}

// Package: __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >

long* __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(long param0, long param1) {
    long v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x53;
    int v2 = y54;
    long v3 = param0;
    v0 = param1;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_4077A6:
        unsigned long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 2;
        *ptr1 = v3;
        *(ptr1 - 2) = v0;
        long* result = *ptr1;
        *result = **(ptr1 - 2);
        unsigned int v4 = x53;
        if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y54 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    unsigned long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *ptr2 = v3;
    *(ptr2 - 2) = v0;
    **ptr2 = **(ptr2 - 2);
    goto loc_4077A6;
}

// Package: __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >

long __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x77;
    char v1 = y78 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_4087B2:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x77;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y78 < 10 ? 1: 0);
        result = *ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_4087B2;
}

// Package: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >

long* __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(long param0, long param1) {
    long v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x101;
    int v2 = y102;
    long v3 = param0;
    v0 = param1;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40B0E6:
        unsigned long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 2;
        *ptr1 = v3;
        *(ptr1 - 2) = v0;
        long* result = *ptr1;
        *result = **(ptr1 - 2);
        unsigned int v4 = x101;
        if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y102 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    unsigned long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *ptr2 = v3;
    *(ptr2 - 2) = v0;
    **ptr2 = **(ptr2 - 2);
    goto loc_40B0E6;
}

// Package: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >

long __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x105;
    char v1 = y106 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_40B382:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x105;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y106 < 10 ? 1: 0);
        result = *ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_40B382;
}

// Package: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >

long __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(long param0) {
    long result;
    unsigned long* ptr0 = &result;
    unsigned int v0 = x107;
    char v1 = y108 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_40B452:
        unsigned long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x107;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y108 < 10 ? 1: 0);
        result = **ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = (long*)(ptr0 - 2);
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_40B452;
}

// Package: __gnu_cxx::new_allocator<int>

long __gnu_cxx::new_allocator<int>::allocate(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    long v3;
    char v4;
    char v5;
    long v6;
    long v7 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v8 = (unsigned long)v5 | ((unsigned long)v3 << 8);
    long v9 = v6;
    unsigned long* ptr0 = &v1;
    unsigned int v10 = x87;
    int v11 = y88;
    long v12 = param1;
    long v13 = param0;
    long v14 = param2;
    if(!(((((v10 - 1) * v10) & 0x1 ? 0: 1) | (v11 < 10 ? 1: 0)) & 0x1)) {
    loc_4093AE:
        *(long*)(ptr0 - 2) = v13;
        *(long*)(ptr0 - 4) = v12;
        *(long*)(ptr0 - 6) = v14;
        long v15 = *(long*)(ptr0 - 2);
        ptr0 -= 7;
        *ptr0 = &loc_4093C7;
        long v16 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::max_size(v15);
        goto loc_4091C1;
    }
    else {
    loc_4091C1:
        *(long*)(ptr0 - 2) = v13;
        *(ptr0 - 4) = v12;
        *(long*)(ptr0 - 6) = v14;
        long v17 = *(long*)(ptr0 - 2);
        unsigned long v18 = *(ptr0 - 4);
        unsigned long* ptr1 = ptr0 - 4;
        unsigned long v19 = v18;
        ptr0 -= 7;
        *ptr0 = &loc_4091E5;
        long v20 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::max_size(v17);
        unsigned int v21 = x87;
        v5 = (((v21 - 1) * v21) & 0x1 ? 0: 1) | (y88 < 10 ? 1: 0);
        v0 = (unsigned long)v20 >= v19 ? 0: 1;
        if(!(v5 & 0x1)) {
            goto loc_4093AE;
        }
    }
    if((v0 & 0x1)) {
        unsigned int v22 = x87;
        if(!(((((v22 - 1) * v22) & 0x1 ? 0: 1) | (y88 < 10 ? 1: 0)) & 0x1)) {
            --ptr0;
            *ptr0 = &loc_4093D5;
            /*BAD_CALL!*/ →std::__throw_bad_alloc();
            goto loc_409293;
        }
        else {
        loc_409293:
            --ptr0;
            *ptr0 = &loc_409298;
            /*BAD_CALL!*/ →std::__throw_bad_alloc();
            unsigned int v23 = x87;
            if(!(((((v23 - 1) * v23) & 0x1 ? 0: 1) | (y88 < 10 ? 1: 0)) & 0x1)) {
                --ptr0;
                *ptr0 = &loc_4093D5;
                /*BAD_CALL!*/ →std::__throw_bad_alloc();
                goto loc_409293;
            }
        }
    }
    unsigned int v24 = x87;
    if((((((v24 - 1) * v24) & 0x1 ? 0: 1) | (y88 < 10 ? 1: 0)) & 0x1)) {
    loc_40932C:
        --ptr0;
        *ptr0 = &loc_409331;
        long v25 = /*BAD_CALL!*/ →operator new();
        unsigned int v26 = x87;
        char v27 = (((v26 - 1) * v26) & 0x1 ? 0: 1) | (y88 < 10 ? 1: 0);
        long result = v25;
        if((v27 & 0x1)) {
            return result;
        }
    }
    --ptr0;
    *ptr0 = &loc_4093ED;
    v1 = /*BAD_CALL!*/ →operator new();
    goto loc_40932C;
}

// Package: __gnu_cxx::new_allocator<int>

unsigned int __gnu_cxx::new_allocator<int>::construct(long param0, long param1, long param2) {
    unsigned int result;
    char v0;
    int* ptr0;
    unsigned long* ptr1;
    long v1;
    long v2;
    long v3;
    long v4;
    char v5;
    long v6;
    long v7;
    char v8;
    char v9;
    long v10 = (unsigned long)v8 | ((unsigned long)v6 << 8);
    long v11 = (unsigned long)v9 | ((unsigned long)v7 << 8);
    unsigned long* ptr2 = &v5;
    unsigned int v12 = x153;
    int v13 = y154;
    long v14 = (unsigned long)(v12 - 1);
    long v15 = param1;
    long v16 = param0;
    long v17 = param2;
    if(!(((((unsigned int)v14 * v12) & 0x1 ? 0: 1) | (v13 < 10 ? 1: 0)) & 0x1)) {
        long* ptr3 = (long*)(ptr2 - 2);
        ptr2 = (unsigned long*)(ptr3 - 4);
        *ptr3 = v16;
        *(ptr3 - 2) = v15;
        *(ptr3 - 4) = v17;
        goto loc_40DA30;
    }
    else {
    loc_40DA30:
        long* ptr4 = (long*)(ptr2 - 2);
        ptr2 = (unsigned long*)(ptr4 - 4);
        v4 = v16;
        *ptr4 = v16;
        *(unsigned long*)(ptr4 - 2) = v15;
        v3 = v17;
        *(unsigned long*)(ptr4 - 4) = v17;
        int* ptr5 = *(unsigned long*)(ptr4 - 2);
        v14 = (unsigned long)(ptr5 ? 0: 1) | ((unsigned long)((v14 >>> 8L) & 0xffffffffffffffL) << 8);
        unsigned int v18 = x153;
        v2 = (unsigned long)y154;
        v1 = (unsigned long)(((v18 - 1) * v18) & 0x1);
        ptr1 = (unsigned long*)(ptr4 - 4);
        ptr0 = ptr5;
        v0 = (unsigned char)v14;
        if(!((((unsigned int)v2 < 10 ? 1: 0) | ((unsigned int)v1 ? 0: 1)) & 0x1)) {
            long* ptr3 = (long*)(ptr2 - 2);
            ptr2 = (unsigned long*)(ptr3 - 4);
            *ptr3 = v16;
            *(ptr3 - 2) = v15;
            *(ptr3 - 4) = v17;
            goto loc_40DA30;
        }
    }
    if(!(v0 & 0x1)) {
        unsigned int v19 = x153;
        if(!(((((v19 - 1) * v19) & 0x1 ? 0: 1) | (y154 < 10 ? 1: 0)) & 0x1)) {
            *ptr0 = **ptr1;
            goto loc_40DB29;
        }
        else {
        loc_40DB29:
            *ptr0 = **ptr1;
            unsigned int v20 = x153;
            v3 = (unsigned long)y154;
            v4 = (unsigned long)(((v20 - 1) * v20) & 0x1);
            v2 = (unsigned long)((unsigned int)v3 < 10 ? 1: 0) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
            v1 = (unsigned long)((unsigned char)v2 | ((unsigned int)v4 ? 0: 1)) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
            int* ptr6 = ptr0;
            if(!((unsigned char)v1 & 0x1)) {
                *ptr0 = **ptr1;
                goto loc_40DB29;
            }
        }
    }
    unsigned int v21 = x153;
    v3 = (unsigned long)(y154 < 10 ? 1: 0) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
    v4 = (unsigned long)((unsigned char)v3 | (((v21 - 1) * v21) & 0x1 ? 0: 1)) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
    do {
        result = x153;
        v3 = (unsigned long)(y154 < 10 ? 1: 0) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        v4 = (unsigned long)((unsigned char)v3 | (((result - 1) * result) & 0x1 ? 0: 1)) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    while(!((unsigned char)v4 & 0x1));
    return result;
}

// Package: __gnu_cxx::new_allocator<int>

long __gnu_cxx::new_allocator<int>::deallocate(long param0, long param1, long param2) {
    long v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x51;
    int v5 = y52;
    long v6 = param1;
    long v7 = param0;
    v0 = param2;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_40769D:
        *(long*)(ptr0 - 2) = v7;
        *(long*)(ptr0 - 4) = v6;
        *(long*)(ptr0 - 6) = v0;
        ptr0 -= 7;
        *ptr0 = &loc_4076B9;
        long result = /*BAD_CALL!*/ →operator delete();
        unsigned int v8 = x51;
        if((((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y52 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v7;
    *(long*)(ptr0 - 4) = v6;
    *(long*)(ptr0 - 6) = v0;
    ptr0 -= 7;
    *ptr0 = &loc_40774A;
    /*BAD_CALL!*/ →operator delete();
    goto loc_40769D;
}

// Package: __gnu_cxx::new_allocator<int>

long __gnu_cxx::new_allocator<int>::destroy(long param0, long param1) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x125;
    char v1 = y126 < 10 ? 1: 0;
    long v2 = param0;
    result = param1;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_40C3F6:
        long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 2;
        *ptr1 = v2;
        *(ptr1 - 2) = result;
        unsigned int v3 = x125;
        if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (y126 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *ptr2 = v2;
    *(ptr2 - 2) = result;
    goto loc_40C3F6;
}

// Package: __gnu_cxx::new_allocator<int>

long __gnu_cxx::new_allocator<int>::max_size(long param0) {
    char v0;
    long* ptr0 = &v0;
    unsigned int v1 = x89;
    char v2 = y90 < 10 ? 1: 0;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | v2) & 0x1)) {
    loc_409452:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v3;
        unsigned int v4 = x89;
        if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y90 < 10 ? 1: 0)) & 0x1)) {
            return 0x3fffffffffffffffL;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v3;
    goto loc_409452;
}

// Package: __gnu_cxx::new_allocator<int>

long __gnu_cxx::new_allocator<int>::new_allocator(long param0, long param1) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x93;
    char v1 = y94 < 10 ? 1: 0;
    long v2 = param0;
    result = param1;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_409646:
        long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 2;
        *ptr1 = v2;
        *(ptr1 - 2) = result;
        unsigned int v3 = x93;
        if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (y94 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *ptr2 = v2;
    *(ptr2 - 2) = result;
    goto loc_409646;
}

// Package: __gnu_cxx::new_allocator<int>

long* __gnu_cxx::new_allocator<int>::new_allocator2(long param0) {
    char v0;
    long* ptr0 = &v0;
    unsigned int v1 = x161;
    char v2 = y162 < 10 ? 1: 0;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | v2) & 0x1)) {
    loc_40DF92:
        long* result = ptr0 - 2;
        ptr0 -= 2;
        *result = v3;
        unsigned int v4 = x161;
        if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y162 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    long* ptr1 = ptr0 - 2;
    ptr0 -= 2;
    *ptr1 = v3;
    goto loc_40DF92;
}

// Package: __gnu_cxx::new_allocator<int>

long* __gnu_cxx::new_allocator<int>::~new_allocator(long param0) {
    char v0;
    long* ptr0 = &v0;
    unsigned int v1 = x49;
    char v2 = y50 < 10 ? 1: 0;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | v2) & 0x1)) {
    loc_4075B2:
        long* result = ptr0 - 2;
        ptr0 -= 2;
        *result = v3;
        unsigned int v4 = x49;
        if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y50 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    long* ptr1 = ptr0 - 2;
    ptr0 -= 2;
    *ptr1 = v3;
    goto loc_4075B2;
}

// Package: __gnu_cxx

long __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(long param0, long param1) {
    char v0;
    long v1;
    char v2;
    long v3 = (unsigned long)v2 | ((unsigned long)v1 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x111;
    int v5 = y112;
    long v6 = param0;
    long v7 = param1;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_40BBDC:
        *(long*)(ptr0 - 2) = v6;
        *(long*)(ptr0 - 4) = v7;
        long v8 = *(long*)(ptr0 - 2);
        long* ptr1 = (long*)(ptr0 - 4);
        ptr0 -= 5;
        *ptr0 = &loc_40BBF2;
        long v9 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v8);
        long v10 = *ptr1;
        long v11 = *(long*)v9;
        --ptr0;
        *ptr0 = &loc_40BC05;
        long v12 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v10);
        unsigned int v13 = x111;
        char v14 = (((v13 - 1) * v13) & 0x1 ? 0: 1) | (y112 < 10 ? 1: 0);
        long result = (v11 - *(long*)v12) >> 2;
        if((v14 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v6;
    *(long*)(ptr0 - 4) = v7;
    long v15 = *(long*)(ptr0 - 2);
    long* ptr2 = (long*)(ptr0 - 4);
    ptr0 -= 5;
    *ptr0 = &loc_40BC9C;
    long v16 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v15);
    long v17 = *ptr2;
    long v18 = v16;
    --ptr0;
    *ptr0 = &loc_40BCAC;
    long v19 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v17);
    goto loc_40BBDC;
}

int initializer_2() {
    unsigned int v0 = x163;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y164 < 10 ? 1: 0)) & 0x1)) {
    loc_4012F7:
        __cxx_global_var_init();
        __cxx_global_var_init1();
        unsigned int v1 = x163;
        if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (y164 < 10 ? 1: 0)) & 0x1)) {
            return ((v1 - 1) * v1) & 0x1;
        }
    }
    __cxx_global_var_init();
    __cxx_global_var_init1();
    goto loc_4012F7;
}

long initializer_3() {
    return __cxx_global_var_init2();
}

long main() {
    char v0;
    char v1;
    char v2;
    char v3;
    long v4;
    long v5;
    long v6;
    int v7 = 0;
    long v8 = &std::cout;
    long v9 = →std::operator<< <std::char_traits<char> >();
    long v10 = →std::operator<< <std::char_traits<char> >();
    long v11 = →std::operator<< <std::char_traits<char> >();
    long v12 = →std::operator<< <std::char_traits<char> >();
    long v13 = →std::operator<< <std::char_traits<char> >();
    long v14 = →std::operator<< <std::char_traits<char> >();
    FILE* __stream = stdin;
    long v15 = v14;
    char* ptr0 = &v1;
    char* ptr1 = →fgets(&v1, 0x101, __stream);
    →std::allocator<char>::allocator();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string3();
    →std::allocator<char>::~allocator();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
    long v16 = start_quest(&v3, &v2, v4, v5, v6);
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    if((((unsigned int)v16 == 0x1337 ? 1: 0) & 0x1)) {
        →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
        reward_strength(&v0);
        →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    }
    else {
        →std::operator<< <std::char_traits<char> >();
    }
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    return 0L;
}

long reward_strength(long param0) {
    char v0;
    char v1;
    char v2;
    →std::string::size();
    →std::string::substr();
    std::operator+<char, std::char_traits<char>, std::allocator<char> >2(&v0, "\n[+] A great success! Here is a flag{", &v1);
    std::operator+<char, std::char_traits<char>, std::allocator<char> >(&v2, &v0, &gvar_40E679);
    →std::operator<< <char, std::char_traits<char>, std::allocator<char> >();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    return →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
}

void sanitize_input() {
    // Decompilation error
}

long start_quest(long param0, long param1, long param2, long param3, long param4) {
    int v0;
    char v1;
    int v2;
    char v3;
    long v4;
    long* ptr0;
    int* ptr1;
    char v5;
    long v6;
    long v7;
    char v8;
    char v9;
    long v10;
    long v11 = (unsigned long)v8 | ((unsigned long)v6 << 8);
    long v12 = (unsigned long)v9 | ((unsigned long)v7 << 8);
    long v13 = v10;
    unsigned long* ptr2 = &v5;
    unsigned int v14 = x25;
    int v15 = y26;
    long v16 = param0;
    if(!(((((v14 - 1) * v14) & 0x1 ? 0: 1) | (v15 < 10 ? 1: 0)) & 0x1)) {
    loc_404C27:
        --ptr2;
        *ptr2 = &loc_404C2C;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_100);
        --ptr2;
        *ptr2 = &loc_404C45;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_214);
        --ptr2;
        *ptr2 = &loc_404C5E;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_266);
        --ptr2;
        *ptr2 = &loc_404C77;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_369);
        --ptr2;
        *ptr2 = &loc_404C90;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_417);
        --ptr2;
        *ptr2 = &loc_404CA9;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_527);
        --ptr2;
        *ptr2 = &loc_404CC2;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_622);
        --ptr2;
        *ptr2 = &loc_404CDB;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_733);
        --ptr2;
        *ptr2 = &loc_404CF4;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_847);
        --ptr2;
        *ptr2 = &loc_404D0D;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_942);
        --ptr2;
        *ptr2 = &loc_404D26;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1054);
        --ptr2;
        *ptr2 = &loc_404D3F;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1106);
        --ptr2;
        *ptr2 = &loc_404D58;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1222);
        --ptr2;
        *ptr2 = &loc_404D71;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1336);
        --ptr2;
        *ptr2 = &loc_404D8A;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1441);
        --ptr2;
        *ptr2 = &loc_404DA3;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1540);
        --ptr2;
        *ptr2 = &loc_404DBC;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1589);
        --ptr2;
        *ptr2 = &loc_404DD5;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1686);
        --ptr2;
        *ptr2 = &loc_404DEE;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1796);
        --ptr2;
        *ptr2 = &loc_404E07;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1891);
        --ptr2;
        *ptr2 = &loc_404E20;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1996);
        --ptr2;
        *ptr2 = &loc_404E39;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2112);
        --ptr2;
        *ptr2 = &loc_404E52;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2165);
        --ptr2;
        *ptr2 = &loc_404E6B;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2260);
        --ptr2;
        *ptr2 = &loc_404E84;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2336);
        --ptr2;
        *ptr2 = &loc_404E9D;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2412);
        --ptr2;
        *ptr2 = &loc_404EB6;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2498);
        --ptr2;
        *ptr2 = &loc_404ECF;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2575);
        --ptr2;
        *ptr2 = &loc_404ED8;
        long v17 = /*BAD_CALL!*/ →std::string::length();
        goto loc_4043E0;
    }
    else {
    loc_4043E0:
        long* ptr3 = (long*)(ptr2 - 8);
        long* ptr4 = (long*)(ptr2 - 6);
        ptr1 = (int*)(ptr2 - 2);
        ptr0 = (long*)(ptr2 - 4);
        ptr2 -= 9;
        *ptr2 = &loc_4043F5;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_100);
        --ptr2;
        *ptr2 = &loc_40440E;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_214);
        --ptr2;
        *ptr2 = &loc_404427;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_266);
        --ptr2;
        *ptr2 = &loc_404440;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_369);
        --ptr2;
        *ptr2 = &loc_404459;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_417);
        --ptr2;
        *ptr2 = &loc_404472;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_527);
        --ptr2;
        *ptr2 = &loc_40448B;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_622);
        --ptr2;
        *ptr2 = &loc_4044A4;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_733);
        --ptr2;
        *ptr2 = &loc_4044BD;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_847);
        --ptr2;
        *ptr2 = &loc_4044D6;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_942);
        --ptr2;
        *ptr2 = &loc_4044EF;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1054);
        --ptr2;
        *ptr2 = &loc_404508;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1106);
        --ptr2;
        *ptr2 = &loc_404521;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1222);
        --ptr2;
        *ptr2 = &loc_40453A;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1336);
        --ptr2;
        *ptr2 = &loc_404553;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1441);
        --ptr2;
        *ptr2 = &loc_40456C;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1540);
        --ptr2;
        *ptr2 = &loc_404585;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1589);
        --ptr2;
        *ptr2 = &loc_40459E;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1686);
        --ptr2;
        *ptr2 = &loc_4045B7;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1796);
        --ptr2;
        *ptr2 = &loc_4045D0;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1891);
        --ptr2;
        *ptr2 = &loc_4045E9;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1996);
        --ptr2;
        *ptr2 = &loc_404602;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2112);
        --ptr2;
        *ptr2 = &loc_40461B;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2165);
        --ptr2;
        *ptr2 = &loc_404634;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2260);
        --ptr2;
        *ptr2 = &loc_40464D;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2336);
        --ptr2;
        *ptr2 = &loc_404666;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2412);
        --ptr2;
        *ptr2 = &loc_40467F;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2498);
        --ptr2;
        *ptr2 = &loc_404698;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2575);
        --ptr2;
        *ptr2 = &loc_4046A1;
        long v18 = /*BAD_CALL!*/ →std::string::length();
        unsigned int v19 = x25;
        v4 = (unsigned long)(((v19 - 1) * v19) & 0x1);
        v9 = (((v19 - 1) * v19) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0);
        v3 = v18 - 1L == (long)(legend >> 2) ? 0: 1;
        if(!(v9 & 0x1)) {
            goto loc_404C27;
        }
    }
    if((v3 & 0x1)) {
        unsigned int v20 = x25;
        if(!(((((v20 - 1) * v20) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
            *ptr1 = legend >> 2;
        }
        goto loc_40476E;
    }
    else {
        unsigned int v21 = x25;
        if((((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
            goto loc_404803;
        loc_40476E:
            *ptr1 = legend >> 2;
            unsigned int v22 = x25;
            if(((((v22 - 1) * v22) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1) {
                goto loc_404A80;
            }
            else {
                *ptr1 = legend >> 2;
                goto loc_40476E;
            loc_404803:
                --ptr2;
                *ptr2 = &loc_404808;
                /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
                unsigned int v23 = x25;
                long v24 = (unsigned long)y26;
                param4 = (unsigned long)((((v23 - 1) * v23) & 0x1 ? 0: 1) | ((unsigned int)v24 < 10 ? 1: 0)) | ((unsigned long)((param4 >>> 8L) & 0xffffffffffffffL) << 8);
                if(((unsigned char)param4 & 0x1)) {
                    --ptr2;
                    *ptr2 = &loc_404854;
                    long v25 = /*BAD_CALL!*/ sanitize_input((long)ptr0, v16, (unsigned long)(v23 - 1), v24, param4);
                    v2 = (unsigned int)v25;
                    unsigned int v26 = x25;
                    if(!(((((v26 - 1) * v26) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
                        *ptr1 = v2;
                        --ptr2;
                        *ptr2 = &loc_404F1D;
                        /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
                    }
                    goto loc_4048A6;
                }
            }
        }
        --ptr2;
        *ptr2 = &loc_404F06;
        /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
        goto loc_404803;
    }
loc_404A80:
    do {
        unsigned int v27 = x25;
        v1 = (((v27 - 1) * v27) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0);
        v0 = *ptr1;
    }
    while(!(v1 & 0x1));
    return (unsigned long)v0;
loc_4048A6:
    *ptr1 = v2;
    --ptr2;
    *ptr2 = &loc_4048B1;
    /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    unsigned int v28 = x25;
    v4 = (unsigned long)(y26 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
    if((((unsigned char)v4 | (((v28 - 1) * v28) & 0x1 ? 0: 1)) & 0x1)) {
        goto loc_404A80;
    }
    else {
        *ptr1 = v2;
        --ptr2;
        *ptr2 = &loc_404F1D;
        /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
        goto loc_4048A6;
    }
}

// Package: std::_Destroy_aux<true>

long std::_Destroy_aux<true>::__destroy<int*>(long param0, long param1) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x123;
    char v1 = y124 < 10 ? 1: 0;
    long v2 = param0;
    result = param1;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_40C306:
        long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 2;
        *ptr1 = v2;
        *(ptr1 - 2) = result;
        unsigned int v3 = x123;
        if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (y124 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *ptr2 = v2;
    *(ptr2 - 2) = result;
    goto loc_40C306;
}

// Package: std

long std::_Destroy<int*, int>(long param0, long param1, long param2) {
    char v0;
    char v1;
    char v2;
    long v3;
    long v4;
    long v5 = (unsigned long)v1 | ((unsigned long)v3 << 8);
    long v6 = (unsigned long)v2 | ((unsigned long)v4 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x119;
    int v8 = y120;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40C0DF:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long v13 = *(long*)(ptr0 - 4);
        ptr0 -= 7;
        *ptr0 = &loc_40C0FB;
        long result = /*BAD_CALL!*/ std::_Destroy<int*>(v12, v13);
        unsigned int v14 = x119;
        if((((((v14 - 1) * v14) & 0x1 ? 0: 1) | (y120 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v15 = *(long*)(ptr0 - 2);
    long v16 = *(long*)(ptr0 - 4);
    ptr0 -= 7;
    *ptr0 = &loc_40C18D;
    /*BAD_CALL!*/ std::_Destroy<int*>(v15, v16);
    goto loc_40C0DF;
}

// Package: std

long std::_Destroy<int*>(long param0, long param1) {
    char v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x121;
    int v5 = y122;
    long v6 = param0;
    long v7 = param1;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_40C20C:
        *(long*)(ptr0 - 2) = v6;
        *(long*)(ptr0 - 4) = v7;
        long v8 = *(long*)(ptr0 - 2);
        long v9 = *(long*)(ptr0 - 4);
        ptr0 -= 5;
        *ptr0 = &loc_40C221;
        long result = /*BAD_CALL!*/ std::_Destroy_aux<true>::__destroy<int*>(v8, v9);
        unsigned int v10 = x121;
        if((((((v10 - 1) * v10) & 0x1 ? 0: 1) | (y122 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v6;
    *(long*)(ptr0 - 4) = v7;
    long v11 = *(long*)(ptr0 - 2);
    long v12 = *(long*)(ptr0 - 4);
    ptr0 -= 5;
    *ptr0 = &loc_40C2A1;
    /*BAD_CALL!*/ std::_Destroy_aux<true>::__destroy<int*>(v11, v12);
    goto loc_40C20C;
}

// Package: std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>

long std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x65;
    int v1 = y66;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | (v1 < 10 ? 1: 0)) & 0x1)) {
    loc_4081A2:
        long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 2;
        *(ptr1 - 2) = v2;
        *ptr1 = *(ptr1 - 2);
        unsigned int v3 = x65;
        char v4 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y66 < 10 ? 1: 0);
        result = *ptr1;
        if((v4 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *(ptr2 - 2) = v2;
    *ptr2 = *(ptr2 - 2);
    goto loc_4081A2;
}

// Package: std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>

long std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x75;
    int v2 = y76;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_4086C2:
        long v4 = (long)(ptr0 - 2);
        *(long*)v4 = v3;
        ptr0 = (unsigned long*)(v4 - 8L);
        *ptr0 = &loc_4086D8;
        long v5 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base(v4);
        unsigned int v6 = x75;
        char v7 = (((v6 - 1) * v6) & 0x1 ? 0: 1) | (y76 < 10 ? 1: 0);
        long result = *(long*)v5;
        if((v7 & 0x1)) {
            return result;
        }
    }
    long v8 = (long)(ptr0 - 2);
    *(long*)v8 = v3;
    ptr0 = (unsigned long*)(v8 - 8L);
    *ptr0 = &loc_408749;
    long v9 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::base(v8);
    goto loc_4086C2;
}

// Package: std::_Iter_base<int*, false>

long std::_Iter_base<int*, false>::_S_base(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x73;
    char v1 = y74 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_4085F2:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x73;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y74 < 10 ? 1: 0);
        result = *ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_4085F2;
}

// Package: std::_Vector_base<int, std::allocator<int> >

long std::_Vector_base<int, std::allocator<int> >::_M_allocate(char param0, long param1) {
    unsigned int v0;
    char v1;
    long v2;
    long* ptr0;
    char v3;
    long v4;
    long v5;
    long v6;
    char v7;
    long v8 = (unsigned long)v7 | ((unsigned long)v5 << 8);
    long* ptr1 = &v4;
    unsigned int v9 = x85;
    int v10 = y86;
    long v11 = (unsigned long)param0 | ((unsigned long)v6 << 8);
    long v12 = param1;
    if(!(((((v9 - 1) * v9) & 0x1 ? 0: 1) | (v10 < 10 ? 1: 0)) & 0x1)) {
        long* ptr2 = ptr1 - 2;
        ptr1 = ptr2 - 2;
        *ptr2 = v11;
        *(ptr2 - 2) = v12;
        goto loc_408E67;
    }
    else {
    loc_408E67:
        long* ptr3 = ptr1 - 2;
        ptr1 = ptr3 - 2;
        *ptr3 = v11;
        *(ptr3 - 2) = v12;
        long v13 = *ptr3;
        param0 = *(ptr3 - 2) ? 1: 0;
        unsigned int v14 = x85;
        v3 = (((v14 - 1) * v14) & 0x1 ? 0: 1) | (y86 < 10 ? 1: 0);
        ptr0 = ptr3 - 2;
        v2 = v13;
        v1 = param0;
        if(!(v3 & 0x1)) {
            long* ptr2 = ptr1 - 2;
            ptr1 = ptr2 - 2;
            *ptr2 = v11;
            *(ptr2 - 2) = v12;
            goto loc_408E67;
        }
    }
    if((v1 & 0x1)) {
        unsigned int v15 = x85;
        if(!(((((v15 - 1) * v15) & 0x1 ? 0: 1) | (y86 < 10 ? 1: 0)) & 0x1)) {
            long v16 = *ptr0;
            --ptr1;
            *ptr1 = &loc_40911F;
            v4 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::allocate(v2, v16, 0L);
        }
    }
    else {
        do {
            v0 = x85;
        }
        while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y86 < 10 ? 1: 0)) & 0x1));
        long result = 0L;
        goto loc_40905A;
    loc_408F4B:
        long v17 = *ptr0;
        --ptr1;
        *ptr1 = &loc_408F56;
        long v18 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::allocate(v2, v17, 0L);
        unsigned int v19 = x85;
        v3 = (((v19 - 1) * v19) & 0x1 ? 0: 1) | (y86 < 10 ? 1: 0);
        long v20 = v18;
        if((v3 & 0x1)) {
            result = v20;
        loc_40905A:
            long v21 = (unsigned long)(x85 - 1);
            do {
                unsigned int v22 = x85;
                v21 = (unsigned long)((((v22 - 1) * v22) & 0x1 ? 0: 1) | (y86 < 10 ? 1: 0)) | ((unsigned long)((v21 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            while(!((unsigned char)v21 & 0x1));
            return result;
        }
        long v16 = *ptr0;
        --ptr1;
        *ptr1 = &loc_40911F;
        v4 = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::allocate(v2, v16, 0L);
    }
    goto loc_408F4B;
}

// Package: std::_Vector_base<int, std::allocator<int> >

long std::_Vector_base<int, std::allocator<int> >::_M_create_storage(long param0, long param1) {
    char v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x83;
    int v5 = y84;
    long v6 = param0;
    long v7 = param1;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_408D0C:
        *(long*)(ptr0 - 2) = v6;
        *(long*)(ptr0 - 4) = v7;
        long v8 = *(long*)(ptr0 - 2);
        long v9 = *(long*)(ptr0 - 4);
        long v10 = v8;
        long* ptr1 = (long*)(ptr0 - 4);
        ptr0 -= 5;
        *ptr0 = &loc_408D2C;
        long v11 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v8, v9);
        *(long*)v10 = v11;
        *(long*)(v10 + 8L) = *(long*)v10;
        long result = *ptr1 * 4L + *(long*)v10;
        *(long*)(v10 + 16L) = *ptr1 * 4L + *(long*)v10;
        unsigned int v12 = x83;
        if((((((v12 - 1) * v12) & 0x1 ? 0: 1) | (y84 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v6;
    *(long*)(ptr0 - 4) = v7;
    long v13 = *(long*)(ptr0 - 2);
    long v14 = *(long*)(ptr0 - 4);
    long v15 = v13;
    long* ptr2 = (long*)(ptr0 - 4);
    ptr0 -= 5;
    *ptr0 = &loc_408DDA;
    long v16 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v13, v14);
    *(long*)v15 = v16;
    *(long*)(v15 + 8L) = *(long*)v15;
    *(long*)(v15 + 16L) = *ptr2 * 4L + *(long*)v15;
    goto loc_408D0C;
}

// Package: std::_Vector_base<int, std::allocator<int> >

unsigned int std::_Vector_base<int, std::allocator<int> >::_M_deallocate(long param0, long param1, long param2, long param3, long param4, long param5) {
    unsigned int result;
    char v0;
    long v1;
    long* ptr0;
    long* ptr1;
    long v2;
    long v3;
    char v4;
    long v5;
    long v6;
    char v7;
    char v8;
    long v9;
    long v10 = (unsigned long)v7 | ((unsigned long)v5 << 8);
    long v11 = (unsigned long)v8 | ((unsigned long)v6 << 8);
    long v12 = v9;
    long* ptr2 = &v4;
    unsigned int v13 = x43;
    param5 = (unsigned long)((((v13 - 1) * v13) & 0x1 ? 0: 1) | (y44 < 10 ? 1: 0)) | ((unsigned long)((param5 >>> 8L) & 0xffffffffffffffL) << 8);
    long v14 = param1;
    long v15 = param0;
    long v16 = param2;
    if(!((unsigned char)param5 & 0x1)) {
        long* ptr3 = ptr2 - 2;
        ptr2 = ptr3 - 4;
        *ptr3 = v15;
        *(ptr3 - 2) = v14;
        *(ptr3 - 4) = v16;
        goto loc_407152;
    }
    else {
    loc_407152:
        long* ptr4 = ptr2 - 2;
        ptr2 = ptr4 - 4;
        *ptr4 = v15;
        *(ptr4 - 2) = v14;
        *(ptr4 - 4) = v16;
        long v17 = *ptr4;
        param5 = (unsigned long)(*(ptr4 - 2) ? 1: 0) | ((unsigned long)((param5 >>> 8L) & 0xffffffffffffffL) << 8);
        unsigned int v18 = x43;
        v3 = (unsigned long)y44;
        v2 = (unsigned long)(v18 - 1);
        ptr1 = ptr4 - 2;
        ptr0 = ptr4 - 4;
        v1 = v17;
        v0 = (unsigned char)param5;
        if(!(((((unsigned int)v2 * v18) & 0x1 ? 0: 1) | ((unsigned int)v3 < 10 ? 1: 0)) & 0x1)) {
            long* ptr3 = ptr2 - 2;
            ptr2 = ptr3 - 4;
            *ptr3 = v15;
            *(ptr3 - 2) = v14;
            *(ptr3 - 4) = v16;
            goto loc_407152;
        }
    }
    if((v0 & 0x1)) {
        unsigned int v19 = x43;
        if(!(((((v19 - 1) * v19) & 0x1 ? 0: 1) | (y44 < 10 ? 1: 0)) & 0x1)) {
            long v20 = *ptr1;
            long v21 = *ptr0;
            --ptr2;
            *ptr2 = &loc_40738D;
            /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::deallocate(v1, v20, v21);
            goto loc_407247;
        }
        else {
        loc_407247:
            long v22 = *ptr1;
            long v23 = *ptr0;
            --ptr2;
            *ptr2 = &loc_407259;
            /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::deallocate(v1, v22, v23);
            unsigned int v24 = x43;
            v2 = (unsigned long)((int)y44 < 10 ? 1: 0) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
            v3 = (unsigned long)((unsigned char)v2 | (((v24 - 1) * v24) & 0x1 ? 0: 1)) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!((unsigned char)v3 & 0x1)) {
                long v20 = *ptr1;
                long v21 = *ptr0;
                --ptr2;
                *ptr2 = &loc_40738D;
                /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::deallocate(v1, v20, v21);
                goto loc_407247;
            }
        }
    }
    do {
        result = x43;
    }
    while(!(((((result - 1) * result) & 0x1 ? 0: 1) | (y44 < 10 ? 1: 0)) & 0x1));
    return result;
}

// Package: std::_Vector_base<int, std::allocator<int> >

long std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x29;
    char v1 = y30 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_4064D2:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x29;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y30 < 10 ? 1: 0);
        result = *ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_4064D2;
}

// Package: std::_Vector_base<int, std::allocator<int> >

long std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(long param0) {
    long result;
    long* ptr0 = &result;
    unsigned int v0 = x39;
    char v1 = y40 < 10 ? 1: 0;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | v1) & 0x1)) {
    loc_406D42:
        long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        unsigned int v3 = x39;
        v1 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y40 < 10 ? 1: 0);
        result = *ptr1;
        if((v1 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 -= 2;
    *ptr2 = v2;
    goto loc_406D42;
}

// Package: std::_Vector_base<int, std::allocator<int> >

unsigned int std::_Vector_base<int, std::allocator<int> >::_Vector_base(long param0, long param1, long param2) {
    unsigned int result;
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6;
    long v7 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v8 = v5;
    long v9 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v10 = v6;
    unsigned long* ptr0 = &v0;
    unsigned int v11 = x31;
    int v12 = y32;
    long v13 = param1;
    long v14 = param0;
    long v15 = param2;
    if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
    loc_4065E7:
        *(long*)(ptr0 - 2) = v14;
        *(long*)(ptr0 - 4) = v13;
        *(long*)(ptr0 - 6) = v15;
        long v16 = *(long*)(ptr0 - 2);
        long v17 = *(long*)(ptr0 - 6);
        long* ptr1 = (long*)(ptr0 - 4);
        long v18 = v16;
        ptr0 -= 11;
        *ptr0 = &loc_406619;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(v16, v17);
        unsigned int v19 = x31;
        v3 = (((v19 - 1) * v19) & 0x1 ? 0: 1) | (y32 < 10 ? 1: 0);
        long v20 = *ptr1;
        if((v3 & 0x1)) {
            long v21 = v20;
            --ptr0;
            *ptr0 = &loc_40667C;
            /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_create_storage(v18, v21);
            do {
                result = x31;
            }
            while(!(((((result - 1) * result) & 0x1 ? 0: 1) | (y32 < 10 ? 1: 0)) & 0x1));
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v14;
    *(long*)(ptr0 - 4) = v13;
    *(long*)(ptr0 - 6) = v15;
    long v22 = *(long*)(ptr0 - 2);
    long v23 = *(long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_4068A2;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(v22, v23);
    goto loc_4065E7;
}

// Package: std::_Vector_base<int, std::allocator<int> >

long std::_Vector_base<int, std::allocator<int> >::_Vector_base2(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x155;
    int v2 = y156;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40DCBD:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40DCC8;
        long result = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl2(v4);
        unsigned int v5 = x155;
        if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y156 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v6 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_40DD2E;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl2(v6);
    goto loc_40DCBD;
}

// Package: std::_Vector_base<int, std::allocator<int> >::_Vector_impl

long std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(long param0, long param1) {
    char v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x81;
    int v5 = y82;
    long v6 = param0;
    long v7 = param1;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_408BBC:
        *(long*)(ptr0 - 2) = v6;
        *(long*)(ptr0 - 4) = v7;
        long v8 = *(long*)(ptr0 - 2);
        long v9 = *(long*)(ptr0 - 4);
        long v10 = v8;
        ptr0 -= 5;
        *ptr0 = &loc_408BD8;
        /*BAD_CALL!*/ std::allocator<int>::allocator(v8, v9);
        long result = v10;
        *(long*)result = 0L;
        *(long*)(result + 8L) = 0L;
        *(long*)(result + 16L) = 0L;
        unsigned int v11 = x81;
        if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (y82 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v6;
    *(long*)(ptr0 - 4) = v7;
    long v12 = *(long*)(ptr0 - 2);
    long v13 = *(long*)(ptr0 - 4);
    long v14 = v12;
    ptr0 -= 5;
    *ptr0 = &loc_408C7A;
    /*BAD_CALL!*/ std::allocator<int>::allocator(v12, v13);
    *(long*)v14 = 0L;
    *(long*)(v14 + 8L) = 0L;
    *(long*)(v14 + 16L) = 0L;
    goto loc_408BBC;
}

// Package: std::_Vector_base<int, std::allocator<int> >::_Vector_impl

long std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl2(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x157;
    int v2 = y158;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40DD9D:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        long v5 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40DDB2;
        /*BAD_CALL!*/ std::allocator<int>::allocator2(v4);
        long result = v5;
        *(long*)result = 0L;
        *(long*)(result + 8L) = 0L;
        *(long*)(result + 16L) = 0L;
        unsigned int v6 = x157;
        if((((((v6 - 1) * v6) & 0x1 ? 0: 1) | (y158 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v7 = *(long*)(ptr0 - 2);
    long v8 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_40DE3F;
    /*BAD_CALL!*/ std::allocator<int>::allocator2(v7);
    *(long*)v8 = 0L;
    *(long*)(v8 + 8L) = 0L;
    *(long*)(v8 + 16L) = 0L;
    goto loc_40DD9D;
}

// Package: std::_Vector_base<int, std::allocator<int> >::_Vector_impl

long* std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x45;
    int v2 = y46;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_4073FD:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40740B;
        long* result = /*BAD_CALL!*/ std::allocator<int>::~allocator(v4);
        unsigned int v5 = x45;
        if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y46 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v6 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_407474;
    /*BAD_CALL!*/ std::allocator<int>::~allocator(v6);
    goto loc_4073FD;
}

// Package: std::_Vector_base<int, std::allocator<int> >

long* std::_Vector_base<int, std::allocator<int> >::~_Vector_base(long param0) {
    long v0;
    char v1;
    long v2;
    long v3;
    long* result;
    char v4;
    char v5;
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v7 = (unsigned long)v5 | ((unsigned long)v3 << 8);
    unsigned long* ptr0 = &v1;
    unsigned int v8 = x41;
    int v9 = y42;
    long v10 = param0;
    if((((((v8 - 1) * v8) & 0x1 ? 0: 1) | (v9 < 10 ? 1: 0)) & 0x1)) {
    loc_406E15:
        unsigned long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 4;
        *ptr1 = v10;
        long v11 = *ptr1;
        long v12 = *(long*)v11;
        long v13 = (*(long*)(v11 + 16L) - v12) >> 2;
        unsigned int v14 = x41;
        v5 = (((v14 - 1) * v14) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0);
        long v15 = *(long*)v11;
        long v16 = (long)(ptr1 - 2);
        long* ptr2 = (long*)(ptr1 - 4);
        v0 = v11;
        long v17 = v13;
        if((v5 & 0x1)) {
            long v18 = v0;
            long v19 = v15;
            long v20 = v17;
            --ptr0;
            *ptr0 = &loc_406EBB;
            /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v18, v19, v20, (long)(ptr1 - 2), v12, (long)(((v14 - 1) * v14) & 0x1));
            unsigned int v21 = x41;
            if(!(((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0)) & 0x1)) {
                --ptr0;
                *ptr0 = &loc_4070C7;
                result = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(v0);
            }
            goto loc_406F07;
        }
    }
    long* ptr3 = (long*)(ptr0 - 2);
    ptr0 -= 2;
    *ptr3 = v10;
    goto loc_406E15;
loc_406F07:
    --ptr0;
    *ptr0 = &loc_406F0C;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(v0);
    unsigned int v22 = x41;
    if((((((v22 - 1) * v22) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0)) & 0x1)) {
        return result;
    }
    --ptr0;
    *ptr0 = &loc_4070C7;
    result = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(v0);
    goto loc_406F07;
}

// Package: std

long std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6;
    long v7 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v8 = v5;
    long v9 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v10 = v6;
    unsigned long* ptr0 = &v0;
    unsigned int v11 = x61;
    int v12 = y62;
    long v13 = param1;
    long v14 = param0;
    long v15 = param2;
    if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
    loc_407E9A:
        *(long*)(ptr0 - 2) = v14;
        *(long*)(ptr0 - 4) = v13;
        *(long*)(ptr0 - 6) = v15;
        *(long*)(ptr0 - 8) = *(long*)(ptr0 - 2);
        long v16 = *(long*)(ptr0 - 8);
        long* ptr1 = (long*)(ptr0 - 10);
        long* ptr2 = (long*)(ptr0 - 4);
        long* ptr3 = (long*)(ptr0 - 6);
        ptr0 -= 11;
        *ptr0 = &loc_407EC8;
        long v17 = /*BAD_CALL!*/ std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v16);
        *ptr1 = *ptr2;
        long v18 = *ptr1;
        long v19 = v17;
        --ptr0;
        *ptr0 = &loc_407EE2;
        long v20 = /*BAD_CALL!*/ std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v18);
        long v21 = *ptr3;
        long v22 = v20;
        --ptr0;
        *ptr0 = &loc_407EF2;
        long v23 = /*BAD_CALL!*/ std::__niter_base<int*>(v21);
        --ptr0;
        *ptr0 = &loc_407F02;
        long v24 = /*BAD_CALL!*/ std::__copy_move_a<false, int const*, int*>(v19, v22, v23);
        unsigned int v25 = x61;
        v3 = (((v25 - 1) * v25) & 0x1 ? 0: 1) | (y62 < 10 ? 1: 0);
        long result = v24;
        if((v3 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v14;
    *(long*)(ptr0 - 4) = v13;
    *(long*)(ptr0 - 6) = v15;
    *(long*)(ptr0 - 8) = *(long*)(ptr0 - 2);
    long v26 = *(long*)(ptr0 - 8);
    long* ptr4 = (long*)(ptr0 - 10);
    long* ptr5 = (long*)(ptr0 - 4);
    long* ptr6 = (long*)(ptr0 - 6);
    ptr0 -= 11;
    *ptr0 = &loc_407FC6;
    long v27 = /*BAD_CALL!*/ std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v26);
    *ptr4 = *ptr5;
    long v28 = *ptr4;
    long v29 = v27;
    --ptr0;
    *ptr0 = &loc_407FE3;
    long v30 = /*BAD_CALL!*/ std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v28);
    long v31 = *ptr6;
    long v32 = v30;
    --ptr0;
    *ptr0 = &loc_407FF6;
    long v33 = /*BAD_CALL!*/ std::__niter_base<int*>(v31);
    --ptr0;
    *ptr0 = &loc_40800C;
    long v34 = /*BAD_CALL!*/ std::__copy_move_a<false, int const*, int*>(v29, v32, v33);
    goto loc_407E9A;
}

// Package: std

long std::__copy_move_a2<false, int*, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x135;
    int v8 = y136;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40CABF:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long* ptr1 = (long*)(ptr0 - 4);
        long* ptr2 = (long*)(ptr0 - 6);
        ptr0 -= 7;
        *ptr0 = &loc_40CAE0;
        long v13 = /*BAD_CALL!*/ std::__niter_base<int*>(v12);
        long v14 = *ptr1;
        long v15 = v13;
        --ptr0;
        *ptr0 = &loc_40CAF0;
        long v16 = /*BAD_CALL!*/ std::__niter_base<int*>(v14);
        long v17 = *ptr2;
        long v18 = v16;
        --ptr0;
        *ptr0 = &loc_40CB00;
        long v19 = /*BAD_CALL!*/ std::__niter_base<int*>(v17);
        --ptr0;
        *ptr0 = &loc_40CB10;
        long v20 = /*BAD_CALL!*/ std::__copy_move_a<false, int*, int*>(v15, v18, v19);
        unsigned int v21 = x135;
        int v22 = y136;
        long result = v20;
        if((((((v21 - 1) * v21) & 0x1 ? 0: 1) | (v22 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v23 = *(long*)(ptr0 - 2);
    long* ptr3 = (long*)(ptr0 - 4);
    long* ptr4 = (long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_40CBAF;
    long v24 = /*BAD_CALL!*/ std::__niter_base<int*>(v23);
    long v25 = *ptr3;
    long v26 = v24;
    --ptr0;
    *ptr0 = &loc_40CBBF;
    long v27 = /*BAD_CALL!*/ std::__niter_base<int*>(v25);
    long v28 = *ptr4;
    long v29 = v27;
    --ptr0;
    *ptr0 = &loc_40CBCF;
    long v30 = /*BAD_CALL!*/ std::__niter_base<int*>(v28);
    --ptr0;
    *ptr0 = &loc_40CBDF;
    long v31 = /*BAD_CALL!*/ std::__copy_move_a<false, int*, int*>(v26, v29, v30);
    goto loc_40CABF;
}

// Package: std

long std::__copy_move_a<false, int const*, int*>(long param0, long param1, long param2) {
    long v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v7 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v8 = v5;
    unsigned long* ptr0 = &v0;
    unsigned int v9 = x67;
    int v10 = y68;
    long v11 = param1;
    long v12 = param0;
    long v13 = param2;
    if((((((v9 - 1) * v9) & 0x1 ? 0: 1) | (v10 < 10 ? 1: 0)) & 0x1)) {
    loc_4082CB:
        *(long*)(ptr0 - 2) = v12;
        *(long*)(ptr0 - 4) = v11;
        *(long*)(ptr0 - 6) = v13;
        *(char*)(ptr0 - 8) = 1;
        long v14 = *(long*)(ptr0 - 2);
        long v15 = *(long*)(ptr0 - 4);
        long v16 = *(long*)(ptr0 - 6);
        ptr0 -= 9;
        *ptr0 = &loc_4082ED;
        long v17 = /*BAD_CALL!*/ std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(v14, v15, v16);
        unsigned int v18 = x67;
        int v19 = y68;
        long result = v17;
        if((((((v18 - 1) * v18) & 0x1 ? 0: 1) | (v19 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v12;
    *(long*)(ptr0 - 4) = v11;
    *(long*)(ptr0 - 6) = v13;
    *(char*)(ptr0 - 8) = 1;
    long v20 = *(long*)(ptr0 - 2);
    long v21 = *(long*)(ptr0 - 4);
    long v22 = *(long*)(ptr0 - 6);
    ptr0 -= 9;
    *ptr0 = &loc_40839A;
    v0 = /*BAD_CALL!*/ std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(v20, v21, v22);
    goto loc_4082CB;
}

// Package: std

long std::__copy_move_a<false, int*, int*>(long param0, long param1, long param2) {
    long v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v7 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v8 = v5;
    unsigned long* ptr0 = &v0;
    unsigned int v9 = x139;
    int v10 = y140;
    long v11 = param1;
    long v12 = param0;
    long v13 = param2;
    if((((((v9 - 1) * v9) & 0x1 ? 0: 1) | (v10 < 10 ? 1: 0)) & 0x1)) {
    loc_40CD5B:
        *(long*)(ptr0 - 2) = v12;
        *(long*)(ptr0 - 4) = v11;
        *(long*)(ptr0 - 6) = v13;
        *(char*)(ptr0 - 8) = 1;
        long v14 = *(long*)(ptr0 - 2);
        long v15 = *(long*)(ptr0 - 4);
        long v16 = *(long*)(ptr0 - 6);
        ptr0 -= 9;
        *ptr0 = &loc_40CD7D;
        long v17 = /*BAD_CALL!*/ std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(v14, v15, v16);
        unsigned int v18 = x139;
        int v19 = y140;
        long result = v17;
        if((((((v18 - 1) * v18) & 0x1 ? 0: 1) | (v19 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v12;
    *(long*)(ptr0 - 4) = v11;
    *(long*)(ptr0 - 6) = v13;
    *(char*)(ptr0 - 8) = 1;
    long v20 = *(long*)(ptr0 - 2);
    long v21 = *(long*)(ptr0 - 4);
    long v22 = *(long*)(ptr0 - 6);
    ptr0 -= 9;
    *ptr0 = &loc_40CE2A;
    v0 = /*BAD_CALL!*/ std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(v20, v21, v22);
    goto loc_40CD5B;
}

// Package: std

long std::__copy_move_backward_a2<false, int*, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x147;
    int v8 = y148;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40D3EF:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long* ptr1 = (long*)(ptr0 - 4);
        long* ptr2 = (long*)(ptr0 - 6);
        ptr0 -= 7;
        *ptr0 = &loc_40D410;
        long v13 = /*BAD_CALL!*/ std::__niter_base<int*>(v12);
        long v14 = *ptr1;
        long v15 = v13;
        --ptr0;
        *ptr0 = &loc_40D420;
        long v16 = /*BAD_CALL!*/ std::__niter_base<int*>(v14);
        long v17 = *ptr2;
        long v18 = v16;
        --ptr0;
        *ptr0 = &loc_40D430;
        long v19 = /*BAD_CALL!*/ std::__niter_base<int*>(v17);
        --ptr0;
        *ptr0 = &loc_40D440;
        long v20 = /*BAD_CALL!*/ std::__copy_move_backward_a<false, int*, int*>(v15, v18, v19);
        unsigned int v21 = x147;
        int v22 = y148;
        long result = v20;
        if((((((v21 - 1) * v21) & 0x1 ? 0: 1) | (v22 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v23 = *(long*)(ptr0 - 2);
    long* ptr3 = (long*)(ptr0 - 4);
    long* ptr4 = (long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_40D4DF;
    long v24 = /*BAD_CALL!*/ std::__niter_base<int*>(v23);
    long v25 = *ptr3;
    long v26 = v24;
    --ptr0;
    *ptr0 = &loc_40D4EF;
    long v27 = /*BAD_CALL!*/ std::__niter_base<int*>(v25);
    long v28 = *ptr4;
    long v29 = v27;
    --ptr0;
    *ptr0 = &loc_40D4FF;
    long v30 = /*BAD_CALL!*/ std::__niter_base<int*>(v28);
    --ptr0;
    *ptr0 = &loc_40D50F;
    long v31 = /*BAD_CALL!*/ std::__copy_move_backward_a<false, int*, int*>(v26, v29, v30);
    goto loc_40D3EF;
}

// Package: std

long std::__copy_move_backward_a<false, int*, int*>(long param0, long param1, long param2) {
    long v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v7 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v8 = v5;
    unsigned long* ptr0 = &v0;
    unsigned int v9 = x149;
    int v10 = y150;
    long v11 = param1;
    long v12 = param0;
    long v13 = param2;
    if((((((v9 - 1) * v9) & 0x1 ? 0: 1) | (v10 < 10 ? 1: 0)) & 0x1)) {
    loc_40D5AB:
        *(long*)(ptr0 - 2) = v12;
        *(long*)(ptr0 - 4) = v11;
        *(long*)(ptr0 - 6) = v13;
        *(char*)(ptr0 - 8) = 1;
        long v14 = *(long*)(ptr0 - 2);
        long v15 = *(long*)(ptr0 - 4);
        long v16 = *(long*)(ptr0 - 6);
        ptr0 -= 9;
        *ptr0 = &loc_40D5CD;
        long v17 = /*BAD_CALL!*/ std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<int>(v14, v15, v16);
        unsigned int v18 = x149;
        int v19 = y150;
        long result = v17;
        if((((((v18 - 1) * v18) & 0x1 ? 0: 1) | (v19 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v12;
    *(long*)(ptr0 - 4) = v11;
    *(long*)(ptr0 - 6) = v13;
    *(char*)(ptr0 - 8) = 1;
    long v20 = *(long*)(ptr0 - 2);
    long v21 = *(long*)(ptr0 - 4);
    long v22 = *(long*)(ptr0 - 6);
    ptr0 -= 9;
    *ptr0 = &loc_40D67A;
    v0 = /*BAD_CALL!*/ std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<int>(v20, v21, v22);
    goto loc_40D5AB;
}

// Package: std::__copy_move_backward<false, true, std::random_access_iterator_tag>

long std::__copy_move_backward<false, true, std::random_access_iterator_tag>::__copy_move_b<int>(long param0, long param1, long param2) {
    long result;
    char v0;
    long* ptr0;
    long* ptr1;
    unsigned long* ptr2;
    long v1;
    long v2;
    long v3;
    long v4;
    char v5;
    long v6;
    long v7;
    char v8;
    char v9;
    long v10;
    long v11 = (unsigned long)v8 | ((unsigned long)v6 << 8);
    long v12 = (unsigned long)v9 | ((unsigned long)v7 << 8);
    long v13 = v10;
    unsigned long* ptr3 = &v5;
    unsigned int v14 = x151;
    int v15 = y152;
    long v16 = param1;
    long v17 = param0;
    long v18 = param2;
    if(!(((((v14 - 1) * v14) & 0x1 ? 0: 1) | (v15 < 10 ? 1: 0)) & 0x1)) {
    loc_40D936:
        long* ptr4 = (long*)(ptr3 - 2);
        ptr3 = (unsigned long*)(ptr4 - 6);
        *ptr4 = v17;
        *(ptr4 - 2) = v16;
        *(ptr4 - 4) = v18;
        *(ptr4 - 6) = (*(ptr4 - 2) - *ptr4) >> 2;
        goto loc_40D6F6;
    }
    else {
    loc_40D6F6:
        unsigned long* ptr5 = ptr3 - 2;
        ptr3 = ptr5 - 6;
        *ptr5 = v17;
        *(long*)(ptr5 - 2) = v16;
        *(long*)(ptr5 - 4) = v18;
        v4 = *ptr5;
        *(long*)(ptr5 - 6) = (*(long*)(ptr5 - 2) - v4) >> 2;
        v3 = (unsigned long)(*(long*)(ptr5 - 6) ? 1: 0) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        unsigned int v19 = x151;
        v2 = (unsigned long)y152;
        v1 = (unsigned long)(((v19 - 1) * v19) & 0x1);
        ptr2 = ptr5;
        ptr1 = (long*)(ptr5 - 4);
        ptr0 = (long*)(ptr5 - 6);
        v0 = (unsigned char)v3;
        if(!((((unsigned int)v2 < 10 ? 1: 0) | ((unsigned int)v1 ? 0: 1)) & 0x1)) {
            goto loc_40D936;
        }
    }
    if((v0 & 0x1)) {
        unsigned int v20 = x151;
        if(!(((((v20 - 1) * v20) & 0x1 ? 0: 1) | (y152 < 10 ? 1: 0)) & 0x1)) {
        loc_40D9AF:
            void* __dest = (void*)((0L - *ptr0) * 4L + *ptr1);
            void* __src = *ptr2;
            size_t __n = (size_t)(*ptr0 * 4L);
            --ptr3;
            *ptr3 = &loc_40D9BD;
            /*BAD_CALL!*/ →memmove(__dest, __src, __n);
            goto loc_40D81F;
        }
        else {
        loc_40D81F:
            void* __dest1 = (void*)((0L - *ptr0) * 4L + *ptr1);
            void* __src1 = *ptr2;
            size_t __n1 = (size_t)(*ptr0 * 4L);
            --ptr3;
            *ptr3 = &loc_40D82D;
            /*BAD_CALL!*/ →memmove(__dest1, __src1, __n1);
            unsigned int v21 = x151;
            v4 = (unsigned long)y152;
            v3 = (unsigned long)(v21 - 1);
            v2 = (unsigned long)((unsigned int)v4 < 10 ? 1: 0) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
            v1 = (unsigned long)((unsigned char)v2 | (((unsigned int)v3 * v21) & 0x1 ? 0: 1)) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!((unsigned char)v1 & 0x1)) {
                goto loc_40D9AF;
            }
        }
    }
    do {
        unsigned int v22 = x151;
        v3 = (unsigned long)(y152 < 10 ? 1: 0) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        v4 = (unsigned long)((unsigned char)v3 | (((v22 - 1) * v22) & 0x1 ? 0: 1)) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
        result = (0L - *ptr0) * 4L + *ptr1;
    }
    while(!((unsigned char)v4 & 0x1));
    return result;
}

// Package: std::__copy_move<false, true, std::random_access_iterator_tag>

long std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(long param0, long param1, long param2) {
    long result;
    char v0;
    long* ptr0;
    unsigned long* ptr1;
    unsigned long* ptr2;
    long v1;
    long v2;
    long v3;
    long v4;
    char v5;
    long v6;
    long v7;
    char v8;
    char v9;
    long v10;
    long v11 = (unsigned long)v8 | ((unsigned long)v6 << 8);
    long v12 = (unsigned long)v9 | ((unsigned long)v7 << 8);
    long v13 = v10;
    unsigned long* ptr3 = &v5;
    unsigned int v14 = x79;
    int v15 = y80;
    long v16 = param1;
    long v17 = param0;
    long v18 = param2;
    if(!(((((v14 - 1) * v14) & 0x1 ? 0: 1) | (v15 < 10 ? 1: 0)) & 0x1)) {
    loc_408AC8:
        long* ptr4 = (long*)(ptr3 - 2);
        ptr3 = (unsigned long*)(ptr4 - 6);
        *ptr4 = v17;
        *(ptr4 - 2) = v16;
        *(ptr4 - 4) = v18;
        *(ptr4 - 6) = (*(ptr4 - 2) - *ptr4) >> 2;
        goto loc_408896;
    }
    else {
    loc_408896:
        unsigned long* ptr5 = ptr3 - 2;
        ptr3 = ptr5 - 6;
        *ptr5 = v17;
        *(long*)(ptr5 - 2) = v16;
        *(ptr5 - 4) = v18;
        v4 = *ptr5;
        *(long*)(ptr5 - 6) = (*(long*)(ptr5 - 2) - v4) >> 2;
        v3 = (unsigned long)(*(long*)(ptr5 - 6) ? 1: 0) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        unsigned int v19 = x79;
        v2 = (unsigned long)y80;
        v1 = (unsigned long)(((v19 - 1) * v19) & 0x1);
        ptr2 = ptr5;
        ptr1 = ptr5 - 4;
        ptr0 = (long*)(ptr5 - 6);
        v0 = (unsigned char)v3;
        if(!((((unsigned int)v2 < 10 ? 1: 0) | ((unsigned int)v1 ? 0: 1)) & 0x1)) {
            goto loc_408AC8;
        }
    }
    if((v0 & 0x1)) {
        unsigned int v20 = x79;
        if(!(((((v20 - 1) * v20) & 0x1 ? 0: 1) | (y80 < 10 ? 1: 0)) & 0x1)) {
        loc_408B22:
            void* __src = *ptr2;
            void* __dest = *ptr1;
            size_t __n = (size_t)(*ptr0 * 4L);
            --ptr3;
            *ptr3 = &loc_408B3B;
            /*BAD_CALL!*/ →memmove(__dest, __src, __n);
            goto loc_4089A3;
        }
        else {
        loc_4089A3:
            void* __src1 = *ptr2;
            void* __dest1 = *ptr1;
            size_t __n1 = (size_t)(*ptr0 * 4L);
            --ptr3;
            *ptr3 = &loc_4089BC;
            /*BAD_CALL!*/ →memmove(__dest1, __src1, __n1);
            unsigned int v21 = x79;
            v4 = (unsigned long)y80;
            v3 = (unsigned long)(v21 - 1);
            v2 = (unsigned long)((unsigned int)v4 < 10 ? 1: 0) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
            v1 = (unsigned long)((unsigned char)v2 | (((unsigned int)v3 * v21) & 0x1 ? 0: 1)) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
            if(!((unsigned char)v1 & 0x1)) {
                goto loc_408B22;
            }
        }
    }
    do {
        unsigned int v22 = x79;
        v3 = (unsigned long)(y80 < 10 ? 1: 0) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        v4 = (unsigned long)((unsigned char)v3 | (((v22 - 1) * v22) & 0x1 ? 0: 1)) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
        result = *ptr0 * 4L + *ptr1;
    }
    while(!((unsigned char)v4 & 0x1));
    return result;
}

// Package: std

long std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(long param0) {
    char v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x63;
    int v5 = y64;
    long v6 = param0;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_408092:
        *(long*)(ptr0 - 4) = v6;
        *(long*)(ptr0 - 6) = *(long*)(ptr0 - 4);
        long v7 = *(long*)(ptr0 - 6);
        long* ptr1 = (long*)(ptr0 - 2);
        ptr0 -= 7;
        *ptr0 = &loc_4080A7;
        long v8 = /*BAD_CALL!*/ std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(v7);
        *ptr1 = v8;
        unsigned int v9 = x63;
        char v10 = (((v9 - 1) * v9) & 0x1 ? 0: 1) | (y64 < 10 ? 1: 0);
        long result = *ptr1;
        if((v10 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 4) = v6;
    *(long*)(ptr0 - 6) = *(long*)(ptr0 - 4);
    long v11 = *(long*)(ptr0 - 6);
    long* ptr2 = (long*)(ptr0 - 2);
    ptr0 -= 7;
    *ptr0 = &loc_408143;
    long v12 = /*BAD_CALL!*/ std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, false>::_S_base(v11);
    *ptr2 = v12;
    goto loc_408092;
}

// Package: std

long std::__miter_base<int*>(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x137;
    int v2 = y138;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40CC4D:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40CC58;
        long v5 = /*BAD_CALL!*/ std::_Iter_base<int*, false>::_S_base(v4);
        unsigned int v6 = x137;
        char v7 = (((v6 - 1) * v6) & 0x1 ? 0: 1) | (y138 < 10 ? 1: 0);
        long result = v5;
        if((v7 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v8 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_40CCC6;
    long v9 = /*BAD_CALL!*/ std::_Iter_base<int*, false>::_S_base(v8);
    goto loc_40CC4D;
}

// Package: std

long std::__niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x69;
    int v2 = y70;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_408417:
        *(long*)(ptr0 - 2) = v3;
        *(long*)(ptr0 - 4) = *(long*)(ptr0 - 2);
        long v4 = *(long*)(ptr0 - 4);
        ptr0 -= 5;
        *ptr0 = &loc_408428;
        long v5 = /*BAD_CALL!*/ std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(v4);
        unsigned int v6 = x69;
        char v7 = (((v6 - 1) * v6) & 0x1 ? 0: 1) | (y70 < 10 ? 1: 0);
        long result = v5;
        if((v7 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    *(long*)(ptr0 - 4) = *(long*)(ptr0 - 2);
    long v8 = *(long*)(ptr0 - 4);
    ptr0 -= 5;
    *ptr0 = &loc_4084A8;
    long v9 = /*BAD_CALL!*/ std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, true>::_S_base(v8);
    goto loc_408417;
}

// Package: std

long std::__niter_base<int*>(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x71;
    int v2 = y72;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40851D:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_408528;
        long v5 = /*BAD_CALL!*/ std::_Iter_base<int*, false>::_S_base(v4);
        unsigned int v6 = x71;
        char v7 = (((v6 - 1) * v6) & 0x1 ? 0: 1) | (y72 < 10 ? 1: 0);
        long result = v5;
        if((v7 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v8 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_408596;
    long v9 = /*BAD_CALL!*/ std::_Iter_base<int*, false>::_S_base(v8);
    goto loc_40851D;
}

// Package: std

long std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(long param0, long param1, long param2, long param3) {
    char v0;
    long v1;
    char v2;
    long v3;
    long v4;
    long v5 = (unsigned long)v2 | ((unsigned long)v1 << 8);
    long v6 = v3;
    long v7 = v4;
    unsigned long* ptr0 = &v0;
    unsigned int v8 = x33;
    int v9 = y34;
    long v10 = param2;
    long v11 = param1;
    long v12 = param0;
    long v13 = param3;
    if((((((v8 - 1) * v8) & 0x1 ? 0: 1) | (v9 < 10 ? 1: 0)) & 0x1)) {
    loc_406979:
        *(long*)(ptr0 - 2) = v12;
        *(long*)(ptr0 - 4) = v11;
        *(long*)(ptr0 - 6) = v10;
        *(long*)(ptr0 - 8) = v13;
        *(long*)(ptr0 - 10) = *(long*)(ptr0 - 2);
        *(long*)(ptr0 - 12) = *(long*)(ptr0 - 4);
        long v14 = *(long*)(ptr0 - 6);
        long v15 = *(long*)(ptr0 - 10);
        long v16 = *(long*)(ptr0 - 12);
        ptr0 -= 13;
        *ptr0 = &loc_4069AB;
        long v17 = /*BAD_CALL!*/ std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v15, v16, v14);
        unsigned int v18 = x33;
        char v19 = y34 < 10 ? 1: 0;
        long result = v17;
        if((((((v18 - 1) * v18) & 0x1 ? 0: 1) | v19) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v12;
    *(long*)(ptr0 - 4) = v11;
    *(long*)(ptr0 - 6) = v10;
    *(long*)(ptr0 - 8) = v13;
    *(long*)(ptr0 - 10) = *(long*)(ptr0 - 2);
    *(long*)(ptr0 - 12) = *(long*)(ptr0 - 4);
    long v20 = *(long*)(ptr0 - 6);
    long v21 = *(long*)(ptr0 - 10);
    long v22 = *(long*)(ptr0 - 12);
    ptr0 -= 13;
    *ptr0 = &loc_406A80;
    long v23 = /*BAD_CALL!*/ std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v21, v22, v20);
    goto loc_406979;
}

// Package: std

long std::__uninitialized_copy_a<int*, int*, int>(long param0, long param1, long param2, long param3) {
    long v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6;
    long v7 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v8 = v5;
    long v9 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v10 = v6;
    unsigned long* ptr0 = &v0;
    unsigned int v11 = x127;
    int v12 = y128;
    long v13 = param2;
    long v14 = param1;
    long v15 = param0;
    long v16 = param3;
    if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
    loc_40C523:
        *(long*)(ptr0 - 2) = v15;
        *(long*)(ptr0 - 4) = v14;
        *(long*)(ptr0 - 6) = v13;
        *(long*)(ptr0 - 8) = v16;
        long v17 = *(long*)(ptr0 - 2);
        long v18 = *(long*)(ptr0 - 4);
        long v19 = *(long*)(ptr0 - 6);
        ptr0 -= 9;
        *ptr0 = &loc_40C549;
        long v20 = /*BAD_CALL!*/ std::uninitialized_copy<int*, int*>(v17, v18, v19);
        unsigned int v21 = x127;
        v3 = (((v21 - 1) * v21) & 0x1 ? 0: 1) | (y128 < 10 ? 1: 0);
        long result = v20;
        if((v3 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v15;
    *(long*)(ptr0 - 4) = v14;
    *(long*)(ptr0 - 6) = v13;
    *(long*)(ptr0 - 8) = v16;
    long v22 = *(long*)(ptr0 - 2);
    long v23 = *(long*)(ptr0 - 4);
    long v24 = *(long*)(ptr0 - 6);
    ptr0 -= 9;
    *ptr0 = &loc_40C5FB;
    v0 = /*BAD_CALL!*/ std::uninitialized_copy<int*, int*>(v22, v23, v24);
    goto loc_40C523;
}

// Package: std::__uninitialized_copy<true>

long std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6;
    long v7 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v8 = v5;
    long v9 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v10 = v6;
    unsigned long* ptr0 = &v0;
    unsigned int v11 = x57;
    int v12 = y58;
    long v13 = param1;
    long v14 = param0;
    long v15 = param2;
    if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
    loc_407A97:
        *(long*)(ptr0 - 2) = v14;
        *(long*)(ptr0 - 4) = v13;
        *(long*)(ptr0 - 6) = v15;
        *(long*)(ptr0 - 8) = *(long*)(ptr0 - 2);
        *(long*)(ptr0 - 10) = *(long*)(ptr0 - 4);
        long v16 = *(long*)(ptr0 - 6);
        long v17 = *(long*)(ptr0 - 10);
        long v18 = *(long*)(ptr0 - 8);
        ptr0 -= 11;
        *ptr0 = &loc_407AC5;
        long v19 = /*BAD_CALL!*/ std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v18, v17, v16);
        unsigned int v20 = x57;
        v3 = (((v20 - 1) * v20) & 0x1 ? 0: 1) | (y58 < 10 ? 1: 0);
        long result = v19;
        if((v3 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v14;
    *(long*)(ptr0 - 4) = v13;
    *(long*)(ptr0 - 6) = v15;
    *(long*)(ptr0 - 8) = *(long*)(ptr0 - 2);
    *(long*)(ptr0 - 10) = *(long*)(ptr0 - 4);
    long v21 = *(long*)(ptr0 - 6);
    long v22 = *(long*)(ptr0 - 10);
    long v23 = *(long*)(ptr0 - 8);
    ptr0 -= 11;
    *ptr0 = &loc_407B89;
    long v24 = /*BAD_CALL!*/ std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v23, v22, v21);
    goto loc_407A97;
}

// Package: std::__uninitialized_copy<true>

long std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x131;
    int v8 = y132;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40C7DF:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long v13 = *(long*)(ptr0 - 4);
        long v14 = *(long*)(ptr0 - 6);
        ptr0 -= 7;
        *ptr0 = &loc_40C7FE;
        long v15 = /*BAD_CALL!*/ std::copy<int*, int*>(v12, v13, v14);
        unsigned int v16 = x131;
        int v17 = y132;
        long result = v15;
        if((((((v16 - 1) * v16) & 0x1 ? 0: 1) | (v17 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v18 = *(long*)(ptr0 - 2);
    long v19 = *(long*)(ptr0 - 4);
    long v20 = *(long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_40C89B;
    long v21 = /*BAD_CALL!*/ std::copy<int*, int*>(v18, v19, v20);
    goto loc_40C7DF;
}

// Package: std

long std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(long param0, long param1, long param2, long param3) {
    long v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6;
    long v7 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v8 = v5;
    long v9 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v10 = v6;
    unsigned long* ptr0 = &v0;
    unsigned int v11 = x115;
    int v12 = y116;
    long v13 = param2;
    long v14 = param1;
    long v15 = param0;
    long v16 = param3;
    if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
    loc_40BE63:
        *(long*)(ptr0 - 2) = v15;
        *(long*)(ptr0 - 4) = v14;
        *(long*)(ptr0 - 6) = v13;
        *(long*)(ptr0 - 8) = v16;
        long v17 = *(long*)(ptr0 - 2);
        long v18 = *(long*)(ptr0 - 6);
        long v19 = *(long*)(ptr0 - 8);
        long v20 = *(long*)(ptr0 - 4);
        ptr0 -= 9;
        *ptr0 = &loc_40BE8F;
        long v21 = /*BAD_CALL!*/ std::__uninitialized_copy_a<int*, int*, int>(v17, v20, v18, v19);
        unsigned int v22 = x115;
        v3 = (((v22 - 1) * v22) & 0x1 ? 0: 1) | (y116 < 10 ? 1: 0);
        long result = v21;
        if((v3 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v15;
    *(long*)(ptr0 - 4) = v14;
    *(long*)(ptr0 - 6) = v13;
    *(long*)(ptr0 - 8) = v16;
    long v23 = *(long*)(ptr0 - 2);
    long v24 = *(long*)(ptr0 - 6);
    long v25 = *(long*)(ptr0 - 8);
    long v26 = *(long*)(ptr0 - 4);
    ptr0 -= 9;
    *ptr0 = &loc_40BF47;
    v0 = /*BAD_CALL!*/ std::__uninitialized_copy_a<int*, int*, int>(v23, v26, v24, v25);
    goto loc_40BE63;
}

// Package: std::allocator<int>

long std::allocator<int>::allocator(long param0, long param1) {
    char v0;
    char v1;
    long v2;
    long v3 = (unsigned long)v1 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v4 = x91;
    int v5 = y92;
    long v6 = param0;
    long v7 = param1;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_40953C:
        *(long*)(ptr0 - 2) = v6;
        *(long*)(ptr0 - 4) = v7;
        long v8 = *(long*)(ptr0 - 2);
        long v9 = *(long*)(ptr0 - 4);
        ptr0 -= 5;
        *ptr0 = &loc_409557;
        long result = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::new_allocator(v8, v9);
        unsigned int v10 = x91;
        if((((((v10 - 1) * v10) & 0x1 ? 0: 1) | (y92 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v6;
    *(long*)(ptr0 - 4) = v7;
    long v11 = *(long*)(ptr0 - 2);
    long v12 = *(long*)(ptr0 - 4);
    ptr0 -= 5;
    *ptr0 = &loc_4095DD;
    /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::new_allocator(v11, v12);
    goto loc_40953C;
}

// Package: std::allocator<int>

long* std::allocator<int>::allocator2(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x159;
    int v2 = y160;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40DEBD:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40DECB;
        long* result = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::new_allocator2(v4);
        unsigned int v5 = x159;
        if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y160 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v6 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_40DF34;
    /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::new_allocator2(v6);
    goto loc_40DEBD;
}

// Package: std::allocator<int>

long* std::allocator<int>::~allocator(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x47;
    int v2 = y48;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_4074DD:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_4074EB;
        long* result = /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::~new_allocator(v4);
        unsigned int v5 = x47;
        if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y48 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v6 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_407554;
    /*BAD_CALL!*/ __gnu_cxx::new_allocator<int>::~new_allocator(v6);
    goto loc_4074DD;
}

// Package: std::char_traits<char>

size_t std::char_traits<char>::length(char* __s) {
    return →strlen(__s);
}

// Package: std

long std::copy_backward<int*, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x103;
    int v8 = y104;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40B21F:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long* ptr1 = (long*)(ptr0 - 4);
        long* ptr2 = (long*)(ptr0 - 6);
        ptr0 -= 7;
        *ptr0 = &loc_40B240;
        long v13 = /*BAD_CALL!*/ std::__miter_base<int*>(v12);
        long v14 = *ptr1;
        long v15 = v13;
        --ptr0;
        *ptr0 = &loc_40B250;
        long v16 = /*BAD_CALL!*/ std::__miter_base<int*>(v14);
        long v17 = *ptr2;
        --ptr0;
        *ptr0 = &loc_40B263;
        long v18 = /*BAD_CALL!*/ std::__copy_move_backward_a2<false, int*, int*>(v15, v16, v17);
        unsigned int v19 = x103;
        int v20 = y104;
        long result = v18;
        if((((((v19 - 1) * v19) & 0x1 ? 0: 1) | (v20 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v21 = *(long*)(ptr0 - 2);
    long* ptr3 = (long*)(ptr0 - 4);
    long* ptr4 = (long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_40B302;
    long v22 = /*BAD_CALL!*/ std::__miter_base<int*>(v21);
    long v23 = *ptr3;
    long v24 = v22;
    --ptr0;
    *ptr0 = &loc_40B312;
    long v25 = /*BAD_CALL!*/ std::__miter_base<int*>(v23);
    long v26 = *ptr4;
    --ptr0;
    *ptr0 = &loc_40B325;
    long v27 = /*BAD_CALL!*/ std::__copy_move_backward_a2<false, int*, int*>(v24, v25, v26);
    goto loc_40B21F;
}

// Package: std

long std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(long param0, long param1, long param2) {
    long v0;
    long v1;
    char v2;
    long v3;
    long v4;
    long v5 = (unsigned long)v2 | ((unsigned long)v1 << 8);
    long v6 = v3;
    long v7 = v4;
    unsigned long* ptr0 = &v0;
    unsigned int v8 = x59;
    int v9 = y60;
    long v10 = param1;
    long v11 = param0;
    long v12 = param2;
    if((((((v8 - 1) * v8) & 0x1 ? 0: 1) | (v9 < 10 ? 1: 0)) & 0x1)) {
    loc_407C4D:
        *(long*)(ptr0 - 2) = v11;
        *(long*)(ptr0 - 4) = v10;
        *(long*)(ptr0 - 6) = v12;
        *(long*)(ptr0 - 10) = *(long*)(ptr0 - 2);
        long v13 = *(long*)(ptr0 - 10);
        long* ptr1 = (long*)(ptr0 - 4);
        long* ptr2 = (long*)(ptr0 - 6);
        long* ptr3 = (long*)(ptr0 - 8);
        long* ptr4 = (long*)(ptr0 - 12);
        long* ptr5 = (long*)(ptr0 - 14);
        *(long*)(ptr0 - 15) = &loc_407C80;
        long v14 = /*BAD_CALL!*/ std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v13);
        *ptr3 = v14;
        *ptr5 = *ptr1;
        long v15 = *ptr5;
        *(long*)(ptr0 - 16) = &loc_407C9D;
        long v16 = /*BAD_CALL!*/ std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v15);
        *ptr4 = v16;
        long v17 = *ptr2;
        long v18 = *ptr3;
        long v19 = *ptr4;
        ptr0 -= 17;
        *ptr0 = &loc_407CBA;
        long v20 = /*BAD_CALL!*/ std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v18, v19, v17);
        unsigned int v21 = x59;
        char v22 = y60 < 10 ? 1: 0;
        long result = v20;
        if((((((v21 - 1) * v21) & 0x1 ? 0: 1) | v22) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v11;
    *(long*)(ptr0 - 4) = v10;
    *(long*)(ptr0 - 6) = v12;
    *(long*)(ptr0 - 10) = *(long*)(ptr0 - 2);
    long v23 = *(long*)(ptr0 - 10);
    long* ptr6 = (long*)(ptr0 - 4);
    long* ptr7 = (long*)(ptr0 - 6);
    long* ptr8 = (long*)(ptr0 - 8);
    long* ptr9 = (long*)(ptr0 - 12);
    long* ptr10 = (long*)(ptr0 - 14);
    *(long*)(ptr0 - 15) = &loc_407DA3;
    long v24 = /*BAD_CALL!*/ std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v23);
    *ptr8 = v24;
    *ptr10 = *ptr6;
    long v25 = *ptr10;
    *(long*)(ptr0 - 16) = &loc_407DC6;
    long v26 = /*BAD_CALL!*/ std::__miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > > >(v25);
    *ptr9 = v26;
    long v27 = *ptr7;
    long v28 = *ptr8;
    long v29 = *ptr9;
    ptr0 -= 17;
    *ptr0 = &loc_407DE9;
    v0 = /*BAD_CALL!*/ std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v28, v29, v27);
    goto loc_407C4D;
}

// Package: std

long std::copy<int*, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x133;
    int v8 = y134;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40C92F:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long* ptr1 = (long*)(ptr0 - 4);
        long* ptr2 = (long*)(ptr0 - 6);
        ptr0 -= 7;
        *ptr0 = &loc_40C950;
        long v13 = /*BAD_CALL!*/ std::__miter_base<int*>(v12);
        long v14 = *ptr1;
        long v15 = v13;
        --ptr0;
        *ptr0 = &loc_40C960;
        long v16 = /*BAD_CALL!*/ std::__miter_base<int*>(v14);
        long v17 = *ptr2;
        --ptr0;
        *ptr0 = &loc_40C973;
        long v18 = /*BAD_CALL!*/ std::__copy_move_a2<false, int*, int*>(v15, v16, v17);
        unsigned int v19 = x133;
        int v20 = y134;
        long result = v18;
        if((((((v19 - 1) * v19) & 0x1 ? 0: 1) | (v20 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v21 = *(long*)(ptr0 - 2);
    long* ptr3 = (long*)(ptr0 - 4);
    long* ptr4 = (long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_40CA12;
    long v22 = /*BAD_CALL!*/ std::__miter_base<int*>(v21);
    long v23 = *ptr3;
    long v24 = v22;
    --ptr0;
    *ptr0 = &loc_40CA22;
    long v25 = /*BAD_CALL!*/ std::__miter_base<int*>(v23);
    long v26 = *ptr4;
    --ptr0;
    *ptr0 = &loc_40CA35;
    long v27 = /*BAD_CALL!*/ std::__copy_move_a2<false, int*, int*>(v24, v25, v26);
    goto loc_40C92F;
}

// Package: std

long std::max<unsigned long>(long param0, long param1) {
    long result;
    long v0;
    long v1;
    char v2;
    unsigned long* ptr0;
    unsigned long* ptr1;
    long* ptr2;
    unsigned long* ptr3;
    char v3;
    long v4;
    long v5;
    char v6;
    char v7;
    long v8;
    long v9;
    long v10 = (unsigned long)v7 | ((unsigned long)v4 << 8);
    long v11 = v8;
    long v12 = (unsigned long)v6 | ((unsigned long)v5 << 8);
    long v13 = v9;
    unsigned long* ptr4 = &v3;
    unsigned int v14 = x143;
    int v15 = y144;
    long v16 = param0;
    long v17 = param1;
    if(!(((((v14 - 1) * v14) & 0x1 ? 0: 1) | (v15 < 10 ? 1: 0)) & 0x1)) {
        long* ptr5 = (long*)(ptr4 - 4);
        ptr4 = (unsigned long*)(ptr5 - 2);
        *ptr5 = v16;
        *(ptr5 - 2) = v17;
        goto loc_40CF9D;
    }
    else {
    loc_40CF9D:
        long* ptr6 = (long*)(ptr4 - 2);
        ptr4 = (unsigned long*)(ptr6 - 4);
        *(unsigned long*)(ptr6 - 2) = v16;
        *(unsigned long*)(ptr6 - 4) = v17;
        ptr3 = *(unsigned long*)(ptr6 - 4);
        char v18 = **(unsigned long*)(ptr6 - 2) < *ptr3 ? 1: 0;
        unsigned int v19 = x143;
        v7 = (((v19 - 1) * v19) & 0x1 ? 0: 1) | (y144 < 10 ? 1: 0);
        ptr2 = ptr6;
        ptr1 = (unsigned long*)(ptr6 - 2);
        ptr0 = (unsigned long*)(ptr6 - 4);
        v2 = v18;
        if(!(v7 & 0x1)) {
            long* ptr5 = (long*)(ptr4 - 4);
            ptr4 = (unsigned long*)(ptr5 - 2);
            *ptr5 = v16;
            *(ptr5 - 2) = v17;
            goto loc_40CF9D;
        }
    }
    if((v2 & 0x1)) {
        unsigned int v20 = x143;
        if(!(((((v20 - 1) * v20) & 0x1 ? 0: 1) | (y144 < 10 ? 1: 0)) & 0x1)) {
            *ptr2 = *ptr0;
        }
        goto loc_40D08F;
    }
    else {
        unsigned int v21 = x143;
        if((((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y144 < 10 ? 1: 0)) & 0x1)) {
            goto loc_40D12D;
        loc_40D08F:
            *ptr2 = *ptr0;
            unsigned int v22 = x143;
            v1 = (unsigned long)y144;
            v0 = (unsigned long)(v22 - 1);
            ptr3 = (unsigned long)((((v22 - 1) * v22) & 0x1 ? 0: 1) | ((unsigned int)v1 < 10 ? 1: 0)) | ((unsigned long)(long*)((long)(long*)((long)ptr3 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)ptr3 & 0x1) {
                goto loc_40D1AA;
            }
            else {
                *ptr2 = *ptr0;
                goto loc_40D08F;
            loc_40D12D:
                *ptr2 = *ptr1;
                unsigned int v23 = x143;
                v1 = (unsigned long)y144;
                v0 = (unsigned long)(v23 - 1);
                ptr3 = (unsigned long)((((v23 - 1) * v23) & 0x1 ? 0: 1) | ((unsigned int)v1 < 10 ? 1: 0)) | ((unsigned long)(long*)((long)(long*)((long)ptr3 >>> 8L) & 0xffffffffffffffL) << 8);
                if(((unsigned char)ptr3 & 0x1)) {
                    goto loc_40D1AA;
                }
            }
        }
        *ptr2 = *ptr1;
        goto loc_40D12D;
    }
loc_40D1AA:
    v1 = (unsigned long)(y144 < 10 ? 1: 0) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
    do {
        unsigned int v24 = x143;
        v0 = (unsigned long)(y144 < 10 ? 1: 0) | ((unsigned long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        v1 = (unsigned long)((unsigned char)v0 | (((v24 - 1) * v24) & 0x1 ? 0: 1)) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
        result = *ptr2;
    }
    while(!((unsigned char)v1 & 0x1));
    return result;
}

// Package: std

long std::operator+<char, std::char_traits<char>, std::allocator<char> >(long param0, long param1, long param2) {
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
    →std::string::append2();
    return param0;
}

// Package: std

long std::operator+<char, std::char_traits<char>, std::allocator<char> >2(long param0, char* __s, long param2) {
    long result = param0;
    size_t v0 = std::char_traits<char>::length(__s);
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string();
    →std::string::size();
    →std::string::reserve();
    →std::string::append();
    →std::string::append3();
    return result;
}

// Package: std

long std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5;
    long v6;
    long v7 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v8 = v5;
    long v9 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    long v10 = v6;
    unsigned long* ptr0 = &v0;
    unsigned int v11 = x55;
    int v12 = y56;
    long v13 = param1;
    long v14 = param0;
    long v15 = param2;
    if((((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
    loc_4078F7:
        *(long*)(ptr0 - 2) = v14;
        *(long*)(ptr0 - 4) = v13;
        *(long*)(ptr0 - 6) = v15;
        *(long*)(ptr0 - 8) = *(long*)(ptr0 - 2);
        *(long*)(ptr0 - 10) = *(long*)(ptr0 - 4);
        long v16 = *(long*)(ptr0 - 6);
        long v17 = *(long*)(ptr0 - 10);
        long v18 = *(long*)(ptr0 - 8);
        ptr0 -= 11;
        *ptr0 = &loc_407925;
        long v19 = /*BAD_CALL!*/ std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v18, v17, v16);
        unsigned int v20 = x55;
        v3 = (((v20 - 1) * v20) & 0x1 ? 0: 1) | (y56 < 10 ? 1: 0);
        long result = v19;
        if((v3 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v14;
    *(long*)(ptr0 - 4) = v13;
    *(long*)(ptr0 - 6) = v15;
    *(long*)(ptr0 - 8) = *(long*)(ptr0 - 2);
    *(long*)(ptr0 - 10) = *(long*)(ptr0 - 4);
    long v21 = *(long*)(ptr0 - 6);
    long v22 = *(long*)(ptr0 - 10);
    long v23 = *(long*)(ptr0 - 8);
    ptr0 -= 11;
    *ptr0 = &loc_4079E9;
    long v24 = /*BAD_CALL!*/ std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*>(v23, v22, v21);
    goto loc_4078F7;
}

// Package: std

long std::uninitialized_copy<int*, int*>(long param0, long param1, long param2) {
    char v0;
    long v1;
    long v2;
    char v3;
    char v4;
    long v5 = (unsigned long)v3 | ((unsigned long)v1 << 8);
    long v6 = (unsigned long)v4 | ((unsigned long)v2 << 8);
    unsigned long* ptr0 = &v0;
    unsigned int v7 = x129;
    int v8 = y130;
    long v9 = param1;
    long v10 = param0;
    long v11 = param2;
    if((((((v7 - 1) * v7) & 0x1 ? 0: 1) | (v8 < 10 ? 1: 0)) & 0x1)) {
    loc_40C68F:
        *(long*)(ptr0 - 2) = v10;
        *(long*)(ptr0 - 4) = v9;
        *(long*)(ptr0 - 6) = v11;
        long v12 = *(long*)(ptr0 - 2);
        long v13 = *(long*)(ptr0 - 4);
        long v14 = *(long*)(ptr0 - 6);
        ptr0 -= 7;
        *ptr0 = &loc_40C6AE;
        long v15 = /*BAD_CALL!*/ std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(v12, v13, v14);
        unsigned int v16 = x129;
        int v17 = y130;
        long result = v15;
        if((((((v16 - 1) * v16) & 0x1 ? 0: 1) | (v17 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v10;
    *(long*)(ptr0 - 4) = v9;
    *(long*)(ptr0 - 6) = v11;
    long v18 = *(long*)(ptr0 - 2);
    long v19 = *(long*)(ptr0 - 4);
    long v20 = *(long*)(ptr0 - 6);
    ptr0 -= 7;
    *ptr0 = &loc_40C74B;
    long v21 = /*BAD_CALL!*/ std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(v18, v19, v20);
    goto loc_40C68F;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::_M_check_len(long param0, long param1, long param2, long param3, long param4, long param5) {
    long result;
    long v0;
    long v1;
    char v2;
    char v3;
    long v4;
    unsigned long* ptr0;
    long v5;
    long v6;
    char v7;
    char v8;
    long v9;
    char v10;
    long v11;
    long v12;
    long v13 = (unsigned long)v8 | ((unsigned long)v11 << 8);
    long v14 = (unsigned long)v7 | ((unsigned long)v12 << 8);
    long v15 = v9;
    unsigned long* ptr1 = &v10;
    unsigned int v16 = x109;
    int v17 = y110;
    long v18 = param1;
    long v19 = param0;
    long v20 = param2;
    if(!(((((v16 - 1) * v16) & 0x1 ? 0: 1) | (v17 < 10 ? 1: 0)) & 0x1)) {
    loc_40BA93:
        *(long*)(ptr1 - 2) = v19;
        *(long*)(ptr1 - 4) = v18;
        *(long*)(ptr1 - 6) = v20;
        long v21 = *(long*)(ptr1 - 2);
        long v22 = *(long*)(ptr1 - 2);
        ptr1 -= 7;
        *ptr1 = &loc_40BAB6;
        long v23 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v21);
        --ptr1;
        *ptr1 = &loc_40BAC9;
        long v24 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v22);
        goto loc_40B56C;
    }
    else {
    loc_40B56C:
        *(long*)(ptr1 - 2) = v19;
        *(long*)(long)(ptr1 - 4) = v18;
        *(long*)(ptr1 - 6) = v20;
        long v25 = *(long*)(ptr1 - 2);
        v6 = (long)(ptr1 - 10);
        v5 = (long)(ptr1 - 4);
        long* ptr2 = (long*)(ptr1 - 6);
        ptr0 = ptr1 - 8;
        v4 = v25;
        ptr1 -= 11;
        *ptr1 = &loc_40B59C;
        long v26 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v25);
        --ptr1;
        *ptr1 = &loc_40B5A9;
        long v27 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        unsigned int v28 = x109;
        v7 = (((v28 - 1) * v28) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0);
        v3 = (unsigned long)(v26 - v27) < *(unsigned long*)v5 ? 1: 0;
        if(!(v7 & 0x1)) {
            goto loc_40BA93;
        }
    }
    if((v3 & 0x1)) {
        unsigned int v29 = x109;
        if(!(((((v29 - 1) * v29) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0)) & 0x1)) {
            --ptr1;
            *ptr1 = &loc_40BAE1;
            /*BAD_CALL!*/ →std::__throw_length_error();
            goto loc_40B663;
        }
        else {
        loc_40B663:
            --ptr1;
            *ptr1 = &loc_40B668;
            /*BAD_CALL!*/ →std::__throw_length_error();
            unsigned int v30 = x109;
            if(!(((((v30 - 1) * v30) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0)) & 0x1)) {
                --ptr1;
                *ptr1 = &loc_40BAE1;
                /*BAD_CALL!*/ →std::__throw_length_error();
                goto loc_40B663;
            }
        }
    }
    unsigned int v31 = x109;
    if(!(((((v31 - 1) * v31) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0)) & 0x1)) {
    loc_40BAEA:
        --ptr1;
        *ptr1 = &loc_40BAEF;
        long v32 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        --ptr1;
        *ptr1 = &loc_40BAFF;
        long v33 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        *(long*)v6 = v33;
        --ptr1;
        *ptr1 = &loc_40BB0F;
        long v34 = /*BAD_CALL!*/ std::max<unsigned long>(v6, v5);
        *ptr0 = *(long*)v34 + v32;
        --ptr1;
        *ptr1 = &loc_40BB2C;
        long v35 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        goto loc_40B6F4;
    }
    else {
    loc_40B6F4:
        --ptr1;
        *ptr1 = &loc_40B6F9;
        long v36 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        --ptr1;
        *ptr1 = &loc_40B706;
        long v37 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        *(long*)v6 = v37;
        --ptr1;
        *ptr1 = &loc_40B716;
        long v38 = /*BAD_CALL!*/ std::max<unsigned long>(v6, v5);
        *ptr0 = *(long*)v38 + v36;
        unsigned long v39 = *ptr0;
        --ptr1;
        *ptr1 = &loc_40B737;
        long v40 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v4);
        unsigned int v41 = x109;
        char v42 = (((v41 - 1) * v41) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0);
        v2 = (unsigned long)v40 > v39 ? 1: 0;
        if(!(v42 & 0x1)) {
            goto loc_40BAEA;
        }
    }
    if(!(v2 & 0x1)) {
        unsigned int v43 = x109;
        if(!(((((v43 - 1) * v43) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0)) & 0x1)) {
            --ptr1;
            *ptr1 = &loc_40BB41;
            long v44 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v4);
            goto loc_40B7F5;
        }
        else {
        loc_40B7F5:
            unsigned long v45 = *ptr0;
            --ptr1;
            *ptr1 = &loc_40B801;
            long v46 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v4);
            unsigned int v47 = x109;
            param4 = (unsigned long)y110;
            param5 = (unsigned long)(v47 - 1);
            char v48 = (unsigned long)v46 >= v45 ? 0: 1;
            if(!(((((unsigned int)param5 * v47) & 0x1 ? 0: 1) | ((unsigned int)param4 < 10 ? 1: 0)) & 0x1)) {
                --ptr1;
                *ptr1 = &loc_40BB41;
                long v44 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v4);
                goto loc_40B7F5;
            }
            else if((v48 & 0x1)) {
                goto loc_40B871;
            }
            else {
                do {
                    unsigned int v49 = x109;
                    v1 = (unsigned long)(v49 - 1);
                    param5 = (unsigned long)(y110 < 10 ? 1: 0) | ((unsigned long)((param5 >>> 8L) & 0xffffffffffffffL) << 8);
                    param4 = (unsigned long)((unsigned char)param5 | (((unsigned int)v1 * v49) & 0x1 ? 0: 1)) | ((unsigned long)((param4 >>> 8L) & 0xffffffffffffffL) << 8);
                    v0 = *ptr0;
                }
                while(!((unsigned char)param4 & 0x1));
                result = v0;
            }
        }
    }
    else {
    loc_40B871:
        unsigned int v50 = x109;
        if(!(((((v50 - 1) * v50) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0)) & 0x1)) {
            --ptr1;
            *ptr1 = &loc_40BB56;
            long v51 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v4);
        }
        goto loc_40B8B8;
    }
loc_40B9CC:
    unsigned int v52 = x109;
    long v53 = (unsigned long)(v52 - 1);
    v1 = (unsigned long)((((v52 - 1) * v52) & 0x1 ? 0: 1) | (y110 < 10 ? 1: 0)) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
    do {
        unsigned int v54 = x109;
        v1 = (unsigned long)(y110 < 10 ? 1: 0) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
        v53 = (unsigned long)((unsigned char)v1 | (((v54 - 1) * v54) & 0x1 ? 0: 1)) | ((unsigned long)((v53 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    while(!((unsigned char)v53 & 0x1));
    return result;
loc_40B8B8:
    --ptr1;
    *ptr1 = &loc_40B8BD;
    long v55 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v4);
    unsigned int v56 = x109;
    param5 = (unsigned long)(y110 < 10 ? 1: 0) | ((unsigned long)((param5 >>> 8L) & 0xffffffffffffffL) << 8);
    param4 = (unsigned long)((unsigned char)param5 | (((v56 - 1) * v56) & 0x1 ? 0: 1)) | ((unsigned long)((param4 >>> 8L) & 0xffffffffffffffL) << 8);
    long v57 = v55;
    if(((unsigned char)param4 & 0x1)) {
        result = v57;
        goto loc_40B9CC;
    }
    else {
        --ptr1;
        *ptr1 = &loc_40BB56;
        long v51 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::max_size(v4);
        goto loc_40B8B8;
    }
}

// Package: std::vector<int, std::allocator<int> >

unsigned int std::vector<int, std::allocator<int> >::_M_insert_aux(long param0, long param1, long param2) {
    long v0;
    unsigned int v1;
    long v2;
    long v3;
    long v4;
    long v5;
    unsigned int v6;
    long v7;
    unsigned int v8;
    long v9;
    long v10;
    long v11;
    unsigned int v12;
    unsigned int result;
    long* ptr0;
    long* ptr1;
    long v13;
    long v14;
    long* ptr2;
    char v15;
    long v16;
    long v17;
    long v18;
    int* ptr3;
    long* ptr4;
    long* ptr5;
    long v19;
    long v20;
    char v21;
    long v22;
    long v23;
    unsigned long* ptr6 = &v21;
    unsigned int v24 = x97;
    int v25 = y98;
    long v26 = param1;
    long v27 = param0;
    long v28 = param2;
    if(!(((((v24 - 1) * v24) & 0x1 ? 0: 1) | (v25 < 10 ? 1: 0)) & 0x1)) {
        long* ptr7 = (long*)(ptr6 - 2);
        ptr6 = (unsigned long*)(ptr7 - 4);
        *ptr7 = v26;
        *(ptr7 - 2) = v27;
        *(ptr7 - 4) = v28;
        goto loc_409889;
    }
    else {
    loc_409889:
        long v29 = (long)(ptr6 - 2);
        v20 = v29 - 80L;
        v19 = v20 - 16L;
        ptr5 = (long*)(v19 - 48L);
        ptr4 = ptr5 - 2;
        ptr6 = (unsigned long*)(ptr5 - 2);
        *(long*)v29 = v26;
        *(long*)(v29 - 16L) = v27;
        *(long*)(v29 - 32L) = v28;
        long v30 = *(long*)(v29 - 16L);
        char v31 = *(long*)(v30 + 16L) == *(long*)(v30 + 8L) ? 0: 1;
        unsigned int v32 = x97;
        int v33 = y98;
        ptr3 = (int*)(v29 - 48L);
        v18 = v29;
        v17 = v30;
        v16 = v29 - 32L;
        v15 = v31;
        ptr2 = (long*)(v29 - 64L);
        v14 = v20;
        v13 = v19;
        ptr1 = (long*)(v19 - 16L);
        ptr0 = (long*)(v19 - 32L);
        long* ptr8 = ptr5;
        long* ptr9 = ptr4;
        if(!(((((v32 - 1) * v32) & 0x1 ? 0: 1) | (v33 < 10 ? 1: 0)) & 0x1)) {
            long* ptr7 = (long*)(ptr6 - 2);
            ptr6 = (unsigned long*)(ptr7 - 4);
            *ptr7 = v26;
            *(ptr7 - 2) = v27;
            *(ptr7 - 4) = v28;
            goto loc_409889;
        }
    }
    if((v15 & 0x1)) {
        unsigned int v34 = x97;
        if(!(((((v34 - 1) * v34) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        loc_40ACBA:
            long v35 = *(long*)(v17 + 8L);
            long v36 = *(long*)(v17 + 8L) - 4L;
            --ptr6;
            *ptr6 = &loc_40ACD1;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v17, v35, v36);
            *(long*)(v17 + 8L) = *(long*)(v17 + 8L) + 4L;
            *ptr3 = **(int**)v16;
            --ptr6;
            *ptr6 = &loc_40ACFE;
            long v37 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v18);
            long v38 = *(long*)v37;
            long v39 = *(long*)(v17 + 8L) - 4L;
            long v40 = *(long*)(v17 + 8L) - 8L;
            --ptr6;
            *ptr6 = &loc_40AD23;
            long v41 = /*BAD_CALL!*/ std::copy_backward<int*, int*>(v38, v40, v39);
            int v42 = *ptr3;
            long v43 = v41;
            int v44 = v42;
            --ptr6;
            *ptr6 = &loc_40AD41;
            long v45 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(v18);
            *(int*)v45 = v44;
        }
        goto loc_4099FB;
    }
    else {
        unsigned int v46 = x97;
        long v47 = (long)y98;
        if((((((v46 - 1) * v46) & 0x1 ? 0: 1) | ((int)y98 < 10 ? 1: 0)) & 0x1)) {
            goto loc_409B35;
        loc_4099FB:
            long v48 = *(long*)(v17 + 8L);
            long v49 = *(long*)(v17 + 8L) - 4L;
            --ptr6;
            *ptr6 = &loc_409A12;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v17, v48, v49);
            *(long*)(v17 + 8L) = *(long*)(v17 + 8L) + 4L;
            *ptr3 = **(int**)v16;
            --ptr6;
            *ptr6 = &loc_409A3F;
            long v50 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v18);
            long v51 = *(long*)v50;
            long v52 = *(long*)(v17 + 8L) - 4L;
            long v53 = *(long*)(v17 + 8L) - 8L;
            --ptr6;
            *ptr6 = &loc_409A64;
            long v54 = /*BAD_CALL!*/ std::copy_backward<int*, int*>(v51, v53, v52);
            int v55 = *ptr3;
            long v56 = v54;
            int v57 = v55;
            --ptr6;
            *ptr6 = &loc_409A82;
            long v58 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(v18);
            *(int*)v58 = v57;
            unsigned int v59 = x97;
            ptr5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr5 >>> 8L) & 0xffffffffffffffL) << 8);
            if(((unsigned char)ptr5 | (((v59 - 1) * v59) & 0x1 ? 0: 1)) & 0x1) {
                goto loc_40AA10;
            }
            else {
                goto loc_40ACBA;
            loc_409B35:
                --ptr6;
                *ptr6 = &loc_409B3A;
                long v60 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_check_len(v17, 1L, "vector::_M_insert_aux", v47, v20, v19);
                *ptr2 = v60;
                --ptr6;
                *ptr6 = &loc_409B4A;
                long v61 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin2(v17);
                *(long*)v13 = v61;
                --ptr6;
                *ptr6 = &loc_409B5D;
                long v62 = /*BAD_CALL!*/ __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(v18, v13);
                *(long*)v14 = v62;
                long v63 = *ptr2;
                --ptr6;
                *ptr6 = &loc_409B77;
                long v64 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v17, v63);
                *ptr1 = v64;
                *ptr0 = *ptr1;
                v47 = v14;
                long v65 = *(long*)v47 * 4L + *ptr1;
                v20 = v16;
                unsigned int v66 = x97;
                v19 = (long)(((v66 - 1) * v66) & 0x1);
                ptr4 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr4 >>> 8L) & 0xffffffffffffffL) << 8);
                ptr5 = (unsigned long)((unsigned char)ptr4 | ((unsigned int)v19 ? 0: 1)) | ((unsigned long)(long*)((long)(long*)((long)ptr5 >>> 8L) & 0xffffffffffffffL) << 8);
                long v67 = *(long*)v20;
                long v68 = v17;
                long v69 = v65;
                if(((unsigned char)ptr5 & 0x1)) {
                    long v70 = v68;
                    long v71 = v69;
                    long v72 = v67;
                    --ptr6;
                    *ptr6 = &loc_409C24;
                    /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v70, v71, v72);
                    unsigned int v73 = x97;
                    if(!(((((v73 - 1) * v73) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
                        *ptr0 = 0L;
                    }
                    goto loc_409C73;
                }
            }
        }
        --ptr6;
        *ptr6 = &loc_40AD6A;
        long v74 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_check_len(v17, 1L, "vector::_M_insert_aux", v47, v20, v19);
        *ptr2 = v74;
        --ptr6;
        *ptr6 = &loc_40AD7A;
        long v75 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin2(v17);
        *(long*)v13 = v75;
        --ptr6;
        *ptr6 = &loc_40AD8D;
        long v76 = /*BAD_CALL!*/ __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(v18, v13);
        *(long*)v14 = v76;
        long v77 = *ptr2;
        --ptr6;
        *ptr6 = &loc_40ADA7;
        long v78 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v17, v77);
        *ptr1 = v78;
        *ptr0 = *ptr1;
        goto loc_409B35;
    }
loc_40AA10:
    unsigned int v79 = x97;
    long* ptr10 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr10 >>> 8L) & 0xffffffffffffffL) << 8);
    long v80 = (unsigned long)((unsigned char)ptr10 | (((v79 - 1) * v79) & 0x1 ? 0: 1)) | ((unsigned long)((v80 >>> 8L) & 0xffffffffffffffL) << 8);
    do {
        result = x97;
        ptr10 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr10 >>> 8L) & 0xffffffffffffffL) << 8);
        v80 = (unsigned long)((unsigned char)ptr10 | (((result - 1) * result) & 0x1 ? 0: 1)) | ((unsigned long)((v80 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    while(!((unsigned char)v80 & 0x1));
    return result;
loc_409C73:
    *ptr0 = 0L;
    unsigned int v81 = x97;
    char v82 = (((v81 - 1) * v81) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
    long v83 = *(long*)v17;
    if((v82 & 0x1)) {
        --ptr6;
        *ptr6 = &loc_409CD9;
        long v84 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v18);
        do {
            long v85 = *ptr1;
            v12 = x97;
            ptr5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr5 >>> 8L) & 0xffffffffffffffL) << 8);
            v11 = *(long*)v84;
            v10 = v85;
            v9 = v17;
        }
        while(!(((unsigned char)ptr5 | (((v12 - 1) * v12) & 0x1 ? 0: 1)) & 0x1));
        long v86 = v9;
        --ptr6;
        *ptr6 = &loc_409DAD;
        long v87 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v86);
        do {
            v8 = x97;
        }
        while(!(((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        long v88 = v87;
        --ptr6;
        *ptr6 = &loc_409E60;
        v7 = /*BAD_CALL!*/ std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(v83, v11, v10, v88);
        unsigned int v89 = x97;
        if(!(((((v89 - 1) * v89) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            *ptr0 = v7;
            *ptr0 = *ptr0 + 4L;
        }
    }
    else {
        *ptr0 = 0L;
        goto loc_409C73;
    }
loc_409EBD:
    *ptr0 = v7;
    *ptr0 = *ptr0 + 4L;
    unsigned int v90 = x97;
    if((((((v90 - 1) * v90) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        --ptr6;
        *ptr6 = &loc_409F1E;
        long v91 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v18);
        do {
            long v92 = *(long*)(v17 + 8L);
            long v93 = *ptr0;
            v6 = x97;
            ptr5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr5 >>> 8L) & 0xffffffffffffffL) << 8);
            v5 = *(long*)v91;
            v4 = v17;
            v3 = v92;
            v2 = v93;
        }
        while(!(((unsigned char)ptr5 | (((v6 - 1) * v6) & 0x1 ? 0: 1)) & 0x1));
        long v94 = v4;
        --ptr6;
        *ptr6 = &loc_409FFD;
        long v95 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v94);
        do {
            v1 = x97;
        }
        while(!(((((v1 - 1) * v1) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        long v96 = v95;
        --ptr6;
        *ptr6 = &loc_40A0B0;
        v0 = /*BAD_CALL!*/ std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(v5, v3, v2, v96);
        unsigned int v97 = x97;
        if(!(((((v97 - 1) * v97) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            *ptr0 = v0;
        }
    }
    else {
        *ptr0 = v7;
        *ptr0 = *ptr0 + 4L;
        goto loc_409EBD;
    }
loc_40A10D:
    *ptr0 = v0;
    unsigned int v98 = x97;
    if((((((v98 - 1) * v98) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        unsigned int v99 = x97;
        if(!(((((v99 - 1) * v99) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            goto loc_40AEA5;
        }
    }
    else {
        *ptr0 = v0;
        goto loc_40A10D;
    }
loc_40A92D:
    long v100 = *(long*)(v17 + 8L);
    long v101 = *(long*)v17;
    long v102 = v100;
    --ptr6;
    *ptr6 = &loc_40A947;
    long v103 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v17);
    --ptr6;
    *ptr6 = &loc_40A95D;
    /*BAD_CALL!*/ std::_Destroy<int*, int>(v101, v102, v103);
    long v104 = *(long*)v17;
    long v105 = *(long*)v17;
    long v106 = (*(long*)(v17 + 16L) - v105) >> 2;
    long v107 = (*(long*)(v17 + 16L) - v105) >> 2;
    --ptr6;
    *ptr6 = &loc_40A98C;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v17, v104, v107, v105, v23, v22);
    *(long*)v17 = *ptr1;
    *(long*)(v17 + 8L) = *ptr0;
    ptr10 = ptr2;
    v80 = *ptr10 * 4L + *ptr1;
    *(long*)(v17 + 16L) = *ptr10 * 4L + *ptr1;
    unsigned int v108 = x97;
    ptr4 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)ptr4 >>> 8L) & 0xffffffffffffffL) << 8);
    ptr5 = (unsigned long)((unsigned char)ptr4 | (((v108 - 1) * v108) & 0x1 ? 0: 1)) | ((unsigned long)(long*)((long)(long*)((long)ptr5 >>> 8L) & 0xffffffffffffffL) << 8);
    if(((unsigned char)ptr5 & 0x1)) {
        goto loc_40AA10;
    }
    else {
    loc_40AEA5:
        long v109 = *(long*)(v17 + 8L);
        long v110 = *(long*)v17;
        long v111 = v109;
        --ptr6;
        *ptr6 = &loc_40AEBF;
        long v112 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v17);
        --ptr6;
        *ptr6 = &loc_40AED5;
        /*BAD_CALL!*/ std::_Destroy<int*, int>(v110, v111, v112);
        long v113 = *(long*)v17;
        long v114 = *(long*)v17;
        long v115 = (*(long*)(v17 + 16L) - v114) >> 2;
        long v116 = (*(long*)(v17 + 16L) - v114) >> 2;
        --ptr6;
        *ptr6 = &loc_40AF04;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v17, v113, v116, v114, v23, v22);
        *(long*)v17 = *ptr1;
        *(long*)(v17 + 8L) = *ptr0;
        *(long*)(v17 + 16L) = *ptr2 * 4L + *ptr1;
        goto loc_40A92D;
    }
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::begin(long param0) {
    long result;
    char v0;
    long v1;
    long v2 = (unsigned long)v0 | ((unsigned long)v1 << 8);
    unsigned long* ptr0 = &result;
    unsigned int v3 = x35;
    int v4 = y36;
    long v5 = param0;
    if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (v4 < 10 ? 1: 0)) & 0x1)) {
    loc_406AE3:
        long v6 = (long)(ptr0 - 2);
        *(unsigned long*)(v6 - 16L) = v5;
        *(long*)(v6 - 32L) = **(unsigned long*)(v6 - 16L);
        long v7 = v6;
        ptr0 = (unsigned long*)(v6 - 40L);
        *ptr0 = &loc_406B1D;
        /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(v6, v6 - 32L);
        unsigned int v8 = x35;
        char v9 = (((v8 - 1) * v8) & 0x1 ? 0: 1) | (y36 < 10 ? 1: 0);
        result = *(long*)v7;
        if((v9 & 0x1)) {
            return result;
        }
    }
    long v10 = (long)(ptr0 - 2);
    *(unsigned long*)(v10 - 16L) = v5;
    *(long*)(v10 - 32L) = **(unsigned long*)(v10 - 16L);
    ptr0 = (unsigned long*)(v10 - 40L);
    *ptr0 = &loc_406BB8;
    /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(v10, v10 - 32L);
    goto loc_406AE3;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::begin2(long param0) {
    long result;
    char v0;
    long v1;
    long v2 = (unsigned long)v0 | ((unsigned long)v1 << 8);
    unsigned long* ptr0 = &result;
    unsigned int v3 = x113;
    int v4 = y114;
    long v5 = param0;
    if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (v4 < 10 ? 1: 0)) & 0x1)) {
    loc_40BD13:
        long v6 = (long)(ptr0 - 2);
        *(long*)(v6 - 16L) = v5;
        long v7 = *(long*)(v6 - 16L);
        long v8 = v6;
        ptr0 = (unsigned long*)(v6 - 24L);
        *ptr0 = &loc_40BD3D;
        /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(v6, v7);
        unsigned int v9 = x113;
        char v10 = (((v9 - 1) * v9) & 0x1 ? 0: 1) | (y114 < 10 ? 1: 0);
        result = *(long*)v8;
        if((v10 & 0x1)) {
            return result;
        }
    }
    long v11 = (long)(ptr0 - 2);
    *(long*)(v11 - 16L) = v5;
    long v12 = *(long*)(v11 - 16L);
    ptr0 = (unsigned long*)(v11 - 24L);
    *ptr0 = &loc_40BDC8;
    /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(v11, v12);
    goto loc_40BD13;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::end(long param0) {
    long result;
    char v0;
    long v1;
    long v2 = (unsigned long)v0 | ((unsigned long)v1 << 8);
    unsigned long* ptr0 = &result;
    unsigned int v3 = x37;
    int v4 = y38;
    long v5 = param0;
    if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (v4 < 10 ? 1: 0)) & 0x1)) {
    loc_406C13:
        long v6 = (long)(ptr0 - 2);
        *(long*)(v6 - 16L) = v5;
        *(long*)(v6 - 32L) = *(long*)(*(long*)(v6 - 16L) + 8L);
        long v7 = v6;
        ptr0 = (unsigned long*)(v6 - 40L);
        *ptr0 = &loc_406C4E;
        /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(v6, v6 - 32L);
        unsigned int v8 = x37;
        char v9 = (((v8 - 1) * v8) & 0x1 ? 0: 1) | (y38 < 10 ? 1: 0);
        result = *(long*)v7;
        if((v9 & 0x1)) {
            return result;
        }
    }
    long v10 = (long)(ptr0 - 2);
    *(long*)(v10 - 16L) = v5;
    *(long*)(v10 - 32L) = *(long*)(*(long*)(v10 - 16L) + 8L);
    ptr0 = (unsigned long*)(v10 - 40L);
    *ptr0 = &loc_406CEA;
    /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >::__normal_iterator(v10, v10 - 32L);
    goto loc_406C13;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::end2(long param0) {
    long result;
    char v0;
    long v1;
    long v2 = (unsigned long)v0 | ((unsigned long)v1 << 8);
    unsigned long* ptr0 = &result;
    unsigned int v3 = x99;
    int v4 = y100;
    long v5 = param0;
    if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (v4 < 10 ? 1: 0)) & 0x1)) {
    loc_40AFC3:
        long v6 = (long)(ptr0 - 2);
        *(long*)(v6 - 16L) = v5;
        long v7 = *(long*)(v6 - 16L) + 8L;
        long v8 = v6;
        ptr0 = (unsigned long*)(v6 - 24L);
        *ptr0 = &loc_40AFF4;
        /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(v6, v7);
        unsigned int v9 = x99;
        char v10 = (((v9 - 1) * v9) & 0x1 ? 0: 1) | (y100 < 10 ? 1: 0);
        result = *(long*)v8;
        if((v10 & 0x1)) {
            return result;
        }
    }
    long v11 = (long)(ptr0 - 2);
    *(long*)(v11 - 16L) = v5;
    long v12 = *(long*)(v11 - 16L) + 8L;
    ptr0 = (unsigned long*)(v11 - 24L);
    *ptr0 = &loc_40B086;
    /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator(v11, v12);
    goto loc_40AFC3;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::max_size(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x141;
    int v2 = y142;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_40CE9D:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_40CEAB;
        long v5 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(v4);
        --ptr0;
        *ptr0 = &loc_40CEB3;
        long v6 = /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::max_size(v5);
        unsigned int v7 = x141;
        char v8 = (((v7 - 1) * v7) & 0x1 ? 0: 1) | (y142 < 10 ? 1: 0);
        long result = v6;
        if((v8 & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v9 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_40CF24;
    long v10 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(v9);
    --ptr0;
    *ptr0 = &loc_40CF2C;
    long v11 = /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::max_size(v10);
    goto loc_40CE9D;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::operator[](long param0, long param1) {
    char v0;
    long* ptr0 = &v0;
    unsigned int v1 = x15;
    int v2 = y16;
    long v3 = param0;
    long v4 = param1;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_405696:
        unsigned long* ptr1 = (unsigned long*)(ptr0 - 2);
        ptr0 = (long*)(ptr1 - 2);
        *ptr1 = v3;
        *(long*)(ptr1 - 2) = v4;
        unsigned int v5 = x15;
        char v6 = (((v5 - 1) * v5) & 0x1 ? 0: 1) | (y16 < 10 ? 1: 0);
        long result = *(long*)(ptr1 - 2) * 4L + **ptr1;
        if((v6 & 0x1)) {
            return result;
        }
    }
    long* ptr2 = ptr0 - 2;
    ptr0 = ptr2 - 2;
    *ptr2 = v3;
    *(ptr2 - 2) = v4;
    goto loc_405696;
}

// Package: std::vector<int, std::allocator<int> >

unsigned int std::vector<int, std::allocator<int> >::push_back(long param0, long param1) {
    unsigned int result;
    char v0;
    long v1;
    long* ptr0;
    long* ptr1;
    long v2;
    char v3;
    long v4;
    long v5;
    char v6;
    char v7;
    long v8;
    long v9 = (unsigned long)v6 | ((unsigned long)v4 << 8);
    long v10 = (unsigned long)v7 | ((unsigned long)v5 << 8);
    long v11 = v8;
    long* ptr2 = &v3;
    unsigned int v12 = x19;
    char v13 = y20 < 10 ? 1: 0;
    long v14 = param0;
    long v15 = param1;
    if(!(((((v12 - 1) * v12) & 0x1 ? 0: 1) | v13) & 0x1)) {
        long* ptr3 = ptr2 - 2;
        ptr2 = ptr3 - 2;
        *ptr3 = v14;
        *(ptr3 - 2) = v15;
        goto loc_4057AB;
    }
    else {
    loc_4057AB:
        long* ptr4 = ptr2 - 2;
        ptr2 = ptr4 - 4;
        *ptr4 = v14;
        *(ptr4 - 2) = v15;
        long v16 = *ptr4;
        v13 = *(long*)(v16 + 8L) == *(long*)(v16 + 16L) ? 0: 1;
        unsigned int v17 = x19;
        v2 = (unsigned long)(v17 - 1);
        v7 = (((v17 - 1) * v17) & 0x1 ? 0: 1) | (y20 < 10 ? 1: 0);
        ptr1 = ptr4 - 2;
        ptr0 = ptr4 - 4;
        v1 = v16;
        v0 = v13;
        if(!(v7 & 0x1)) {
            long* ptr3 = ptr2 - 2;
            ptr2 = ptr3 - 2;
            *ptr3 = v14;
            *(ptr3 - 2) = v15;
            goto loc_4057AB;
        }
    }
    if((v0 & 0x1)) {
        unsigned int v18 = x19;
        if(!(((((v18 - 1) * v18) & 0x1 ? 0: 1) | (y20 < 10 ? 1: 0)) & 0x1)) {
        loc_405A86:
            long v19 = *(long*)(v1 + 8L);
            long v20 = *ptr1;
            --ptr2;
            *ptr2 = &loc_405A99;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v1, v19, v20);
            *(long*)(v1 + 8L) = *(long*)(v1 + 8L) + 4L;
        }
        goto loc_40589A;
    }
    else {
        unsigned int v21 = x19;
        if((((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y20 < 10 ? 1: 0)) & 0x1)) {
            goto loc_405958;
        loc_40589A:
            long v22 = *(long*)(v1 + 8L);
            long v23 = *ptr1;
            --ptr2;
            *ptr2 = &loc_4058AD;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v1, v22, v23);
            *(long*)(v1 + 8L) = *(long*)(v1 + 8L) + 4L;
            unsigned int v24 = x19;
            v2 = (unsigned long)(y20 < 10 ? 1: 0) | ((unsigned long)((v2 >>> 8L) & 0xffffffffffffffL) << 8);
            if(((unsigned char)v2 | (((v24 - 1) * v24) & 0x1 ? 0: 1)) & 0x1) {
                goto loc_405A09;
            }
            else {
                goto loc_405A86;
            loc_405958:
                --ptr2;
                *ptr2 = &loc_40595D;
                long v25 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::end2(v1);
                *ptr0 = v25;
                long v26 = *ptr1;
                long v27 = *ptr0;
                --ptr2;
                *ptr2 = &loc_405977;
                /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_insert_aux(v1, v27, v26);
                unsigned int v28 = x19;
                if((((((int)(v28 - 1) * v28) & 0x1 ? 0: 1) | (y20 < 10 ? 1: 0)) & 0x1)) {
                    goto loc_405A09;
                }
            }
        }
        --ptr2;
        *ptr2 = &loc_405ABA;
        long v29 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::end2(v1);
        *ptr0 = v29;
        long v30 = *ptr1;
        long v31 = *ptr0;
        --ptr2;
        *ptr2 = &loc_405AD4;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_insert_aux(v1, v31, v30);
        goto loc_405958;
    }
loc_405A09:
    do {
        result = x19;
    }
    while(!(((((result - 1) * result) & 0x1 ? 0: 1) | (y20 < 10 ? 1: 0)) & 0x1));
    return result;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::size(long param0) {
    long result;
    unsigned long* ptr0 = &result;
    unsigned int v0 = x13;
    int v1 = y14;
    long v2 = param0;
    if((((((v0 - 1) * v0) & 0x1 ? 0: 1) | (v1 < 10 ? 1: 0)) & 0x1)) {
    loc_4055B2:
        unsigned long* ptr1 = ptr0 - 2;
        ptr0 -= 2;
        *ptr1 = v2;
        long* ptr2 = *ptr1;
        unsigned int v3 = x13;
        char v4 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y14 < 10 ? 1: 0);
        result = (*(ptr2 + 1) - *ptr2) >> 2;
        if((v4 & 0x1)) {
            return result;
        }
    }
    long* ptr3 = (long*)(ptr0 - 2);
    ptr0 -= 2;
    *ptr3 = v2;
    goto loc_4055B2;
}

// Package: std::vector<int, std::allocator<int> >

long std::vector<int, std::allocator<int> >::vector(long param0) {
    char v0;
    unsigned long* ptr0 = &v0;
    unsigned int v1 = x7;
    int v2 = y8;
    long v3 = param0;
    if((((((v1 - 1) * v1) & 0x1 ? 0: 1) | (v2 < 10 ? 1: 0)) & 0x1)) {
    loc_404FBD:
        *(long*)(ptr0 - 2) = v3;
        long v4 = *(long*)(ptr0 - 2);
        ptr0 -= 3;
        *ptr0 = &loc_404FCB;
        long result = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_base2(v4);
        unsigned int v5 = x7;
        if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y8 < 10 ? 1: 0)) & 0x1)) {
            return result;
        }
    }
    *(long*)(ptr0 - 2) = v3;
    long v6 = *(long*)(ptr0 - 2);
    ptr0 -= 3;
    *ptr0 = &loc_405034;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_base2(v6);
    goto loc_404FBD;
}

// Package: std::vector<int, std::allocator<int> >

int std::vector<int, std::allocator<int> >::vector2(long param0, long param1) {
    unsigned int v0;
    long v1;
    long v2;
    long v3;
    char v4;
    long v5;
    long v6;
    long v7;
    long* ptr0;
    long* ptr1;
    long* ptr2;
    char v8;
    char v9;
    long v10;
    long v11;
    long v12;
    long v13 = (unsigned long)v8 | ((unsigned long)v10 << 8);
    long v14 = v12;
    long v15 = v11;
    unsigned long* ptr3 = &v9;
    unsigned int v16 = x21;
    int v17 = y22;
    long v18 = param0;
    long v19 = param1;
    if((((((v16 - 1) * v16) & 0x1 ? 0: 1) | (v17 < 10 ? 1: 0)) & 0x1)) {
    loc_405B7F:
        *(long*)(ptr3 - 2) = v18;
        *(long*)(ptr3 - 4) = v19;
        long v20 = *(long*)(ptr3 - 2);
        long v21 = *(long*)(ptr3 - 4);
        ptr2 = (long*)(ptr3 - 4);
        ptr1 = (long*)(ptr3 - 6);
        long v22 = v20;
        ptr0 = (long*)(ptr3 - 12);
        v7 = v20;
        ptr3 -= 13;
        *ptr3 = &loc_405BB6;
        long v23 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v21);
        long v24 = *ptr2;
        long v25 = v23;
        --ptr3;
        *ptr3 = &loc_405BC9;
        long v26 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(v24);
        --ptr3;
        *ptr3 = &loc_405BD1;
        long v27 = /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(v26);
        --ptr3;
        *ptr3 = &loc_405BE1;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_base(v22, v25, v27);
        unsigned int v28 = x21;
        v8 = (((v28 - 1) * v28) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
        long v29 = *ptr2;
        if((v8 & 0x1)) {
            long v30 = v29;
            --ptr3;
            *ptr3 = &loc_405C41;
            v6 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin(v30);
            unsigned int v31 = x21;
            if(!(((((v31 - 1) * v31) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
                *ptr1 = v6;
            }
            goto loc_405C9B;
        }
    }
    *(long*)(ptr3 - 2) = v18;
    *(long*)(ptr3 - 4) = v19;
    long v32 = *(long*)(ptr3 - 2);
    long v33 = *(long*)(ptr3 - 4);
    long* ptr4 = (long*)(ptr3 - 4);
    long v34 = v32;
    ptr3 -= 5;
    *ptr3 = &loc_406230;
    long v35 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v33);
    long v36 = *ptr4;
    long v37 = v35;
    --ptr3;
    *ptr3 = &loc_406249;
    long v38 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(v36);
    --ptr3;
    *ptr3 = &loc_406251;
    long v39 = /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(v38);
    --ptr3;
    *ptr3 = &loc_406267;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_base(v34, v37, v39);
    goto loc_405B7F;
loc_405C9B:
    *ptr1 = v6;
    unsigned int v40 = x21;
    char v41 = (((v40 - 1) * v40) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
    long v42 = *ptr2;
    if((v41 & 0x1)) {
        long v43 = v42;
        --ptr3;
        *ptr3 = &loc_405D02;
        v5 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::end(v43);
        unsigned int v44 = x21;
        if(!(((((v44 - 1) * v44) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
            *ptr0 = v5;
        }
    }
    else {
        *ptr1 = v6;
        goto loc_405C9B;
    }
loc_405D5C:
    *ptr0 = v5;
    unsigned int v45 = x21;
    char v46 = (((v45 - 1) * v45) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
    long v47 = *(long*)v7;
    long v48 = v7;
    if((v46 & 0x1)) {
        long v49 = v48;
        --ptr3;
        *ptr3 = &loc_405DCE;
        long v50 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v49);
        do {
            long v51 = *ptr0;
            unsigned int v52 = x21;
            v4 = (((v52 - 1) * v52) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
            v3 = *ptr1;
            v2 = v51;
        }
        while(!(v4 & 0x1));
        long v53 = v3;
        long v54 = v2;
        long v55 = v50;
        --ptr3;
        *ptr3 = &loc_405EA4;
        v1 = /*BAD_CALL!*/ std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(v53, v54, v47, v55);
        v0 = x21;
        if(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
            *(long*)(v7 + 8L) = v1;
        }
    }
    else {
        *ptr0 = v5;
        goto loc_405D5C;
    }
loc_405EFE:
    *(long*)(v7 + 8L) = v1;
    unsigned int v56 = x21;
    if((((((v56 - 1) * v56) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
        return ((v0 - 1) * v0) & 0x1;
    }
    *(long*)(v7 + 8L) = v1;
    goto loc_405EFE;
}

// Package: std::vector<int, std::allocator<int> >

long* std::vector<int, std::allocator<int> >::~vector(long param0) {
    unsigned int v0;
    long v1;
    char v2;
    long v3;
    long v4;
    char v5;
    char v6;
    long v7 = (unsigned long)v5 | ((unsigned long)v3 << 8);
    long v8 = (unsigned long)v6 | ((unsigned long)v4 << 8);
    unsigned long* ptr0 = &v2;
    unsigned int v9 = x9;
    int v10 = y10;
    long v11 = param0;
    if((((((v9 - 1) * v9) & 0x1 ? 0: 1) | (v10 < 10 ? 1: 0)) & 0x1)) {
    loc_405098:
        unsigned long* ptr1 = ptr0 - 2;
        ptr0 = ptr1 - 4;
        *ptr1 = v11;
        long v12 = *ptr1;
        long v13 = *(long*)v12;
        unsigned int v14 = x9;
        v6 = (((v14 - 1) * v14) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0);
        long v15 = *(long*)(v12 + 8L);
        long* ptr2 = (long*)(ptr1 - 2);
        long* ptr3 = (long*)(ptr1 - 4);
        v1 = v12;
        long v16 = v13;
        long v17 = v12;
        if((v6 & 0x1)) {
            long v18 = v17;
            --ptr0;
            *ptr0 = &loc_405133;
            long v19 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v18);
            do {
                v0 = x9;
            }
            while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1));
            long v20 = v19;
            --ptr0;
            *ptr0 = &loc_4051D3;
            /*BAD_CALL!*/ std::_Destroy<int*, int>(v16, v15, v20);
            unsigned int v21 = x9;
            if(!(((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1)) {
                --ptr0;
                *ptr0 = &loc_405523;
                /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::~_Vector_base(v1);
            }
            goto loc_405222;
        }
    }
    long* ptr4 = (long*)(ptr0 - 2);
    ptr0 -= 2;
    *ptr4 = v11;
    goto loc_405098;
loc_405222:
    --ptr0;
    *ptr0 = &loc_405227;
    long* result = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::~_Vector_base(v1);
    unsigned int v22 = x9;
    if((((((v22 - 1) * v22) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1)) {
        return result;
    }
    --ptr0;
    *ptr0 = &loc_405523;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::~_Vector_base(v1);
    goto loc_405222;
}

void sub_400E60() {
    jump gvar_610010;
}

long sub_400F66() {
    /*BAD_CALL!*/ sub_400E60();
}

long sub_401056() {
    /*BAD_CALL!*/ sub_400E60();
}

long sub_402E05(long param0, long param1, long param2) {
    unsigned int v0;
    long v1;
    long v2;
    long v3;
    long v4;
    unsigned int v5 = x3;
    long v6 = (unsigned long)y4;
    long v7 = (unsigned long)(v5 - 1);
    *(long*)(v4 - 264L) = param2;
    *(long*)(v4 - 0x110L) = v3;
loc_402E58:
    unsigned int v8 = x17;
    v7 = (unsigned long)(y18 < 10 ? 1: 0) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
    v6 = (unsigned long)((unsigned char)v7 | (((v8 - 1) * v8) & 0x1 ? 0: 1)) | ((unsigned long)((v6 >>> 8L) & 0xffffffffffffffL) << 8);
    unsigned int v9 = x3;
    v7 = (unsigned long)((((v9 - 1) * v9) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
    *(char*)(v4 - 0x111L) = (unsigned char)v6;
    if(((unsigned char)v7 & 0x1)) {
        v2 = (unsigned long)*(char*)(v4 - 0x111L) | ((unsigned long)(((long)(((v9 - 1) * v9) & 0x1) >>> 8L) & 0xffffffffffffffL) << 8);
        if(!(*(char*)(v4 - 0x111L) & 0x1)) {
            v1 = v2;
            int v10 = (unsigned int)v2;
            **(long**)(v4 - 64L) = v2;
            v2 = *(long*)(v4 - 112L);
            *(int*)v2 = v10;
        }
    }
    else {
        goto loc_402E58;
    }
loc_402EE9:
    v1 = v2;
    int v11 = (unsigned int)v2;
    **(long**)(v4 - 64L) = v2;
    v2 = *(long*)(v4 - 112L);
    *(int*)v2 = v11;
    unsigned int v12 = x17;
    long v13 = (unsigned long)y18;
    if((((((v12 - 1) * v12) & 0x1 ? 0: 1) | ((unsigned int)v13 < 10 ? 1: 0)) & 0x1)) {
        unsigned int v14 = x17;
        long v15 = (unsigned long)(y18 < 10 ? 1: 0) | ((unsigned long)(((unsigned long)(v12 - 1) >>> 8L) & 0xffffffffffffffL) << 8);
        v13 = (unsigned long)((((v14 - 1) * v14) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((v13 >>> 8L) & 0xffffffffffffffL) << 8);
        do {
            unsigned int v16 = x3;
            v15 = (unsigned long)(y4 < 10 ? 1: 0) | ((unsigned long)((v15 >>> 8L) & 0xffffffffffffffL) << 8);
            v13 = (unsigned long)((unsigned char)v15 | (((v16 - 1) * v16) & 0x1 ? 0: 1)) | ((unsigned long)((v13 >>> 8L) & 0xffffffffffffffL) << 8);
            while(1) {
                unsigned int v17 = x17;
                v15 = (unsigned long)(y18 < 10 ? 1: 0) | ((unsigned long)((v15 >>> 8L) & 0xffffffffffffffL) << 8);
                v13 = (unsigned long)((unsigned char)v15 | (((v17 - 1) * v17) & 0x1 ? 0: 1)) | ((unsigned long)((v13 >>> 8L) & 0xffffffffffffffL) << 8);
                unsigned int v18 = x3;
                v15 = (unsigned long)((((v18 - 1) * v18) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) | ((unsigned long)((v15 >>> 8L) & 0xffffffffffffffL) << 8);
                *(char*)(v4 - 317L) = (unsigned char)v13;
            }
        }
        while(!(*(char*)(v4 - 317L) & 0x1));
        std::vector<int, std::allocator<int> >::~vector(*(long*)(v4 - 80L));
        unsigned int v19 = x17;
        param1 = (unsigned long)((((v19 - 1) * v19) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        do {
            unsigned int v20 = x17;
            param1 = (unsigned long)((((v20 - 1) * v20) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        }
        while(!((unsigned char)param1 & 0x1));
        unsigned int v21 = x17;
        param1 = (unsigned long)((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        if(!((unsigned char)param1 & 0x1)) {
            goto loc_40412B;
        }
    }
    else {
        v1 = v2;
        int v10 = (unsigned int)v2;
        **(long**)(v4 - 64L) = v2;
        v2 = *(long*)(v4 - 112L);
        *(int*)v2 = v10;
        goto loc_402EE9;
    }
loc_403BEF:
    unsigned int v22 = x17;
    param1 = (unsigned long)(v22 - 1);
    char v23 = (((v22 - 1) * v22) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
    *(long*)(v4 - 328L) = **(unsigned long*)(v4 - 64L);
    if((v23 & 0x1)) {
        long v24 = →_Unwind_Resume();
        unsigned int v25 = x17;
        char v26 = (((v25 - 1) * v25) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
        *(long*)(v4 - 336L) = param2;
        *(long*)(v4 - 344L) = v24;
        if((v26 & 0x1)) {
            unsigned int v27 = x3;
            if(!(((((v27 - 1) * v27) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v4 - 368L) = ((v27 - 1) * v27) & 0x1;
                /*NO_RETURN*/ __clang_call_terminate((long)(((v27 - 1) * v27) & 0x1));
            }
            *(int*)(v4 - 348L) = ((v27 - 1) * v27) & 0x1;
            v2 = /*NO_RETURN*/ __clang_call_terminate((long)(((v27 - 1) * v27) & 0x1));
            v1 = v2;
            int v10 = (unsigned int)v2;
            **(long**)(v4 - 64L) = v2;
            v2 = *(long*)(v4 - 112L);
            *(int*)v2 = v10;
            goto loc_402EE9;
        }
        else {
            v0 = x3;
        }
        if(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
            *(int*)(v4 - 372L) = ((v0 - 1) * v0) & 0x1;
            /*NO_RETURN*/ __clang_call_terminate((long)(((v0 - 1) * v0) & 0x1));
        }
        *(int*)(v4 - 364L) = ((v0 - 1) * v0) & 0x1;
        /*NO_RETURN*/ __clang_call_terminate((long)(((v0 - 1) * v0) & 0x1));
    }
loc_40412B:
    unsigned int v28 = x3;
    param1 = (unsigned long)((((v28 - 1) * v28) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
    while(1) {
        unsigned int v29 = x3;
        param1 = (unsigned long)((((v29 - 1) * v29) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)param1 & 0x1) {
            goto loc_403BEF;
        }
    }
}

long sub_402F44(long param0, long param1, long param2) {
    unsigned int v0;
    long v1;
    long v2;
    long v3;
    unsigned int v4 = x17;
    char v5 = (((v4 - 1) * v4) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
    *(long*)(v3 - 288L) = param2;
    *(long*)(v3 - 296L) = v2;
    if((v5 & 0x1)) {
    loc_402F97:
        v1 = v2;
        **(long**)(v3 - 64L) = v2;
        **(unsigned long*)(v3 - 112L) = (unsigned int)v2;
        unsigned int v6 = x17;
        if((((((v6 - 1) * v6) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) & 0x1)) {
            std::vector<int, std::allocator<int> >::~vector(*(long*)(v3 - 128L));
            unsigned int v7 = x3;
            goto loc_403081;
        }
    }
    unsigned int v8 = x3;
    v2 = (long)(((v8 - 1) * v8) & 0x1);
    if((((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
    loc_403FC9:
        v1 = v2;
        int v9 = (unsigned int)v2;
        **(long**)(v3 - 64L) = v2;
        v2 = *(long*)(v3 - 112L);
        *(int*)v2 = v9;
        unsigned int v10 = x3;
        if(((((v10 - 1) * v10) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1) {
            goto loc_402F97;
        }
    }
    v1 = v2;
    int v11 = (unsigned int)v2;
    **(long**)(v3 - 64L) = v2;
    v2 = *(long*)(v3 - 112L);
    *(int*)v2 = v11;
    goto loc_403FC9;
loc_403081:
    unsigned int v12 = x17;
    unsigned int v13 = x3;
    char v14 = (((v13 - 1) * v13) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0);
    *(char*)(v3 - 297L) = (((v12 - 1) * v12) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
    if(!(v14 & 0x1)) {
        goto loc_403081;
    }
    else if(!(*(char*)(v3 - 297L) & 0x1)) {
        unsigned int v7 = x3;
        goto loc_403081;
    }
    else {
    loc_403A7B:
        do {
            unsigned int v15 = x17;
            unsigned int v16 = x3;
            v14 = (((v16 - 1) * v16) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0);
            *(char*)(v3 - 317L) = (((v15 - 1) * v15) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
            if(!(v14 & 0x1)) {
                goto loc_403A7B;
            }
        }
        while(!(*(char*)(v3 - 317L) & 0x1));
        std::vector<int, std::allocator<int> >::~vector(*(long*)(v3 - 80L));
        unsigned int v17 = x17;
        param1 = (unsigned long)((((v17 - 1) * v17) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        do {
            unsigned int v18 = x17;
            param1 = (unsigned long)((((v18 - 1) * v18) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        }
        while(!((unsigned char)param1 & 0x1));
        unsigned int v19 = x17;
        param1 = (unsigned long)((((v19 - 1) * v19) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        if(!((unsigned char)param1 & 0x1)) {
            goto loc_40412B;
        }
    }
loc_403BEF:
    unsigned int v20 = x17;
    param1 = (unsigned long)(v20 - 1);
    char v21 = (((v20 - 1) * v20) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
    *(long*)(v3 - 328L) = **(unsigned long*)(v3 - 64L);
    if((v21 & 0x1)) {
        long v22 = →_Unwind_Resume();
        unsigned int v23 = x17;
        char v24 = (((v23 - 1) * v23) & 0x1 ? 0: 1) | (y18 < 10 ? 1: 0);
        *(long*)(v3 - 336L) = param2;
        *(long*)(v3 - 344L) = v22;
        if((v24 & 0x1)) {
            unsigned int v25 = x3;
            if(!(((((v25 - 1) * v25) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v3 - 368L) = ((v25 - 1) * v25) & 0x1;
                v2 = /*NO_RETURN*/ __clang_call_terminate((long)(((v25 - 1) * v25) & 0x1));
                v1 = v2;
                int v11 = (unsigned int)v2;
                **(long**)(v3 - 64L) = v2;
                v2 = *(long*)(v3 - 112L);
                *(int*)v2 = v11;
                goto loc_403FC9;
            }
            else {
                *(int*)(v3 - 348L) = ((v25 - 1) * v25) & 0x1;
                /*NO_RETURN*/ __clang_call_terminate((long)(((v25 - 1) * v25) & 0x1));
            }
        }
        else {
            v0 = x3;
        }
        if(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
            *(int*)(v3 - 372L) = ((v0 - 1) * v0) & 0x1;
            /*NO_RETURN*/ __clang_call_terminate((long)(((v0 - 1) * v0) & 0x1));
        }
        *(int*)(v3 - 364L) = ((v0 - 1) * v0) & 0x1;
        /*NO_RETURN*/ __clang_call_terminate((long)(((v0 - 1) * v0) & 0x1));
    }
loc_40412B:
    unsigned int v26 = x3;
    param1 = (unsigned long)((((v26 - 1) * v26) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
    while(1) {
        unsigned int v27 = x3;
        param1 = (unsigned long)((((v27 - 1) * v27) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)param1 & 0x1) {
            goto loc_403BEF;
        }
    }
}

void sub_403CEF() {
    // Decompilation error
}

long sub_40420B() {
    long v0;
    long v1;
    while(1) {
        unsigned int v2 = x3;
        if((((((v2 - 1) * v2) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
            unsigned int v3 = x3;
            if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (y4 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v1 - 348L) = ((v3 - 1) * v3) & 0x1;
                v0 = /*NO_RETURN*/ __clang_call_terminate((long)(((v3 - 1) * v3) & 0x1));
                continue;
            }
            else {
                *(int*)(v1 - 368L) = ((v3 - 1) * v3) & 0x1;
                v0 = /*NO_RETURN*/ __clang_call_terminate((long)(((v3 - 1) * v3) & 0x1));
            }
        }
        break;
    }
    *(int*)(v1 - 372L) = (unsigned int)v0;
    /*NO_RETURN*/ __clang_call_terminate(v0);
}

void sub_4042EB() {
    long v0;
    long v1;
    while(1) {
        *(int*)(v0 - 348L) = (unsigned int)v1;
        v1 = /*NO_RETURN*/ __clang_call_terminate(v1);
    }
}

void sub_40433C() {
    long v0;
    long v1;
    while(1) {
        *(int*)(v0 - 364L) = (unsigned int)v1;
        v1 = /*NO_RETURN*/ __clang_call_terminate(v1);
    }
}

long sub_4048FB(long param0, long param1) {
    char v0;
    void* ptr0;
    long v1;
    long v2;
    unsigned int v3 = x25;
    char v4 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0);
    *(long*)(v1 - 80L) = param1;
    *(long*)(v1 - 88L) = v2;
    if((v4 & 0x1)) {
    loc_404948:
        ptr0 = (void*)v2;
        int v5 = (unsigned int)v2;
        **(long**)(v1 - 48L) = v2;
        v2 = *(long*)(v1 - 40L);
        *(int*)v2 = v5;
        unsigned int v6 = x25;
        long v7 = (unsigned long)y26;
        if((((((v6 - 1) * v6) & 0x1 ? 0: 1) | ((int)y26 < 10 ? 1: 0)) & 0x1)) {
            →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
            unsigned int v8 = x25;
            v7 = (unsigned long)((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
            do {
                unsigned int v9 = x25;
                v7 = (unsigned long)((((v9 - 1) * v9) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            while(!((unsigned char)v7 & 0x1));
            do {
                unsigned int v10 = x25;
                v0 = (((v10 - 1) * v10) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0);
                *(long*)(v1 - 104L) = **(unsigned long*)(v1 - 48L);
            }
            while(!(v0 & 0x1));
            long v11 = →_Unwind_Resume();
            unsigned int v12 = x25;
            int v13 = y26;
            *(long*)(v1 - 112L) = param1;
            *(long*)(v1 - 120L) = v11;
            if(!(((((v12 - 1) * v12) & 0x1 ? 0: 1) | (v13 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v1 - 140L) = (unsigned int)v11;
                /*NO_RETURN*/ __clang_call_terminate(v11);
            }
            *(int*)(v1 - 124L) = (unsigned int)v11;
            v2 = /*NO_RETURN*/ __clang_call_terminate(v11);
        }
    }
    ptr0 = (void*)v2;
    int v14 = (unsigned int)v2;
    **(long**)(v1 - 48L) = v2;
    v2 = *(long*)(v1 - 40L);
    *(int*)v2 = v14;
    goto loc_404948;
}

long sub_404BCE(long param0, long param1, long param2) {
    char v0;
    long v1;
    unsigned long* ptr0;
    long v2;
    char v3;
    long v4;
    unsigned int v5 = x25;
    if(!(((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
        *(int*)(v4 - 140L) = (unsigned int)v2;
        /*NO_RETURN*/ __clang_call_terminate(v2);
    }
    do {
        ptr0 = ptr0 - 1;
        *ptr0 = &loc_404C2C;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_100);
        --ptr0;
        *ptr0 = &loc_404C45;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_214);
        --ptr0;
        *ptr0 = &loc_404C5E;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_266);
        --ptr0;
        *ptr0 = &loc_404C77;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_369);
        --ptr0;
        *ptr0 = &loc_404C90;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_417);
        --ptr0;
        *ptr0 = &loc_404CA9;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_527);
        --ptr0;
        *ptr0 = &loc_404CC2;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_622);
        --ptr0;
        *ptr0 = &loc_404CDB;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_733);
        --ptr0;
        *ptr0 = &loc_404CF4;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_847);
        --ptr0;
        *ptr0 = &loc_404D0D;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_942);
        --ptr0;
        *ptr0 = &loc_404D26;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1054);
        --ptr0;
        *ptr0 = &loc_404D3F;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1106);
        --ptr0;
        *ptr0 = &loc_404D58;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1222);
        --ptr0;
        *ptr0 = &loc_404D71;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1336);
        --ptr0;
        *ptr0 = &loc_404D8A;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1441);
        --ptr0;
        *ptr0 = &loc_404DA3;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1540);
        --ptr0;
        *ptr0 = &loc_404DBC;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1589);
        --ptr0;
        *ptr0 = &loc_404DD5;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1686);
        --ptr0;
        *ptr0 = &loc_404DEE;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1796);
        --ptr0;
        *ptr0 = &loc_404E07;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1891);
        --ptr0;
        *ptr0 = &loc_404E20;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1996);
        --ptr0;
        *ptr0 = &loc_404E39;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2112);
        --ptr0;
        *ptr0 = &loc_404E52;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2165);
        --ptr0;
        *ptr0 = &loc_404E6B;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2260);
        --ptr0;
        *ptr0 = &loc_404E84;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2336);
        --ptr0;
        *ptr0 = &loc_404E9D;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2412);
        --ptr0;
        *ptr0 = &loc_404EB6;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2498);
        --ptr0;
        *ptr0 = &loc_404ECF;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2575);
        --ptr0;
        *ptr0 = &loc_404ED8;
        long v6 = /*BAD_CALL!*/ →std::string::length();
        *(long*)(v4 - 0x88L) = v6;
        *(unsigned long*)(v4 - 40L) = (long*)(ptr0 - 8);
        *(unsigned long*)(v4 - 48L) = (long*)(ptr0 - 6);
        *(unsigned long*)(v4 - 56L) = (long*)(ptr0 - 2);
        *(unsigned long*)(v4 - 64L) = (long*)(ptr0 - 4);
        ptr0 -= 9;
        *ptr0 = &loc_4043F5;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_100);
        --ptr0;
        *ptr0 = &loc_40440E;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_214);
        --ptr0;
        *ptr0 = &loc_404427;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_266);
        --ptr0;
        *ptr0 = &loc_404440;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_369);
        --ptr0;
        *ptr0 = &loc_404459;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_417);
        --ptr0;
        *ptr0 = &loc_404472;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_527);
        --ptr0;
        *ptr0 = &loc_40448B;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_622);
        --ptr0;
        *ptr0 = &loc_4044A4;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_733);
        --ptr0;
        *ptr0 = &loc_4044BD;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_847);
        --ptr0;
        *ptr0 = &loc_4044D6;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_942);
        --ptr0;
        *ptr0 = &loc_4044EF;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1054);
        --ptr0;
        *ptr0 = &loc_404508;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1106);
        --ptr0;
        *ptr0 = &loc_404521;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1222);
        --ptr0;
        *ptr0 = &loc_40453A;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1336);
        --ptr0;
        *ptr0 = &loc_404553;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1441);
        --ptr0;
        *ptr0 = &loc_40456C;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1540);
        --ptr0;
        *ptr0 = &loc_404585;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1589);
        --ptr0;
        *ptr0 = &loc_40459E;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1686);
        --ptr0;
        *ptr0 = &loc_4045B7;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1796);
        --ptr0;
        *ptr0 = &loc_4045D0;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1891);
        --ptr0;
        *ptr0 = &loc_4045E9;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_1996);
        --ptr0;
        *ptr0 = &loc_404602;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2112);
        --ptr0;
        *ptr0 = &loc_40461B;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2165);
        --ptr0;
        *ptr0 = &loc_404634;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2260);
        --ptr0;
        *ptr0 = &loc_40464D;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2336);
        --ptr0;
        *ptr0 = &loc_404666;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2412);
        --ptr0;
        *ptr0 = &loc_40467F;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2498);
        --ptr0;
        *ptr0 = &loc_404698;
        /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::push_back(&hero, &secret_2575);
        --ptr0;
        *ptr0 = &loc_4046A1;
        long v7 = /*BAD_CALL!*/ →std::string::length();
        unsigned int v8 = x25;
        v1 = (unsigned long)(((v8 - 1) * v8) & 0x1);
        v3 = (((v8 - 1) * v8) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0);
        *(char*)(v4 - 65L) = v7 - 1L == (long)(legend >> 2) ? 0: 1;
    }
    while(!(v3 & 0x1));
    if((*(char*)(v4 - 65L) & 0x1)) {
        unsigned int v9 = x25;
        if(!(((((v9 - 1) * v9) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
            **(unsigned long*)(v4 - 56L) = legend >> 2;
        }
        goto loc_40476E;
    }
    else {
        unsigned int v10 = x25;
        if((((((v10 - 1) * v10) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
            goto loc_4047FF;
        loc_40476E:
            **(unsigned long*)(v4 - 56L) = legend >> 2;
            unsigned int v11 = x25;
            if(((((v11 - 1) * v11) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1) {
                goto loc_404A80;
            }
            else {
                **(unsigned long*)(v4 - 56L) = legend >> 2;
                goto loc_40476E;
            loc_4047FF:
                long v12 = *(long*)(v4 - 32L);
                --ptr0;
                *ptr0 = &loc_404808;
                /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
                unsigned int v13 = x25;
                long v14 = (unsigned long)y26;
                param2 = (unsigned long)((((v13 - 1) * v13) & 0x1 ? 0: 1) | ((unsigned int)v14 < 10 ? 1: 0)) | ((unsigned long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
                if(((unsigned char)param2 & 0x1)) {
                    long v15 = *(long*)(v4 - 64L);
                    --ptr0;
                    *ptr0 = &loc_404854;
                    long v16 = /*BAD_CALL!*/ sanitize_input(v15, v12, (unsigned long)(v13 - 1), v14, param2);
                    *(int*)(v4 - 72L) = (unsigned int)v16;
                    unsigned int v17 = x25;
                    if(!(((((v17 - 1) * v17) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0)) & 0x1)) {
                        **(unsigned long*)(v4 - 56L) = *(int*)(v4 - 72L);
                        --ptr0;
                        *ptr0 = &loc_404F1D;
                        /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
                    }
                    goto loc_4048A6;
                }
            }
        }
        --ptr0;
        *ptr0 = &loc_404F06;
        /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string2();
        goto loc_4047FF;
    }
loc_404A80:
    do {
        unsigned int v18 = x25;
        v0 = (((v18 - 1) * v18) & 0x1 ? 0: 1) | (y26 < 10 ? 1: 0);
        *(int*)(v4 - 92L) = **(unsigned long*)(v4 - 56L);
    }
    while(!(v0 & 0x1));
    jump *(long*)(v4 + 8L);
loc_4048A6:
    **(unsigned long*)(v4 - 56L) = *(int*)(v4 - 72L);
    --ptr0;
    *ptr0 = &loc_4048B1;
    /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    unsigned int v19 = x25;
    v1 = (unsigned long)(y26 < 10 ? 1: 0) | ((unsigned long)((v1 >>> 8L) & 0xffffffffffffffL) << 8);
    if((((unsigned char)v1 | (((v19 - 1) * v19) & 0x1 ? 0: 1)) & 0x1)) {
        goto loc_404A80;
    }
    else {
        **(unsigned long*)(v4 - 56L) = *(int*)(v4 - 72L);
        --ptr0;
        *ptr0 = &loc_404F1D;
        /*BAD_CALL!*/ →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
        goto loc_4048A6;
    }
}

void sub_404F59() {
    long v0;
    long v1;
    while(1) {
        *(int*)(v0 - 124L) = (unsigned int)v1;
        v1 = /*NO_RETURN*/ __clang_call_terminate(v1);
    }
}

long sub_405275(long param0, long param1) {
    char v0;
    unsigned int v1;
    long v2;
    long v3;
    long v4;
    unsigned int v5 = x9;
    char v6 = y10 < 10 ? 1: 0;
    *(long*)(v3 - 88L) = param1;
    *(long*)(v3 - 96L) = v4;
    if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | v6) & 0x1)) {
    loc_4052C2:
        v2 = v4;
        int v7 = (unsigned int)v4;
        **(long**)(v3 - 40L) = v4;
        v4 = *(long*)(v3 - 48L);
        *(int*)v4 = v7;
        unsigned int v8 = x9;
        v6 = (((v8 - 1) * v8) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0);
        *(long*)(v3 - 104L) = *(long*)(v3 - 56L);
        if((v6 & 0x1)) {
            std::_Vector_base<int, std::allocator<int> >::~_Vector_base(*(long*)(v3 - 104L));
            do {
                v1 = x9;
            }
            while(!(((((v1 - 1) * v1) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1));
            do {
                unsigned int v9 = x9;
                v0 = (((v9 - 1) * v9) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0);
                *(long*)(v3 - 112L) = **(unsigned long*)(v3 - 40L);
            }
            while(!(v0 & 0x1));
            long v10 = →_Unwind_Resume();
            unsigned int v11 = x9;
            int v12 = y10;
            *(long*)(v3 - 120L) = param1;
            *(long*)(v3 - 128L) = v10;
            if(!(((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v3 - 0x88L) = (unsigned int)v10;
                /*NO_RETURN*/ __clang_call_terminate(v10);
            }
            *(int*)(v3 - 132L) = (unsigned int)v10;
            v4 = /*NO_RETURN*/ __clang_call_terminate(v10);
        }
    }
    v2 = v4;
    int v13 = (unsigned int)v4;
    **(long**)(v3 - 40L) = v4;
    v4 = *(long*)(v3 - 48L);
    *(int*)v4 = v13;
    goto loc_4052C2;
}

long sub_4054B7() {
    unsigned int v0;
    char v1;
    long v2;
    long v3;
    unsigned long* ptr0;
    unsigned int v4 = x9;
    if(!(((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1)) {
        *(int*)(v3 - 0x88L) = (unsigned int)v2;
        /*NO_RETURN*/ __clang_call_terminate(v2);
    }
    do {
        long* ptr1 = (long*)(ptr0 - 2);
        *ptr1 = *(long*)(v3 - 24L);
        ptr0 = (unsigned long*)(ptr1 - 6);
        *(unsigned long*)(ptr1 - 2) = *(long*)(v3 - 24L);
        long* ptr2 = *(unsigned long*)(ptr1 - 2);
        long v5 = *ptr2;
        unsigned int v6 = x9;
        v1 = (((v6 - 1) * v6) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0);
        *(long*)(v3 - 32L) = *(ptr2 + 1);
        *(unsigned long*)(v3 - 40L) = ptr1 - 4;
        *(unsigned long*)(v3 - 48L) = ptr1 - 6;
        *(unsigned long*)(v3 - 56L) = ptr2;
        *(long*)(v3 - 64L) = v5;
        *(unsigned long*)(v3 - 72L) = ptr2;
    }
    while(!(v1 & 0x1));
    long v7 = *(long*)(v3 - 72L);
    --ptr0;
    *ptr0 = &loc_405133;
    long v8 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v7);
    *(long*)(v3 - 80L) = v8;
    do {
        v0 = x9;
    }
    while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1));
    long v9 = *(long*)(v3 - 64L);
    long v10 = *(long*)(v3 - 32L);
    long v11 = *(long*)(v3 - 80L);
    --ptr0;
    *ptr0 = &loc_4051D3;
    /*BAD_CALL!*/ std::_Destroy<int*, int>(v9, v10, v11);
    unsigned int v12 = x9;
    if((((((v12 - 1) * v12) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1)) {
    loc_40521F:
        long v13 = *(long*)(v3 - 56L);
        --ptr0;
        *ptr0 = &loc_405227;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::~_Vector_base(v13);
        unsigned int v14 = x9;
        if((((((v14 - 1) * v14) & 0x1 ? 0: 1) | (y10 < 10 ? 1: 0)) & 0x1)) {
            jump *(long*)(v3 + 8L);
        }
    }
    long v15 = *(long*)(v3 - 56L);
    --ptr0;
    *ptr0 = &loc_405523;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::~_Vector_base(v15);
    goto loc_40521F;
}

void sub_40555A() {
    long v0;
    long v1;
    while(1) {
        *(int*)(v0 - 132L) = (unsigned int)v1;
        v1 = /*NO_RETURN*/ __clang_call_terminate(v1);
    }
}

long sub_405F56(long param0, long param1) {
    char v0;
    unsigned int v1;
    long v2;
    long v3;
    long v4;
    unsigned int v5 = x21;
    char v6 = y22 < 10 ? 1: 0;
    *(long*)(v3 - 208L) = param1;
    *(long*)(v3 - 216L) = v4;
    if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | v6) & 0x1)) {
    loc_405FA9:
        v2 = v4;
        int v7 = (unsigned int)v4;
        **(long**)(v3 - 88L) = v4;
        v4 = *(long*)(v3 - 64L);
        *(int*)v4 = v7;
        unsigned int v8 = x21;
        v6 = (((v8 - 1) * v8) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
        *(long*)(v3 - 224L) = *(long*)(v3 - 112L);
        if((v6 & 0x1)) {
            std::_Vector_base<int, std::allocator<int> >::~_Vector_base(*(long*)(v3 - 224L));
            do {
                v1 = x21;
            }
            while(!(((((v1 - 1) * v1) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1));
            do {
                unsigned int v9 = x21;
                v0 = (((v9 - 1) * v9) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
                *(long*)(v3 - 232L) = **(unsigned long*)(v3 - 88L);
            }
            while(!(v0 & 0x1));
            long v10 = →_Unwind_Resume();
            unsigned int v11 = x21;
            int v12 = y22;
            *(long*)(v3 - 240L) = param1;
            *(long*)(v3 - 248L) = v10;
            if(!(((((v11 - 1) * v11) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v3 - 0x11cL) = (unsigned int)v10;
                /*NO_RETURN*/ __clang_call_terminate(v10);
            }
            *(int*)(v3 - 252L) = (unsigned int)v10;
            v4 = /*NO_RETURN*/ __clang_call_terminate(v10);
        }
    }
    v2 = v4;
    int v13 = (unsigned int)v4;
    **(long**)(v3 - 88L) = v4;
    v4 = *(long*)(v3 - 64L);
    *(int*)v4 = v13;
    goto loc_405FA9;
}

long sub_4061B0() {
    char v0;
    char v1;
    long v2;
    long v3;
    unsigned long* ptr0;
    unsigned int v4 = x21;
    if(!(((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
        *(int*)(v3 - 0x11cL) = (unsigned int)v2;
        /*NO_RETURN*/ __clang_call_terminate(v2);
    }
    do {
        *(long*)(ptr0 - 2) = *(long*)(v3 - 48L);
        *(long*)(ptr0 - 4) = *(long*)(v3 - 56L);
        long v5 = *(long*)(ptr0 - 2);
        long v6 = *(long*)(ptr0 - 4);
        *(unsigned long*)(v3 - 264L) = (long*)(ptr0 - 4);
        *(long*)(v3 - 0x110L) = v5;
        ptr0 -= 5;
        *ptr0 = &loc_406230;
        long v7 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v6);
        long v8 = **(long**)(v3 - 264L);
        *(long*)(v3 - 0x118L) = v7;
        --ptr0;
        *ptr0 = &loc_406249;
        long v9 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(v8);
        --ptr0;
        *ptr0 = &loc_406251;
        long v10 = /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(v9);
        long v11 = *(long*)(v3 - 0x110L);
        long v12 = *(long*)(v3 - 0x118L);
        --ptr0;
        *ptr0 = &loc_406267;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_base(v11, v12, v10);
        *(long*)(ptr0 - 2) = *(long*)(v3 - 48L);
        *(long*)(ptr0 - 4) = *(long*)(v3 - 56L);
        long v13 = *(long*)(ptr0 - 2);
        long v14 = *(long*)(ptr0 - 4);
        *(unsigned long*)(v3 - 64L) = (long*)(ptr0 - 10);
        *(unsigned long*)(v3 - 72L) = (long*)(ptr0 - 4);
        *(unsigned long*)(v3 - 80L) = (long*)(ptr0 - 6);
        *(unsigned long*)(v3 - 88L) = (long*)(ptr0 - 8);
        *(long*)(v3 - 96L) = v13;
        *(unsigned long*)(v3 - 104L) = (long*)(ptr0 - 12);
        *(long*)(v3 - 112L) = v13;
        *(long*)(ptr0 - 13) = &loc_405BB6;
        long v15 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v14);
        long v16 = **(long**)(v3 - 72L);
        *(long*)(v3 - 120L) = v15;
        *(long*)(ptr0 - 14) = &loc_405BC9;
        long v17 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator(v16);
        *(long*)(ptr0 - 15) = &loc_405BD1;
        long v18 = /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::_S_select_on_copy(v17);
        long v19 = *(long*)(v3 - 96L);
        long v20 = *(long*)(v3 - 120L);
        ptr0 -= 16;
        *ptr0 = &loc_405BE1;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_base(v19, v20, v18);
        unsigned int v21 = x21;
        v1 = (((v21 - 1) * v21) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
        *(long*)(v3 - 128L) = **(unsigned long*)(v3 - 72L);
    }
    while(!(v1 & 0x1));
    long v22 = *(long*)(v3 - 128L);
    --ptr0;
    *ptr0 = &loc_405C41;
    long v23 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin(v22);
    *(long*)(v3 - 0x88L) = v23;
    unsigned int v24 = x21;
    if((((((v24 - 1) * v24) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
    loc_405C9B:
        **(unsigned long*)(v3 - 80L) = *(long*)(v3 - 0x88L);
        unsigned int v25 = x21;
        char v26 = (((v25 - 1) * v25) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
        *(long*)(v3 - 144L) = **(unsigned long*)(v3 - 72L);
        if((v26 & 0x1)) {
            long v27 = *(long*)(v3 - 144L);
            --ptr0;
            *ptr0 = &loc_405D02;
            long v28 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::end(v27);
            *(long*)(v3 - 152L) = v28;
            unsigned int v29 = x21;
            if(!(((((v29 - 1) * v29) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
                **(unsigned long*)(v3 - 104L) = *(long*)(v3 - 152L);
            }
            goto loc_405D5C;
        }
    }
    **(unsigned long*)(v3 - 80L) = *(long*)(v3 - 0x88L);
    goto loc_405C9B;
loc_405D5C:
    **(unsigned long*)(v3 - 104L) = *(long*)(v3 - 152L);
    long v30 = *(long*)(v3 - 112L);
    unsigned int v31 = x21;
    char v32 = (((v31 - 1) * v31) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
    *(long*)(v3 - 160L) = **(unsigned long*)(v3 - 112L);
    *(long*)(v3 - 168L) = v30;
    if((v32 & 0x1)) {
        long v33 = *(long*)(v3 - 168L);
        --ptr0;
        *ptr0 = &loc_405DCE;
        long v34 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v33);
        *(long*)(v3 - 176L) = v34;
        do {
            long v35 = **(unsigned long*)(v3 - 104L);
            unsigned int v36 = x21;
            v0 = (((v36 - 1) * v36) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0);
            *(long*)(v3 - 184L) = **(unsigned long*)(v3 - 80L);
            *(long*)(v3 - 192L) = v35;
        }
        while(!(v0 & 0x1));
        long v37 = *(long*)(v3 - 184L);
        long v38 = *(long*)(v3 - 192L);
        long v39 = *(long*)(v3 - 160L);
        long v40 = *(long*)(v3 - 176L);
        --ptr0;
        *ptr0 = &loc_405EA4;
        long v41 = /*BAD_CALL!*/ std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int> > >, int*, int>(v37, v38, v39, v40);
        *(long*)(v3 - 200L) = v41;
        unsigned int v42 = x21;
        if(!(((((v42 - 1) * v42) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
            *(long*)(*(long*)(v3 - 112L) + 8L) = *(long*)(v3 - 200L);
        }
    }
    else {
        **(unsigned long*)(v3 - 104L) = *(long*)(v3 - 152L);
        goto loc_405D5C;
    }
loc_405EFE:
    *(long*)(*(long*)(v3 - 112L) + 8L) = *(long*)(v3 - 200L);
    unsigned int v43 = x21;
    if((((((v43 - 1) * v43) & 0x1 ? 0: 1) | (y22 < 10 ? 1: 0)) & 0x1)) {
        jump *(long*)(v3 + 8L);
    }
    *(long*)(*(long*)(v3 - 112L) + 8L) = *(long*)(v3 - 200L);
    goto loc_405EFE;
}

void sub_4062DD() {
    long v0;
    long v1;
    while(1) {
        *(int*)(v0 - 252L) = (unsigned int)v1;
        v1 = /*NO_RETURN*/ __clang_call_terminate(v1);
    }
}

long sub_406351() {
    long v0;
    long v1 = →__cxa_begin_catch();
    *(long*)(v0 - 24L) = v1;
    /*NO_RETURN*/ →std::terminate();
}

void sub_4063A8() {
    long v0;
    while(1) {
        long v1 = →__cxa_begin_catch();
        *(long*)(v0 - 16L) = v1;
        /*NO_RETURN*/ →std::terminate();
    }
}

int sub_406714(long param0, long param1) {
    unsigned int v0;
    void* ptr0;
    char v1;
    long* ptr1;
    long v2;
    unsigned int v3 = x31;
    int v4 = y32;
    *(long*)(v2 - 104L) = param1;
    *(long**)(v2 - 112L) = ptr1;
    if((((((v3 - 1) * v3) & 0x1 ? 0: 1) | (v4 < 10 ? 1: 0)) & 0x1)) {
    loc_406761:
        ptr0 = ptr1;
        **(long***)(v2 - 72L) = ptr1;
        **(unsigned long*)(v2 - 64L) = (unsigned int)ptr1;
        ptr1 = std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(*(long*)(v2 - 88L));
        unsigned int v5 = x31;
        long v6 = (unsigned long)(v5 - 1);
        if((((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y32 < 10 ? 1: 0)) & 0x1)) {
            do {
                unsigned int v7 = x31;
                v6 = (unsigned long)((((v7 - 1) * v7) & 0x1 ? 0: 1) | (y32 < 10 ? 1: 0)) | ((unsigned long)((v6 >>> 8L) & 0xffffffffffffffL) << 8);
                *(long*)(v2 - 120L) = **(unsigned long*)(v2 - 72L);
            }
            while(!((unsigned char)v6 & 0x1));
            unsigned long* ptr2 = &ptr0;
            →_Unwind_Resume();
            do {
                *(long*)(ptr2 - 2) = *(long*)(v2 - 48L);
                *(long*)(ptr2 - 4) = *(long*)(v2 - 40L);
                *(long*)(ptr2 - 6) = *(long*)(v2 - 56L);
                long v8 = *(long*)(ptr2 - 2);
                long v9 = *(long*)(ptr2 - 6);
                ptr2 -= 7;
                *ptr2 = &loc_4068A2;
                /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(v8, v9);
                *(long*)(ptr2 - 2) = *(long*)(v2 - 48L);
                *(long*)(ptr2 - 4) = *(long*)(v2 - 40L);
                *(long*)(ptr2 - 6) = *(long*)(v2 - 56L);
                long v10 = *(long*)(ptr2 - 2);
                long v11 = *(long*)(ptr2 - 6);
                *(unsigned long*)(v2 - 64L) = (long*)(ptr2 - 10);
                *(unsigned long*)(v2 - 72L) = (long*)(ptr2 - 8);
                *(unsigned long*)(v2 - 80L) = (long*)(ptr2 - 4);
                *(long*)(v2 - 88L) = v10;
                ptr2 -= 11;
                *ptr2 = &loc_406619;
                /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl(v10, v11);
                unsigned int v12 = x31;
                v1 = (((v12 - 1) * v12) & 0x1 ? 0: 1) | (y32 < 10 ? 1: 0);
                *(long*)(v2 - 96L) = **(unsigned long*)(v2 - 80L);
            }
            while(!(v1 & 0x1));
            long v13 = *(long*)(v2 - 88L);
            long v14 = *(long*)(v2 - 96L);
            --ptr2;
            *ptr2 = &loc_40667C;
            /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_create_storage(v13, v14);
            do {
                v0 = x31;
            }
            while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y32 < 10 ? 1: 0)) & 0x1));
            jump *(long*)(v2 + 8L);
        }
    }
    ptr0 = ptr1;
    **(long***)(v2 - 72L) = ptr1;
    **(unsigned long*)(v2 - 64L) = (unsigned int)ptr1;
    ptr1 = std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(*(long*)(v2 - 88L));
    goto loc_406761;
}

long sub_406F58(long param0, long param1) {
    unsigned int v0;
    long v1;
    long* ptr0;
    void* ptr1;
    char v2;
    long* ptr2;
    long v3;
    unsigned int v4 = x41;
    int v5 = y42;
    *(long*)(v3 - 72L) = param1;
    *(long**)(v3 - 80L) = ptr2;
    if((((((v4 - 1) * v4) & 0x1 ? 0: 1) | (v5 < 10 ? 1: 0)) & 0x1)) {
    loc_406FA5:
        ptr1 = ptr2;
        **(long***)(v3 - 40L) = ptr2;
        **(unsigned long*)(v3 - 48L) = (unsigned int)ptr2;
        ptr2 = std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(*(long*)(v3 - 56L));
        unsigned int v6 = x41;
        long v7 = (unsigned long)(v6 - 1);
        if((((((v6 - 1) * v6) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0)) & 0x1)) {
            do {
                unsigned int v8 = x41;
                v7 = (unsigned long)((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0)) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
                *(long*)(v3 - 88L) = **(unsigned long*)(v3 - 40L);
            }
            while(!((unsigned char)v7 & 0x1));
            unsigned long* ptr3 = &ptr1;
            →_Unwind_Resume();
            do {
                ptr0 = (long*)(ptr3 - 2);
                *ptr0 = *(long*)(v3 - 24L);
                ptr3 = (unsigned long*)(ptr0 - 6);
                *(unsigned long*)(ptr0 - 2) = *(long*)(v3 - 24L);
                long* ptr4 = *(unsigned long*)(ptr0 - 2);
                v1 = *ptr4;
                long v9 = (*(ptr4 + 2) - v1) >> 2;
                v0 = x41;
                v2 = (((v0 - 1) * v0) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0);
                *(long*)(v3 - 32L) = *ptr4;
                *(long*)(v3 - 40L) = (long)(ptr0 - 4);
                *(unsigned long*)(v3 - 48L) = ptr0 - 6;
                *(unsigned long*)(v3 - 56L) = ptr4;
                *(long*)(v3 - 64L) = v9;
            }
            while(!(v2 & 0x1));
            long v10 = *(long*)(v3 - 56L);
            long v11 = *(long*)(v3 - 32L);
            long v12 = *(long*)(v3 - 64L);
            --ptr3;
            *ptr3 = &loc_406EBB;
            /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v10, v11, v12, (long)(ptr0 - 4), v1, (long)(((v0 - 1) * v0) & 0x1));
            unsigned int v13 = x41;
            if((((((v13 - 1) * v13) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0)) & 0x1)) {
            loc_406F03:
                long v14 = *(long*)(v3 - 56L);
                --ptr3;
                *ptr3 = &loc_406F0C;
                /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(v14);
                unsigned int v15 = x41;
                if((((((v15 - 1) * v15) & 0x1 ? 0: 1) | (y42 < 10 ? 1: 0)) & 0x1)) {
                    jump *(long*)(v3 + 8L);
                }
            }
            long v16 = *(long*)(v3 - 56L);
            --ptr3;
            *ptr3 = &loc_4070C7;
            /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(v16);
            goto loc_406F03;
        }
    }
    ptr1 = ptr2;
    **(long***)(v3 - 40L) = ptr2;
    **(unsigned long*)(v3 - 48L) = (unsigned int)ptr2;
    ptr2 = std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl(*(long*)(v3 - 56L));
    goto loc_406FA5;
}

void sub_40A15A(long param0, long param1) {
    unsigned int v0;
    long v1;
    unsigned int v2;
    long v3;
    unsigned int v4;
    unsigned int v5;
    char v6;
    char v7;
    void* ptr0;
    long v8;
    long v9;
    unsigned int v10 = x97;
    char v11 = (((v10 - 1) * v10) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
    *(long*)(v8 - 320L) = param1;
    *(long*)(v8 - 328L) = v9;
    if((v11 & 0x1)) {
    loc_40A1AD:
        ptr0 = (void*)v9;
        int v12 = (unsigned int)v9;
        **(long**)(v8 - 152L) = v9;
        v9 = *(long*)(v8 - 160L);
        *(int*)v9 = v12;
        unsigned int v13 = x97;
        if((((((v13 - 1) * v13) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            unsigned int v14 = x97;
            if(!(((((v14 - 1) * v14) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
                long v15 = →__cxa_begin_catch();
                *(long*)(v8 - 0x200L) = v15;
            }
            goto loc_40A25B;
        }
    }
    ptr0 = (void*)v9;
    int v16 = (unsigned int)v9;
    **(long**)(v8 - 152L) = v9;
    v9 = *(long*)(v8 - 160L);
    *(int*)v9 = v16;
    goto loc_40A1AD;
loc_40A25B:
    long v17 = →__cxa_begin_catch();
    char v18 = **(unsigned long*)(v8 - 144L) ? 1: 0;
    unsigned int v19 = x97;
    char v20 = (((v19 - 1) * v19) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
    *(long*)(v8 - 336L) = v17;
    *(char*)(v8 - 0x151L) = v18;
    if((v20 & 0x1)) {
        if(!(*(char*)(v8 - 0x151L) & 0x1)) {
            do {
                long v21 = **(unsigned long*)(v8 - 120L) * 4L + **(unsigned long*)(v8 - 0x88L);
                unsigned int v22 = x97;
                v7 = (((v22 - 1) * v22) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
                *(long*)(v8 - 352L) = *(long*)(v8 - 88L);
                *(long*)(v8 - 360L) = v21;
            }
            while(!(v7 & 0x1));
            __gnu_cxx::__alloc_traits<std::allocator<int> >::destroy(*(long*)(v8 - 352L), *(long*)(v8 - 360L));
        }
        else {
            do {
                long v23 = **(unsigned long*)(v8 - 144L);
                long v24 = *(long*)(v8 - 88L);
                unsigned int v25 = x97;
                v6 = (((v25 - 1) * v25) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
                *(long*)(v8 - 384L) = **(unsigned long*)(v8 - 0x88L);
                *(long*)(v8 - 0x188L) = v23;
                *(long*)(v8 - 400L) = v24;
            }
            while(!(v6 & 0x1));
            long v26 = std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(*(long*)(v8 - 400L));
            *(long*)(v8 - 408L) = v26;
            goto loc_40A605;
        }
    loc_40A3ED:
        for(unsigned int i = x97; !(((((i - 1) * i) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1); i = x97) {
            goto loc_40A3ED;
        loc_40A605:
            do {
                v5 = x97;
            }
            while(!(((((v5 - 1) * v5) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
            std::_Destroy<int*, int>(*(long*)(v8 - 384L), *(long*)(v8 - 0x188L), *(long*)(v8 - 408L));
            do {
                v4 = x97;
            }
            while(!(((((v4 - 1) * v4) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        }
        do {
            v3 = *(long*)(v8 - 0x88L);
            long v27 = *(long*)v3;
            long v28 = **(unsigned long*)(v8 - 112L);
            v2 = x97;
            v1 = (long)y98;
            *(long*)(v8 - 416L) = *(long*)(v8 - 88L);
            *(long*)(v8 - 424L) = v27;
            *(long*)(v8 - 432L) = v28;
        }
        while(!(((((v2 - 1) * v2) & 0x1 ? 0: 1) | ((unsigned int)v1 < 10 ? 1: 0)) & 0x1));
        std::_Vector_base<int, std::allocator<int> >::_M_deallocate(*(long*)(v8 - 416L), *(long*)(v8 - 424L), *(long*)(v8 - 432L), v3, v1, (long)(v2 - 1));
        do {
            v0 = x97;
        }
        while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        v9 = /*NO_RETURN*/ →__cxa_rethrow();
        ptr0 = (void*)v9;
        int v16 = (unsigned int)v9;
        **(long**)(v8 - 152L) = v9;
        v9 = *(long*)(v8 - 160L);
        *(int*)v9 = v16;
        goto loc_40A1AD;
    }
    else {
        long v15 = →__cxa_begin_catch();
        *(long*)(v8 - 0x200L) = v15;
        goto loc_40A25B;
    }
}

long sub_40A435(long param0, long param1) {
    char v0;
    void* ptr0;
    long v1;
    long v2;
    unsigned int v3 = x97;
    char v4 = (((v3 - 1) * v3) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
    *(long*)(v1 - 368L) = param1;
    *(long*)(v1 - 376L) = v2;
    if((v4 & 0x1)) {
    loc_40A488:
        ptr0 = (void*)v2;
        int v5 = (unsigned int)v2;
        **(long**)(v1 - 152L) = v2;
        v2 = *(long*)(v1 - 160L);
        *(int*)v2 = v5;
        unsigned int v6 = x97;
        long v7 = (unsigned long)y98;
        if((((((v6 - 1) * v6) & 0x1 ? 0: 1) | ((unsigned int)v7 < 10 ? 1: 0)) & 0x1)) {
            →__cxa_end_catch();
            unsigned int v8 = x97;
            long v9 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(((unsigned long)(v6 - 1) >>> 8L) & 0xffffffffffffffL) << 8);
            v7 = (unsigned long)((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
            do {
                unsigned int v10 = x97;
                v9 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v9 >>> 8L) & 0xffffffffffffffL) << 8);
                v7 = (unsigned long)((unsigned char)v9 | (((v10 - 1) * v10) & 0x1 ? 0: 1)) | ((unsigned long)((v7 >>> 8L) & 0xffffffffffffffL) << 8);
            }
            while(!((unsigned char)v7 & 0x1));
            do {
                unsigned int v11 = x97;
                v0 = (((v11 - 1) * v11) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
                *(long*)(v1 - 464L) = **(unsigned long*)(v1 - 152L);
            }
            while(!(v0 & 0x1));
            long v12 = →_Unwind_Resume();
            unsigned int v13 = x97;
            int v14 = y98;
            *(long*)(v1 - 472L) = param1;
            *(long*)(v1 - 480L) = v12;
            if(!(((((v13 - 1) * v13) & 0x1 ? 0: 1) | (v14 < 10 ? 1: 0)) & 0x1)) {
                *(int*)(v1 - 540L) = (unsigned int)v12;
                /*NO_RETURN*/ __clang_call_terminate(v12);
            }
            *(int*)(v1 - 484L) = (unsigned int)v12;
            v2 = /*NO_RETURN*/ __clang_call_terminate(v12);
        }
    }
    ptr0 = (void*)v2;
    int v15 = (unsigned int)v2;
    **(long**)(v1 - 152L) = v2;
    v2 = *(long*)(v1 - 160L);
    *(int*)v2 = v15;
    goto loc_40A488;
}

int sub_40A853(long* param0, long param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    long v4;
    long v5;
    long v6;
    long v7;
    unsigned int v8;
    long v9;
    unsigned int v10;
    long v11;
    int v12;
    long v13;
    unsigned long* ptr0;
    do {
        v8 = x97;
    }
    while(!(((((v8 - 1) * v8) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
    do {
        long* ptr1 = (long*)(ptr0 - 2);
        *ptr1 = *(long*)(v11 - 48L);
        *(ptr1 - 2) = *(long*)(v11 - 56L);
        *(ptr1 - 4) = *(long*)(v11 - 64L);
        v7 = (long)(ptr1 - 16);
        v6 = v7 - 16L;
        v5 = v6 - 48L;
        v4 = v5 - 16L;
        ptr0 = (unsigned long*)(v5 - 16L);
        *(ptr1 - 6) = *(long*)(v11 - 48L);
        *(ptr1 - 8) = *(long*)(v11 - 56L);
        *(ptr1 - 10) = *(long*)(v11 - 64L);
        long v14 = *(ptr1 - 8);
        char v15 = *(long*)(v14 + 16L) == *(long*)(v14 + 8L) ? 0: 1;
        v10 = x97;
        v12 = y98;
        *(unsigned long*)(v11 - 72L) = ptr1 - 12;
        *(unsigned long*)(v11 - 80L) = ptr1 - 6;
        *(long*)(v11 - 88L) = v14;
        *(unsigned long*)(v11 - 96L) = ptr1 - 10;
        *(char*)(v11 - 97L) = v15;
        *(unsigned long*)(v11 - 112L) = ptr1 - 14;
        *(long*)(v11 - 120L) = v7;
        *(long*)(v11 - 128L) = v6;
        *(long*)(v11 - 0x88L) = v6 - 16L;
        *(long*)(v11 - 144L) = v6 - 32L;
        *(long*)(v11 - 152L) = v5;
        *(long*)(v11 - 160L) = v4;
    }
    while(!(((((v10 - 1) * v10) & 0x1 ? 0: 1) | (v12 < 10 ? 1: 0)) & 0x1));
    if((*(char*)(v11 - 97L) & 0x1)) {
        unsigned int v16 = x97;
        if(!(((((v16 - 1) * v16) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        loc_40ACB6:
            long v17 = *(long*)(v11 - 88L);
            long v18 = *(long*)(v17 + 8L);
            long v19 = *(long*)(v17 + 8L) - 4L;
            long v20 = *(long*)(v11 - 88L);
            --ptr0;
            *ptr0 = &loc_40ACD1;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v20, v18, v19);
            long v21 = *(long*)(v11 - 88L);
            *(long*)(v21 + 8L) = *(long*)(v21 + 8L) + 4L;
            **(unsigned long*)(v11 - 72L) = ***(unsigned long*)(v11 - 96L);
            long v22 = *(long*)(v11 - 80L);
            --ptr0;
            *ptr0 = &loc_40ACFE;
            long v23 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v22);
            long v24 = *(long*)v23;
            long v25 = *(long*)(v11 - 88L);
            long v26 = *(long*)(v25 + 8L) - 4L;
            long v27 = *(long*)(v25 + 8L) - 8L;
            --ptr0;
            *ptr0 = &loc_40AD23;
            long v28 = /*BAD_CALL!*/ std::copy_backward<int*, int*>(v24, v27, v26);
            int v29 = **(unsigned long*)(v11 - 72L);
            long v30 = *(long*)(v11 - 80L);
            *(long*)(v11 - 496L) = v28;
            *(int*)(v11 - 500L) = v29;
            --ptr0;
            *ptr0 = &loc_40AD41;
            long v31 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(v30);
            *(int*)v31 = *(int*)(v11 - 500L);
        }
        goto loc_4099F7;
    }
    else {
        unsigned int v32 = x97;
        long v33 = (long)y98;
        if((((((v32 - 1) * v32) & 0x1 ? 0: 1) | ((int)y98 < 10 ? 1: 0)) & 0x1)) {
            goto loc_409B31;
        loc_4099F7:
            long v34 = *(long*)(v11 - 88L);
            long v35 = *(long*)(v34 + 8L);
            long v36 = *(long*)(v34 + 8L) - 4L;
            long v37 = *(long*)(v11 - 88L);
            --ptr0;
            *ptr0 = &loc_409A12;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v37, v35, v36);
            long v38 = *(long*)(v11 - 88L);
            *(long*)(v38 + 8L) = *(long*)(v38 + 8L) + 4L;
            **(unsigned long*)(v11 - 72L) = ***(unsigned long*)(v11 - 96L);
            long v39 = *(long*)(v11 - 80L);
            --ptr0;
            *ptr0 = &loc_409A3F;
            long v40 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v39);
            long v41 = *(long*)v40;
            long v42 = *(long*)(v11 - 88L);
            long v43 = *(long*)(v42 + 8L) - 4L;
            long v44 = *(long*)(v42 + 8L) - 8L;
            --ptr0;
            *ptr0 = &loc_409A64;
            long v45 = /*BAD_CALL!*/ std::copy_backward<int*, int*>(v41, v44, v43);
            int v46 = **(unsigned long*)(v11 - 72L);
            long v47 = *(long*)(v11 - 80L);
            *(long*)(v11 - 168L) = v45;
            *(int*)(v11 - 172L) = v46;
            --ptr0;
            *ptr0 = &loc_409A82;
            long v48 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(v47);
            *(int*)v48 = *(int*)(v11 - 172L);
            unsigned int v49 = x97;
            v5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            if(((unsigned char)v5 | (((v49 - 1) * v49) & 0x1 ? 0: 1)) & 0x1) {
                goto loc_40AA10;
            }
            else {
                goto loc_40ACB6;
            loc_409B31:
                long v50 = *(long*)(v11 - 88L);
                --ptr0;
                *ptr0 = &loc_409B3A;
                long v51 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_check_len(v50, 1L, "vector::_M_insert_aux", v33, v7, v6);
                **(long**)(v11 - 112L) = v51;
                long v52 = *(long*)(v11 - 88L);
                --ptr0;
                *ptr0 = &loc_409B4A;
                long v53 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin2(v52);
                long v54 = *(long*)(v11 - 128L);
                *(long*)v54 = v53;
                long v55 = *(long*)(v11 - 80L);
                --ptr0;
                *ptr0 = &loc_409B5D;
                long v56 = /*BAD_CALL!*/ __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(v55, v54);
                **(long**)(v11 - 120L) = v56;
                long v57 = **(long**)(v11 - 112L);
                long v58 = *(long*)(v11 - 88L);
                --ptr0;
                *ptr0 = &loc_409B77;
                long v59 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v58, v57);
                long* ptr2 = *(unsigned long*)(v11 - 0x88L);
                *ptr2 = v59;
                **(unsigned long*)(v11 - 144L) = *ptr2;
                long v60 = *(long*)(v11 - 88L);
                v33 = *(long*)(v11 - 120L);
                long v61 = *(long*)v33 * 4L + *ptr2;
                v7 = *(long*)(v11 - 96L);
                unsigned int v62 = x97;
                v6 = (long)(((v62 - 1) * v62) & 0x1);
                v4 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
                v5 = (unsigned long)((unsigned char)v4 | ((unsigned int)v6 ? 0: 1)) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                *(long*)(v11 - 184L) = *(long*)v7;
                *(long*)(v11 - 192L) = v60;
                *(long*)(v11 - 200L) = v61;
                if(((unsigned char)v5 & 0x1)) {
                    long v63 = *(long*)(v11 - 192L);
                    long v64 = *(long*)(v11 - 200L);
                    long v65 = *(long*)(v11 - 184L);
                    --ptr0;
                    *ptr0 = &loc_409C24;
                    /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v63, v64, v65);
                    unsigned int v66 = x97;
                    if(!(((((v66 - 1) * v66) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
                        **(unsigned long*)(v11 - 144L) = 0L;
                    }
                    goto loc_409C73;
                }
            }
        }
        long v67 = *(long*)(v11 - 88L);
        --ptr0;
        *ptr0 = &loc_40AD6A;
        long v68 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_check_len(v67, 1L, "vector::_M_insert_aux", v33, v7, v6);
        **(long**)(v11 - 112L) = v68;
        long v69 = *(long*)(v11 - 88L);
        --ptr0;
        *ptr0 = &loc_40AD7A;
        long v70 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin2(v69);
        long v71 = *(long*)(v11 - 128L);
        *(long*)v71 = v70;
        long v72 = *(long*)(v11 - 80L);
        --ptr0;
        *ptr0 = &loc_40AD8D;
        long v73 = /*BAD_CALL!*/ __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(v72, v71);
        **(long**)(v11 - 120L) = v73;
        long v74 = **(long**)(v11 - 112L);
        long v75 = *(long*)(v11 - 88L);
        --ptr0;
        *ptr0 = &loc_40ADA7;
        long v76 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v75, v74);
        long* ptr3 = *(unsigned long*)(v11 - 0x88L);
        *ptr3 = v76;
        **(unsigned long*)(v11 - 144L) = *ptr3;
        goto loc_409B31;
    }
loc_40AA10:
    unsigned int v77 = x97;
    param0 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)param0 >>> 8L) & 0xffffffffffffffL) << 8);
    param1 = (unsigned long)((unsigned char)param0 | (((v77 - 1) * v77) & 0x1 ? 0: 1)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
    do {
        unsigned int v78 = x97;
        param0 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)param0 >>> 8L) & 0xffffffffffffffL) << 8);
        param1 = (unsigned long)((unsigned char)param0 | (((v78 - 1) * v78) & 0x1 ? 0: 1)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    while(!((unsigned char)param1 & 0x1));
    jump *(long*)(v11 + 8L);
loc_409C73:
    **(unsigned long*)(v11 - 144L) = 0L;
    unsigned int v79 = x97;
    char v80 = (((v79 - 1) * v79) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
    *(long*)(v11 - 208L) = **(unsigned long*)(v11 - 88L);
    if((v80 & 0x1)) {
        long v81 = *(long*)(v11 - 80L);
        --ptr0;
        *ptr0 = &loc_409CD9;
        long v82 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v81);
        *(long*)(v11 - 216L) = v82;
        do {
            long v83 = **(unsigned long*)(v11 - 0x88L);
            long v84 = *(long*)(v11 - 88L);
            v3 = x97;
            v5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            *(long*)(v11 - 224L) = **(unsigned long*)(v11 - 216L);
            *(long*)(v11 - 232L) = v83;
            *(long*)(v11 - 240L) = v84;
        }
        while(!(((unsigned char)v5 | (((v3 - 1) * v3) & 0x1 ? 0: 1)) & 0x1));
        long v85 = *(long*)(v11 - 240L);
        --ptr0;
        *ptr0 = &loc_409DAD;
        long v86 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v85);
        *(long*)(v11 - 248L) = v86;
        do {
            v2 = x97;
        }
        while(!(((((v2 - 1) * v2) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        long v87 = *(long*)(v11 - 208L);
        long v88 = *(long*)(v11 - 224L);
        long v89 = *(long*)(v11 - 232L);
        long v90 = *(long*)(v11 - 248L);
        --ptr0;
        *ptr0 = &loc_409E60;
        long v91 = /*BAD_CALL!*/ std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(v87, v88, v89, v90);
        *(long*)(v11 - 0x100L) = v91;
        unsigned int v92 = x97;
        if(!(((((v92 - 1) * v92) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            long* ptr4 = *(unsigned long*)(v11 - 144L);
            *ptr4 = *(long*)(v11 - 0x100L);
            *ptr4 = *ptr4 + 4L;
        }
    }
    else {
        **(unsigned long*)(v11 - 144L) = 0L;
        goto loc_409C73;
    }
loc_409EAF:
    long* ptr5 = *(unsigned long*)(v11 - 144L);
    *ptr5 = *(long*)(v11 - 0x100L);
    *ptr5 = *ptr5 + 4L;
    unsigned int v93 = x97;
    if((((((v93 - 1) * v93) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        long v94 = *(long*)(v11 - 80L);
        --ptr0;
        *ptr0 = &loc_409F1E;
        long v95 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v94);
        *(long*)(v11 - 264L) = v95;
        do {
            long v96 = *(long*)(v11 - 88L);
            long v97 = *(long*)(v96 + 8L);
            long v98 = **(unsigned long*)(v11 - 144L);
            v1 = x97;
            v5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            *(long*)(v11 - 0x110L) = **(unsigned long*)(v11 - 264L);
            *(long*)(v11 - 0x118L) = v96;
            *(long*)(v11 - 288L) = v97;
            *(long*)(v11 - 296L) = v98;
        }
        while(!(((unsigned char)v5 | (((v1 - 1) * v1) & 0x1 ? 0: 1)) & 0x1));
        long v99 = *(long*)(v11 - 0x118L);
        --ptr0;
        *ptr0 = &loc_409FFD;
        long v100 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v99);
        *(long*)(v11 - 304L) = v100;
        do {
            v0 = x97;
        }
        while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        long v101 = *(long*)(v11 - 0x110L);
        long v102 = *(long*)(v11 - 288L);
        long v103 = *(long*)(v11 - 296L);
        long v104 = *(long*)(v11 - 304L);
        --ptr0;
        *ptr0 = &loc_40A0B0;
        long v105 = /*BAD_CALL!*/ std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(v101, v102, v103, v104);
        *(long*)(v11 - 312L) = v105;
        unsigned int v106 = x97;
        if(!(((((v106 - 1) * v106) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            **(unsigned long*)(v11 - 144L) = *(long*)(v11 - 312L);
        }
    }
    else {
        long* ptr4 = *(unsigned long*)(v11 - 144L);
        *ptr4 = *(long*)(v11 - 0x100L);
        *ptr4 = *ptr4 + 4L;
        goto loc_409EAF;
    }
loc_40A10D:
    **(unsigned long*)(v11 - 144L) = *(long*)(v11 - 312L);
    unsigned int v107 = x97;
    if((((((v107 - 1) * v107) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        unsigned int v108 = x97;
        if(!(((((v108 - 1) * v108) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            goto loc_40AE9E;
        }
    }
    else {
        **(unsigned long*)(v11 - 144L) = *(long*)(v11 - 312L);
        goto loc_40A10D;
    }
loc_40A926:
    long v109 = *(long*)(v11 - 88L);
    long v110 = *(long*)(v109 + 8L);
    *(long*)(v11 - 440L) = *(long*)v109;
    *(long*)(v11 - 448L) = v110;
    --ptr0;
    *ptr0 = &loc_40A947;
    long v111 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v109);
    long v112 = *(long*)(v11 - 440L);
    long v113 = *(long*)(v11 - 448L);
    --ptr0;
    *ptr0 = &loc_40A95D;
    /*BAD_CALL!*/ std::_Destroy<int*, int>(v112, v113, v111);
    long v114 = *(long*)(v11 - 88L);
    long* ptr6 = *(unsigned long*)(v11 - 88L);
    long v115 = *ptr6;
    long v116 = *ptr6;
    *(long*)(v11 - 456L) = (*(ptr6 + 2) - v116) >> 2;
    long v117 = *(long*)(v11 - 456L);
    --ptr0;
    *ptr0 = &loc_40A98C;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v114, v115, v117, v116, v13, v9);
    long* ptr7 = *(unsigned long*)(v11 - 0x88L);
    long* ptr8 = *(unsigned long*)(v11 - 88L);
    *ptr8 = *ptr7;
    *(ptr8 + 1) = **(unsigned long*)(v11 - 144L);
    param0 = *(unsigned long*)(v11 - 112L);
    param1 = *param0 * 4L + *ptr7;
    *(ptr8 + 2) = *param0 * 4L + *ptr7;
    unsigned int v118 = x97;
    v4 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
    v5 = (unsigned long)((unsigned char)v4 | (((v118 - 1) * v118) & 0x1 ? 0: 1)) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
    if(((unsigned char)v5 & 0x1)) {
        goto loc_40AA10;
    }
    else {
    loc_40AE9E:
        long v119 = *(long*)(v11 - 88L);
        long v120 = *(long*)(v119 + 8L);
        *(long*)(v11 - 520L) = *(long*)v119;
        *(long*)(v11 - 0x210L) = v120;
        --ptr0;
        *ptr0 = &loc_40AEBF;
        long v121 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v119);
        long v122 = *(long*)(v11 - 520L);
        long v123 = *(long*)(v11 - 0x210L);
        --ptr0;
        *ptr0 = &loc_40AED5;
        /*BAD_CALL!*/ std::_Destroy<int*, int>(v122, v123, v121);
        long v124 = *(long*)(v11 - 88L);
        long* ptr9 = *(unsigned long*)(v11 - 88L);
        long v125 = *ptr9;
        long v126 = *ptr9;
        *(long*)(v11 - 536L) = (*(ptr9 + 2) - v126) >> 2;
        long v127 = *(long*)(v11 - 536L);
        --ptr0;
        *ptr0 = &loc_40AF04;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v124, v125, v127, v126, v13, v9);
        long* ptr10 = *(unsigned long*)(v11 - 0x88L);
        long* ptr11 = *(unsigned long*)(v11 - 88L);
        *ptr11 = *ptr10;
        *(ptr11 + 1) = **(unsigned long*)(v11 - 144L);
        *(ptr11 + 2) = **(unsigned long*)(v11 - 112L) * 4L + *ptr10;
        goto loc_40A926;
    }
}

int sub_40ABAF(long* param0, long param1) {
    unsigned int v0;
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;
    long v4;
    long v5;
    long v6;
    long v7;
    unsigned long* ptr0;
    long v8;
    unsigned int v9;
    long v10;
    long v11;
    long v12;
    int v13;
    long v14;
    unsigned int v15 = x97;
    long v16 = (unsigned long)(v15 - 1);
    if(!(((((v15 - 1) * v15) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        ptr0 = &v12;
        *(int*)(v11 - 540L) = (unsigned int)v10;
        /*NO_RETURN*/ __clang_call_terminate(v10);
    }
    unsigned int v17 = x97;
    v16 = (unsigned long)((((v17 - 1) * v17) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) | ((unsigned long)((v16 >>> 8L) & 0xffffffffffffffL) << 8);
loc_40AC37:
    unsigned int v18 = x97;
    v16 = (unsigned long)((((v18 - 1) * v18) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) | ((unsigned long)((v16 >>> 8L) & 0xffffffffffffffL) << 8);
    if(!((unsigned char)v16 & 0x1)) {
        goto loc_40AC37;
    }
    else {
        do {
            long* ptr1 = (long*)(ptr0 - 2);
            *ptr1 = *(long*)(v11 - 48L);
            *(ptr1 - 2) = *(long*)(v11 - 56L);
            *(ptr1 - 4) = *(long*)(v11 - 64L);
            v7 = (long)(ptr1 - 16);
            v6 = v7 - 16L;
            v5 = v6 - 48L;
            v4 = v5 - 16L;
            ptr0 = (unsigned long*)(v5 - 16L);
            *(ptr1 - 6) = *(long*)(v11 - 48L);
            *(ptr1 - 8) = *(long*)(v11 - 56L);
            *(ptr1 - 10) = *(long*)(v11 - 64L);
            long v19 = *(ptr1 - 8);
            char v20 = *(long*)(v19 + 16L) == *(long*)(v19 + 8L) ? 0: 1;
            v9 = x97;
            v13 = y98;
            *(unsigned long*)(v11 - 72L) = ptr1 - 12;
            *(unsigned long*)(v11 - 80L) = ptr1 - 6;
            *(long*)(v11 - 88L) = v19;
            *(unsigned long*)(v11 - 96L) = ptr1 - 10;
            *(char*)(v11 - 97L) = v20;
            *(unsigned long*)(v11 - 112L) = ptr1 - 14;
            *(long*)(v11 - 120L) = v7;
            *(long*)(v11 - 128L) = v6;
            *(long*)(v11 - 0x88L) = v6 - 16L;
            *(long*)(v11 - 144L) = v6 - 32L;
            *(long*)(v11 - 152L) = v5;
            *(long*)(v11 - 160L) = v4;
        }
        while(!(((((v9 - 1) * v9) & 0x1 ? 0: 1) | (v13 < 10 ? 1: 0)) & 0x1));
    }
    if((*(char*)(v11 - 97L) & 0x1)) {
        unsigned int v21 = x97;
        if(!(((((v21 - 1) * v21) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        loc_40ACB6:
            long v22 = *(long*)(v11 - 88L);
            long v23 = *(long*)(v22 + 8L);
            long v24 = *(long*)(v22 + 8L) - 4L;
            long v25 = *(long*)(v11 - 88L);
            --ptr0;
            *ptr0 = &loc_40ACD1;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v25, v23, v24);
            long v26 = *(long*)(v11 - 88L);
            *(long*)(v26 + 8L) = *(long*)(v26 + 8L) + 4L;
            **(unsigned long*)(v11 - 72L) = ***(unsigned long*)(v11 - 96L);
            long v27 = *(long*)(v11 - 80L);
            --ptr0;
            *ptr0 = &loc_40ACFE;
            long v28 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v27);
            long v29 = *(long*)v28;
            long v30 = *(long*)(v11 - 88L);
            long v31 = *(long*)(v30 + 8L) - 4L;
            long v32 = *(long*)(v30 + 8L) - 8L;
            --ptr0;
            *ptr0 = &loc_40AD23;
            long v33 = /*BAD_CALL!*/ std::copy_backward<int*, int*>(v29, v32, v31);
            int v34 = **(unsigned long*)(v11 - 72L);
            long v35 = *(long*)(v11 - 80L);
            *(long*)(v11 - 496L) = v33;
            *(int*)(v11 - 500L) = v34;
            --ptr0;
            *ptr0 = &loc_40AD41;
            long v36 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(v35);
            *(int*)v36 = *(int*)(v11 - 500L);
        }
        goto loc_4099F7;
    }
    else {
        unsigned int v37 = x97;
        long v38 = (long)y98;
        if((((((v37 - 1) * v37) & 0x1 ? 0: 1) | ((int)y98 < 10 ? 1: 0)) & 0x1)) {
            goto loc_409B31;
        loc_4099F7:
            long v39 = *(long*)(v11 - 88L);
            long v40 = *(long*)(v39 + 8L);
            long v41 = *(long*)(v39 + 8L) - 4L;
            long v42 = *(long*)(v11 - 88L);
            --ptr0;
            *ptr0 = &loc_409A12;
            /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v42, v40, v41);
            long v43 = *(long*)(v11 - 88L);
            *(long*)(v43 + 8L) = *(long*)(v43 + 8L) + 4L;
            **(unsigned long*)(v11 - 72L) = ***(unsigned long*)(v11 - 96L);
            long v44 = *(long*)(v11 - 80L);
            --ptr0;
            *ptr0 = &loc_409A3F;
            long v45 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v44);
            long v46 = *(long*)v45;
            long v47 = *(long*)(v11 - 88L);
            long v48 = *(long*)(v47 + 8L) - 4L;
            long v49 = *(long*)(v47 + 8L) - 8L;
            --ptr0;
            *ptr0 = &loc_409A64;
            long v50 = /*BAD_CALL!*/ std::copy_backward<int*, int*>(v46, v49, v48);
            int v51 = **(unsigned long*)(v11 - 72L);
            long v52 = *(long*)(v11 - 80L);
            *(long*)(v11 - 168L) = v50;
            *(int*)(v11 - 172L) = v51;
            --ptr0;
            *ptr0 = &loc_409A82;
            long v53 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::operator*(v52);
            *(int*)v53 = *(int*)(v11 - 172L);
            unsigned int v54 = x97;
            v5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            if(((unsigned char)v5 | (((v54 - 1) * v54) & 0x1 ? 0: 1)) & 0x1) {
                goto loc_40AA10;
            }
            else {
                goto loc_40ACB6;
            loc_409B31:
                long v55 = *(long*)(v11 - 88L);
                --ptr0;
                *ptr0 = &loc_409B3A;
                long v56 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_check_len(v55, 1L, "vector::_M_insert_aux", v38, v7, v6);
                **(long**)(v11 - 112L) = v56;
                long v57 = *(long*)(v11 - 88L);
                --ptr0;
                *ptr0 = &loc_409B4A;
                long v58 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin2(v57);
                long v59 = *(long*)(v11 - 128L);
                *(long*)v59 = v58;
                long v60 = *(long*)(v11 - 80L);
                --ptr0;
                *ptr0 = &loc_409B5D;
                long v61 = /*BAD_CALL!*/ __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(v60, v59);
                **(long**)(v11 - 120L) = v61;
                long v62 = **(long**)(v11 - 112L);
                long v63 = *(long*)(v11 - 88L);
                --ptr0;
                *ptr0 = &loc_409B77;
                long v64 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v63, v62);
                long* ptr2 = *(unsigned long*)(v11 - 0x88L);
                *ptr2 = v64;
                **(unsigned long*)(v11 - 144L) = *ptr2;
                long v65 = *(long*)(v11 - 88L);
                v38 = *(long*)(v11 - 120L);
                long v66 = *(long*)v38 * 4L + *ptr2;
                v7 = *(long*)(v11 - 96L);
                unsigned int v67 = x97;
                v6 = (long)(((v67 - 1) * v67) & 0x1);
                v4 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
                v5 = (unsigned long)((unsigned char)v4 | ((unsigned int)v6 ? 0: 1)) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                *(long*)(v11 - 184L) = *(long*)v7;
                *(long*)(v11 - 192L) = v65;
                *(long*)(v11 - 200L) = v66;
                if(((unsigned char)v5 & 0x1)) {
                    long v68 = *(long*)(v11 - 192L);
                    long v69 = *(long*)(v11 - 200L);
                    long v70 = *(long*)(v11 - 184L);
                    --ptr0;
                    *ptr0 = &loc_409C24;
                    /*BAD_CALL!*/ __gnu_cxx::__alloc_traits<std::allocator<int> >::construct<int>(v68, v69, v70);
                    unsigned int v71 = x97;
                    if(!(((((v71 - 1) * v71) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
                        **(unsigned long*)(v11 - 144L) = 0L;
                    }
                    goto loc_409C73;
                }
            }
        }
        long v72 = *(long*)(v11 - 88L);
        --ptr0;
        *ptr0 = &loc_40AD6A;
        long v73 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::_M_check_len(v72, 1L, "vector::_M_insert_aux", v38, v7, v6);
        **(long**)(v11 - 112L) = v73;
        long v74 = *(long*)(v11 - 88L);
        --ptr0;
        *ptr0 = &loc_40AD7A;
        long v75 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::begin2(v74);
        long v76 = *(long*)(v11 - 128L);
        *(long*)v76 = v75;
        long v77 = *(long*)(v11 - 80L);
        --ptr0;
        *ptr0 = &loc_40AD8D;
        long v78 = /*BAD_CALL!*/ __gnu_cxx::operator-<int*, std::vector<int, std::allocator<int> > >(v77, v76);
        **(long**)(v11 - 120L) = v78;
        long v79 = **(long**)(v11 - 112L);
        long v80 = *(long*)(v11 - 88L);
        --ptr0;
        *ptr0 = &loc_40ADA7;
        long v81 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_allocate(v80, v79);
        long* ptr3 = *(unsigned long*)(v11 - 0x88L);
        *ptr3 = v81;
        **(unsigned long*)(v11 - 144L) = *ptr3;
        goto loc_409B31;
    }
loc_40AA10:
    unsigned int v82 = x97;
    param0 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)param0 >>> 8L) & 0xffffffffffffffL) << 8);
    param1 = (unsigned long)((unsigned char)param0 | (((v82 - 1) * v82) & 0x1 ? 0: 1)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
    do {
        unsigned int v83 = x97;
        param0 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)(long*)((long)(long*)((long)param0 >>> 8L) & 0xffffffffffffffL) << 8);
        param1 = (unsigned long)((unsigned char)param0 | (((v83 - 1) * v83) & 0x1 ? 0: 1)) | ((unsigned long)((param1 >>> 8L) & 0xffffffffffffffL) << 8);
    }
    while(!((unsigned char)param1 & 0x1));
    jump *(long*)(v11 + 8L);
loc_409C73:
    **(unsigned long*)(v11 - 144L) = 0L;
    unsigned int v84 = x97;
    char v85 = (((v84 - 1) * v84) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0);
    *(long*)(v11 - 208L) = **(unsigned long*)(v11 - 88L);
    if((v85 & 0x1)) {
        long v86 = *(long*)(v11 - 80L);
        --ptr0;
        *ptr0 = &loc_409CD9;
        long v87 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v86);
        *(long*)(v11 - 216L) = v87;
        do {
            long v88 = **(unsigned long*)(v11 - 0x88L);
            long v89 = *(long*)(v11 - 88L);
            v3 = x97;
            v5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            *(long*)(v11 - 224L) = **(unsigned long*)(v11 - 216L);
            *(long*)(v11 - 232L) = v88;
            *(long*)(v11 - 240L) = v89;
        }
        while(!(((unsigned char)v5 | (((v3 - 1) * v3) & 0x1 ? 0: 1)) & 0x1));
        long v90 = *(long*)(v11 - 240L);
        --ptr0;
        *ptr0 = &loc_409DAD;
        long v91 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v90);
        *(long*)(v11 - 248L) = v91;
        do {
            v2 = x97;
        }
        while(!(((((v2 - 1) * v2) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        long v92 = *(long*)(v11 - 208L);
        long v93 = *(long*)(v11 - 224L);
        long v94 = *(long*)(v11 - 232L);
        long v95 = *(long*)(v11 - 248L);
        --ptr0;
        *ptr0 = &loc_409E60;
        long v96 = /*BAD_CALL!*/ std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(v92, v93, v94, v95);
        *(long*)(v11 - 0x100L) = v96;
        unsigned int v97 = x97;
        if(!(((((v97 - 1) * v97) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            long* ptr4 = *(unsigned long*)(v11 - 144L);
            *ptr4 = *(long*)(v11 - 0x100L);
            *ptr4 = *ptr4 + 4L;
        }
    }
    else {
        **(unsigned long*)(v11 - 144L) = 0L;
        goto loc_409C73;
    }
loc_409EAF:
    long* ptr5 = *(unsigned long*)(v11 - 144L);
    *ptr5 = *(long*)(v11 - 0x100L);
    *ptr5 = *ptr5 + 4L;
    unsigned int v98 = x97;
    if((((((v98 - 1) * v98) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        long v99 = *(long*)(v11 - 80L);
        --ptr0;
        *ptr0 = &loc_409F1E;
        long v100 = /*BAD_CALL!*/ __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base(v99);
        *(long*)(v11 - 264L) = v100;
        do {
            long v101 = *(long*)(v11 - 88L);
            long v102 = *(long*)(v101 + 8L);
            long v103 = **(unsigned long*)(v11 - 144L);
            v1 = x97;
            v5 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            *(long*)(v11 - 0x110L) = **(unsigned long*)(v11 - 264L);
            *(long*)(v11 - 0x118L) = v101;
            *(long*)(v11 - 288L) = v102;
            *(long*)(v11 - 296L) = v103;
        }
        while(!(((unsigned char)v5 | (((v1 - 1) * v1) & 0x1 ? 0: 1)) & 0x1));
        long v104 = *(long*)(v11 - 0x118L);
        --ptr0;
        *ptr0 = &loc_409FFD;
        long v105 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v104);
        *(long*)(v11 - 304L) = v105;
        do {
            v0 = x97;
        }
        while(!(((((v0 - 1) * v0) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1));
        long v106 = *(long*)(v11 - 0x110L);
        long v107 = *(long*)(v11 - 288L);
        long v108 = *(long*)(v11 - 296L);
        long v109 = *(long*)(v11 - 304L);
        --ptr0;
        *ptr0 = &loc_40A0B0;
        long v110 = /*BAD_CALL!*/ std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(v106, v107, v108, v109);
        *(long*)(v11 - 312L) = v110;
        unsigned int v111 = x97;
        if(!(((((v111 - 1) * v111) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            **(unsigned long*)(v11 - 144L) = *(long*)(v11 - 312L);
        }
    }
    else {
        long* ptr4 = *(unsigned long*)(v11 - 144L);
        *ptr4 = *(long*)(v11 - 0x100L);
        *ptr4 = *ptr4 + 4L;
        goto loc_409EAF;
    }
loc_40A10D:
    **(unsigned long*)(v11 - 144L) = *(long*)(v11 - 312L);
    unsigned int v112 = x97;
    if((((((v112 - 1) * v112) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
        unsigned int v113 = x97;
        if(!(((((v113 - 1) * v113) & 0x1 ? 0: 1) | (y98 < 10 ? 1: 0)) & 0x1)) {
            goto loc_40AE9E;
        }
    }
    else {
        **(unsigned long*)(v11 - 144L) = *(long*)(v11 - 312L);
        goto loc_40A10D;
    }
loc_40A926:
    long v114 = *(long*)(v11 - 88L);
    long v115 = *(long*)(v114 + 8L);
    *(long*)(v11 - 440L) = *(long*)v114;
    *(long*)(v11 - 448L) = v115;
    --ptr0;
    *ptr0 = &loc_40A947;
    long v116 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v114);
    long v117 = *(long*)(v11 - 440L);
    long v118 = *(long*)(v11 - 448L);
    --ptr0;
    *ptr0 = &loc_40A95D;
    /*BAD_CALL!*/ std::_Destroy<int*, int>(v117, v118, v116);
    long v119 = *(long*)(v11 - 88L);
    long* ptr6 = *(unsigned long*)(v11 - 88L);
    long v120 = *ptr6;
    long v121 = *ptr6;
    *(long*)(v11 - 456L) = (*(ptr6 + 2) - v121) >> 2;
    long v122 = *(long*)(v11 - 456L);
    --ptr0;
    *ptr0 = &loc_40A98C;
    /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v119, v120, v122, v121, v14, v8);
    long* ptr7 = *(unsigned long*)(v11 - 0x88L);
    long* ptr8 = *(unsigned long*)(v11 - 88L);
    *ptr8 = *ptr7;
    *(ptr8 + 1) = **(unsigned long*)(v11 - 144L);
    param0 = *(unsigned long*)(v11 - 112L);
    param1 = *param0 * 4L + *ptr7;
    *(ptr8 + 2) = *param0 * 4L + *ptr7;
    unsigned int v123 = x97;
    v4 = (unsigned long)(y98 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
    v5 = (unsigned long)((unsigned char)v4 | (((v123 - 1) * v123) & 0x1 ? 0: 1)) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
    if(((unsigned char)v5 & 0x1)) {
        goto loc_40AA10;
    }
    else {
    loc_40AE9E:
        long v124 = *(long*)(v11 - 88L);
        long v125 = *(long*)(v124 + 8L);
        *(long*)(v11 - 520L) = *(long*)v124;
        *(long*)(v11 - 0x210L) = v125;
        --ptr0;
        *ptr0 = &loc_40AEBF;
        long v126 = /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator2(v124);
        long v127 = *(long*)(v11 - 520L);
        long v128 = *(long*)(v11 - 0x210L);
        --ptr0;
        *ptr0 = &loc_40AED5;
        /*BAD_CALL!*/ std::_Destroy<int*, int>(v127, v128, v126);
        long v129 = *(long*)(v11 - 88L);
        long* ptr9 = *(unsigned long*)(v11 - 88L);
        long v130 = *ptr9;
        long v131 = *ptr9;
        *(long*)(v11 - 536L) = (*(ptr9 + 2) - v131) >> 2;
        long v132 = *(long*)(v11 - 536L);
        --ptr0;
        *ptr0 = &loc_40AF04;
        /*BAD_CALL!*/ std::_Vector_base<int, std::allocator<int> >::_M_deallocate(v129, v130, v132, v131, v14, v8);
        long* ptr10 = *(unsigned long*)(v11 - 0x88L);
        long* ptr11 = *(unsigned long*)(v11 - 88L);
        *ptr11 = *ptr10;
        *(ptr11 + 1) = **(unsigned long*)(v11 - 144L);
        *(ptr11 + 2) = **(unsigned long*)(v11 - 112L) * 4L + *ptr10;
        goto loc_40A926;
    }
}

void sub_40AF59() {
    long v0;
    long v1;
    while(1) {
        *(int*)(v0 - 484L) = (unsigned int)v1;
        v1 = /*NO_RETURN*/ __clang_call_terminate(v1);
    }
}

long sub_40E0A4(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 32L) = v1;
    *(int*)(v2 - 36L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 68L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E0B2(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 32L) = v1;
    *(int*)(v2 - 36L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 68L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E0C0(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 32L) = v1;
    *(int*)(v2 - 36L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 68L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E2EE(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 296L) = v1;
    *(int*)(v2 - 300L) = param1;
    →std::allocator<char>::~allocator();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 436L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E30E(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 296L) = v1;
    *(int*)(v2 - 300L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 436L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E322(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 296L) = v1;
    *(int*)(v2 - 300L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 436L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E347(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 296L) = v1;
    *(int*)(v2 - 300L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 436L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E448(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 32L) = v1;
    *(int*)(v2 - 36L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 68L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long sub_40E548(long param0, int param1) {
    int v0;
    long v1;
    long v2;
    *(long*)(v2 - 40L) = v1;
    *(int*)(v2 - 44L) = param1;
    →std::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string();
    long v3 = →_Unwind_Resume();
    *(int*)(v2 - 100L) = v0;
    /*NO_RETURN*/ __clang_call_terminate(v3);
}

long transform_input(char param0) {
    int v0;
    unsigned int v1;
    unsigned int v2;
    long v3;
    long v4;
    int* ptr0;
    int* ptr1;
    long v5;
    long v6;
    char v7;
    char v8;
    long v9;
    long v10;
    long v11;
    long v12 = (unsigned long)v8 | ((unsigned long)v10 << 8);
    unsigned long* ptr2 = &v9;
    long v13 = (unsigned long)param0 | ((unsigned long)v11 << 8);
    do {
        unsigned int v14 = x11;
        unsigned int v15 = x1;
        param0 = (((v15 - 1) * v15) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0);
        v7 = (((v14 - 1) * v14) & 0x1 ? 0: 1) | (y12 < 10 ? 1: 0);
    }
    while(!(param0 & 0x1));
    if((v7 & 0x1)) {
    loc_40158E:
        int* ptr3 = (int*)(ptr2 - 2);
        ptr2 = (unsigned long*)(ptr3 - 4);
        *ptr3 = 0;
        *(ptr3 - 4) = 0;
        unsigned int v16 = x11;
        v6 = (unsigned long)y12;
        v5 = (unsigned long)(v16 - 1);
        ptr1 = ptr3;
        ptr0 = ptr3 - 4;
        if((((((unsigned int)v5 * v16) & 0x1 ? 0: 1) | ((unsigned int)v6 < 10 ? 1: 0)) & 0x1)) {
        loc_4015FD:
            unsigned int v17 = x11;
            v5 = (unsigned long)(y12 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
            v6 = (unsigned long)((unsigned char)v5 | (((v17 - 1) * v17) & 0x1 ? 0: 1)) | ((unsigned long)((v6 >>> 8L) & 0xffffffffffffffL) << 8);
            if(((unsigned char)v6 & 0x1)) {
            loc_401640:
                unsigned int v18 = x1;
                v5 = (unsigned long)(y2 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                v6 = (unsigned long)((unsigned char)v5 | (((v18 - 1) * v18) & 0x1 ? 0: 1)) | ((unsigned long)((v6 >>> 8L) & 0xffffffffffffffL) << 8);
                if(!((unsigned char)v6 & 0x1)) {
                    --ptr2;
                    *ptr2 = &loc_401C60;
                    v9 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v13);
                }
            }
            else {
                --ptr2;
                *ptr2 = &loc_401B88;
                long v19 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v13);
                goto loc_401640;
            }
            goto loc_40168E;
        }
    }
    int* ptr4 = (int*)(ptr2 - 2);
    ptr2 = (unsigned long*)(ptr4 - 4);
    *ptr4 = 0;
    *(ptr4 - 4) = 0;
    goto loc_40158E;
loc_40168E:
    unsigned long v20 = (unsigned long)*ptr0;
    --ptr2;
    *ptr2 = &loc_401697;
    long v21 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v13);
    unsigned int v22 = x11;
    char v23 = (((v22 - 1) * v22) & 0x1 ? 0: 1) | (y12 < 10 ? 1: 0);
    unsigned int v24 = x1;
    long v25 = (unsigned long)y2;
    char v26 = (unsigned long)v21 > v20 ? 1: 0;
    char v27 = v23;
    if(!(((((v24 - 1) * v24) & 0x1 ? 0: 1) | ((unsigned int)v25 < 10 ? 1: 0)) & 0x1)) {
        --ptr2;
        *ptr2 = &loc_401C60;
        v9 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v13);
        goto loc_40168E;
    loc_40178F:
        unsigned int v28 = x1;
        v3 = (unsigned long)((((v28 - 1) * v28) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0)) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
        if(((unsigned char)v3 & 0x1)) {
        loc_4017D6:
            long v29 = (long)*ptr0;
            --ptr2;
            *ptr2 = &loc_4017E2;
            long v30 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::operator[](v13, v29);
            *ptr1 = *(int*)v30 + *ptr1;
            unsigned int v31 = x11;
            unsigned int v32 = x1;
            v4 = (unsigned long)(v32 - 1);
            char v33 = (((v32 - 1) * v32) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0);
            char v34 = (((v31 - 1) * v31) & 0x1 ? 0: 1) | (y12 < 10 ? 1: 0);
            if((v33 & 0x1)) {
                if(!(v34 & 0x1)) {
                    long v35 = (long)*ptr0;
                    --ptr2;
                    *ptr2 = &loc_401BA1;
                    long v36 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::operator[](v13, v35);
                    *ptr1 = *(int*)v36 + *ptr1;
                    goto loc_40178F;
                }
                else {
                    unsigned int v37 = x11;
                    v5 = (unsigned long)(y12 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                    if(!(((unsigned char)v5 | (((v37 - 1) * v37) & 0x1 ? 0: 1)) & 0x1)) {
                        goto loc_401BB2;
                    }
                    else {
                    loc_4018C9:
                        unsigned int v38 = x1;
                        v5 = (unsigned long)(y2 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                        if((((unsigned char)v5 | (((v38 - 1) * v38) & 0x1 ? 0: 1)) & 0x1)) {
                            goto loc_401918;
                        loc_401BB2:
                            unsigned int v39 = x1;
                            v5 = (unsigned long)(y2 < 10 ? 1: 0) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                            if(!(((unsigned char)v5 | (((v39 - 1) * v39) & 0x1 ? 0: 1)) & 0x1)) {
                                *ptr0 = *ptr0 + 1;
                                goto loc_401C01;
                            }
                            else {
                                goto loc_401C01;
                            loc_401918:
                                *ptr0 = *ptr0 + 1;
                                unsigned int v40 = x11;
                                v4 = (unsigned long)(y12 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
                                v5 = (unsigned long)((unsigned char)v4 | (((v40 - 1) * v40) & 0x1 ? 0: 1)) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
                                unsigned int v41 = x1;
                                v6 = (unsigned long)(v41 - 1);
                                v4 = (unsigned long)((((v41 - 1) * v41) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0)) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
                                char v42 = (unsigned char)v5;
                                if(((unsigned char)v4 & 0x1)) {
                                    if(v42 & 0x1) {
                                        goto loc_4015FD;
                                    }
                                    else {
                                        goto loc_401BB2;
                                    }
                                }
                            }
                        }
                        *ptr0 = *ptr0 + 1;
                        goto loc_401918;
                    }
                }
            }
        }
        long v43 = (long)*ptr0;
        --ptr2;
        *ptr2 = &loc_401C79;
        long v44 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::operator[](v13, v43);
        *ptr1 = *(int*)v44 + *ptr1;
        goto loc_4017D6;
    loc_401C01:
        *ptr0 = *ptr0 + 1;
        unsigned int v45 = x1;
        v4 = (unsigned long)(y2 < 10 ? 1: 0) | ((unsigned long)((v4 >>> 8L) & 0xffffffffffffffL) << 8);
        v5 = (unsigned long)((unsigned char)v4 | (((v45 - 1) * v45) & 0x1 ? 0: 1)) | ((unsigned long)((v5 >>> 8L) & 0xffffffffffffffL) << 8);
        if((unsigned char)v5 & 0x1) {
            goto loc_4018C9;
        }
        else {
            *ptr0 = *ptr0 + 1;
            goto loc_401C01;
        }
    }
    else if(!(v27 & 0x1)) {
        --ptr2;
        *ptr2 = &loc_401B88;
        long v19 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::size(v13);
        goto loc_401640;
    }
    else if((v26 & 0x1)) {
        unsigned int v46 = x11;
        v3 = (unsigned long)((((v46 - 1) * v46) & 0x1 ? 0: 1) | (y12 < 10 ? 1: 0)) | ((unsigned long)(((unsigned long)(((v24 - 1) * v24) & 0x1) >>> 8L) & 0xffffffffffffffL) << 8);
        if(!(((((v46 - 1) * v46) & 0x1 ? 0: 1) | (y12 < 10 ? 1: 0)) & 0x1)) {
            long v35 = (long)*ptr0;
            --ptr2;
            *ptr2 = &loc_401BA1;
            long v36 = /*BAD_CALL!*/ std::vector<int, std::allocator<int> >::operator[](v13, v35);
            *ptr1 = *(int*)v36 + *ptr1;
        }
        goto loc_40178F;
    }
    else {
        unsigned int v47 = x1;
        v3 = (unsigned long)((((v47 - 1) * v47) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0)) | ((unsigned long)(((unsigned long)(((v24 - 1) * v24) & 0x1) >>> 8L) & 0xffffffffffffffL) << 8);
        do {
            unsigned int v48 = x11;
            v3 = (unsigned long)((((v48 - 1) * v48) & 0x1 ? 0: 1) | (y12 < 10 ? 1: 0)) | ((unsigned long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
            v2 = x1;
            v25 = (unsigned long)(y2 < 10 ? 1: 0) | ((unsigned long)((v25 >>> 8L) & 0xffffffffffffffL) << 8);
            char v49 = (unsigned char)v3;
        }
        while(!(((unsigned char)v25 | (((v2 - 1) * v2) & 0x1 ? 0: 1)) & 0x1));
        do {
            v1 = x11;
            v25 = (unsigned long)(y12 < 10 ? 1: 0) | ((unsigned long)((v25 >>> 8L) & 0xffffffffffffffL) << 8);
            v0 = *ptr1;
        }
        while(!(((unsigned char)v25 | (((v1 - 1) * v1) & 0x1 ? 0: 1)) & 0x1));
        unsigned int v50 = x1;
        long v51 = (unsigned long)((((v50 - 1) * v50) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0)) | ((unsigned long)(((unsigned long)(v1 - 1) >>> 8L) & 0xffffffffffffffL) << 8);
        do {
            unsigned int v52 = x1;
            v51 = (unsigned long)((((v52 - 1) * v52) & 0x1 ? 0: 1) | (y2 < 10 ? 1: 0)) | ((unsigned long)((v51 >>> 8L) & 0xffffffffffffffL) << 8);
        }
        while(!((unsigned char)v51 & 0x1));
        return (unsigned long)v0;
    }
}
