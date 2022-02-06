
void* f(void* __dest4, unsigned long* param1) {
    void* __dest1 = *(void**)(param1 + 1);
    size_t __n3 = *param1;
    void* __src = *(void**)((long)__dest4 + 8L);
    char v0 = 0;
    return std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(__dest4, __src, __n3, __dest1);
}

long main() {
    return 0L;
}

// Package: std::vector<int, std::allocator<int> >

void* std::vector<int, std::allocator<int> >::_M_range_insert<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > > >(void* __dest4, void* __src, size_t __n3, void* __dest1) {
    void* ptr0;
    size_t v0;
    void* __dest;
    long* ptr1;
    void* result;
    long v1;
    long v2;
    long v3;
    long v4;
    void* ptr2 = __dest4;
    long v5 = v2;
    long v6 = v1;
    void* __src1 = __src;
    long v7 = v4;
    long v8 = v3;
    size_t v9 = __n3;
    if(__dest1 != __n3) {
        void* __dest3 = *(void**)((long)__dest4 + 8L);
        size_t __n = (size_t)((long)(long*)((long)__dest1 - __n3) >> 2);
        result = (void*)((long)(long*)(*(unsigned long*)((long)__dest4 + 16L) - (long)__dest3) >> 2);
        if((unsigned long)result < __n) {
            __src = *(void**)__dest4;
            long* ptr3 = (long*)((long)(long*)((long)__dest3 - (long)__src) >> 2);
            if((unsigned long)(long*)(0x3fffffffffffffffL - (long)ptr3) >= __n) {
                ptr1 = (long*)0xFFFFFFFFFFFFFFFC;
                unsigned long v10 = __n > (unsigned long)ptr3 ? __n: ptr3;
                long* ptr4 = ptr3;
                ptr3 = (long*)(v10 + (long)ptr3);
                if((__carry__(v10, (long)ptr4)) || (unsigned long)ptr3 > 0x3fffffffffffffffL) {
                    goto loc_40073B;
                }
                else if(ptr3) {
                    goto loc_400990;
                }
                else {
                    ptr1 = NULL;
                    __dest = NULL;
                }
            }
            else {
                →std::__throw_length_error();
            loc_400990:
                ptr1 = (long*)((long)ptr3 * 4L);
            loc_40073B:
                →operator new();
                __src = *(void**)ptr2;
                __dest = result;
            }
            size_t v11 = 0L;
            long* ptr5 = (long*)((long)(long*)((long)__src1 - (long)__src) >> 2);
            if(ptr5) {
                v0 = (size_t)((long)ptr5 * 4L);
                →memmove(__dest, __src, (size_t)((long)ptr5 * 4L));
                v11 = v0;
            }
            __dest1 = (void*)(v11 + (long)__dest);
            if(__n) {
                __n *= 4L;
                v0 = (size_t)__dest1;
                →memmove(__dest1, (void*)v9, __n);
                __dest1 = (void*)v0;
            }
            void* __dest2 = (void*)((long)__dest1 + __n);
            size_t __n1 = 0L;
            result = (void*)((long)(long*)(*(unsigned long*)((long)ptr2 + 8L) - (long)__src1) >> 2);
            if(result) {
                __n1 = (size_t)((long)result * 4L);
                →memmove(__dest2, __src1, __n1);
            }
            long* ptr6 = (long*)(__n1 + (long)__dest2);
            if(*(void**)ptr2) {
                →operator delete();
            }
            *(void**)ptr2 = __dest;
            *(unsigned long*)((long)ptr2 + 8L) = ptr6;
            *(unsigned long*)((long)ptr2 + 16L) = (long*)((long)__dest + (long)ptr1);
        }
        else {
            long* ptr7 = (long*)((long)(long*)((long)__dest3 - (long)__src) >> 2);
            if(__n < (unsigned long)ptr7) {
                size_t v12 = __n * 4L;
                void* ptr8 = __dest3;
                void* __src2 = (void*)((long)__dest3 - v12);
                long v13 = v12 >> 2;
                if(v13) {
                    v0 = (size_t)__src2;
                    →memmove(__dest3, __src2, (size_t)(v13 * 4L));
                    ptr8 = *(void**)((long)ptr2 + 8L);
                    __src2 = (void*)v0;
                }
                result = (void*)((long)ptr8 + v12);
                __dest1 = (void*)((long)(long*)((long)__src2 - (long)__src1) >> 2);
                *(void**)((long)ptr2 + 8L) = result;
                if(__dest1) {
                    size_t __n2 = (size_t)((long)__dest1 * 4L);
                    →memmove((void*)((long)__dest3 - __n2), __src1, __n2);
                }
                __n3 = v12;
                if(__n) {
                    →memmove(__src1, (void*)v9, __n3);
                    return result;
                }
            }
            else {
                size_t __n4 = (size_t)((long)ptr7 * 4L);
                void* __src3 = (void*)(__n3 + __n4);
                __dest1 = (void*)((long)(long*)((long)__dest1 - (long)__src3) >> 2);
                if(__dest1) {
                    v0 = __n4;
                    ptr0 = __src3;
                    →memmove(__dest3, __src3, (size_t)((long)__dest1 * 4L));
                    __dest3 = *(void**)((long)ptr2 + 8L);
                    __src3 = ptr0;
                    __n4 = v0;
                }
                __dest4 = (void*)((long)(long*)((long)(long*)(__n - (long)ptr7) * 4L) + (long)__dest3);
                *(void**)((long)ptr2 + 8L) = (void*)((long)(long*)((long)(long*)(__n - (long)ptr7) * 4L) + (long)__dest3);
                if(ptr7) {
                    v0 = __n4;
                    ptr0 = __src3;
                    →memmove(__dest4, __src1, __n4);
                    __dest4 = *(void**)((long)ptr2 + 8L);
                    __src3 = ptr0;
                    __n4 = v0;
                }
                long* ptr9 = (long*)((long)(long*)((long)__src3 - v9) >> 2);
                *(unsigned long*)((long)ptr2 + 8L) = (long*)((long)__dest4 + __n4);
                if(ptr9) {
                    __n3 = (size_t)((long)ptr9 * 4L);
                    →memmove(__src1, (void*)v9, __n3);
                    return result;
                }
            }
        }
    }
    return result;
}

long sub_400536() {
    return gvar_600DE0();
}
