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

int main(int argc, char *argv[]){
    printf("bfxil1: 0x%08x 0x%08x\n", bfxil1(0,-1), bfxil1(-1,0));
    printf("bfxil2: 0x%08x 0x%08x\n", bfxil2(0,-1), bfxil2(-1,0));
    printf("bfi:    0x%08x 0x%08x\n", bfi(0,-1), bfi(-1,0));
    return 0;
}
