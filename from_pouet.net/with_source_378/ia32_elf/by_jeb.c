
// Stale decompilation - Refresh this view to re-decompile this code
int start(int param0, int param1) {
    unsigned int v0;
    sub_8048714(param0, param1);
    →SDL_Init();
    →SDL_OpenAudio();
    →SDL_SetVideoMode();
    sub_80491C0(param0, param1);
    →SDL_ShowCursor();
    →SDL_PauseAudio();
    →SDL_GetTicks();
    gvar_87CABE8 = v0;
    do {
        →SDL_GetTicks();
        sub_8048E99((int)(v0 - gvar_87CABE8));
        →SDL_GL_SwapBuffers();
        if(gvar_804A74C) {
            break;
        }
        else {
            →SDL_PollEvent();
        }
    }
    while(gvar_87CABEC != 2);
    →SDL_Quit();
    128 = int(128);
}

void sub_8048440() {
    jump gvar_804AAF4;
}

int sub_8048456() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_8048466() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_8048476() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_8048486() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_8048496() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_80484A6() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_80484B6() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_80484C6() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_80484D6() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_80484E6() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_80484F6() {
    /*BAD_CALL!*/ sub_8048440();
}

int sub_8048500(int param0, short* param1, int param2) {
    int v0;
    int v1;
    int result;
    unsigned int* ptr0;
    int* ptr1 = &v0;
    int* ptr2 = &v0;
    short* ptr3 = param1;
    do {
        unsigned int v2 = gvar_804A72E % 5292;
        if(!v2) {
            int v3 = 4;
            do {
                int v4 = *(int*)(v3 + 134522598);
                if(v4 != -2) {
                    *(int*)(v3 + 142388120) = *(int*)(v3 + 142388120) + 1;
                    if(v4 != -1) {
                        int v5 = sub_80486E2(v3);
                        if((unsigned char)v5 == 254) {
                            goto loc_804854A;
                        }
                    }
                    else {
                    loc_804854A:
                        *(int*)(v3 + 134522598) = *(int*)(v3 + 134522598) + 1;
                        char v6 = *(char*)(*(int*)(v3 + 134521998) + *(int*)(v3 + 134522598));
                        if(v6 == 253) {
                            *(int*)(v3 + 134522598) = 0;
                        }
                        if(v6 == 254) {
                            *(int*)(v3 + 134522598) = -2;
                        }
                        *(int*)(v3 + 142388120) = 0;
                    }
                    v4 = sub_80486E2(v3);
                    if((unsigned char)v4) {
                        if((unsigned char)v4 == 250) {
                            *(int*)(v1 + 134522554) = -1;
                            if((unsigned char)v4 != 250) {
                                goto loc_804859B;
                            }
                        }
                        else {
                        loc_804859B:
                            if((unsigned char)v4 == 252) {
                                *(char*)(v1 + 0x87cabc0) = (unsigned char)v4;
                                if((unsigned char)v4 != 252) {
                                    goto loc_80485A7;
                                }
                            }
                            else {
                            loc_80485A7:
                                if((unsigned char)v4 == 251) {
                                    v2 &= 0xffffff00;
                                    *(char*)(v1 + 0x87cabc0) = (unsigned char)v2;
                                    if((unsigned char)v2) {
                                        goto loc_80485BC;
                                    }
                                }
                                else {
                                loc_80485BC:
                                    unsigned int v7 = (unsigned int)(((unsigned int)*(short*)((char*)(v4 * 2 + (int)&gvar_804A626) + 2) | ((unsigned int)(unsigned short)(unsigned int)(((unsigned int)(v4 & 0x7fffffff) >>> 15) & 0xFFFF) << 16)) * 0x10000);
                                    *(int*)(v1 + 142388080) = (int)(v7 / 262);
                                    v2 = (int)(v7 / 262) < 0 ? 0xffffffff: 0;
                                    *(int*)(v1 + 134522554) = (int)(v7 / 262) < 0 ? -1: 0;
                                }
                            }
                        }
                    }
                }
                v3 += 4;
            }
            while(v3 != 40);
        }
        gvar_804AB58 = 0;
        int v8 = 140028784;
        do {
            sub_8048706();
            int v9 = *ptr0;
            gvar_804AB58 += v9;
            void* ptr4 = (void*)(v9 >> 1);
            sub_8048706();
            *ptr0 = ptr4;
            gvar_804AB5C = ptr0;
            int v10 = *(int*)(v1 + 134522554);
            if(v10 != -1) {
                int v11 = *(int*)((v10 >>> 16) * 4 + v1 * 0x10000 + 137145200);
                gvar_804AB58 += v11;
                if(*(char*)(v1 + 0x87cabc0)) {
                    *gvar_804AB5C = v11 / 5;
                }
                unsigned int v12 = (unsigned int)(*(int*)(v1 + 134522554) + *(int*)(v1 + 142388080));
                if(v12 >= 0xac440000) {
                    v12 = 0xffffffff;
                }
                *(unsigned int*)(v1 + 134522554) = v12;
            }
            v8 += 0x40000;
        }
        while(v1 + 4 != 40);
        int v13 = gvar_804AB58;
        if(v13 < 0xfffe8003) {
            v13 = 0xfffe8003;
        }
        if(v13 > 0x17ffd) {
            v13 = 0x17ffd;
        }
        *ptr3 = (unsigned short)v13 / 3;
        ++ptr3;
        ++gvar_804A72E;
        param2 -= 2;
    }
    while(param2);
    sub_80489C8(40);
    return result;
}

