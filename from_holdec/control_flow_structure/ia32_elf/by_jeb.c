
unsigned int initConditions() {
    unsigned int v0;
    unsigned int result;
    unsigned int v1 = result + 1000;
    unsigned int v2 = result;
    do {
        v0 = result + 1;
        *(unsigned int*)((v0 - v2) * 4 + (int)&gvar_806103C) = result;
        result = v0;
    }
    while(v0 != v1);
    return result;
}

int main(int param0) {
    int v0;
    int v1 = v0;
    int* ptr0 = &param0;
    initConditions();
    test_1_blocks_variant_0_edges_2();
    sub_8048470();
    test_2_blocks_variant_0_edges_3();
    test_2_blocks_variant_1_edges_4();
    test_2_blocks_variant_2_edges_4();
    test_2_blocks_variant_3_edges_4();
    test_2_blocks_variant_4_edges_4();
    /*NO_RETURN*/ test_2_blocks_variant_5_edges_4();
}

int sub_80482D6() {
    return gvar_8061008();
}

int sub_8048300() {
    return __gmon_start__();
}

int sub_804835F() {
    return 0;
}

void sub_8048398() {
}

int sub_80483C9() {
    int v0;
    int v1 = v0;
    deregister_tm_clones();
    completed.6532 = 1;
}

void sub_80483DC() {
}

