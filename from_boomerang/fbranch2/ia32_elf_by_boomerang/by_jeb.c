
int main() {
    void* ptr0;
    float v0;
    short v1;
    int v2;
    →scanf(&gvar_80485C0);
    *(long long*)&ptr0 = 0x4014000000000000L;
    →printf("a is %f, b is %f\n");
    fucompp(5.0, v0);
    fnstsw(v1);
    if(((unsigned char)(v2 >>> 8) & 0x45) == 64) {
        →puts("Equal");
    }
    fucompp(5.0, v0);
    fnstsw((unsigned short)(unsigned char)v2 | ((unsigned short)((unsigned char)(v2 >>> 8) & 0x45) << 8));
    int v3 = (unsigned int)(unsigned char)v2 | ((unsigned int)(((unsigned char)(v2 >>> 8) & 0x45) ^ 0x40) << 8) | ((unsigned int)(unsigned short)(v2 >>> 16) << 16);
    if((unsigned char)(v3 >>> 8)) {
        →puts("Not Equal");
    }
    fucompp(5.0, v0);
    fnstsw((unsigned short)v3);
    if(!((unsigned char)(v3 >>> 8) & 0x45)) {
        →puts("Greater");
    }
    fucompp(5.0, v0);
    fnstsw((unsigned short)v3);
    if(!((unsigned char)(v3 >>> 8) & 0x5)) {
        →puts("Less or Equal");
    }
    fucompp(5.0, v0);
    fnstsw((unsigned short)v3);
    if(!((unsigned char)(v3 >>> 8) & 0x5)) {
        →puts("Greater or Equal");
    }
    fucompp(5.0, v0);
    fnstsw((unsigned short)v3);
    if(!((unsigned char)(v3 >>> 8) & 0x45)) {
        →puts("Less");
    }
    return 0;
}

int sub_80482E6() {
    return gvar_8049700();
}
