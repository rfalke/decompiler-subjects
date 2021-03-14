
int countSetBits(int param0) {
    int v0 = 0;
    if(param0) {
        do {
            ++v0;
            (unsigned int)v1 = blsr(param0, param0);
        }
        while(v0);
    }
    return 0;
}

long divideByThree(int param0) {
    return ((unsigned long)param0 * 0xaaaaaaabL) >>> 33;
}

char divisibleBy3(int param0) {
    return (unsigned int)(param0 * 0xaaaaaaab) <= 0x55555555 ? 1: 0;
}

long isWhitespace(long param0) {
    long result;
    if((unsigned char)param0 <= 32) {
        long result = shrx(0x100002600L, 0x100002600L, param0);
    }
    return result;
}

char isWhitespace2(int param0) {
    char result = ((unsigned char)param0 == 32 ? 1: 0) | ((unsigned char)param0 == 10 ? 1: 0);
    if(!result) {
        result = (unsigned char)(param0 & 0xfffffffb) == 9 ? 1: 0;
    }
    return result;
}

long main() {
    long v0 = divideByThree(102L);
    long v1 = divideByThree(101L);
    long v2 = divideByThree(100L);
    long v3 = divideByThree(99L);
    long v4 = divideByThree(0L);
    →printf("divideByThree:  f(0)=%d f(99)=%d f(100)=%d f(101)=%d f(102)=%d\n", v4 & 0xffffffffL, (unsigned long)(unsigned int)v3, (unsigned long)(unsigned int)v2, (unsigned long)(unsigned int)v1, (unsigned long)(unsigned int)v0);
    char v5 = divisibleBy3(44L);
    char v6 = divisibleBy3(43L);
    char v7 = divisibleBy3(42L);
    char v8 = divisibleBy3(0L);
    →printf("divisibleBy3:   f(0)=%d f(42)=%d f(43)=%d f(44)=%d\n", v8 & 0xffL, v7 & 0xffL, v6 & 0xffL, v5 & 0xffL);
    int v9 = countSetBits(0x10101L);
    int v10 = countSetBits(0xffffffffL);
    int v11 = countSetBits(0xffL);
    int v12 = countSetBits(0L);
    →printf("countSetBits:   f(0)=%d f(0xff)=%d f(0xffffffff)=%d f(0x10101)=%d\n", v12 & 0xffffffffL, (unsigned long)(unsigned int)v11, (unsigned long)(unsigned int)v10, (unsigned long)(unsigned int)v9);
    long v13 = isWhitespace(97L);
    long v14 = isWhitespace(9L);
    long v15 = isWhitespace(32L);
    →printf("isWhitespace:   f(\' \')=%d f(tab)=%d f(\'a\')=%d\n", v15 & 0xffL, v14 & 0xffL, v13 & 0xffL);
    char v16 = isWhitespace2(97L);
    char v17 = isWhitespace2(9L);
    char v18 = isWhitespace2(32L);
    →printf("isWhitespace2:  f(\' \')=%d f(tab)=%d f(\'a\')=%d\n", v18 & 0xffL, v17 & 0xffL, v16 & 0xffL);
    return 0L;
}
