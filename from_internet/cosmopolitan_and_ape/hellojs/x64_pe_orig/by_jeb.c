
void start() {
    // Decompilation error
}

unsigned long long* sub_4011FE(long long param0, unsigned long long* param1, long long param2, long long param3) {
    unsigned long long* result;
    long long v0;
    long long v1;
    unsigned int v2;
    unsigned int v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    long long v7 = v0;
    long long v8 = v5;
    long long v9 = v1;
    do {
        unsigned long long v10 = *param1;
        long long v11 = *(long long*)(param1 + 1);
        unsigned long long* ptr0 = param1;
        int v12 = *(int*)(param1 + 2);
        int v13 = *(int*)((char*)param1 + 20L);
        long long v14 = (unsigned long long)v3;
        do {
            long long v15 = (unsigned long long)(unsigned int)v14;
            v14 = (unsigned long long)((unsigned int)v14 - 1);
            if(*(long long*)(ptr0 - 3) != v10) {
                int* ptr1 = (int*)(ptr0 - 3);
                unsigned long long* ptr2 = ptr0;
                ptr0 -= 3;
                v15 = 6L;
                do {
                    *(int*)ptr2 = *ptr1;
                    ++ptr1;
                    ptr2 = (unsigned long long*)((char*)ptr2 + 4L);
                    --v15;
                }
                while(v15 == 0L);
            }
            else {
                v14 = (unsigned long long)(unsigned int)v15;
            }
            break;
        }
        while((unsigned int)v14);
        ++v3;
        param1 += 3;
        result = (unsigned long long*)(v14 * 24L + param3);
        *result = v10;
        *(long long*)(result + 1) = v11;
        *(int*)(result + 2) = v12;
        *(int*)((char*)result + 20L) = v13;
    }
    while(v2 > v3);
    return result;
}

void sub_401270() {
    char v0;
    long long v1;
    int v2;
    int v3;
    long long v4 = (unsigned long long)((unsigned int)&v0 - 8);
    long long v5 = (unsigned long long)v3 | ((unsigned long long)v2 << 32);
    int v6 = v3;
    long long v7 = (unsigned long long)v3;
    long long v8 = (unsigned long long)v6;
    long long v9 = v5;
    long long* ptr0 = &v1;
    interrupt(3);
}

void sub_40127E() {
    char v0;
    char* ptr0 = (char*)((unsigned int)&v0 - 16);
    long long v1 = 8L;
    long long v2 = 8L;
    do {
        *ptr0 = 0;
        ++ptr0;
        --v2;
    }
    while(v2 == 0L);
    while(1) {
        lidt(*(void*)((unsigned long long)((unsigned int)&v0 - 8) - 8L));
        ud2();
    }
}

void sub_401299() {
}

void sub_4012F0() {
    // Decompilation error
}

void sub_4015A2() {
    // Decompilation error
}

void sub_401780() {
    // Decompilation error
}

void sub_40178C() {
    // Decompilation error
}

int sub_4017C2() {
    gvar_454080 = &gvar_4540B4;
    gvar_454088 = &gvar_4540B4;
    gvar_4540B4 = 0x202020;
    return 0x202020;
}

long long sub_4017E5(long long param0, long long param1) {
    long long result;
    sub_4371B9();
    return result;
}

