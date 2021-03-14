
void* f(void* __dest4, unsigned long* param1) {
    void* __dest1 = *(void**)(param1 + 1);
    size_t __n2 = *param1;
    void* __src = *(void**)((long)__dest4 + 8L);
    char v0 = 0;
    return std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__dest4, __src, __n2, __dest1);
}

long main() {
    return 0L;
}

// Package: std::vector<int, std::allocator<int> >

void* std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(void* __dest4, void* __src, size_t __n2, void* __dest1) {
    void* ptr0;
    void* result;
    size_t v0;
    void* __dest;
    long v1;
    long v2;
    long v3;
    long v4;
    long v5;
    void* ptr1 = __dest4;
    long v6 = v4;
    long v7 = v2;
    void* __src2 = __src;
    long v8 = v3;
    long v9 = v5;
    void* __src1 = (void*)__n2;
    if(__dest1 != __n2) {
        void* __dest3 = *(void**)((long)__dest4 + 8L);
        size_t __n = (size_t)((long)(long*)((long)__dest1 - __n2) >> 2);
        if((unsigned long)(void*)((long)(long*)(*(long*)((long)__dest4 + 16L) - (long)__dest3) >> 2) < __n) {
            __src = *(void**)__dest4;
            size_t v10 = (size_t)((long)(long*)((long)__dest3 - (long)__src) >> 2);
            if((unsigned long)(long*)(0x3fffffffffffffffL - v10) >= __n) {
                v1 = -4L;
                size_t v11 = __n > v10 ? __n: v10;
                size_t v12 = v10;
                v10 += v11;
                if((__carry__(v11, v12)) || v10 > 0x3fffffffffffffffL) {
                    goto loc_40073B;
                }
                else if(v10) {
                    goto loc_400990;
                }
                else {
                    v1 = 0L;
                    __dest = NULL;
                }
            }
            else {
                →std::__throw_length_error();
            loc_400990:
                v1 = v10 * 4L;
            loc_40073B:
                long v13 = →operator new();
                __src = *(void**)ptr1;
                __dest = (void*)v13;
            }
            size_t v14 = 0L;
            long* ptr2 = (long*)((long)(long*)((long)__src2 - (long)__src) >> 2);
            if(ptr2) {
                v0 = (size_t)((long)ptr2 * 4L);
                →memmove(__dest, __src, (size_t)((long)ptr2 * 4L));
                v14 = v0;
            }
            __dest1 = (void*)(v14 + (long)__dest);
            if(__n) {
                __n *= 4L;
                v0 = (size_t)__dest1;
                →memmove(__dest1, __src1, __n);
                __dest1 = (void*)v0;
            }
            void* __dest2 = (void*)((long)__dest1 + __n);
            size_t __n1 = 0L;
            void* ptr3 = (void*)((long)(long*)(*(long*)((long)ptr1 + 8L) - (long)__src2) >> 2);
            if(ptr3) {
                __n1 = (size_t)((long)ptr3 * 4L);
                →memmove(__dest2, __src2, __n1);
            }
            long* ptr4 = (long*)(__n1 + (long)__dest2);
            if(*(void**)ptr1) {
                →operator delete();
            }
            *(void**)ptr1 = __dest;
            *(unsigned long*)((long)ptr1 + 8L) = ptr4;
            *(unsigned long*)((long)ptr1 + 16L) = (long*)((long)__dest + v1);
        }
        else {
            long* ptr5 = (long*)((long)(long*)((long)__dest3 - (long)__src) >> 2);
            if(__n < (unsigned long)ptr5) {
                void* ptr6 = __dest3;
                void* __src3 = (void*)((long)__dest3 - __n * 4L);
                if((__n * 4L) >> 2) {
                    v0 = (size_t)__src3;
                    result = →memmove(__dest3, __src3, (size_t)(((__n * 4L) >> 2) * 4L));
                    ptr6 = *(void**)((long)ptr1 + 8L);
                    __src3 = (void*)v0;
                }
                __dest1 = (void*)((long)(long*)((long)__src3 - (long)__src2) >> 2);
                *(void**)((long)ptr1 + 8L) = (void*)(__n * 4L + (long)ptr6);
                if(__dest1) {
                    →memmove((void*)((long)__dest3 - (size_t)((long)__dest1 * 4L)), __src2, (size_t)((long)__dest1 * 4L));
                }
                __n2 = __n * 4L;
                if(__n) {
                    →memmove(__src2, __src1, __n2);
                    return result;
                }
            }
            else {
                size_t __n3 = (size_t)((long)ptr5 * 4L);
                void* __src4 = (void*)(__n2 + __n3);
                __dest1 = (void*)((long)(long*)((long)__dest1 - (long)__src4) >> 2);
                if(__dest1) {
                    v0 = __n3;
                    ptr0 = __src4;
                    →memmove(__dest3, __src4, (size_t)((long)__dest1 * 4L));
                    __dest3 = *(void**)((long)ptr1 + 8L);
                    __src4 = ptr0;
                    __n3 = v0;
                }
                __dest4 = (void*)((long)(long*)((long)(long*)(__n - (long)ptr5) * 4L) + (long)__dest3);
                *(void**)((long)ptr1 + 8L) = (void*)((long)(long*)((long)(long*)(__n - (long)ptr5) * 4L) + (long)__dest3);
                if(ptr5) {
                    v0 = __n3;
                    ptr0 = __src4;
                    →memmove(__dest4, __src2, __n3);
                    __dest4 = *(void**)((long)ptr1 + 8L);
                    __src4 = ptr0;
                    __n3 = v0;
                }
                long* ptr7 = (long*)((long)(long*)((long)__src4 - (long)__src1) >> 2);
                *(unsigned long*)((long)ptr1 + 8L) = (long*)((long)__dest4 + __n3);
                if(ptr7) {
                    __n2 = (size_t)((long)ptr7 * 4L);
                    →memmove(__src2, __src1, __n2);
                    return result;
                }
            }
        }
    }
    return result;
}

void sub_400530() {
    jump gvar_600DE0;
}