int sub_80486E2(int param0) {
    return (unsigned int)*(char*)(*(int*)((unsigned int)*(char*)(*(int*)(param0 + 134521998) + *(int*)(param0 + 134522598)) * 4 + 134522338) + *(int*)(param0 + 142388120)) | ((unsigned int)(((unsigned int)*(char*)(*(int*)(param0 + 134521998) + *(int*)(param0 + 134522598)) >>> 6) & 0xffffff) << 8);
}

int sub_8048706() {
    unsigned int v0;
    return (int)(v0 / 15876);
}

int sub_8048714(int param0, int param1) {
    int v0;
    short v1;
    short v2;
    int v3;
    int result = (unsigned int)v1 | ((unsigned int)v2 << 16);
    int v4 = param0;
    int v5 = param1;
    int v6 = v3;
    int* ptr0 = &v0;
    short* ptr1 = (short*)&gvar_804A6B8;
    short* ptr2 = (short*)&gvar_804A6A0;
    int counter = 60;
    do {
        v1 = *ptr1;
        --ptr1;
        *ptr2 = v1 >>> 1;
        --ptr2;
        --counter;
    }
    while(counter);
    int* ptr3 = (int*)&gvar_804AB70;
    unsigned int v7 = 0;
    do {
        *ptr3 = !(((unsigned char)((unsigned char)v7 * 2) / 168) & 0x1) ? 0x7fff: 0xffff8001;
        ++ptr3;
        *(ptr3 + 0x1ffff) = v7 % 168 * 0x10000 / 168 - 0x8000;
        unsigned int v8 = sub_804890C();
        *(ptr3 + 0x2ffff) = (unsigned int)(unsigned short)v8 - 0x8000;
        fsin();
        fistp();
        gvar_804A71E = gvar_804A71E * gvar_804A726 + gvar_804A716;
        *(unsigned int*)(ptr3 + 0xFFFF) = gvar_804A712;
        ++v7;
    }
    while(param0 != 1);
    int v9 = &gvar_804A200;
    int counter1 = 9;
    do {
        int v10 = counter1;
        sub_80487CB();
        v9 += 32;
        --counter1;
    }
    while(counter1);
    return result;
}

