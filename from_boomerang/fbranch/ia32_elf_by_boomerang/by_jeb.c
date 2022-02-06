
int main() {
    float v0;
    void* ptr0;
    →scanf((char*)&gvar_8048580, &v0);
    *(long long*)&ptr0 = v0;
    int v1 = 0x40140000;
    int v2 = 0;
    int v3 = →printf("a is %f, b is %f\n", *(double*)&v2, *(double*)&ptr0);
    fucom(5.0, v0);
    fnstsw((unsigned short)v3);
    __int128 v4 = 0x4001A000000000000000X;
    int v5 = (unsigned int)(unsigned char)v3 | ((unsigned int)(((unsigned char)(v3 >>> 8) & 0x45) ^ 0x40) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
    if(!(unsigned char)(v5 >>> 8)) {
        v5 = →puts("Equal");
        v4 = v0;
    }
    fucomp(5.0, v4);
    fnstsw((unsigned short)v5);
    int result = (unsigned int)(unsigned char)v5 | ((unsigned int)((unsigned char)(v5 >>> 8) & 0x45) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
    if((unsigned char)(result >>> 8) != 64) {
        result = →puts("Not Equal");
        v4 = v0;
    }
    fucomp(5.0, v4);
    fnstsw((unsigned short)result);
    if(!((unsigned char)(result >>> 8) & 0x45)) {
        result = →puts("Greater");
        v4 = v0;
    }
    fucom(5.0, v4);
    fnstsw((unsigned short)result);
    __int128 v6 = 0x4001A000000000000000X;
    if(!((unsigned char)(result >>> 8) & 0x1)) {
        result = →puts("Less or Equal");
        v6 = v0;
    }
    fucomp(5.0, v6);
    fnstsw((unsigned short)result);
    if(!((unsigned char)(result >>> 8) & 0x1)) {
        result = →puts((char*)&gvar_804859A);
        v6 = v0;
    }
    fucompp(5.0, v6);
    fnstsw((unsigned short)result);
    if(!((unsigned char)(result >>> 8) & 0x45)) {
        result = →puts("Less");
    }
    return result;
}

int sub_8048296() {
    return gvar_80496C4();
}