int sub_80483F0() {
    return register_tm_clones();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048439() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804845D() {
    →puts();
    return 0;
}

int →sub_80484702() {
    return sub_8048470();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80484AC() {
    →puts();
    return sub_804848A();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80484DF() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80484BD: &sub_80484F5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804851B() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80484F9: &→sub_804851B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804855E() {
    →puts();
    return sub_8048535();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048571() {
    →puts();
    return 0;
}

int →sub_804859C() {
    return sub_804859C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80485AD() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_80485D6() {
    while(1) {
        →puts();
    }
}

int →sub_8048614() {
    return sub_8048614();
}

int →sub_8048695() {
    return sub_8048695();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80486D8() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80486AF: &sub_80486F0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80486F4() {
    →puts();
    return 0;
}

int →sub_804871F() {
    return sub_804871F();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804874C() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8048764: &sub_804874C;
    }
}

int →sub_8048764() {
    return sub_8048764();
}

int →sub_80487A9() {
    return sub_80487A9();
}

int →sub_80488BD() {
    return sub_80488BD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80488F3() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804890B: &sub_80488F3;
    }
}

int →sub_804890B() {
    return sub_804890B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048A91() {
    →puts();
    return sub_8048AA0();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048AD3() {
    →puts();
    return sub_8048AE2();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048B1E() {
    →puts();
    return sub_8048B2D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048B69() {
    →puts();
    return sub_8048B78();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048BB4() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048B92: &sub_8048BCA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048BFF() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048BDD: &sub_8048C15;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048C4A() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048C28: &sub_8048C60;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048C95() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048C73: &sub_8048CAB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048D2B() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8048D41: &sub_8048D2B;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048D7D() {
    →puts();
    return sub_8048D8E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048D9F() {
    →puts();
    return 0;
}

int →sub_8048DCA() {
    return sub_8048DCA();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048DEA() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048E13() {
    int result;
    →puts();
    sub_8048E24();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048E35() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048E5E() {
    void* ptr0;
    int v0 = "block 3";
    →puts();
    int* ptr1 = &v0;
    int* ptr2 = &ptr0;
    char v1 = &ptr0 ? 0: 1;
    char v2 = (int)&ptr0 < 0;
    char v3 = __parity__((unsigned char)&ptr0);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&ptr0) >>> 4) & 0x1);
    char v5 = (unsigned int)&v0 >= 0xfffffffc;
    char v6 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    /*NO_RETURN*/ sub_8048E6F();
}

int →sub_8048EAB() {
    return sub_8048EAB();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_8048F05() {
    return sub_8048F05();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048EF6() {
    →puts();
    return sub_8048ECB();
}

int →sub_8048F50() {
    return sub_8048F50();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048F41() {
    →puts();
    return sub_8048F16();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048F8A() {
    →puts();
    return sub_8048F8C();
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_8048FD5() {
    while(1) {
        →puts();
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8048FD7() {
    →puts();
    return sub_8048FAC();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804906D() {
    →puts();
    return sub_804907C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80490C1() {
    →puts();
    return sub_80490D0();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049115() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80490F3: &sub_804912B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049169() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8049147: &sub_804917F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80491BD() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804919B: &sub_80491D3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049265() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049243: &sub_804927B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80492B9() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049297: &sub_80492CF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049361() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049352: &sub_8049377;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049409() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804941F: &sub_8049409;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804945D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8049473: &sub_804945D;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80494B1() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80494C7: &sub_80494B1;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049505() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80494E3: &sub_804951B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049559() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049537: &sub_804956F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049601() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80495DF: &sub_8049617;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049655() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8049633: &sub_804966B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80496FD() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80496DB: &sub_8049713;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049751() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804972F: &sub_8049767;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80497A5() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049796: &sub_80497BB;
}

int →sub_8049802() {
    return sub_8049802();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049854() {
    int result;
    →puts();
    sub_8049865();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80498A8() {
    void* ptr0;
    int v0 = "block 3";
    →puts();
    int* ptr1 = &v0;
    int* ptr2 = &ptr0;
    char v1 = &ptr0 ? 0: 1;
    char v2 = (int)&ptr0 < 0;
    char v3 = __parity__((unsigned char)&ptr0);
    char v4 = (int*)((int)(int*)((int)(int*)((int)(int*)((int)&v0 ^ 0x4) ^ (int)&ptr0) >>> 4) & 0x1);
    char v5 = (unsigned int)&v0 >= 0xfffffffc;
    char v6 = (int)(int*)((int)(int*)((int)&v0 ^ (int)&ptr0) & (int*)~(int)(int*)((int)&v0 ^ 0x4)) < 0;
    /*NO_RETURN*/ sub_80498B9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80498D3() {
    →puts();
    return 0;
}

int →sub_80498FE() {
    return sub_80498FE();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049927() {
    →puts();
    return 0;
}

int →sub_8049952() {
    return sub_8049952();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804997B() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80499A4() {
    int result;
    →puts();
    sub_80499B5();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80499F8() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80499CF: &sub_8049A10;
}

int →sub_8049A4E() {
    return sub_8049A4E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049AA0() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049A77: &sub_8049AB8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049AF4() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049ACB: &sub_8049B0C;
}

int →sub_8049B4A() {
    return sub_8049B4A();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049B73() {
    →puts();
    return 0;
}

int →sub_8049B9E() {
    return sub_8049B9E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049BC7() {
    →puts();
    return 0;
}

int →sub_8049BF2() {
    return sub_8049BF2();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049C1B() {
    →puts();
    return 0;
}

int →sub_8049C46() {
    return sub_8049C46();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049C98() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A8 ? &sub_8049CB0: &loc_8049C9A;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049CC3() {
    →puts();
    return 0;
}

int →sub_8049CEE() {
    return sub_8049CEE();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049D17() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049D6B() {
    →puts();
    return 0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049D94() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A8 ? &sub_8049DAC: &loc_8049D96;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049DD2() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049DEA: &sub_8049DD2;
    }
}

int →sub_8049DEA() {
    return sub_8049DEA();
}

int →sub_8049E3E() {
    return sub_8049E3E();
}

int →sub_8049E92() {
    return sub_8049E92();
}

int →sub_8049EE6() {
    return sub_8049EE6();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8049F22() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049F3A: &sub_8049F22;
    }
}

int →sub_8049F3A() {
    return sub_8049F3A();
}

int →sub_8049F8E() {
    return sub_8049F8E();
}

int →sub_8049FE2() {
    return sub_8049FE2();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A01E() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804A036: &sub_804A01E;
    }
}

int →sub_804A036() {
    return sub_804A036();
}

int →sub_804A08A() {
    return sub_804A08A();
}

int →sub_804A0ED() {
    return sub_804A0ED();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A0DE() {
    →puts();
    return sub_804A0B3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A130() {
    char v0;
    int v1 = "block 4";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A107: &→sub_804A132;
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804A195() {
    return sub_804A195();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A186() {
    →puts();
    return sub_804A15B();
}

int →sub_804A1E9() {
    return sub_804A1E9();
}

int →sub_804A23D() {
    return sub_804A23D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A22E() {
    →puts();
    return sub_804A203();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A280() {
    char v0;
    int v1 = "block 4";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A282: &sub_804A2A7;
}

int →sub_804A339() {
    return sub_804A339();
}

int →sub_804A3E1() {
    return sub_804A3E1();
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_804A3D2() {
    while(1) {
        →puts();
    }
}

int →sub_804A435() {
    return sub_804A435();
}

int →sub_804A489() {
    return sub_804A489();
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_804A47A() {
    while(1) {
        →puts();
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804A4DD() {
    return sub_804A4DD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A4CE() {
    →puts();
    return sub_804A4DD();
}

int →sub_804A531() {
    return sub_804A531();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804A585() {
    return sub_804A585();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A576() {
    →puts();
    return sub_804A585();
}

void sub_804A5C8() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A5B2: &sub_804A5D1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A5F3() {
    →puts();
    return 0;
}

void sub_804A61C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A606: &sub_804A625;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A647() {
    →puts();
    return 0;
}

void sub_804A670() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A65A: &sub_804A679;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A69B() {
    →puts();
    return 0;
}

void sub_804A6C4() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A6AE: &sub_804A6CD;
}

void sub_804A718() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A723: &sub_804A721;
}

void sub_804A76C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A777: &sub_804A775;
}

void sub_804A7C0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A7CB: &sub_804A7C9;
}

void sub_804A814() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A81F: &sub_804A81D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A83F() {
    →puts();
    return 0;
}

void sub_804A868() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A873: &sub_804A871;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A893() {
    →puts();
    return 0;
}

void sub_804A8BC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A8C7: &sub_804A8C5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A8E7() {
    →puts();
    return 0;
}

void sub_804A910() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A91B: &sub_804A919;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A93B() {
    →puts();
    return 0;
}

void sub_804A964() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A96F: &sub_804A96D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A98F() {
    →puts();
    return 0;
}

void sub_804A9B8() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804A9C3: &sub_804A9C1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804A9E3() {
    →puts();
    return 0;
}

void sub_804AA0C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804AA17: &sub_804AA15;
}

void sub_804AA60() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804AA6B: &sub_804AA69;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AA9E() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804AAB4: &sub_804AA9E;
    }
}

void sub_804AAB4() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804AABF: &sub_804AABD;
}

void sub_804AB08() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804AB13: &sub_804AB11;
}

void sub_804AB5C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804AB67: &sub_804AB65;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AC63() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804AC41: &sub_804AC79;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ACC0() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804AC9E: &sub_804ACD6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AD7A() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804AD6B: &sub_804AD90;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ADD7() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804ADC8: &sub_804ADED;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AE34() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804AE25: &sub_804AE4A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AEEE() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804AF04: &sub_804AEEE;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AF4B() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804AF61: &sub_804AF4B;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804AFA8() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804AF86: &sub_804AFBE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B062() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B040: &sub_804B078;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B11C() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B0FA: &sub_804B132;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B233() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B211: &sub_804B249;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B290() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B26E: &sub_804B2A6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B3A7() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B385: &sub_804B3BD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B404() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B3F5: &sub_804B41A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B461() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B452: &sub_804B477;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B4BE() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B4AF: &sub_804B4D4;
}

int →sub_804B698() {
    return sub_804B698();
}

int →sub_804B6F5() {
    return sub_804B6F5();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B750() {
    int result;
    →puts();
    sub_804B761();
    return result;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B784() {
    →puts();
    return 0;
}

int →sub_804B7AF() {
    return sub_804B7AF();
}

int →sub_804B80C() {
    return sub_804B80C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B867() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B83E: &sub_804B87F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B8C4() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B89B: &sub_804B8DC;
}

int →sub_804B923() {
    return sub_804B923();
}

int →sub_804B980() {
    return sub_804B980();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804B9DB() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B9B2: &sub_804B9F3;
}

int →sub_804BA3A() {
    return sub_804BA3A();
}

int →sub_804BA97() {
    return sub_804BA97();
}

int →sub_804BAF4() {
    return sub_804BAF4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BB26() {
    →puts();
    return 0;
}

int →sub_804BB51() {
    return sub_804BB51();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BB83() {
    →puts();
    return 0;
}

int →sub_804BBAE() {
    return sub_804BBAE();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BBE0() {
    →puts();
    return 0;
}

int →sub_804BC0B() {
    return sub_804BC0B();
}

int →sub_804BC68() {
    return sub_804BC68();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BD20() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A8 ? &sub_804BD38: &loc_804BD22;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BD54() {
    →puts();
    return 0;
}

int →sub_804BD7F() {
    return sub_804BD7F();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BDB1() {
    →puts();
    return 0;
}

int →sub_804BDDC() {
    return sub_804BDDC();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804BE0E() {
    →puts();
    return 0;
}

int →sub_804BE96() {
    return sub_804BE96();
}

int →sub_804BEF3() {
    return sub_804BEF3();
}

int →sub_804BF50() {
    return sub_804BF50();
}

int →sub_804BFAD() {
    return sub_804BFAD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C008() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BFDF: &sub_804C020;
}

int →sub_804C067() {
    return sub_804C067();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C0C2() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C099: &sub_804C0DA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C11F() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C0F6: &sub_804C137;
}

int →sub_804C17E() {
    return sub_804C17E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C1B0() {
    →puts();
    return 0;
}

int →sub_804C1DB() {
    return sub_804C1DB();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C20D() {
    →puts();
    return 0;
}

int →sub_804C238() {
    return sub_804C238();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C26A() {
    →puts();
    return 0;
}

int →sub_804C295() {
    return sub_804C295();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C2DA() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C2F2: &sub_804C2DA;
    }
}

int →sub_804C2F2() {
    return sub_804C2F2();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C337() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C34F: &sub_804C337;
    }
}

int →sub_804C34F() {
    return sub_804C34F();
}

int →sub_804C3AC() {
    return sub_804C3AC();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C3F1() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C409: &sub_804C3F1;
    }
}

int →sub_804C409() {
    return sub_804C409();
}

int →sub_804C466() {
    return sub_804C466();
}

int →sub_804C4C3() {
    return sub_804C4C3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C508() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C520: &sub_804C508;
    }
}

int →sub_804C520() {
    return sub_804C520();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C565() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C57D: &sub_804C565;
    }
}

int →sub_804C57D() {
    return sub_804C57D();
}

int →sub_804C5DA() {
    return sub_804C5DA();
}

int →sub_804C637() {
    return sub_804C637();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C67C() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C694: &sub_804C67C;
    }
}

int →sub_804C694() {
    return sub_804C694();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C6D9() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C6F1: &sub_804C6D9;
    }
}

int →sub_804C6F1() {
    return sub_804C6F1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C736() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C74E: &sub_804C736;
    }
}

int →sub_804C74E() {
    return sub_804C74E();
}

int →sub_804C7AB() {
    return sub_804C7AB();
}

int →sub_804C808() {
    return sub_804C808();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C84D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C865: &sub_804C84D;
    }
}

int →sub_804C865() {
    return sub_804C865();
}

int →sub_804C8C2() {
    return sub_804C8C2();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C907() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C91F: &sub_804C907;
    }
}

int →sub_804C91F() {
    return sub_804C91F();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804C964() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C97C: &sub_804C964;
    }
}

int →sub_804C97C() {
    return sub_804C97C();
}

int →sub_804C9D9() {
    return sub_804C9D9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CA1E() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804CA36: &sub_804CA1E;
    }
}

int →sub_804CA36() {
    return sub_804CA36();
}

int →sub_804CA93() {
    return sub_804CA93();
}

int →sub_804CAF0() {
    return sub_804CAF0();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CB35() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804CB4D: &sub_804CB35;
    }
}

int →sub_804CB4D() {
    return sub_804CB4D();
}

int →sub_804CBB9() {
    return sub_804CBB9();
}

int →sub_804CC16() {
    return sub_804CC16();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CC07() {
    →puts();
    return sub_804CBDC();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CC62() {
    char v0;
    int v1 = "block 4";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804CC39: &sub_804CC89;
}

int →sub_804CCD0() {
    return sub_804CCD0();
}

int →sub_804CD2D() {
    return sub_804CD2D();
}

int →sub_804CD8A() {
    return sub_804CD8A();
}

int →sub_804CDE7() {
    return sub_804CDE7();
}

int →sub_804CE44() {
    return sub_804CE44();
}

int →sub_804CEA1() {
    return sub_804CEA1();
}

// Stale decompilation - Refresh this view to re-decompile this code
void sub_804CE92() {
    while(1) {
        →puts();
    }
}

int →sub_804CEFE() {
    return sub_804CEFE();
}

int →sub_804CF5B() {
    return sub_804CF5B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804CFB8() {
    return sub_804CFB8();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804CFA9() {
    →puts();
    return sub_804CFB8();
}

int →sub_804D015() {
    return sub_804D015();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804D07B() {
    return sub_804D07B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D063() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D038: &sub_804D079;
}

int →sub_804D0D8() {
    return sub_804D0D8();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804D135() {
    return sub_804D135();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D11D() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D0F2: &sub_804D133;
}

int →sub_804D192() {
    return sub_804D192();
}

int →sub_804D1EF() {
    return sub_804D1EF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D1D7() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D1AC: &sub_804D1ED;
}

int →sub_804D24C() {
    return sub_804D24C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D28F() {
    char v0;
    int v1 = "block 4";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610AC ? 0: 1;
    char v3 = gvar_80610AC >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610AC);
    char v5 = gvar_80610AC < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D266: &→sub_804D2912;
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804D306() {
    return sub_804D306();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D2EE() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D2C3: &→sub_804D2EE;
}

int →sub_804D363() {
    return sub_804D363();
}

int →sub_804D3C0() {
    return sub_804D3C0();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D3A8() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D37D: &→sub_804D3A8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D403() {
    char v0;
    int v1 = "block 4";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610AC ? 0: 1;
    char v3 = gvar_80610AC >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610AC);
    char v5 = gvar_80610AC < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D405: &sub_804D433;
}

int →sub_804D47A() {
    return sub_804D47A();
}

int →sub_804D4D7() {
    return sub_804D4D7();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_804D534() {
    return sub_804D534();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D51C() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D4F1: &→sub_804D5342;
}

int →sub_804D591() {
    return sub_804D591();
}

void sub_804D5D4() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D5BE: &sub_804D5DD;
}

void sub_804D631() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D61B: &sub_804D63A;
}

void sub_804D68E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D678: &sub_804D697;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D6C2() {
    →puts();
    return 0;
}

void sub_804D6EB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D6D5: &sub_804D6F4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D71F() {
    →puts();
    return 0;
}

void sub_804D748() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D732: &sub_804D751;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D77C() {
    →puts();
    return 0;
}

void sub_804D7A5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D78F: &sub_804D7AE;
}

void sub_804D802() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D7EC: &sub_804D80B;
}

void sub_804D85F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D849: &sub_804D868;
}

void sub_804D8BC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D8A6: &sub_804D8C5;
}

void sub_804D919() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D903: &sub_804D922;
}

void sub_804D976() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D960: &sub_804D97F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804D9AA() {
    →puts();
    return 0;
}

void sub_804D9D3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804D9BD: &sub_804D9DC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DA07() {
    →puts();
    return 0;
}

void sub_804DA30() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DA1A: &sub_804DA39;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DA64() {
    →puts();
    return 0;
}

void sub_804DA8D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DA77: &sub_804DA96;
}

void sub_804DAEA() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DAD4: &sub_804DAF3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DB1E() {
    →puts();
    return 0;
}

void sub_804DB47() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DB31: &sub_804DB50;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DB7B() {
    →puts();
    return 0;
}

void sub_804DBA4() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DB8E: &sub_804DBAD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DBD8() {
    →puts();
    return 0;
}

void sub_804DC01() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DBEB: &sub_804DC0A;
}

void sub_804DC5E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DC69: &sub_804DC67;
}

void sub_804DCBB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DCC6: &sub_804DCC4;
}

void sub_804DD18() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DD23: &sub_804DD21;
}

void sub_804DD75() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DD80: &sub_804DD7E;
}

void sub_804DDD2() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DDDD: &sub_804DDDB;
}

void sub_804DE2F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DE3A: &sub_804DE38;
}

void sub_804DE8C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DE97: &sub_804DE95;
}

void sub_804DEE9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DEF4: &sub_804DEF2;
}

void sub_804DF46() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DF51: &sub_804DF4F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DF7A() {
    →puts();
    return 0;
}

void sub_804DFA3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804DFAE: &sub_804DFAC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804DFD7() {
    →puts();
    return 0;
}

void sub_804E000() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E00B: &sub_804E009;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E034() {
    →puts();
    return 0;
}

void sub_804E05D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E068: &sub_804E066;
}

void sub_804E0BA() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E0C5: &sub_804E0C3;
}

void sub_804E117() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E122: &sub_804E120;
}

void sub_804E174() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E17F: &sub_804E17D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E1A8() {
    →puts();
    return 0;
}

void sub_804E1D1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E1DC: &sub_804E1DA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E205() {
    →puts();
    return 0;
}

void sub_804E22E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E239: &sub_804E237;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E262() {
    →puts();
    return 0;
}

void sub_804E28B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E296: &sub_804E294;
}

void sub_804E2E8() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E2F3: &sub_804E2F1;
}

void sub_804E345() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E350: &sub_804E34E;
}

void sub_804E3A2() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E3AD: &sub_804E3AB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E3D6() {
    →puts();
    return 0;
}

void sub_804E3FF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E40A: &sub_804E408;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E433() {
    →puts();
    return 0;
}

void sub_804E45C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E467: &sub_804E465;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E490() {
    →puts();
    return 0;
}

void sub_804E4B9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E4C4: &sub_804E4C2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E500() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E516: &sub_804E500;
    }
}

void sub_804E516() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E521: &sub_804E51F;
}

void sub_804E573() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E57E: &sub_804E57C;
}

void sub_804E5D0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E5DB: &sub_804E5D9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E617() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E62D: &sub_804E617;
    }
}

void sub_804E62D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E638: &sub_804E636;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E674() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E68A: &sub_804E674;
    }
}

void sub_804E68A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E695: &sub_804E693;
}

void sub_804E6E7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E6F2: &sub_804E6F0;
}

void sub_804E744() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E74F: &sub_804E74D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E78B() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E7A1: &sub_804E78B;
    }
}