int sub_80487CB() {
    int* ptr0;
    gvar_804AB40 = 0;
    gvar_804AB44 = 0;
    gvar_804AB48 = 0;
    gvar_804AB4C = 0;
    gvar_804AB50 = 0;
    gvar_804AB60 = 0;
    gvar_804AB64 = 0x10000;
    gvar_804AB68 = (unsigned int)(*(ptr0 + 7) * 0x10000 / 168000);
    unsigned int v0 = *(unsigned int*)(ptr0 + 6);
    if(v0) {
        gvar_804AB40 = v0 / 103;
        gvar_804AB44 = v0 % 103 * 41698711;
    }
    else {
        gvar_804AB48 = 42;
    }
    sub_804888C();
    gvar_804AB54 = (unsigned int)(0 - gvar_804AB54);
    sub_8048891(*(ptr0 + 3));
    sub_804888C();
    return sub_804888C();
}

int sub_804888C() {
    unsigned int v0;
    gvar_804AB54 = v0;
}

unsigned int sub_8048891(int param0) {
    unsigned int result;
    int* ptr0;
    int v0;
    while(param0) {
        gvar_804AB60 += gvar_804AB64;
        gvar_804AB64 += gvar_804AB68;
        *ptr0 = ((((gvar_804AB50 >> 10) * *(int*)((gvar_804AB60 >>> 16) * 4 + v0)) >> 11) * (*(unsigned int*)((gvar_804AB48 & 0xFFFF) * 4 + (int)&gvar_808AB70) >> 4)) >> 12;
        ++ptr0;
        gvar_804AB50 += gvar_804AB54;
        unsigned int v1 = gvar_804AB44;
        unsigned int v2 = gvar_804AB4C;
        gvar_804AB4C += v1;
        result = gvar_804AB40;
        gvar_804AB48 = (unsigned int)((unsigned int)__carry__(v1, v2) + gvar_804AB48 + result);
        --param0;
        if(!param0) {
            return result;
        }
    }
    return result;
}

unsigned int sub_804890C() {
    unsigned int result = (unsigned int)__ror__((gvar_804A626 - 216562994) ^ 0xf31782ce, 1);
    gvar_804A626 = (unsigned int)__ror__((gvar_804A626 - 216562994) ^ 0xf31782ce, 1);
    return result;
}

int sub_80489C8(int param0) {
    int result;
    short v0;
    int v1;
    int v2 = 0;
    int v3 = 0;
    do {
        short v4 = *(short*)(v3 * 2 + v1);
        int v5 = (unsigned int)v4 | ((unsigned int)v0 << 16);
        *(unsigned int*)(v3 * 4 + (int)&gvar_87D55E0) = (double)v4 * gvar_804A8C8;
        int v6 = (int)v4;
        if(v6 < 0) {
            v6 = 0 - v6;
        }
        if(v6 >= v2) {
            v2 = v6;
        }
        ++v3;
    }
    while(v3 <= 0x3ff);
    gvar_87D55C0 = (double)(unsigned short)v2 * gvar_804A8CC + gvar_804A8D0 * gvar_87D55C0;
    if(gvar_87D55C4 > 47) {
        result = 0;
        gvar_87D55C0 = 0;
    }
    return result;
}