HANDLE sub_401866(long long param0, long long param1) {
    gvar_453AE0 = 3L;
    gvar_453AF0 = &gvar_453AF8;
    gvar_453AE8 = 16L;
    gvar_453B08 = 1;
    gvar_453B20 = 1;
    gvar_453B38 = 1;
    HANDLE v0 = GetStdHandle(0xfffffff6);
    gvar_453AF8 = v0;
    HANDLE v1 = GetStdHandle(0xfffffff5);
    gvar_453B10 = v1;
    HANDLE result = GetStdHandle(0xfffffff4);
    gvar_453B28 = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4018BB(long long param0) {
    char v0;
    char v1;
    int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v3;
    long long v7 = v4;
    long long v8 = v5;
    int result = gvar_44EB70 & 0x4;
    if(!(gvar_44EB70 & 0x4)) {
        unsigned int v9 = gvar_453D68;
        unsigned int v10 = /*BAD_CALL!*/ sub_401839(param0, &v1);
        if(((unsigned int)v10 + 1)) {
            v0 = (v2 & 0xf000) == 0x2000;
            return v0 ? 1: 0;
        }
        gvar_453D68 = v9;
    }
    else {
        int v11 = (unsigned int)param0;
        result = 0;
        long long v12 = /*BAD_CALL!*/ sub_437DB6(param0, 1);
        if((unsigned char)v12) {
            DWORD v13 = sub_402E71(*(HANDLE*)((long long)(unsigned int)param0 * 24L + gvar_453AF0));
            v0 = (unsigned int)v13 == 2;
            result = v0 ? 1: 0;
        }
    }
    return result;
}

long long sub_401A89(long long* param0, char* param1, long long param2, unsigned int param3) {
    char v0;
    do {
        long long v1 = (unsigned long long)*param1;
        ++param1;
        *param0 = v1 + param2;
        ++param0;
        --param3;
    }
    while(param3);
    *param0 = (unsigned long long)*(char*)((gvar_44E03D & 0x2 ? v0 ? 1L: 3L: v0 ? 0L: 2L) + (long long)param1) + param2;
    return *(long long*)param1;
}

long long sub_401AC8(long long* param0) {
    while(1) {
        *param0 = 0x706050403020100L;
    }
}

void sub_401AEA() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401D22(long long param0, long long param1, int param2) {
    return sub_401C42(param0, param1, (unsigned long long)(param2 | 0x6000000), "invalid state");
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_401D42(long long param0, long long param1) {
    /*NO_RETURN*/ sub_401000(param0, param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_401EA7() {
}

void sub_401F78() {
    // Decompilation error
}

void sub_401F82() {
    // Decompilation error
}

void sub_401F8C() {
    // Decompilation error
}

void sub_40200C() {
    // Decompilation error
}

long long sub_4020FC() {
    gvar_453D68 = gvar_44EBE8;
    return -1L;
}

long long sub_40216C() {
    gvar_453D68 = gvar_44EC28;
    return -1L;
}

void sub_402185() {
    // Decompilation error
}

void sub_40241F() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40244A(long long param0, long long param1, long long param2, long long param3) {
    unsigned long long v0 = *(unsigned long long*)(param0 + 16L);
    long long result = (long long)(unsigned int)param1;
    if((unsigned int)param1 > 127) {
        result = sub_439F81((long long)(unsigned int)param1, param1, param0, param3);
    }
    do {
        char* ptr0 = *(unsigned long long*)(param0 + 8L);
        if((unsigned long long)ptr0 >= v0) {
            return result;
        }
        *(long long*)(param0 + 8L) = (long long)(ptr0 + 1L);
        *ptr0 = (unsigned char)result;
        result >>>= 8;
    }
    while(result);
    return result;
}

void sub_40247A() {
    // Decompilation error
}

void sub_402B93() {
    // Decompilation error
}

void sub_402E19() {
    // Decompilation error
}

void sub_402E2F() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403189(long long $rdi) {
    long long var10 = $r13;
    long long var18 = $r12;
    long long var20 = $rbx;
    unsigned int $ebx = 0;
    long long $rax = sub_404AE7($rdi);
    __SyntheticTypeUnknown $xmm1 = 0x0X;
    goto label_6;
    while(1) {
        if((int)(unsigned int)$rax <= (int)$ebx) {
            goto label_C;
        }
        goto label_7;
        double var30 = (double)$xmm1;
        sub_405C43($rdi);
        $ebx = $ebx + 1;
    }
}

void sub_40323B() {
    // Decompilation error
}

void sub_403319() {
    // Decompilation error
}

void sub_40338B() {
    // Decompilation error
}

void sub_4033EA() {
    // Decompilation error
}

void sub_403420() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40342F(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v0;
    long long v8 = *(long long*)(param0 + 64L);
    long long v9 = param0;
    sub_406883(param0, v8 + 144L);
    sub_406883(v9, v8 + 160L);
    sub_43AAA0(v3, 48L);
    *(int*)(v4 + 48L) = *(int*)(v8 + 116L);
    *(long long*)(v4 + 56L) = *(long long*)(v8 + 184L);
    long long result = (unsigned long long)*(int*)(v8 + 200L);
    *(int*)(v4 + 64L) = *(int*)(v8 + 200L);
    *(long long*)(v8 + 128L) = 0L;
    *(int*)(v8 + 0x88L) = 0;
    *(int*)(v8 + 144L) = 2;
    *(int*)(v8 + 160L) = 2;
    *(int*)(v8 + 116L) = 0;
    *(long long*)(v8 + 184L) = 0L;
    *(int*)(v8 + 200L) = 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40365C(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v0;
    long long v9 = sub_40480A(param0, param1);
    sub_406D71(param0, v4);
    return sub_403616(param0, (long long)(unsigned int)v9);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403690(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = sub_40480A(param0, param1);
    sub_406B69(param0, v4, v5, v5);
    return sub_403616(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4036CF(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = sub_40480A(param0, param1);
    sub_406EC3(param0, v4, v5);
    return sub_403616(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403745(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v0;
    long long v10 = sub_40480A(param0, param1);
    sub_4076F0(param0, v4, v4, v5);
    return sub_403616(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4037C1(long long param0, long long param1, long long param2, int* param3) {
    long long v0;
    int* ptr0;
    long long v1 = v0;
    long long v2 = param0;
    long long v3 = sub_40377C(param0, param1, param2);
    long long v4 = v2;
    if(ptr0) {
        *ptr0 = (unsigned int)v3;
    }
    return sub_405C10(v4);
}

void sub_403895() {
    // Decompilation error
}

void sub_4038CF() {
    // Decompilation error
}

void sub_403911() {
    // Decompilation error
}

void sub_40398D() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403A68(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v0;
    long long v9 = sub_40480A(param0, param1);
    sub_406D71(param0, v4);
    return sub_403A0F(param0, (long long)(unsigned int)v9);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403A9F(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = sub_40480A(param0, param1);
    sub_406B69(param0, v4, v5, v5);
    return sub_403A0F(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403ADE(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = sub_40480A(param0, param1);
    sub_406EC3(param0, v4, v5);
    return sub_403A0F(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403B54(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v0;
    long long v10 = sub_40480A(param0, param1);
    sub_4076F0(param0, v4, v4, v5);
    return sub_403A0F(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403B8B(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = v0;
    long long v8 = sub_40480A(param0, param1);
    sub_407808(param0, *(long long*)((unsigned long long)param2 * 8L + *(long long*)(param0 + 568L)));
    return sub_403A0F(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C0E(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = v0;
    long long v9 = sub_40480A(param0, param1);
    sub_406D71(param0, v4);
    return sub_403BC8(param0, (long long)(unsigned int)v9);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C42(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = sub_40480A(param0, param1);
    sub_406B69(param0, v4, v5, v5);
    return sub_403BC8(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403C81(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = sub_40480A(param0, param1);
    sub_406EC3(param0, v4, v5);
    return sub_403BC8(param0, (long long)(unsigned int)v10);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403CC0(long long param0, long long param1, int param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = v0;
    long long v8 = sub_40480A(param0, param1);
    sub_406AAF(param0, (unsigned long long)param2);
    return sub_403BC8(param0, (long long)(unsigned int)v8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_403CF7(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v0;
    long long v10 = sub_40480A(param0, param1);
    sub_4076F0(param0, v4, v4, v5);
    return sub_403BC8(param0, (long long)(unsigned int)v10);
}

void sub_40405C() {
    // Decompilation error
}

void sub_4040EC() {
    // Decompilation error
}

void sub_40413B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404197(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v5 = sub_40365C(param0, 0xffffffffL, v2);
    sub_405181();
    return (unsigned long long)(unsigned int)v5;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4041D9(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v8 = sub_403690(param0, 0xffffffffL, v3, v4);
    sub_405181();
    return (unsigned long long)(unsigned int)v8;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404227(long long param0, long long param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = v2;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v8 = sub_4036CF(param0, 0xffffffffL, v3, v4);
    sub_405181();
    return (unsigned long long)(unsigned int)v8;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404275(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    sub_407C45(param0, *(long long*)(param0 + 160L));
    long long v5 = sub_403745(param0, 0xffffffffL, v2);
    sub_405181();
    return (unsigned long long)(unsigned int)v5;
}

void sub_4042B7() {
    // Decompilation error
}

void sub_404308() {
    // Decompilation error
}

void sub_404365() {
    // Decompilation error
}

void sub_4043C2() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40447B(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = sub_40582D(param0, param1, param2, param3, param4, param5);
    long long v1 = *(long long*)(v0 + 32L);
    return v1 ? sub_407C45(param0, v1): sub_4068D1(param0, 0L, param2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4044A5(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = sub_40582D(param0, param1);
    sub_406117(v2, 0x442L);
    long long v6 = sub_405823();
    sub_40DCFB(param0, v5, v6);
    return sub_407D7E(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40450E(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0 = sub_40582D(param0, param1, param2, param3, param4, param5);
    return *(long long*)(v0 + 32L) ? 0L: 1L;
}

void sub_40452E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_404AB6(long long param0, long long param1) {
    long long v0 = sub_4047ED(param0, param1);
    return ~(unsigned int)v0 >>> 31;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_404FD6(long long param0, long long param1, long long param2, long long param3) {
    return sub_404F0A(param0, 0L, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_404FDD(long long param0, long long param1, long long param2, long long param3) {
    return sub_404F0A(param0, 1L, param2, param3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_404FE7(long long param0, long long param1, long long param2, long long param3) {
    return sub_404F0A(param0, 2L, param2, param3);
}

void sub_4053EA() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int* sub_405439() {
    return (unsigned int*)sub_404863();
}

void sub_405483() {
    // Decompilation error
}

void sub_40548C() {
    // Decompilation error
}

void sub_4054BB() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4054E7() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 == 5 ? *(long long*)(ptr0 + 2): 0L;
}

void sub_40551B() {
    // Decompilation error
}

void sub_405563() {
    // Decompilation error
}

void sub_40564B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405695(long long param0, long long param1) {
    long long* ptr0;
    long long result = sub_40568B();
    long long v0 = 0L;
    if(result) {
        v0 = (unsigned long long)*(int*)(result + 24L);
        result += 32L;
    }
    if(ptr0) {
        *ptr0 = v0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4056B9() {
    long long result = sub_40568B();
    if(result) {
        result += 32L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_40573B(long long param0, long long param1, long long param2, long long param3) {
    int* result = sub_405717(param0, param1, param2, param3);
    if(result) {
        result += 8;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_4057F3(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long v0;
    long long v1 = v0;
    long long v2 = param3;
    int* ptr0 = sub_4057BB(param0, param1, param2, param3, param4, param5);
    if(param2) {
        *(long long*)param2 = (long long)ptr0[6];
    }
    return (long long*)(ptr0 + 8);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_405814(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    int* ptr0 = sub_4057BB(param0, param1, param2, param3, param4, param5);
    return (long long*)(ptr0 + 8);
}

void sub_4058D5() {
    // Decompilation error
}

void sub_405991() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4059C9() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    long long result = 0L;
    if(*ptr0 == 9) {
        int* ptr1 = *(unsigned long long*)(ptr0 + 2);
        if(((*ptr1 >>> 12) & 0x1)) {
            result = *(long long*)(ptr1 + 14);
        }
    }
    return result;
}

void sub_405A05() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405A5E() {
    char* ptr0 = (char*)sub_404863();
    return *ptr0 & 0x8 ? *(long long*)(ptr0 + 8L): 0L;
}

void sub_405A90() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_405AC3(long long param0, long long param1, long long param2, long long param3) {
    int v0;
    int* result = (int*)sub_4049F5(param0, 9L, param2, param3);
    if(result) {
        result = (unsigned int)(*result >>> 27) == v0 ? result: NULL;
    }
    return result;
}

void sub_405B88() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405BBB(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = v0;
    long long v11 = param3;
    long long v12 = sub_40480A(param0, param1);
    int* ptr0 = (int*)((long long)(unsigned int)v12 * 16L + *(long long*)(param0 + 104L));
    long long v13 = sub_4178C9((long long)ptr0, param1, v4, param3, v5, v6, v11, v10, v9, v8, v7);
    long long v14 = (unsigned long long)*ptr0;
    param1 = *(long long*)(ptr0 + 2);
    *ptr0 = 4;
    *(ptr0 + 2) = (unsigned int)v13;
    if(((unsigned char)v14 & 0x8)) {
        *(int*)(param1 + 4L) = *(int*)(param1 + 4L) - 1;
        if(!*(int*)(param1 + 4L)) {
            sub_40CFCD(param0, param1, v4, param3);
        }
    }
    return (unsigned long long)(unsigned int)v13;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405D63(long long param0) {
    return sub_405C43(param0);
}

long long sub_405E01(long long par0, long long par1, long long par2, long long par3) {
    // Decompilation error
}

void sub_405ECA() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_405F30() {
}

long long sub_405FB5(long long par0, long long par1, long long par2, long long par3, long long par4) {
    // Decompilation error
}

long long sub_406077(long long param0, long long param1, long long param2, long long param3) {
    char v0;
    return sub_405FB5(param0, param1, param2, param3, (long long)&v0);
}

long long sub_40608A(long long param0, long long param1, long long param2, long long param3) {
    return sub_405FB5(param0, param1, param2, param3, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40609C() {
    int* ptr0 = (int*)sub_404863();
    return (unsigned long long)*(unsigned int*)((unsigned long long)*ptr0 * 4L + (long long)&gvar_43C3C0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4060B0() {
    int result;
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    unsigned int v0 = *ptr0;
    if(*ptr0 != 9) {
        result = 22;
        if(v0 != 10) {
            result = v0 != 6 ? 0: 3;
        }
    }
    else {
        result = **(unsigned long long*)(ptr0 + 2) >>> 27;
    }
    return result;
}

long long sub_4060E2(long long param0, long long param1, int param2) {
    long long v0 = sub_40609C();
    return (unsigned int)v0 != param2 ? 0L: 1L;
}

void sub_406152() {
    // Decompilation error
}

void sub_4061C8() {
    // Decompilation error
}

void sub_406208() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406248(long long param0, int param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = /*BAD_CALL!*/ sub_406117(param3, 3L);
    if((unsigned int)v3) {
        if(v0) {
            *(long long*)v0 = v1;
        }
        return param3;
    }
    return sub_40578B(param0, (long long)param1, v0, param3, v1, v2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4062A5(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2 = /*BAD_CALL!*/ sub_406117(param3, 3L);
    if(!(unsigned int)v2) {
        return sub_4057AC(param0, (long long)(unsigned int)param1, result, param3, v0, v1);
    }
    return result;
}

void sub_4062E5() {
    // Decompilation error
}

void sub_406325() {
    // Decompilation error
}

void sub_406382() {
    // Decompilation error
}

void sub_4063DF() {
    // Decompilation error
}

void sub_40641F() {
    // Decompilation error
}

void sub_40645F() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064B3() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 != 3 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064C7() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 != 4 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4064EF() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    long long v0 = 0L;
    if(!*ptr0) {
        double v1 = *(double*)(ptr0 + 2);
        char v2 = v1 == v1 ? 0: v1 <= v1 ? v1 >= v1: 0;
        v0 = v2 ? 1L: 0L;
    }
    return (unsigned long long)(unsigned int)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406515(long long param0, long long param1) {
    long long v0 = sub_404863(param0, param1);
    return *(int*)v0 != 8 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40653D() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 != 9 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406551() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 != 10 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406565() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    unsigned int v0 = *ptr0;
    long long result = 1L;
    if(v0 != 10) {
        result = 0L;
        if(v0 == 9) {
            result = (unsigned long long)((**(unsigned long long*)(ptr0 + 2) >>> 13) & 0x1);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406592() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 != 5 ? 0L: 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4065A6() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 != 6 ? 0L: 1L;
}

void sub_4065D7() {
    // Decompilation error
}

void sub_40661B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4066FC() {
    int* ptr0 = (int*)sub_405823();
    return ptr0 ? (unsigned long long)((*ptr0 >>> 12) & 0x1): 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406719() {
    int* ptr0 = (int*)sub_405823();
    return ptr0 ? (unsigned long long)((*ptr0 >>> 11) & 0x1): 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406736() {
    int* ptr0 = (int*)sub_405823();
    return ptr0 ? (unsigned long long)((*ptr0 >>> 10) & 0x1): 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406753() {
    int* ptr0 = (int*)sub_405823();
    long long v0 = 0L;
    if(ptr0) {
        v0 = (unsigned int)(*ptr0 >>> 27) != 18 ? 0L: 1L;
    }
    return (unsigned long long)(unsigned int)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406778() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    return *ptr0 == 10 ? (unsigned long long)(((**(unsigned long long*)(ptr0 + 2) >>> 7) ^ 0x1) & 0x1): 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40679C() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    long long v0 = 0L;
    if(*ptr0 == 10) {
        v0 = (**(unsigned long long*)(ptr0 + 2) & 0x180) - 128 ? 0L: 1L;
    }
    return (unsigned long long)(unsigned int)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4067C7() {
    unsigned int* ptr0 = (unsigned int*)sub_404863();
    long long v0 = 0L;
    if(*ptr0 == 10) {
        v0 = (**(unsigned long long*)(ptr0 + 2) & 0x180) != 384 ? 0L: 1L;
    }
    return (unsigned long long)(unsigned int)v0;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4067F4(long long param0) {
    long long result;
    unsigned long long v0 = (unsigned long long)sub_405823();
    int v1 = 10000;
    while(v0) {
        if(*(long long*)(param0 + 336L) == v0) {
            result = 2L;
        }
        else if(*(long long*)(param0 + 352L) == v0) {
            result = 3L;
        }
        else if(*(long long*)(param0 + 368L) == v0) {
            result = 4L;
        }
        else if(*(long long*)(param0 + 384L) == v0) {
            result = 5L;
        }
        else if(*(long long*)(param0 + 400L) == v0) {
            result = 6L;
        }
        else if(*(long long*)(param0 + 416L) == v0) {
            result = 7L;
        }
        else if(*(long long*)(param0 + 320L) != v0) {
            --v1;
            v0 = *(unsigned long long*)(v0 + 32L);
            if(v1) {
                continue;
            }
            else {
                break;
            }
        }
        else {
            result = 1L;
        }
        return result;
    }
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4068FC(long long param0, long long param1, long long param2) {
    int v0 = (unsigned int)param1;
    long long v1 = param0;
    sub_4068D1(param0, param1, param2);
    return sub_40500F(v1, (unsigned long long)v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_406955(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    char v2 = *(unsigned long long*)(param0 + 112L) < *(unsigned long long*)(param0 + 88L);
    long long v3 = v0;
    long long v4 = v1;
    if(!v2) {
        sub_401D02(param3, 4296L);
    }
    int* result = *(unsigned long long*)(param0 + 112L);
    *(unsigned long long*)(param0 + 112L) = (long long*)(result + 4);
    *result = 4;
    *(result + 2) = (unsigned int)param1 ? 1: 0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406EBC(long long param0, long long param1, long long param2) {
    return sub_406DB4(param0, param1, param2, 0L);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_406F18(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    char v2 = *(unsigned long long*)(param0 + 112L) < *(unsigned long long*)(param0 + 88L);
    long long v3 = v0;
    long long v4 = v1;
    if(!v2) {
        sub_401D02(param3, 0x1189L);
    }
    int* result = *(unsigned long long*)(param0 + 112L);
    *(unsigned long long*)(param0 + 112L) = (long long*)(result + 4);
    *result = 5;
    *(long long*)(result + 2) = param1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406F59(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v0;
    long long v6 = v3;
    long long v7 = param3;
    unsigned int v8 = /*BAD_CALL!*/ sub_40480A(param0, param1);
    int* ptr0 = (int*)((long long)(unsigned int)v8 * 16L + *(long long*)(param0 + 104L));
    long long v9 = (long long)*ptr0;
    if(*ptr0 != 5) {
        v9 = (long long)((unsigned int)v9 - 8);
        result = 0L;
        if((unsigned int)v9 <= 2) {
            result = *(long long*)(ptr0 + 2);
            sub_406F18(param0, result, v9, param3);
            sub_405057(param0, (long long)(unsigned int)v8, v1, param3);
            return result;
        }
    }
    else {
        result = *(long long*)(ptr0 + 2);
    }
    sub_406F18(param0, result, v9, param3);
    sub_405057(param0, (long long)(unsigned int)v8, v1, param3);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_406FB9(long long param0) {
    return sub_40469E(param0, 1L);
}

long long sub_406FC3(long long param0) {
    return *(unsigned long long*)(param0 + 104L) - 16L;
}

void sub_4071BC() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407318(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    if(*(unsigned long long*)(param0 + 112L) >= *(unsigned long long*)(param0 + 88L)) {
        sub_401D02(param3, 5039L);
    }
    long long result = sub_40D56C(*(long long*)(param0 + 64L), 0x18000780L, param2, param3);
    if(!result) {
        sub_401CC7(param3, 5047L);
    }
    else {
        int* ptr0 = *(unsigned long long*)(param0 + 112L);
        *(long long*)(param0 + 112L) = (long long)(ptr0 + 4);
        *ptr0 = 9;
        *(long long*)(ptr0 + 2) = result;
        *(int*)(result + 4L) = *(int*)(result + 4L) + 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40738C(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_40472D(param0, param1, (unsigned int)param2, 403133312L, 6L, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40739C(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_40472D(param0, param1, param2, 403133312L, 5L, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4073AC(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    return sub_40472D(param0, param1, param2, 403133056L, 5L, param5);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long* sub_4073BC(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long* result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v1;
    unsigned int v6 = (unsigned int)param2;
    long long v7 = v2;
    long long v8 = v3;
    if(*(unsigned long long*)(param0 + 112L) >= *(unsigned long long*)(param0 + 88L)) {
        long long v9 = param0;
        sub_401D02(param3, 0x1434L);
        param0 = v9;
    }
    if(v6 <= 14) {
    loc_40740D:
        if((unsigned int)param3 <= 15 && ((unsigned int)((unsigned int)param4 + 128) < 0xff || (unsigned int)param4 == 127)) {
            int* ptr0 = *(unsigned long long*)(param0 + 112L);
            *(unsigned long long*)(param0 + 112L) = (long long*)(ptr0 + 4);
            *ptr0 = 6;
            *(long long*)(ptr0 + 2) = param1;
            *(ptr0 + 1) = ((unsigned int)param3 * 16) | (unsigned int)((unsigned short)param4 * 0x100) | v6;
            result = (long long*)((long long)(long long*)((long long)ptr0 - *(long long*)(param0 + 104L)) >> 4);
        }
        else {
        loc_407459:
            sub_401D12(param3, 0x144cL);
            result = NULL;
        }
    }
    else if(v6 + 1) {
        goto loc_407459;
    }
    else {
        v6 = 15;
        goto loc_40740D;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4076E9(long long param0, unsigned long long param1, long long param2, long long param3) {
    return sub_40762B(param0, param1, 0L, param3);
}

void sub_407835() {
    // Decompilation error
}

void sub_4078DA() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407C63(long long param0, long long param1, long long param2) {
    long long v0 = *(long long*)(*(long long*)(param0 + 64L) + 184L);
    return v0 ? sub_407C45(param0, v0): sub_4068D1(param0, 0L, param2);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407C7A(long long param0) {
    long long v0;
    long long v1;
    long long v2 = *(long long*)(param0 + 64L);
    long long v3 = param0;
    sub_407C45(param0, *(long long*)(v2 + 192L));
    return sub_4077BF(v3, v0, v1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_407CB4(long long param0, long long param1) {
    long long v0;
    long long v1 = param0;
    sub_407C45(param0, param1);
    return sub_4077BF(v1, param1, v0);
}

long long sub_407D01(long long param0, long long param1) {
    long long v0;
    long long v1 = param0;
    sub_407CFD(param0, param1);
    return sub_4077BF(v1, param1, v0);
}

void sub_407DBA(long long param0) {
    *(long long*)(param0 + 112L) = *(long long*)(param0 + 112L) - 16L;
}

void sub_407DF2() {
    // Decompilation error
}

void sub_408064() {
    // Decompilation error
}

void sub_4081A3() {
    // Decompilation error
}

void sub_40849B() {
    // Decompilation error
}

void sub_408553() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40869C(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    sub_40469E(param0, 1L);
    return sub_408411(param0, 0xffffffffL, v0, v1, v2, v3);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4086BF(long long param0, long long param1) {
    return sub_408233(param0, *(long long*)(param1 + 8L), (long long)*(int*)(param1 + 4L));
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408929(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v1;
    long long v6 = sub_40480A(param0, param1);
    long long v7 = /*BAD_CALL!*/ sub_40653D();
    if((unsigned int)v7) {
        sub_40365C(param0, (long long)(unsigned int)v6, "stack");
        long long v8 = /*BAD_CALL!*/ sub_406515(param0, 0xffffffffL);
        if((unsigned int)v8) {
            sub_405057(param0, (unsigned long long)(unsigned int)v6, v2, v3);
        }
        else {
            sub_407D7E(param0);
        }
    }
    return sub_408725(param0, (unsigned long long)(unsigned int)v6);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408A0E(long long param0) {
    sub_40469E(param0, 1L);
    return sub_4089F1(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408A2B(long long param0, int param1) {
    long long result = sub_40568B();
    if(!result || !((*(int*)result >>> 9) & 0x1)) {
        result = sub_408998(param0, (long long)param1);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408C36(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v1;
    sub_406EC3(param0, "Symbol(", 7L);
    unsigned char* ptr0 = (unsigned char*)(v2 + 33L);
    unsigned long long v6 = (unsigned long long)((unsigned long long)*(int*)(v2 + 24L) + v2 + 32L);
    while((v6 > (unsigned long long)ptr0 && *ptr0 != 0xff)) {
        ++ptr0;
    }
    sub_406B69(param0, (long long)(unsigned char*)(v2 + 33L), (long long)(long long*)((long long)ptr0 - (long long)(unsigned char*)(v2 + 33L)), v3);
    sub_406EC3(param0, 4447044L, 1L);
    return sub_408E52(param0, 3L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408E59(long long param0, long long param1, long long param2, long long param3, long long param4, long long param5) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v0;
    long long v8 = v1;
    long long v9 = v2;
    long long v10 = v3;
    long long v11 = v4;
    long long v12 = param5;
    long long v13 = sub_408998(param0, 0xfffffffeL);
    long long v14 = sub_408998(param0, 0xffffffffL);
    long long v15 = (unsigned long long)*(int*)(v13 + 24L);
    long long v16 = (unsigned long long)*(int*)(v14 + 24L);
    if((unsigned long long)(v15 + v16) > 0x7fffffffL) {
        result = sub_401CE2("result too long", 156L);
    }
    else {
        long long v17 = sub_4076DF();
        sub_43AAA0(v5, v15);
        sub_43AAA0(v5, v16);
        sub_406BF4(param0, 0xffffffffL);
        sub_405057(param0, 0xfffffffdL, v6, v5);
        result = →sub_40460F();
    }
    return result;
}

void sub_408F0F() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408F19(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v0;
    long long v9 = v2;
    long long v10 = v3;
    long long v11 = v1;
    long long v12 = v4;
    long long result = sub_40574F(param0, param1);
    long long v13 = (unsigned long long)*(int*)(result + 24L);
    long long v14 = result + 32L;
    long long v15 = result + 32L;
    long long v16 = v13 + v14;
    while((unsigned long long)v16 > (unsigned long long)v15) {
        long long v17 = sub_41C85D(param0, &v15, v14, v16, v5, v6);
        result = v7();
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_408F78(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10 = v4;
    long long v11 = v5;
    long long v12 = v6;
    long long v13 = v3;
    long long v14 = v2;
    long long v15 = param2;
    long long v16 = sub_4047ED(param0, param1);
    long long v17 = sub_40574F(param0, (unsigned long long)(unsigned int)v16);
    sub_41CF97(param0, &v0, (unsigned long long)*(int*)(v17 + 24L), v7);
    long long v18 = (unsigned long long)*(int*)(v17 + 24L);
    long long v19 = v17 + 32L;
    long long v20 = v17 + v18 + 32L;
    while((unsigned long long)v20 > (unsigned long long)v19) {
        long long v21 = sub_41C85D(param0, &v19, v17 + 32L, v20, v8, v9);
        long long v22 = v15();
        int v23 = (unsigned int)v22;
        if((unsigned long long)(v1 - v0) <= 6L) {
            int v24 = v23;
            sub_41CFE2(param0, (long long)&v0, 7L, v7);
            v23 = v24;
        }
        long long v25 = sub_41C531((unsigned long long)v23, v0);
        v0 += (long long)(unsigned int)v25;
    }
    sub_41D054(param0, (unsigned long long*)&v0, param2, v7);
    sub_406BF4(param0);
    return sub_405057(param0, (unsigned long long)(unsigned int)v16, param2, v7);
}

void sub_4090EA() {
    // Decompilation error
}

void sub_4091F2() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_409239() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4093B8(long long param0, long long param1) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    int v3 = (unsigned int)param1;
    int* ptr0 = (int*)sub_404A12(param0, param1);
    long long v4 = (long long)*ptr0;
    if(*ptr0 == 9) {
        result = *(long long*)(ptr0 + 2);
        if(!((*(int*)result >>> 13) & 0x1)) {
            sub_401C42(param0, "third_party/duktape/duk_bi_buffer.c", 0x60000c8L, &gvar_43C4B1);
            return 0L;
        }
    }
    else if((unsigned int)v4 == 10) {
        result = sub_408411(param0, (long long)(unsigned int)param1, v4, v0, v1, v2);
    }
    else {
        sub_401C42(param0, "third_party/duktape/duk_bi_buffer.c", 0x60000c8L, &gvar_43C4B1);
        result = 0L;
    }
    return result;
}

long long sub_409409(long long par0, long long par1, long long par2, long long par3) {
    // Decompilation error
}

long long sub_4094BB(long long param0, long long param1, long long param2, long long param3) {
    return sub_409409(param0, 3L, param2, param3);
}

void sub_4094C5() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_409572() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_409619(long long param0, int param1, int* param2, int* param3, long long param4) {
    int* ptr0;
    int* ptr1;
    int v0 = param1;
    long long result = param4;
    long long v1 = sub_406077(param0, 1L, 0L, (long long)param1);
    long long v2 = /*BAD_CALL!*/ sub_40649F(param0, 2L);
    if(!(unsigned int)v2) {
        long long v3 = sub_406077(param0, 2L, (long long)(unsigned int)v1, (long long)v0);
        v0 = (unsigned int)v3;
    }
    *ptr0 = (unsigned int)v1;
    *ptr1 = v0;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40967D(long long param0, int param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long result = sub_406551();
    if((unsigned int)result) {
        result = sub_408290(param0, (unsigned long long)param1, v0, v1, v2, v3);
    }
    return result;
}

void sub_4097E4() {
    // Decompilation error
}

void sub_40982E() {
    // Decompilation error
}

void sub_4098A9() {
    // Decompilation error
}

void sub_409C71() {
    // Decompilation error
}

void sub_409D8D() {
    // Decompilation error
}

void sub_409EC5() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_409F74(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v3;
    long long v8 = v5;
    long long v9 = v6;
    long long v10 = param3;
    long long v11 = /*BAD_CALL!*/ sub_41DCD3(param0);
    if(((unsigned char)v11 & 0x2)) {
        long long v12 = sub_4093B8(param0, 0L);
        v1 = 1L;
        v0 = v12;
    }
    else {
        long long v13 = sub_4094BB(param0, v2, v4, param3);
        v1 = 0L;
        v0 = v13;
    }
    long long v14 = sub_4093B8(param0, v1);
    long long v15 = (long long)*(int*)(v0 + 76L);
    long long v16 = 0xffffffffL;
    long long v17 = (long long)((unsigned int)v15 + *(int*)(v0 + 72L));
    if(*(unsigned long long*)(*(unsigned long long*)(v0 + 56L) + 24L) >= (unsigned long long)v17) {
        v17 = (long long)*(int*)(v14 + 76L);
        if((unsigned long long)((unsigned int)v17 + *(int*)(v14 + 72L)) <= *(unsigned long long*)(*(unsigned long long*)(v14 + 56L) + 24L)) {
            long long v18 = sub_417D71(v17, v15);
            v16 = (unsigned long long)(unsigned int)v18;
        }
    }
    if(((unsigned char)v11 & 0x1)) {
        sub_406A68(param0, v16);
    }
    else {
        sub_406955(param0, (unsigned int)v16 ? 0L: 1L, v15, v17);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40A038() {
}

void sub_40A13A() {
    // Decompilation error
}

void sub_40A1EA() {
    // Decompilation error
}

void sub_40A345() {
    // Decompilation error
}

void sub_40A5EC() {
    // Decompilation error
}

void sub_40AA0B() {
    // Decompilation error
}

void sub_40AC9E() {
    // Decompilation error
}

void sub_40B11C() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40B151() {
}

long long sub_40B3E1(long long param0) {
    sub_41DC9A(param0);
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_40B4EE() {
}

void sub_40B5D1() {
    // Decompilation error
}

void sub_40B627() {
    // Decompilation error
}

long long sub_40BC95(long long param0, unsigned int param1) {
    unsigned int v0 = *(unsigned int*)(param0 + 72L);
    long long v1 = 0L;
    unsigned int v2 = (unsigned int)*(long long*)(*(long long*)(param0 + 56L) + 24L);
    if(v2 >= v0) {
        unsigned int v3 = v2 - v0;
        v1 = v3 < param1 || v2 - v0 == param1 ? (unsigned long long)v3: (unsigned long long)param1;
    }
    return (unsigned long long)(unsigned int)v1;
}

void sub_40BDF0() {
    // Decompilation error
}

void sub_40BF33() {
    // Decompilation error
}

void sub_40C30F() {
    // Decompilation error
}

void sub_40C6B4() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D483(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = v2;
    unsigned long long v6 = *(unsigned long long*)(param0 + 240L);
    unsigned long long v7 = (unsigned long long)((unsigned long long)*(int*)(param0 + 252L) * 8L + v6);
loc_40D4A4:
    while(v6 != v7) {
        long long v8 = *(long long*)(v7 - 8L);
        v7 -= 8L;
        while(1) {
            if(!v8) {
                continue loc_40D4A4;
            }
            else {
                long long v9 = *(long long*)(v8 + 8L);
                long long v10 = param0;
                sub_403142(param0);
                param0 = v10;
                v8 = v9;
            }
        }
    }
    return sub_403142(param0);
}

// Stale decompilation - Refresh this view to re-decompile this code
int* sub_40D513(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = param0;
    int* result = (int*)sub_402F7A(param0, 56L, param2, param3);
    if(result) {
        long long v3 = v2;
        *result = param1 | 0x1;
        int* ptr0 = result;
        sub_40C9D7(v3, (long long)result);
        result = ptr0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D56C(long long param0, int param1, long long param2, long long param3) {
    int* ptr0;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long result = sub_402F19(param0, 104L, param2, param3);
    if(result) {
        long long v4 = result;
        sub_43ABE2(result, 0L, 104L, param3);
        *ptr0 = param1 | 0x1;
        sub_40C9D7(param0, (long long)ptr0);
        result = v4;
        *(int*)(result + 56L) = 2;
        *(int*)(result + 72L) = 2;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D5D1(long long param0, int param1, long long param2, long long param3) {
    int* ptr0;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long result = sub_402F19(param0, 576L, param2, param3);
    if(result) {
        long long v4 = result;
        sub_43ABE2(result, 0L, 576L, param3);
        *ptr0 = param1 | 0x1;
        sub_40C9D7(param0, (long long)ptr0);
        result = v4;
        *(long long*)(result + 64L) = param0;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D625(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long result = sub_40D5D1(*(long long*)(param0 + 64L), param1, param2, param3);
    if(!result) {
        sub_401CC7(param3, 216L);
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D676(long long param0, long long param1) {
    return sub_40D4DB(param0, param1, 72L);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_40D680(long long param0, long long param1) {
    return sub_40D4DB(param0, param1, 72L);
}

void sub_40DC2D() {
    // Decompilation error
}

int sub_41074F(long long param0) {
    int v0;
    while(1) {
        int* ptr0 = *(unsigned long long*)(param0 + 32L);
        char v1 = ptr0 ? 0: 1;
        char v2 = (long long)ptr0 < 0L;
        char v3 = __parity__((unsigned char)ptr0);
        char v4 = 0;
        char v5 = 0;
        if(v1) {
            return 0;
        }
        char v6 = (*ptr0 >>> 21) & 0x1;
        if(v6) {
            break;
        }
        else {
            int v7 = v0;
            char v8 = ((~(v0 - 1) ^ ~v7) >>> 4) & 0x1;
            jump v0 - 1 ? &sub_41074F: &sub_410760;
        }
    }
}

void sub_410760() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_410761(long long param0, long long param1, long long param2, long long param3, long long param4) {
    long long v0;
    long long result;
    char v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v4;
    long long v8 = v5;
    long long v9 = sub_408496(param0, param1, 640L, param3, param4);
    long long v10 = /*BAD_CALL!*/ sub_4089B9(param0, 0xffffffffL);
    long long v11 = /*BAD_CALL!*/ sub_40E722((long long)&v1, v10, 1L);
    if(!(unsigned int)v11) {
        sub_4068D1(param0, v9, v6);
        result = sub_405181();
    }
    else {
        sub_407095(param0);
        if((v1 & 0x8)) {
            if(v2) {
                sub_407C45(param0, v2);
            }
            else {
                sub_4068D1(param0, 0L, v6);
            }
            /*BAD_CALL!*/ sub_403A07(param0, 0xfffe0049L);
            if(v3) {
                sub_407C45(param0, v3);
            }
            else {
                sub_4068D1(param0, 0L, v6);
            }
            v0 = 0xfffe0058L;
        }
        else {
            sub_404FF1(param0, param1, v6, param3);
            sub_403A07(param0, 0xfffe0022L);
            sub_406955(param0, (long long)(*(int*)&v1 & 0x1), v6, param3);
            v0 = 0xfffe0023L;
        }
        sub_403A07(param0, v0);
        sub_406955(param0, (long long)((*(int*)&v1 >>> 1) & 0x1), v6, param3);
        sub_403A07(param0, 0xfffe0025L);
        sub_406955(param0, (long long)((*(int*)&v1 >>> 2) & 0x1), v6, param3);
        sub_403A07(param0, 0xfffe0024L);
        sub_405057(param0, 0xfffffffdL, v6, param3);
        result = sub_40460F(param0);
    }
    return result;
}

void sub_410892() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41162B(long long param0, unsigned int param1) {
    int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = sub_408A2B(param0, 0L);
    long long v10 = sub_40869C(param0);
    long long v11 = sub_40E722(param0, v10, v9, &v0, 0L);
    long long v12 = 0L;
    if((unsigned int)v11) {
        v12 = (param1 & v0) != param1 ? 0L: 1L;
    }
    sub_406955(param0, v12, v4, v5);
    return 1L;
}

void sub_41168F() {
    // Decompilation error
}

long long sub_4116DD(long long param0, int* param1, long long param2) {
    int v0 = *param1 & 0x80;
    if(!(*param1 & 0x80)) {
        long long v1 = (unsigned long long)*(param1 + 11);
        for(long long i = 0L; (unsigned int)i < (unsigned int)v1; ++i) {
            long long v2 = (unsigned long long)*(param1 + 10);
            long long v3 = *(long long*)(param1 + 6);
            if(*(long long*)(i * 8L + v2 * 16L + v3)) {
                v3 += v2 * 24L;
                v3 = (unsigned long long)*(char*)(i + v3) | ((unsigned long long)((v3 >>> 8L) & 0xffffffffffffffL) << 8);
                if(((unsigned char)v3 & 0x4) || ((unsigned int)param2 && !(((unsigned char)v3 & 0x9) + 0xff))) {
                    return (unsigned long long)v0;
                }
            }
        }
        long long v4 = (unsigned long long)*(param1 + 12);
        param2 = 0L;
        while((unsigned int)param2 < (unsigned int)v4) {
            long long v5 = param2;
            ++param2;
            if(*(int*)((unsigned long long)*(param1 + 10) * 25L + v5 * 16L + ((unsigned long long)((0 - *(param1 + 10)) & 0x7) + *(long long*)(param1 + 6))) != 7) {
                return (unsigned long long)v0;
            }
        }
        v0 = 1;
    }
    else {
        v0 = 0;
    }
    return (unsigned long long)v0;
}

void sub_41176B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_411829(long long param0, long long param1) {
    unsigned long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v1;
    long long v5 = v2;
    sub_43AD53(param1, param1);
    long long result = 0L;
    if((unsigned long long)*(int*)(v3 + 24L) == v0) {
        long long v6 = sub_43AA7D();
        result = (unsigned int)v6 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_411864(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = v1;
    long long v5 = sub_402F19(param0, 0x600L, param2, param3);
    *(long long*)(v2 + 80L) = v5;
    if(!v5) {
        sub_403142(param0);
        *(long long*)(v2 + 80L) = 0L;
        result = 0L;
    }
    else {
        sub_43ABE2(v5, 0L, 0x600L, param3);
        int* ptr0 = *(unsigned long long*)(v2 + 80L);
        *(unsigned long long*)(v2 + 104L) = *(unsigned long long*)(v2 + 80L);
        *(unsigned long long*)(v2 + 112L) = ptr0;
        *(unsigned long long*)(v2 + 88L) = (long long*)(ptr0 + 0x100);
        param2 = (long long)(ptr0 + 384);
        *(long long*)(v2 + 96L) = (long long)(ptr0 + 384);
        do {
            *ptr0 = 2;
            ptr0 += 4;
        }
        while(ptr0 != param2);
        result = 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_4118E9(long long param0, long long* param1) {
    int result;
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    unsigned int v8 = /*BAD_CALL!*/ sub_41CE24(param1);
    if(!(unsigned int)v8) {
        int v9 = sub_41CE93(param1, &v0, v3, v4);
        result = (int)sub_406B69(v5, &v0, (unsigned long long)(unsigned int)v9, v4);
    }
    else {
        result = (int)sub_407826(v5, (unsigned long long)((unsigned int)v8 - 1));
    }
    return result;
}

void sub_411944() {
    // Decompilation error
}

long long sub_411F9C(long long param0, long long param1) {
    while(1) {
        long long v0 = *(long long*)(param0 + 160L);
        *(long long*)(param1 + 160L) = *(long long*)(param0 + 160L);
        if(v0) {
            *(int*)(v0 + 4L) = *(int*)(v0 + 4L) + 1;
        }
    }
}

void sub_411FBD() {
}

long long sub_412200(long long param0, unsigned int param1) {
    long long result = 0L;
    if(param1 >= 0x80000000) {
        result = *(long long*)(param0 + 120L);
        while(result && param1 != -1) {
            result = *(long long*)(result + 24L);
            ++param1;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4123AE(long long* param0, unsigned long long param1, int param2, int* param3, int* param4, int* param5, int* param6) {
    long long v0;
    long long result;
    long long v1;
    long long v2;
    long long v3 = v1;
    int* ptr0 = param6;
    long long v4 = v2;
    long long v5 = *(param0 + 235);
    long long v6 = *param0;
    unsigned long long v7 = *(unsigned long long*)(v5 + 32L);
    char* ptr1 = (char*)((long long)*(void**)(v5 + 24L) + v7);
    for(char* i = (char*)((long long)*(void**)(v5 + 24L) + v7); (unsigned long long)i > v7; i -= 24L) {
        if(*(long long*)(i - 16L) == param1) {
            if((param2 || (*(i - 24L) & 0x2))) {
                *param3 = *(int*)(i - 20L);
                *param4 = *(int*)(i - 8L);
                *param5 = *(int*)(i - 4L);
                result = i - 24L != (long long*)(ptr1 - 24L) ? 0L: 1L;
                *ptr0 = (unsigned int)result;
                return result;
            }
            else if(*(long long*)(*(long long*)(v6 + 568L) + 120L) != param1) {
                v0 = 0x5000c43L;
                return sub_401C42(v6, "third_party/duktape/duk_js_compiler.c", v0, "invalid label");
            }
        }
    }
    v0 = 0x5000c4eL;
    return sub_401C42(v6, "third_party/duktape/duk_js_compiler.c", v0, "invalid label");
}

void sub_413890() {
    // Decompilation error
}

void sub_415116() {
    // Decompilation error
}

void sub_415286() {
    // Decompilation error
}

void sub_416F22() {
    // Decompilation error
}

void sub_4170A8() {
    // Decompilation error
}

void sub_4172FA() {
    // Decompilation error
}

void sub_417525() {
    // Decompilation error
}

void sub_4175A2() {
    // Decompilation error
}

void sub_4175F8() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41787D(int param0) {
    char v0;
    char v1;
    char v2;
    char v3;
    double v4;
    double v5;
    int result = param0;
    if(v4 == v5) {
        v3 = 1;
        v2 = 0;
    }
    else if(v4 > v5) {
        v3 = 0;
        v2 = 0;
    }
    else {
        v3 = v4 < v5 ? 0: 1;
        v2 = 1;
    }
    if(!v2 && !v3) {
        result ^= 1;
    }
    else {
        if(v5 == v4) {
            v1 = 1;
            v0 = 0;
        }
        else if(v5 > v4) {
            v1 = 0;
            v0 = 0;
        }
        else {
            v1 = v5 < v4 ? 0: 1;
            v0 = 1;
        }
        if((v0 || v1)) {
            long long v6 = /*BAD_CALL!*/ sub_41D3C3();
            if(!(unsigned int)v6) {
                long long v7 = /*BAD_CALL!*/ sub_41D3C3();
                if((unsigned int)v7) {
                    return 0;
                }
            }
            else {
                result = 0;
            }
        }
    }
    return result;
}

void sub_417A4E() {
    // Decompilation error
}

void sub_417B0B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_417D71(long long param0, long long param1) {
    long long v0 = sub_41D69F(param0, (unsigned long long)param0 < (unsigned long long)param1 ? param0: param1);
    long long result = 0xffffffffL;
    if((unsigned int)v0 >= 0) {
        result = 1L;
        if(!(unsigned int)v0) {
            result = 0xffffffffL;
            char v1 = param0 == param1;
            if((unsigned long long)param0 <= (unsigned long long)param1) {
                result = v1 != 0 ? 0L: 1L;
            }
        }
    }
    return result;
}

long long sub_417DB2(long long param0, long long param1) {
    return sub_417D71((long long)*(int*)(param1 + 24L), (long long)*(int*)(param0 + 24L));
}

void sub_417DC2() {
    // Decompilation error
}

void sub_417EE5() {
    // Decompilation error
}

void sub_417EF6() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_417FDB(unsigned int* param0) {
    if(*param0 == 9) {
        return sub_417FC2(*(long long*)(param0 + 2));
    }
    return 0L;
}

void sub_418007() {
    // Decompilation error
}

int sub_418018(long long param0, int param1, long long param2) {
    return 0 - (param1 - 1 ? 1: 0);
}

void sub_41843F() {
    // Decompilation error
}

void sub_418892() {
    // Decompilation error
}

void sub_4188B7() {
    // Decompilation error
}

void sub_418926() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_418CEF(unsigned long long* param0, long long param1, long long param2) {
    long long v0;
    long long v1 = v0;
    unsigned long long* ptr0 = param0;
    long long result = param2;
    param0 = (unsigned long long*)**ptr0;
    while(**ptr0 >= 0) {
        long long v2 = /*BAD_CALL!*/ sub_41CA82((long long)param0);
        if((unsigned int)v2) {
            return result;
        }
        sub_418CB4((long long)ptr0, 24L);
        param0 = (unsigned long long*)**ptr0;
    }
    return result;
}

void sub_418E3A() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_418E3F(long long param0, long long param1, long long param2) {
    return sub_418E58(param0, param1, param2, 4L);
}

long long sub_418E64(long long param0, long long param1, long long param2) {
    long long result;
    sub_418E72(param0, param1, param2, 2L);
    return result;
}

long long sub_418E75(long long param0, long long param1, short* param2, int param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v3;
    long long v6 = v0;
    long long* ptr0 = (long long*)((long long)param3 * 2L + (long long)param2);
    long long v7 = v1;
    short* ptr1 = param2;
    while((unsigned long long)ptr1 < (unsigned long long)ptr0) {
        long long v8 = (unsigned long long)*(ptr1 + 1);
        ptr1 += 2;
        result = param0(1L, v8);
    }
    return result;
}

void sub_41A06B() {
    // Decompilation error
}

void sub_41B6EB() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41B75D(long long* param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    if((unsigned long long)(*(param0 + 213) - *(param0 + 211)) <= 6L) {
        sub_41CFE2(*param0, (unsigned long long*)(param0 + 211), 7L, param3);
    }
    long long v4 = sub_41C531((unsigned long long)param1, *(param0 + 211));
    *(param0 + 211) = (long long)(unsigned int)v4 + *(param0 + 211);
    return (long long)(unsigned int)v4;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41B84B(long long* param0, long long param1, long long param2, long long param3) {
    unsigned int v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v4;
    long long v10 = v5;
    long long v11 = v6;
    if((unsigned int)param3 || !(*(char*)&param0[1] & 0x2)) {
        sub_41B75D(param0, param1, param2, param3);
        v1 = (long long)(unsigned int)param2;
    }
    else {
        long long v12 = param0[0];
        unsigned int v13 = (unsigned int)param1;
        unsigned int v14 = sub_41CD28(v12, param1);
        unsigned int v15 = (unsigned int)v14;
        unsigned int v16 = (unsigned int)v14;
        unsigned int v17 = (unsigned int)param2 >> 5;
        for(unsigned int i = (unsigned int)param1 + 1; (int)(unsigned int)param2 >= (int)i; i = v0 + 1) {
            unsigned int v18 = i >> 5;
            while(v18 <= v17 && v18 <= 0x7ff) {
                if((unsigned char)(1 << ((unsigned long long)(v18 & 0x7) & 0x1fL)) & *(char*)((unsigned long long)(v18 >>> 3) + 4447712L)) {
                    goto loc_41B8E2;
                }
                else {
                    v0 = i;
                }
                if(i >> 5 < v18) {
                    v0 = v18 * 32;
                    goto loc_41B8E9;
                loc_41B8E2:
                    ++v18;
                }
                else {
                    goto loc_41B8E9;
                }
            }
            v0 = (unsigned int)param2;
        loc_41B8E9:
            long long v19 = param0[0];
            v13 = v0 - i + v15;
            unsigned int v20 = sub_41CD28(v19, (long long)v0);
            v15 = (unsigned int)v20;
            if(v13 + 1 != v15) {
                long long v21 = (long long)v16;
                v16 = v15;
                sub_41B75D(param0, v21, param2, param3);
                sub_41B75D(param0, (long long)v13, param2, param3);
                *(int*)&param0[217] = *(int*)&param0[217] + 1;
            }
        }
        sub_41B75D(param0, (long long)v16, param2, param3);
        v1 = (long long)v15;
    }
    long long result = sub_41B75D(param0, v1, param2, param3);
    *(int*)&param0[217] = *(int*)&param0[217] + 1;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41C395(long long param0) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    sub_407095(param0);
    int* ptr0 = (int*)sub_404583(param0, 0xffffffffL);
    sub_40500F(param0, 0xfffffffdL);
    long long v4 = *(long long*)(param0 + 304L);
    *ptr0 = (*ptr0 & 0x7ffffff) | 0x58000000;
    sub_40DCFB(param0, (long long)ptr0, v4);
    sub_403E13(param0, 4244660736L);
    sub_403E13(param0, 0xfe006500L);
    sub_406A68(param0, 0L);
    return sub_403E13(param0, 0xfe002f01L);
}

void sub_41C834() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41C848(long long param0, long long* param1, long long param2, long long param3, int* param4) {
    int v0;
    long long v1;
    *param1 = v1;
    *param4 = v0;
    return sub_41C859(param3, param2, (long long)param4, 1L);
}

long long sub_41CA19(unsigned int param0, long long param1, long long param2) {
    long long v0;
    char v1;
    long long v2;
    if((param0 >> 8)) {
        if(param0 >> 8 == 32) {
            param2 = (unsigned long long)((unsigned char)param0 != 47 ? 0: 1) | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
            v2 = (unsigned long long)((unsigned int)((unsigned long long)((unsigned char)param0 > 10 ? 0: 1) | ((unsigned long long)(((unsigned long long)(param0 >> 8) >>> 8L) & 0xffffffffffffffL) << 8)) | (unsigned int)param2);
            v1 = (unsigned char)param0 == 95;
            v0 = (unsigned long long)((unsigned int)((unsigned long long)(v1 ? 1: 0) | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8)) | (unsigned int)v2);
            return (unsigned long long)(unsigned char)v0;
        }
        else if(param0 != 5760 && param0 != 6158) {
            v2 = (unsigned long long)(param0 != 0x3000 ? 0: 1) | ((unsigned long long)(((unsigned long long)(param0 >> 8) >>> 8L) & 0xffffffffffffffL) << 8);
            v1 = param0 == 0xfeff;
            v0 = (unsigned long long)((unsigned int)((unsigned long long)(v1 ? 1: 0) | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8)) | (unsigned int)v2);
            return (unsigned long long)(unsigned char)v0;
        }
    }
    else if((unsigned char)((unsigned char)param0 + 245) > 1 && (unsigned char)param0 != 9) {
        v0 = (unsigned long long)(((unsigned char)param0 & 0x7f) != 32 ? 0: 1) | ((unsigned long long)(((unsigned long long)(param0 - 11) >>> 8L) & 0xffffffffffffffL) << 8);
        return (unsigned long long)(unsigned char)v0;
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CB38(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    if((unsigned int)param0 <= 127) {
        v0 = (unsigned long long)((unsigned int)(((unsigned int)param0 & 0xffffffdf) - 65) < 25 || ((unsigned int)param0 & 0xffffffdf) == 90 ? 1: 0) | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
        result = (long long)(unsigned char)v0;
    }
    else {
        result = sub_41C47F(&gvar_43E9E0, 1116L, (unsigned int)param0);
        if((unsigned int)result) {
            v0 = sub_41C47F(&gvar_43E9A0, 42L, (unsigned int)param0);
            v0 = (unsigned long long)((unsigned int)v0 ? 0: 1) | ((unsigned long long)((v0 >>> 8L) & 0xffffffffffffffL) << 8);
            result = (long long)(unsigned char)v0;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41CB8C(long long param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12;
    long long v13;
    long long v14;
    long long v15 = v8;
    long long v16 = v9;
    long long v17 = v10;
    long long v18 = v7;
    long long v19 = v11;
    long long v20 = /*BAD_CALL!*/ sub_40574F(param0, 0xffffffffL);
    sub_41CF97(param0, &v2, (unsigned long long)*(int*)(v20 + 24L), v6);
    long long v21 = (unsigned long long)*(int*)(v20 + 24L);
    long long v22 = v20 + 32L;
    unsigned int v23 = 0xffffffff;
    unsigned int v24 = 0xffffffff;
    long long v25 = v20 + v21 + 32L;
    while(1) {
        if((unsigned long long)v25 > (unsigned long long)v22) {
            long long v26 = sub_41C85D(param0, &v22, v20 + 32L, v25, v13, v14);
            v10 = (unsigned long long)(unsigned int)v26;
            if(v23 < 0x80000000) {
                goto loc_41CC28;
            }
            else {
                goto loc_41CC05;
            }
        }
        if(v23 >= 0x80000000) {
            break;
        }
        else {
            v10 = 0xffffffffL;
        loc_41CC28:
            if((unsigned long long)(v3 - v2) <= 55L) {
                sub_41CFE2(param0, (long long)&v2, 56L, param3);
            }
            if((int)v23 <= 127) {
                if(param1) {
                    v1 = (unsigned long long)v23;
                    if(v23 - 97 <= 25) {
                        v1 = (unsigned long long)(v23 - 32);
                    }
                }
                else {
                    v1 = (unsigned long long)v23;
                    if(v23 - 65 <= 25) {
                        v1 = (unsigned long long)(v23 + 32);
                    }
                }
                param2 = v2;
                param3 = param2 + 1L;
                v2 = param2 + 1L;
                *(char*)param2 = (unsigned char)v1;
            }
            else if(!param1 && v23 == 0x3a3) {
                long long v27 = sub_41CB38((long long)v24, v12, param2, param3);
                if(!(unsigned int)v27) {
                    goto loc_41CCB2;
                }
                else {
                    v27 = sub_41CB38((long long)(unsigned int)v10, v12, v5, v6);
                    if((unsigned int)v27) {
                        goto loc_41CCB2;
                    }
                    else {
                        long long v28 = sub_41C531(962L, v2);
                        v2 += (long long)(unsigned int)v28;
                    }
                }
            }
            else {
            loc_41CCB2:
                long long* ptr0 = &v4;
                long long v29 = 8L;
                do {
                    *(int*)&ptr0[0] = 0;
                    ptr0 = (long long*)((char*)ptr0 + 4L);
                    --v29;
                }
                while(v29 == 0L);
                if(param1) {
                    v4 = &gvar_43E1C0;
                    v0 = 1411L;
                }
                else {
                    v4 = &gvar_43DEE0;
                    v0 = 0x2c2L;
                }
                sub_41C56C(&v2, v23, &v4);
            }
        loc_41CC05:
            v24 = v23;
            v23 = (unsigned int)v10;
        }
    }
    sub_41D054(param0, (unsigned long long*)&v2, param2, param3);
    sub_406BF4(param0);
    return sub_405181();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41CDF1(long long* param0) {
    return sub_41CDA5(param0, 1L);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41CDF8(long long* param0, int param1, long long param2) {
    int result;
    int v0 = param1;
    long long* ptr0 = param0;
    int v1 = /*BAD_CALL!*/ sub_41CDF1(param0);
    if((unsigned int)v1) {
        return sub_41CDA5(ptr0, (unsigned long long)v0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned int sub_41CE24(long long* param0) {
    long long* ptr0 = param0;
    int v0 = /*BAD_CALL!*/ sub_41CDA5(param0, 2L);
    unsigned int result = (unsigned int)v0;
    param0 = ptr0;
    if(result == 1) {
        int v1 = sub_41CDA5(param0, 2L);
        result = (unsigned int)((unsigned int)v1 + 1);
    }
    else if(result == 2) {
        int v2 = sub_41CDA5(param0, 5L);
        result = (unsigned int)((unsigned int)v2 + 5);
    }
    else if(result) {
        ptr0 = param0;
        int v3 = sub_41CDA5(param0, 7L);
        result = (unsigned int)((unsigned int)v3 + 36);
        if(!(unsigned int)v3) {
            sub_41CDA5(ptr0, 20L);
            return result;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_41CE93(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long* ptr0;
    char* ptr1;
    long long v4 = v2;
    long long v5 = v3;
    long long v6 = v1;
    long long v7 = param3;
    int v8 = /*BAD_CALL!*/ sub_41CDA5(param0, 5L);
    unsigned int v9 = (unsigned int)v8;
    if(v9 == 31) {
        int v10 = /*BAD_CALL!*/ sub_41CDA5(ptr0, 8L);
        v9 = (unsigned int)v10;
    }
    long long v11 = 32L;
    long long* ptr2 = (long long*)((unsigned long long)v9 + (long long)ptr1);
    while(ptr1 != ptr2) {
        int v12 = sub_41CDA5(ptr0, 5L);
        if((unsigned int)v12 > 25) {
            if((unsigned int)v12 == 26) {
                int v13 = sub_41CDA5(ptr0, 3L);
                v0 = (unsigned long long)(unsigned int)v13;
                goto loc_41CF13;
            }
            switch((unsigned int)v12) {
                case 27: {
                    int v14 = sub_41CDA5(ptr0, 3L);
                    v0 = (unsigned long long)((unsigned int)v14 + 8);
                loc_41CF13:
                    v12 = (int)*(char*)(v0 + 4451904L);
                    break;
                }
                case 28: {
                    int v15 = sub_41CDA5(ptr0, 5L);
                    v12 = (int)(((unsigned int)v11 ^ 0x20) + (unsigned int)v15 + 65);
                    break;
                }
                case 29: {
                    v11 = (unsigned long long)((unsigned int)v11 ^ 0x20);
                    v12 = sub_41CDA5(ptr0, 5L);
                    goto loc_41CF4E;
                }
                case 31: {
                    v12 = sub_41CDA5(ptr0, 8L);
                    break;
                }
            }
        }
        else {
        loc_41CF4E:
            v12 = (int)((unsigned int)v12 + (unsigned int)v11 + 65);
        }
        *ptr1 = (unsigned char)v12;
        ++ptr1;
    }
    return (int)v9;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D218(long long param0, long long* param1, unsigned long long param2, long long param3) {
    long long v0 = *(param1 + 1);
    long long v1 = v0 + param3 + param2;
    long long result = v0 + param2;
    param2 = (unsigned long long)(*param1 - v0) - param2;
    if(param2) {
        sub_43ABC2(v1, result, (long long)param2, param3);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D23D(long long param0, unsigned long long* param1, unsigned long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    if(param1[2] - param1[0] < (unsigned long long)param3) {
        long long v2 = param3;
        unsigned long long* ptr0 = param1;
        long long v3 = param0;
        sub_41CFE2(param0, param1, param3, param3);
        param3 = v2;
        param1 = ptr0;
        param0 = v3;
    }
    return sub_41D218(param0, (long long*)param1, param2, param3);
}

long long sub_41D385() {
    unsigned long long v0;
    return v0 != 0x7ff0000000000000L ? 0L: 1L;
}

long long sub_41D3A4() {
    unsigned long long v0;
    return v0 != 0xfff0000000000000L ? 0L: 1L;
}

long long sub_41D484() {
    long long v0;
    return v0 >>> 63;
}

void sub_41D4D9() {
}

void sub_41D4DE() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D508() {
    char v0;
    char v1;
    double v2;
    double v3;
    double v4;
    double v5;
    long long v6 = 0L;
    if((unsigned long long)(v2 & 0x7ff0000000000000L) != 0x7ff0000000000000L) {
        sub_417A0C();
        if(v2 == v3) {
            v1 = 1;
            v0 = 0;
        }
        else if(v2 > v4) {
            v1 = 0;
            v0 = 0;
        }
        else if(v2 < v5) {
            v1 = 0;
            v0 = 0;
        }
        else {
            v1 = 1;
            v0 = 1;
        }
        v6 = v1 ? v0 ? 0L: 1L: 0L;
    }
    return (unsigned long long)(unsigned int)v6;
}

long long sub_41D552() {
    long long v0;
    long long v1 = sub_41D508();
    long long result = 0L;
    if((unsigned int)v1) {
        __SyntheticTypeUnknown v2 = (__SyntheticTypeUnknownU)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v0) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v0 >>> 32L)) << 32) | ((__SyntheticTypeUnknownU)0L << 64);
        result = 9.007199254740991E15 != (double)v2 ? 9.007199254740991E15 <= (double)v2: 0 ? 0L: 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41D5D5(int* param0) {
    long long result;
    char v0;
    char v1;
    int v2;
    int v3;
    double v4;
    sub_41D2A1();
    if((double)v2 == v4) {
        v1 = 1;
        v0 = 0;
    }
    else if((double)v2 > v4) {
        v1 = 0;
        v0 = 0;
    }
    else if((double)v2 < v4) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = 1;
        v0 = 1;
    }
    if(!v0 && v1) {
        *param0 = v3;
        result = 1L;
    }
    else {
        result = 0L;
    }
    return result;
}

long long sub_41D6B1(long long param0) {
    long long v0 = *(long long*)(param0 + 64L);
    long long v1 = *(long long*)(v0 + 216L);
    while(1) {
        long long v2 = ((((v1 - 7046029254386353131L) ^ ((v1 - 7046029254386353131L) >>> 30)) * -4658895280553007687L) ^ ((((v1 - 7046029254386353131L) ^ ((v1 - 7046029254386353131L) >>> 30)) * -4658895280553007687L) >>> 27)) * -7723592293110705685L;
        *(long long*)(v0 + 216L) = (v2 >>> 31) ^ v2;
    }
}

void sub_41D71A() {
}

double sub_41D71B(long long param0) {
    double v0;
    double v1 = v0;
    long long v2 = *(long long*)(param0 + 64L);
    long long v3 = *(long long*)(v2 + 216L);
    long long v4 = *(long long*)(v2 + 224L);
    long long v5 = v3 ^ v4;
    *(long long*)(v2 + 224L) = __ror__(v5, 28);
    *(long long*)(v2 + 216L) = (v5 * 0x4000L) ^ ((__ror__(v3, 9)) ^ v5);
    return (double)(((v3 + v4) >>> 12) | 0x3ff0000000000000L);
}

void sub_41D7F7() {
    // Decompilation error
}

void sub_41D860() {
    // Decompilation error
}

void sub_41D8AF() {
    // Decompilation error
}

void sub_41D8F0() {
    // Decompilation error
}

void sub_41D928() {
    // Decompilation error
}

void sub_41D9B8() {
    // Decompilation error
}

void sub_41DA2F() {
    // Decompilation error
}

void sub_41DA88() {
    // Decompilation error
}

void sub_41DB21() {
    // Decompilation error
}

void sub_41DBAB() {
    // Decompilation error
}

void sub_41DBF3() {
    // Decompilation error
}

void sub_41DC46() {
    // Decompilation error
}

long long sub_41DC85(long long param0) {
    long long v0 = *(long long*)(param0 + 120L);
    return v0 ? (unsigned long long)((*(int*)(v0 + 88L) >>> 2) & 0x1): 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41DC9A(long long param0) {
    long long result = sub_41DC85(param0);
    if(!(unsigned int)result) {
        result = sub_401C42(param0, "third_party/duktape/duk_api_call.c", 0x6000182L, "constructor requires \'new\'");
    }
    return result;
}

long long sub_41DCD3(long long param0) {
    long long v0 = *(long long*)(param0 + 120L);
    long long result = 0L;
    if(v0) {
        int* ptr0 = *(unsigned long long*)(v0 + 16L);
        if(!ptr0) {
            return (unsigned long long)(int)*(char*)(v0 + 5L);
        }
        result = 0L;
        if(((*ptr0 >>> 12) & 0x1)) {
            result = (unsigned long long)(int)*(short*)((char*)ptr0 + 66L);
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41DCF9(long long param0, long long param1) {
    long long result;
    long long v0 = param0;
    int* ptr0 = (int*)sub_404A12(param0, param1);
    int v1 = *ptr0;
    switch(v1) {
        case 6: {
            return (unsigned long long)(int)*(char*)((char*)ptr0 + 5L);
        }
        case 9: {
            int* ptr1 = *(unsigned long long*)(ptr0 + 2);
            if(!((*ptr1 >>> 12) & 0x1)) {
                sub_401C42(v0, "third_party/duktape/duk_api_call.c", 0x60001d0L, "unexpected type");
                result = 0L;
            }
            else {
                result = (unsigned long long)(int)*(short*)((char*)ptr1 + 66L);
            }
            return result;
        }
        default: {
            sub_401C42(v0, "third_party/duktape/duk_api_call.c", 0x60001d0L, "unexpected type");
            return 0L;
        }
    }
}

void sub_41DD48() {
    // Decompilation error
}

void sub_41DD9B() {
    // Decompilation error
}

void sub_41DE30() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_41DE9A() {
}

void sub_41DF22() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_41DF78() {
}

void sub_41E321() {
    // Decompilation error
}

void sub_41E537() {
    // Decompilation error
}

void sub_41E6C9() {
    // Decompilation error
}

void sub_41E852() {
    // Decompilation error
}

void sub_41E8A1() {
    // Decompilation error
}

void sub_41E8C2() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41EABC(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    __SyntheticTypeUnknown v4;
    long long v5 = v0;
    long long v6 = param3;
    sub_406FB2(param0, param1);
    sub_408290(param0, 0xffffffffL, v1, param3, v2, v3);
    sub_404F67(param0, param1, v1, param3);
    sub_406EB2();
    long long v7 = /*BAD_CALL!*/ sub_4064DB();
    if((unsigned int)v7) {
        sub_40541C(param0, 0xffffffffL);
        __SyntheticTypeUnknown v8 = (__SyntheticTypeUnknownU)((unsigned int)*(unsigned long long*)&gvar_43EEA0 & (unsigned int)v4) | ((__SyntheticTypeUnknownU)((unsigned int)(*(unsigned long long*)&gvar_43EEA0 >>> 0x20X) & (unsigned int)(v4 >>> 0x20X)) << 32) | ((__SyntheticTypeUnknownU)(unsigned long long)(v4 >>> 0x40X) << 64);
        if(!(1.7976931348623157E308 != (double)v8 ? 1.7976931348623157E308 <= (double)v8: 0)) {
            sub_407D7E(param0);
            sub_4037B9(param0, 0xffff002aL);
            sub_404FF1(param0, param1, v1, param3);
            sub_41DA64(param0);
            return 1L;
        }
        sub_40691D(param0, param1, v1);
    }
    else {
        sub_407D7E(param0);
        sub_4037B9(param0, 0xffff002aL);
        sub_404FF1(param0, param1, v1, param3);
        sub_41DA64(param0);
    }
    return 1L;
}

void sub_41EB58() {
    // Decompilation error
}

void sub_41EC20() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_41EDBF() {
}

void sub_41EE6B() {
    // Decompilation error
}

void sub_41EEA7() {
    // Decompilation error
}

void sub_41EFAF() {
    // Decompilation error
}

void sub_41F058() {
    // Decompilation error
}

void sub_41F123() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F274(long long param0, long long param1) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = param0;
    sub_406FB2(param0, param1);
    unsigned long long v6 = *(unsigned long long*)(v5 + 112L);
    unsigned int v7 = *(unsigned int*)(v6 - 16L);
    if(*(int*)(v6 - 16L) == 9) {
        int* ptr0 = *(unsigned long long*)(v6 - 8L);
        sub_4037B9(v5, 0xffff005dL);
        long long v8 = /*BAD_CALL!*/ sub_40649F(v5, 0xffffffffL);
        param0 = v5;
        long long v9 = &gvar_43DB77;
        if(!(unsigned int)v8) {
            long long v10 = sub_408725(param0, 0xffffffffL);
            param0 = v5;
            v9 = v10;
        }
        long long v11 = (unsigned long long)*ptr0;
        long long v12 = "function %s() { [ecmascript code] }";
        if(!((v11 >>> 11L) & 0x1L)) {
            v12 = "function %s() { [native code] }";
            if(!((v11 >>> 12L) & 0x1L)) {
                if(!((v11 >>> 10L) & 0x1L)) {
                    sub_401D12(v1, 162L);
                    return 0L;
                }
                v12 = "function %s() { [bound code] }";
            }
        }
        sub_407AA3(param0, v12, v9, v1, v2, v3);
        goto loc_41F306;
    }
    else if(v7 == 6) {
        sub_4086CB(v5, (long long)(v6 - 16L));
    loc_41F306:
        result = 1L;
    }
    else {
        sub_401D12(v1, 162L);
        result = 0L;
    }
    return result;
}

void sub_41F33D() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F5B5(long long param0) {
    long long result;
    long long result;
    long long v0;
    long long v1 = sub_406FC3(param0);
    unsigned int v2 = *(unsigned int*)v1;
    switch(v2) {
        case 6: {
            sub_406AAF(param0, (unsigned long long)((*(int*)(v1 + 4L) >>> 4) & 0xF));
            return 1L;
        }
        case 9: {
            int* ptr0 = *(unsigned long long*)(v1 + 8L);
            if(((*ptr0 >>> 12) & 0x1)) {
                sub_406A68(param0, *(short*)(ptr0 + 16) != 0xffff ? (unsigned long long)(int)*(short*)(ptr0 + 16): 0L);
                result = 1L;
            }
            return result;
        }
        default: {
            sub_401D12(v0, 412L);
            return 0L;
        }
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F61B(long long param0) {
    long long result;
    long long v0;
    long long v1 = sub_406FC3(param0);
    unsigned int v2 = *(unsigned int*)v1;
    if(v2 == 6) {
        sub_4086BF(param0, v1);
    loc_41F657:
        result = 1L;
    }
    else if(v2 != 9 || !((**(unsigned long long*)(v1 + 8L) >>> 12) & 0x1)) {
        sub_401D12(v0, 441L);
        result = 0L;
    }
    else {
        sub_407963(param0);
        goto loc_41F657;
    }
    return result;
}

void sub_41F671() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_41F69C(long long* param0, long long param1, unsigned int param2, long long param3) {
    char* result;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    if((unsigned long long)(*(param0 + 4) - *(param0 + 2)) <= 5L) {
        sub_41CFE2(*param0, (unsigned long long*)(param0 + 2), 6L, param3);
    }
    if(param2 < 0x80000000) {
        if((int)param2 <= 127) {
            if(!(((unsigned int)*(char*)((long long)(param2 >> 3) + 4453936L) >>> ((param2 & 0x7) % 32)) & 0x1)) {
                goto loc_41F70B;
            }
            else {
                result = *(unsigned long long*)(param0 + 2);
                *(unsigned long long*)(param0 + 2) = (long long*)(result + 1L);
                *result = (unsigned char)param2;
                return result;
            }
        }
        if((int)param2 <= 0xff) {
        loc_41F70B:
            char* ptr0 = *(unsigned long long*)(param0 + 2);
            long long* ptr1 = (unsigned long long)a0123456789ABCDE2[(long long)(param2 >> 4)] | ((unsigned long long)(((long long)(param2 >> 4) >>> 8L) & 0xffffffffffffffL) << 8);
            *ptr0 = 37;
            result = ptr0 + 3L;
            *(result - 2L) = (unsigned char)ptr1;
            *(result - 1L) = a0123456789ABCDE2[(unsigned long long)(param2 & 0xF)];
            *(unsigned long long*)(param0 + 2) = result;
            return result;
        }
        else if((int)param2 <= 0xffff) {
            short* ptr2 = *(unsigned long long*)(param0 + 2);
            long long v4 = (unsigned long long)a0123456789ABCDE2[(long long)(param2 >> 12)] | ((unsigned long long)(((long long)(param2 >> 12) >>> 8L) & 0xffffffffffffffL) << 8);
            *ptr2 = 29989;
            result = (char*)(ptr2 + 3);
            *(result - 4L) = (unsigned char)v4;
            *(result - 3L) = a0123456789ABCDE2[(unsigned long long)((param2 >> 8) & 0xF)];
            *(result - 2L) = *(char*)((long long*)((param2 >> 4) & 0xF) + 556632);
            *(result - 1L) = a0123456789ABCDE2[(unsigned long long)(param2 & 0xF)];
            *(unsigned long long*)(param0 + 2) = result;
            return result;
        }
    }
    return (char*)sub_401C42(*param0, "third_party/duktape/duk_bi_global.c", 0x60001afL, "invalid input");
}

int sub_41F7B1(long long param0, int param1) {
    long long v0 = 0L;
    int result = 0;
    do {
        long long v1 = (unsigned long long)(int)*(char*)((unsigned long long)*(char*)(v0 + param0) + 4514600L);
        if((unsigned int)v1 < 0) {
            return -1;
        }
        result = result * 16 + (unsigned int)v1;
        ++v0;
    }
    while((unsigned int)v0 < param1);
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_41F872(long long param0, long long param1, long long param2) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v1;
    long long v9 = v2;
    long long v10 = v3;
    long long v11 = sub_408998(param0, 0L);
    unsigned long long v12 = (unsigned long long)*(int*)(v11 + 24L);
    long long v13 = v11;
    sub_41CF97(param0, &v0, v12, v4);
    long long v14 = (unsigned long long)*(int*)(v11 + 24L);
    long long v15 = v11 + 32L;
    long long v16 = v11 + 32L;
    long long v17 = v11 + v14 + 32L;
    long long v18 = v11 + v14 + 32L;
    while((unsigned long long)v16 < (unsigned long long)v18) {
        long long v19 = sub_41C85D(param0, &v16, v15, v18, v5, v6);
        v7();
    }
    sub_41D054(param0, (unsigned long long*)&v0, v17, v18);
    sub_406BF4(param0);
    return 1L;
}

void sub_41F90E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
unsigned long long sub_41FA57(long long* param0, long long param1, unsigned int param2, long long param3, long long param4, unsigned long long param5) {
    long long v0;
    long long v1;
    int v2;
    long long v3;
    unsigned int v4;
    long long v5;
    long long v6;
    int v7;
    int v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12 = v9;
    long long v13 = v10;
    long long v14 = v11;
    unsigned long long result = param5;
    if((unsigned long long)(*(param0 + 4) - *(param0 + 2)) <= 6L) {
        sub_41CFE2(*param0, (unsigned long long*)(param0 + 2), 7L, param3);
    }
    if(param2 == 37) {
        long long v15 = *(param0 + 6);
        if((unsigned long long)(*(param0 + 8) - v15) > 1L) {
            int v16 = sub_41F7B1(v15, 2L);
            if((unsigned int)v16 >= 0) {
                if((unsigned int)v16 <= 127) {
                    char* ptr0 = *(unsigned long long*)(param0 + 2);
                    if((((unsigned int)*(char*)((long long)((unsigned int)v16 >> 3) + v5) >>> ((unsigned int)((unsigned int)v16 & 0x7) % 32)) & 0x1)) {
                        *ptr0 = 37;
                        ptr0 += 3L;
                        *(ptr0 - 2L) = *(char*)param0;
                        *(ptr0 - 1L) = *(char*)((char*)param0 + 1L);
                        *(unsigned long long*)(param0 + 2) = ptr0;
                    }
                    else {
                        *(param0 + 2) = (long long)(ptr0 + 1L);
                        *ptr0 = (unsigned char)v16;
                    }
                    *(param0 + 6) = *(param0 + 6) + 2L;
                    return result;
                }
                else if((unsigned int)v16 > 191) {
                    if((unsigned int)v16 <= 223) {
                        v4 = (unsigned int)((unsigned int)v16 & 0x1f);
                        v3 = 2L;
                        goto loc_41FB6A;
                    }
                    else if((unsigned int)v16 <= 239) {
                        v4 = (unsigned int)((unsigned int)v16 & 0xF);
                        v3 = 3L;
                        goto loc_41FB6A;
                    }
                    if((unsigned int)v16 <= 247) {
                        v4 = (unsigned int)((unsigned int)v16 & 0x7);
                        v3 = 4L;
                    loc_41FB6A:
                        if((unsigned long long)((unsigned int)v3 * 3 - 1) <= param5) {
                            long long v17 = (long long)((char*)param0 + 3L);
                        loc_41FB86:
                            do {
                                v2 = /*BAD_CALL!*/ sub_41F7B1(v17, 2L);
                                if((unsigned int)v2 >= 0 && !(((unsigned int)v2 & 0xc0) - 128)) {
                                    v4 = (unsigned int)(v4 * 64 + ((unsigned int)v2 & 0x3f));
                                    if(v6 + 3L != param5) {
                                        v17 = v6 + 3L;
                                        goto loc_41FB86;
                                    }
                                    else {
                                        *(param0 + 6) = v6 + 2L;
                                        if((((v4 - v7) ^ v4) & (v7 ^ v4)) < 0 != v8 > (int)v4 || (int)v4 > 0x10ffff || v4 - 0xd800 < 0x7ff || v4 == 0xdfff) {
                                            break;
                                        }
                                        else {
                                            v1 = *(param0 + 2);
                                            v0 = (unsigned long long)v4;
                                            if((int)v4 > 0xffff) {
                                                long long v18 = sub_41C531((unsigned long long)((unsigned int)((v4 - 0x10000) >> 10) + 0xd800), v1);
                                                v1 = (long long)(unsigned int)v18 + *(param0 + 2);
                                                v0 = (unsigned long long)(((v4 - 0x10000) & 0x3ff) + 0xdc00);
                                                *(param0 + 2) = v1;
                                            }
                                            long long v19 = sub_41C531(v0, v1);
                                            *(param0 + 2) = (long long)(unsigned int)v19 + *(param0 + 2);
                                            return result;
                                        }
                                    }
                                }
                            }
                            while((unsigned int)v2 >= 0 && !(((unsigned int)v2 & 0xc0) - 128));
                        }
                    }
                }
            }
        }
        return (unsigned long long)sub_401C42(*param0, "third_party/duktape/duk_bi_global.c", 0x7000186L, "invalid input");
    }
    v1 = *(param0 + 2);
    v0 = (unsigned long long)param2;
    long long v19 = sub_41C531(v0, v1);
    *(param0 + 2) = (long long)(unsigned int)v19 + *(param0 + 2);
    return result;
}

void sub_42005E() {
    // Decompilation error
}

void sub_42014B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4202D0(long long param0, int param1, unsigned int param2) {
    char v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v5;
    long long v9 = v4;
    long long v10 = 0L;
    long long v11 = v6;
    sub_403883(param0, (long long)((unsigned int)(param1 * 0x10000) + 102));
    long long v12 = sub_405869(v1, v3, v2, v7);
    if(v12) {
        unsigned long long v13 = *(unsigned long long*)(v12 + 24L);
        if(v13 > 4L && *(unsigned int*)(v12 + 32L) > param2) {
            unsigned long long v14 = (unsigned long long)*(int*)((unsigned long long)((param2 >>> 6) * 2 + 2) * 4L + v12 + 32L);
            if(v13 >= v14) {
                long long v15 = 6L;
                unsigned int v16 = param2 & 0x3f;
                v10 = (unsigned long long)*(int*)((unsigned long long)((param2 >>> 6) * 2 + 1) * 4L + v12 + 32L);
                int* ptr0 = &v0;
                long long v17 = v12 + v14 + 32L;
                while(v15 != 0L) {
                    *ptr0 = 0;
                    ++ptr0;
                    --v15;
                }
                long long v18 = v17;
                while(v16) {
                    int v19 = /*BAD_CALL!*/ sub_41CDF1(&v18);
                    if((unsigned int)v19) {
                        int v20 = /*BAD_CALL!*/ sub_41CDF1(&v18);
                        if((unsigned int)v20) {
                            int v21 = /*BAD_CALL!*/ sub_41CDF1(&v18);
                            if((unsigned int)v21) {
                                int v22 = sub_41CDA5(&v18, 16L);
                                int v23 = sub_41CDA5(&v18, 16L);
                                v10 = (unsigned long long)((unsigned int)v22 * 0x10000 + (unsigned int)v23);
                            }
                            else {
                                int v24 = sub_41CDA5(&v18, 8L);
                                v10 = (unsigned long long)((unsigned int)v24 + (unsigned int)v10 - 128);
                            }
                        }
                        else {
                            int v25 = sub_41CDA5(&v18, 2L);
                            v10 = (unsigned long long)((unsigned int)v25 + (unsigned int)v10 + 1);
                        }
                    }
                    --v16;
                }
            }
        }
    }
    sub_407D7E(param0);
    return (unsigned long long)(unsigned int)v10;
}

void sub_42165E() {
    // Decompilation error
}

void sub_4217B1() {
    // Decompilation error
}

void sub_4219BF() {
    // Decompilation error
}

void sub_421BAE() {
    // Decompilation error
}

void sub_421D90() {
    // Decompilation error
}

void sub_421EFA() {
    // Decompilation error
}

unsigned int sub_4261E0(long long* param0, int param1, int param2) {
    unsigned int v0 = *(unsigned int*)(param0 + 3);
    *(int*)((char*)param0 + 28L) = *(int*)((char*)param0 + 28L) + param2;
    unsigned int result = (unsigned int)(v0 << ((unsigned long long)param2 & 0x1fL));
    *(int*)(param0 + 3) = (v0 << ((unsigned long long)param2 & 0x1fL)) | param1;
    for(unsigned int i = *(unsigned int*)((char*)param0 + 28L); *(int*)((char*)param0 + 28L) != 7 && (int)i >= 7; i = *(unsigned int*)((char*)param0 + 28L)) {
        result = *(unsigned long long*)(param0 + 1);
        if(*(unsigned long long*)(param0 + 2) > result) {
            int v1 = *(int*)(param0 + 3);
            *(param0 + 1) = result + 1L;
            *(char*)(*param0 + result) = (unsigned char)(v1 >>> ((unsigned long long)(i - 8) & 0x1fL));
        }
        else {
            *(int*)(param0 + 4) = 1;
        }
        *(int*)((char*)param0 + 28L) = *(int*)((char*)param0 + 28L) - 8;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_426238(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v0;
    sub_40869C(param0);
    sub_4037B9(param0, 0xffff0057L);
    return sub_405E64(param0, 0xffffffffL, v0, v2);
}

int* sub_426263(long long param0) {
    int* result = NULL;
    if(*(int*)(param0 - 16L) == 9) {
        result = *(unsigned long long*)(param0 - 8L);
        if((*result & 0x408040) != &loc_408000 || *(unsigned int*)(result + 14) > *(unsigned int*)(result + 12)) {
            result = NULL;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42628A(long long param0) {
    long long result = sub_426238(param0);
    if((unsigned int)result < 0) {
        sub_401CE2("invalid length", 79L);
        result = 0L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4262BB(long long param0, int param1, int param2) {
    long long result;
    long long v0 = sub_40370E(param0, 1L, (unsigned long long)param1);
    long long v1 = /*BAD_CALL!*/ sub_40370E(param0, 1L, (unsigned long long)param2);
    if((unsigned int)v1) {
        sub_403953(param0, 1L, (long long)param1);
    }
    else {
        sub_403B1D(param0, 1L, (long long)param1);
        sub_407DBA(param0);
    }
    if((unsigned int)v0) {
        result = sub_403953(param0, 1L, (long long)param2);
    }
    else {
        sub_403B1D(param0, 1L, (long long)param2);
        sub_407DBA(param0);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_426341() {
}

void sub_426454() {
    // Decompilation error
}

void sub_42653A() {
    // Decompilation error
}

void sub_4265E7() {
    // Decompilation error
}

void sub_42660E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_426670() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_426820() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42696F(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    int* ptr0 = sub_426263(*(long long*)(param0 + 104L));
    if(ptr0) {
        void* ptr1 = (void*)ptr0[14];
        result = 0L;
        if((unsigned int)ptr1) {
            long long v4 = (unsigned long long)ptr0[10];
            ptr0[14] = (unsigned int)ptr1 - 1;
            unsigned int* ptr2 = (unsigned int*)(v4 * 25L + (unsigned long long)((unsigned int)ptr1 - 1) * 16L + (long long)(long long*)((long long)(void*)((0 - (unsigned int)v4) & 0x7) + *(long long*)&ptr0[6]));
            if(*ptr2 != 7) {
                **(unsigned long long*)(param0 + 112L) = *(void*)ptr2;
                *ptr2 = 7;
            }
            *(long long*)(param0 + 112L) = *(long long*)(param0 + 112L) + 16L;
            return 1L;
        }
    }
    else {
        long long v5 = /*BAD_CALL!*/ sub_426238(param0);
        if(!(unsigned int)v5) {
            sub_406A68(param0, 0L);
            sub_403A07(param0, 87L);
            result = 0L;
        }
        else {
            sub_40370E(param0, 0L, (unsigned long long)((unsigned int)v5 - 1));
            sub_403B1D(param0, 0L, (long long)((unsigned int)v5 - 1));
            sub_406AAF(param0, (unsigned long long)((unsigned int)v5 - 1));
            sub_403A07(param0, 87L);
            result = 1L;
        }
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_426A44(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    unsigned long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v3;
    long long v9 = v4;
    long long v10 = v0;
    long long v11 = v5;
    long long v12 = v6;
    long long v13 = param3;
    int* ptr0 = sub_426263(*(long long*)(param0 + 104L));
    if(ptr0) {
        long long v14 = (unsigned long long)ptr0[14];
        long long v15 = (*(unsigned long long*)(param0 + 112L) - v2) >> 4;
        int v16 = (unsigned int)v14 + (unsigned int)v15;
        if(__carry__((unsigned int)v14, (unsigned int)v15)) {
            sub_401CE2("invalid length", 538L);
            goto loc_426AFE;
        }
        else if((unsigned int)ptr0[12] < (unsigned int)v16) {
            goto loc_426AFE;
        }
        else {
            unsigned int v17 = 0;
            long long v18 = 0L;
            long long v19 = (unsigned long long)ptr0[10] * 25L + v14 * 16L + ((unsigned long long)((0 - ptr0[10]) & 0x7) + *(long long*)&ptr0[6]);
            while((unsigned int)v15 > (int)v17) {
                ++v17;
                *(void*)(v18 + v19) = *(void*)(v18 + v2);
                *(int*)(v18 + v2) = 2;
                v18 += 16L;
            }
            *(unsigned long long*)(param0 + 112L) = v2;
            ptr0[14] = v16;
            sub_406AAF(param0, (unsigned long long)v16);
            goto loc_426B7F;
        }
    }
    else {
    loc_426AFE:
        long long v20 = sub_404AE7(param0);
        long long v21 = sub_426238(param0);
        int v22 = (unsigned int)v21 + (unsigned int)v20;
        if(!__carry__((unsigned int)v21, (unsigned int)v20)) {
            long long v23 = 0L;
            while((int)(unsigned int)v20 > (unsigned int)v23) {
                sub_404F0A(param0, (unsigned long long)(unsigned int)v23);
                long long v24 = (unsigned long long)((unsigned int)v21 + (unsigned int)v23);
                v23 = (unsigned long long)((unsigned int)v23 + 1);
                sub_403953(param0, 0xfffffffdL, v24);
            }
            sub_406AAF(param0, (unsigned long long)v22);
            sub_404F67(param0, v7, v1, param3);
            sub_403A07(param0, 0xfffc0057L);
        loc_426B7F:
            result = 1L;
        }
        else {
            sub_401CE2("invalid length", 612L);
            result = 0L;
        }
    }
    return result;
}

void sub_426B90() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_426BC2(long long param0) {
    long long result;
    char v0;
    char v1;
    long long v2;
    unsigned int v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10;
    long long v11;
    long long v12 = v5;
    long long v13 = v7;
    long long v14 = v6;
    long long v15 = v8;
    long long v16 = param0;
    long long v17 = v9;
    long long v18 = /*BAD_CALL!*/ sub_404AE7(param0);
    unsigned int v19 = (unsigned int)v18;
    if((int)v19 <= 1) {
        v3 = 2;
        sub_404B20(v16, 2L);
        v2 = 0L;
    }
    else {
        v3 = v19;
        v2 = 1L;
    }
    unsigned int i = (unsigned int)v2;
    long long v20 = /*BAD_CALL!*/ sub_42628A(v16);
    unsigned int v21 = (unsigned int)v20;
    unsigned int v22 = (unsigned int)v20;
    long long v23 = /*BAD_CALL!*/ sub_406077(v16, 0L, (long long)(0 - (unsigned int)v20), (long long)v21);
    int v24 = (unsigned int)v23;
    unsigned int v25 = i;
    long long v26 = (unsigned long long)v24;
    if(v24 < 0) {
        v26 = (unsigned long long)((unsigned int)v26 + v22);
    }
    long long v27 = (unsigned long long)(v22 - (unsigned int)v26);
    if(v25) {
        long long v28 = sub_406077(v16, 1L, 0L, (long long)(unsigned int)v27);
        v27 = (unsigned long long)(unsigned int)v28;
    }
    long long v29 = (unsigned long long)(v3 - 2);
    double v30 = (double)v22 - (double)(unsigned int)v27 + (double)(v3 - 2);
    if(v30 == 4.294967295E9) {
        v1 = 1;
        v0 = 0;
    }
    else if(v30 > 4.294967295E9) {
        v1 = 0;
        v0 = 0;
    }
    else {
        v1 = v30 < 4.294967295E9 ? 0: 1;
        v0 = 1;
    }
    if(!v0 && !v1) {
        sub_401CE2("invalid length", 1008L);
        result = 0L;
    }
    else {
        sub_4070BA(v16, v11, v10, v4);
        for(i = 0; (unsigned int)v27 > (int)i; ++i) {
            long long v31 = /*BAD_CALL!*/ sub_40370E(v16, 0xfffffffdL, (unsigned long long)((unsigned int)v26 + i));
            int v32 = (unsigned int)v31;
            if(v32) {
                sub_403DB2(v16, 0xfffffffeL, (unsigned long long)i, 7L);
            }
            else {
                sub_407DBA(v16);
            }
        }
        sub_406AAF(v16, (unsigned long long)(unsigned int)v27);
        sub_403E13(v16, 4261435137L);
        char v33 = (unsigned int)v29 > (unsigned int)v27;
        char v34 = ((((unsigned int)v27 - (unsigned int)v29) ^ (unsigned int)v27) & ((unsigned int)v29 ^ (unsigned int)v27)) < 0;
        unsigned int v35 = v22 - (unsigned int)v27;
        if((unsigned int)v29 != (unsigned int)v27 && v33 == v34) {
            i = (unsigned int)v26;
            goto loc_426D08;
        }
        else if(v33 != v34) {
            long long v36 = (unsigned long long)(v35 - 1);
            while((unsigned int)v36 >= (unsigned int)v26) {
                long long v37 = /*BAD_CALL!*/ sub_40370E(v16, 0xfffffffdL, (unsigned long long)((unsigned int)v36 + (unsigned int)v27));
                int v38 = (unsigned int)v37;
                long long v39 = (unsigned long long)((unsigned int)v29 + (unsigned int)v36);
                if(v38) {
                    sub_403953(v16, 0xfffffffcL, v39);
                }
                else {
                    i = (unsigned int)v39;
                    sub_407DBA(v16);
                    sub_403B1D(v16, 0xfffffffdL, (long long)i);
                }
                v36 = (unsigned long long)((unsigned int)v36 - 1);
                continue;
            loc_426D08:
                long long j;
                for(j = (unsigned long long)v35; (int)v35 > (int)i; j = (unsigned long long)v35) {
                    long long v40 = /*BAD_CALL!*/ sub_40370E(v16, 0xfffffffdL, (unsigned long long)((unsigned int)v27 + i));
                    int v41 = (unsigned int)v40;
                    long long v42 = (unsigned long long)((unsigned int)v29 + i);
                    if(v41) {
                        sub_403953(v16, 0xfffffffcL, v42);
                    }
                    else {
                        int v43 = (unsigned int)v42;
                        sub_407DBA(v16);
                        sub_403B1D(v16, 0xfffffffdL, (long long)v43);
                    }
                    ++i;
                }
                unsigned int v44 = (unsigned int)((unsigned int)j + (unsigned int)v29);
                --v22;
                while((int)v22 >= (int)v44) {
                    sub_403B1D(v16, 0xfffffffdL, (long long)v22);
                    --v22;
                }
            }
        }
        long long v45 = 0L;
        while((unsigned int)v29 > (unsigned int)v45) {
            sub_404F0A(v16, (unsigned long long)((unsigned int)v45 + 2));
            long long v46 = (unsigned long long)((unsigned int)v45 + (unsigned int)v26);
            v45 = (unsigned long long)((unsigned int)v45 + 1);
            sub_403953(v16, 0xfffffffcL, v46);
        }
        sub_406AAF(v16, (unsigned long long)((unsigned int)v29 + v35));
        sub_403A07(v16, 0xfffc0057L);
        result = 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_426E2B(long long param0) {
    unsigned int v0 = 0;
    long long v1 = sub_426238(param0);
    while((unsigned int)v1 >>> 1 != v0) {
        unsigned int v2 = (unsigned int)((unsigned int)v1 - 1) - v0;
        long long v3 = sub_40370E(param0, 0xfffffffeL, (unsigned long long)v0);
        long long v4 = /*BAD_CALL!*/ sub_40370E(param0, 0xfffffffdL, (unsigned long long)v2);
        if((unsigned int)v4) {
            sub_403953(param0, 0xfffffffcL, (long long)v0);
        }
        else {
            sub_403B1D(param0, 0xfffffffcL, (long long)v0);
            sub_407DBA(param0);
        }
        if((unsigned int)v3) {
            sub_403953(param0, 0xfffffffdL, (long long)v2);
        }
        else {
            sub_403B1D(param0, 0xfffffffdL, (long long)v2);
            sub_407DBA(param0);
        }
        ++v0;
    }
    sub_40460F(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_426EE4(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v4;
    long long v9 = v2;
    long long v10 = v1;
    long long v11 = v3;
    long long v12 = v5;
    long long v13 = sub_42628A(param0);
    unsigned int v14 = (unsigned int)v13;
    sub_4070BA(param0, v6, v0, v7);
    long long v15 = /*BAD_CALL!*/ sub_406077(param0, 0L, (long long)(0 - v14), (long long)v14);
    long long v16 = (unsigned long long)(unsigned int)v15;
    if((unsigned int)v15 < 0) {
        v16 = (unsigned long long)((unsigned int)v16 + v14);
    }
    long long v17 = /*BAD_CALL!*/ sub_40649F(param0, 1L);
    if(!(unsigned int)v17) {
        long long v18 = sub_406077(param0, 1L, (long long)(0 - v14), (long long)v14);
        v14 += (unsigned int)v18;
        if((unsigned int)v18 < 0x80000000) {
            v14 = (unsigned int)v18;
        }
    }
    long long v19 = 0L;
    long long v20 = 0L;
    for(long long i = (unsigned long long)((unsigned int)v20 + (unsigned int)v16); (unsigned int)v20 + (unsigned int)v16 < (int)v14; i = (unsigned long long)((unsigned int)v20 + (unsigned int)v16)) {
        int v21 = (unsigned int)v20;
        long long v22 = /*BAD_CALL!*/ sub_40370E(param0, 2L, i);
        if((unsigned int)v22) {
            v19 = (unsigned long long)(v21 + 1);
            sub_403DB2(param0, 4L, (long long)v21, 7L);
        }
        else {
            sub_407DBA(param0);
        }
        v20 = (unsigned long long)(v21 + 1);
    }
    sub_406AAF(param0, (unsigned long long)(unsigned int)v19);
    sub_403E13(param0, 67131137L);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_426FD0(long long param0) {
    int result;
    long long v0 = /*BAD_CALL!*/ sub_426238(param0);
    if(!(unsigned int)v0) {
        sub_406A68(param0, 0L);
        sub_403A07(param0, 87L);
        result = 0;
    }
    else {
        unsigned int v1 = 1;
        sub_40370E(param0, 0L, 0L);
        while((unsigned int)v0 - 1 != v1 - 1) {
            long long v2 = /*BAD_CALL!*/ sub_40370E(param0, 0L, (unsigned long long)v1);
            if((unsigned int)v2) {
                sub_403953(param0, 0L, (long long)(v1 - 1));
            }
            else {
                sub_403B1D(param0, 0L, (long long)(v1 - 1));
                sub_407DBA(param0);
            }
            ++v1;
        }
        sub_403B1D(param0, 0L, (long long)(v1 - 1));
        sub_406AAF(param0, (unsigned long long)(v1 - 1));
        sub_403A07(param0, 87L);
        result = 1;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_427082(long long param0) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v4;
    long long v10 = v1;
    long long v11 = sub_404AE7(param0);
    long long v12 = sub_426238(param0);
    int v13 = (unsigned int)v12 + (unsigned int)v11;
    long long v14 = (unsigned long long)(unsigned int)v12;
    if(__carry__((unsigned int)v12, (unsigned int)v11)) {
        sub_401CE2("invalid length", 1298L);
        result = 0L;
    }
    else {
        while((unsigned int)v14) {
            v14 = (unsigned long long)((unsigned int)v14 - 1);
            long long v15 = /*BAD_CALL!*/ sub_40370E(param0, 0xfffffffeL, (unsigned long long)(unsigned int)v14);
            long long v16 = (unsigned long long)((unsigned int)v11 + (unsigned int)v14);
            if((unsigned int)v15) {
                sub_403953(param0, 0xfffffffdL, v16);
            }
            else {
                int v17 = (unsigned int)v16;
                sub_407DBA(param0);
                sub_403B1D(param0, 0xfffffffeL, (long long)v17);
            }
        }
        while((unsigned int)v11 != (unsigned int)v14) {
            sub_404F0A(param0, (unsigned long long)(unsigned int)v14);
            long long v18 = (unsigned long long)(unsigned int)v14;
            v14 = (unsigned long long)((unsigned int)v14 + 1);
            sub_403953(param0, 0xfffffffdL, v18);
        }
        sub_406AAF(param0, (unsigned long long)v13);
        sub_404F67(param0, v5, v0, v6);
        sub_403A07(param0, 0xfffc0057L);
        result = 1L;
    }
    return result;
}

void sub_427168() {
    // Decompilation error
}

void sub_427245() {
    // Decompilation error
}

void sub_4273EF() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_427511(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = param3;
    long long v9 = sub_41DCD3(param0);
    sub_406FB2(param0, v4);
    unsigned int* ptr0 = (unsigned int*)sub_40483D(param0, 0xffffffffL);
    unsigned int v10 = *ptr0;
    if(*ptr0 == 4) {
    loc_42757A:
        v0 = 1L;
        if((unsigned int)v9) {
            sub_408725(param0, 0xffffffffL);
        }
    }
    else if(v10 == 9 && (unsigned int)(**(unsigned long long*)(ptr0 + 2) >>> 27) == 5) {
        sub_403883(param0, 0xffff006aL);
        goto loc_42757A;
    }
    else {
        v0 = 0L;
        sub_401D12(param3, 39L);
    }
    return (unsigned long long)(unsigned int)v0;
}

void sub_42766D() {
    // Decompilation error
}

void sub_427689() {
    // Decompilation error
}

void sub_4279F8() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_427AF5() {
}

void sub_427EEF() {
    // Decompilation error
}

void sub_428018() {
    // Decompilation error
}

void sub_428481() {
    // Decompilation error
}

void sub_4287AB() {
    // Decompilation error
}

void sub_428B6D() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_428BB1() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428C27(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = param3;
    sub_406FB2(param0, param1);
    sub_408496(param0, 0xffffffffL, 640L, param3, v1);
    sub_4037B9(param0, 0xffff005dL);
    long long v5 = /*BAD_CALL!*/ sub_40649F(param0, 0xffffffffL);
    if((unsigned int)v5) {
        sub_407D7E(param0);
        sub_406EC3(param0, "Error", 5L);
    }
    else {
        sub_408725(param0, 0xffffffffL);
    }
    sub_4037B9(param0, 0xfffe0034L);
    long long v6 = /*BAD_CALL!*/ sub_40649F(param0, 0xffffffffL);
    if((unsigned int)v6) {
        sub_407D7E(param0);
        sub_407963(param0);
    }
    else {
        sub_408725(param0, 0xffffffffL);
    }
    long long v7 = sub_405CB0((int*)param0, 0xfffffffeL);
    if(v7) {
        long long v8 = sub_405CB0((int*)param0, 0xffffffffL);
        if(!v8) {
            sub_407D7E(param0);
        }
        else {
            sub_406EC3(param0, 0x446965L, 2L);
            sub_40500F(param0, 0xfffffffeL);
            sub_408E52(param3, v2);
        }
    }
    return 1L;
}

void sub_428D5B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
char* sub_428E41(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    if(*(param0 + 3) == *(unsigned long long*)(param0 + 1)) {
        sub_41CFE2(*param0, (unsigned long long*)(param0 + 1), 1L, param3);
    }
    char* result = *(unsigned long long*)(param0 + 1);
    *(unsigned long long*)(param0 + 1) = (long long*)(result + 1L);
    *result = (unsigned char)param1;
    return result;
}

void sub_428E7D() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428F0A(long long* param0, int param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v3;
    long long v7 = v4;
    long long v8 = v1;
    long long v9 = v5;
    long long v10 = v0;
    long long result = param2;
    sub_428E41(param0, 10L, param2, param3);
    if(param1) {
        unsigned long long v11 = (unsigned long long)*(int*)(param0[6] + 24L);
        long long v12 = (unsigned long long)param1 * v11;
        if((unsigned long long)(param0[3] - param0[1]) < (unsigned long long)v12) {
            long long v13 = sub_41CFE2(param0[0], (unsigned long long*)(param0 + 1), v12, v12);
        }
        sub_43AAA0(v12, (long long)v11);
        long long v14 = v2 + v11;
        long long v15 = v12 - v11;
        while((unsigned long long)v15 >= v11) {
            v15 -= v11;
            sub_43AAA0(param3, (long long)v11);
            v14 += v11;
            v11 *= 2L;
        }
        sub_43AAA0(param3, v15);
        param0[1] = (long long)(long long*)(v15 + v14);
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428FAA(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v0;
    long long v5 = v2;
    long long result = param2;
    long long v6 = (long long)*(int*)(param1 + 24L);
    if((unsigned long long)(*(param0 + 3) - *(param0 + 1)) < (unsigned long long)v6) {
        sub_41CFE2(*param0, (unsigned long long*)(param0 + 1), v6, param3);
    }
    if(v6) {
        sub_43AAA0(param3, v6);
    }
    *(param0 + 1) = *(param0 + 1) + v6;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_428FFB(long long* param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v0;
    long long v5 = v2;
    long long result = param2;
    long long v6 = *param0;
    long long v7 = (long long)*(int*)(*(long long*)((unsigned long long)(unsigned int)param1 * 8L + *(long long*)(v6 + 568L)) + 24L);
    if(*(unsigned long long*)(param0 + 3) - *(param0 + 1) < (unsigned long long)v7) {
        sub_41CFE2(v6, (unsigned long long*)(param0 + 1), v7, param3);
    }
    if(v7) {
        sub_43AAA0(param3, v7);
    }
    *(param0 + 1) = *(param0 + 1) + v7;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_429056(long long param0) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    sub_404E3A(*(long long*)param0, 32);
    unsigned int v4 = *(unsigned int*)(param0 + 52L);
    if(*(int*)(param0 + 56L) <= (int)v4) {
        sub_401CE2("json decode recursion limit", 723L);
        return (long long)v4;
    }
    *(int*)(param0 + 52L) = v4 + 1;
    return v4 + 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4290F1(long long* param0, long long param1, long long param2, char* param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v2;
    long long v3;
    char* ptr0;
    char* ptr1;
    long long* ptr2;
    char v4;
    long long* ptr3;
    long long* ptr4;
    char v5;
    long long v6;
    long long v7;
    char* ptr5;
    long long v8 = 128L;
    long long* ptr6 = &ptr4;
    long long* ptr7 = ptr3;
    long long* ptr8 = param0;
    long long* ptr9 = &ptr5;
    long long v9 = v7;
    long long* ptr10 = &v9;
    char v10 = &ptr2 == 72L;
    char v11 = (long long)&v5 < 0L;
    char v12 = __parity__((unsigned char)&ptr2 - 72);
    char v13 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)&v9 ^ 0x30L) ^ (long long)&v5) >>> 4L) & 0x1L);
    char v14 = (unsigned long long)&v9 < 48L;
    char v15 = (long long)(long long*)((long long)(long long*)((long long)&v9 ^ (long long)&v5) & (long long)(long long*)((long long)&v9 ^ 0x30L)) < 0L;
    long long v16 = *param0;
    long long v17 = *param0;
    long long v18 = sub_41CF97(v17, (long long)&ptr5, 128L);
    char* ptr11 = ptr5;
    char* ptr12 = ptr5;
    while(1) {
        char* ptr13 = ptr12;
        long long v19 = v6;
        long long* ptr14 = (long long*)(v19 - (long long)ptr13);
        char v20 = ptr14 == 70L;
        char v21 = (long long)ptr14 < 70L;
        char v22 = __parity__((unsigned char)ptr14 - 70);
        char v23 = (unsigned long long)ptr14 < 70L;
        char v24 = (long long)(long long*)((long long)(long long*)((long long)(long long*)((char*)ptr14 - 70L) ^ (long long)ptr14) & (long long)(long long*)((long long)ptr14 ^ 0x46L)) < 0L;
        char v25 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((char*)ptr14 - 70L) ^ (long long)(long long*)((long long)ptr14 ^ 0x46L)) >>> 4L) & 0x1L);
        if((v23 || v20)) {
            long long v26 = *ptr8;
            long long* ptr15 = &ptr5;
            long long v27 = 71L;
            ptr5 = ptr13;
            ptr13 = (char*)sub_41CFE2(v26, (long long)&ptr5, 71L, (long long)param3);
        }
        ptr12 = ptr13;
        ptr1 = *(unsigned long long*)(ptr8 + 1);
        long long* ptr16 = (long long*)(ptr1 + 64L);
        do {
            ptr0 = ptr1;
            v3 = (unsigned long long)*ptr1;
            ++ptr1;
            char v28 = *(char*)(v3 + 4464800L) ? 0: 1;
            char v29 = *(char*)(v3 + 4464800L) < 0;
            char v30 = __parity__(*(char*)(v3 + 4464800L));
            char v31 = *(unsigned char*)(v3 + 4464800L) < 0;
            char v32 = 0;
            char v33 = 0;
            long long v34 = v3;
            if(v28) {
                goto loc_42917D;
            }
            else {
                param3 = ptr12;
                v4 = ptr1 == ptr16;
                char v35 = (long long)ptr1 > (long long)ptr16;
                char v36 = __parity__((unsigned char)ptr16 - (unsigned char)ptr1);
                char v37 = (unsigned long long)ptr1 > (unsigned long long)ptr16;
                char v38 = (long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr16 - (long long)ptr1) ^ (long long)ptr16) & (long long)(long long*)((long long)ptr1 ^ (long long)ptr16)) < 0L;
                char v39 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr16 - (long long)ptr1) ^ (long long)(long long*)((long long)ptr1 ^ (long long)ptr16)) >>> 4L) & 0x1L);
                char* ptr17 = param3 + 1L;
                ptr12 = param3 + 1L;
                *param3 = (unsigned char)v34;
            }
        }
        while(!v4);
        *(unsigned long long*)(ptr8 + 1) = ptr16;
        continue;
    loc_42917D:
        char v40 = (unsigned char)v3 == 34;
        char v41 = (unsigned char)v3 < 34;
        char v42 = __parity__((unsigned char)v3 - 34);
        char v43 = (unsigned char)v3 < 34;
        char v44 = ((((unsigned char)v3 - 34) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x22)) < 0;
        char v45 = ((((unsigned char)v3 - 34) ^ ((unsigned char)v3 ^ 0x22)) >>> 4) & 0x1;
        if(v40) {
            long long v46 = *ptr8;
            *(unsigned long long*)(ptr8 + 1) = ptr1;
            ptr5 = ptr12;
            sub_41D054(v46, (long long)&ptr5);
            return sub_406BF4(v16);
        }
        char v47 = (unsigned char)v3 == 92;
        char v48 = (unsigned char)v3 < 92;
        char v49 = __parity__((unsigned char)v3 - 92);
        char v50 = (unsigned char)v3 < 92;
        char v51 = ((((unsigned char)v3 - 92) ^ (unsigned char)v3) & ((unsigned char)v3 ^ 0x5c)) < 0;
        char v52 = ((((unsigned char)v3 - 92) ^ ((unsigned char)v3 ^ 0x5c)) >>> 4) & 0x1;
        if(!v47) {
            break;
        }
        else {
            long long* ptr18 = (long long*)(ptr0 + 2L);
            *(unsigned long long*)(ptr8 + 1) = (long long*)(ptr0 + 2L);
            ptr16 = (unsigned long long)*ptr1 | ((unsigned long long)(long long*)((long long)(long long*)((long long)ptr16 >>> 8L) & 0xffffffffffffffL) << 8);
            v47 = *ptr1 == 120;
            v48 = (unsigned char)ptr16 < 120;
            v49 = __parity__((unsigned char)ptr16 - 120);
            v50 = (unsigned char)ptr16 < 120;
            v51 = ((((unsigned char)ptr16 - 120) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x78)) < 0;
            v52 = ((((unsigned char)ptr16 - 120) ^ ((unsigned char)ptr16 ^ 0x78)) >>> 4) & 0x1;
            if(!v50 && !v47) {
                goto loc_42927A;
            }
            else {
                char v53 = (unsigned char)ptr16 == 109;
                char v54 = (unsigned char)ptr16 < 109;
                char v55 = __parity__((unsigned char)ptr16 - 109);
                char v56 = (unsigned char)ptr16 < 109;
                char v57 = ((((unsigned char)ptr16 - 109) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x6d)) < 0;
                char v58 = ((((unsigned char)ptr16 - 109) ^ ((unsigned char)ptr16 ^ 0x6d)) >>> 4) & 0x1;
                if((v56 || v53)) {
                    char v59 = (unsigned char)ptr16 == 98;
                    char v60 = (unsigned char)ptr16 < 98;
                    char v61 = __parity__((unsigned char)ptr16 - 98);
                    char v62 = (unsigned char)ptr16 < 98;
                    char v63 = ((((unsigned char)ptr16 - 98) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x62)) < 0;
                    char v64 = ((((unsigned char)ptr16 - 98) ^ ((unsigned char)ptr16 ^ 0x62)) >>> 4) & 0x1;
                    if(v59) {
                        v2 = 8L;
                        goto loc_429266;
                    }
                    else if(v62 != 0) {
                        char v65 = (unsigned char)ptr16 == 85;
                        char v66 = (unsigned char)ptr16 < 85;
                        char v67 = __parity__((unsigned char)ptr16 - 85);
                        char v68 = (unsigned char)ptr16 < 85;
                        char v69 = ((((unsigned char)ptr16 - 85) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x55)) < 0;
                        char v70 = ((((unsigned char)ptr16 - 85) ^ ((unsigned char)ptr16 ^ 0x55)) >>> 4) & 0x1;
                        if(!v65) {
                            if(v68 != 0) {
                                char v71 = (unsigned char)ptr16 == 34;
                                char v72 = (unsigned char)ptr16 < 34;
                                char v73 = __parity__((unsigned char)ptr16 - 34);
                                char v74 = (unsigned char)ptr16 < 34;
                                char v75 = ((((unsigned char)ptr16 - 34) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x22)) < 0;
                                char v76 = ((((unsigned char)ptr16 - 34) ^ ((unsigned char)ptr16 ^ 0x22)) >>> 4) & 0x1;
                                if(v71) {
                                    v2 = (unsigned long long)(unsigned char)ptr16;
                                    goto loc_429266;
                                }
                                else {
                                    v47 = (unsigned char)ptr16 == 47;
                                    v48 = (unsigned char)ptr16 < 47;
                                    v49 = __parity__((unsigned char)ptr16 - 47);
                                    v50 = (unsigned char)ptr16 < 47;
                                    v51 = ((((unsigned char)ptr16 - 47) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x2f)) < 0;
                                    v52 = ((((unsigned char)ptr16 - 47) ^ ((unsigned char)ptr16 ^ 0x2f)) >>> 4) & 0x1;
                                }
                            }
                            else {
                                v47 = (unsigned char)ptr16 == 92;
                                v48 = (unsigned char)ptr16 < 92;
                                v49 = __parity__((unsigned char)ptr16 - 92);
                                v50 = (unsigned char)ptr16 < 92;
                                v51 = ((((unsigned char)ptr16 - 92) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x5c)) < 0;
                                v52 = ((((unsigned char)ptr16 - 92) ^ ((unsigned char)ptr16 ^ 0x5c)) >>> 4) & 0x1;
                            }
                            if(!v47) {
                                goto loc_42927A;
                            }
                            else {
                                v2 = (unsigned long long)(unsigned char)ptr16;
                                goto loc_429266;
                            }
                        }
                        else {
                            v47 = *(int*)(ptr8 + 5) ? 0: 1;
                            v48 = *(int*)(ptr8 + 5) < 0;
                            v49 = __parity__((unsigned char)*(int*)(ptr8 + 5));
                            v50 = *(unsigned int*)(ptr8 + 5) < 0;
                            v51 = 0;
                            v52 = 0;
                            if(v47) {
                                goto loc_42927A;
                            }
                            else {
                                v1 = 8L;
                                goto loc_429250;
                            }
                        }
                    }
                    else {
                        v47 = (unsigned char)ptr16 == 102;
                        v48 = (unsigned char)ptr16 < 102;
                        v49 = __parity__((unsigned char)ptr16 - 102);
                        v50 = (unsigned char)ptr16 < 102;
                        v51 = ((((unsigned char)ptr16 - 102) ^ (unsigned char)ptr16) & ((unsigned char)ptr16 ^ 0x66)) < 0;
                        v52 = ((((unsigned char)ptr16 - 102) ^ ((unsigned char)ptr16 ^ 0x66)) >>> 4) & 0x1;
                        if(!v47) {
                            goto loc_42927A;
                        }
                        else {
                            v2 = 12L;
                            goto loc_429266;
                        }
                    }
                }
                else {
                    v0 = (unsigned long long)((unsigned int)ptr16 - 110);
                    v47 = (unsigned char)v0 == 10;
                    v48 = (unsigned char)v0 < 10;
                    v49 = __parity__((unsigned char)v0 - 10);
                    v50 = (unsigned char)v0 < 10;
                    v51 = ((((unsigned char)v0 - 10) ^ (unsigned char)v0) & ((unsigned char)v0 ^ 0xa)) < 0;
                    v52 = ((((unsigned char)v0 - 10) ^ ((unsigned char)v0 ^ 0xa)) >>> 4) & 0x1;
                }
                if(!v50 && !v47) {
                    goto loc_42927A;
                }
                else {
                    long long v77 = (unsigned long long)(unsigned char)v0;
                    switch(v77) {
                        case 0: {
                            v2 = 10L;
                            goto loc_429266;
                        }
                        case 4: {
                            v2 = 13L;
                            goto loc_429266;
                        }
                        case 6: {
                            break;
                        }
                        case 7: {
                            v1 = 4L;
                            goto loc_429250;
                        }
                        case 1: 
                        case 2: 
                        case 3: 
                        case 5: 
                        case 8: 
                        case 9: {
                            goto loc_42927A;
                        }
                        case 10: {
                            goto loc_429244;
                        }
                        default: {
                            throw 0;
                        }
                    }
                    v2 = 9L;
                    goto loc_429266;
                loc_429244:
                    v47 = *(int*)(ptr8 + 5) ? 0: 1;
                    v48 = *(int*)(ptr8 + 5) < 0;
                    v49 = __parity__((unsigned char)*(int*)(ptr8 + 5));
                    v50 = *(unsigned int*)(ptr8 + 5) < 0;
                    v51 = 0;
                    v52 = 0;
                    if(v47) {
                        goto loc_42927A;
                    }
                    else {
                        v1 = 2L;
                    loc_429250:
                        long long* ptr19 = ptr8;
                        v2 = sub_4290BE((long long)ptr19, v1, (long long)ptr18, (long long)ptr0);
                    loc_429266:
                        long long* ptr20 = &ptr12;
                        long long v78 = (unsigned long long)(unsigned int)v2;
                        long long v79 = sub_42E436((long long)&ptr12, v78);
                    }
                }
            }
        }
    }
    *(unsigned long long*)(ptr8 + 1) = ptr1;
loc_42927A:
    long long* ptr21 = ptr8;
    /*BAD_CALL!*/ sub_42909D((long long)ptr21);
}

long long sub_429282(long long* param0, int param1) {
    unsigned long long* ptr0;
    unsigned long long* ptr1;
    long long v0 = *param0;
    long long* ptr2 = (long long*)param1;
    long long v1 = *(long long*)(v0 + 568L);
    long long v2 = *(long long*)((long long)(long long*)((long long)ptr2 * 8L) + v1);
    unsigned long long v3 = *(unsigned long long*)((long long)(long long*)((long long)ptr2 * 8L) + v1);
    unsigned char* ptr3 = (unsigned char*)(v2 + 33L);
    char v4 = ptr3 ? 0: 1;
    char v5 = (long long)ptr3 < 0L;
    char v6 = __parity__((unsigned char)ptr3);
    char v7 = (long long*)((long long)(long long*)((long long)(long long*)((v3 ^ 0x21L) ^ (long long)ptr3) >>> 4L) & 0x1L);
    char v8 = v3 >= 18446744073709551583L;
    char v9 = (long long)(long long*)((long long)(long long*)((long long)ptr3 ^ v3) & ~(v3 ^ 0x21L)) < 0L;
    while(1) {
        unsigned char v10 = *ptr3;
        char v11 = *ptr3 ? 0: 1;
        char v12 = v10 >= 128;
        char v13 = __parity__(v10);
        char v14 = 0;
        char v15 = 0;
        if(v11) {
            break;
        }
        else {
            unsigned char* ptr4 = *(unsigned long long*)(param0 + 1);
            ptr2 = (long long*)(ptr4 + 1L);
            *(unsigned long long*)(param0 + 1) = (long long*)(ptr4 + 1L);
            char v16 = *ptr4 == v10;
            char v17 = *ptr4 > (char)v10;
            char v18 = __parity__(v10 - *ptr4);
            char v19 = *ptr4 > v10;
            char v20 = (((v10 - *ptr4) ^ v10) & (*ptr4 ^ v10)) < 0;
            char v21 = (((v10 - *ptr4) ^ (*ptr4 ^ v10)) >>> 4) & 0x1;
            if(!v16) {
                ptr0 = ptr0 - 1;
                *ptr0 = ptr1;
                ptr1 = ptr0;
                --ptr0;
                *ptr0 = &loc_4292B5;
                ptr3 = (unsigned char*)/*BAD_CALL!*/ sub_42909D((long long)param0);
            }
            unsigned char* ptr5 = ptr3;
            ++ptr3;
            char v22 = ptr3 ? 0: 1;
            char v23 = (long long)ptr3 < 0L;
            char v24 = __parity__((unsigned char)ptr3);
            v7 = (long long*)((long long)(long long*)((long long)(long long*)((long long)(long long*)((long long)ptr5 ^ 0x1L) ^ (long long)ptr3) >>> 4L) & 0x1L);
            char v25 = (long long)(long long*)((long long)(long long*)((long long)ptr3 ^ (long long)ptr5) & (long long*)~(long long)(long long*)((long long)ptr5 ^ 0x1L)) < 0L;
        }
    }
    long long v26 = *ptr0;
    ++ptr0;
    jump v26;
}

void sub_4292BB() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_429412(long long* param0, int* param1, long long param2) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v0;
    long long v8 = v2;
    long long v9 = param2;
    *(int*)(param0 + 11) = *(int*)(param0 + 11) - 1;
    long long v10 = *param0;
    long long v11 = sub_404583(v10, (unsigned long long)(*param1 - 1));
    if(*(unsigned int*)(param0 + 11) > 63) {
        sub_407AA3(v3, v11, v4, v5);
        sub_403A0F(v10, (long long)*(int*)((char*)param0 + 60L));
    }
    return sub_404B20(v10, (long long)*param1);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42946B(long long param0, int* param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    int* ptr0;
    long long v6;
    long long v7;
    long long v8 = v3;
    long long v9 = v2;
    long long v10 = v4;
    long long result = v5;
    long long v11 = *(long long*)param0;
    long long v12 = sub_404AE7(v11);
    *ptr0 = (unsigned int)v12;
    sub_404E3A(v11, 32L);
    unsigned long long v13 = (unsigned long long)sub_404583(v11, 0xffffffffL);
    long long v14 = (unsigned long long)*(int*)(param0 + 88L);
    long long v15 = 0L;
    while((unsigned int)v15 < ((unsigned int)v14 <= 64 ? (unsigned int)v14: 64)) {
        ++v15;
        if(*(long long*)(v15 * 8L + param0 + 112L) == v13) {
            v1 = 100665053L;
            return sub_401C42(v11, "third_party/duktape/duk_bi_json.c", v1, "cyclic input");
        }
    }
    if((unsigned int)v14 <= 63) {
        *(unsigned long long*)(v14 * 8L + param0 + 120L) = v13;
    }
    else {
        sub_407AA3(v14, (long long)v13, v6, v7);
        sub_404F67(v11, 0x446abbL, (long long)v13, v14);
        long long v16 = /*BAD_CALL!*/ sub_403BC8(v11, (unsigned long long)*(int*)(param0 + 60L));
        if((unsigned int)v16) {
            v1 = 100665063L;
            return sub_401C42(v11, "third_party/duktape/duk_bi_json.c", v1, "cyclic input");
        }
        sub_40699D(v11, (long long)((unsigned int)v14 <= 64 ? (int*)(unsigned int)v14: (int*)0x40), (long long)v13);
        sub_40388B(v11, (long long)*(int*)(param0 + 60L));
    }
    unsigned int v17 = *(unsigned int*)(param0 + 88L);
    if(*(unsigned int*)(param0 + 92L) <= v17) {
        return sub_401CE2("json encode recursion limit", 1779L);
    }
    *(int*)(param0 + 88L) = v17 + 1;
    return result;
}

void sub_429568() {
    // Decompilation error
}

void sub_4295DD() {
    // Decompilation error
}

void sub_42974E() {
    // Decompilation error
}

void sub_4297BE() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_429962() {
}

char* sub_429DD9(long long param0) {
    char* ptr0;
    long long v0;
    char* ptr1 = *(unsigned long long*)(param0 + 8L);
    do {
        v0 = (unsigned long long)*ptr1;
        ptr0 = ptr1;
        ++ptr1;
    }
    while(*(char*)(v0 + 4464544L));
    *(unsigned long long*)(param0 + 8L) = ptr1;
    return (unsigned long long)*ptr0 | ((unsigned long long)(long long*)((long long)(long long*)((long long)ptr1 >>> 8L) & 0xffffffffffffffL) << 8);
}

void sub_429DF6() {
    // Decompilation error
}

void sub_42A197() {
    // Decompilation error
}

void sub_42A276() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A678(long long $rdi, long long $rsi$2) {
    long long var10 = $r14;
    long long var18 = $r13;
    long long var20 = $r12;
    long long var28 = $rbx;
    unsigned int $ebx = 0;
    long long var30 = $fpd0;
    long long $rax = sub_404AE7($rdi);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_42A723() {
    long long v0;
    int result;
    long long v1 = /*BAD_CALL!*/ sub_41D67C();
    if((unsigned int)v1) {
        long long v2 = /*BAD_CALL!*/ sub_41D67C();
        if((unsigned int)v2) {
            return (int)(v0 >>> 32);
        }
    }
    sub_41D4D9();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42A7A1() {
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_42A7F7() {
    int result;
    long long v0;
    long long v1;
    long long v2 = /*BAD_CALL!*/ sub_41D67C();
    if((unsigned int)v2) {
        long long v3 = /*BAD_CALL!*/ sub_41D67C();
        if((unsigned int)v3) {
            result = (unsigned long long)(v1 < 0L);
            if(((unsigned char)result & 0x1)) {
                result = (unsigned long long)(v0 < 0L);
            }
            return result;
        }
    }
    sub_41D4DE();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A86D(long long param0) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = v1;
    long long v4 = sub_41DCD3(param0);
    sub_405C43(param0);
    *(long long*)((long long)(unsigned int)v4 * 8L + 4465408L)();
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A8A2(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v1;
    long long v4 = v2;
    long long v5 = sub_41DCD3(param0);
    sub_405C43(param0);
    long long v6 = v0;
    sub_405C43(param0);
    *(long long*)((long long)(unsigned int)v5 * 8L + 0x4422e0L)();
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A91E(long long param0) {
    sub_41D71B(param0);
    sub_406A1B(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42A93F(long long $rdi) {
    int $r14d = 0;
    unsigned int $r13d = 0;
    long long $rax = sub_404AE7($rdi);
    double var30 = (double)0.0;
    goto label_4;
    while(1) {
        if((int)(unsigned int)$rax <= (int)$r13d) {
            goto label_E;
        }
        goto label_5;
        sub_405C43($rdi);
        long long tmp@60 = /*BAD_CALL!*/ sub_42FB3D();
        if((unsigned int)tmp@60) {
            goto label_8;
            sub_41D4DE();
            var30 = $fpd0$1;
            goto label_C;
        }
        else {
            goto label_B;
            $r14d = 1;
            goto label_C;
        }
        goto label_C;
        $r13d = $r13d + 1;
        goto label_4;
    }
    long long tmp@95 = /*BAD_CALL!*/ sub_41D67C();
    if(!((unsigned int)tmp@95 || $r14d)) {
        goto label_10;
        long long tmp@127 = /*BAD_CALL!*/ sub_41D67C();
        if(!(unsigned int)tmp@127) {
            goto label_12;
            __SyntheticTypeUnknown $xmm2 = 0x0X;
            unsigned int $r13d$1 = 0;
            __SyntheticTypeUnknown $xmm1 = 0x0X;
            goto label_15;
            while(1) {
                if((int)(unsigned int)$rax <= (int)$r13d$1) {
                    goto label_1F;
                }
                goto label_16;
                long long $rsi = (long long)$r13d$1;
                $r13d$1 = $r13d$1 + 1;
                sub_40541C($rdi, $rsi);
                double $fpd0$6 = $fpd0$6 / var30;
            }
        }
        goto label_20;
    }
    goto label_20;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42AB6D(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long result = param3;
    sub_406FB2(param0, param1);
    long long v2 = /*BAD_CALL!*/ sub_4064DB();
    if(!(unsigned int)v2) {
        int* ptr0 = (int*)sub_405823();
        if(ptr0 && (unsigned int)(*ptr0 >>> 27) == 10) {
            sub_403883(param0, 0xffff006aL);
            sub_405181();
            return sub_40541C(param0, 0xffffffffL);
        }
        sub_401C42(param0, "third_party/duktape/duk_bi_number.c", 0x6000019L, "number expected");
        return result;
    }
    return sub_40541C(param0, 0xffffffffL);
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_42ABE8(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2 = v0;
    long long v3 = param3;
    long long v4 = /*BAD_CALL!*/ sub_404AE7(param0);
    if(!(unsigned int)v4) {
        sub_406A68(param0, 0L);
    }
    sub_405C43(param0);
    sub_404B20(param0, 1L);
    long long v5 = sub_41DC85(param0);
    int result = 1;
    if((unsigned int)v5) {
        sub_406FB2(param0, v1);
        int* ptr0 = (int*)sub_404583(param0, 0xffffffffL);
        long long v6 = (long long)((*ptr0 & 0x7ffffff) | 0x50000000);
        *ptr0 = (*ptr0 & 0x7ffffff) | 0x50000000;
        sub_404FD6(param0, v1, v6, param3);
        sub_403E13(param0, 4261440000L);
        result = 0;
    }
    return result;
}

long long sub_42AC70(long long param0, long long param1, long long param2, long long param3) {
    sub_42AB6D(param0, param1, param2, param3);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42AC80() {
}

void sub_42ACD0() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42AD58() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42ADD9() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42AEBE(long long param0) {
    sub_4085AE(param0, (void*)(*(long long*)(param0 + 104L) - 16L), 0L);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42AFE9() {
}

void sub_42B0CF() {
    // Decompilation error
}

void sub_42B130() {
    // Decompilation error
}

void sub_42B155() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B1CE(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    sub_40869C(param0);
    sub_4037B9(param0, 82L);
    sub_404FD6(param0, v0, v1, v2);
    sub_41DA64(param0);
    return 1L;
}

long long sub_42B206(long long param0) {
    sub_40869C(param0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B277(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = param3;
    long long v7 = /*BAD_CALL!*/ sub_41DCD3(param0);
    if(!(unsigned int)v7) {
        sub_40869C(param0);
        goto loc_42B29D;
    }
    else if((((unsigned int)v7 - 1 ? 0: 1) || (unsigned int)v7 - 1 < 0 != ((((unsigned int)v7 - 1) ^ (unsigned int)v7) & (unsigned int)v7) < 0)) {
    loc_42B29D:
        sub_408290(param0, 0L, v1, param3, v3, v4);
    }
    unsigned int* ptr0 = *(unsigned long long*)(param0 + 104L);
    unsigned int v8 = *ptr0;
    if(*ptr0 == 9) {
        v0 = *(long long*)(*(long long*)(ptr0 + 2) + 32L);
    loc_42B2F2:
        if(v0) {
            sub_407C45(param0, v0);
        }
        else {
            sub_40691D(param0, 0L, (long long)ptr0);
        }
        result = 1L;
    }
    else if(v8 == 6) {
        v0 = *(long long*)(param0 + 200L);
        goto loc_42B2F2;
    }
    else if(v8 == 10) {
        v0 = *(long long*)(param0 + 496L);
        goto loc_42B2F2;
    }
    else {
        sub_401D12(param3, 362L);
        result = 0L;
    }
    return result;
}

void sub_42B30A() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42B457() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B50D(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = param3;
    long long v6 = /*BAD_CALL!*/ sub_41DCD3(param0);
    if(!(unsigned int)v6) {
        sub_408290(param0, 0L, v1, param3, v2, v3);
    }
    sub_410761(param0, 0xfffffffeL, v1, param3, v2);
    return 1L;
}

void sub_42B541() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42B590() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42B68D() {
}

void sub_42B6EE() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B745(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v0;
    long long v7 = v1;
    int v8 = 10001;
    sub_406FB2(param0, param1);
    sub_408290(param0, 0xffffffffL, v2, v3, v4, v5);
    long long v9 = /*BAD_CALL!*/ sub_40649F(param0, 0xffffffffL);
    while(!(unsigned int)v9) {
        sub_404F0A(param0, 0L);
        sub_410761(param0, 1L, 0L, v3, v4);
        long long v10 = /*BAD_CALL!*/ sub_40649F(param0, 0xffffffffL);
        if(!(unsigned int)v10) {
            long long v11 = /*BAD_CALL!*/ sub_41DCD3(param0);
            sub_40377C(param0, 0xffffffffL, (unsigned int)v11 < 1 ? 73L: 88L);
            break;
        }
        else {
            sub_407D7E(param0);
            --v8;
            if(!v8) {
                sub_401CE2("prototype chain limit", 794L);
                return 0L;
            }
            sub_40447B(param0, 0xffffffffL, v2, v3, v4, v5);
            sub_40511F(param0, 0xfffffffeL);
            v9 = /*BAD_CALL!*/ sub_40649F(param0, 0xffffffffL);
        }
    }
    return 1L;
}

void sub_42B80A() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_42B82B(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3 = /*BAD_CALL!*/ sub_404AE7(param0);
    if(!(unsigned int)v3) {
        sub_406F18(param0, 0L, v0, v1);
    }
    else {
        sub_406F59(param0, 0L, v0, v1);
    }
    sub_404B20(param0, 1L);
    long long v4 = /*BAD_CALL!*/ sub_41DC85(param0);
    if((unsigned int)v4) {
        sub_407003(param0, 2281717888L, 36L, v1);
        sub_404FD6(param0, v2, v0, v1);
        sub_403E13(param0, 4261440000L);
    }
    return 1;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42B89E(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v1;
    long long v6 = v2;
    long long v7 = v3;
    long long v8 = param3;
    long long v9 = sub_41DCD3(param0);
    sub_406FB2(param0, v4);
    unsigned int* ptr0 = (unsigned int*)sub_404A12(param0, 0xffffffffL);
    unsigned int v10 = *ptr0;
    if(*ptr0 == 5) {
    loc_42B8EE:
        v0 = 1L;
        if((unsigned int)v9) {
            sub_408725(param0, 0xffffffffL);
        }
    }
    else if(v10 == 9 && (unsigned int)(**(unsigned long long*)(ptr0 + 2) >>> 27) == 17) {
        sub_403883(param0, 0xffff006aL);
        goto loc_42B8EE;
    }
    else {
        v0 = 0L;
        sub_401D12(param3, 74L);
    }
    return (unsigned long long)(unsigned int)v0;
}

void sub_42BAB2() {
    // Decompilation error
}

void sub_42BBFD() {
    // Decompilation error
}

void sub_42BC1E() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BC5A(long long param0, long long param1) {
    long long v0;
    long long v1;
    sub_406FB2(param0, param1);
    sub_406EC3(param0, &gvar_44246A, 1L);
    sub_40377C(param0, 0L, 44L);
    sub_404FF1(param0, param1, v0, v1);
    sub_40377C(param0, 0L, 48L);
    sub_408E52(param0, 4L);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BCB8(long long param0, long long param1) {
    char v0;
    long long v1;
    char v2;
    long long v3;
    long long v4 = v3;
    long long v5 = v1;
    char* ptr0 = &v0;
    sub_406FB2(param0, param1);
    sub_40582D(param0, 0xffffffffL);
    long long v6 = /*BAD_CALL!*/ sub_4037C1(param0, 0L, 27L, NULL);
    if((unsigned int)v6) {
        ptr0 = &v2;
        v0 = 103;
    }
    long long v7 = /*BAD_CALL!*/ sub_4037C1(param0, 0L, 45L, NULL);
    if((unsigned int)v7) {
        *ptr0 = 105;
        ++ptr0;
    }
    long long v8 = /*BAD_CALL!*/ sub_4037C1(param0, 0L, 46L, NULL);
    if((unsigned int)v8) {
        *ptr0 = 109;
        ++ptr0;
    }
    *ptr0 = 0;
    sub_406D71(param0, (long long)&v0);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BD48(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = v1;
    long long v8 = param3;
    sub_406FB2(param0, param1);
    int* ptr0 = (int*)sub_40582D(param0, 0xffffffffL);
    long long v9 = sub_41DCD3(param0);
    unsigned int v10 = (unsigned int)v9;
    if((unsigned int)(*ptr0 >>> 27) == 11) {
        sub_403883(param0, 101L);
        sub_403883(param0, 98L);
        long long v11 = sub_40574F(param0, 0xffffffffL);
        ptr0 = (unsigned long long)*(char*)(v11 + 32L) | ((unsigned long long)(long long*)((long long)(long long*)((long long)ptr0 >>> 8L) & 0xffffffffffffffL) << 8);
        sub_407D7E(param0);
        if(v10 == 1) {
            sub_406955(param0, (long long)((unsigned char)ptr0 & 0x2), v4, param3);
        }
        else if(v10 == 2) {
            v0 = (long long)((unsigned char)ptr0 & 0x4);
            sub_406955(param0, v0, v4, param3);
            v10 = 1;
        }
        else if(v10) {
            v10 = 1;
        }
        else {
            v0 = (long long)((unsigned int)ptr0 & 0x1);
            sub_406955(param0, v0, v4, param3);
            v10 = 1;
            return (unsigned long long)v10;
        }
    }
    else {
        if(*(long long*)(param0 + 304L) != ptr0) {
            sub_401D12(param3, 189L);
        }
        else if(v10 == 16) {
            sub_406EC3(param0, "(?:)", 4L);
            v10 = 1;
            return (unsigned long long)v10;
        }
        v10 = 0;
    }
    return (unsigned long long)v10;
}

void sub_42BE33() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42BF57(char* param0, long long param1, unsigned long long param2, int param3, long long param4) {
    long long v0;
    long long v1;
    long long v2;
    char v3;
    long long v4;
    long long v5;
    long long v6 = v4;
    long long v7 = v2;
    long long v8 = v0;
    long long v9 = v5;
    int v10 = param3;
    long long v11 = v1;
    long long v12 = (long long)*(int*)(param2 + 24L);
    unsigned int v13 = (unsigned int)param4;
    *(int*)&v3 = (unsigned int)v12;
    if(!((unsigned int)v12 ? 0: 1) && (unsigned int)v12 >= 0) {
        unsigned long long v14 = param2;
        long long v15 = sub_40D015(param0, param1, (long long)v10, v12);
        char* ptr0 = (char*)((long long)(unsigned int)v15 + param1 + 32L);
        param2 = (unsigned long long)((unsigned long long)*(int*)(param1 + 24L) + param1 + 32L);
        unsigned long long v16 = (unsigned long long)*(int*)&v3;
        unsigned char v17 = *(unsigned char*)(v14 + 32L);
        unsigned long long v18 = param2;
        while(param2 >= (unsigned long long)ptr0 && (unsigned long long)(param1 + 32L) <= (unsigned long long)ptr0) {
            v12 = (unsigned long long)ptr0[0] | ((unsigned long long)((v12 >>> 8L) & 0xffffffffffffffL) << 8);
            if(ptr0[0] == v17 && (unsigned long long)(long long*)(param2 - (long long)ptr0) >= v16) {
                v3 = (unsigned char)v12;
                long long v19 = /*BAD_CALL!*/ →sub_43AA7D();
                v12 = (unsigned long long)v3 | ((unsigned long long)((v12 >>> 8L) & 0xffffffffffffffL) << 8);
                if(!(unsigned int)v19) {
                    return (unsigned long long)v10;
                }
            }
            v12 = (long long)((unsigned int)v12 & 0xffffffc0);
            if(!v13) {
                if((unsigned char)v12 != 128) {
                    ++v10;
                }
                ++ptr0;
            }
            else {
                if((unsigned char)v12 != 128) {
                    --v10;
                }
                --ptr0;
            }
        }
        v10 = -1;
    }
    return (unsigned long long)v10;
}

void sub_42C020() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C059(long long param0) {
    long long v0;
    long long v1 = /*BAD_CALL!*/ sub_4060B0();
    if((unsigned int)v1 != 11) {
        return sub_408998(param0, 0L);
    }
    sub_401D12(v0, 31L);
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C090(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v0;
    long long v6 = v1;
    long long v7 = /*BAD_CALL!*/ sub_404AE7(param0);
    if(!(unsigned int)v7) {
        sub_407963(param0);
    }
    else {
        long long v8 = sub_408A2B(param0, 0L);
        if(((*(int*)v8 >>> 9) & 0x1)) {
            long long v9 = /*BAD_CALL!*/ sub_41DC85(param0);
            if(!(unsigned int)v9) {
                sub_408C36(param0, v8);
                sub_405057(param0, 0L, v2, v3);
            }
        }
    }
    sub_408725(param0, 0L);
    sub_404B20(param0, 1L);
    long long v10 = /*BAD_CALL!*/ sub_41DC85(param0);
    if((unsigned int)v10) {
        sub_407003(param0, 0x60804080L, 10L, v3);
        sub_404FD6(param0, v4, v2, v3);
        sub_403E13(param0, 4261440000L);
    }
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C148(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    long long v0;
    long long v1;
    long long v2;
    long long v3 = v0;
    long long v4 = param3;
    sub_406FB2(param0, param1);
    int* ptr0 = (int*)sub_404A12(param0, 0xffffffffL);
    long long v5 = (long long)*ptr0;
    if(*ptr0 == 8) {
    loc_42C18F:
        sub_4057BB(param0, 0xffffffffL, v5, param3, v1, v2);
        result = 1L;
    }
    else if((unsigned int)v5 == 9 && (unsigned int)(**(unsigned long long*)(ptr0 + 2) >>> 27) == 12) {
        sub_403883(param0, 0xffff006aL);
        goto loc_42C18F;
    }
    else {
        sub_401D12(param3, 0x112L);
        result = 0L;
    }
    return result;
}

void sub_42C1B4() {
    // Decompilation error
}

void sub_42C1E9() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C269(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v0;
    long long v8 = v1;
    long long v9 = v2;
    long long v10 = v3;
    long long v11 = sub_408A0E(param0);
    long long v12 = sub_40314F(v11, v4, v5, v6);
    unsigned int v13 = (unsigned int)v12;
    long long v14 = sub_406077(param0, 0L, 0L, (long long)(unsigned int)v12);
    unsigned int v15 = (unsigned int)v14;
    long long v16 = /*BAD_CALL!*/ sub_40649F(param0, 1L);
    if(!(unsigned int)v16) {
        long long v17 = sub_406077(param0, 1L, 0L, (long long)(unsigned int)v12);
        v13 = (unsigned int)v17;
    }
    if((int)v13 < (int)v15) {
        unsigned int v18 = v15;
        v15 = v13;
        v13 = v18;
    }
    sub_409057(param0, 0xffffffffL, (unsigned long long)v15, (unsigned long long)v13);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C2EB(long long param0, long long param1) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long v8 = v3;
    long long v9 = v0;
    sub_406FB2(param0, param1);
    long long v10 = sub_4089F1(param0, param1);
    long long v11 = sub_40314F(v10, param1, v4, v5);
    int v12 = (unsigned int)v11;
    long long v13 = /*BAD_CALL!*/ sub_406077(param0, 0L, (long long)(0 - (unsigned int)v11), (long long)(unsigned int)v11);
    long long v14 = (unsigned long long)(unsigned int)v13;
    if((unsigned int)v13 < 0) {
        v14 = (unsigned long long)((unsigned int)v11 + (unsigned int)v14);
    }
    long long v15 = /*BAD_CALL!*/ sub_40649F(param0, 1L);
    if(!(unsigned int)v15) {
        long long v16 = sub_406077(param0, 1L, 0L, (long long)((unsigned int)v11 - (unsigned int)v14));
        v12 = (unsigned int)v16 + (unsigned int)v14;
    }
    sub_409057(param0, 0xffffffffL, (unsigned long long)(unsigned int)v14, (unsigned long long)v12);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C375(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v0;
    long long v8 = v1;
    long long v9 = v2;
    long long v10 = v3;
    long long v11 = v4;
    long long v12 = param3;
    long long v13 = sub_408A0E(param0);
    long long v14 = sub_40314F(v13, v5, v6, param3);
    unsigned int v15 = (unsigned int)v14;
    long long v16 = /*BAD_CALL!*/ sub_406077(param0, 0L, (long long)(0 - (unsigned int)v14), (long long)(unsigned int)v14);
    unsigned int v17 = (unsigned int)v16;
    if((unsigned int)v16 >= 0x80000000) {
        v17 = (unsigned int)((unsigned int)v14 + v17);
    }
    long long v18 = /*BAD_CALL!*/ sub_40649F(param0, 1L);
    if(!(unsigned int)v18) {
        long long v19 = /*BAD_CALL!*/ sub_406077(param0, 1L, (long long)(0 - (unsigned int)v14), (long long)(unsigned int)v14);
        v15 = (unsigned int)v19;
        if((unsigned int)v19 >= 0x80000000) {
            v15 = (unsigned int)((unsigned int)v14 + v15);
        }
    }
    sub_409057(param0, 0xffffffffL, (unsigned long long)v17, (unsigned long long)((int)v15 > (int)v17 ? v15: v17));
    return 1L;
}

long long sub_42C40D(long long param0) {
    long long v0;
    long long v1;
    long long v2 = sub_41DCD3(param0);
    sub_408A0E(param0);
    sub_41CB8C(param0, (long long)(unsigned int)v2, v0, v1);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42C43E(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v0;
    long long v9 = v1;
    long long v10 = v2;
    long long v11 = v3;
    long long v12 = v4;
    long long v13 = sub_41DCD3(param0);
    long long v14 = sub_408A0E(param0);
    long long v15 = sub_40314F(v14, v5, v6, v7);
    int v16 = (unsigned int)v15;
    long long v17 = sub_408998(param0, 0L);
    sub_405C43(param0);
    long long v18 = /*BAD_CALL!*/ sub_4064EF();
    if(!(unsigned int)v13 || !(unsigned int)v18) {
        long long v19 = sub_406077(param0, 1L, 0L, v15);
        v16 = (unsigned int)v19;
    }
    long long v20 = sub_42BF57((char*)param0, v14, (unsigned long long)v17, (long long)v16, (long long)(unsigned int)v13);
    sub_406A68(param0, (unsigned long long)(unsigned int)v20);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42C4EA() {
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42CB67() {
}

void sub_42CEE9() {
    // Decompilation error
}

void sub_42CF4B() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D07D(long long param0) {
    sub_408A0E(param0);
    sub_40500F(param0, 0L);
    long long v0 = sub_404AE7(param0);
    sub_408E52(param0, (long long)(unsigned int)v0);
    return 1L;
}

void sub_42D0B2() {
    // Decompilation error
}

void sub_42D0D5() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D19A(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v0;
    long long v5 = v1;
    long long v6 = v3;
    long long v7 = v2;
    long long v8 = sub_408A0E(param0);
    long long v9 = sub_408998(param0, 0L);
    unsigned long long v10 = (unsigned long long)*(int*)(v8 + 24L);
    unsigned long long v11 = (unsigned long long)*(int*)(v9 + 24L);
    long long v12 = →sub_43AA7D();
    long long v13 = 0xffffffffL;
    if((unsigned int)v12 >= 0) {
        if(!(unsigned int)v12) {
            char v14 = v11 == v10;
            if(v11 <= v10 && !v14) {
                v13 = 1L;
                sub_406A68(param0, v13);
                return 1L;
            }
            v13 = (unsigned long long)(0 - (v14 ? 0: 1));
        }
        else {
            v13 = 1L;
        }
    }
    sub_406A68(param0, v13);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D20E(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8;
    long long v9;
    long long v10 = v8;
    long long v11 = v2;
    long long v12 = v7;
    long long v13 = v9;
    long long v14 = v3;
    long long v15 = sub_408A0E(param0);
    long long v16 = sub_42C059(param0);
    long long v17 = sub_41DCD3(param0);
    unsigned long long v18 = (unsigned long long)*(int*)(v16 + 24L);
    long long v19 = /*BAD_CALL!*/ sub_40649F(param0, 1L);
    if(!(unsigned int)v19) {
        long long v20 = sub_40314F(v15, v4, v5, v6);
        long long v21 = sub_406077(param0, 1L, 0L, v20);
        long long v22 = v15 + 32L;
        if((unsigned int)v17) {
            v22 -= v18;
        }
        long long v23 = v22;
        long long v24 = sub_40D015(param0, v15, (unsigned long long)(unsigned int)v21);
        param3 = v22;
        v0 = (unsigned long long)(unsigned int)v24 + param3;
    loc_42D2B0:
        if((unsigned long long)(v15 + 32L) <= (unsigned long long)v0) {
        loc_42D2B9:
            param2 = (long long)*(int*)(v15 + 24L);
            if((unsigned long long)(v0 - (v15 + 32L)) + v18 <= (unsigned long long)param2) {
                long long v25 = /*BAD_CALL!*/ →sub_43AA7D();
                v1 = (unsigned int)v25 ? 0L: 1L;
                sub_406955(param0, v1, param2, param3);
                return 1L;
            }
        }
        v1 = 0L;
    }
    else if((unsigned int)v17) {
        v0 = (unsigned long long)*(int*)(v15 + 24L) - v18 + v15 + 32L;
        goto loc_42D2B0;
    }
    else {
        v0 = v15 + 32L;
        goto loc_42D2B9;
    }
    sub_406955(param0, v1, param2, param3);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D2FE(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v1;
    long long v8 = v2;
    long long v9 = v3;
    long long v10 = v0;
    long long v11 = sub_408A0E(param0);
    long long v12 = sub_42C059(param0);
    long long v13 = sub_40314F(v11, v4, v5, v6);
    long long v14 = sub_406077(param0, 1L, 0L, v13);
    long long v15 = sub_42BF57((char*)param0, v11, (unsigned long long)v12, (long long)(unsigned int)v14, 0L);
    sub_406955(param0, (long long)(~(unsigned int)v15 >>> 31), v5, v6);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D369(long long* param0, long long param1) {
    long long result;
    if(*(int*)param1 == 9) {
        param1 = *(long long*)(param1 + 8L);
        if((unsigned int)(*(int*)param1 >>> 27) == 14) {
            result = sub_40E6B8(*param0, param1);
            if(result && *(int*)result == 8) {
                result = *(long long*)(result + 8L);
                if(!((*(int*)result >>> 9) & 0x1)) {
                    return 0L;
                }
            }
            else {
                result = 0L;
            }
            return result;
        }
    }
    else if(*(int*)param1 == 8) {
        result = *(long long*)(param1 + 8L);
        return (*(int*)result >>> 9) & 0x1 ? result: 0L;
    }
    return 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42D3B3() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D4A7(long long param0) {
    long long v0;
    long long v1 = v0;
    long long v2 = sub_42D369((long long*)(param0 + 64L), *(long long*)(param0 + 104L) - 16L);
    long long result = 0xfffffffaL;
    if(v2) {
        long long v3 = /*BAD_CALL!*/ sub_41DCD3(param0);
        if(!(unsigned int)v3) {
            sub_408C36(param0, v2);
        }
        else {
            sub_407808(param0, v2);
        }
        result = 1L;
    }
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42D54A(long long param0, long long param1, long long param2, long long param3) {
    long long v0;
    long long v1 = v0;
    long long v2 = param3;
    long long v3 = sub_42D369((long long*)(param0 + 64L), *(long long*)(param0 + 104L) - 16L);
    long long result = 0xfffffffaL;
    if(v3) {
        sub_407808(param0, v3);
        result = 1L;
    }
    return result;
}

void sub_42D78B() {
    // Decompilation error
}

long long sub_42D87C(long long param0, long long param1, long long param2) {
    sub_407C63(param0, param1, param2);
    return 1L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E2A2(long long param0) {
    return sub_42DF94(param0, 0L);
}

void sub_42E2A9() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E2BE(int* param0) {
    int v0 = *param0;
    return sub_41D673(&v0);
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E2DB(long long* param0) {
    long long v0 = *param0;
    return sub_41D667(&v0);
}

long long sub_42E330(unsigned long long* param0) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    long long result = sub_42E2BE(*param0);
    *param0 = *param0 + 4L;
    return result;
}

long long sub_42E349(unsigned long long* param0) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    long long result = sub_42E2DB(*param0);
    *param0 = *param0 + 8L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_42E452(unsigned long long* param0, unsigned int param1) {
    long long v0;
    long long v1;
    long long v2 = v1;
    long long v3 = v0;
    long long v4 = sub_41C6FA(param1, *param0);
    *param0 = (long long)(unsigned int)v4 + *param0;
    return (long long)(unsigned int)v4;
}

long long sub_42E46E(char* param0, char* param1) {
    int v0 = ((unsigned int)*param0 * 0x100 + (unsigned int)*(param0 + 1L)) * 0x100;
    int v1 = (unsigned int)*(param0 + 2L) + v0;
    long long v2 = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)((v0 >>> 12) & 0x3f)] | ((unsigned long long)(((unsigned long long)((v0 >>> 12) & 0x3f) >>> 8L) & 0xffffffffffffffL) << 8);
    *param1 = aABCDEFGHIJKLMNO[(unsigned long long)(v0 >>> 18)];
    *(param1 + 1L) = (unsigned char)v2;
    long long result = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)((v1 >>> 6) & 0x3f)] | ((unsigned long long)(((unsigned long long)((v1 >>> 6) & 0x3f) >>> 8L) & 0xffffffffffffffL) << 8);
    *(param1 + 2L) = aABCDEFGHIJKLMNO[(unsigned long long)((v1 >>> 6) & 0x3f)];
    result = (unsigned long long)aABCDEFGHIJKLMNO[(unsigned long long)(v1 & 0x3f)] | ((unsigned long long)((result >>> 8L) & 0xffffffffffffffL) << 8);
    *(param1 + 3L) = aABCDEFGHIJKLMNO[(unsigned long long)(v1 & 0x3f)];
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_42E4BF() {
}

void sub_42E507() {
    // Decompilation error
}

void sub_42E6E3() {
    // Decompilation error
}

void sub_42E8D0() {
    // Decompilation error
}

void sub_42E9AD() {
    // Decompilation error
}

void sub_42EAF5() {
    // Decompilation error
}

void sub_42EB3A() {
    // Decompilation error
}

void sub_42ED6F() {
    // Decompilation error
}

void sub_42F69A(long long param0, long long param1) {
}

void sub_4302DD(long long param0) {
}

void sub_431935() {
    // Decompilation error
}

void sub_431ABE() {
    // Decompilation error
}

long long sub_431C16(long long param0, long long param1, long long param2) {
    long long v0;
    unsigned int v1;
    unsigned int v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v4;
    int v8 = 0;
    long long v9 = v3;
    long long v10 = param0;
    long long v11 = v5;
    long long v12 = v6;
loc_431C2A:
    do {
        param2 = (unsigned long long)*(char*)v10 | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
        if(*(char*)v10) {
            ++v10;
            *(char*)((unsigned long long)*(int*)(param1 + 20L) + *(long long*)(param1 + 24L)) = (unsigned char)param2;
            unsigned int v13 = (unsigned int)((*(int*)(param1 + 32L) - 1) & (*(int*)(param1 + 20L) + 1));
            long long v14 = (unsigned long long)*(int*)(param1 + 16L);
            *(unsigned int*)(param1 + 20L) = v13;
            if((unsigned int)v14 != v13 && *(char*)param1 != 2 && ((*(char*)param1 + 0xff) || (unsigned char)param2 != 10)) {
                ++v8;
                goto loc_431C2A;
            }
            else {
                param2 = *(long long*)(param1 + 48L);
                if(param2) {
                    long long v15 = /*BAD_CALL!*/ param2(v14);
                    v2 = (unsigned int)v15;
                    goto loc_431C8C;
                }
                if((unsigned int)v14 != v13) {
                    ++v8;
                    goto loc_431C2A;
                }
                else {
                    int v16 = /*BAD_CALL!*/ sub_431CDA(param1);
                    v2 = (unsigned int)v16;
                loc_431C8C:
                    v1 = v2;
                    if(v2 != -1) {
                        ++v8;
                        goto loc_431C2A;
                    }
                    else {
                        long long v17 = sub_431E0F(param1);
                        if((unsigned long long)(unsigned int)v17 == gvar_44EBC8) {
                            goto loc_431C2A;
                        }
                        else {
                            v0 = /*BAD_CALL!*/ sub_431E05(param1);
                        }
                    }
                }
            }
            if((unsigned int)v0) {
                unsigned int v18 = (unsigned int)gvar_44EC20;
                *(unsigned int*)(param1 + 8L) = (unsigned int)gvar_44EC20;
                gvar_453D68 = v18;
            }
            return (unsigned long long)v1;
        }
    }
    while(*(char*)v10);
    v1 = (unsigned int)(v8 + 1);
    return (unsigned long long)v1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_431CDA(long long param0) {
    return sub_431CE2(param0, 0xffffffff);
}

void sub_431D03() {
    // Decompilation error
}

long long sub_431E05(long long param0) {
    return *(int*)(param0 + 8L) != -1 ? 0L: 1L;
}

long long sub_431E0F(long long param0) {
    return *(int*)(param0 + 8L) >= 0 ? (unsigned long long)*(int*)(param0 + 8L): 0L;
}

void sub_431EA9() {
    // Decompilation error
}

char* sub_4340B8(char* param0, unsigned long long param1, char* param2) {
    char* result = param0;
    while((unsigned long long)result < param1) {
        char v0 = *param2;
        ++param2;
        *result = v0;
        if(!v0) {
            return result;
        }
        ++result;
    }
    return result;
}

void sub_4340D1() {
    // Decompilation error
}

void sub_434113() {
    // Decompilation error
}

void sub_434660() {
    // Decompilation error
}

unsigned char* sub_43468F(unsigned char* param0, long long* param1, long long param2) {
    unsigned char* ptr0;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5 = v2;
    long long v6 = v3;
    long long v7 = v0;
    char* ptr1 = (char*)param1;
    long long v8 = v1;
    unsigned char* result = param0;
    long long v9 = v4;
    int v10 = 0;
    int v11 = 0;
    while(1) {
        unsigned char* i = (unsigned long long)*ptr1 | ((unsigned long long)(long long*)((long long)(long long*)((long long)i >>> 8L) & 0xffffffffffffffL) << 8);
        if(*ptr1) {
            if((unsigned char)i != 37) {
                param2 = (unsigned long long)*result | ((unsigned long long)((param2 >>> 8L) & 0xffffffffffffffL) << 8);
                if((*(char*)((unsigned long long)(unsigned char)i + 4515120L) & 0x1)) {
                    for(i = (unsigned char*)*result; *result && (*(char*)(i + 4515120L) & 0x1); i = (unsigned char*)*result) {
                        ++result;
                    }
                loc_4346FC:
                    ++ptr1;
                    continue;
                }
                else if((unsigned char)i == (unsigned char)param2) {
                    ++result;
                    goto loc_4346FC;
                }
            }
            else {
                param0 = *(ptr1 + 1L) != 43 ? (unsigned char*)(ptr1 + 1L): (unsigned char*)(ptr1 + 2L);
                long long v12 = (unsigned long long)((unsigned int)((unsigned long long)*param0 | ((unsigned long long)(long long*)((long long)(long long*)((long long)i >>> 8L) & 0xffffffffffffffL) << 8)) - 48);
                if((unsigned char)v12 <= 9) {
                    sub_43814E();
                    param0 = ptr0;
                }
                ptr1 = (char*)(param0 + 1L);
                param2 = (unsigned long long)((unsigned int)((unsigned long long)*param0 | ((unsigned long long)((v12 >>> 8L) & 0xffffffffffffffL) << 8)) - 37);
                if((unsigned char)param2 <= 84) {
                    param2 = (unsigned long long)(unsigned char)param2;
                    jump *(long long*)(param2 * 8L + 4483824L);
                    if(*result == 37) {
                        result = i;
                        continue;
                    }
                }
            }
            result = NULL;
        }
        return result;
    }
    return result;
}

unsigned long long sub_434FD0(long long param0, long long param1, unsigned long long param2) {
    unsigned long long v0 = (unsigned int)param1 & 0xF ? (unsigned long long)((0 - ((unsigned int)param1 + 16)) & 0xF): (unsigned long long)((unsigned int)param1 & 0xF);
    long long v1 = v0 + param1;
    unsigned long long v2 = param2 - v0;
    *(long long*)(param0 + 40L) = v1;
    *(unsigned long long*)(param0 + 16L) = v2;
    *(long long*)(v1 + 8L) = v2 | 0x1L;
    unsigned long long result = gvar_4524C0;
    *(long long*)(param2 + param1 + 8L) = 80L;
    *(unsigned long long*)(param0 + 48L) = result;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_435017(long long param0) {
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6 = v1;
    long long v7 = v2;
    long long result = 0L;
    long long v8 = v5;
    long long v9 = v3;
    long long v10 = param0;
    long long v11 = v4;
    long long* ptr0 = *(unsigned long long*)(param0 + 0x388L);
    char v12 = ptr0 ? 0: 1;
    if(!v12) {
        int v13 = *(int*)(ptr0 + 3);
        char v14 = (unsigned char)v13 & 0x1 ? 0: 1;
        if(!v14) {
            int v15 = v13 & 0x8;
            if(!(v13 & 0x8)) {
                param0 = *ptr0;
                unsigned long long v16 = (unsigned long long)(((unsigned int)param0 & 0xF ? (unsigned long long)((0 - ((unsigned int)param0 + 16)) & 0xF): (unsigned long long)((unsigned int)param0 & 0xF)) + param0);
                result = 0L;
                long long v17 = *(long long*)(v16 + 8L);
                if(!((unsigned long long)((unsigned int)v17 & 0x3) - 1L)) {
                    result = *(ptr0 + 1);
                    unsigned long long v18 = (unsigned long long)(v17 & 0xfffffffffffffff8L);
                    long long v19 = (long long)(v16 + v18);
                    long long v20 = param0 + result - 80L;
                    if((unsigned long long)v19 >= (unsigned long long)v20) {
                        long long v21 = *(ptr0 + 2);
                        if(*(long long*)(v10 + 32L) == v16) {
                            *(long long*)(v10 + 32L) = 0L;
                            *(long long*)(v10 + 8L) = 0L;
                        }
                        else {
                            long long v22 = *(long long*)(v16 + 24L);
                            long long v23 = *(long long*)(v16 + 48L);
                            if(v22 != v16) {
                                v20 = *(long long*)(v16 + 16L);
                                *(long long*)(v20 + 24L) = v22;
                                *(long long*)(v22 + 16L) = v20;
                            }
                            else {
                                v22 = *(long long*)(v22 + 40L);
                                v19 = (long long)(v16 + 40L);
                                if(!v22) {
                                    v22 = *(long long*)(v16 + 32L);
                                    if(v22) {
                                        v19 = (long long)(v16 + 32L);
                                        goto loc_4350F9;
                                    }
                                }
                                else {
                                loc_4350F9:
                                    v20 = v22;
                                loc_4350FC:
                                    do {
                                        v0 = v19;
                                        v22 = v20;
                                        v19 = v20 + 40L;
                                        v20 = *(long long*)(v20 + 40L);
                                        if(v20) {
                                            goto loc_4350FC;
                                        }
                                        else {
                                            v20 = *(long long*)(v22 + 32L);
                                            v19 = v22 + 32L;
                                        }
                                    }
                                    while(v20);
                                    *(long long*)v0 = 0L;
                                }
                            }
                            if(v23) {
                                v19 = (long long)*(int*)(v16 + 56L);
                                v20 = (long long)*(int*)(v16 + 56L) * 8L + v10;
                                if(*(long long*)(v20 + 600L) == v16) {
                                    *(long long*)(v20 + 600L) = v22;
                                    if(v22) {
                                        goto loc_435147;
                                    }
                                    else {
                                        *(int*)(v10 + 4L) = (__rol__(-2, v19 & 0x1fL)) & *(int*)(v10 + 4L);
                                    }
                                }
                                else {
                                    if(*(long long*)(v23 + 32L) == v16) {
                                        *(long long*)(v23 + 32L) = v22;
                                    }
                                    else {
                                        *(long long*)(v23 + 40L) = v22;
                                    }
                                    if(v22) {
                                    loc_435147:
                                        long long v24 = *(long long*)(v16 + 32L);
                                        *(long long*)(v22 + 48L) = v23;
                                        if(v24) {
                                            *(long long*)(v22 + 32L) = v24;
                                            *(long long*)(v24 + 48L) = v22;
                                        }
                                        v20 = *(long long*)(v16 + 40L);
                                        if(v20) {
                                            *(long long*)(v22 + 40L) = v20;
                                            *(long long*)(v20 + 48L) = v22;
                                        }
                                    }
                                }
                            }
                        }
                        long long v25 = v21;
                        long long v26 = /*BAD_CALL!*/ sub_437254(param0, result, v20, v19);
                        int v27 = (unsigned int)v26;
                        if(!v27) {
                            long long v28 = v25;
                            *(long long*)(v10 + 856L) = *(long long*)(v10 + 856L) - result;
                            *(long long*)(v10 + 0x388L) = v28;
                        }
                        else {
                            long long v29 = v18 >>> 8;
                            unsigned int v30 = (unsigned int)v29;
                            if((unsigned int)v29) {
                                v30 = 31;
                                if((unsigned int)v29 <= 0xffff) {
                                    if((unsigned int)v29 != 0) {
                                        int i;
                                        for(i = 31; !((unsigned int)v29 >>> i); --i) {
                                        }
                                        v29 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v29 >>> 32L) << 32);
                                    }
                                    v30 = (unsigned int)((31 - (unsigned int)((unsigned int)v29 ^ 0x1f)) * 2 + ((unsigned int)(long long)(v18 >>> ((unsigned long long)(38 - ((unsigned int)v29 ^ 0x1f)) & 0x3fL)) & 0x1));
                                }
                            }
                            int v31 = *(int*)(v10 + 4L);
                            int v32 = 1 << ((unsigned long long)v30 & 0x1fL);
                            *(unsigned int*)(v16 + 56L) = v30;
                            *(long long*)(v16 + 40L) = 0L;
                            v19 = (long long)v32;
                            *(long long*)(v16 + 32L) = 0L;
                            long long v33 = (long long)v30;
                            if(!(v31 & v32)) {
                                *(int*)(v10 + 4L) = (unsigned int)v19 | v31;
                                *(unsigned long long*)(v33 * 8L + v10 + 600L) = v16;
                                *(long long*)(v16 + 48L) = v33 * 8L + v10 + 600L;
                            loc_435290:
                                *(unsigned long long*)(v16 + 24L) = v16;
                                *(unsigned long long*)(v16 + 16L) = v16;
                            }
                            else {
                                v20 = *(long long*)(v33 * 8L + v10 + 600L);
                                if(v30 != 31) {
                                    v15 = 57 - (v30 >>> 1);
                                }
                                v19 = (long long)(v18 << ((unsigned long long)v15 & 0x3fL));
                                while((unsigned long long)(*(long long*)(v20 + 8L) & 0xfffffffffffffff8L) != v18) {
                                    long long v34 = v19;
                                    v19 *= 2L;
                                    long long v35 = 4L - (v34 >> 63);
                                    v33 = *(long long*)(v35 * 8L + v20);
                                    if(v33) {
                                        v20 = v33;
                                    }
                                    else {
                                        *(unsigned long long*)(v35 * 8L + v20) = v16;
                                        *(long long*)(v16 + 48L) = v20;
                                        goto loc_435290;
                                    }
                                }
                                long long v36 = *(long long*)(v20 + 16L);
                                *(unsigned long long*)(v36 + 24L) = v16;
                                *(unsigned long long*)(v20 + 16L) = v16;
                                *(long long*)(v16 + 16L) = v36;
                                *(long long*)(v16 + 24L) = v20;
                                *(long long*)(v16 + 48L) = 0L;
                            }
                            result = 0L;
                            *(long long*)(v10 + 56L) = 128L;
                            return result;
                        }
                    }
                    else {
                        result = 0L;
                    }
                }
            }
        }
    }
    *(long long*)(v10 + 56L) = 128L;
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4352D4(long long param0, unsigned long long param1, long long param2, long long param3, unsigned long long param4, unsigned long long param5) {
    unsigned long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7 = v2;
    long long v8 = v1;
    long long v9 = v5;
    long long v10 = v6;
    if(param1 <= 18446744073709551487L) {
        long long v11 = *(long long*)(param0 + 40L);
        if(!v11) {
            v6 = 0L;
            return v6 ? 1L: 0L;
        }
        unsigned long long v12 = *(unsigned long long*)(param0 + 16L);
        if(param1 + 80L < v12) {
            unsigned long long* ptr0 = (unsigned long long*)(param0 + 888L);
            unsigned long long* ptr1 = (unsigned long long*)(param0 + 888L);
            do {
                v0 = *ptr1;
                if((unsigned long long)v11 >= v0) {
                    param5 = *(ptr1 + 1);
                    param4 = v0 + param5;
                    if((unsigned long long)v11 >= param4) {
                        ptr1 = *(ptr1 + 2);
                    }
                }
                else {
                    ptr1 = *(ptr1 + 2);
                }
                goto loc_435341;
            }
            while(ptr1);
            ud2();
        loc_435341:
            long long v13 = (unsigned long long)*(int*)(ptr1 + 3);
            if(((unsigned char)v13 & 0x8) || !((unsigned char)v13 & 0x1)) {
                goto loc_435308;
            }
            else {
                unsigned long long v14 = gvar_4524B0;
                v6 = ((unsigned long long)(v12 + v14 - 81L - param1) / v14 - 1L) * v14;
                if((unsigned long long)v6 > param5) {
                    goto loc_435308;
                }
                else {
                    while(1) {
                        if((unsigned long long)ptr0 >= v0 && (unsigned long long)ptr0 < param4) {
                            goto loc_435308;
                        }
                        else {
                            ptr0 = *(ptr0 + 2);
                            if(!ptr0) {
                                unsigned long long v15 = param5 - v6;
                                long long v16 = sub_4378A4();
                                if(!(v16 + 1L)) {
                                    long long v17 = /*BAD_CALL!*/ sub_437254(*ptr1 + v15, v6, v4, v3);
                                    if((unsigned int)v17) {
                                        goto loc_435308;
                                    }
                                }
                                if(v6) {
                                    *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) - v6;
                                    unsigned long long v18 = *(unsigned long long*)(param0 + 16L);
                                    *(long long*)(param0 + 856L) = *(long long*)(param0 + 856L) - v6;
                                    sub_434FD0(param0, *(long long*)(param0 + 40L), v18 - v6);
                                }
                                break;
                            }
                        }
                    }
                }
            }
        }
        else {
        loc_435308:
            v6 = 0L;
        }
        v11 = sub_435017(param0);
        v6 += v11;
        if(!v6) {
            if(*(unsigned long long*)(param0 + 16L) <= (unsigned long long)*(long long*)(param0 + 48L)) {
                v6 = 0L;
                return v6 ? 1L: 0L;
            }
            *(long long*)(param0 + 48L) = -1L;
        }
    }
    else {
        v6 = 0L;
    }
    return v6 ? 1L: 0L;
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_435410(long long param0, long long param1, long long param2, long long param3) {
    long long* ptr0;
    long long v0;
    long long* ptr1;
    long long* ptr2;
    long long v1;
    long long v2;
    long long v3;
    long long v4 = v2;
    long long v5 = v3;
    long long v6 = param0;
    param0 = param1;
    long long result = *(long long*)(param0 + 8L);
    param1 += param2;
    if(!((unsigned char)result & 0x1)) {
        v1 = *(long long*)param0;
        param0 -= v1;
        if((unsigned char)result & 0x3) {
            param2 += v1;
            if(*(long long*)(v6 + 32L) == param0) {
                result = *(long long*)(param1 + 8L);
                if(((unsigned int)result & 0x3) == 3) {
                    *(long long*)(v6 + 8L) = param2;
                    *(long long*)(param1 + 8L) = result & 0xfffffffffffffffeL;
                    result = param2 | 0x1L;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)param1 = param2;
                    return result;
                }
                goto loc_43559C;
            }
            else {
                long long v7 = v1;
                result = *(long long*)(param0 + 24L);
                param3 = v7 >>> 3;
            }
            if((unsigned long long)v1 <= 0xffL) {
                unsigned long long v8 = *(unsigned long long*)(param0 + 16L);
                char v9 = result == v8;
                if(v9) {
                    result = (long long)__rol__(-2, param3 & 0x1fL);
                    *(int*)v6 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v6;
                }
                else {
                    *(long long*)(v8 + 24L) = result;
                    *(unsigned long long*)(result + 16L) = v8;
                }
            }
            else {
                char v10 = result == param0;
                long long v11 = *(long long*)(param0 + 48L);
                if(!v10) {
                    param3 = *(long long*)(param0 + 16L);
                    *(long long*)(param3 + 24L) = result;
                    *(long long*)(result + 16L) = param3;
                }
                else {
                    result = *(long long*)(param0 + 40L);
                    ptr2 = (long long*)(param0 + 40L);
                    if(!result) {
                        result = *(long long*)(param0 + 32L);
                        if(result) {
                            ptr2 = (long long*)(param0 + 32L);
                            goto loc_4354CD;
                        }
                    }
                    else {
                    loc_4354CD:
                        param3 = result;
                    loc_4354D0:
                        do {
                            ptr1 = ptr2;
                            result = param3;
                            ptr2 = (long long*)(param3 + 40L);
                            param3 = *(long long*)(param3 + 40L);
                            if(param3) {
                                goto loc_4354D0;
                            }
                            else {
                                param3 = *(long long*)(result + 32L);
                                ptr2 = (long long*)(result + 32L);
                            }
                        }
                        while(param3);
                        *ptr1 = 0L;
                    }
                }
                if(v11) {
                    long long v12 = (long long)*(int*)(param0 + 56L);
                    param3 = (long long)*(int*)(param0 + 56L);
                    ptr2 = (long long*)(v12 * 8L + v6);
                    if(*(ptr2 + 75) == param0) {
                        char v13 = result ? 0: 1;
                        *(ptr2 + 75) = result;
                        if(!v13) {
                            goto loc_435520;
                        }
                        else {
                            result = (long long)__rol__(-2, param3 & 0x1fL);
                            *(int*)(v6 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v6 + 4L);
                        }
                    }
                    else {
                        if(*(long long*)(v11 + 32L) == param0) {
                            *(long long*)(v11 + 32L) = result;
                        }
                        else {
                            *(long long*)(v11 + 40L) = result;
                        }
                        if(result) {
                        loc_435520:
                            long long v14 = *(long long*)(param0 + 32L);
                            *(long long*)(result + 48L) = v11;
                            if(v14) {
                                *(long long*)(result + 32L) = v14;
                                *(long long*)(v14 + 48L) = result;
                            }
                            param3 = *(long long*)(param0 + 40L);
                            if(param3) {
                                *(long long*)(result + 40L) = param3;
                                *(long long*)(param3 + 48L) = result;
                            }
                        }
                    }
                }
            }
            goto loc_43559C;
        }
        else {
            v0 = param2 + v1 + 32L;
            result = sub_437254(param0, v0, param2, param3);
        }
        if(!(unsigned int)result) {
            *(long long*)(v6 + 856L) = *(long long*)(v6 + 856L) - v0;
            return result;
        }
    }
    else {
    loc_43559C:
        v1 = *(long long*)(param1 + 8L);
        if(!((unsigned char)v1 & 0x2)) {
            char v15 = *(long long*)(v6 + 40L) == param1;
            ptr1 = *(unsigned long long*)(v6 + 32L);
            if(!v15) {
                if(param1 == ptr1) {
                    param2 += *(long long*)(v6 + 8L);
                    *(long long*)(v6 + 32L) = param0;
                    *(long long*)(v6 + 8L) = param2;
                    result = param2 | 0x1L;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + param0) = param2;
                }
                else {
                    v1 &= -8L;
                    long long v16 = *(long long*)(param1 + 24L);
                    long long v17 = v1;
                    param2 += v1;
                    param3 = v17 >>> 3;
                    if((unsigned long long)v1 <= 248L) {
                        param1 = *(long long*)(param1 + 16L);
                        if(v16 == param1) {
                            *(int*)v6 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v6;
                        }
                        else {
                            *(long long*)(param1 + 24L) = v16;
                            *(long long*)(v16 + 16L) = param1;
                        }
                    }
                    else {
                        v1 = *(long long*)(param1 + 48L);
                        if(v16 != param1) {
                            param3 = *(long long*)(param1 + 16L);
                            *(long long*)(param3 + 24L) = v16;
                            *(long long*)(v16 + 16L) = param3;
                        }
                        else {
                            v16 = *(long long*)(param1 + 40L);
                            ptr2 = (long long*)(param1 + 40L);
                            if(!v16) {
                                v16 = *(long long*)(param1 + 32L);
                                if(v16) {
                                    ptr2 = (long long*)(param1 + 32L);
                                    goto loc_43567B;
                                }
                            }
                            else {
                            loc_43567B:
                                param3 = v16;
                            loc_43567E:
                                do {
                                    ptr0 = ptr2;
                                    v16 = param3;
                                    ptr2 = (long long*)(param3 + 40L);
                                    param3 = *(long long*)(param3 + 40L);
                                    if(param3) {
                                        goto loc_43567E;
                                    }
                                    else {
                                        param3 = *(long long*)(v16 + 32L);
                                        ptr2 = (long long*)(v16 + 32L);
                                    }
                                }
                                while(param3);
                                *ptr0 = 0L;
                            }
                        }
                        if(v1) {
                            param3 = (long long)*(int*)(param1 + 56L);
                            ptr2 = (long long*)((long long)*(int*)(param1 + 56L) * 8L + v6);
                            if(*(ptr2 + 75) == param1) {
                                *(ptr2 + 75) = v16;
                                if(v16) {
                                    goto loc_4356CA;
                                }
                                else {
                                    *(int*)(v6 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v6 + 4L);
                                }
                            }
                            else {
                                if(*(long long*)(v1 + 32L) == param1) {
                                    *(long long*)(v1 + 32L) = v16;
                                }
                                else {
                                    *(long long*)(v1 + 40L) = v16;
                                }
                                if(v16) {
                                loc_4356CA:
                                    long long v18 = *(long long*)(param1 + 32L);
                                    *(long long*)(v16 + 48L) = v1;
                                    if(v18) {
                                        *(long long*)(v16 + 32L) = v18;
                                        *(long long*)(v18 + 48L) = v16;
                                    }
                                    param3 = *(long long*)(param1 + 40L);
                                    if(param3) {
                                        *(long long*)(v16 + 40L) = param3;
                                        *(long long*)(param3 + 48L) = v16;
                                    }
                                }
                            }
                        }
                    }
                    result = param2 | 0x1L;
                    *(long long*)(param0 + 8L) = param2 | 0x1L;
                    *(long long*)(param2 + param0) = param2;
                    if(param0 != ptr1) {
                        goto loc_43574C;
                    }
                    else {
                        *(long long*)(v6 + 8L) = param2;
                    }
                }
                return result;
            }
            long long v19 = *(long long*)(v6 + 16L) + param2;
            *(long long*)(v6 + 40L) = param0;
            *(long long*)(v6 + 16L) = v19;
            *(long long*)(param0 + 8L) = v19 | 0x1L;
            if(param0 == ptr1) {
                *(long long*)(v6 + 32L) = 0L;
                *(long long*)(v6 + 8L) = 0L;
                return result;
            }
        }
        else {
            *(long long*)(param1 + 8L) = v1 & 0xfffffffffffffffeL;
            *(long long*)(param0 + 8L) = param2 | 0x1L;
            *(long long*)(param2 + param0) = param2;
        loc_43574C:
            param3 = param2 >>> 3;
            if((unsigned long long)param2 <= 0xffL) {
                int v20 = *(int*)v6;
                param1 = (long long)(1 << (param3 & 0x1fL));
                result = (unsigned long long)((unsigned int)param3 * 2) * 8L + v6 + 72L;
                if(!((unsigned int)param1 & v20)) {
                    *(int*)v6 = (unsigned int)param1 | v20;
                    param2 = result;
                }
                else {
                    param2 = *(long long*)(result + 16L);
                }
                *(long long*)(result + 16L) = param0;
                *(long long*)(param2 + 24L) = param0;
                *(long long*)(param0 + 16L) = param2;
                *(long long*)(param0 + 24L) = result;
            }
            else {
                long long v21 = param2 >>> 8;
                unsigned int v22 = (unsigned int)v21;
                if((unsigned int)v21) {
                    v22 = 31;
                    if((unsigned int)v21 <= 0xffff) {
                        if((unsigned int)v21 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)v21 >>> i); --i) {
                            }
                            v21 = (unsigned long long)i | ((unsigned long long)(unsigned int)(v21 >>> 32L) << 32);
                        }
                        v22 = (unsigned int)((31 - (unsigned int)((unsigned int)v21 ^ 0x1f)) * 2 + ((unsigned int)(long long*)(param2 >>> ((unsigned long long)(38 - ((unsigned int)v21 ^ 0x1f)) & 0x3fL)) & 0x1));
                    }
                }
                int v23 = *(int*)(v6 + 4L);
                int v24 = 1 << ((unsigned long long)v22 & 0x1fL);
                *(unsigned int*)(param0 + 56L) = v22;
                *(long long*)(param0 + 40L) = 0L;
                param3 = (long long)v24;
                *(long long*)(param0 + 32L) = 0L;
                v1 = (long long)v22;
                if(!(v23 & v24)) {
                    result = v1 * 8L + v6 + 600L;
                    *(int*)(v6 + 4L) = (unsigned int)param3 | v23;
                    *(long long*)(v1 * 8L + v6 + 600L) = param0;
                    *(long long*)(param0 + 48L) = result;
                loc_435861:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v25 = 0L;
                    param1 = *(long long*)(v1 * 8L + v6 + 600L);
                    if(v22 != 31) {
                        v25 = (unsigned long long)(57 - (v22 >>> 1));
                    }
                    param3 = param2 << (v25 & 0x3fL);
                    while((unsigned long long)(*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != param2) {
                        long long v26 = param3;
                        param3 *= 2L;
                        result = 4L - (v26 >> 63);
                        v1 = *(long long*)(result * 8L + param1);
                        if(v1) {
                            param1 = v1;
                        }
                        else {
                            *(long long*)(result * 8L + param1) = param0;
                            *(long long*)(param0 + 48L) = param1;
                            goto loc_435861;
                        }
                    }
                    result = *(long long*)(param1 + 16L);
                    *(long long*)(result + 24L) = param0;
                    *(long long*)(param1 + 16L) = param0;
                    *(long long*)(param0 + 16L) = result;
                    *(long long*)(param0 + 24L) = param1;
                    *(long long*)(param0 + 48L) = 0L;
                    return result;
                }
            }
        }
    }
    return result;
}

void sub_43588C() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_436810(long long param0, unsigned long long param1, long long param2, long long param3, long long param4, unsigned long long param5) {
    int v0;
    long long v1;
    unsigned long long v2;
    long long v3;
    unsigned long long v4;
    unsigned long long v5;
    long long v6;
    long long v7;
    if(param0) {
        long long v8 = param0;
        param0 -= 16L;
        long long v9 = v7;
        long long v10 = (long long)param1;
        long long v11 = *(long long*)(v8 - 8L);
        void* ptr0 = (void*)(*(long long*)(v8 - 8L) & 0xfffffffffffffff8L);
        char v12 = (unsigned char)v11 & 0x1 ? 0: 1;
        param1 = (unsigned long long)((long long)ptr0 + param0);
        if(!v12) {
        loc_4369BF:
            v4 = *(unsigned long long*)(param1 + 8L);
            if(!((unsigned char)v4 & 0x2)) {
                char v13 = gvar_452108 == param1;
                v2 = gvar_452100;
                if(v13) {
                    long long* ptr1 = (long long*)(gvar_4520F0 + (long long)ptr0);
                    gvar_452108 = param0;
                    gvar_4520F0 = ptr1;
                    v6 = (long long)((long long)ptr1 | 0x1L);
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr1 | 0x1L);
                    if(param0 == v2) {
                        gvar_452100 = 0L;
                        gvar_4520E8 = 0L;
                    }
                    if(gvar_452110 >= (unsigned long long)ptr1) {
                        goto loc_436D13;
                    }
                    else {
                        sub_4352D4(&gvar_4520E0, 0L, v6, v10, v4, param5);
                        return;
                    }
                }
                else if(param1 == v2) {
                    long long* ptr2 = (long long*)(gvar_4520E8 + (long long)ptr0);
                    gvar_452100 = param0;
                    gvar_4520E8 = ptr2;
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr2 | 0x1L);
                    *(unsigned long long*)((long long)ptr2 + param0) = ptr2;
                    goto loc_436D13;
                }
                else {
                    v4 &= -8L;
                    long long v14 = *(long long*)(param1 + 24L);
                    unsigned long long v15 = v4;
                    ptr0 = (void*)((long long)ptr0 + v4);
                    v11 = (long long)(v15 >>> 3);
                    if(v4 <= 248L) {
                        param1 = *(unsigned long long*)(param1 + 16L);
                        if(v14 == param1) {
                            gvar_4520E0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4520E0);
                        }
                        else {
                            *(long long*)(param1 + 24L) = v14;
                            *(unsigned long long*)(v14 + 16L) = param1;
                        }
                    }
                    else {
                        char v16 = v14 == param1;
                        v4 = *(unsigned long long*)(param1 + 48L);
                        if(!v16) {
                            v11 = *(long long*)(param1 + 16L);
                            *(long long*)(v11 + 24L) = v14;
                            *(long long*)(v14 + 16L) = v11;
                        }
                        else {
                            v14 = *(long long*)(param1 + 40L);
                            param5 = param1 + 40L;
                            if(!v14) {
                                v14 = *(long long*)(param1 + 32L);
                                if(v14) {
                                    param5 = param1 + 32L;
                                    goto loc_436AD6;
                                }
                            }
                            else {
                            loc_436AD6:
                                v11 = v14;
                            loc_436AD9:
                                do {
                                    v5 = param5;
                                    v14 = v11;
                                    param5 = (unsigned long long)(v11 + 40L);
                                    v11 = *(long long*)(v11 + 40L);
                                    if(v11) {
                                        goto loc_436AD9;
                                    }
                                    else {
                                        v11 = *(long long*)(v14 + 32L);
                                        param5 = (unsigned long long)(v14 + 32L);
                                    }
                                }
                                while(v11);
                                *(long long*)v5 = 0L;
                            }
                        }
                        if(v4) {
                            param5 = (unsigned long long)*(int*)(param1 + 56L);
                            v5 = param5 + 74L;
                            v11 = (long long)param5;
                            if(*(unsigned long long*)(param5 * 8L + (long long)&gvar_452338) == param1) {
                                *(long long*)(v5 * 8L + (long long)&gvar_4520E8) = v14;
                                if(v14) {
                                    goto loc_436B27;
                                }
                                else {
                                    gvar_4520E4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4520E4);
                                }
                            }
                            else {
                                if(*(long long*)(v4 + 32L) == param1) {
                                    *(long long*)(v4 + 32L) = v14;
                                }
                                else {
                                    *(long long*)(v4 + 40L) = v14;
                                }
                                if(v14) {
                                loc_436B27:
                                    long long v17 = *(long long*)(param1 + 32L);
                                    *(unsigned long long*)(v14 + 48L) = v4;
                                    if(v17) {
                                        *(long long*)(v14 + 32L) = v17;
                                        *(long long*)(v17 + 48L) = v14;
                                    }
                                    v11 = *(long long*)(param1 + 40L);
                                    if(v11) {
                                        *(long long*)(v14 + 40L) = v11;
                                        *(long long*)(v11 + 48L) = v14;
                                    }
                                }
                            }
                        }
                    }
                    *(long long*)(param0 + 8L) = (long long)((long long)ptr0 | 0x1L);
                    *(void**)((long long)ptr0 + param0) = ptr0;
                    if(param0 == v2) {
                        gvar_4520E8 = ptr0;
                        goto loc_436D13;
                    }
                }
            }
            else {
                *(unsigned long long*)(param1 + 8L) = v4 & 0xfffffffffffffffeL;
                *(unsigned long long*)(param0 + 8L) = (long long*)((long long)ptr0 | 0x1L);
                *(void**)((long long)ptr0 + param0) = ptr0;
            }
            v11 = (long long)((long long)ptr0 >>> 3);
            if((unsigned long long)ptr0 <= 0xffL) {
                unsigned int v18 = gvar_4520E0;
                param1 = (unsigned long long)(1 << (v11 & 0x1fL));
                long long v19 = (unsigned long long)((unsigned int)v11 * 2) * 8L + &gvar_452128;
                if(!((unsigned int)param1 & v18)) {
                    gvar_4520E0 = (unsigned int)((unsigned int)param1 | v18);
                    v6 = v19;
                }
                else {
                    v6 = *(long long*)(v19 + 16L);
                }
                *(long long*)(v19 + 16L) = param0;
                *(long long*)(v6 + 24L) = param0;
                *(long long*)(param0 + 16L) = v6;
                *(long long*)(param0 + 24L) = v19;
            }
            else {
                long long* ptr3 = (long long*)((long long)ptr0 >>> 8);
                v6 = (long long)(unsigned int)ptr3;
                if((unsigned int)ptr3) {
                    v6 = 31L;
                    if((unsigned int)ptr3 <= 0xffff) {
                        if((unsigned int)ptr3 != 0) {
                            int i;
                            for(i = 31; !((unsigned int)ptr3 >>> i); --i) {
                            }
                            ptr3 = (unsigned long long)i | ((unsigned long long)(unsigned int)(long long*)((long long)ptr3 >>> 32L) << 32);
                        }
                        v6 = (long long)((31 - (unsigned int)((unsigned int)ptr3 ^ 0x1f)) * 2 + ((unsigned int)(long long*)((long long)ptr0 >>> ((unsigned long long)(38 - ((unsigned int)ptr3 ^ 0x1f)) & 0x3fL)) & 0x1));
                    }
                }
                unsigned int v20 = gvar_4520E4;
                int v21 = 1 << ((unsigned long long)(unsigned int)v6 & 0x1fL);
                *(int*)(param0 + 56L) = (unsigned int)v6;
                *(long long*)(param0 + 40L) = 0L;
                v11 = (long long)v21;
                *(long long*)(param0 + 32L) = 0L;
                v4 = (unsigned long long)(unsigned int)v6;
                if(!(v20 & v21)) {
                    *(long long*)(v4 * 8L + (long long)&gvar_452338) = param0;
                    gvar_4520E4 = (unsigned int)((unsigned int)v11 | v20);
                    *(long long*)(param0 + 48L) = v4 * 8L + &gvar_452338;
                loc_436CD4:
                    *(long long*)(param0 + 24L) = param0;
                    *(long long*)(param0 + 16L) = param0;
                }
                else {
                    long long v22 = 0L;
                    param1 = *(unsigned long long*)(v4 * 8L + (long long)&gvar_452338);
                    if((unsigned int)v6 != 31) {
                        v22 = (unsigned long long)(57 - (unsigned int)((unsigned int)v6 >>> 1));
                    }
                    v11 = (long long)((long long)ptr0 << (v22 & 0x3fL));
                    while((*(long long*)(param1 + 8L) & 0xfffffffffffffff8L) != ptr0) {
                        long long v23 = v11;
                        v11 *= 2L;
                        v6 = 4L - (v23 >> 63);
                        v4 = *(unsigned long long*)(v6 * 8L + param1);
                        if(v4) {
                            param1 = v4;
                        }
                        else {
                            *(long long*)(v6 * 8L + param1) = param0;
                            *(unsigned long long*)(param0 + 48L) = param1;
                            goto loc_436CD4;
                        }
                    }
                    long long v24 = *(long long*)(param1 + 16L);
                    *(long long*)(v24 + 24L) = param0;
                    *(long long*)(param1 + 16L) = param0;
                    *(long long*)(param0 + 16L) = v24;
                    *(unsigned long long*)(param0 + 24L) = param1;
                    *(long long*)(param0 + 48L) = 0L;
                }
                --gvar_452118;
                if(!gvar_452118) {
                    sub_435017(&gvar_4520E0);
                    return;
                }
            }
            goto loc_436D13;
        }
        else {
            v4 = *(unsigned long long*)(v8 - 16L);
            param0 -= v4;
            v11 = (unsigned long long)((unsigned char)v11 & 0x3) | ((unsigned long long)((v11 >>> 8L) & 0xffffffffffffffL) << 8);
            if((unsigned char)v11) {
                ptr0 = (void*)((long long)ptr0 + v4);
                if(gvar_452100 == param0) {
                    long long v25 = *(long long*)(param1 + 8L);
                    if(((unsigned int)*(long long*)(param1 + 8L) & 0x3) == 3) {
                        gvar_4520E8 = ptr0;
                        *(long long*)(param1 + 8L) = v25 & 0xfffffffffffffffeL;
                        *(long long*)(param0 + 8L) = (long long)((long long)ptr0 | 0x1L);
                        *(void**)param1 = ptr0;
                        goto loc_436D13;
                    }
                    else {
                        goto loc_4369BF;
                    }
                }
                else {
                    unsigned long long v26 = v4;
                    v3 = *(long long*)(param0 + 24L);
                    v11 = (long long)(v26 >>> 3);
                }
                if(v4 <= 0xffL) {
                    unsigned long long v27 = *(unsigned long long*)(param0 + 16L);
                    char v28 = v3 == v27;
                    if(v28) {
                        gvar_4520E0 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4520E0);
                    }
                    else {
                        *(long long*)(v27 + 24L) = v3;
                        *(unsigned long long*)(v3 + 16L) = v27;
                    }
                }
                else {
                    char v29 = v3 == param0;
                    long long v30 = *(long long*)(param0 + 48L);
                    if(!v29) {
                        v11 = *(long long*)(param0 + 16L);
                        *(long long*)(v11 + 24L) = v3;
                        *(long long*)(v3 + 16L) = v11;
                    }
                    else {
                        v3 = *(long long*)(param0 + 40L);
                        param5 = (unsigned long long)(param0 + 40L);
                        if(!v3) {
                            v3 = *(long long*)(param0 + 32L);
                            if(v3) {
                                param5 = (unsigned long long)(param0 + 32L);
                                goto loc_4368E8;
                            }
                        }
                        else {
                        loc_4368E8:
                            v11 = v3;
                        loc_4368EB:
                            do {
                                v2 = param5;
                                v3 = v11;
                                param5 = (unsigned long long)(v11 + 40L);
                                v11 = *(long long*)(v11 + 40L);
                                if(v11) {
                                    goto loc_4368EB;
                                }
                                else {
                                    v11 = *(long long*)(v3 + 32L);
                                    param5 = (unsigned long long)(v3 + 32L);
                                }
                            }
                            while(v11);
                            *(long long*)v2 = 0L;
                        }
                    }
                    if(v30) {
                        param5 = (unsigned long long)*(int*)(param0 + 56L);
                        char v31 = *(unsigned long long*)(param5 * 8L + (long long)&gvar_452338) == param0;
                        v2 = param5 + 74L;
                        v11 = (long long)param5;
                        if(v31) {
                            char v32 = v3 ? 0: 1;
                            *(long long*)(v2 * 8L + (long long)&gvar_4520E8) = v3;
                            if(!v32) {
                                goto loc_43693D;
                            }
                            else {
                                gvar_4520E4 = (unsigned int)((__rol__(-2, v11 & 0x1fL)) & gvar_4520E4);
                            }
                        }
                        else {
                            if(*(long long*)(v30 + 32L) == param0) {
                                *(long long*)(v30 + 32L) = v3;
                            }
                            else {
                                *(long long*)(v30 + 40L) = v3;
                            }
                            if(v3) {
                            loc_43693D:
                                long long v33 = *(long long*)(param0 + 32L);
                                *(long long*)(v3 + 48L) = v30;
                                if(v33) {
                                    *(long long*)(v3 + 32L) = v33;
                                    *(long long*)(v33 + 48L) = v3;
                                }
                                v11 = *(long long*)(param0 + 40L);
                                if(v11) {
                                    *(long long*)(v3 + 40L) = v11;
                                    *(long long*)(v11 + 48L) = v3;
                                }
                            }
                        }
                    }
                }
                goto loc_4369BF;
            }
            else {
                v1 = (long long)((long long*)((long long)ptr0 + v4) + 4);
                long long v34 = /*BAD_CALL!*/ sub_437254(param0, v1, v8, v11);
                v0 = (unsigned int)v34;
            }
        }
        if(!v0) {
            gvar_452438 -= v1;
        }
    }
loc_436D13:
}

void sub_436D15() {
    // Decompilation error
}

unsigned long long* sub_436D71(long long param0, unsigned long long* param1, long long param2, long long param3, long long* param4) {
    unsigned long long* ptr0;
    unsigned long long* ptr1;
    long long v0;
    long long v1;
    long long v2;
    long long v3;
    long long v4;
    long long v5;
    long long v6;
    long long v7;
    long long v8 = v3;
    long long v9 = v4;
    long long v10 = v5;
    unsigned long long* result = param1;
    long long v11 = v6;
    long long v12 = param0;
    param0 = param2;
    long long v13 = v7;
    long long* ptr2 = param4;
    param1 = *(param1 + 1);
    long long* ptr3 = (long long*)((long long)param1 & 0xfffffffffffffff8L);
    if(((unsigned char)param1 & 0x3)) {
        long long* ptr4 = (long long*)((long long)ptr3 + (long long)result);
        if((long long*)(param0 + (long long)result) <= ptr4) {
            v2 = (long long)((long long)ptr3 - param0);
            if((unsigned long long)v2 > 31L) {
                v1 = param0 + (long long)result;
                *(result + 1) = (long long*)((long long)(long long*)((unsigned long long)((unsigned int)param1 & 0x1) | param0) | 0x2L);
                *(long long*)(param0 + (long long)result + 8L) = v2 | 0x3L;
                *(ptr4 + 1) = *(ptr4 + 1) | 0x1L;
                sub_435410(v12, v1, v2, param3);
            }
            return result;
        }
        else if(*(long long*)(v12 + 40L) == ptr4) {
            ptr4 = (long long*)(*(long long*)(v12 + 16L) + (long long)ptr3);
            if((unsigned long long)(long long*)(*(long long*)(v12 + 16L) + (long long)ptr3) <= (unsigned long long)param0) {
            loc_436DA7:
                result = NULL;
            }
            else {
                ptr4 = (long long*)((long long)ptr4 - param0);
                long long* ptr5 = (long long*)(param0 + (long long)result);
                *(result + 1) = (long long*)((long long)(long long*)((long long)(unsigned long long*)((unsigned int)param1 & 0x1) | param0) | 0x2L);
                *(unsigned long long*)(ptr5 + 1) = (long long*)((long long)ptr4 | 0x1L);
                *(unsigned long long*)(v12 + 40L) = ptr5;
                *(unsigned long long*)(v12 + 16L) = ptr4;
            }
            return result;
        }
        else if(*(long long*)(v12 + 32L) != ptr4) {
            unsigned long long v14 = *(unsigned long long*)(ptr4 + 1);
            if(!((unsigned char)v14 & 0x2)) {
                v14 &= -8L;
                param4 = (long long*)((long long)ptr3 + v14);
                if((unsigned long long)param0 <= (unsigned long long)param4) {
                    unsigned long long v15 = *(unsigned long long*)(ptr4 + 3);
                    long long v16 = (long long)((long long)param4 - param0);
                    param3 = (long long)(v14 >>> 3);
                    if(v14 <= 248L) {
                        unsigned long long v17 = *(unsigned long long*)(ptr4 + 2);
                        if(v15 == v17) {
                            *(int*)v12 = (__rol__(-2, param3 & 0x1fL)) & *(int*)v12;
                        }
                        else {
                            *(unsigned long long*)(v17 + 24L) = v15;
                            *(unsigned long long*)(v15 + 16L) = v17;
                        }
                    }
                    else {
                        v14 = *(unsigned long long*)(ptr4 + 6);
                        if(v15 != ptr4) {
                            long long v18 = *(ptr4 + 2);
                            *(unsigned long long*)(v18 + 24L) = v15;
                            *(long long*)(v15 + 16L) = v18;
                        }
                        else {
                            v15 = *(unsigned long long*)(ptr4 + 5);
                            param3 = (long long)(ptr4 + 5);
                            if(!v15) {
                                v15 = *(unsigned long long*)(ptr4 + 4);
                                if(v15) {
                                    param3 = (long long)(ptr4 + 4);
                                    goto loc_437007;
                                }
                            }
                            else {
                            loc_437007:
                                unsigned long long v19 = v15;
                            loc_43700A:
                                do {
                                    v0 = param3;
                                    v15 = v19;
                                    param3 = (long long)(v19 + 40L);
                                    v19 = *(unsigned long long*)(v19 + 40L);
                                    if(v19) {
                                        goto loc_43700A;
                                    }
                                    else {
                                        v19 = *(unsigned long long*)(v15 + 32L);
                                        param3 = (long long)(v15 + 32L);
                                    }
                                }
                                while(v19);
                                *(long long*)v0 = 0L;
                            }
                        }
                        if(v14) {
                            param3 = (long long)*(int*)(ptr4 + 7);
                            long long* ptr6 = (long long*)((long long)*(int*)(ptr4 + 7) * 8L + v12);
                            if(*(ptr6 + 75) == ptr4) {
                                *(unsigned long long*)(ptr6 + 75) = v15;
                                if(v15) {
                                    goto loc_437056;
                                }
                                else {
                                    *(int*)(v12 + 4L) = (__rol__(-2, param3 & 0x1fL)) & *(int*)(v12 + 4L);
                                }
                            }
                            else {
                                if(*(long long*)(v14 + 32L) == ptr4) {
                                    *(unsigned long long*)(v14 + 32L) = v15;
                                }
                                else {
                                    *(unsigned long long*)(v14 + 40L) = v15;
                                }
                                if(v15) {
                                loc_437056:
                                    long long v20 = *(ptr4 + 4);
                                    *(unsigned long long*)(v15 + 48L) = v14;
                                    if(v20) {
                                        *(long long*)(v15 + 32L) = v20;
                                        *(unsigned long long*)(v20 + 48L) = v15;
                                    }
                                    long long v21 = *(ptr4 + 5);
                                    if(v21) {
                                        *(long long*)(v15 + 40L) = v21;
                                        *(unsigned long long*)(v21 + 48L) = v15;
                                    }
                                }
                            }
                        }
                    }
                    long long* ptr7 = (long long*)((long long)param4 + (long long)result);
                    unsigned long long* ptr8 = (unsigned long long*)((unsigned int)param1 & 0x1);
                    if((unsigned long long)v16 <= 31L) {
                        *(result + 1) = (long long*)((long long)(long long*)((long long)ptr8 | (long long)param4) | 0x2L);
                        *(ptr7 + 1) = *(ptr7 + 1) | 0x1L;
                    }
                    else {
                        v1 = param0 + (long long)result;
                        *(result + 1) = (long long*)((long long)(long long*)((long long)ptr8 | param0) | 0x2L);
                        *(unsigned long long*)(v1 + 8L) = (long long*)(v16 | 0x3L);
                        *(ptr7 + 1) = *(ptr7 + 1) | 0x1L;
                        v2 = v16;
                        sub_435410(v12, v1, v2, param3);
                    }
                    return result;
                }
            }
            goto loc_436DA7;
        }
        else {
            param3 = *(long long*)(v12 + 8L) + (long long)ptr3;
            if((unsigned long long)param3 < (unsigned long long)param0) {
                goto loc_436DA7;
            }
            else {
                param1 = (unsigned long long*)((unsigned int)param1 & 0x1);
                ptr1 = (unsigned long long*)(param3 + (long long)result);
                param4 = (long long*)(param3 - param0);
                ptr0 = param1;
            }
        }
        if((unsigned long long)param4 > 31L) {
            param3 = param0 + (long long)result;
            *(result + 1) = (long long*)((long long)(long long*)((long long)ptr0 | param0) | 0x2L);
            *(unsigned long long*)(param3 + 8L) = (long long*)((long long)param4 | 0x1L);
            *ptr1 = param4;
            *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) & 0xfffffffffffffffeL;
            *(unsigned long long*)(v12 + 8L) = param4;
            *(long long*)(v12 + 32L) = param3;
        }
        else {
            *(long long*)(result + 1) = (long long)((long long)(long long*)(param3 | (long long)param1) | 0x2L);
            *(long long*)(ptr1 + 1) = *(long long*)(ptr1 + 1) | 0x1L;
            *(long long*)(v12 + 8L) = 0L;
            *(long long*)(v12 + 32L) = 0L;
            return result;
        }
    }
    else if((unsigned long long)param0 <= 0xffL) {
        goto loc_436DA7;
    }
    else {
        unsigned long long v22 = gvar_4524B0;
        if((unsigned long long)(param0 + 8L) > (unsigned long long)ptr3 || (unsigned long long)(long long*)((long long)ptr3 - param0) > (unsigned long long)(unsigned long long*)(v22 * 2L)) {
            unsigned long long v23 = *result;
            long long v24 = (v22 + param0 + 62L) & (0L - v22);
            unsigned long long* ptr9 = (unsigned long long*)((long long*)((long long)ptr3 + v23) + 4);
            long long v25 = sub_4378A4();
            if(v25 == -1L) {
                goto loc_436DA7;
            }
            else {
                result = (unsigned long long*)(v25 + v23);
                long long v26 = v24 - v23;
                char v27 = *(unsigned long long*)(v12 + 24L) > (unsigned long long)v25;
                *(long long*)(result + 1) = v26 - 32L;
                *((long long*)(v26 + (long long)result) - 3) = 11L;
                *((long long*)(v26 + (long long)result) - 2) = 0L;
                if(v27) {
                    *(long long*)(v12 + 24L) = v25;
                }
                long long* ptr10 = (long long*)(*(long long*)(v12 + 856L) + v24 - (long long)ptr9);
                char v28 = *(long long*)(v12 + 864L) == ptr10;
                char v29 = *(unsigned long long*)(v12 + 864L) > (unsigned long long)ptr10;
                *(unsigned long long*)(v12 + 856L) = ptr10;
                if(!v29 && !v28) {
                    *(unsigned long long*)(v12 + 864L) = ptr10;
                }
            }
        }
    }
    return result;
}

void sub_437100() {
    // Decompilation error
}

void sub_4371B9() {
    char v0 = gvar_4524A0 ? 0: 1;
    char v1 = gvar_4524A0 >= 0x8000000000000000L;
    char v2 = __parity__((unsigned char)gvar_4524A0);
    char v3 = gvar_4524A0 < 0L;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_4371C3: &sub_43723F;
}

long long sub_4371C3() {
    char v0 = gvar_453CA8 == 0x10000;
    char v1 = (int)gvar_453CA8 < 0x10000;
    char v2 = __parity__((unsigned char)gvar_453CA8);
    char v3 = gvar_453CA8 < 0x10000;
    char v4 = (((gvar_453CA8 - 0x10000) ^ gvar_453CA8) & (gvar_453CA8 ^ 0x10000)) < 0;
    char v5 = (((gvar_453CA8 - 0x10000) ^ (gvar_453CA8 ^ 0x10000)) >>> 4) & 0x1;
    long long v6 = 0x10000L;
    long long v7 = v3 ? 0x10000L: (unsigned long long)gvar_453CA8;
    long long v8 = v3 ? 0x10000L: (unsigned long long)gvar_453CA8;
    long long v9 = v8 - 1L;
    char v10 = v8 & v9 ? 0: 1;
    char v11 = (v8 & v9) < 0L;
    char v12 = __parity__((unsigned char)(v8 & v9));
    char v13 = 0;
    char v14 = 0;
    jump v10 ? &sub_4371ED: &sub_4371E4;
}

void sub_43723F() {
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_437268() {
    return sub_434FBE();
}

void sub_4373B0() {
    // Decompilation error
}

void sub_43762C() {
    // Decompilation error
}

// Stale decompilation - Refresh this view to re-decompile this code
long long sub_4378A4() {
    return sub_40214C();
}

long long sub_4379ED(unsigned int param0, long long param1, long long param2) {
    long long v0 = 0L;
    while((unsigned int)v0 < (unsigned int)param2) {
        int v1 = ((unsigned int)v0 + (unsigned int)param2) >> 1;
        if(*(int*)((long long)v1 * 8L + param1) <= (int)param0) {
            v0 = (unsigned long long)(v1 + 1);
        }
        else {
            param2 = (unsigned long long)v1;
        }
    }
    return (long long)(unsigned int)v0;
}

long long sub_437DAC() {
    return sub_4020FC();
}

void sub_437FE2() {
    // Decompilation error
}

void sub_4390BD() {
    // Decompilation error
}

void sub_43914E() {
    // Decompilation error
}

void sub_4396C3() {
    // Decompilation error
}

void sub_4396ED() {
    // Decompilation error
}

long long sub_43A304(long long param0, unsigned long long param1, long long param2, unsigned long long param3, int* param4) {
    unsigned long long v0 = 0L;
    unsigned int v1 = (unsigned int)(((((unsigned int)*(char*)((unsigned long long)(unsigned char)param0 + 4485888L) * 0x100) | (unsigned int)*(char*)((unsigned long long)(unsigned char)(param0 >>> 8L) + 4485888L)) * 0x10000) | 0xffff);
    while(param3 > v0) {
        unsigned long long v2 = (param3 + v0) >>> 1;
        if(*(unsigned int*)(v2 * 4L + param2) <= v1) {
            v0 = v2 + 1L;
        }
        else {
            param3 = v2;
        }
    }
    unsigned long long v3 = (unsigned long long)(*(int*)(v0 * 4L + param2 - 4L) & 0xF);
    *param4 = (*(int*)(v0 * 4L + param2 - 4L) >>> 4) & 0xfff;
    return param0 >>> (v3 & 0x3fL);
}

void sub_43A438() {
    // Decompilation error
}

long long sub_43AA4B(long long param0, long long param1, long long param2, long long param3) {
    long long result;
    param3();
    return result;
}

void sub_43B03A() {
    // Decompilation error
}