void sub_804E7A1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E7AC: &sub_804E7AA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E7E8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E7FE: &sub_804E7E8;
    }
}

void sub_804E7FE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E809: &sub_804E807;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E845() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E85B: &sub_804E845;
    }
}

void sub_804E85B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E866: &sub_804E864;
}

void sub_804E8B8() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E8C3: &sub_804E8C1;
}

void sub_804E915() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E920: &sub_804E91E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804E95C() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E972: &sub_804E95C;
    }
}

void sub_804E972() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E97D: &sub_804E97B;
}

void sub_804E9CF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804E9DA: &sub_804E9D8;
}

void sub_804EA2C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EA37: &sub_804EA35;
}

void sub_804EA89() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EA73: &sub_804EA92;
}

void sub_804EAE6() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EAD0: &sub_804EAEF;
}

void sub_804EB43() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EB2D: &sub_804EB4C;
}

void sub_804EBA0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EB8A: &sub_804EBA9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804EBD4() {
    →puts();
    return 0;
}

void sub_804EBFD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EBE7: &sub_804EC06;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804EC31() {
    →puts();
    return 0;
}

void sub_804EC5A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EC44: &sub_804EC63;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804EC8E() {
    →puts();
    return 0;
}

void sub_804ECB7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804ECA1: &sub_804ECC0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ECEB() {
    →puts();
    return 0;
}

void sub_804ED14() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804ECFE: &sub_804ED1D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804ED48() {
    →puts();
    return 0;
}

void sub_804ED71() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804ED5B: &sub_804ED7A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804EDA5() {
    →puts();
    return 0;
}

void sub_804EDCE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_804EDB8: &sub_804EDD7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804EE8A() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804EE7B: &sub_804EEA0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804EFBC() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804EF9A: &sub_804EFD2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F1BA() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F198: &sub_804F1D0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F286() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804F277: &sub_804F29C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F2EC() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804F2DD: &sub_804F302;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F352() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804F343: &sub_804F368;
}

int →sub_804F625() {
    return sub_804F625();
}

int →sub_804F68B() {
    return sub_804F68B();
}

int →sub_804F6F1() {
    return sub_804F6F1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F755() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804F72C: &sub_804F76D;
}

int →sub_804F7BD() {
    return sub_804F7BD();
}

int →sub_804F823() {
    return sub_804F823();
}

int →sub_804F889() {
    return sub_804F889();
}

int →sub_804F8EF() {
    return sub_804F8EF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804F92A() {
    →puts();
    return 0;
}

int →sub_804F955() {
    return sub_804F955();
}

int →sub_804F9BB() {
    return sub_804F9BB();
}

int →sub_804FA21() {
    return sub_804FA21();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FAC2() {
    →puts();
    return 0;
}

int →sub_804FAED() {
    return sub_804FAED();
}

int →sub_804FB53() {
    return sub_804FB53();
}

int →sub_804FBB9() {
    return sub_804FBB9();
}

int →sub_804FC1F() {
    return sub_804FC1F();
}

int →sub_804FC85() {
    return sub_804FC85();
}

int →sub_804FCEB() {
    return sub_804FCEB();
}

int →sub_804FD51() {
    return sub_804FD51();
}

int →sub_804FDB7() {
    return sub_804FDB7();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FE1B() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FDF2: &sub_804FE33;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FE81() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FE58: &sub_804FE99;
}

int →sub_804FEE9() {
    return sub_804FEE9();
}

int →sub_804FF4F() {
    return sub_804FF4F();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_804FFB3() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FF8A: &sub_804FFCB;
}

int →sub_805001B() {
    return sub_805001B();
}

int →sub_8050081() {
    return sub_8050081();
}

int →sub_80500E7() {
    return sub_80500E7();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050122() {
    →puts();
    return 0;
}

int →sub_805014D() {
    return sub_805014D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050188() {
    →puts();
    return 0;
}

int →sub_80501B3() {
    return sub_80501B3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80501EE() {
    →puts();
    return 0;
}

int →sub_8050219() {
    return sub_8050219();
}

int →sub_805027F() {
    return sub_805027F();
}

int →sub_80502E5() {
    return sub_80502E5();
}

int →sub_805034B() {
    return sub_805034B();
}

int →sub_80503B1() {
    return sub_80503B1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80503FF() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050417: &sub_80503FF;
    }
}

int →sub_8050417() {
    return sub_8050417();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050465() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_805047D: &sub_8050465;
    }
}

int →sub_805047D() {
    return sub_805047D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80504CB() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_80504E3: &sub_80504CB;
    }
}

int →sub_80504E3() {
    return sub_80504E3();
}

int →sub_8050549() {
    return sub_8050549();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050597() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_80505AF: &sub_8050597;
    }
}

int →sub_80505AF() {
    return sub_80505AF();
}

int →sub_8050615() {
    return sub_8050615();
}

int →sub_805067B() {
    return sub_805067B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80506C9() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_80506E1: &sub_80506C9;
    }
}

int →sub_80506E1() {
    return sub_80506E1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805072F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050747: &sub_805072F;
    }
}

int →sub_8050747() {
    return sub_8050747();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050795() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_80507AD: &sub_8050795;
    }
}

int →sub_80507AD() {
    return sub_80507AD();
}

int →sub_8050813() {
    return sub_8050813();
}

int →sub_8050879() {
    return sub_8050879();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80508C7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_80508DF: &sub_80508C7;
    }
}

int →sub_80508DF() {
    return sub_80508DF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805092D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050945: &sub_805092D;
    }
}

int →sub_8050945() {
    return sub_8050945();
}

int →sub_80509AB() {
    return sub_80509AB();
}

int →sub_8050A11() {
    return sub_8050A11();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050A5F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050A77: &sub_8050A5F;
    }
}

int →sub_8050A77() {
    return sub_8050A77();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050AC5() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050ADD: &sub_8050AC5;
    }
}

int →sub_8050ADD() {
    return sub_8050ADD();
}

int →sub_8050B43() {
    return sub_8050B43();
}

int →sub_8050BA9() {
    return sub_8050BA9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050BF7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050C0F: &sub_8050BF7;
    }
}

int →sub_8050C0F() {
    return sub_8050C0F();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050C5D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050C75: &sub_8050C5D;
    }
}

int →sub_8050C75() {
    return sub_8050C75();
}

int →sub_8050CDB() {
    return sub_8050CDB();
}

int →sub_8050D41() {
    return sub_8050D41();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050D8F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050DA7: &sub_8050D8F;
    }
}

int →sub_8050DA7() {
    return sub_8050DA7();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050DF5() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050E0D: &sub_8050DF5;
    }
}

int →sub_8050E0D() {
    return sub_8050E0D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050E5B() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050E73: &sub_8050E5B;
    }
}

int →sub_8050E73() {
    return sub_8050E73();
}

int →sub_8050ED9() {
    return sub_8050ED9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050F27() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050F3F: &sub_8050F27;
    }
}

int →sub_8050F3F() {
    return sub_8050F3F();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8050F8D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050FA5: &sub_8050F8D;
    }
}

int →sub_8050FA5() {
    return sub_8050FA5();
}

int →sub_805101A() {
    return sub_805101A();
}

int →sub_8051080() {
    return sub_8051080();
}

int →sub_80510E6() {
    return sub_80510E6();
}

int →sub_805114C() {
    return sub_805114C();
}

int →sub_80511BB() {
    return sub_80511BB();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_8051221() {
    return sub_8051221();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051209() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80511DE: &sub_805121F;
}

int →sub_8051287() {
    return sub_8051287();
}

int →sub_80512ED() {
    return sub_80512ED();
}

int →sub_8051353() {
    return sub_8051353();
}

int →sub_80513B9() {
    return sub_80513B9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80513A1() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8051376: &→sub_80513A1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051405() {
    char v0;
    int v1 = "block 4";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610AC ? 0: 1;
    char v3 = gvar_80610AC >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610AC);
    char v5 = gvar_80610AC < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80513DC: &sub_8051435;
}

int →sub_8051485() {
    return sub_8051485();
}

int →sub_80514EB() {
    return sub_80514EB();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_8051551() {
    return sub_8051551();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051539() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805150E: &→sub_80515512;
}

int →sub_80515B7() {
    return sub_80515B7();
}

int →sub_805161D() {
    return sub_805161D();
}

int →sub_8051683() {
    return sub_8051683();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_80516E9() {
    return sub_80516E9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80516D1() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80516B9: &→sub_80516D1;
}

int →sub_805174F() {
    return sub_805174F();
}

int →sub_80517B5() {
    return sub_80517B5();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_805181B() {
    return sub_805181B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051803() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80517EB: &→sub_805181B2;
}

int →sub_8051881() {
    return sub_8051881();
}

int →sub_80518E7() {
    return sub_80518E7();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_805194D() {
    return sub_805194D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051935() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A8 ? &→sub_805194D2: &sub_8051935;
    }
}

int →sub_80519B3() {
    return sub_80519B3();
}

void sub_80519FF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80519E9: &sub_8051A08;
}

void sub_8051A65() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051A4F: &sub_8051A6E;
}

void sub_8051ACB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051AB5: &sub_8051AD4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051B08() {
    →puts();
    return 0;
}

void sub_8051B31() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051B1B: &sub_8051B3A;
}

void sub_8051B97() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051B81: &sub_8051BA0;
}

void sub_8051BFD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051BE7: &sub_8051C06;
}

void sub_8051C63() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051C4D: &sub_8051C6C;
}

void sub_8051CC9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051CB3: &sub_8051CD2;
}

void sub_8051D2F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051D19: &sub_8051D38;
}

void sub_8051D95() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051D7F: &sub_8051D9E;
}

void sub_8051DFB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051DE5: &sub_8051E04;
}

void sub_8051E61() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051E4B: &sub_8051E6A;
}

void sub_8051EC7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051EB1: &sub_8051ED0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051F04() {
    →puts();
    return 0;
}

void sub_8051F2D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051F17: &sub_8051F36;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051F6A() {
    →puts();
    return 0;
}

void sub_8051F93() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051F7D: &sub_8051F9C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8051FD0() {
    →puts();
    return 0;
}

void sub_8051FF9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8051FE3: &sub_8052002;
}

void sub_805205F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052049: &sub_8052068;
}

void sub_80520C5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80520AF: &sub_80520CE;
}

void sub_805212B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052115: &sub_8052134;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052168() {
    →puts();
    return 0;
}

void sub_8052191() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805217B: &sub_805219A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80521CE() {
    →puts();
    return 0;
}

void sub_80521F7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80521E1: &sub_8052200;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052234() {
    →puts();
    return 0;
}

void sub_805225D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052247: &sub_8052266;
}

