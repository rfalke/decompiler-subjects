
long countSetBits(int param0) {
    char v0;
    if(param0) {
        while(1) {
            int v1 = blsr(param0);
            jump v0 ? &sub_401155: &loc_40114C;
        }
    }
    return 0L;
}

long divideByThree(int param0) {
    return ((unsigned long)param0 * 0xaaaaaaabL) >>> 33;
}

char divisibleBy3(int param0) {
    return (unsigned int)(param0 * 0xaaaaaaab) > 0x55555555 ? 0: 1;
}

long isWhitespace(long param0) {
    long v0;
    long result = 0L;
    if((unsigned char)param0 <= 32) {
        long v0 = shrx(0x100002600L, param0);
        result = (unsigned long)((unsigned int)v0 & 0x1);
    }
    return result;
}

char isWhitespace2(int param0) {
    char result = ((unsigned char)param0 != 32 ? 0: 1) | ((unsigned char)param0 != 10 ? 0: 1);
    if(!(((unsigned char)param0 != 32 ? 0: 1) | ((unsigned char)param0 != 10 ? 0: 1))) {
        result = ((unsigned char)param0 & 0xfb) != 9 ? 0: 1;
    }
    return result;
}

long main() {
    long v0 = divideByThree(102L);
    long v1 = divideByThree(101L);
    long v2 = divideByThree(100L);
    long v3 = divideByThree(99L);
    long v4 = divideByThree(0L);
    →printf("divideByThree:  f(0)=%d f(99)=%d f(100)=%d f(101)=%d f(102)=%d\n");
    char v5 = divisibleBy3(44L);
    char v6 = divisibleBy3(43L);
    char v7 = divisibleBy3(42L);
    char v8 = divisibleBy3(0L);
    →printf("divisibleBy3:   f(0)=%d f(42)=%d f(43)=%d f(44)=%d\n");
    long v9 = countSetBits(0x10101L);
    long v10 = countSetBits(0xffffffffL);
    long v11 = countSetBits(0xffL);
    long v12 = countSetBits(0L);
    →printf("countSetBits:   f(0)=%d f(0xff)=%d f(0xffffffff)=%d f(0x10101)=%d\n");
    long v13 = isWhitespace(97L);
    long v14 = isWhitespace(9L);
    long v15 = isWhitespace(32L);
    →printf("isWhitespace:   f(\' \')=%d f(tab)=%d f(\'a\')=%d\n");
    char v16 = isWhitespace2(97L);
    char v17 = isWhitespace2(9L);
    char v18 = isWhitespace2(32L);
    →printf("isWhitespace2:  f(\' \')=%d f(tab)=%d f(\'a\')=%d\n");
    return 0L;
}

long sub_40108D() {
    return 0L;
}

long sub_4010CF() {
    return 0L;
}

long sub_4010FD() {
    long result = deregister_tm_clones();
    completed.7287 = 1;
    return result;
}

void sub_401110() {
}

void sub_401155() {
}
