
int main() {
    float v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    float v10 = (float)5.0;
    →scanf((char*)&gvar_80485C0, &v0, v1, v2);
    __SyntheticTypeUnknownF v11 = v0;
    *(long long*)&v3 = 0x4014000000000000L;
    int v12 = →printf("a is %f, b is %f\n", v11, *(double*)&v3);
    fucompp();
    short v20 = fnstsw((unsigned short)v12);
    int v13 = (unsigned int)(unsigned char)v7 | ((unsigned int)((unsigned char)(v7 >>> 8) & 0x45) << 8) | ((unsigned int)(unsigned short)(v7 >>> 16) << 16);
    if((unsigned char)(v13 >>> 8) == 64) {
        v13 = →puts("Equal");
    }
    fucompp();
    short v15 = fnstsw((unsigned short)v13);
    int v14 = (unsigned int)(unsigned char)v8 | ((unsigned int)(((unsigned char)(v8 >>> 8) & 0x45) ^ 0x40) << 8) | ((unsigned int)(unsigned short)(v8 >>> 16) << 16);
    if((unsigned char)(v14 >>> 8)) {
        v14 = →puts("Not Equal");
    }
    fucompp();
    short v16 = fnstsw((unsigned short)v14);
    if(!((unsigned char)(v5 >>> 8) & 0x45)) {
        v5 = →puts("Greater");
    }
    fucompp();
    short v17 = fnstsw((unsigned short)v5);
    if(!((unsigned char)(v6 >>> 8) & 0x5)) {
        v6 = →puts("Less or Equal");
    }
    fucompp();
    short v18 = fnstsw((unsigned short)v6);
    if(!((unsigned char)(v9 >>> 8) & 0x5)) {
        v9 = →puts("Greater or Equal");
    }
    fucompp();
    short v19 = fnstsw((unsigned short)v9);
    if(!((unsigned char)(v4 >>> 8) & 0x45)) {
        →puts("Less");
    }
    return 0;
}

void sub_80482E0() {
    jump gvar_8049700;
}

void sub_80483BA() {
}