int sub_8048A31(float param0, int param1, int param2) {
    __SyntheticTypeUnknown v0;
    char v1;
    int v2 = param1;
    int v3 = param2;
    int result = 0;
    do {
        v0[v1 - 1] = param0;
        v0[v1 - 1] += v0[v1 - 1];
        v0[v1 - 1] *= param0;
        v0[v1 - 2] = param0;
        v0[v1 - 2] *= v0[v1 - 1];
        v0[v1 - 3] = param0;
        v0[v1 - 3] *= v0[v1 - 3];
        float v4 = v0[v1 - 3];
        v0[v1 - 3] *= gvar_804A8D4;
        v0[v1 - 2] -= v0[v1 - 3];
        fld1();
        v0[v1 - 1] += v0[v1 - 3];
        v0[v1 - 2] *= *(float*)(result * 4 + v2 + 12);
        v0[v1 - 3] = v4;
        v0[v1 - 3] *= param0;
        v0[v1 - 4] = v0[v1 - 3];
        v0[v1 - 4] *= gvar_804A8D8;
        v0[v1 - 1] += v0[v1 - 4];
        v0[v1 - 3] *= *(float*)(result * 4 + v2 + 24);
        v0[v1 - 2] += v0[v1 - 3];
        v0[v7 + 2] = fsubrp(v0[v1], v0[v1 - 2]);
        v0[v1 - 2] += param0;
        fld1();
        v0[v1 - 2] -= gvar_87D4844;
        float v5 = v0[v1 - 2];
        fld1();
        v0[v1 - 1] += gvar_87D484C;
        fld1();
        v0[v1 - 1] -= gvar_87D4848;
        float v6 = v0[v1 - 1];
        v0[v1 - 1] *= v0[v1];
        v0[v1 - 2] = *(float*)(result * 4 + v2 + 12);
        v0[v1 - 2] -= *(float*)(result * 4 + v2);
        v0[v1 - 1] *= v0[v1 - 2];
        fld1();
        v0[v1 - 1] -= gvar_87D484C;
        fld1();
        v0[v1 - 1] += gvar_87D4848;
        v0[v1 - 2] = v0[v1];
        v0[v1 - 2] *= v0[v1 - 1];
        v0[v1 - 3] = *(float*)(result * 4 + v2 + 24);
        v0[v1 - 3] -= *(float*)(result * 4 + v2 + 12);
        v0[v1 - 2] *= v0[v1 - 3];
        v0[v1 - 2] += v0[v1 - 3];
        v0[v1 - 3] = v5;
        v0[v1 - 2] *= v0[v1 - 3];
        v0[v1 + 3] *= v0[v1 - 2];
        v0[v1 - 2] = gvar_804A8DC;
        v0[v1 + 3] *= v0[v1 - 2];
        v0[v1 + 3] += v0[v1 - 2];
        fld1();
        param0 = fsubr(param0);
        v0[v1 - 2] = v4;
        v0[v1 - 1] *= v0[v1 - 2];
        v0[v1] *= v0[v1 - 1];
        v0[v1 + 2] *= v0[v1];
        v0[v1 + 1] *= v6;
        v0[v1] = *(float*)(result * 4 + v2 + 36);
        v0[v1] -= *(float*)(result * 4 + v2 + 24);
        v0[v1 + 1] *= v0[v1];
        v0[v1 + 2] += v0[v1 + 1];
        v0[v1 + 1] = v5;
        v0[v1 + 2] *= v0[v1 + 1];
        v0[v1 + 3] *= v0[v1 + 2];
        v0[v1 - 3] *= v0[v1 + 3];
        v0[v1 - 3] += v0[v1 - 4];
        *(int*)(result * 4 + v3) = v0[v1 - 3];
        v1 -= 2;
        ++result;
    }
    while(result <= 1);
    return result;
}

