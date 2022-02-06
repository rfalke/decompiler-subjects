
unsigned int main._omp_fn.0(unsigned long* param0) {
    unsigned int v0;
    int v1;
    unsigned long* ptr0 = param0;
    →omp_get_num_threads();
    →omp_get_thread_num();
    int v2 = 6000 / v1;
    unsigned int* ptr1 = (unsigned int*)(6000 % v1);
    if(6000 % v1 > (int)v0) {
        ++v2;
        ptr1 = NULL;
    }
    long v3 = (unsigned long)(v0 * v2 + (unsigned int)ptr1);
    unsigned int result = (unsigned int)(v0 * v2 + (unsigned int)ptr1 + v2);
    if((unsigned int)v3 < (int)result) {
        v3 = (long)(unsigned int)v3;
        do {
            param0 = *(unsigned long*)(v3 * 8L + (long)&gvar_404088);
            if(*(char*)((char*)param0 - 2L) != 122) {
                char* ptr2 = (char*)((char*)param0 - 5L);
                ptr1 = (unsigned int*)((unsigned int)*(char*)((char*)param0 - 5L) + 6);
                *(char*)((char*)param0 - 5L) = (unsigned char)ptr1;
                while((unsigned char)ptr1 > 57) {
                    param0 = (unsigned long*)*(ptr2 - 1L);
                    --ptr2;
                    *(ptr2 + 1L) = (unsigned char)ptr1 - 10;
                    ptr1 = (unsigned int*)((unsigned int)param0 + 1);
                    *ptr2 = (unsigned char)ptr1;
                }
                if(*(unsigned long*)(v3 * 8L + (long)&nl) > (unsigned long)ptr2) {
                    ptr1 = *ptr0;
                    *ptr1 = *ptr1 + 1;
                }
            }
            ++v3;
        }
        while((unsigned int)v3 < (int)result);
    }
    return result;
}

void main() {
    int v0;
    long v1 = 1L;
    do {
        *(long*)&nl = 32;
        long v2 = 0L;
        char* __s = (char*)&format;
        do {
            int v3 = (unsigned int)v2 + (unsigned int)v1;
            if((unsigned int)(((unsigned int)v2 + (unsigned int)v1) * 0xeeeeeeef) <= 0x11111111) {
                *(long*)&__s[0] = 'F';
                *(short*)&__s[8] = 10;
                __s += 9L;
            }
            else if((unsigned int)(v3 * 0xcccccccd) <= 0x33333333) {
                *(int*)&__s[0] = 'B';
                *(short*)&__s[4] = 10;
                __s += 5L;
            }
            else if((unsigned int)(v3 * 0xaaaaaaab) <= 0x55555555) {
                *(int*)&__s[0] = 'F';
                *(short*)&__s[4] = 10;
                __s += 5L;
            }
            else {
                →sprintf(__s, (char*)&gvar_402010);
                __s = &__s[(long)v0];
            }
            *(char**)(v2 * 8L + (long)&nl) = __s;
            ++v2;
        }
        while(v2 == 6001L);
        unsigned long v4 = gvar_40FC00;
        v1 = (unsigned long)((unsigned int)v1 + 6001);
        →write(1L, (void*)&format, (size_t)(v4 - &format));
    }
    while((unsigned int)v1 != 0x2ee3);
    while(1) {
        →GOMP_parallel();
        →write(1L, (void*)&format, (size_t)(gvar_40FC00 - &format));
    }
}

long sub_401026() {
    return gvar_404010();
}

long sub_4012AD() {
    return 0L;
}

long sub_4012EF() {
    return 0L;
}

long sub_40131D() {
    long result = deregister_tm_clones();
    completed.0 = 1;
    return result;
}

void sub_401330() {
}