void sub_80522C3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80522AD: &sub_80522CC;
}

void sub_8052329() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052313: &sub_8052332;
}

void sub_805238F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052379: &sub_8052398;
}

void sub_80523F5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80523DF: &sub_80523FE;
}

void sub_805245B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052445: &sub_8052464;
}

void sub_80524C1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80524AB: &sub_80524CA;
}

void sub_8052527() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052511: &sub_8052530;
}

void sub_805258D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052577: &sub_8052596;
}

void sub_80525F3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80525DD: &sub_80525FC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052630() {
    →puts();
    return 0;
}

void sub_8052659() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052643: &sub_8052662;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052696() {
    →puts();
    return 0;
}

void sub_80526BF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80526A9: &sub_80526C8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80526FC() {
    →puts();
    return 0;
}

void sub_8052725() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805270F: &sub_805272E;
}

void sub_805278B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052796: &sub_8052794;
}

void sub_80527F1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80527FC: &sub_80527FA;
}

void sub_8052857() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052862: &sub_8052860;
}

void sub_80528BD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80528C8: &sub_80528C6;
}

void sub_8052923() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805292E: &sub_805292C;
}

void sub_8052989() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052994: &sub_8052992;
}

void sub_80529EF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80529FA: &sub_80529F8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052A2C() {
    →puts();
    return 0;
}

void sub_8052A55() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052A60: &sub_8052A5E;
}

void sub_8052ABB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052AC6: &sub_8052AC4;
}

void sub_8052B21() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052B2C: &sub_8052B2A;
}

void sub_8052B87() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052B92: &sub_8052B90;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052BC4() {
    →puts();
    return 0;
}

void sub_8052BED() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052BF8: &sub_8052BF6;
}

void sub_8052C53() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052C5E: &sub_8052C5C;
}

void sub_8052CB9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052CC4: &sub_8052CC2;
}

void sub_8052D1F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052D2A: &sub_8052D28;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8052D5C() {
    →puts();
    return 0;
}

void sub_8052D85() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052D90: &sub_8052D8E;
}

void sub_8052DEB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052DF6: &sub_8052DF4;
}

void sub_8052E51() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052E5C: &sub_8052E5A;
}

void sub_8052EB7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052EC2: &sub_8052EC0;
}

void sub_8052F1D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052F28: &sub_8052F26;
}

void sub_8052F83() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052F8E: &sub_8052F8C;
}

void sub_8052FE9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8052FF4: &sub_8052FF2;
}

void sub_805304F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805305A: &sub_8053058;
}

void sub_80530B5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80530C0: &sub_80530BE;
}

void sub_805311B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053126: &sub_8053124;
}

void sub_8053181() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805318C: &sub_805318A;
}

void sub_80531E7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80531F2: &sub_80531F0;
}

void sub_805324D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053258: &sub_8053256;
}

void sub_80532B3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80532BE: &sub_80532BC;
}

void sub_8053319() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053324: &sub_8053322;
}

void sub_805337F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805338A: &sub_8053388;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80533BC() {
    →puts();
    return 0;
}

void sub_80533E5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80533F0: &sub_80533EE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053422() {
    →puts();
    return 0;
}

void sub_805344B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053456: &sub_8053454;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053488() {
    →puts();
    return 0;
}

void sub_80534B1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80534BC: &sub_80534BA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80534EE() {
    →puts();
    return 0;
}

void sub_8053517() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053522: &sub_8053520;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053554() {
    →puts();
    return 0;
}

void sub_805357D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053588: &sub_8053586;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80535BA() {
    →puts();
    return 0;
}

void sub_80535E3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80535EE: &sub_80535EC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053633() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053649: &sub_8053633;
    }
}

void sub_8053649() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053654: &sub_8053652;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053699() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80536AF: &sub_8053699;
    }
}

void sub_80536AF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80536BA: &sub_80536B8;
}

void sub_8053715() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053720: &sub_805371E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053765() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805377B: &sub_8053765;
    }
}

void sub_805377B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053786: &sub_8053784;
}

void sub_80537E1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80537EC: &sub_80537EA;
}

void sub_8053847() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053852: &sub_8053850;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053897() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80538AD: &sub_8053897;
    }
}

void sub_80538AD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80538B8: &sub_80538B6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80538FD() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053913: &sub_80538FD;
    }
}

void sub_8053913() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805391E: &sub_805391C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053963() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053979: &sub_8053963;
    }
}

void sub_8053979() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053984: &sub_8053982;
}

void sub_80539DF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80539EA: &sub_80539E8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053A2F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053A45: &sub_8053A2F;
    }
}

void sub_8053A45() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053A50: &sub_8053A4E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053A95() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053AAB: &sub_8053A95;
    }
}

void sub_8053AAB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053AB6: &sub_8053AB4;
}

void sub_8053B11() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053B1C: &sub_8053B1A;
}

void sub_8053B77() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053B82: &sub_8053B80;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053BC7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053BDD: &sub_8053BC7;
    }
}

void sub_8053BDD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053BE8: &sub_8053BE6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053C2D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053C43: &sub_8053C2D;
    }
}

void sub_8053C43() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053C4E: &sub_8053C4C;
}

void sub_8053CA9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053CB4: &sub_8053CB2;
}

void sub_8053D0F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053D1A: &sub_8053D18;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053D5F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053D75: &sub_8053D5F;
    }
}

void sub_8053D75() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053D80: &sub_8053D7E;
}

void sub_8053DDB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053DE6: &sub_8053DE4;
}

void sub_8053E41() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053E4C: &sub_8053E4A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053E91() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053EA7: &sub_8053E91;
    }
}

void sub_8053EA7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053EB2: &sub_8053EB0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8053EF7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053F0D: &sub_8053EF7;
    }
}

void sub_8053F0D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053F18: &sub_8053F16;
}

void sub_8053F73() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053F7E: &sub_8053F7C;
}

void sub_8053FD9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8053FE4: &sub_8053FE2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054029() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805403F: &sub_8054029;
    }
}

void sub_805403F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805404A: &sub_8054048;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805408F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80540A5: &sub_805408F;
    }
}

void sub_80540A5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80540B0: &sub_80540AE;
}

void sub_805410B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054116: &sub_8054114;
}

void sub_8054171() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805415B: &sub_805417A;
}

void sub_80541D7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80541C1: &sub_80541E0;
}

void sub_805423D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054227: &sub_8054246;
}

void sub_80542A3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805428D: &sub_80542AC;
}

void sub_8054309() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80542F3: &sub_8054312;
}

void sub_805436F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054359: &sub_8054378;
}

void sub_80543D5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80543BF: &sub_80543DE;
}

void sub_805443B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054425: &sub_8054444;
}

void sub_80544A1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805448B: &sub_80544AA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80544DE() {
    →puts();
    return 0;
}

void sub_8054507() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80544F1: &sub_8054510;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054544() {
    →puts();
    return 0;
}

void sub_805456D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054557: &sub_8054576;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80545AA() {
    →puts();
    return 0;
}

void sub_80545D3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80545BD: &sub_80545DC;
}

void sub_8054639() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054623: &sub_8054642;
}

void sub_805469F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054689: &sub_80546A8;
}

void sub_8054705() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80546EF: &sub_805470E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054742() {
    →puts();
    return 0;
}

void sub_805476B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054755: &sub_8054774;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80547A8() {
    →puts();
    return 0;
}

void sub_80547D1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80547BB: &sub_80547DA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805480E() {
    →puts();
    return 0;
}

void sub_8054837() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054821: &sub_8054840;
}

void sub_805489D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054887: &sub_80548A6;
}

void sub_8054903() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80548ED: &sub_805490C;
}

void sub_8054969() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054953: &sub_8054972;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80549A6() {
    →puts();
    return 0;
}

void sub_80549CF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80549B9: &sub_80549D8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054A0C() {
    →puts();
    return 0;
}

void sub_8054A35() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054A1F: &sub_8054A3E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054A72() {
    →puts();
    return 0;
}

void sub_8054A9B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8054A85: &sub_8054AA4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8054BD8() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8054BC9: &sub_8054BEE;
}

int →sub_8054E0C() {
    return sub_8054E0C();
}

int →sub_8054E7B() {
    return sub_8054E7B();
}

int →sub_8054EEA() {
    return sub_8054EEA();
}

int →sub_8054F59() {
    return sub_8054F59();
}

int →sub_8054FC8() {
    return sub_8054FC8();
}

int →sub_8055037() {
    return sub_8055037();
}

int →sub_80550A6() {
    return sub_80550A6();
}

int →sub_8055115() {
    return sub_8055115();
}

int →sub_8055184() {
    return sub_8055184();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80551F1() {
    char v0;
    int v1 = "block 3";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A8 ? 0: 1;
    char v3 = gvar_80610A8 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A8);
    char v5 = gvar_80610A8 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80551C8: &sub_8055209;
}

int →sub_8055262() {
    return sub_8055262();
}

int →sub_80552D1() {
    return sub_80552D1();
}

int →sub_8055340() {
    return sub_8055340();
}

int →sub_80553AF() {
    return sub_80553AF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80553F3() {
    →puts();
    return 0;
}

int →sub_805541E() {
    return sub_805541E();
}

int →sub_805548D() {
    return sub_805548D();
}

int →sub_80554FC() {
    return sub_80554FC();
}

int →sub_805556B() {
    return sub_805556B();
}

int →sub_80555DA() {
    return sub_80555DA();
}

int →sub_8055649() {
    return sub_8055649();
}

int →sub_80556B8() {
    return sub_80556B8();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805570F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055727: &sub_805570F;
    }
}

int →sub_8055727() {
    return sub_8055727();
}

int →sub_8055796() {
    return sub_8055796();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80557ED() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055805: &sub_80557ED;
    }
}

int →sub_8055805() {
    return sub_8055805();
}

int →sub_8055874() {
    return sub_8055874();
}

int →sub_80558E3() {
    return sub_80558E3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805593A() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055952: &sub_805593A;
    }
}

int →sub_8055952() {
    return sub_8055952();
}

int →sub_80559C1() {
    return sub_80559C1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055A18() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055A30: &sub_8055A18;
    }
}

int →sub_8055A30() {
    return sub_8055A30();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055A87() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055A9F: &sub_8055A87;
    }
}

int →sub_8055A9F() {
    return sub_8055A9F();
}

int →sub_8055B0E() {
    return sub_8055B0E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055B65() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055B7D: &sub_8055B65;
    }
}

int →sub_8055B7D() {
    return sub_8055B7D();
}

int →sub_8055BEC() {
    return sub_8055BEC();
}

int →sub_8055C5B() {
    return sub_8055C5B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055CB2() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055CCA: &sub_8055CB2;
    }
}

int →sub_8055CCA() {
    return sub_8055CCA();
}

int →sub_8055D39() {
    return sub_8055D39();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055D90() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055DA8: &sub_8055D90;
    }
}

int →sub_8055DA8() {
    return sub_8055DA8();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055DFF() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055E17: &sub_8055DFF;
    }
}

int →sub_8055E17() {
    return sub_8055E17();
}

int →sub_8055E86() {
    return sub_8055E86();
}

