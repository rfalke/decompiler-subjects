
void call_all() {
    // Decompilation error
}

int main(int param0, unsigned int* param1) {
    int v0 = (int)**param1 + param0;
    int v1 = call_all();
    return v1 + v0;
}

void sub_8049030() {
    jump gvar_806A008;
}

void sub_80490D7() {
}

int var0000_0123456789() {
    →fputs("0000 signed start:48, iter:10, inc:+1, order:buj cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c != 58);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0001_0123456789() {
    →fputs("0001 signed start:48, iter:10, inc:+1, order:buj cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c < 58);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0002_0123456789() {
    →fputs("0002 signed start:48, iter:10, inc:+1, order:buj cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c <= 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0003_0123456789() {
    →fputs("0003 signed start:48, iter:10, inc:+1, order:bju cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c == 57) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0004_0123456789() {
    →fputs("0004 signed start:48, iter:10, inc:+1, order:bju cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c >= 57) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0005_0123456789() {
    →fputs("0005 signed start:48, iter:10, inc:+1, order:bju cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c > 56) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0006_0123456789() {
    →fputs("0006 signed start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c != 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0007_0123456789() {
    →fputs("0007 signed start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c < 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0008_0123456789() {
    →fputs("0008 signed start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c <= 56);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0009_0123456789() {
    →fputs("0009 signed start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    ++__c;
    while(__c != 58) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0010_0123456789() {
    →fputs("0010 signed start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    ++__c;
    while(__c < 58) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0011_0123456789() {
    →fputs("0011 signed start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    ++__c;
    while(__c <= 57) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0012_0123456789() {
    →fputs("0012 signed start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected=\'0123456789\' >", stdout);
    for(int i = 48; i != 58; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0013_0123456789() {
    →fputs("0013 signed start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected=\'0123456789\' >", stdout);
    for(int i = 48; i < 58; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0014_0123456789() {
    →fputs("0014 signed start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected=\'0123456789\' >", stdout);
    for(int i = 48; i <= 57; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0015_0123456789() {
    →fputs("0015 signed start:48, iter:10, inc:+1, order:jub cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    while(__c != 57) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0016_0123456789() {
    →fputs("0016 signed start:48, iter:10, inc:+1, order:jub cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    while(__c < 57) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0017_0123456789() {
    →fputs("0017 signed start:48, iter:10, inc:+1, order:jub cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    while(__c <= 56) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0018_0123456789() {
    →fputs("0018 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 != 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0019_0123456789() {
    →fputs("0019 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 < 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0020_0123456789() {
    →fputs("0020 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 <= 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0021_0123456789() {
    →fputs("0021 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(v0 == 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0022_0123456789() {
    →fputs("0022 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(v0 >= 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0023_0123456789() {
    →fputs("0023 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(v0 > 8) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0024_0123456789() {
    →fputs("0024 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0 != 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0025_0123456789() {
    →fputs("0025 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0 < 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0026_0123456789() {
    →fputs("0026 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0 <= 8);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0027_0123456789() {
    →fputs("0027 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 != 10) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0028_0123456789() {
    →fputs("0028 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 < 10) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0029_0123456789() {
    →fputs("0029 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 <= 9) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0030_0123456789() {
    →fputs("0030 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    for(int i = 0; i != 10; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0031_0123456789() {
    →fputs("0031 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    for(int i = 0; i < 10; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0032_0123456789() {
    →fputs("0032 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    for(int i = 0; i <= 9; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0033_0123456789() {
    →fputs("0033 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    while(v0 != 9) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0034_0123456789() {
    →fputs("0034 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    while(v0 < 9) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0035_0123456789() {
    →fputs("0035 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    while(v0 <= 8) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0036_0123456789() {
    →fputs("0036 signed start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 != 36);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0037_0123456789() {
    →fputs("0037 signed start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 36);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0038_0123456789() {
    →fputs("0038 signed start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 35);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0039_0123456789() {
    →fputs("0039 signed start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 35);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0040_0123456789() {
    →fputs("0040 signed start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 34);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0041_0123456789() {
    →fputs("0041 signed start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 == 34) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0042_0123456789() {
    →fputs("0042 signed start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 34) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0043_0123456789() {
    →fputs("0043 signed start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 33) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0044_0123456789() {
    →fputs("0044 signed start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 33) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0045_0123456789() {
    →fputs("0045 signed start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 32) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0046_0123456789() {
    →fputs("0046 signed start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 != 34);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0047_0123456789() {
    →fputs("0047 signed start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 34);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0048_0123456789() {
    →fputs("0048 signed start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 33);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0049_0123456789() {
    →fputs("0049 signed start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 33);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0050_0123456789() {
    →fputs("0050 signed start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 32);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0051_0123456789() {
    →fputs("0051 signed start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 != 36) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0052_0123456789() {
    →fputs("0052 signed start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 < 36) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0053_0123456789() {
    →fputs("0053 signed start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 < 35) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0054_0123456789() {
    →fputs("0054 signed start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 <= 35) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0055_0123456789() {
    →fputs("0055 signed start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 <= 34) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0056_0123456789() {
    →fputs("0056 signed start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(int i = 16; i != 36; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0057_0123456789() {
    →fputs("0057 signed start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(int i = 16; i < 36; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0058_0123456789() {
    →fputs("0058 signed start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(int i = 16; i < 35; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0059_0123456789() {
    →fputs("0059 signed start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(int i = 16; i <= 35; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0060_0123456789() {
    →fputs("0060 signed start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(int i = 16; i <= 34; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0061_0123456789() {
    →fputs("0061 signed start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    while(v0 != 34) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0062_0123456789() {
    →fputs("0062 signed start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    while(v0 < 34) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0063_0123456789() {
    →fputs("0063 signed start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    while(v0 < 33) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0064_0123456789() {
    →fputs("0064 signed start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    while(v0 <= 33) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0065_0123456789() {
    →fputs("0065 signed start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    while(v0 <= 32) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0066_9876543210() {
    →fputs("0066 signed start:57, iter:10, inc:-1, order:buj cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c != 47);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0067_9876543210() {
    →fputs("0067 signed start:57, iter:10, inc:-1, order:buj cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c > 47);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0068_9876543210() {
    →fputs("0068 signed start:57, iter:10, inc:-1, order:buj cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c >= 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0069_9876543210() {
    →fputs("0069 signed start:57, iter:10, inc:-1, order:bju cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c == 48) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0070_9876543210() {
    →fputs("0070 signed start:57, iter:10, inc:-1, order:bju cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c <= 48) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0071_9876543210() {
    →fputs("0071 signed start:57, iter:10, inc:-1, order:bju cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c < 49) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0072_9876543210() {
    →fputs("0072 signed start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c != 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0073_9876543210() {
    →fputs("0073 signed start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c > 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0074_9876543210() {
    →fputs("0074 signed start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c >= 49);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0075_9876543210() {
    →fputs("0075 signed start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    --__c;
    while(__c != 47) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0076_9876543210() {
    →fputs("0076 signed start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    --__c;
    while(__c > 47) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0077_9876543210() {
    →fputs("0077 signed start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    --__c;
    while(__c >= 48) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0078_9876543210() {
    →fputs("0078 signed start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected=\'9876543210\' >", stdout);
    for(int i = 57; i != 47; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0079_9876543210() {
    →fputs("0079 signed start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected=\'9876543210\' >", stdout);
    for(int i = 57; i > 47; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0080_9876543210() {
    →fputs("0080 signed start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected=\'9876543210\' >", stdout);
    for(int i = 57; i >= 48; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0081_9876543210() {
    →fputs("0081 signed start:57, iter:10, inc:-1, order:jub cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    while(__c != 48) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0082_9876543210() {
    →fputs("0082 signed start:57, iter:10, inc:-1, order:jub cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    while(__c > 48) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0083_9876543210() {
    →fputs("0083 signed start:57, iter:10, inc:-1, order:jub cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    while(__c >= 49) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0084_9876543210() {
    →fputs("0084 signed start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 != 80);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0085_9876543210() {
    →fputs("0085 signed start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 81);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0086_9876543210() {
    →fputs("0086 signed start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 80);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0087_9876543210() {
    →fputs("0087 signed start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 82);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0088_9876543210() {
    →fputs("0088 signed start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 81);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0089_9876543210() {
    →fputs("0089 signed start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 == 82) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0090_9876543210() {
    →fputs("0090 signed start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 83) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0091_9876543210() {
    →fputs("0091 signed start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 82) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0092_9876543210() {
    →fputs("0092 signed start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 84) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0093_9876543210() {
    →fputs("0093 signed start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 83) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0094_9876543210() {
    →fputs("0094 signed start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 != 82);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0095_9876543210() {
    →fputs("0095 signed start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 83);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0096_9876543210() {
    →fputs("0096 signed start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 82);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0097_9876543210() {
    →fputs("0097 signed start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 84);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0098_9876543210() {
    →fputs("0098 signed start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 83);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0099_9876543210() {
    →fputs("0099 signed start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 != 80) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0100_9876543210() {
    →fputs("0100 signed start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 > 81) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0101_9876543210() {
    →fputs("0101 signed start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 > 80) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0102_9876543210() {
    →fputs("0102 signed start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 >= 82) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0103_9876543210() {
    →fputs("0103 signed start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 >= 81) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0104_9876543210() {
    →fputs("0104 signed start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    for(int i = 100; i != 80; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0105_9876543210() {
    →fputs("0105 signed start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    for(int i = 100; i > 81; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0106_9876543210() {
    →fputs("0106 signed start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    for(int i = 100; i > 80; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0107_9876543210() {
    →fputs("0107 signed start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    for(int i = 100; i >= 82; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0108_9876543210() {
    →fputs("0108 signed start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    for(int i = 100; i >= 81; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0109_9876543210() {
    →fputs("0109 signed start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    while(v0 != 82) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0110_9876543210() {
    →fputs("0110 signed start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 102;
    while(v0 > 83) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0111_9876543210() {
    →fputs("0111 signed start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    while(v0 > 82) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0112_9876543210() {
    →fputs("0112 signed start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    int v0 = 102;
    while(v0 >= 84) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0113_9876543210() {
    →fputs("0113 signed start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    while(v0 >= 83) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0114_0123456789() {
    →fputs("0114 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 != 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0115_0123456789() {
    →fputs("0115 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 < 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0116_0123456789() {
    →fputs("0116 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 <= 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0117_0123456789() {
    →fputs("0117 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 == 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0118_0123456789() {
    →fputs("0118 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 >= 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0119_0123456789() {
    →fputs("0119 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 > 8) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0120_0123456789() {
    →fputs("0120 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 != 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0121_0123456789() {
    →fputs("0121 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 < 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0122_0123456789() {
    →fputs("0122 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 <= 8);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0123_0123456789() {
    →fputs("0123 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0124_0123456789() {
    →fputs("0124 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 < 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0125_0123456789() {
    →fputs("0125 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 <= 9) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0126_0123456789() {
    →fputs("0126 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0127_0123456789() {
    →fputs("0127 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 < 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0128_0123456789() {
    →fputs("0128 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 <= 9) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0129_0123456789() {
    →fputs("0129 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    for(int i = 48; v0 != 9; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0130_0123456789() {
    →fputs("0130 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    for(int i = 48; v0 < 9; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0131_0123456789() {
    →fputs("0131 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    for(int i = 48; v0 <= 8; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0132_0123456789() {
    →fputs("0132 signed start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int counter = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --counter;
    }
    while(counter);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0133_0123456789() {
    →fputs("0133 signed start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 > 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0134_0123456789() {
    →fputs("0134 signed start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 >= 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0135_0123456789() {
    →fputs("0135 signed start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 == 1) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0136_0123456789() {
    →fputs("0136 signed start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 <= 1) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0137_0123456789() {
    →fputs("0137 signed start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 < 2) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0138_0123456789() {
    →fputs("0138 signed start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 != 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0139_0123456789() {
    →fputs("0139 signed start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 > 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0140_0123456789() {
    →fputs("0140 signed start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 >= 2);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0141_0123456789() {
    →fputs("0141 signed start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0142_0123456789() {
    →fputs("0142 signed start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 > 0) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0143_0123456789() {
    →fputs("0143 signed start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 1) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0144_0123456789() {
    →fputs("0144 signed start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0145_0123456789() {
    →fputs("0145 signed start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 > 0) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0146_0123456789() {
    →fputs("0146 signed start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 >= 1) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0147_0123456789() {
    →fputs("0147 signed start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    for(int i = 48; v0 != 1; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0148_0123456789() {
    →fputs("0148 signed start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    for(int i = 48; v0 > 1; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0149_0123456789() {
    →fputs("0149 signed start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    for(int i = 48; v0 >= 2; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0150_0123456789() {
    →fputs("0150 signed start:-20, iter:10, inc:+1, order:buj cmp:!=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -20;
    do {
        →putchar(v0 + 68);
        ++v0;
    }
    while(v0 != -10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0151_0123456789() {
    →fputs("0151 signed start:-20, iter:10, inc:+1, order:buj cmp:< 0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -20;
    do {
        →putchar(v0 + 68);
        ++v0;
    }
    while(v0 < -10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0152_0123456789() {
    →fputs("0152 signed start:-20, iter:10, inc:+1, order:buj cmp:<=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -20;
    do {
        →putchar(v0 + 68);
        ++v0;
    }
    while(v0 <= -11);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0153_0123456789() {
    →fputs("0153 signed start:-20, iter:10, inc:+1, order:bju cmp:!=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -20;
    while(1) {
        →putchar(v0 + 68);
        if(v0 == -11) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0154_0123456789() {
    →fputs("0154 signed start:-20, iter:10, inc:+1, order:bju cmp:< 0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -20;
    while(1) {
        →putchar(v0 + 68);
        if(v0 >= -11) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0155_0123456789() {
    →fputs("0155 signed start:-20, iter:10, inc:+1, order:bju cmp:<=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -20;
    while(1) {
        →putchar(v0 + 68);
        if(v0 > -12) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0156_0123456789() {
    →fputs("0156 signed start:-20, iter:10, inc:+1, order:ubj cmp:!=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    do {
        ++v0;
        →putchar(v0 + 68);
    }
    while(v0 != -11);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0157_0123456789() {
    →fputs("0157 signed start:-20, iter:10, inc:+1, order:ubj cmp:< 0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    do {
        ++v0;
        →putchar(v0 + 68);
    }
    while(v0 < -11);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0158_0123456789() {
    →fputs("0158 signed start:-20, iter:10, inc:+1, order:ubj cmp:<=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    do {
        ++v0;
        →putchar(v0 + 68);
    }
    while(v0 <= -12);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0159_0123456789() {
    →fputs("0159 signed start:-20, iter:10, inc:+1, order:ujb cmp:!=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 != -10) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0160_0123456789() {
    →fputs("0160 signed start:-20, iter:10, inc:+1, order:ujb cmp:< 0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 < -10) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0161_0123456789() {
    →fputs("0161 signed start:-20, iter:10, inc:+1, order:ujb cmp:<=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 <= -11) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0162_0123456789() {
    →fputs("0162 signed start:-20, iter:10, inc:+1, order:jbu cmp:!=0 exp:+68      expected=\'0123456789\' >", stdout);
    for(int i = -20; i != -10; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0163_0123456789() {
    →fputs("0163 signed start:-20, iter:10, inc:+1, order:jbu cmp:< 0 exp:+68      expected=\'0123456789\' >", stdout);
    for(int i = -20; i < -10; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0164_0123456789() {
    →fputs("0164 signed start:-20, iter:10, inc:+1, order:jbu cmp:<=0 exp:+68      expected=\'0123456789\' >", stdout);
    for(int i = -20; i <= -11; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0165_0123456789() {
    →fputs("0165 signed start:-20, iter:10, inc:+1, order:jub cmp:!=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    while(v0 != -11) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0166_0123456789() {
    →fputs("0166 signed start:-20, iter:10, inc:+1, order:jub cmp:< 0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    while(v0 < -11) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0167_0123456789() {
    →fputs("0167 signed start:-20, iter:10, inc:+1, order:jub cmp:<=0 exp:+68      expected=\'0123456789\' >", stdout);
    int v0 = -21;
    while(v0 <= -12) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0168_0() {
    →fputs("0168 signed start:48, iter:1, inc:+1, order:buj cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c != 49);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0169_0() {
    →fputs("0169 signed start:48, iter:1, inc:+1, order:buj cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c < 49);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0170_0() {
    →fputs("0170 signed start:48, iter:1, inc:+1, order:buj cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c <= 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0171_0() {
    →fputs("0171 signed start:48, iter:1, inc:+1, order:bju cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c == 48) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0172_0() {
    →fputs("0172 signed start:48, iter:1, inc:+1, order:bju cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c >= 48) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0173_0() {
    →fputs("0173 signed start:48, iter:1, inc:+1, order:bju cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c > 47) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0174_0() {
    →fputs("0174 signed start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c != 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0175_0() {
    →fputs("0175 signed start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c < 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0176_0() {
    →fputs("0176 signed start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c <= 47);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0177_0() {
    →fputs("0177 signed start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 47;
    ++__c;
    while(__c != 49) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0178_0() {
    →fputs("0178 signed start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 47;
    ++__c;
    while(__c < 49) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0179_0() {
    →fputs("0179 signed start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 47;
    ++__c;
    while(__c <= 48) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0180_0() {
    →fputs("0180 signed start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected=\'0\'   >", stdout);
    for(int i = 48; i != 49; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0181_0() {
    →fputs("0181 signed start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected=\'0\'   >", stdout);
    for(int i = 48; i < 49; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0182_0() {
    →fputs("0182 signed start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected=\'0\'   >", stdout);
    for(int i = 48; i <= 48; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0183_0() {
    →fputs("0183 signed start:48, iter:1, inc:+1, order:jub cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 47;
    while(__c != 48) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0184_0() {
    →fputs("0184 signed start:48, iter:1, inc:+1, order:jub cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 47;
    while(__c < 48) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0185_0() {
    →fputs("0185 signed start:48, iter:1, inc:+1, order:jub cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 47;
    while(__c <= 47) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0186_0() {
    →fputs("0186 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 != 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0187_0() {
    →fputs("0187 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 < 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0188_0() {
    →fputs("0188 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 <= 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0189_0() {
    →fputs("0189 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(!v0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0190_0() {
    →fputs("0190 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(v0 >= 0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0191_0() {
    →fputs("0191 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(v0 != -1 && (((v0 + 1) ^ v0) & ~v0) < 0 == v0 < -1) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0192_0() {
    →fputs("0192 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0193_0() {
    →fputs("0193 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0 < 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0194_0() {
    →fputs("0194 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0195_0() {
    →fputs("0195 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 != 1) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0196_0() {
    →fputs("0196 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 < 1) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0197_0() {
    →fputs("0197 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 <= 0) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0198_0() {
    →fputs("0198 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    for(int i = 0; i != 1; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0199_0() {
    →fputs("0199 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    for(int i = 0; i < 1; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0200_0() {
    →fputs("0200 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    for(int i = 0; i <= 0; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0201_0() {
    →fputs("0201 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    while(v0) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0202_0() {
    →fputs("0202 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    while(v0 < 0) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0203_0() {
    →fputs("0203 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    while((v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1)) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0204_0() {
    →fputs("0204 signed start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 != 18);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0205_0() {
    →fputs("0205 signed start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 18);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0206_0() {
    →fputs("0206 signed start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 17);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0207_0() {
    →fputs("0207 signed start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 17);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0208_0() {
    →fputs("0208 signed start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 16);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0209_0() {
    →fputs("0209 signed start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 == 16) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0210_0() {
    →fputs("0210 signed start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 16) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0211_0() {
    →fputs("0211 signed start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 15) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0212_0() {
    →fputs("0212 signed start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 15) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0213_0() {
    →fputs("0213 signed start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 14) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0214_0() {
    →fputs("0214 signed start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 != 16);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0215_0() {
    →fputs("0215 signed start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 16);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0216_0() {
    →fputs("0216 signed start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 15);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0217_0() {
    →fputs("0217 signed start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 15);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0218_0() {
    →fputs("0218 signed start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 14);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0219_0() {
    →fputs("0219 signed start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 != 18) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0220_0() {
    →fputs("0220 signed start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 < 18) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0221_0() {
    →fputs("0221 signed start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 < 17) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0222_0() {
    →fputs("0222 signed start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 <= 17) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0223_0() {
    →fputs("0223 signed start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 <= 16) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0224_0() {
    →fputs("0224 signed start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    for(int i = 16; i != 18; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0225_0() {
    →fputs("0225 signed start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    for(int i = 16; i < 18; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0226_0() {
    →fputs("0226 signed start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    for(int i = 16; i < 17; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0227_0() {
    →fputs("0227 signed start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    for(int i = 16; i <= 17; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0228_0() {
    →fputs("0228 signed start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    for(int i = 16; i <= 16; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0229_0() {
    →fputs("0229 signed start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    while(v0 != 16) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0230_0() {
    →fputs("0230 signed start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    while(v0 < 16) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0231_0() {
    →fputs("0231 signed start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    while(v0 < 15) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0232_0() {
    →fputs("0232 signed start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    while(v0 <= 15) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0233_0() {
    →fputs("0233 signed start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    while(v0 <= 14) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0234_9() {
    →fputs("0234 signed start:57, iter:1, inc:-1, order:buj cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c != 56);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0235_9() {
    →fputs("0235 signed start:57, iter:1, inc:-1, order:buj cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c > 56);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0236_9() {
    →fputs("0236 signed start:57, iter:1, inc:-1, order:buj cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c >= 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0237_9() {
    →fputs("0237 signed start:57, iter:1, inc:-1, order:bju cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c == 57) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0238_9() {
    →fputs("0238 signed start:57, iter:1, inc:-1, order:bju cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c <= 57) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0239_9() {
    →fputs("0239 signed start:57, iter:1, inc:-1, order:bju cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c < 58) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0240_9() {
    →fputs("0240 signed start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c != 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0241_9() {
    →fputs("0241 signed start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c > 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0242_9() {
    →fputs("0242 signed start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c >= 58);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0243_9() {
    →fputs("0243 signed start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 58;
    --__c;
    while(__c != 56) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0244_9() {
    →fputs("0244 signed start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 58;
    --__c;
    while(__c > 56) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0245_9() {
    →fputs("0245 signed start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 58;
    --__c;
    while(__c >= 57) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0246_9() {
    →fputs("0246 signed start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected=\'9\'   >", stdout);
    for(int i = 57; i != 56; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0247_9() {
    →fputs("0247 signed start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected=\'9\'   >", stdout);
    for(int i = 57; i > 56; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0248_9() {
    →fputs("0248 signed start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected=\'9\'   >", stdout);
    for(int i = 57; i >= 57; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0249_9() {
    →fputs("0249 signed start:57, iter:1, inc:-1, order:jub cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 58;
    while(__c != 57) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0250_9() {
    →fputs("0250 signed start:57, iter:1, inc:-1, order:jub cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 58;
    while(__c > 57) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0251_9() {
    →fputs("0251 signed start:57, iter:1, inc:-1, order:jub cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 58;
    while(__c >= 58) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0252_9() {
    →fputs("0252 signed start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 != 98);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0253_9() {
    →fputs("0253 signed start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 99);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0254_9() {
    →fputs("0254 signed start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 98);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0255_9() {
    →fputs("0255 signed start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 100);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0256_9() {
    →fputs("0256 signed start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 99);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0257_9() {
    →fputs("0257 signed start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 == 100) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0258_9() {
    →fputs("0258 signed start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 101) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0259_9() {
    →fputs("0259 signed start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 100) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0260_9() {
    →fputs("0260 signed start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 102) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0261_9() {
    →fputs("0261 signed start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 101) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0262_9() {
    →fputs("0262 signed start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 != 100);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0263_9() {
    →fputs("0263 signed start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 101);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0264_9() {
    →fputs("0264 signed start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 100);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0265_9() {
    →fputs("0265 signed start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 102);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0266_9() {
    →fputs("0266 signed start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 101);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0267_9() {
    →fputs("0267 signed start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 != 98) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0268_9() {
    →fputs("0268 signed start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 > 99) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0269_9() {
    →fputs("0269 signed start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 > 98) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0270_9() {
    →fputs("0270 signed start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 >= 100) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0271_9() {
    →fputs("0271 signed start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 >= 99) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0272_9() {
    →fputs("0272 signed start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    for(int i = 100; i != 98; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0273_9() {
    →fputs("0273 signed start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    for(int i = 100; i > 99; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0274_9() {
    →fputs("0274 signed start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    for(int i = 100; i > 98; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0275_9() {
    →fputs("0275 signed start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    for(int i = 100; i >= 100; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0276_9() {
    →fputs("0276 signed start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    for(int i = 100; i >= 99; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0277_9() {
    →fputs("0277 signed start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    while(v0 != 100) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0278_9() {
    →fputs("0278 signed start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 102;
    while(v0 > 101) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0279_9() {
    →fputs("0279 signed start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    while(v0 > 100) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0280_9() {
    →fputs("0280 signed start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    int v0 = 102;
    while(v0 >= 102) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0281_9() {
    →fputs("0281 signed start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    while(v0 >= 101) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0282_0() {
    →fputs("0282 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 != 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0283_0() {
    →fputs("0283 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 < 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0284_0() {
    →fputs("0284 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 <= 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0285_0() {
    →fputs("0285 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(!v0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0286_0() {
    →fputs("0286 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 >= 0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0287_0() {
    →fputs("0287 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 != -1 && (((v0 + 1) ^ v0) & ~v0) < 0 == v0 < -1) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0288_0() {
    →fputs("0288 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0289_0() {
    →fputs("0289 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 < 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0290_0() {
    →fputs("0290 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0291_0() {
    →fputs("0291 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 != 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0292_0() {
    →fputs("0292 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 < 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0293_0() {
    →fputs("0293 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 <= 0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0294_0() {
    →fputs("0294 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 != 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0295_0() {
    →fputs("0295 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 < 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0296_0() {
    →fputs("0296 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 <= 0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0297_0() {
    →fputs("0297 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    for(int i = 48; v0; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0298_0() {
    →fputs("0298 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    for(int i = 48; v0 < 0; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0299_0() {
    →fputs("0299 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    for(int i = 48; (v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1); ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0300_0() {
    →fputs("0300 signed start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 != 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0301_0() {
    →fputs("0301 signed start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 > 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0302_0() {
    →fputs("0302 signed start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 >= 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0303_0() {
    →fputs("0303 signed start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 == 10) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0304_0() {
    →fputs("0304 signed start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 <= 10) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0305_0() {
    →fputs("0305 signed start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 < 11) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0306_0() {
    →fputs("0306 signed start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 != 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0307_0() {
    →fputs("0307 signed start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 > 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0308_0() {
    →fputs("0308 signed start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 >= 11);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0309_0() {
    →fputs("0309 signed start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 != 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0310_0() {
    →fputs("0310 signed start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 > 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0311_0() {
    →fputs("0311 signed start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0312_0() {
    →fputs("0312 signed start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 != 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0313_0() {
    →fputs("0313 signed start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 > 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0314_0() {
    →fputs("0314 signed start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 >= 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0315_0() {
    →fputs("0315 signed start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    for(int i = 48; v0 != 10; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0316_0() {
    →fputs("0316 signed start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    for(int i = 48; v0 > 10; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0317_0() {
    →fputs("0317 signed start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    for(int i = 48; v0 >= 11; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0318_0() {
    →fputs("0318 signed start:-20, iter:1, inc:+1, order:buj cmp:!=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -20;
    do {
        →putchar(v0 + 68);
        ++v0;
    }
    while(v0 != -19);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0319_0() {
    →fputs("0319 signed start:-20, iter:1, inc:+1, order:buj cmp:< 0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -20;
    do {
        →putchar(v0 + 68);
        ++v0;
    }
    while(v0 < -19);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0320_0() {
    →fputs("0320 signed start:-20, iter:1, inc:+1, order:buj cmp:<=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -20;
    do {
        →putchar(v0 + 68);
        ++v0;
    }
    while(v0 <= -20);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0321_0() {
    →fputs("0321 signed start:-20, iter:1, inc:+1, order:bju cmp:!=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -20;
    while(1) {
        →putchar(v0 + 68);
        if(v0 == -20) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0322_0() {
    →fputs("0322 signed start:-20, iter:1, inc:+1, order:bju cmp:< 0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -20;
    while(1) {
        →putchar(v0 + 68);
        if(v0 >= -20) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0323_0() {
    →fputs("0323 signed start:-20, iter:1, inc:+1, order:bju cmp:<=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -20;
    while(1) {
        →putchar(v0 + 68);
        if(v0 > -21) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0324_0() {
    →fputs("0324 signed start:-20, iter:1, inc:+1, order:ubj cmp:!=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    do {
        ++v0;
        →putchar(v0 + 68);
    }
    while(v0 != -20);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0325_0() {
    →fputs("0325 signed start:-20, iter:1, inc:+1, order:ubj cmp:< 0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    do {
        ++v0;
        →putchar(v0 + 68);
    }
    while(v0 < -20);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0326_0() {
    →fputs("0326 signed start:-20, iter:1, inc:+1, order:ubj cmp:<=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    do {
        ++v0;
        →putchar(v0 + 68);
    }
    while(v0 <= -21);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0327_0() {
    →fputs("0327 signed start:-20, iter:1, inc:+1, order:ujb cmp:!=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 != -19) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0328_0() {
    →fputs("0328 signed start:-20, iter:1, inc:+1, order:ujb cmp:< 0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 < -19) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0329_0() {
    →fputs("0329 signed start:-20, iter:1, inc:+1, order:ujb cmp:<=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 <= -20) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0330_0() {
    →fputs("0330 signed start:-20, iter:1, inc:+1, order:jbu cmp:!=0 exp:+68       expected=\'0\'   >", stdout);
    for(int i = -20; i != -19; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0331_0() {
    →fputs("0331 signed start:-20, iter:1, inc:+1, order:jbu cmp:< 0 exp:+68       expected=\'0\'   >", stdout);
    for(int i = -20; i < -19; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0332_0() {
    →fputs("0332 signed start:-20, iter:1, inc:+1, order:jbu cmp:<=0 exp:+68       expected=\'0\'   >", stdout);
    for(int i = -20; i <= -20; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0333_0() {
    →fputs("0333 signed start:-20, iter:1, inc:+1, order:jub cmp:!=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    while(v0 != -20) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0334_0() {
    →fputs("0334 signed start:-20, iter:1, inc:+1, order:jub cmp:< 0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    while(v0 < -20) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0335_0() {
    →fputs("0335 signed start:-20, iter:1, inc:+1, order:jub cmp:<=0 exp:+68       expected=\'0\'   >", stdout);
    int v0 = -21;
    while(v0 <= -21) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0336_empty() {
    →fputs("0336 signed start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=\'\'    >", stdout);
    int __c = 47;
    ++__c;
    while(__c != 48) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0337_empty() {
    →fputs("0337 signed start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=\'\'    >", stdout);
    int __c = 47;
    ++__c;
    while(__c < 48) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0338_empty() {
    →fputs("0338 signed start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=\'\'    >", stdout);
    int __c = 47;
    ++__c;
    while(__c <= 47) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0339_empty() {
    →fputs("0339 signed start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=\'\'    >", stdout);
    for(int i = 48; i != 48; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0340_empty() {
    →fputs("0340 signed start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=\'\'    >", stdout);
    for(int i = 48; i < 48; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0341_empty() {
    →fputs("0341 signed start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=\'\'    >", stdout);
    for(int i = 48; i <= 47; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0342_empty() {
    →fputs("0342 signed start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=\'\'    >", stdout);
    int __c = 47;
    while(__c != 47) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0343_empty() {
    →fputs("0343 signed start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=\'\'    >", stdout);
    int __c = 47;
    while(__c < 47) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0344_empty() {
    →fputs("0344 signed start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=\'\'    >", stdout);
    int __c = 47;
    while(__c <= 46) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0345_empty() {
    →fputs("0345 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    ++v0;
    while(v0) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0346_empty() {
    →fputs("0346 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 < 0) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0347_empty() {
    →fputs("0347 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    ++v0;
    while((v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1)) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0348_empty() {
    →fputs("0348 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'\'    >", stdout);
    for(int i = 0; i; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0349_empty() {
    →fputs("0349 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'\'    >", stdout);
    for(int i = 0; i < 0; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0350_empty() {
    →fputs("0350 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 exp:+48         expected=\'\'    >", stdout);
    for(int i = 0; (i == -1 || (((i + 1) ^ i) & ~i) < 0 != i < -1); ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0351_empty() {
    →fputs("0351 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    while(v0 != -1) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0352_empty() {
    →fputs("0352 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    while((((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0353_empty() {
    →fputs("0353 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    while(v0 <= -2) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0354_empty() {
    →fputs("0354 signed start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 != 16) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0355_empty() {
    →fputs("0355 signed start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 < 16) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0356_empty() {
    →fputs("0356 signed start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 < 15) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0357_empty() {
    →fputs("0357 signed start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 <= 15) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0358_empty() {
    →fputs("0358 signed start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 <= 14) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0359_empty() {
    →fputs("0359 signed start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'\'    >", stdout);
    for(int i = 16; i != 16; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0360_empty() {
    →fputs("0360 signed start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'\'    >", stdout);
    for(int i = 16; i < 16; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0361_empty() {
    →fputs("0361 signed start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'\'    >", stdout);
    for(int i = 16; i < 15; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0362_empty() {
    →fputs("0362 signed start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'\'    >", stdout);
    for(int i = 16; i <= 15; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0363_empty() {
    →fputs("0363 signed start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'\'    >", stdout);
    for(int i = 16; i <= 14; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0364_empty() {
    →fputs("0364 signed start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    while(v0 != 14) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0365_empty() {
    →fputs("0365 signed start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    while(v0 < 14) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0366_empty() {
    →fputs("0366 signed start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    while(v0 < 13) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0367_empty() {
    →fputs("0367 signed start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    while(v0 <= 13) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0368_empty() {
    →fputs("0368 signed start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    while(v0 <= 12) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0369_empty() {
    →fputs("0369 signed start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=\'\'    >", stdout);
    int __c = 58;
    --__c;
    while(__c != 57) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0370_empty() {
    →fputs("0370 signed start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=\'\'    >", stdout);
    int __c = 58;
    --__c;
    while(__c > 57) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0371_empty() {
    →fputs("0371 signed start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=\'\'    >", stdout);
    int __c = 58;
    --__c;
    while(__c >= 58) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0372_empty() {
    →fputs("0372 signed start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=\'\'    >", stdout);
    for(int i = 57; i != 57; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0373_empty() {
    →fputs("0373 signed start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=\'\'    >", stdout);
    for(int i = 57; i > 57; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0374_empty() {
    →fputs("0374 signed start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=\'\'    >", stdout);
    for(int i = 57; i >= 58; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0375_empty() {
    →fputs("0375 signed start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=\'\'    >", stdout);
    int __c = 58;
    while(__c != 58) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0376_empty() {
    →fputs("0376 signed start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=\'\'    >", stdout);
    int __c = 58;
    while(__c > 58) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0377_empty() {
    →fputs("0377 signed start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=\'\'    >", stdout);
    int __c = 58;
    while(__c >= 59) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0378_empty() {
    →fputs("0378 signed start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 != 100) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0379_empty() {
    →fputs("0379 signed start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'\'    >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 > 101) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0380_empty() {
    →fputs("0380 signed start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 > 100) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0381_empty() {
    →fputs("0381 signed start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'\'    >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 >= 102) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0382_empty() {
    →fputs("0382 signed start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 >= 101) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0383_empty() {
    →fputs("0383 signed start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'\'    >", stdout);
    for(int i = 100; i != 100; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0384_empty() {
    →fputs("0384 signed start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'\'    >", stdout);
    for(int i = 100; i > 101; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0385_empty() {
    →fputs("0385 signed start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'\'    >", stdout);
    for(int i = 100; i > 100; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0386_empty() {
    →fputs("0386 signed start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'\'    >", stdout);
    for(int i = 100; i >= 102; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0387_empty() {
    →fputs("0387 signed start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'\'    >", stdout);
    for(int i = 100; i >= 101; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0388_empty() {
    →fputs("0388 signed start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    while(v0 != 102) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0389_empty() {
    →fputs("0389 signed start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'\'    >", stdout);
    int v0 = 102;
    while(v0 > 103) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0390_empty() {
    →fputs("0390 signed start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    while(v0 > 102) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0391_empty() {
    →fputs("0391 signed start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'\'    >", stdout);
    int v0 = 102;
    while(v0 >= 104) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0392_empty() {
    →fputs("0392 signed start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    while(v0 >= 103) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0393_empty() {
    →fputs("0393 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0394_empty() {
    →fputs("0394 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 < 0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0395_empty() {
    →fputs("0395 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while((v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1)) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0396_empty() {
    →fputs("0396 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0397_empty() {
    →fputs("0397 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 < 0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0398_empty() {
    →fputs("0398 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = 0;
    int __c = 48;
    while((v0 == -1 || (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1)) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0399_empty() {
    →fputs("0399 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    for(int i = 48; v0 != -1; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0400_empty() {
    →fputs("0400 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    for(int i = 48; (((v0 + 1) ^ v0) & ~v0) < 0 != v0 < -1; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0401_empty() {
    →fputs("0401 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    for(int i = 48; v0 <= -2; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0402_empty() {
    →fputs("0402 signed start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0403_empty() {
    →fputs("0403 signed start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 > 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0404_empty() {
    →fputs("0404 signed start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 11) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0405_empty() {
    →fputs("0405 signed start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0406_empty() {
    →fputs("0406 signed start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 > 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0407_empty() {
    →fputs("0407 signed start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 >= 11) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0408_empty() {
    →fputs("0408 signed start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    for(int i = 48; v0 != 11; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0409_empty() {
    →fputs("0409 signed start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    for(int i = 48; v0 > 11; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0410_empty() {
    →fputs("0410 signed start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    for(int i = 48; v0 >= 12; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0411_empty() {
    →fputs("0411 signed start:-20, iter:0, inc:+1, order:ujb cmp:!=0 exp:+68       expected=\'\'    >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 != -20) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0412_empty() {
    →fputs("0412 signed start:-20, iter:0, inc:+1, order:ujb cmp:< 0 exp:+68       expected=\'\'    >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 < -20) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0413_empty() {
    →fputs("0413 signed start:-20, iter:0, inc:+1, order:ujb cmp:<=0 exp:+68       expected=\'\'    >", stdout);
    int v0 = -21;
    ++v0;
    while(v0 <= -21) {
        →putchar(v0 + 68);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0414_empty() {
    →fputs("0414 signed start:-20, iter:0, inc:+1, order:jbu cmp:!=0 exp:+68       expected=\'\'    >", stdout);
    for(int i = -20; i != -20; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0415_empty() {
    →fputs("0415 signed start:-20, iter:0, inc:+1, order:jbu cmp:< 0 exp:+68       expected=\'\'    >", stdout);
    for(int i = -20; i < -20; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0416_empty() {
    →fputs("0416 signed start:-20, iter:0, inc:+1, order:jbu cmp:<=0 exp:+68       expected=\'\'    >", stdout);
    for(int i = -20; i <= -21; ++i) {
        →putchar(i + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0417_empty() {
    →fputs("0417 signed start:-20, iter:0, inc:+1, order:jub cmp:!=0 exp:+68       expected=\'\'    >", stdout);
    int v0 = -21;
    while(v0 != -21) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0418_empty() {
    →fputs("0418 signed start:-20, iter:0, inc:+1, order:jub cmp:< 0 exp:+68       expected=\'\'    >", stdout);
    int v0 = -21;
    while(v0 < -21) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0419_empty() {
    →fputs("0419 signed start:-20, iter:0, inc:+1, order:jub cmp:<=0 exp:+68       expected=\'\'    >", stdout);
    int v0 = -21;
    while(v0 <= -22) {
        ++v0;
        →putchar(v0 + 68);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0420_0123456789() {
    →fputs("0420 unsign start:48, iter:10, inc:+1, order:buj cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c != 58);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0421_0123456789() {
    →fputs("0421 unsign start:48, iter:10, inc:+1, order:buj cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while((unsigned int)__c < 58);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0422_0123456789() {
    →fputs("0422 unsign start:48, iter:10, inc:+1, order:buj cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while((unsigned int)__c <= 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0423_0123456789() {
    →fputs("0423 unsign start:48, iter:10, inc:+1, order:bju cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c == 57) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0424_0123456789() {
    →fputs("0424 unsign start:48, iter:10, inc:+1, order:bju cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c >= 57) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0425_0123456789() {
    →fputs("0425 unsign start:48, iter:10, inc:+1, order:bju cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c > 56) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0426_0123456789() {
    →fputs("0426 unsign start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c != 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0427_0123456789() {
    →fputs("0427 unsign start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while((unsigned int)__c < 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0428_0123456789() {
    →fputs("0428 unsign start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while((unsigned int)__c <= 56);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0429_0123456789() {
    →fputs("0429 unsign start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    ++__c;
    while(__c != 58) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0430_0123456789() {
    →fputs("0430 unsign start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    ++__c;
    while((unsigned int)__c < 58) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0431_0123456789() {
    →fputs("0431 unsign start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    ++__c;
    while((unsigned int)__c <= 57) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0432_0123456789() {
    →fputs("0432 unsign start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected=\'0123456789\' >", stdout);
    for(int i = 48; i != 58; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0433_0123456789() {
    →fputs("0433 unsign start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected=\'0123456789\' >", stdout);
    for(int i = 48; (unsigned int)i < 58; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0434_0123456789() {
    →fputs("0434 unsign start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected=\'0123456789\' >", stdout);
    for(int i = 48; (unsigned int)i <= 57; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0435_0123456789() {
    →fputs("0435 unsign start:48, iter:10, inc:+1, order:jub cmp:!=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    while(__c != 57) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0436_0123456789() {
    →fputs("0436 unsign start:48, iter:10, inc:+1, order:jub cmp:< 0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    while((unsigned int)__c < 57) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0437_0123456789() {
    →fputs("0437 unsign start:48, iter:10, inc:+1, order:jub cmp:<=0               expected=\'0123456789\' >", stdout);
    int __c = 47;
    while((unsigned int)__c <= 56) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0438_0123456789() {
    →fputs("0438 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 != 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0439_0123456789() {
    →fputs("0439 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    do {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    while(v0 < 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0440_0123456789() {
    →fputs("0440 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    do {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    while(v0 <= 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0441_0123456789() {
    →fputs("0441 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(v0 == 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0442_0123456789() {
    →fputs("0442 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    while(1) {
        →putchar((int)(v0 + 48));
        if(v0 >= 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0443_0123456789() {
    →fputs("0443 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0 != 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0444_0123456789() {
    →fputs("0444 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0xffffffff;
    do {
        ++v0;
        →putchar((int)(v0 + 48));
    }
    while(v0 < 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0445_0123456789() {
    →fputs("0445 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 != 10) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0446_0123456789() {
    →fputs("0446 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0xffffffff;
    ++v0;
    while(v0 < 10) {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0447_0123456789() {
    →fputs("0447 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0xffffffff;
    ++v0;
    while(v0 <= 9) {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0448_0123456789() {
    →fputs("0448 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    for(int i = 0; i != 10; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0449_0123456789() {
    →fputs("0449 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected=\'0123456789\' >", stdout);
    for(unsigned int i = 0; i < 10; ++i) {
        →putchar((int)(i + 48));
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0450_0123456789() {
    →fputs("0450 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected=\'0123456789\' >", stdout);
    for(unsigned int i = 0; i <= 9; ++i) {
        →putchar((int)(i + 48));
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0451_0123456789() {
    →fputs("0451 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected=\'0123456789\' >", stdout);
    int v0 = -1;
    while(v0 != 9) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0452_0123456789() {
    →fputs("0452 unsign start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 != 36);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0453_0123456789() {
    →fputs("0453 unsign start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 36);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0454_0123456789() {
    →fputs("0454 unsign start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 35);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0455_0123456789() {
    →fputs("0455 unsign start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 35);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0456_0123456789() {
    →fputs("0456 unsign start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 34);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0457_0123456789() {
    →fputs("0457 unsign start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 == 34) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0458_0123456789() {
    →fputs("0458 unsign start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 34) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0459_0123456789() {
    →fputs("0459 unsign start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 33) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0460_0123456789() {
    →fputs("0460 unsign start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 33) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0461_0123456789() {
    →fputs("0461 unsign start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 32) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0462_0123456789() {
    →fputs("0462 unsign start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 != 34);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0463_0123456789() {
    →fputs("0463 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 34);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0464_0123456789() {
    →fputs("0464 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 33);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0465_0123456789() {
    →fputs("0465 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 33);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0466_0123456789() {
    →fputs("0466 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 32);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0467_0123456789() {
    →fputs("0467 unsign start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 != 36) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0468_0123456789() {
    →fputs("0468 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 < 36) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0469_0123456789() {
    →fputs("0469 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 < 35) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0470_0123456789() {
    →fputs("0470 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 <= 35) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0471_0123456789() {
    →fputs("0471 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 <= 34) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0472_0123456789() {
    →fputs("0472 unsign start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(int i = 16; i != 36; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0473_0123456789() {
    →fputs("0473 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(unsigned int i = 16; i < 36; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0474_0123456789() {
    →fputs("0474 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(unsigned int i = 16; i < 35; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0475_0123456789() {
    →fputs("0475 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(unsigned int i = 16; i <= 35; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0476_0123456789() {
    →fputs("0476 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    for(unsigned int i = 16; i <= 34; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0477_0123456789() {
    →fputs("0477 unsign start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    int v0 = 14;
    while(v0 != 34) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0478_0123456789() {
    →fputs("0478 unsign start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    while(v0 < 34) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0479_0123456789() {
    →fputs("0479 unsign start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    while(v0 < 33) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0480_0123456789() {
    →fputs("0480 unsign start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    while(v0 <= 33) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0481_0123456789() {
    →fputs("0481 unsign start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected=\'0123456789\' >", stdout);
    unsigned int v0 = 14;
    while(v0 <= 32) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0482_9876543210() {
    →fputs("0482 unsign start:57, iter:10, inc:-1, order:buj cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c != 47);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0483_9876543210() {
    →fputs("0483 unsign start:57, iter:10, inc:-1, order:buj cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while((unsigned int)__c > 47);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0484_9876543210() {
    →fputs("0484 unsign start:57, iter:10, inc:-1, order:buj cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while((unsigned int)__c >= 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0485_9876543210() {
    →fputs("0485 unsign start:57, iter:10, inc:-1, order:bju cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c == 48) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0486_9876543210() {
    →fputs("0486 unsign start:57, iter:10, inc:-1, order:bju cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c <= 48) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0487_9876543210() {
    →fputs("0487 unsign start:57, iter:10, inc:-1, order:bju cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c < 49) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0488_9876543210() {
    →fputs("0488 unsign start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c != 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0489_9876543210() {
    →fputs("0489 unsign start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while((unsigned int)__c > 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0490_9876543210() {
    →fputs("0490 unsign start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while((unsigned int)__c >= 49);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0491_9876543210() {
    →fputs("0491 unsign start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    --__c;
    while(__c != 47) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0492_9876543210() {
    →fputs("0492 unsign start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    --__c;
    while((unsigned int)__c > 47) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0493_9876543210() {
    →fputs("0493 unsign start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    --__c;
    while((unsigned int)__c >= 48) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0494_9876543210() {
    →fputs("0494 unsign start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected=\'9876543210\' >", stdout);
    for(int i = 57; i != 47; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0495_9876543210() {
    →fputs("0495 unsign start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected=\'9876543210\' >", stdout);
    for(int i = 57; (unsigned int)i > 47; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0496_9876543210() {
    →fputs("0496 unsign start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected=\'9876543210\' >", stdout);
    for(int i = 57; (unsigned int)i >= 48; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0497_9876543210() {
    →fputs("0497 unsign start:57, iter:10, inc:-1, order:jub cmp:!=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    while(__c != 48) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0498_9876543210() {
    →fputs("0498 unsign start:57, iter:10, inc:-1, order:jub cmp:< 0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    while((unsigned int)__c > 48) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0499_9876543210() {
    →fputs("0499 unsign start:57, iter:10, inc:-1, order:jub cmp:<=0               expected=\'9876543210\' >", stdout);
    int __c = 58;
    while((unsigned int)__c >= 49) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0500_9876543210() {
    →fputs("0500 unsign start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 != 80);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0501_9876543210() {
    →fputs("0501 unsign start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 81);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0502_9876543210() {
    →fputs("0502 unsign start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 80);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0503_9876543210() {
    →fputs("0503 unsign start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 82);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0504_9876543210() {
    →fputs("0504 unsign start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 81);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0505_9876543210() {
    →fputs("0505 unsign start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 == 82) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0506_9876543210() {
    →fputs("0506 unsign start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 83) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0507_9876543210() {
    →fputs("0507 unsign start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 82) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0508_9876543210() {
    →fputs("0508 unsign start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 84) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0509_9876543210() {
    →fputs("0509 unsign start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 83) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0510_9876543210() {
    →fputs("0510 unsign start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 != 82);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0511_9876543210() {
    →fputs("0511 unsign start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 83);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0512_9876543210() {
    →fputs("0512 unsign start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 82);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0513_9876543210() {
    →fputs("0513 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 84);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0514_9876543210() {
    →fputs("0514 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 83);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0515_9876543210() {
    →fputs("0515 unsign start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 != 80) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0516_9876543210() {
    →fputs("0516 unsign start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 > 81) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0517_9876543210() {
    →fputs("0517 unsign start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 > 80) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0518_9876543210() {
    →fputs("0518 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 >= 82) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0519_9876543210() {
    →fputs("0519 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 >= 81) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0520_9876543210() {
    →fputs("0520 unsign start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    for(int i = 100; i != 80; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0521_9876543210() {
    →fputs("0521 unsign start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    for(unsigned int i = 100; i > 81; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0522_9876543210() {
    →fputs("0522 unsign start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    for(unsigned int i = 100; i > 80; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0523_9876543210() {
    →fputs("0523 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    for(unsigned int i = 100; i >= 82; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0524_9876543210() {
    →fputs("0524 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    for(unsigned int i = 100; i >= 81; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0525_9876543210() {
    →fputs("0525 unsign start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    int v0 = 102;
    while(v0 != 82) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0526_9876543210() {
    →fputs("0526 unsign start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    while(v0 > 83) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0527_9876543210() {
    →fputs("0527 unsign start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    while(v0 > 82) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0528_9876543210() {
    →fputs("0528 unsign start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    while(v0 >= 84) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0529_9876543210() {
    →fputs("0529 unsign start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected=\'9876543210\' >", stdout);
    unsigned int v0 = 102;
    while(v0 >= 83) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0530_0123456789() {
    →fputs("0530 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 != 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0531_0123456789() {
    →fputs("0531 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 < 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0532_0123456789() {
    →fputs("0532 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 <= 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0533_0123456789() {
    →fputs("0533 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 == 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0534_0123456789() {
    →fputs("0534 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 >= 9) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0535_0123456789() {
    →fputs("0535 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 != 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0536_0123456789() {
    →fputs("0536 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 < 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0537_0123456789() {
    →fputs("0537 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0538_0123456789() {
    →fputs("0538 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    ++v0;
    while(v0 < 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0539_0123456789() {
    →fputs("0539 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    ++v0;
    while(v0 <= 9) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0540_0123456789() {
    →fputs("0540 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0541_0123456789() {
    →fputs("0541 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while(v0 < 10) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0542_0123456789() {
    →fputs("0542 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while(v0 <= 9) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0543_0123456789() {
    →fputs("0543 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected=\'0123456789\' >", stdout);
    int v0 = -1;
    for(int i = 48; v0 != 9; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0544_0123456789() {
    →fputs("0544 unsign start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int counter = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --counter;
    }
    while(counter);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0545_0123456789() {
    →fputs("0545 unsign start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 >= 0 && !(v0 ? 0: 1));
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0546_0123456789() {
    →fputs("0546 unsign start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 >= 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0547_0123456789() {
    →fputs("0547 unsign start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 == 1) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0548_0123456789() {
    →fputs("0548 unsign start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 <= 1) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0549_0123456789() {
    →fputs("0549 unsign start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 < 2) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0550_0123456789() {
    →fputs("0550 unsign start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 != 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0551_0123456789() {
    →fputs("0551 unsign start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 > 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0552_0123456789() {
    →fputs("0552 unsign start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 >= 2);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0553_0123456789() {
    →fputs("0553 unsign start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0554_0123456789() {
    →fputs("0554 unsign start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 0 && !(v0 ? 0: 1)) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0555_0123456789() {
    →fputs("0555 unsign start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 1) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0556_0123456789() {
    →fputs("0556 unsign start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0557_0123456789() {
    →fputs("0557 unsign start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(v0 >= 0 && !(v0 ? 0: 1)) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0558_0123456789() {
    →fputs("0558 unsign start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(v0 >= 1) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0559_0123456789() {
    →fputs("0559 unsign start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    int v0 = 11;
    for(int i = 48; v0 != 1; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0560_0123456789() {
    →fputs("0560 unsign start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 11;
    for(int i = 48; v0 > 1; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0561_0123456789() {
    →fputs("0561 unsign start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected=\'0123456789\' >", stdout);
    unsigned int v0 = 11;
    for(int i = 48; v0 >= 2; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0562_0() {
    →fputs("0562 unsign start:48, iter:1, inc:+1, order:buj cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while(__c != 49);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0563_0() {
    →fputs("0563 unsign start:48, iter:1, inc:+1, order:buj cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while((unsigned int)__c < 49);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0564_0() {
    →fputs("0564 unsign start:48, iter:1, inc:+1, order:buj cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
    }
    while((unsigned int)__c <= 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0565_0() {
    →fputs("0565 unsign start:48, iter:1, inc:+1, order:bju cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if(__c == 48) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0566_0() {
    →fputs("0566 unsign start:48, iter:1, inc:+1, order:bju cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c >= 48) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0567_0() {
    →fputs("0567 unsign start:48, iter:1, inc:+1, order:bju cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 48;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c > 47) {
            break;
        }
        else {
            ++__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0568_0() {
    →fputs("0568 unsign start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while(__c != 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0569_0() {
    →fputs("0569 unsign start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while((unsigned int)__c < 48);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0570_0() {
    →fputs("0570 unsign start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 47;
    do {
        ++__c;
        →putchar(__c);
    }
    while((unsigned int)__c <= 47);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0571_0() {
    →fputs("0571 unsign start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 47;
    ++__c;
    while(__c != 49) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0572_0() {
    →fputs("0572 unsign start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 47;
    ++__c;
    while((unsigned int)__c < 49) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0573_0() {
    →fputs("0573 unsign start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 47;
    ++__c;
    while((unsigned int)__c <= 48) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0574_0() {
    →fputs("0574 unsign start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected=\'0\'   >", stdout);
    for(int i = 48; i != 49; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0575_0() {
    →fputs("0575 unsign start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected=\'0\'   >", stdout);
    for(int i = 48; (unsigned int)i < 49; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0576_0() {
    →fputs("0576 unsign start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected=\'0\'   >", stdout);
    for(int i = 48; (unsigned int)i <= 48; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0577_0() {
    →fputs("0577 unsign start:48, iter:1, inc:+1, order:jub cmp:!=0                expected=\'0\'   >", stdout);
    int __c = 47;
    while(__c != 48) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0578_0() {
    →fputs("0578 unsign start:48, iter:1, inc:+1, order:jub cmp:< 0                expected=\'0\'   >", stdout);
    int __c = 47;
    while((unsigned int)__c < 48) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0579_0() {
    →fputs("0579 unsign start:48, iter:1, inc:+1, order:jub cmp:<=0                expected=\'0\'   >", stdout);
    int __c = 47;
    while((unsigned int)__c <= 47) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0580_0() {
    →fputs("0580 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    do {
        →putchar(v0 + 48);
        ++v0;
    }
    while(v0 != 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0581_0() {
    →fputs("0581 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    do {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    while(v0 < 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0582_0() {
    →fputs("0582 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    do {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    while(v0 < 0 || (v0 ? 0: 1));
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0583_0() {
    →fputs("0583 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = 0;
    while(1) {
        →putchar(v0 + 48);
        if(!v0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0584_0() {
    →fputs("0584 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    while(1) {
        →putchar((int)(v0 + 48));
        if(v0 >= 0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0585_0() {
    →fputs("0585 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    do {
        ++v0;
        →putchar(v0 + 48);
    }
    while(v0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0586_0() {
    →fputs("0586 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    unsigned int v0 = 0xffffffff;
    do {
        ++v0;
        →putchar((int)(v0 + 48));
    }
    while(v0 < 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0587_0() {
    →fputs("0587 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    ++v0;
    while(v0 != 1) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0588_0() {
    →fputs("0588 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    unsigned int v0 = 0xffffffff;
    ++v0;
    while(v0 < 1) {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0589_0() {
    →fputs("0589 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    unsigned int v0 = 0xffffffff;
    ++v0;
    while((v0 < 0 || (v0 ? 0: 1))) {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0590_0() {
    →fputs("0590 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    for(int i = 0; i != 1; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0591_0() {
    →fputs("0591 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'0\'   >", stdout);
    for(unsigned int i = 0; i < 1; ++i) {
        →putchar((int)(i + 48));
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0592_0() {
    →fputs("0592 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected=\'0\'   >", stdout);
    for(unsigned int i = 0; (i < 0 || (i ? 0: 1)); ++i) {
        →putchar((int)(i + 48));
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0593_0() {
    →fputs("0593 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected=\'0\'   >", stdout);
    int v0 = -1;
    while(v0) {
        ++v0;
        →putchar(v0 + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0594_0() {
    →fputs("0594 unsign start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 != 18);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0595_0() {
    →fputs("0595 unsign start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 18);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0596_0() {
    →fputs("0596 unsign start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 < 17);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0597_0() {
    →fputs("0597 unsign start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 17);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0598_0() {
    →fputs("0598 unsign start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    do {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    while(v0 <= 16);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0599_0() {
    →fputs("0599 unsign start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 == 16) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0600_0() {
    →fputs("0600 unsign start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 16) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0601_0() {
    →fputs("0601 unsign start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 >= 15) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0602_0() {
    →fputs("0602 unsign start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 15) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0603_0() {
    →fputs("0603 unsign start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 16;
    while(1) {
        →putchar((v0 >>> 1) + 40);
        if(v0 > 14) {
            break;
        }
        else {
            v0 += 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0604_0() {
    →fputs("0604 unsign start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 != 16);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0605_0() {
    →fputs("0605 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 16);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0606_0() {
    →fputs("0606 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 < 15);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0607_0() {
    →fputs("0607 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 15);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0608_0() {
    →fputs("0608 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    do {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    while(v0 <= 14);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0609_0() {
    →fputs("0609 unsign start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 != 18) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0610_0() {
    →fputs("0610 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 < 18) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0611_0() {
    →fputs("0611 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 < 17) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0612_0() {
    →fputs("0612 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 <= 17) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0613_0() {
    →fputs("0613 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 <= 16) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0614_0() {
    →fputs("0614 unsign start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    for(int i = 16; i != 18; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0615_0() {
    →fputs("0615 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    for(unsigned int i = 16; i < 18; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0616_0() {
    →fputs("0616 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    for(unsigned int i = 16; i < 17; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0617_0() {
    →fputs("0617 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    for(unsigned int i = 16; i <= 17; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0618_0() {
    →fputs("0618 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    for(unsigned int i = 16; i <= 16; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0619_0() {
    →fputs("0619 unsign start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'0\'   >", stdout);
    int v0 = 14;
    while(v0 != 16) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0620_0() {
    →fputs("0620 unsign start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    while(v0 < 16) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0621_0() {
    →fputs("0621 unsign start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    while(v0 < 15) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0622_0() {
    →fputs("0622 unsign start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    while(v0 <= 15) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0623_0() {
    →fputs("0623 unsign start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'0\'   >", stdout);
    unsigned int v0 = 14;
    while(v0 <= 14) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0624_9() {
    →fputs("0624 unsign start:57, iter:1, inc:-1, order:buj cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while(__c != 56);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0625_9() {
    →fputs("0625 unsign start:57, iter:1, inc:-1, order:buj cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while((unsigned int)__c > 56);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0626_9() {
    →fputs("0626 unsign start:57, iter:1, inc:-1, order:buj cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 57;
    do {
        →putchar(__c);
        --__c;
    }
    while((unsigned int)__c >= 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0627_9() {
    →fputs("0627 unsign start:57, iter:1, inc:-1, order:bju cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if(__c == 57) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0628_9() {
    →fputs("0628 unsign start:57, iter:1, inc:-1, order:bju cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c <= 57) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0629_9() {
    →fputs("0629 unsign start:57, iter:1, inc:-1, order:bju cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 57;
    while(1) {
        →putchar(__c);
        if((unsigned int)__c < 58) {
            break;
        }
        else {
            --__c;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0630_9() {
    →fputs("0630 unsign start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while(__c != 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0631_9() {
    →fputs("0631 unsign start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while((unsigned int)__c > 57);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0632_9() {
    →fputs("0632 unsign start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 58;
    do {
        --__c;
        →putchar(__c);
    }
    while((unsigned int)__c >= 58);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0633_9() {
    →fputs("0633 unsign start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 58;
    --__c;
    while(__c != 56) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0634_9() {
    →fputs("0634 unsign start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 58;
    --__c;
    while((unsigned int)__c > 56) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0635_9() {
    →fputs("0635 unsign start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 58;
    --__c;
    while((unsigned int)__c >= 57) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0636_9() {
    →fputs("0636 unsign start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected=\'9\'   >", stdout);
    for(int i = 57; i != 56; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0637_9() {
    →fputs("0637 unsign start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected=\'9\'   >", stdout);
    for(int i = 57; (unsigned int)i > 56; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0638_9() {
    →fputs("0638 unsign start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected=\'9\'   >", stdout);
    for(int i = 57; (unsigned int)i >= 57; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0639_9() {
    →fputs("0639 unsign start:57, iter:1, inc:-1, order:jub cmp:!=0                expected=\'9\'   >", stdout);
    int __c = 58;
    while(__c != 57) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0640_9() {
    →fputs("0640 unsign start:57, iter:1, inc:-1, order:jub cmp:< 0                expected=\'9\'   >", stdout);
    int __c = 58;
    while((unsigned int)__c > 57) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0641_9() {
    →fputs("0641 unsign start:57, iter:1, inc:-1, order:jub cmp:<=0                expected=\'9\'   >", stdout);
    int __c = 58;
    while((unsigned int)__c >= 58) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0642_9() {
    →fputs("0642 unsign start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 != 98);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0643_9() {
    →fputs("0643 unsign start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 99);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0644_9() {
    →fputs("0644 unsign start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 > 98);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0645_9() {
    →fputs("0645 unsign start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 100);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0646_9() {
    →fputs("0646 unsign start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    do {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    while(v0 >= 99);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0647_9() {
    →fputs("0647 unsign start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 == 100) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0648_9() {
    →fputs("0648 unsign start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 101) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0649_9() {
    →fputs("0649 unsign start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 <= 100) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0650_9() {
    →fputs("0650 unsign start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 102) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0651_9() {
    →fputs("0651 unsign start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 100;
    while(1) {
        →putchar((v0 >>> 1) + 7);
        if(v0 < 101) {
            break;
        }
        else {
            v0 -= 2;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0652_9() {
    →fputs("0652 unsign start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 != 100);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0653_9() {
    →fputs("0653 unsign start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 101);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0654_9() {
    →fputs("0654 unsign start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 > 100);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0655_9() {
    →fputs("0655 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 102);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0656_9() {
    →fputs("0656 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    do {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    while(v0 >= 101);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0657_9() {
    →fputs("0657 unsign start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 != 98) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0658_9() {
    →fputs("0658 unsign start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 > 99) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0659_9() {
    →fputs("0659 unsign start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 > 98) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0660_9() {
    →fputs("0660 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 >= 100) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0661_9() {
    →fputs("0661 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 >= 99) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0662_9() {
    →fputs("0662 unsign start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    for(int i = 100; i != 98; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0663_9() {
    →fputs("0663 unsign start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    for(unsigned int i = 100; i > 99; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0664_9() {
    →fputs("0664 unsign start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    for(unsigned int i = 100; i > 98; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0665_9() {
    →fputs("0665 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    for(unsigned int i = 100; i >= 100; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0666_9() {
    →fputs("0666 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    for(unsigned int i = 100; i >= 99; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0667_9() {
    →fputs("0667 unsign start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'9\'   >", stdout);
    int v0 = 102;
    while(v0 != 100) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0668_9() {
    →fputs("0668 unsign start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    while(v0 > 101) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0669_9() {
    →fputs("0669 unsign start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    while(v0 > 100) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0670_9() {
    →fputs("0670 unsign start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    while(v0 >= 102) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0671_9() {
    →fputs("0671 unsign start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'9\'   >", stdout);
    unsigned int v0 = 102;
    while(v0 >= 101) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0672_0() {
    →fputs("0672 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 != 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0673_0() {
    →fputs("0673 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 < 1);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0674_0() {
    →fputs("0674 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    while(v0 < 0 || (v0 ? 0: 1));
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0675_0() {
    →fputs("0675 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(!v0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0676_0() {
    →fputs("0676 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 >= 0) {
            break;
        }
        else {
            ++v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0677_0() {
    →fputs("0677 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0678_0() {
    →fputs("0678 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    do {
        ++v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 < 0);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0679_0() {
    →fputs("0679 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0 != 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0680_0() {
    →fputs("0680 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    ++v0;
    while(v0 < 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0681_0() {
    →fputs("0681 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    ++v0;
    while((v0 < 0 || (v0 ? 0: 1))) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0682_0() {
    →fputs("0682 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0 != 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0683_0() {
    →fputs("0683 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while(v0 < 1) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0684_0() {
    →fputs("0684 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=\'0\'   >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while((v0 < 0 || (v0 ? 0: 1))) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0685_0() {
    →fputs("0685 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=\'0\'   >", stdout);
    int v0 = -1;
    for(int i = 48; v0; ++i) {
        ++v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0686_0() {
    →fputs("0686 unsign start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 != 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0687_0() {
    →fputs("0687 unsign start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 > 9);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0688_0() {
    →fputs("0688 unsign start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    do {
        →putchar(__c);
        ++__c;
        --v0;
    }
    while(v0 >= 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0689_0() {
    →fputs("0689 unsign start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 == 10) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0690_0() {
    →fputs("0690 unsign start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 <= 10) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0691_0() {
    →fputs("0691 unsign start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(1) {
        →putchar(__c);
        ++__c;
        if(v0 < 11) {
            break;
        }
        else {
            --v0;
        }
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0692_0() {
    →fputs("0692 unsign start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 != 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0693_0() {
    →fputs("0693 unsign start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 > 10);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0694_0() {
    →fputs("0694 unsign start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    do {
        --v0;
        →putchar(__c);
        ++__c;
    }
    while(v0 >= 11);
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0695_0() {
    →fputs("0695 unsign start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 != 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0696_0() {
    →fputs("0696 unsign start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 > 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0697_0() {
    →fputs("0697 unsign start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0698_0() {
    →fputs("0698 unsign start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 != 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0699_0() {
    →fputs("0699 unsign start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(v0 > 9) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0700_0() {
    →fputs("0700 unsign start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(v0 >= 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0701_0() {
    →fputs("0701 unsign start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'0\'   >", stdout);
    int v0 = 11;
    for(int i = 48; v0 != 10; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0702_0() {
    →fputs("0702 unsign start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 11;
    for(int i = 48; v0 > 10; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0703_0() {
    →fputs("0703 unsign start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'0\'   >", stdout);
    unsigned int v0 = 11;
    for(int i = 48; v0 >= 11; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0704_empty() {
    →fputs("0704 unsign start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=\'\'    >", stdout);
    int __c = 47;
    ++__c;
    while(__c != 48) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0705_empty() {
    →fputs("0705 unsign start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=\'\'    >", stdout);
    int __c = 47;
    ++__c;
    while((unsigned int)__c < 48) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0706_empty() {
    →fputs("0706 unsign start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=\'\'    >", stdout);
    int __c = 47;
    ++__c;
    while((unsigned int)__c <= 47) {
        →putchar(__c);
        ++__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0707_empty() {
    →fputs("0707 unsign start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=\'\'    >", stdout);
    for(int i = 48; i != 48; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0708_empty() {
    →fputs("0708 unsign start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=\'\'    >", stdout);
    for(int i = 48; (unsigned int)i < 48; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0709_empty() {
    →fputs("0709 unsign start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=\'\'    >", stdout);
    for(int i = 48; (unsigned int)i <= 47; ++i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0710_empty() {
    →fputs("0710 unsign start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=\'\'    >", stdout);
    int __c = 47;
    while(__c != 47) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0711_empty() {
    →fputs("0711 unsign start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=\'\'    >", stdout);
    int __c = 47;
    while((unsigned int)__c < 47) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0712_empty() {
    →fputs("0712 unsign start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=\'\'    >", stdout);
    int __c = 47;
    while((unsigned int)__c <= 46) {
        ++__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0713_empty() {
    →fputs("0713 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'\'    >", stdout);
    int v0 = -1;
    ++v0;
    while(v0) {
        →putchar(v0 + 48);
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0714_empty() {
    →fputs("0714 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'\'    >", stdout);
    unsigned int v0 = 0xffffffff;
    ++v0;
    while(v0 < 0) {
        →putchar((int)(v0 + 48));
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0715_empty() {
    →fputs("0715 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'\'    >", stdout);
    for(int i = 0; i; ++i) {
        →putchar(i + 48);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0716_empty() {
    →fputs("0716 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'\'    >", stdout);
    for(unsigned int i = 0; i < 0; ++i) {
        →putchar((int)(i + 48));
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0717_empty() {
    →fputs("0717 unsign start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    v0 += 2;
    while(v0 != 16) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0718_empty() {
    →fputs("0718 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 < 16) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0719_empty() {
    →fputs("0719 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 < 15) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0720_empty() {
    →fputs("0720 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 <= 15) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0721_empty() {
    →fputs("0721 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    v0 += 2;
    while(v0 <= 14) {
        →putchar((v0 >>> 1) + 40);
        v0 += 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0722_empty() {
    →fputs("0722 unsign start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'\'    >", stdout);
    for(int i = 16; i != 16; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0723_empty() {
    →fputs("0723 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'\'    >", stdout);
    for(unsigned int i = 16; i < 16; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0724_empty() {
    →fputs("0724 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'\'    >", stdout);
    for(unsigned int i = 16; i < 15; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0725_empty() {
    →fputs("0725 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'\'    >", stdout);
    for(unsigned int i = 16; i <= 15; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0726_empty() {
    →fputs("0726 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'\'    >", stdout);
    for(unsigned int i = 16; i <= 14; i += 2) {
        →putchar((i >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0727_empty() {
    →fputs("0727 unsign start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'\'    >", stdout);
    int v0 = 14;
    while(v0 != 14) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0728_empty() {
    →fputs("0728 unsign start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    while(v0 < 14) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0729_empty() {
    →fputs("0729 unsign start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    while(v0 < 13) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0730_empty() {
    →fputs("0730 unsign start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    while(v0 <= 13) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0731_empty() {
    →fputs("0731 unsign start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'\'    >", stdout);
    unsigned int v0 = 14;
    while(v0 <= 12) {
        v0 += 2;
        →putchar((v0 >>> 1) + 40);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0732_empty() {
    →fputs("0732 unsign start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=\'\'    >", stdout);
    int __c = 58;
    --__c;
    while(__c != 57) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0733_empty() {
    →fputs("0733 unsign start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=\'\'    >", stdout);
    int __c = 58;
    --__c;
    while((unsigned int)__c > 57) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0734_empty() {
    →fputs("0734 unsign start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=\'\'    >", stdout);
    int __c = 58;
    --__c;
    while((unsigned int)__c >= 58) {
        →putchar(__c);
        --__c;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0735_empty() {
    →fputs("0735 unsign start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=\'\'    >", stdout);
    for(int i = 57; i != 57; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0736_empty() {
    →fputs("0736 unsign start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=\'\'    >", stdout);
    for(int i = 57; (unsigned int)i > 57; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0737_empty() {
    →fputs("0737 unsign start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=\'\'    >", stdout);
    for(int i = 57; (unsigned int)i >= 58; --i) {
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0738_empty() {
    →fputs("0738 unsign start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=\'\'    >", stdout);
    int __c = 58;
    while(__c != 58) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0739_empty() {
    →fputs("0739 unsign start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=\'\'    >", stdout);
    int __c = 58;
    while((unsigned int)__c > 58) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0740_empty() {
    →fputs("0740 unsign start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=\'\'    >", stdout);
    int __c = 58;
    while((unsigned int)__c >= 59) {
        --__c;
        →putchar(__c);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0741_empty() {
    →fputs("0741 unsign start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    v0 -= 2;
    while(v0 != 100) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0742_empty() {
    →fputs("0742 unsign start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 > 101) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0743_empty() {
    →fputs("0743 unsign start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 > 100) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0744_empty() {
    →fputs("0744 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 >= 102) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0745_empty() {
    →fputs("0745 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    v0 -= 2;
    while(v0 >= 101) {
        →putchar((v0 >>> 1) + 7);
        v0 -= 2;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0746_empty() {
    →fputs("0746 unsign start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'\'    >", stdout);
    for(int i = 100; i != 100; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0747_empty() {
    →fputs("0747 unsign start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'\'    >", stdout);
    for(unsigned int i = 100; i > 101; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0748_empty() {
    →fputs("0748 unsign start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'\'    >", stdout);
    for(unsigned int i = 100; i > 100; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0749_empty() {
    →fputs("0749 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'\'    >", stdout);
    for(unsigned int i = 100; i >= 102; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0750_empty() {
    →fputs("0750 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'\'    >", stdout);
    for(unsigned int i = 100; i >= 101; i -= 2) {
        →putchar((i >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0751_empty() {
    →fputs("0751 unsign start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'\'    >", stdout);
    int v0 = 102;
    while(v0 != 102) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0752_empty() {
    →fputs("0752 unsign start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    while(v0 > 103) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0753_empty() {
    →fputs("0753 unsign start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    while(v0 > 102) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0754_empty() {
    →fputs("0754 unsign start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    while(v0 >= 104) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0755_empty() {
    →fputs("0755 unsign start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'\'    >", stdout);
    unsigned int v0 = 102;
    while(v0 >= 103) {
        v0 -= 2;
        →putchar((v0 >>> 1) + 7);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0756_empty() {
    →fputs("0756 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = -1;
    int __c = 48;
    ++v0;
    while(v0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0757_empty() {
    →fputs("0757 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'\'    >", stdout);
    unsigned int v0 = 0xffffffff;
    int __c = 48;
    ++v0;
    while(v0 < 0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0758_empty() {
    →fputs("0758 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'\'    >", stdout);
    int v0 = 0;
    int __c = 48;
    while(v0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0759_empty() {
    →fputs("0759 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'\'    >", stdout);
    unsigned int v0 = 0;
    int __c = 48;
    while(v0 < 0) {
        →putchar(__c);
        ++__c;
        ++v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0760_empty() {
    →fputs("0760 unsign start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0761_empty() {
    →fputs("0761 unsign start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'\'    >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 > 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0762_empty() {
    →fputs("0762 unsign start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'\'    >", stdout);
    unsigned int v0 = 11;
    int __c = 48;
    --v0;
    while(v0 >= 11) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0763_empty() {
    →fputs("0763 unsign start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 10;
    int __c = 48;
    while(v0 != 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0764_empty() {
    →fputs("0764 unsign start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'\'    >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(v0 > 10) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0765_empty() {
    →fputs("0765 unsign start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'\'    >", stdout);
    unsigned int v0 = 10;
    int __c = 48;
    while(v0 >= 11) {
        →putchar(__c);
        ++__c;
        --v0;
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0766_empty() {
    →fputs("0766 unsign start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'\'    >", stdout);
    int v0 = 11;
    for(int i = 48; v0 != 11; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0767_empty() {
    →fputs("0767 unsign start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'\'    >", stdout);
    unsigned int v0 = 11;
    for(int i = 48; v0 > 11; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}

int var0768_empty() {
    →fputs("0768 unsign start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'\'    >", stdout);
    unsigned int v0 = 11;
    for(int i = 48; v0 >= 12; ++i) {
        --v0;
        →putchar(i);
    }
    →puts((char*)&gvar_805706B);
    return 0;
}