int sub_8048B1E(float param0) {
    int v0;
    __SyntheticTypeUnknown v1;
    int v2;
    char v3;
    int v4 = 0;
    unsigned int v5 = 0;
    do {
        int v6 = 0;
        do {
            v0 = v5 * 3 * 4 + 134522880;
            v1[v3 - 1] = gvar_804A8E0;
            v1[v3 - 1] *= (double)v6;
            float v7 = v1[v3 - 1];
            sub_8048A31(v1[v3 - 1], v0, &gvar_87D4864);
            sub_8048A31(v7, v5 * 3 * 4 + 134522976, &gvar_87D4870);
            int v8 = 0;
            do {
                gvar_804A8E4 = fsubr(gvar_804A8E4);
                *(unsigned int*)((v4 * 2 + v8 + v4) * 4 + (int)&gvar_87D48A0) = param0 * *(float*)(v8 * 4 + (int)&gvar_87D4864) + param0 * *(float*)(v8 * 4 + (int)&gvar_87D4870);
                ++v8;
            }
            while(v8 <= 2);
            __SyntheticTypeUnknownF v9 = gvar_804A8E8;
            int v10 = v4;
            fsin();
            *(unsigned int*)(v4 * 12 + (int)&gvar_87D48A8) = v9 * (double)v10 * gvar_804A8EC;
            v3 = 7;
            ++v4;
            ++v6;
        }
        while(v6 <= 15);
        ++v5;
    }
    while(v5 <= 3);
    v5 = 0;
    int result = v4 - 1;
    if(result > 0) {
        do {
            gvar_87D487C = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48B4) - *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A8);
            gvar_87D4880 = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A0) - *(float*)(v5 * 3 * 4 + (int)&gvar_87D48AC);
            gvar_87D4884 = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48B0) - *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A4);
            __SyntheticTypeUnknownF v11 = gvar_87D55C8;
            __SyntheticTypeUnknownF v12 = gvar_804A8F0;
            __SyntheticTypeUnknownF v13 = (double)v5 * gvar_804A8DC + v11 * v12;
            fsin();
            __SyntheticTypeUnknownF v14 = (double)v5 * gvar_804A8F4;
            fld1();
            __SyntheticTypeUnknownF v15 = (double)v5 * ((v12 * gvar_87D55C0 + v14) * v14);
            *(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A4) = v11 + *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A4);
            fsin();
            __SyntheticTypeUnknownF v16 = v16 * (v15 + (v13 + v16 * gvar_804A8F8 * gvar_804A8FC) * gvar_87D55C0) * gvar_804A900 + *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A8);
            *(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A8) = v16;
            gvar_87D558C(2896);
            gvar_87D558C(2977);
            gvar_87D558C(2929);
            __SyntheticTypeUnknownF v17 = gvar_87D4850;
            gvar_87D5580(v17 * gvar_804A90C, v17 * gvar_804A908, v17 * gvar_804A904);
            gvar_87D5598(&gvar_87D487C, v0);
            gvar_87D5564(9);
            int v18 = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A4) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A0), *(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A8) ^ 0x80000000);
            v18 = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48B0) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48AC), *(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48B4) ^ 0x80000000);
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48AC), (int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48B4), *(float*)(v5 * 3 * 4 + (int)&gvar_87D48B0) * gvar_804A910);
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A0), (int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A8), *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A4) * gvar_804A910);
            gvar_87D5568(v2, v0, v18);
            gvar_87D5580(0, 0, 0);
            gvar_87D5590(2896, v0, v18);
            gvar_87D5564(1);
            v18 = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A4) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A0), *(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A8) ^ 0x80000000);
            v18 = *(float*)(v5 * 3 * 4 + (int)&gvar_87D48B0) * gvar_804A910;
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48AC), *(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48B4) ^ 0x80000000);
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48AC), (int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48B4), *(float*)(v5 * 3 * 4 + (int)&gvar_87D48B0) * gvar_804A910);
            gvar_87D556C((int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A0), (int)*(unsigned int*)(v5 * 3 * 4 + (int)&gvar_87D48A8), *(float*)(v5 * 3 * 4 + (int)&gvar_87D48A4) * gvar_804A910);
            gvar_87D5568(v2, v0, v18);
            ++v5;
            result = v4 - 1;
        }
        while(result > (int)v5);
    }
    return result;
}