int →sub_8055EF5() {
    return sub_8055EF5();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8055F4C() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055F64: &sub_8055F4C;
    }
}

int →sub_8055F64() {
    return sub_8055F64();
}

int →sub_8055FEB() {
    return sub_8055FEB();
}

int →sub_805605A() {
    return sub_805605A();
}

int →sub_80560C9() {
    return sub_80560C9();
}

int →sub_8056138() {
    return sub_8056138();
}

int →sub_80561A7() {
    return sub_80561A7();
}

int →sub_8056216() {
    return sub_8056216();
}

int →sub_805628E() {
    return sub_805628E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int →sub_80562FD() {
    return sub_80562FD();
}

int →sub_805636C() {
    return sub_805636C();
}

int →sub_80563DB() {
    return sub_80563DB();
}

int →sub_805644A() {
    return sub_805644A();
}

int →sub_80564B9() {
    return sub_80564B9();
}

int →sub_8056528() {
    return sub_8056528();
}

int →sub_8056597() {
    return sub_8056597();
}

int →sub_8056606() {
    return sub_8056606();
}

void sub_8056652() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805663C: &sub_805665B;
}

void sub_80566C1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80566AB: &sub_80566CA;
}

void sub_8056730() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805671A: &sub_8056739;
}

void sub_805679F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056789: &sub_80567A8;
}

void sub_805680E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80567F8: &sub_8056817;
}

void sub_805687D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056867: &sub_8056886;
}

void sub_80568EC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80568D6: &sub_80568F5;
}

void sub_805695B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056945: &sub_8056964;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80569A1() {
    →puts();
    return 0;
}

void sub_80569CA() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80569B4: &sub_80569D3;
}

void sub_8056A39() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056A23: &sub_8056A42;
}

void sub_8056AA8() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056A92: &sub_8056AB1;
}

void sub_8056B17() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056B01: &sub_8056B20;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8056B5D() {
    →puts();
    return 0;
}

void sub_8056B86() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056B70: &sub_8056B8F;
}

void sub_8056BF5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056BDF: &sub_8056BFE;
}

void sub_8056C64() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056C4E: &sub_8056C6D;
}

void sub_8056CD3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056CBD: &sub_8056CDC;
}

void sub_8056D42() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056D2C: &sub_8056D4B;
}

void sub_8056DB1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056D9B: &sub_8056DBA;
}

void sub_8056E20() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056E0A: &sub_8056E29;
}

void sub_8056E8F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056E79: &sub_8056E98;
}

void sub_8056EFE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056EE8: &sub_8056F07;
}

void sub_8056F6D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056F57: &sub_8056F76;
}

void sub_8056FDC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8056FC6: &sub_8056FE5;
}

void sub_805704B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057035: &sub_8057054;
}

void sub_80570BA() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80570A4: &sub_80570C3;
}

void sub_8057129() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057113: &sub_8057132;
}

void sub_8057198() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057182: &sub_80571A1;
}

void sub_8057207() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80571F1: &sub_8057210;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805724D() {
    →puts();
    return 0;
}

void sub_8057276() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057260: &sub_805727F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80572BC() {
    →puts();
    return 0;
}

void sub_80572E5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80572CF: &sub_80572EE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805732B() {
    →puts();
    return 0;
}

void sub_8057354() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805733E: &sub_805735D;
}

void sub_80573C3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80573AD: &sub_80573CC;
}

void sub_8057432() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805741C: &sub_805743B;
}

void sub_80574A1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805748B: &sub_80574AA;
}

void sub_8057510() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80574FA: &sub_8057519;
}

void sub_805757F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805758A: &sub_8057588;
}

void sub_80575EE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80575F9: &sub_80575F7;
}

void sub_805765D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057668: &sub_8057666;
}

void sub_80576CC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80576D7: &sub_80576D5;
}

void sub_805773B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057746: &sub_8057744;
}

void sub_80577AA() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80577B5: &sub_80577B3;
}

void sub_8057819() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057824: &sub_8057822;
}

void sub_8057888() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057893: &sub_8057891;
}

void sub_80578F7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057902: &sub_8057900;
}

void sub_8057966() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057971: &sub_805796F;
}

void sub_80579D5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80579E0: &sub_80579DE;
}

void sub_8057A44() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057A4F: &sub_8057A4D;
}

void sub_8057AB3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057ABE: &sub_8057ABC;
}

void sub_8057B22() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057B2D: &sub_8057B2B;
}

void sub_8057B91() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057B9C: &sub_8057B9A;
}

void sub_8057C00() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057C0B: &sub_8057C09;
}

void sub_8057C6F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057C7A: &sub_8057C78;
}

void sub_8057CDE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057CE9: &sub_8057CE7;
}

void sub_8057D4D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057D58: &sub_8057D56;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8057D93() {
    →puts();
    return 0;
}

void sub_8057DBC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057DC7: &sub_8057DC5;
}

void sub_8057E2B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057E36: &sub_8057E34;
}

void sub_8057E9A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057EA5: &sub_8057EA3;
}

void sub_8057F09() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057F14: &sub_8057F12;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8057F4F() {
    →puts();
    return 0;
}

void sub_8057F78() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057F83: &sub_8057F81;
}

void sub_8057FE7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8057FF2: &sub_8057FF0;
}

void sub_8058056() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058061: &sub_805805F;
}

void sub_80580C5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80580D0: &sub_80580CE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805810B() {
    →puts();
    return 0;
}

void sub_8058134() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805813F: &sub_805813D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805818D() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80581A3: &sub_805818D;
    }
}

void sub_80581A3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80581AE: &sub_80581AC;
}

void sub_8058212() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805821D: &sub_805821B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805826B() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058281: &sub_805826B;
    }
}

void sub_8058281() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805828C: &sub_805828A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80582DA() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80582F0: &sub_80582DA;
    }
}

void sub_80582F0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80582FB: &sub_80582F9;
}

void sub_805835F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805836A: &sub_8058368;
}

void sub_80583CE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80583D9: &sub_80583D7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058427() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805843D: &sub_8058427;
    }
}

void sub_805843D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058448: &sub_8058446;
}

void sub_80584AC() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80584B7: &sub_80584B5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058505() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805851B: &sub_8058505;
    }
}

void sub_805851B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058526: &sub_8058524;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058574() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805858A: &sub_8058574;
    }
}

void sub_805858A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058595: &sub_8058593;
}

void sub_80585F9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058604: &sub_8058602;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058652() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058668: &sub_8058652;
    }
}

void sub_8058668() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058673: &sub_8058671;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80586C1() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80586D7: &sub_80586C1;
    }
}

void sub_80586D7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80586E2: &sub_80586E0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058730() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058746: &sub_8058730;
    }
}

void sub_8058746() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058751: &sub_805874F;
}

void sub_80587B5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80587C0: &sub_80587BE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805880E() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058824: &sub_805880E;
    }
}

void sub_8058824() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805882F: &sub_805882D;
}

void sub_8058893() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805889E: &sub_805889C;
}

void sub_8058902() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805890D: &sub_805890B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805895B() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058971: &sub_805895B;
    }
}

void sub_8058971() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805897C: &sub_805897A;
}

void sub_80589E0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80589EB: &sub_80589E9;
}

void sub_8058A4F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058A5A: &sub_8058A58;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058AA8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058ABE: &sub_8058AA8;
    }
}

void sub_8058ABE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058AC9: &sub_8058AC7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058B17() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058B2D: &sub_8058B17;
    }
}

void sub_8058B2D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058B38: &sub_8058B36;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058B86() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058B9C: &sub_8058B86;
    }
}

void sub_8058B9C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058BA7: &sub_8058BA5;
}

void sub_8058C0B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058C16: &sub_8058C14;
}

void sub_8058C7A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058C64: &sub_8058C83;
}

void sub_8058CE9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058CD3: &sub_8058CF2;
}

void sub_8058D58() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058D42: &sub_8058D61;
}

void sub_8058DC7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058DB1: &sub_8058DD0;
}

void sub_8058E36() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058E20: &sub_8058E3F;
}

void sub_8058EA5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058E8F: &sub_8058EAE;
}

void sub_8058F14() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058EFE: &sub_8058F1D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8058F5A() {
    →puts();
    return 0;
}

void sub_8058F83() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058F6D: &sub_8058F8C;
}

void sub_8058FF2() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8058FDC: &sub_8058FFB;
}

void sub_8059061() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805904B: &sub_805906A;
}

void sub_80590D0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80590BA: &sub_80590D9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8059116() {
    →puts();
    return 0;
}

void sub_805913F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059129: &sub_8059148;
}

void sub_80591AE() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059198: &sub_80591B7;
}

void sub_805921D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059207: &sub_8059226;
}

void sub_805928C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059276: &sub_8059295;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80592D2() {
    →puts();
    return 0;
}

void sub_80592FB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80592E5: &sub_8059304;
}

void sub_805936A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059354: &sub_8059373;
}

void sub_80593D9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80593C3: &sub_80593E2;
}

void sub_8059448() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059432: &sub_8059451;
}

void sub_80594B7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80594A1: &sub_80594C0;
}

void sub_8059526() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059510: &sub_805952F;
}

void sub_8059595() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805957F: &sub_805959E;
}

void sub_8059604() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80595EE: &sub_805960D;
}

void sub_8059673() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805965D: &sub_805967C;
}

void sub_80596E2() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80596CC: &sub_80596EB;
}

void sub_8059751() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805973B: &sub_805975A;
}

void sub_80597C0() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80597AA: &sub_80597C9;
}

void sub_805982F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059819: &sub_8059838;
}

void sub_805989E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059888: &sub_80598A7;
}

void sub_805990D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80598F7: &sub_8059916;
}

void sub_805997C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059966: &sub_8059985;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_80599C2() {
    →puts();
    return 0;
}

void sub_80599EB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_80599D5: &sub_80599F4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8059A31() {
    →puts();
    return 0;
}

void sub_8059A5A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059A44: &sub_8059A63;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8059AA0() {
    →puts();
    return 0;
}

void sub_8059AC9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059AB3: &sub_8059AD2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8059B0F() {
    →puts();
    return 0;
}

void sub_8059B38() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059B22: &sub_8059B41;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8059B7E() {
    →puts();
    return 0;
}

void sub_8059BA7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059B91: &sub_8059BB0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_8059BED() {
    →puts();
    return 0;
}

void sub_8059C16() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_8059C00: &sub_8059C1F;
}

int →sub_8059CFF() {
    return sub_8059CFF();
}

int →sub_8059D77() {
    return sub_8059D77();
}

int →sub_8059DEF() {
    return sub_8059DEF();
}

int →sub_8059E67() {
    return sub_8059E67();
}

int →sub_8059EDF() {
    return sub_8059EDF();
}

int →sub_8059F57() {
    return sub_8059F57();
}

int →sub_8059FCF() {
    return sub_8059FCF();
}

int →sub_805A047() {
    return sub_805A047();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805A0A7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_805A0BF: &sub_805A0A7;
    }
}

int →sub_805A0BF() {
    return sub_805A0BF();
}

int →sub_805A137() {
    return sub_805A137();
}

int →sub_805A1AF() {
    return sub_805A1AF();
}

