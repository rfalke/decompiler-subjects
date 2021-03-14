
int main() {
    float v0;
    __SyntheticTypeUnknown v1;
    __int128 v2;
    int v3;
    int v4;
    int result;
    int v5;
    int v6;
    int v7;
    int v8 = →scanf((char*)&gvar_8048580, &v0);
    *(long long*)&v8 = v0;
    int v9 = 0x40140000;
    int v10 = 0;
    int v11 = →printf("a is %f, b is %f\n", *(double*)&v10, *(double*)&v8);
    v1[v22 + 1] = fucom(v0, 5.0);
    short v25 = fnstsw((unsigned short)v11);
    __int128 v12 = v2;
    int v13 = (unsigned int)(unsigned char)v6 | ((unsigned int)(((unsigned char)(v6 >>> 8) & 0x45) ^ 0x40) << 8) | ((unsigned int)(unsigned short)(v6 >>> 16) << 16);
    if(!(unsigned char)(v13 >>> 8)) {
        v13 = →puts("Equal");
        v12 = v0;
    }
    char v14 = 5;
    v1[v22 + 1] = fucomp(v12, 5.0);
    short v19 = fnstsw((unsigned short)v13);
    int v15 = (unsigned int)(unsigned char)v3 | ((unsigned int)((unsigned char)(v3 >>> 8) & 0x45) << 8) | ((unsigned int)(unsigned short)(v3 >>> 16) << 16);
    if((unsigned char)(v15 >>> 8) != 64) {
        v15 = →puts("Not Equal");
        v14 = 6;
    }
    char v16 = v14 - 1;
    v1[v16] = 5.0;
    v1[v22 + 1] = fucomp(v1[v16 + 1], v1[v16]);
    short v23 = fnstsw((unsigned short)v15);
    if(!((unsigned char)(v4 >>> 8) & 0x45)) {
        v4 = →puts("Greater");
        v16 = 6;
    }
    v1[v16 - 1] = 5.0;
    v1[v22 + 1] = fucom(v1[v16], v1[v16 - 1]);
    short v20 = fnstsw((unsigned short)v4);
    v1[v16] = v1[v16 - 1];
    char v17 = v16;
    if(!((unsigned char)(v7 >>> 8) & 0x1)) {
        v7 = →puts("Less or Equal");
        v17 = 6;
    }
    char v18 = v17 - 1;
    v1[v18] = 5.0;
    v1[v22 + 1] = fucomp(v1[v18 + 1], v1[v18]);
    short v24 = fnstsw((unsigned short)v7);
    if(!((unsigned char)(v5 >>> 8) & 0x1)) {
        v5 = →puts((char*)&gvar_804859A);
        v18 = 6;
    }
    v1[v18 - 1] = 5.0;
    fucompp();
    short v21 = fnstsw((unsigned short)v5);
    if(!((unsigned char)(result >>> 8) & 0x45)) {
        result = →puts("Less");
    }
    return result;
}

void sub_8048290() {
    jump gvar_80496C4;
}

int sub_80482A6() {
    /*BAD_CALL!*/ sub_8048290();
}

int sub_80482B6() {
    /*BAD_CALL!*/ sub_8048290();
}

int sub_80482C6() {
    /*BAD_CALL!*/ sub_8048290();
}

int sub_80482D6() {
    /*BAD_CALL!*/ sub_8048290();
}

void sub_8048362() {
}

int sub_804844E() {
    int* ptr0;
    int v0;
    int v1 = →puts((char*)&gvar_804859A);
    fucompp();
    short v2 = fnstsw((unsigned short)v1);
    if(!((unsigned char)(v0 >>> 8) & 0x45)) {
        →puts("Less");
    }
    jump *(ptr0 + 1);
}

int sub_804849A() {
    __SyntheticTypeUnknown v0;
    int v1;
    int v2;
    int* ptr0;
    int v3;
    int v4;
    int v5 = →puts("Not Equal");
    __int128 v6 = *(float*)(ptr0 - 1);
    char v7 = 5;
    v0[v14 + 1] = fucomp(v6, 5.0);
    short v13 = fnstsw((unsigned short)v5);
    if(!((unsigned char)(v4 >>> 8) & 0x45)) {
        v4 = →puts("Greater");
        v7 = 6;
    }
    v0[v7 - 1] = 5.0;
    v0[v14 + 1] = fucom(v0[v7], v0[v7 - 1]);
    short v10 = fnstsw((unsigned short)v4);
    v0[v7] = v0[v7 - 1];
    char v8 = v7;
    if(!((unsigned char)(v1 >>> 8) & 0x1)) {
        v1 = →puts("Less or Equal");
        v8 = 6;
    }
    char v9 = v8 - 1;
    v0[v9] = 5.0;
    v0[v14 + 1] = fucomp(v0[v9 + 1], v0[v9]);
    short v11 = fnstsw((unsigned short)v1);
    if(!((unsigned char)(v3 >>> 8) & 0x1)) {
        v3 = →puts((char*)&gvar_804859A);
        v9 = 6;
    }
    v0[v9 - 1] = 5.0;
    fucompp();
    short v12 = fnstsw((unsigned short)v3);
    if(!((unsigned char)(v2 >>> 8) & 0x45)) {
        →puts("Less");
    }
    jump *(ptr0 + 1);
}

int sub_80484B6() {
    __SyntheticTypeUnknown v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int* ptr0;
    int v5;
    int v6 = →puts("Equal");
    __int128 v7 = *(float*)(ptr0 - 1);
    char v8 = 5;
    v0[v13 + 1] = fucomp(v7, 5.0);
    short v18 = fnstsw((unsigned short)v6);
    int v9 = (unsigned int)(unsigned char)v5 | ((unsigned int)((unsigned char)(v5 >>> 8) & 0x45) << 8) | ((unsigned int)(unsigned short)(v5 >>> 16) << 16);
    if((unsigned char)(v9 >>> 8) != 64) {
        v9 = →puts("Not Equal");
        v8 = 6;
    }
    char v10 = v8 - 1;
    v0[v10] = 5.0;
    v0[v13 + 1] = fucomp(v0[v10 + 1], v0[v10]);
    short v14 = fnstsw((unsigned short)v9);
    if(!((unsigned char)(v3 >>> 8) & 0x45)) {
        v3 = →puts("Greater");
        v10 = 6;
    }
    v0[v10 - 1] = 5.0;
    v0[v13 + 1] = fucom(v0[v10], v0[v10 - 1]);
    short v15 = fnstsw((unsigned short)v3);
    v0[v10] = v0[v10 - 1];
    char v11 = v10;
    if(!((unsigned char)(v4 >>> 8) & 0x1)) {
        v4 = →puts("Less or Equal");
        v11 = 6;
    }
    char v12 = v11 - 1;
    v0[v12] = 5.0;
    v0[v13 + 1] = fucomp(v0[v12 + 1], v0[v12]);
    short v16 = fnstsw((unsigned short)v4);
    if(!((unsigned char)(v2 >>> 8) & 0x1)) {
        v2 = →puts((char*)&gvar_804859A);
        v12 = 6;
    }
    v0[v12 - 1] = 5.0;
    fucompp();
    short v17 = fnstsw((unsigned short)v2);
    if(!((unsigned char)(v1 >>> 8) & 0x45)) {
        →puts("Less");
    }
    jump *(ptr0 + 1);
}

int sub_8048526() {
    int result;
    int v0;
    int v1;
    int v2;
    do {
        *(int*)(v1 * 4 + (int)&data_start)();
        v0 = v1;
        --v1;
    }
    while(v0);
    finalizer_0(v2, 0);
    return result;
}
