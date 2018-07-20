#include <stdio.h>

int bfxil1(int dest, int src) {
    // bfxil 0,9
    return (src & 0x1ff) | (dest & 0xfffffe00);
}

int bfxil2(int dest, int src) {
    // bfxil 5,9
    int bitsToInsert = (src >> 5) & 0x1ff;
    return bitsToInsert | (dest & 0xfffffe00);
}

int bfi(int dest, int src) {
    // bfi 5,9
    int bitsToInsert = src & 0x1ff;
    // 0xfffffe00 rotated left 5 bits
    int rotatedMask = 0xffffc01f;
    return (bitsToInsert<<5) | (dest & rotatedMask);
}

unsigned int ubfx(unsigned int src) {
    // ubfx 5,9
    return (src>>5) & 0x1ff;
}

int ubfiz(int x) {
    // ubfiz 5,9
    return (x&0x1ff)<<5;
}

int cbz(int x) {
    if(x) {
        printf("not null but %d\n", x);
    } else {
        puts("is zero");
    }
    return 0;
}

int tbnz(int x) {
    if(x & 0x200) {
        printf("bit set in %d\n", x);
    } else {
        puts("bit is zero");
    }
    return 0;
}

int bic(int x, int y) {
    return x & (~y);
}

int eon(int x, int y) {
    return x ^ (~y);
}

int orn(int x, int y) {
    return x | (~y);
}


int main(int argc, char *argv[]){
    printf("bfxil1: 0x%08x 0x%08x\n", bfxil1(0,-1), bfxil1(-1,0));
    printf("bfxil2: 0x%08x 0x%08x\n", bfxil2(0,-1), bfxil2(-1,0));
    printf("bfi:    0x%08x 0x%08x\n", bfi(0,-1), bfi(-1,0));
    cbz(0);
    cbz(-1);
    tbnz(0);
    tbnz(-1);
    return 0;
}