int sub_8048E99(int param0) {
    int v0;
    int v1;
    unsigned int v2;
    short v3;
    short v4;
    int v5;
    int v6;
    int v7 = param0;
    gvar_87D55C8 = (float)v7;
    v3 = fnstcw(v3);
    short v4 = fldcw((unsigned short)(unsigned char)v3 | ((unsigned short)12 << 8));
    fistp();
    v3 = fldcw(v3);
    if(gvar_87D55C4 > 58) {
        gvar_804A74C = 1;
    }
    v4 = fldcw(v4);
    fistp();
    v3 = fldcw(v3);
    int result = v1;
    if(gvar_804A8B4 != result) {
        gvar_804A8B4 = result;
        unsigned int v8 = 0;
        while((int)*(unsigned char*)(v8 * 9 + (int)&gvar_804A769) <= gvar_87D55C4) {
            ++v8;
            if(v8 > 15) {
                goto loc_8048F70;
            }
        }
        int v9 = 1;
        do {
            __SyntheticTypeUnknownF v10 = gvar_804A924 * *(float*)(v9 * 4 + 142428224);
            v0 = (unsigned int)(short)*(char*)(v8 * 9 + v9 + 134522720) | ((unsigned int)(unsigned short)((v8 * 9) >>> 16) << 16);
            *(int*)(v9 * 4 + 142428224) = v10 + (double)(unsigned short)v0 * gvar_804A928;
            ++v9;
        }
        while(v9 <= 9);
    loc_8048F70:
        __SyntheticTypeUnknownF v11 = gvar_87D4860;
        gvar_87D5578(v11, v11, v11, 0x3f800000);
        gvar_87D557C(0x4100, (int)v2, v5);
        gvar_87D5570(5889);
        gvar_87D5574(v6);
        gvar_87D55A0(0x47ae147b, -1081836831, 0x47ae147b, 1065646817, -343597384, -1082214319, -343597384);
        gvar_87D5570(5888);
        gvar_87D5574(v6);
        gvar_87D5588(0, 0, (int)gvar_87D4854);
        int v12 = 0;
        int v13 = 0;
        int v14 = 0x3f800000;
        fchs();
        gvar_87D5584(gvar_87D4858 * gvar_804A92C);
        __SyntheticTypeUnknownF v15 = gvar_804A930 * gvar_87D485C + gvar_87D5560;
        gvar_87D5560 = v15;
        v0 = 0x3f800000;
        v5 = 0;
        v2 = 0;
        int v16 = gvar_87D5584(v15);
        if(gvar_87D55C4 <= 47) {
            gvar_87D5590(2896);
            gvar_87D559C(0x40400000);
            int v17 = 0;
            do {
                gvar_87D5564(3);
                int v18 = 0;
                do {
                    v0 = v18;
                    float v19 = (float)v0;
                    __SyntheticTypeUnknownF v20 = (double)v0 * gvar_804A934;
                    fsin();
                    gvar_804A8E4 = fsubr(gvar_804A8E4);
                    gvar_87D5580(v20, v20, v20);
                    v5 = 0xbe99999a;
                    v2 = *(unsigned int*)(v18 * 4 + (int)&gvar_87D55E0);
                    __SyntheticTypeUnknownF v21 = v19 * gvar_804A938 - gvar_804A8DC;
                    gvar_87D556C(v21 + v21);
                    ++v18;
                }
                while(v18 <= 0x3ff);
                gvar_87D5568();
                v16 = gvar_87D5584(0x42b40000, 0, 0, 0x3f800000);
                ++v17;
            }
            while(v17 <= 1);
        }
        gvar_87D5594(0x4000, 0x1200, &gvar_804A8B8, v16);
        gvar_87D558C(0x4000, (int)v2, v5, v0);
        gvar_87D558C(2903);
        gvar_87D5584(0x41700000, 0, 0, 0x3f800000, v6);
        int v22 = 0;
        do {
            gvar_87D5584(0x41f00000, 0, 0, 0x3f800000);
            fsin();
            result = sub_8048B1E(gvar_804A900 * (double)v7 * gvar_804A8DC + gvar_804A8DC);
            ++v22;
        }
        while(v22 <= 11);
    }
    return result;
}

int sub_80491C0(int param0, int param1) {
    int v0;
    int result;
    int* ptr0 = &v0;
    void* __handle = →dlopen("libGL.so", 0);
    unsigned int* ptr1 = (unsigned int*)&gvar_87D5564;
    unsigned int* ptr2 = (unsigned int*)&gvar_804A945;
    while(1) {
        char* __name = *ptr2;
        ++ptr2;
        if(!__name) {
            return result;
        }
        void* ptr3 = →dlsym(__handle, __name);
        *ptr1 = ptr3;
        ++ptr1;
    }
    return result;
}