int →sub_805A227() {
    return sub_805A227();
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805A287() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_805A29F: &sub_805A287;
    }
}

int →sub_805A29F() {
    return sub_805A29F();
}

int →sub_805A317() {
    return sub_805A317();
}

int →sub_805A3B0() {
    return sub_805A3B0();
}

int →sub_805A428() {
    return sub_805A428();
}

int →sub_805A4A0() {
    return sub_805A4A0();
}

int →sub_805A518() {
    return sub_805A518();
}

void sub_805A56D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A557: &sub_805A576;
}

void sub_805A5E5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A5CF: &sub_805A5EE;
}

void sub_805A65D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A647: &sub_805A666;
}

void sub_805A6D5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A6BF: &sub_805A6DE;
}

void sub_805A74D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A737: &sub_805A756;
}

void sub_805A7C5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A7AF: &sub_805A7CE;
}

void sub_805A83D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A827: &sub_805A846;
}

void sub_805A8B5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A89F: &sub_805A8BE;
}

void sub_805A92D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A917: &sub_805A936;
}

void sub_805A9A5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805A98F: &sub_805A9AE;
}

void sub_805AA1D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AA07: &sub_805AA26;
}

void sub_805AA95() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AA7F: &sub_805AA9E;
}

void sub_805AB0D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AAF7: &sub_805AB16;
}

void sub_805AB85() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AB6F: &sub_805AB8E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805ABD4() {
    →puts();
    return 0;
}

void sub_805ABFD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805ABE7: &sub_805AC06;
}

void sub_805AC75() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AC5F: &sub_805AC7E;
}

void sub_805ACED() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805ACD7: &sub_805ACF6;
}

void sub_805AD65() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AD4F: &sub_805AD6E;
}

void sub_805ADDD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805ADC7: &sub_805ADE6;
}

void sub_805AE55() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AE3F: &sub_805AE5E;
}

void sub_805AECD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AEB7: &sub_805AED6;
}

void sub_805AF45() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AF50: &sub_805AF4E;
}

void sub_805AFBD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805AFC8: &sub_805AFC6;
}

void sub_805B035() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B040: &sub_805B03E;
}

void sub_805B0AD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B0B8: &sub_805B0B6;
}

void sub_805B125() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B130: &sub_805B12E;
}

void sub_805B19D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B1A8: &sub_805B1A6;
}

void sub_805B215() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B220: &sub_805B21E;
}

void sub_805B28D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B298: &sub_805B296;
}

void sub_805B305() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B310: &sub_805B30E;
}

void sub_805B37D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B388: &sub_805B386;
}

void sub_805B3F5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B400: &sub_805B3FE;
}

void sub_805B46D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B478: &sub_805B476;
}

void sub_805B4E5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B4F0: &sub_805B4EE;
}

void sub_805B55D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B568: &sub_805B566;
}

void sub_805B5D5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B5E0: &sub_805B5DE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805B624() {
    →puts();
    return 0;
}

void sub_805B64D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B658: &sub_805B656;
}

void sub_805B6C5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B6D0: &sub_805B6CE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805B727() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805B73D: &sub_805B727;
    }
}

void sub_805B73D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B748: &sub_805B746;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805B79F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805B7B5: &sub_805B79F;
    }
}

void sub_805B7B5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B7C0: &sub_805B7BE;
}

void sub_805B82D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B838: &sub_805B836;
}

void sub_805B8A5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B8B0: &sub_805B8AE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805B907() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805B91D: &sub_805B907;
    }
}

void sub_805B91D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B928: &sub_805B926;
}

void sub_805B995() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805B9A0: &sub_805B99E;
}

void sub_805BA0D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BA18: &sub_805BA16;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BA6F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805BA85: &sub_805BA6F;
    }
}

void sub_805BA85() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BA90: &sub_805BA8E;
}

void sub_805BAFD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BB08: &sub_805BB06;
}

void sub_805BB75() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BB80: &sub_805BB7E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BBD7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805BBED: &sub_805BBD7;
    }
}

void sub_805BBED() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BBF8: &sub_805BBF6;
}

void sub_805BC65() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BC70: &sub_805BC6E;
}

void sub_805BCDD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BCE8: &sub_805BCE6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805BD3F() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805BD55: &sub_805BD3F;
    }
}

void sub_805BD55() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BD60: &sub_805BD5E;
}

void sub_805BDCD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BDB7: &sub_805BDD6;
}

void sub_805BE45() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BE2F: &sub_805BE4E;
}

void sub_805BEBD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BEA7: &sub_805BEC6;
}

void sub_805BF35() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BF1F: &sub_805BF3E;
}

void sub_805BFAD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805BF97: &sub_805BFB6;
}

void sub_805C025() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C00F: &sub_805C02E;
}

void sub_805C09D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C087: &sub_805C0A6;
}

void sub_805C115() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C0FF: &sub_805C11E;
}

void sub_805C18D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C177: &sub_805C196;
}

void sub_805C205() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C1EF: &sub_805C20E;
}

void sub_805C27D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C267: &sub_805C286;
}

void sub_805C2F5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C2DF: &sub_805C2FE;
}

void sub_805C36D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C357: &sub_805C376;
}

void sub_805C3E5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C3CF: &sub_805C3EE;
}

void sub_805C45D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C447: &sub_805C466;
}

void sub_805C4D5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C4BF: &sub_805C4DE;
}

void sub_805C54D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C537: &sub_805C556;
}

void sub_805C5C5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C5AF: &sub_805C5CE;
}

void sub_805C63D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C627: &sub_805C646;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805C68C() {
    →puts();
    return 0;
}

void sub_805C6B5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C69F: &sub_805C6BE;
}

void sub_805C72D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C717: &sub_805C736;
}

void sub_805C7A5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C78F: &sub_805C7AE;
}

void sub_805C81D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C807: &sub_805C826;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805C86C() {
    →puts();
    return 0;
}

void sub_805C895() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C87F: &sub_805C89E;
}

void sub_805C90D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C8F7: &sub_805C916;
}

void sub_805C985() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C96F: &sub_805C98E;
}

void sub_805C9FD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805C9E7: &sub_805CA06;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805CA4C() {
    →puts();
    return 0;
}

void sub_805CA75() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CA5F: &sub_805CA7E;
}

int →sub_805CAEF() {
    return sub_805CAEF();
}

int →sub_805CB70() {
    return sub_805CB70();
}

int →sub_805CC1B() {
    return sub_805CC1B();
}

void sub_805CC70() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CC5A: &sub_805CC79;
}

void sub_805CCF1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CCDB: &sub_805CCFA;
}

void sub_805CD72() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CD5C: &sub_805CD7B;
}

void sub_805CDF3() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CDDD: &sub_805CDFC;
}

void sub_805CE74() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CE5E: &sub_805CE7D;
}

void sub_805CEF5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CEDF: &sub_805CEFE;
}

void sub_805CF76() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805CF60: &sub_805CF7F;
}

void sub_805CFF7() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D002: &sub_805D000;
}

void sub_805D078() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D083: &sub_805D081;
}

void sub_805D0F9() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D104: &sub_805D102;
}

void sub_805D17A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D185: &sub_805D183;
}

void sub_805D1FB() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D206: &sub_805D204;
}

void sub_805D27C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D287: &sub_805D285;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805D2E7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805D2FD: &sub_805D2E7;
    }
}

void sub_805D2FD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D308: &sub_805D306;
}

void sub_805D37E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D389: &sub_805D387;
}

void sub_805D3FF() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D3E9: &sub_805D408;
}

void sub_805D480() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D46A: &sub_805D489;
}

void sub_805D501() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D4EB: &sub_805D50A;
}

void sub_805D582() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D56C: &sub_805D58B;
}

void sub_805D603() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D5ED: &sub_805D60C;
}

void sub_805D684() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D66E: &sub_805D68D;
}

void sub_805D705() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D6EF: &sub_805D70E;
}

void sub_805D786() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D770: &sub_805D78F;
}

void sub_805D807() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D7F1: &sub_805D810;
}

void sub_805D888() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D872: &sub_805D891;
}

void sub_805D909() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D8F3: &sub_805D912;
}

void sub_805D98A() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D974: &sub_805D993;
}

void sub_805DA0B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805D9F5: &sub_805DA14;
}

void sub_805DA8C() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DA76: &sub_805DA95;
}

void sub_805DB0D() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DAF7: &sub_805DB16;
}

// Stale decompilation - Refresh this view to re-decompile this code
int sub_805DB65() {
    →puts();
    return 0;
}

void sub_805DB8E() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DB78: &sub_805DB97;
}

void sub_805DC0F() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DBF9: &sub_805DC18;
}

void sub_805DC99() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DCA4: &sub_805DCA2;
}

void sub_805DD23() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DD2E: &sub_805DD2C;
}

void sub_805DDAD() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DD97: &sub_805DDB6;
}

void sub_805DE37() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DE21: &sub_805DE40;
}

void sub_805DEC1() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DEAB: &sub_805DECA;
}

void sub_805DF4B() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DF35: &sub_805DF54;
}

void sub_805DFD5() {
    char v0 = gvar_80610A8 ? 0: 1;
    char v1 = gvar_80610A8 >= 0x80000000;
    char v2 = __parity__((unsigned char)gvar_80610A8);
    char v3 = gvar_80610A8 < 0;
    char v4 = 0;
    char v5 = 0;
    jump v0 ? &sub_805DFBF: &sub_805DFDE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_1_blocks_variant_0_edges_2() {
    →puts();
    return sub_8048439();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_0_edges_3() {
    →puts();
    return sub_80484AC();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_10_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80486F4: &→sub_804871F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_12_edges_5() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_80487A9: &loc_8048791;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_16_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8048892: &→sub_80488BD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_1_edges_4() {
    →puts();
    return sub_80484DF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_2_edges_4() {
    →puts();
    return sub_804851B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_3_edges_4() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048535: &sub_804855E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_4_edges_4() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048571: &→sub_804859C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_5_edges_4() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80485AD: &sub_80485D6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_6_edges_4() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8048614: &loc_80485FC;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_7_edges_5() {
    →puts();
    return sub_8048647();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_8_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804866A: &→sub_8048695;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_2_blocks_variant_9_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80486AF: &sub_80486D8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_0_edges_4() {
    →puts();
    return sub_8048A91();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_101_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804AB08: &loc_804AAF2;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_102_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804AB5C: &loc_804AB46;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_103_edges_7() {
    →puts();
    return sub_804ABA9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_104_edges_7() {
    →puts();
    return sub_804AC06();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_105_edges_7() {
    →puts();
    return sub_804AC63();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_106_edges_7() {
    →puts();
    return sub_804ACC0();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_107_edges_7() {
    →puts();
    return sub_804AD1D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_10_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048D54: &sub_8048D7D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_111_edges_7() {
    →puts();
    return sub_804AE91();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_112_edges_7() {
    →puts();
    return sub_804AEEE();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_113_edges_7() {
    →puts();
    return sub_804AF4B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_114_edges_7() {
    →puts();
    return sub_804AFA8();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_115_edges_7() {
    →puts();
    return sub_804B005();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_116_edges_7() {
    →puts();
    return sub_804B062();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_117_edges_7() {
    →puts();
    return sub_804B0BF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_118_edges_7() {
    →puts();
    return sub_804B11C();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_119_edges_7() {
    →puts();
    return sub_804B179();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_11_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048D9F: &→sub_8048DCA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_120_edges_7() {
    →puts();
    return sub_804B1D6();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_121_edges_7() {
    →puts();
    return sub_804B233();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_122_edges_7() {
    →puts();
    return sub_804B290();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_123_edges_7() {
    →puts();
    return sub_804B2ED();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_124_edges_7() {
    →puts();
    return sub_804B34A();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_125_edges_7() {
    →puts();
    return sub_804B3A7();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_129_edges_7() {
    →puts();
    return sub_804B51B();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_12_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048DEA: &sub_8048E13;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_130_edges_7() {
    →puts();
    return sub_804B578();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_131_edges_7() {
    →puts();
    return sub_804B5D5();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_132_edges_7() {
    →puts();
    return sub_804B632();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_133_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B66D: &→sub_804B698;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_134_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B6CA: &→sub_804B6F5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_135_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B727: &sub_804B750;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_136_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B784: &→sub_804B7AF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_137_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B7E1: &→sub_804B80C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_138_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B83E: &sub_804B867;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_139_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B89B: &sub_804B8C4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_13_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048E35: &sub_8048E5E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_140_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B8F8: &→sub_804B923;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_141_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804B955: &→sub_804B980;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_142_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804B9B2: &sub_804B9DB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_143_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BA0F: &→sub_804BA3A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_144_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BA6C: &→sub_804BA97;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_145_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BAC9: &→sub_804BAF4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_146_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BB26: &→sub_804BB51;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_147_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BB83: &→sub_804BBAE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_148_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BBE0: &→sub_804BC0B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_149_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BC3D: &→sub_804BC68;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_14_edges_5() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8048EAB: &loc_8048E93;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_150_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BC9A: &→sub_804BCC5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_151_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BCF7: &sub_804BD20;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_152_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BD54: &→sub_804BD7F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_153_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BDB1: &→sub_804BDDC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_154_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BE0E: &→sub_804BE39;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_155_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BE6B: &→sub_804BE96;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_156_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BEC8: &→sub_804BEF3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_157_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BF25: &→sub_804BF50;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_158_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804BF82: &→sub_804BFAD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_159_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804BFDF: &sub_804C008;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_15_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048EF6: &→sub_8048F05;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_160_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804C03C: &→sub_804C067;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_161_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C099: &sub_804C0C2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_162_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C0F6: &sub_804C11F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_163_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804C153: &→sub_804C17E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_164_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C1B0: &→sub_804C1DB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_165_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C20D: &→sub_804C238;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_166_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804C26A: &→sub_804C295;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_169_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C3AC: &loc_804C394;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_16_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048F41: &→sub_8048F50;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_171_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C466: &loc_804C44E;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_172_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C4C3: &loc_804C4AB;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_175_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C5DA: &loc_804C5C2;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_17_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048F8C: &sub_8048F8A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_180_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C7AB: &loc_804C793;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_181_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C808: &loc_804C7F0;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_186_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804C9D9: &loc_804C9C1;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_188_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804CA93: &loc_804CA7B;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_189_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804CAF0: &loc_804CAD8;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_18_edges_5() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8048FD7: &sub_8048FD5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_191_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804CBAA: &→sub_804CBB9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_192_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804CC07: &→sub_804CC16;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_193_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804CC64: &sub_804CC62;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_194_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804CCC1: &→sub_804CCD0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_195_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804CD1E: &→sub_804CD2D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_197_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804CDD8: &→sub_804CDE7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_198_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804CE35: &→sub_804CE44;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_199_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804CE92: &→sub_804CEA1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_19_edges_6() {
    →puts();
    return sub_8049019();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_1_edges_5() {
    →puts();
    return sub_8048AD3();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_200_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804CEEF: &→sub_804CEFE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_201_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804CF4C: &→sub_804CF5B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_202_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804CFA9: &→sub_804CFB8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_203_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D006: &→sub_804D015;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_204_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D063: &→sub_804D07B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_205_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804D0C0: &→sub_804D0D8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_206_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D11D: &→sub_804D135;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_207_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804D17A: &→sub_804D192;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_208_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D1D7: &→sub_804D1EF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_209_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804D234: &→sub_804D24C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_20_edges_6() {
    →puts();
    return sub_804906D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_210_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D291: &sub_804D28F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_211_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D2EE: &→sub_804D306;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_212_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804D34B: &→sub_804D363;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_213_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D3A8: &→sub_804D3C0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_214_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D405: &sub_804D403;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_215_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D462: &→sub_804D47A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_216_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804D4BF: &→sub_804D4D7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_217_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D51C: &→sub_804D534;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_218_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804D579: &→sub_804D591;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_21_edges_6() {
    →puts();
    return sub_80490C1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_22_edges_6() {
    →puts();
    return sub_8049115();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_237_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804DC35: &sub_804DC5E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_238_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804DC92: &sub_804DCBB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_239_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804DCEF: &sub_804DD18;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_23_edges_6() {
    →puts();
    return sub_8049169();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_240_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804DD4C: &sub_804DD75;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_241_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804DDA9: &sub_804DDD2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_242_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804DE06: &sub_804DE2F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_243_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804DE63: &sub_804DE8C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_244_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804DEC0: &sub_804DEE9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_245_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804DF1D: &sub_804DF46;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_246_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804DF7A: &sub_804DFA3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_247_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804DFD7: &sub_804E000;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_248_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E034: &sub_804E05D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_249_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804E091: &sub_804E0BA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_24_edges_6() {
    int v0 = "block 2";
    →puts();
    /*NO_RETURN*/ sub_80491BD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_250_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E0EE: &sub_804E117;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_251_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E14B: &sub_804E174;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_252_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E1A8: &sub_804E1D1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_253_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E205: &sub_804E22E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_254_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E262: &sub_804E28B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_255_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804E2BF: &sub_804E2E8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_256_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E31C: &sub_804E345;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_257_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E379: &sub_804E3A2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_258_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E3D6: &sub_804E3FF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_259_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E433: &sub_804E45C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_25_edges_6() {
    →puts();
    return sub_8049211();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_260_edges_7() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804E490: &sub_804E4B9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_262_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E573: &loc_804E55D;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_263_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E5D0: &loc_804E5BA;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_266_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E6E7: &loc_804E6D1;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_26_edges_6() {
    →puts();
    return sub_8049265();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_271_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E8B8: &loc_804E8A2;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_272_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E915: &loc_804E8FF;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_274_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804E9CF: &loc_804E9B9;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_275_edges_7() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804EA2C: &loc_804EA16;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_27_edges_6() {
    int v0 = "block 2";
    →puts();
    /*NO_RETURN*/ sub_80492B9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_286_edges_8() {
    →puts();
    return sub_804EE24();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_288_edges_8() {
    →puts();
    return sub_804EEF0();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_289_edges_8() {
    →puts();
    return sub_804EF56();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_290_edges_8() {
    →puts();
    return sub_804EFBC();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_291_edges_8() {
    →puts();
    return sub_804F022();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_292_edges_8() {
    →puts();
    return sub_804F088();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_293_edges_8() {
    →puts();
    return sub_804F0EE();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_294_edges_8() {
    →puts();
    return sub_804F154();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_295_edges_8() {
    →puts();
    return sub_804F1BA();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_296_edges_8() {
    →puts();
    return sub_804F220();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_2_edges_5() {
    →puts();
    return sub_8048B1E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_300_edges_8() {
    →puts();
    return sub_804F3B8();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_301_edges_8() {
    →puts();
    return sub_804F41E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_302_edges_8() {
    →puts();
    return sub_804F484();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_303_edges_8() {
    →puts();
    return sub_804F4EA();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_304_edges_8() {
    →puts();
    return sub_804F550();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_305_edges_8() {
    →puts();
    return sub_804F5B6();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_306_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F5FA: &→sub_804F625;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_307_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F660: &→sub_804F68B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_308_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F6C6: &→sub_804F6F1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_309_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804F72C: &sub_804F755;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_310_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F792: &→sub_804F7BD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_311_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F7F8: &→sub_804F823;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_312_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F85E: &→sub_804F889;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_313_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F8C4: &→sub_804F8EF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_314_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804F92A: &→sub_804F955;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_315_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F990: &→sub_804F9BB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_316_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804F9F6: &→sub_804FA21;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_317_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FA5C: &→sub_804FA87;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_318_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FAC2: &→sub_804FAED;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_319_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FB28: &→sub_804FB53;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_31_edges_6() {
    →puts();
    return sub_8049409();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_320_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FB8E: &→sub_804FBB9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_321_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FBF4: &→sub_804FC1F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_322_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FC5A: &→sub_804FC85;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_323_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FCC0: &→sub_804FCEB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_324_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FD26: &→sub_804FD51;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_325_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FD8C: &→sub_804FDB7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_326_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FDF2: &sub_804FE1B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_327_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FE58: &sub_804FE81;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_328_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FEBE: &→sub_804FEE9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_329_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FF24: &→sub_804FF4F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_32_edges_6() {
    →puts();
    return sub_804945D();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_330_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804FF8A: &sub_804FFB3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_331_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804FFF0: &→sub_805001B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_332_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8050056: &→sub_8050081;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_333_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80500BC: &→sub_80500E7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_334_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8050122: &→sub_805014D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_335_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8050188: &→sub_80501B3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_336_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80501EE: &→sub_8050219;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_337_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8050254: &→sub_805027F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_338_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80502BA: &→sub_80502E5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_339_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8050320: &→sub_805034B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_33_edges_6() {
    →puts();
    return sub_80494B1();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_340_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8050386: &→sub_80503B1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_344_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050549: &loc_8050531;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_34_edges_6() {
    →puts();
    return sub_8049505();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_351_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050813: &loc_80507FB;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_359_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050B43: &loc_8050B2B;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_35_edges_6() {
    →puts();
    return sub_8049559();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_360_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050BA9: &loc_8050B91;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_363_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8050CDB: &loc_8050CC3;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_36_edges_6() {
    →puts();
    return sub_80495AD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_371_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805100B: &→sub_805101A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_372_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8051071: &→sub_8051080;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_373_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80510D7: &→sub_80510E6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_374_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805113D: &→sub_805114C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_375_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80511A3: &→sub_80511BB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_376_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8051209: &→sub_8051221;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_377_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805126F: &→sub_8051287;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_378_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80512D5: &→sub_80512ED;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_379_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805133B: &→sub_8051353;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_37_edges_6() {
    →puts();
    return sub_8049601();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_380_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80513A1: &→sub_80513B9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_381_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8051407: &sub_8051405;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_382_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805146D: &→sub_8051485;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_383_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80514D3: &→sub_80514EB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_384_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8051539: &→sub_8051551;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_385_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805159F: &→sub_80515B7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_386_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8051605: &→sub_805161D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_387_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805166B: &→sub_8051683;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_389_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8051737: &→sub_805174F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_38_edges_6() {
    →puts();
    return sub_8049655();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_390_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805179D: &→sub_80517B5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_392_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8051869: &→sub_8051881;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_393_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80518CF: &→sub_80518E7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_394_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8051935: &→sub_805194D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_395_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805199B: &→sub_80519B3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_39_edges_6() {
    →puts();
    return sub_80496A9();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_3_edges_5() {
    →puts();
    return sub_8048B69();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_40_edges_6() {
    →puts();
    return sub_80496FD();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_41_edges_6() {
    int v0 = "block 2";
    →puts();
    /*NO_RETURN*/ sub_8049751();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_430_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052762: &sub_805278B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_431_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80527C8: &sub_80527F1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_432_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805282E: &sub_8052857;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_433_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052894: &sub_80528BD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_434_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80528FA: &sub_8052923;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_435_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052960: &sub_8052989;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_436_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80529C6: &sub_80529EF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_437_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8052A2C: &sub_8052A55;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_438_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052A92: &sub_8052ABB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_439_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052AF8: &sub_8052B21;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_43_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80497D7: &→sub_8049802;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_440_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8052B5E: &sub_8052B87;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_442_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052C2A: &sub_8052C53;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_443_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052C90: &sub_8052CB9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_444_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8052CF6: &sub_8052D1F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_445_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8052D5C: &sub_8052D85;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_446_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052DC2: &sub_8052DEB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_447_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052E28: &sub_8052E51;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_448_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052E8E: &sub_8052EB7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_449_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052EF4: &sub_8052F1D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_44_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804982B: &sub_8049854;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_450_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052F5A: &sub_8052F83;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_451_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8052FC0: &sub_8052FE9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_452_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8053026: &sub_805304F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_453_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805308C: &sub_80530B5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_454_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80530F2: &sub_805311B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_455_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8053158: &sub_8053181;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_456_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80531BE: &sub_80531E7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_457_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8053224: &sub_805324D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_458_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805328A: &sub_80532B3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_459_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80532F0: &sub_8053319;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_45_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804987F: &sub_80498A8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_460_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8053356: &sub_805337F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_461_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80533BC: &sub_80533E5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_462_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8053422: &sub_805344B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_463_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8053488: &sub_80534B1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_464_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80534EE: &sub_8053517;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_465_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8053554: &sub_805357D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_466_edges_8() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80535BA: &sub_80535E3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_469_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053715: &loc_80536FF;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_46_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80498D3: &→sub_80498FE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_476_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80539DF: &loc_80539C9;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_479_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053B11: &loc_8053AFB;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_47_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049927: &→sub_8049952;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_486_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053DDB: &loc_8053DC5;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_487_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053E41: &loc_8053E2B;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_48_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804997B: &sub_80499A4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_490_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053F73: &loc_8053F5D;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_491_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8053FD9: &loc_8053FC3;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_494_edges_8() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805410B: &loc_80540F5;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_49_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80499CF: &sub_80499F8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_4_edges_5() {
    →puts();
    return sub_8048BB4();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_50_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8049A23: &→sub_8049A4E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_519_edges_9() {
    →puts();
    return sub_8054AFA();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_51_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049A77: &sub_8049AA0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_520_edges_9() {
    →puts();
    return sub_8054B69();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_522_edges_9() {
    →puts();
    return sub_8054C47();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_523_edges_9() {
    →puts();
    return sub_8054CB6();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_524_edges_9() {
    →puts();
    return sub_8054D25();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_525_edges_9() {
    →puts();
    return sub_8054D94();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_526_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8054DE1: &→sub_8054E0C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_527_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8054E50: &→sub_8054E7B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_528_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8054EBF: &→sub_8054EEA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_529_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8054F2E: &→sub_8054F59;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_52_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049ACB: &sub_8049AF4;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_530_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8054F9D: &→sub_8054FC8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_531_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805500C: &→sub_8055037;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_532_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805507B: &→sub_80550A6;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_533_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80550EA: &→sub_8055115;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_534_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055159: &→sub_8055184;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_535_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80551C8: &sub_80551F1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_536_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055237: &→sub_8055262;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_537_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80552A6: &→sub_80552D1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_538_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055315: &→sub_8055340;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_539_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055384: &→sub_80553AF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_53_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8049B1F: &→sub_8049B4A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_540_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80553F3: &→sub_805541E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_541_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055462: &→sub_805548D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_542_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80554D1: &→sub_80554FC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_543_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055540: &→sub_805556B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_544_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80555AF: &→sub_80555DA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_545_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805561E: &→sub_8055649;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_546_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805568D: &→sub_80556B8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_54_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049B73: &→sub_8049B9E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_556_edges_9() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8055B0E: &loc_8055AF6;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_55_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049BC7: &→sub_8049BF2;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_567_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8055FD3: &→sub_8055FEB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_568_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8056042: &→sub_805605A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_569_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80560B1: &→sub_80560C9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_56_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049C1B: &→sub_8049C46;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_570_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8056120: &→sub_8056138;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_571_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805618F: &→sub_80561A7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_572_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80561FE: &→sub_8056216;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_573_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805626D: &→sub_805628E;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_574_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80562DC: &→sub_80562FD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_575_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805634B: &→sub_805636C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_576_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80563BA: &→sub_80563DB;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_577_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8056429: &→sub_805644A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_578_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8056498: &→sub_80564B9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_579_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8056507: &→sub_8056528;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_57_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049C6F: &sub_8049C98;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_580_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8056576: &→sub_8056597;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_581_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80565E5: &→sub_8056606;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_58_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049CC3: &→sub_8049CEE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_59_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049D17: &→sub_8049D42;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_5_edges_5() {
    →puts();
    return sub_8048BFF();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_60_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8049D6B: &sub_8049D94;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_617_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057556: &sub_805757F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_618_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80575C5: &sub_80575EE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_620_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80576A3: &sub_80576CC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_621_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057712: &sub_805773B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_622_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057781: &sub_80577AA;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_623_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80577F0: &sub_8057819;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_624_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805785F: &sub_8057888;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_625_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_80578CE: &sub_80578F7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_626_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805793D: &sub_8057966;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_627_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_80579AC: &sub_80579D5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_628_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057A1B: &sub_8057A44;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_629_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057A8A: &sub_8057AB3;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_62_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049E3E: &loc_8049E26;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_630_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057AF9: &sub_8057B22;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_631_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8057B68: &sub_8057B91;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_632_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057BD7: &sub_8057C00;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_633_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057C46: &sub_8057C6F;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_634_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057CB5: &sub_8057CDE;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_635_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057D24: &sub_8057D4D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_636_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8057D93: &sub_8057DBC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_637_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057E02: &sub_8057E2B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_638_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057E71: &sub_8057E9A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_639_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057EE0: &sub_8057F09;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_63_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049E92: &loc_8049E7A;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_640_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_8057F4F: &sub_8057F78;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_641_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8057FBE: &sub_8057FE7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_642_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805802D: &sub_8058056;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_643_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805809C: &sub_80580C5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_644_edges_9() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805810B: &sub_8058134;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_64_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049EE6: &loc_8049ECE;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_655_edges_9() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80585F9: &loc_80585E3;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_659_edges_9() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_80587B5: &loc_805879F;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_669_edges_9() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_8058C0B: &loc_8058BF5;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_66_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049F8E: &loc_8049F76;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_67_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_8049FE2: &loc_8049FCA;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_69_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &→sub_804A08A: &loc_804A072;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_6_edges_5() {
    →puts();
    return sub_8048C4A();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_707_edges_10() {
    →puts();
    return sub_8059C7E();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_708_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059CD4: &→sub_8059CFF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_709_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059D4C: &→sub_8059D77;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_70_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A0DE: &→sub_804A0ED;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_710_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059DC4: &→sub_8059DEF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_711_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059E3C: &→sub_8059E67;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_712_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059EB4: &→sub_8059EDF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_713_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059F2C: &→sub_8059F57;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_714_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_8059FA4: &→sub_8059FCF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_71_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A132: &sub_804A130;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_722_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805A38F: &→sub_805A3B0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_723_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805A407: &→sub_805A428;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_724_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805A47F: &→sub_805A4A0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_725_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805A4F7: &→sub_805A518;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_72_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A186: &→sub_804A195;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_73_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804A1DA: &→sub_804A1E9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_747_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805AF1C: &sub_805AF45;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_748_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805AF94: &sub_805AFBD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_749_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B00C: &sub_805B035;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_74_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A22E: &→sub_804A23D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_750_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B084: &sub_805B0AD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_751_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B0FC: &sub_805B125;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_752_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B174: &sub_805B19D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_753_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B1EC: &sub_805B215;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_754_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B264: &sub_805B28D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_755_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B2DC: &sub_805B305;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_756_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B354: &sub_805B37D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_757_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B3CC: &sub_805B3F5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_758_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B444: &sub_805B46D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_759_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B4BC: &sub_805B4E5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_75_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A282: &sub_804A280;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_760_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805B534: &sub_805B55D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_761_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805B5AC: &sub_805B5D5;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_762_edges_10() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_805B624: &sub_805B64D;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_776_edges_10() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_805BCDD: &loc_805BCC7;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_77_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804A32A: &→sub_804A339;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_79_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A3D2: &→sub_804A3E1;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_7_edges_5() {
    int v0 = "block 2";
    →puts();
    /*NO_RETURN*/ sub_8048C95();
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_806_edges_11() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805CAC4: &→sub_805CAEF;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_808_edges_11() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805CBF1: &→sub_805CC1B;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_80_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A426: &→sub_804A435;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_816_edges_11() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805CFCE: &sub_805CFF7;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_817_edges_11() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805D04F: &sub_805D078;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_818_edges_11() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805D0D0: &sub_805D0F9;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_819_edges_11() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805D151: &sub_805D17A;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_81_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A47A: &→sub_804A489;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_82_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A4CE: &→sub_804A4DD;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_83_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A522: &→sub_804A531;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_841_edges_12() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_805DC70: &sub_805DC99;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_84_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A576: &→sub_804A585;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_89_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A6EF: &sub_804A718;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_90_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &loc_804A743: &sub_804A76C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_91_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A797: &sub_804A7C0;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_92_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A7EB: &sub_804A814;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_93_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A83F: &sub_804A868;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_94_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A893: &sub_804A8BC;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_95_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A8E7: &sub_804A910;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_96_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A93B: &sub_804A964;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_97_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A98F: &sub_804A9B8;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_98_edges_6() {
    char v0;
    int v1 = "block 2";
    →puts();
    int* ptr0 = &v0;
    char v2 = gvar_80610A4 ? 0: 1;
    char v3 = gvar_80610A4 >= 0x80000000;
    char v4 = __parity__((unsigned char)gvar_80610A4);
    char v5 = gvar_80610A4 < 0;
    char v6 = 0;
    char v7 = 0;
    jump v2 ? &sub_804A9E3: &sub_804AA0C;
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_99_edges_6() {
    while(1) {
        /*BAD_CALL!*/ →puts();
        jump gvar_80610A4 ? &sub_804AA60: &loc_804AA4A;
    }
}

// Stale decompilation - Refresh this view to re-decompile this code
int test_3_blocks_variant_9_edges_5() {
    →puts();
    return sub_8048D2B();
}
